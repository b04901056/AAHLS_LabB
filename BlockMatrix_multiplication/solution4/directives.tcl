############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
set_directive_pipeline "blockmatmul/loadB"
set_directive_pipeline "blockmatmul/writeoutput"
set_directive_array_reshape -type complete -dim 2 "blockmatmul" AB
set_directive_array_reshape -type complete -dim 1 "blockmatmul" AB
set_directive_pipeline "blockmatmul/loadA"
