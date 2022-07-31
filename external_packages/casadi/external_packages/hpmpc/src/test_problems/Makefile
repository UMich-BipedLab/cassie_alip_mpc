###################################################################################################
#                                                                                                 #
# This file is part of HPMPC.                                                                     #
#                                                                                                 #
# HPMPC -- Library for High-Performance implementation of solvers for MPC.                        #
# Copyright (C) 2014-2015 by Technical University of Denmark. All rights reserved.                #
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

include ../Makefile.rule

ifeq ($(REF_BLAS), 0)
LIBS = -lm 
endif
ifeq ($(REF_BLAS), OPENBLAS)
LIBS = /opt/openblas/lib/libopenblas.a -pthread -lm
endif
ifeq ($(REF_BLAS), BLIS)
LIBS = -lblis -lm -fopenmp
endif
ifeq ($(REF_BLAS), NETLIB)
LIBS = /opt/netlib/liblapack.a /opt/netlib/libblas.a -lgfortran -lm
endif
ifeq ($(REF_BLAS), MKL)
LIBS = -Wl,--start-group /opt/intel/mkl/lib/intel64/libmkl_gf_lp64.a /opt/intel/mkl/lib/intel64/libmkl_core.a /opt/intel/mkl/lib/intel64/libmkl_sequential.a -Wl,--end-group -ldl -lpthread -lm
endif

ifeq ($(USE_BLASFEO), 1)
LIBS += /opt/blasfeo/lib/libblasfeo.a
endif

# tested
#OBJS_TEST = test_blas_d.o
#OBJS_TEST = tools.o test_d_ric_mpc.o
OBJS_TEST = tools.o test_d_ip_hard.o

# old
#OBJS_TEST = test_blas_d_debug.o
#OBJS_TEST = test_blas_s_debug.o
#OBJS_TEST = test_blas_dsyrk_dpotrf.o
#OBJS_TEST = test_blas_d_low_rank.o
#OBJS_TEST = test_blas_s.o
#OBJS_TEST = tools.o test_d_forward_schur.o
#OBJS_TEST = tools.o test_s_ric_mpc.o
#OBJS_TEST = tools.o test_d_ric_mhe.o
#OBJS_TEST = tools.o test_d_ric_mpc_tim.o
#OBJS_TEST = tools.o test_d_cond.o
#OBJS_TEST = tools.o test_d_fact.o
#OBJS_TEST = tools.o test_d_cond_fact.o
#OBJS_TEST = tools.o test_d_part_cond.o
#OBJS_TEST = tools.o test_d_cond_mpc.o
#OBJS_TEST = tools.o test_s_ip_box.o
#OBJS_TEST = tools.o test_d_ip_soft.o
#OBJS_TEST = tools.o test_d_ip_diag_box.o
#OBJS_TEST = tools.o test_d_admm_box.o
#OBJS_TEST = tools.o test_s_admm_box.o
#OBJS_TEST = tools.o test_d_admm_soft.o
#OBJS_TEST = tools.o test_s_admm_soft.o

obj: $(OBJS_TEST)
	$(CC) -o test.out $(OBJS_TEST) -L. libhpmpc.a $(LIBS) #-pg

clean:
	rm -f *.o
	rm -f test.out
	rm -f libhpmpc.a

test_blas_d_debug.o: test_blas_d_debug.c test_param.h ../problem_size.h
test_blas_s_debug.o: test_blas_s_debug.c test_param.h ../problem_size.h
test_blas_d.o: test_blas_d.c test_param.h ../problem_size.h
test_blas_dsyrk_dpotrf.o: test_blas_dsyrk_dpotrf.c test_param.h ../problem_size.h
test_blas_s.o: test_blas_s.c test_param.h ../problem_size.h
test_d_ric_mpc.o: test_d_ric_mpc.c test_param.h ../problem_size.h
test_d_forward_schur.o: test_d_forward_schur.c test_param.h ../problem_size.h
test_s_ric_mpc.o: test_s_ric_mpc.c test_param.h ../problem_size.h
test_d_ric_mhe.o: test_d_ric_mhe.c test_param.h ../problem_size.h
test_d_ric_mpc_tim.o: test_d_ric_mpc_tim.c test_param.h ../problem_size.h
test_d_cond.o: test_d_cond.c test_param.h ../problem_size.h
test_d_fact.o: test_d_fact.c test_param.h ../problem_size.h
test_d_cond_fact.o: test_d_cond_fact.c test_param.h ../problem_size.h
test_d_part_cond.o: test_d_part_cond.c test_param.h ../problem_size.h
test_d_cond_mpc.o: test_d_cond_mpc.c test_param.h ../problem_size.h
test_d_ip_hard.o: test_d_ip_hard.c test_param.h ../problem_size.h
test_s_ip_box.o: test_s_ip_box.c test_param.h ../problem_size.h
test_d_ip_soft.o: test_d_ip_soft.c test_param.h ../problem_size.h
test_d_admm_box.o: test_d_admm_box.c test_param.h ../problem_size.h
test_s_admm_box.o: test_s_admm_box.c test_param.h ../problem_size.h
test_d_admm_soft.o: test_d_admm_soft.c test_param.h ../problem_size.h
test_s_admm_soft.o: test_s_admm_soft.c test_param.h ../problem_size.h

