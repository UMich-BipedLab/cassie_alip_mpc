/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:00 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_LeftPelvisRotation_src.h"

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
  double t572;
  double t2621;
  double t2154;
  double t2243;
  double t2639;
  double t556;
  double t730;
  double t3784;
  double t965;
  double t1986;
  double t2613;
  double t2666;
  double t2703;
  double t2841;
  double t2985;
  double t3220;
  double t3222;
  double t3315;
  double t3400;
  double t3449;
  double t4564;
  double t4829;
  double t4986;
  double t3787;
  double t4003;
  double t4058;
  double t2024;
  double t3084;
  double t3630;
  double t3649;
  double t5095;
  double t5120;
  double t5170;
  double t5389;
  double t6226;
  double t6258;
  double t6473;
  double t5784;
  double t5793;
  double t5820;
  double t5420;
  double t5425;
  double t5428;
  double t5434;
  double t5392;
  double t5397;
  double t5419;
  double t9400;
  double t9403;
  double t9410;
  double t4172;
  double t4996;
  double t5005;
  double t9414;
  double t9420;
  double t9423;
  double t6909;
  double t7110;
  double t7497;
  double t9434;
  double t9443;
  double t9448;
  double t5902;
  double t6522;
  double t6712;
  double t9456;
  double t9479;
  double t9480;
  double t9016;
  double t9131;
  double t9162;
  double t8674;
  double t8723;
  double t8836;
  double t9513;
  double t9514;
  double t9521;
  double t9522;
  double t9525;
  double t9529;
  double t9532;
  double t9533;
  double t9536;
  double t9537;
  double t9538;
  double t9539;
  t572 = Cos(var1[4]);
  t2621 = Cos(var1[5]);
  t2154 = Cos(var1[6]);
  t2243 = Sin(var1[5]);
  t2639 = Sin(var1[6]);
  t556 = Cos(var1[3]);
  t730 = Sin(var1[4]);
  t3784 = Sin(var1[3]);
  t965 = -1.*t730;
  t1986 = 0. + t965;
  t2613 = t2154*t2243;
  t2666 = t2621*t2639;
  t2703 = 0. + t2613 + t2666;
  t2841 = t572*t2703;
  t2985 = 0. + t2841;
  t3220 = t2621*t2154;
  t3222 = -1.*t2243*t2639;
  t3315 = 0. + t3220 + t3222;
  t3400 = t572*t3315;
  t3449 = 0. + t3400;
  t4564 = t556*t2621*t730;
  t4829 = t3784*t2243;
  t4986 = t4564 + t4829;
  t3787 = -1.*t2621*t3784;
  t4003 = t556*t730*t2243;
  t4058 = t3787 + t4003;
  t2024 = 0.00272*t1986;
  t3084 = 1.e-6*t2985;
  t3630 = 2.e-6*t3449;
  t3649 = t2024 + t3084 + t3630;
  t5095 = 1.e-6*t1986;
  t5120 = 0.00559*t2985;
  t5170 = 3.e-6*t3449;
  t5389 = t5095 + t5120 + t5170;
  t6226 = t2621*t3784*t730;
  t6258 = -1.*t556*t2243;
  t6473 = t6226 + t6258;
  t5784 = t556*t2621;
  t5793 = t3784*t730*t2243;
  t5820 = t5784 + t5793;
  t5420 = 2.e-6*t1986;
  t5425 = 3.e-6*t2985;
  t5428 = 0.00464*t3449;
  t5434 = t5420 + t5425 + t5428;
  t5392 = t2154*t4986;
  t5397 = -1.*t4058*t2639;
  t5419 = t5392 + t5397;
  t9400 = -1.*t2154*t2243;
  t9403 = -1.*t2621*t2639;
  t9410 = 0. + t9400 + t9403;
  t4172 = t2154*t4058;
  t4996 = t4986*t2639;
  t5005 = t4172 + t4996;
  t9414 = 2.e-6*t9410;
  t9420 = 1.e-6*t3315;
  t9423 = t9414 + t9420;
  t6909 = t2154*t6473;
  t7110 = -1.*t5820*t2639;
  t7497 = t6909 + t7110;
  t9434 = 0.00464*t9410;
  t9443 = 3.e-6*t3315;
  t9448 = t9434 + t9443;
  t5902 = t2154*t5820;
  t6522 = t6473*t2639;
  t6712 = t5902 + t6522;
  t9456 = 3.e-6*t9410;
  t9479 = 0.00559*t3315;
  t9480 = t9456 + t9479;
  t9016 = t572*t2621*t2154;
  t9131 = -1.*t572*t2243*t2639;
  t9162 = t9016 + t9131;
  t8674 = t572*t2154*t2243;
  t8723 = t572*t2621*t2639;
  t8836 = t8674 + t8723;
  t9513 = 0.00272*t556*t572;
  t9514 = 1.e-6*t5005;
  t9521 = 2.e-6*t5419;
  t9522 = t9513 + t9514 + t9521;
  t9525 = 0.00272*t572*t3784;
  t9529 = 1.e-6*t6712;
  t9532 = 2.e-6*t7497;
  t9533 = t9525 + t9529 + t9532;
  t9536 = -0.00272*t730;
  t9537 = 1.e-6*t8836;
  t9538 = 2.e-6*t9162;
  t9539 = t9536 + t9537 + t9538;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t5005*t5389 + t5419*t5434 + t3649*t556*t572;
  p_output1[10]=t3649*t3784*t572 + t5389*t6712 + t5434*t7497;
  p_output1[11]=-1.*t3649*t730 + t5389*t8836 + t5434*t9162;
  p_output1[12]=t556*t572*t9423 + t5419*t9448 + t5005*t9480;
  p_output1[13]=t3784*t572*t9423 + t7497*t9448 + t6712*t9480;
  p_output1[14]=-1.*t730*t9423 + t9162*t9448 + t8836*t9480;
  p_output1[15]=t9522;
  p_output1[16]=t9533;
  p_output1[17]=t9539;
  p_output1[18]=t9522;
  p_output1[19]=t9533;
  p_output1[20]=t9539;
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



void Jdq_AMWorld_LeftPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
