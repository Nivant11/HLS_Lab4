#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/nnd25/ECE6775/lab4/ecelinux/bnn_reshape.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
