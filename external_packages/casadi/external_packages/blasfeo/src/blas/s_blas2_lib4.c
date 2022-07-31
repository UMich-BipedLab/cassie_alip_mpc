/**************************************************************************************************
*                                                                                                 *
* This file is part of BLASFEO.                                                                   *
*                                                                                                 *
* BLASFEO -- BLAS For Embedded Optimization.                                                      *
* Copyright (C) 2016 by Gianluca Frison.                                                          *
* Developed at IMTEK (University of Freiburg) under the supervision of Moritz Diehl and at        *
* DTU Compute (Technical University of Denmark) under the supervision of John Bagterp Jorgensen.  *
* All rights reserved.                                                                            *
*                                                                                                 *
* HPMPC is free software; you can redistribute it and/or                                          *
* modify it under the terms of the GNU Lesser General Public                                      *
* License as published by the Free Software Foundation; either                                    *
* version 2.1 of the License, or (at your option) any later version.                              *
*                                                                                                 *
* HPMPC is distributed in the hope that it will be useful,                                        *
* but WITHOUT ANY WARRANTY; without even the implied warranty of                                  *
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                                            *
* See the GNU Lesser General Public License for more details.                                     *
*                                                                                                 *
* You should have received a copy of the GNU Lesser General Public                                *
* License along with HPMPC; if not, write to the Free Software                                    *
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA                  *
*                                                                                                 *
* Author: Gianluca Frison, giaf (at) dtu.dk                                                       *
*                          gianluca.frison (at) imtek.uni-freiburg.de                             *
*                                                                                                 *
**************************************************************************************************/

#include "../include/blasfeo_s_kernel.h"



void sgemv_n_lib(int m, int n, float *pA, int sda, float *x, int alg, float *y, float *z)
	{

	if(m<=0)
		return;
	
	const int bs = 4;

	int i;

	i = 0;
	for( ; i<m-3; i+=4)
		{
		kernel_sgemv_n_4_lib4(n, &pA[i*sda], x, alg, &y[i], &z[i]);
		}
	if(i<m)
		{
		kernel_sgemv_n_4_vs_lib4(n, &pA[i*sda], x, alg, &y[i], &z[i], m-i);
		}
	
	}



void sgemv_t_lib(int m, int n, float *pA, int sda, float *x, int alg, float *y, float *z)
	{

	if(n<=0)
		return;
	
	const int bs = 4;

	int i;

	i = 0;
	for( ; i<n-3; i+=4)
		{
		kernel_sgemv_t_4_lib4(m, &pA[i*bs], sda, x, alg, &y[i], &z[i]);
		}
	if(i<n)
		{
		kernel_sgemv_t_4_vs_lib4(m, &pA[i*bs], sda, x, alg, &y[i], &z[i], n-i);
		}
	
	}



void strsv_ln_inv_lib(int m, int n, float *pA, int sda, float *inv_diag_A, float *x, float *y)
	{

	if(m<=0 || n<=0)
		return;
	
	// suppose m>=n
	if(m<n)
		m = n;

	const int bs = 4;

	int i;

	if(x!=y)
		{
		for(i=0; i<m; i++)
			y[i] = x[i];
		}
	
	i = 0;
	for( ; i<n-3; i+=4)
		{
		kernel_strsv_ln_inv_4_lib4(i, &pA[i*sda], &inv_diag_A[i], x, &y[i], &y[i]);
		}
	if(i<n)
		{
		kernel_strsv_ln_inv_4_vs_lib4(i, &pA[i*sda], &inv_diag_A[i], x, &y[i], &y[i], m-i, n-i);
		i+=4;
		}
	for( ; i<m-3; i+=4)
		{
		kernel_sgemv_n_4_lib4(n, &pA[i*sda], x, -1, &y[i], &y[i]);
		}
	if(i<m)
		{
		kernel_sgemv_n_4_vs_lib4(n, &pA[i*sda], x, -1, &y[i], &y[i], m-i);
		i+=4;
		}

	}



