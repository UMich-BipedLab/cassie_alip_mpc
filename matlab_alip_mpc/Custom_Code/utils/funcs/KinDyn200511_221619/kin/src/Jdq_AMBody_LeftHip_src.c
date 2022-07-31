/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:25 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMBody_LeftHip_src.h"

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
  double t738;
  double t1521;
  double t1760;
  double t1115;
  double t3146;
  double t1930;
  double t5019;
  double t5020;
  double t1746;
  double t1944;
  double t2181;
  double t2825;
  double t2860;
  double t3526;
  double t4298;
  double t4566;
  double t4739;
  double t4900;
  double t4904;
  double t4931;
  double t5004;
  double t5039;
  double t5042;
  double t5070;
  double t5166;
  double t5174;
  double t5189;
  double t5197;
  double t5283;
  double t5285;
  double t5286;
  double t5293;
  double t5294;
  double t5295;
  double t5127;
  double t5327;
  double t5351;
  double t5363;
  t738 = Cos(var1[4]);
  t1521 = Cos(var1[6]);
  t1760 = Sin(var1[5]);
  t1115 = Cos(var1[5]);
  t3146 = Cos(var1[7]);
  t1930 = Sin(var1[6]);
  t5019 = Sin(var1[4]);
  t5020 = Sin(var1[7]);
  t1746 = -1.*t1115*t1521;
  t1944 = t1760*t1930;
  t2181 = 0. + t1746 + t1944;
  t2825 = t738*t2181;
  t2860 = 0. + t2825;
  t3526 = -1.*t1521*t3146;
  t4298 = 0. + t3526;
  t4566 = t4298*t1760;
  t4739 = -1.*t3146*t1930;
  t4900 = 0. + t4739;
  t4904 = t1115*t4900;
  t4931 = 0. + t4566 + t4904;
  t5004 = t738*t4931;
  t5039 = 0. + t5020;
  t5042 = -1.*t5019*t5039;
  t5070 = 0. + t5004 + t5042;
  t5166 = t1521*t5020;
  t5174 = 0. + t5166;
  t5189 = t1930*t5020;
  t5197 = 0. + t5189;
  t5283 = t1521*t1760;
  t5285 = t1115*t1930;
  t5286 = 0. + t5283 + t5285;
  t5293 = t1115*t4298;
  t5294 = -1.*t1760*t4900;
  t5295 = 0. + t5293 + t5294;
  t5127 = 0. + t3146;
  t5327 = -1.e-6*t5039;
  t5351 = 0.00608*t5127;
  t5363 = 0.00644*t5039;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.000842*t2860 - 1.e-6*t5070;
  p_output1[10]=0.00608*(0. - 1.*t5019*t5127 + (0. + t1760*t5174 + t1115*t5197)*t738);
  p_output1[11]=-1.e-6*t2860 + 0.00644*t5070;
  p_output1[12]=0.000842*t5286 - 1.e-6*t5295;
  p_output1[13]=0.00608*(0. + t1115*t5174 - 1.*t1760*t5197);
  p_output1[14]=-1.e-6*t5286 + 0.00644*t5295;
  p_output1[15]=t5327;
  p_output1[16]=t5351;
  p_output1[17]=t5363;
  p_output1[18]=t5327;
  p_output1[19]=t5351;
  p_output1[20]=t5363;
  p_output1[21]=-0.000842;
  p_output1[22]=0;
  p_output1[23]=1.e-6;
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



void Jdq_AMBody_LeftHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
