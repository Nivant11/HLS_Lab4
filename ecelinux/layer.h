//===========================================================================
// layer.h
//===========================================================================
// @brief: This header file defines the interface for the core functions.

#ifndef LAYER_H
#define LAYER_H

#include "model.h"
#include "typedefs.h"

//----------------------------------------------------------
// Padding
//----------------------------------------------------------
// @param[in] : input - input fmaps
//              M - number of input fmaps
//              I - width of input fmaps
// @param[out] : output - output fmaps
template <int M, int I>
void pad(bit input[M][I][I], bit output[M][I + F_PAD][I + F_PAD]) {
  LOOP_PAD_M:
  for (int m = 0; m < M; m++) {
    LOOP_PAD_X:
    for (int x = 0; x < I; x++) {
      LOOP_PAD_Y:
      for (int y = 0; y < I; y++) {
        output[m][y + F_PAD / 2][x + F_PAD / 2] = input[m][y][x];
      }
    }
  }
}

//----------------------------------------------------------
// Initialize Padded Memory with Constant
//----------------------------------------------------------
// @param[in] : input - input fmaps to be initialized
// @param[out] : output - output fmaps
template <int M, int I, int C>
void initialize_padded_memory(bit input[M][I][I]) {
  LOOP_PAD_INIT_M:
  for (int m = 0; m < M; m++) {
    LOOP_PAD_INIT_X:
    for (int x = 0; x < I; x++) {
      LOOP_PAD_INIT_Y:
      for (int y = 0; y < I; y++) {
        input[m][x][y] = C;
      }
    }
  }
}

//----------------------------------------------------------
// Perform Convolution Layer
//----------------------------------------------------------
// @param[in] : input - input fmaps
//              threshold - threshold for batchnorm operation
//              M - number of input fmaps
//              N - number of output fmaps
//              I - width of input fmaps
//              weight - layer weights
// @param[out] : output - output fmaps
template <int M, int N, int I>
void conv(bit input[M][I][I], bit output[N][I - F + 1][I - F + 1],
          const bit8_t threshold[N], const bit weight[M][N][F][F]) {
  int num_accum = F * F * M;
  for (int n = 0; n < N; n++) {
    for (int x = 0; x < I - F + 1; x++) {
      for (int y = 0; y < I - F + 1; y++) {
        bit16_t accum = 0;
        for (int c = 0; c < F; c++) {
          #pragma HLS pipeline
          for (int r = 0; r < F; r++) {
            #pragma HLS unroll
            for (int m = 0; m < M; m++) {
              #pragma HLS unroll
              accum += input[m][y + r][x + c] == weight[m][n][r][c];
            }
          }
        }
        accum = (accum << 1) - num_accum;
        output[n][y][x] = accum > threshold[n] ? 1 : 0;
      }
    }
  }
}
//----------------------------------------------------------
// Max pooling
//----------------------------------------------------------
// @param[in] : input - input fmaps
//              M - number of input fmaps
//              I - width of input fmaps
// @param[out] : output - output fmaps
template <int M, int I>
void max_pool(bit input[M][I][I], bit output[M][I / 2][I / 2]) {

  LOOP_MP_M:
  for (int m = 0; m < M; m++) {
    LOOP_MP_X:
    for (int x = 0; x < I / 2; x++) {
      LOOP_MP_Y:
      for (int y = 0; y < I / 2; y++) {
        #pragma HLS pipeline
        bit max = 0;
        LOOP_MP_C:
        for (int c = 0; c < 2; c++) {
          #pragma HLS unroll
          LOOP_MP_R:
          for (int r = 0; r < 2; r++) {
            #pragma HLS unroll
            if (input[m][2 * y + r][2 * x + c])
              max = 1;
          }
        }
        output[m][y][x] = max;
      }
    }
  }
}

//----------------------------------------------------------
// Flatten the Output from Conv Layer
//----------------------------------------------------------
// @param[in] : input - output fmaps from the last conv layer
// @param[out] : output - input famps of the first dense layer

void flatten(bit input[O_CHANNEL2][O_WIDTH][O_WIDTH], bit output[I_UNITS1]) {
  LOOP_F_C:
  for (int c = 0; c < O_CHANNEL2; c++) {
    LOOP_F_Y:
    for (int y = 0; y < O_WIDTH; y++) {
      LOOP_F_X:
      for (int x = 0; x < O_WIDTH; x++) {
        int o_index = c + (x + y * O_WIDTH) * O_CHANNEL2;
        output[o_index] = input[c][y][x];
      }
    }
  }
}

//----------------------------------------------------------
// Perform Sign Layer
//----------------------------------------------------------
// @param[in] : input - input fmaps
//              M - number of input and output channels
// @param[out] : output - output fmaps

template <int M> void sign(bit16_t input[M], bit output[M]) {
  #pragma HLS array_partition variable=input complete dim=1
  #pragma HLS array_partition variable=output complete dim=1

  LOOP_SIGN:
  for (int m = 0; m < M; m++) {
    #pragma HLS UNROLL
    output[m] = (input[m] > 0) ? 1 : 0;
  }
}

//----------------------------------------------------------
// Perform Argmax Layer
//----------------------------------------------------------
// @param[in] : input - input channels
// @param[out] : output - argmax of the inputs

bit4_t argmax(bit16_t input[NUM_DIGITS]) {
  bit16_t max = input[0];
  bit4_t max_id = 0;
  
  LOOP_ARGMAX:
  for (int i = 1; i < NUM_DIGITS; i++) {
    if (input[i] > max) {
      max = input[i];
      max_id = i;
    }
  }
  return max_id;
}

//----------------------------------------------------------
// Perform Dense Layer
//----------------------------------------------------------
// @param[in] : input - input fmaps
//              M - number of input fmaps
//              N - number of output fmaps
//              weight - layer weights
// @param[out] : output - output fmaps

template <int M, int N>
void dense(bit input[M], bit16_t output[N], const bit weight[M][N]) {
  #pragma HLS array_partition variable=weight complete dim=1
  #pragma HLS array_partition variable=input  complete dim=1

  LOOP_D_N: for (int n = 0; n < N; n++) {
    bit16_t accum = 0;
    LOOP_D_M: for (int m = 0; m < M; m++) {
      #pragma HLS UNROLL
      accum += input[m] == weight[m][n]; // XNOR
    }
    output[n] = (accum << 1) - M;
  }
}

#endif
