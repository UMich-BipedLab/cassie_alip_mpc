/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_LeftHip_src.h"

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
  double t999;
  double t1233;
  double t1373;
  double t1188;
  double t2372;
  double t1408;
  double t4582;
  double t4594;
  double t1246;
  double t1521;
  double t1826;
  double t2509;
  double t3002;
  double t4298;
  double t4443;
  double t4500;
  double t4505;
  double t4528;
  double t4536;
  double t4650;
  double t4685;
  double t4694;
  double t4835;
  double t4847;
  double t4904;
  double t4915;
  double t5126;
  double t5127;
  double t5157;
  double t5166;
  double t5174;
  double t5177;
  double t5179;
  double t5189;
  double t5196;
  double t5205;
  double t5206;
  double t5221;
  double t5227;
  double t5229;
  double t5233;
  double t5236;
  double t5238;
  double t5239;
  double t5197;
  double t5295;
  double t5303;
  double t5305;
  double t5310;
  double t5312;
  double t5316;
  double t5318;
  double t5320;
  double t5321;
  double t5323;
  double t5375;
  double t5379;
  double t5390;
  double t5437;
  double t5441;
  double t5442;
  double t5445;
  double t5453;
  double t5459;
  double t5460;
  double t5469;
  double t5475;
  double t5483;
  double t5484;
  t999 = Sin(var1[4]);
  t1233 = Cos(var1[6]);
  t1373 = Sin(var1[5]);
  t1188 = Cos(var1[5]);
  t2372 = Cos(var1[7]);
  t1408 = Sin(var1[6]);
  t4582 = Cos(var1[4]);
  t4594 = Sin(var1[7]);
  t1246 = -1.*t1188*t1233;
  t1521 = t1373*t1408;
  t1826 = 0. + t1246 + t1521;
  t2509 = -1.*t1233*t2372;
  t3002 = 0. + t2509;
  t4298 = t3002*t1373;
  t4443 = -1.*t2372*t1408;
  t4500 = 0. + t4443;
  t4505 = t1188*t4500;
  t4528 = 0. + t4298 + t4505;
  t4536 = -1.*t999*t4528;
  t4650 = 0. + t4594;
  t4685 = -1.*t4582*t4650;
  t4694 = t4536 + t4685;
  t4835 = t1233*t4594;
  t4847 = 0. + t4835;
  t4904 = t1408*t4594;
  t4915 = 0. + t4904;
  t5126 = t1233*t1373;
  t5127 = t1188*t1408;
  t5157 = t5126 + t5127;
  t5166 = var2[3]*t4582*t5157;
  t5174 = t1188*t1233;
  t5177 = -1.*t1373*t1408;
  t5179 = t5174 + t5177;
  t5189 = var2[4]*t5179;
  t5196 = t5166 + t5189;
  t5205 = -1.*t3002*t1373;
  t5206 = -1.*t1188*t4500;
  t5221 = t5205 + t5206;
  t5227 = var2[4]*t5221;
  t5229 = t1188*t3002;
  t5233 = -1.*t1373*t4500;
  t5236 = t5229 + t5233;
  t5238 = var2[3]*t4582*t5236;
  t5239 = t5227 + t5238;
  t5197 = 0.000842*t5196;
  t5295 = -1.e-6*t5196;
  t5303 = t1233*t2372*t1373;
  t5305 = t1188*t2372*t1408;
  t5310 = t5303 + t5305;
  t5312 = var2[4]*t5310;
  t5316 = -1.*t1188*t1233*t2372;
  t5318 = t2372*t1373*t1408;
  t5320 = t5316 + t5318;
  t5321 = var2[3]*t4582*t5320;
  t5323 = t5312 + t5321;
  t5375 = t1188*t1233*t4594;
  t5379 = -1.*t1373*t1408*t4594;
  t5390 = t5375 + t5379;
  t5437 = var2[5]*t2372;
  t5441 = var2[6]*t2372;
  t5442 = var2[4]*t5390;
  t5445 = -1.*t2372*t999;
  t5453 = t1233*t1373*t4594;
  t5459 = t1188*t1408*t4594;
  t5460 = t5453 + t5459;
  t5469 = t4582*t5460;
  t5475 = t5445 + t5469;
  t5483 = var2[3]*t5475;
  t5484 = t5437 + t5441 + t5442 + t5483;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=-1.e-6*t4694*var2[3] - 0.000842*t1826*t999*var2[3];
  p_output1[13]=0.00608*(-1.*(0. + t2372)*t4582 - 1.*(0. + t1373*t4847 + t1188*t4915)*t999)*var2[3];
  p_output1[14]=0.00644*t4694*var2[3] + 1.e-6*t1826*t999*var2[3];
  p_output1[15]=t5197 - 1.e-6*t5239;
  p_output1[16]=0.00608*(t4582*(t1188*t4847 - 1.*t1373*t4915)*var2[3] + (-1.*t1373*t4847 - 1.*t1188*t4915)*var2[4]);
  p_output1[17]=0.00644*t5239 + t5295;
  p_output1[18]=t5197 - 1.e-6*t5323;
  p_output1[19]=0.00608*(t4582*t5390*var2[3] + (-1.*t1233*t1373*t4594 - 1.*t1188*t1408*t4594)*var2[4]);
  p_output1[20]=t5295 + 0.00644*t5323;
  p_output1[21]=-1.e-6*t5484;
  p_output1[22]=0.00608*((t4582*t5310 + t4594*t999)*var2[3] + (t1188*t1233*t2372 - 1.*t1373*t1408*t2372)*var2[4] - 1.*t4594*var2[5] - 1.*t4594*var2[6]);
  p_output1[23]=0.00644*t5484;
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



void Jq_AMBody_LeftHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