void strsv_lt_inv_lib(int m, int n, float *pA, int sda, float *inv_diag_A, float *x, float *y)
	{

	if(m<=0 || n<=0)
		return;

	if(n>m)
		n = m;
	
	const int bs = 4;
	
	int i;
	
	if(x!=y)
		for(i=0; i<m; i++)
			y[i] = x[i];
			
	i=0;
	if(n%4==1)
		{
		kernel_strsv_lt_inv_1_lib4(m-n+i+1, &pA[n/bs*bs*sda+(n-i-1)*bs], sda, &inv_diag_A[n-i-1], &y[n-i-1], &y[n-i-1], &y[n-i-1]);
		i++;
		}
	else if(n%4==2)
		{
		kernel_strsv_lt_inv_2_lib4(m-n+i+2, &pA[n/bs*bs*sda+(n-i-2)*bs], sda, &inv_diag_A[n-i-2], &y[n-i-2], &y[n-i-2], &y[n-i-2]);
		i+=2;
		}
	else if(n%4==3)
		{
		kernel_strsv_lt_inv_3_lib4(m-n+i+3, &pA[n/bs*bs*sda+(n-i-3)*bs], sda, &inv_diag_A[n-i-3], &y[n-i-3], &y[n-i-3], &y[n-i-3]);
		i+=3;
		}
	for(; i<n-3; i+=4)
		{
		kernel_strsv_lt_inv_4_lib4(m-n+i+4, &pA[(n-i-4)/bs*bs*sda+(n-i-4)*bs], sda, &inv_diag_A[n-i-4], &y[n-i-4], &y[n-i-4], &y[n-i-4]);
		}

	}



void strmv_un_lib(int m, float *pA, int sda, float *x, int alg, float *y, float *z)
	{

	if(m<=0)
		return;

	const int bs = 4;
	
	int i;
	
	i=0;
	for(; i<m-3; i+=4)
		{
		kernel_strmv_un_4_lib4(m-i, pA, x, alg, y, z);
		pA += 4*sda+4*4;
		x  += 4;
		y  += 4;
		z  += 4;
		}
	if(m>i)
		{
		if(m-i==1)
			{
			if(alg==0)
				{
				z[0] = pA[0+bs*0]*x[0];
				}
			else if(alg==1)
				{
				z[0] = y[0] + pA[0+bs*0]*x[0];
				}
			else
				{
				z[0] = y[0] - pA[0+bs*0]*x[0];
				}
			}
		else if(m-i==2)
			{
			if(alg==0)
				{
				z[0] = pA[0+bs*0]*x[0] + pA[0+bs*1]*x[1];
				z[1] = pA[1+bs*1]*x[1];
				}
			else if(alg==1)
				{
				z[0] = y[0] + pA[0+bs*0]*x[0] + pA[0+bs*1]*x[1];
				z[1] = y[1] + pA[1+bs*1]*x[1];
				}
			else
				{
				z[0] = y[0] - pA[0+bs*0]*x[0] + pA[0+bs*1]*x[1];
				z[1] = y[1] - pA[1+bs*1]*x[1];
				}
			}
		else // if(m-i==3)
			{
			if(alg==0)
				{
				z[0] = pA[0+bs*0]*x[0] + pA[0+bs*1]*x[1] + pA[0+bs*2]*x[2];
				z[1] = pA[1+bs*1]*x[1] + pA[1+bs*2]*x[2];
				z[2] = pA[2+bs*2]*x[2];
				}
			else if(alg==1)
				{
				z[0] = y[0] + pA[0+bs*0]*x[0] + pA[0+bs*1]*x[1] + pA[0+bs*2]*x[2];
				z[1] = y[1] + pA[1+bs*1]*x[1] + pA[1+bs*2]*x[2];
				z[2] = y[2] + pA[2+bs*2]*x[2];
				}
			else
				{
				z[0] = y[0] - pA[0+bs*0]*x[0] + pA[0+bs*1]*x[1] + pA[0+bs*2]*x[2];
				z[1] = y[1] - pA[1+bs*1]*x[1] + pA[1+bs*2]*x[2];
				z[2] = y[2] - pA[2+bs*2]*x[2];
				}
			}
		}

	}



void strmv_ut_lib(int m, float *pA, int sda, float *x, int alg, float *y, float *z)
	{

	if(m<=0)
		return;

	const int bs = 4;
	
	int i;
	
	float *ptrA;
	
	i=0;
	for(; i<m-3; i+=4)
		{
		kernel_strmv_ut_4_lib4(i+4, pA, sda, x, alg, y, z);
		pA += 4*bs;
		y  += bs;
		z  += bs;
		}
	if(i<m)
		{
		kernel_strmv_ut_4_vs_lib4(m, pA, sda, x, alg, y, z, m-i);
		}

	}




