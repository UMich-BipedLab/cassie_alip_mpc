/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMWorld_Pelvis_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1035;
  double t2939;
  double t4208;
  double t1098;
  double t1131;
  double t1135;
  double t1714;
  double t3147;
  double t4286;
  double t4299;
  double t4552;
  double t4656;
  double t4695;
  double t4846;
  double t1906;
  double t4344;
  double t4731;
  double t4798;
  double t5074;
  double t5108;
  double t5110;
  double t5111;
  double t5398;
  double t5547;
  double t5635;
  double t5638;
  double t5846;
  double t5921;
  double t5996;
  double t6060;
  double t6084;
  double t6109;
  double t6224;
  double t6227;
  double t6292;
  double t6298;
  double t6335;
  double t6344;
  double t6350;
  double t6361;
  double t6458;
  double t6535;
  double t6611;
  double t6710;
  double t8195;
  double t8240;
  double t8261;
  double t8277;
  double t7111;
  double t7123;
  double t7124;
  double t8233;
  double t8291;
  double t8314;
  double t8389;
  double t8400;
  double t8418;
  double t6989;
  double t7007;
  double t7008;
  double t8443;
  double t8479;
  double t8480;
  double t5136;
  double t5303;
  double t5378;
  t1035 = Cos(var1[4]);
  t2939 = Cos(var1[5]);
  t4208 = Sin(var1[5]);
  t1098 = Sin(var1[3]);
  t1131 = Sin(var1[4]);
  t1135 = -1.*var2[3]*t1131;
  t1714 = var2[5] + t1135;
  t3147 = var2[3]*t1035*t2939;
  t4286 = -1.*var2[4]*t4208;
  t4299 = 0. + t3147 + t4286;
  t4552 = var2[4]*t2939;
  t4656 = var2[3]*t1035*t4208;
  t4695 = 0. + t4552 + t4656;
  t4846 = Cos(var1[3]);
  t1906 = 0.0942*t1714;
  t4344 = 0.015*t4299;
  t4731 = 0.000169*t4695;
  t4798 = t1906 + t4344 + t4731;
  t5074 = 0.015*t1714;
  t5108 = 0.113*t4299;
  t5110 = 0.000516*t4695;
  t5111 = t5074 + t5108 + t5110;
  t5398 = 0.000169*t1714;
  t5547 = 0.000516*t4299;
  t5635 = 0.084*t4695;
  t5638 = t5398 + t5547 + t5635;
  t5846 = t4846*t2939*t1131;
  t5921 = t1098*t4208;
  t5996 = t5846 + t5921;
  t6060 = -1.*t2939*t1098;
  t6084 = t4846*t1131*t4208;
  t6109 = t6060 + t6084;
  t6224 = -0.015*var2[3]*t1035;
  t6227 = -0.113*var2[3]*t2939*t1131;
  t6292 = -0.000516*var2[3]*t1131*t4208;
  t6298 = t6224 + t6227 + t6292;
  t6335 = -0.0942*var2[3]*t1035;
  t6344 = -0.015*var2[3]*t2939*t1131;
  t6350 = -0.000169*var2[3]*t1131*t4208;
  t6361 = t6335 + t6344 + t6350;
  t6458 = -0.000169*var2[3]*t1035;
  t6535 = -0.000516*var2[3]*t2939*t1131;
  t6611 = -0.084*var2[3]*t1131*t4208;
  t6710 = t6458 + t6535 + t6611;
  t8195 = t3147 + t4286;
  t8240 = -1.*var2[4]*t2939;
  t8261 = -1.*var2[3]*t1035*t4208;
  t8277 = t8240 + t8261;
  t7111 = t4846*t2939;
  t7123 = t1098*t1131*t4208;
  t7124 = t7111 + t7123;
  t8233 = 0.084*t8195;
  t8291 = 0.000516*t8277;
  t8314 = t8233 + t8291;
  t8389 = 0.000169*t8195;
  t8400 = 0.015*t8277;
  t8418 = t8389 + t8400;
  t6989 = t2939*t1098*t1131;
  t7007 = -1.*t4846*t4208;
  t7008 = t6989 + t7007;
  t8443 = 0.000516*t8195;
  t8479 = 0.113*t8277;
  t8480 = t8443 + t8479;
  t5136 = -1.*t4846*t2939;
  t5303 = -1.*t1098*t1131*t4208;
  t5378 = t5136 + t5303;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-1.*t1035*t1098*t4798 + (-1.*t1098*t1131*t2939 + t4208*t4846)*t5111 + t5378*t5638;
  p_output1[10]=t1035*t4798*t4846 + t5111*t5996 + t5638*t6109;
  p_output1[11]=0;
  p_output1[12]=-1.*t1131*t4798*t4846 + t1035*t2939*t4846*t5111 + t1035*t4208*t4846*t5638 + t5996*t6298 + t1035*t4846*t6361 + t6109*t6710;
  p_output1[13]=-1.*t1098*t1131*t4798 + t1035*t1098*t2939*t5111 + t1035*t1098*t4208*t5638 + t1035*t1098*t6361 + t6298*t7008 + t6710*t7124;
  p_output1[14]=-1.*t1035*t4798 - 1.*t1131*t2939*t5111 - 1.*t1131*t4208*t5638 + t1035*t2939*t6298 - 1.*t1131*t6361 + t1035*t4208*t6710;
  p_output1[15]=(t1098*t2939 - 1.*t1131*t4208*t4846)*t5111 + t5638*t5996 + t6109*t8314 + t1035*t4846*t8418 + t5996*t8480;
  p_output1[16]=t5111*t5378 + t5638*t7008 + t7124*t8314 + t1035*t1098*t8418 + t7008*t8480;
  p_output1[17]=-1.*t1035*t4208*t5111 + t1035*t2939*t5638 + t1035*t4208*t8314 - 1.*t1131*t8418 + t1035*t2939*t8480;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jq_AMWorld_Pelvis_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
