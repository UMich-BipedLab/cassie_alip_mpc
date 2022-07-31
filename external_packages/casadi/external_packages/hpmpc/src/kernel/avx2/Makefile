###################################################################################################
#                                                                                                 #
# This file is part of HPMPC.                                                                     #
#                                                                                                 #
# HPMPC -- Library for High-Performance implementation of solvers for MPC.                        #
# Copyright (C) 2014 by Technical University of Denmark. All rights reserved.                     #
#                                                                                                 #
# HPMPC is free software; you can redistribute it and/or                                          #
# modify it under the terms of the GNU Lesser General Public                                      #
# License as published by the Free Software Foundation; either                                    #
# version 2.1 of the License, or (at your option) any later version.                              #
#                                                                                                 #
# HPMPC is distributed in the hope that it will be useful,                                        #
# but WITHOUT ANY WARRANTY; without even the implied warranty of                                  #
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                                            #
# See the GNU Lesser General Public License for more details.                                     #
#                                                                                                 #
# You should have received a copy of the GNU Lesser General Public                                #
# License along with HPMPC; if not, write to the Free Software                                    #
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA                  #
#                                                                                                 #
# Author: Gianluca Frison, giaf (at) dtu.dk                                                       #
#                                                                                                 #
###################################################################################################

include ../../Makefile.rule

ifeq ($(TARGET), X64_AVX2)
OBJS_DOUBLE = kernel_dgemm_avx2_lib4.o kernel_dtrmm_avx2_lib4.o kernel_dtrsm_avx2_lib4.o kernel_dsyrk_avx2_lib4.o kernel_dpotrf_avx2_lib4.o kernel_dgemv_avx2_lib4.o kernel_dtrmv_avx2_lib4.o kernel_dtrsv_avx2_lib4.o kernel_dsymv_avx2_lib4.o kernel_dtran_avx2_lib4.o kernel_dttmm_avx2_lib4.o kernel_dtrinv_avx2_lib4.o kernel_dgetrf_avx2_lib4.o
OBJS_SINGLE = #kernel_sgemm_avx2_lib8.o kernel_strmm_avx2_lib8.o kernel_sgemm_strsm_avx2_lib8.o kernel_ssyrk_spotrf_avx2_lib8.o kernel_sgemv_avx_lib8.o kernel_strmv_avx_lib8.o kernel_strsv_avx_lib8.o kernel_ssymv_avx_lib8.o kernel_stran_avx2_lib8.o 
endif

obj: $(OBJS_DOUBLE) $(OBJS_SINGLE)

clean:
	rm -f *.o

