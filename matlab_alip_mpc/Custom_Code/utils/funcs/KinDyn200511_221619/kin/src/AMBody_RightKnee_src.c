/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_RightKnee_src.h"

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
  double t135;
  double t310;
  double t714;
  double t836;
  double t1010;
  double t1210;
  double t1219;
  double t1685;
  double t2081;
  double t610;
  double t1040;
  double t1053;
  double t2157;
  double t3325;
  double t3426;
  double t3271;
  double t3539;
  double t4065;
  double t4122;
  double t4159;
  double t4172;
  double t4193;
  double t3370;
  double t3555;
  double t3875;
  double t4553;
  double t4558;
  double t2333;
  double t2390;
  double t4647;
  double t4684;
  double t4722;
  double t4384;
  double t4559;
  double t4620;
  double t5973;
  double t5991;
  double t6028;
  double t6100;
  double t6102;
  double t6141;
  double t6142;
  double t6195;
  double t6197;
  double t6211;
  double t6131;
  double t6148;
  double t6169;
  double t337;
  double t561;
  double t1218;
  double t2240;
  double t2259;
  double t2271;
  double t2352;
  double t2407;
  double t2420;
  double t2459;
  double t2465;
  double t2485;
  double t2721;
  double t3071;
  double t3960;
  double t4370;
  double t4374;
  double t4624;
  double t4765;
  double t4872;
  double t5017;
  double t5047;
  double t5152;
  double t5158;
  double t5235;
  double t5360;
  double t5614;
  double t5627;
  double t5669;
  double t5687;
  double t6103;
  double t6121;
  double t6186;
  double t6212;
  double t6213;
  double t6217;
  double t6235;
  double t6252;
  double t6262;
  double t6273;
  double t6275;
  double t6276;
  double t6278;
  double t6312;
  t135 = Sin(var1[14]);
  t310 = 0. + t135;
  t714 = Cos(var1[14]);
  t836 = -1.*t714;
  t1010 = 0. + t836;
  t1210 = Cos(var1[5]);
  t1219 = Sin(var1[13]);
  t1685 = t1010*t1219;
  t2081 = 0. + t1685;
  t610 = Cos(var1[13]);
  t1040 = t610*t1010;
  t1053 = 0. + t1040;
  t2157 = Sin(var1[5]);
  t3325 = Cos(var1[16]);
  t3426 = Sin(var1[15]);
  t3271 = Cos(var1[15]);
  t3539 = Sin(var1[16]);
  t4065 = t3325*t3426;
  t4122 = t3271*t3539;
  t4159 = 0. + t4065 + t4122;
  t4172 = t714*t4159;
  t4193 = 0. + t4172;
  t3370 = -1.*t3271*t3325;
  t3555 = t3426*t3539;
  t3875 = 0. + t3370 + t3555;
  t4553 = t135*t4159;
  t4558 = 0. + t4553;
  t2333 = Sin(var1[4]);
  t2390 = Cos(var1[4]);
  t4647 = t610*t3875;
  t4684 = t1219*t4558;
  t4722 = 0. + t4647 + t4684;
  t4384 = -1.*t1219*t3875;
  t4559 = t610*t4558;
  t4620 = 0. + t4384 + t4559;
  t5973 = t3271*t3325;
  t5991 = -1.*t3426*t3539;
  t6028 = 0. + t5973 + t5991;
  t6100 = t714*t6028;
  t6102 = 0. + t6100;
  t6141 = t135*t6028;
  t6142 = 0. + t6141;
  t6195 = t610*t4159;
  t6197 = t1219*t6142;
  t6211 = 0. + t6195 + t6197;
  t6131 = -1.*t1219*t4159;
  t6148 = t610*t6142;
  t6169 = 0. + t6131 + t6148;
  t337 = var2[13]*t310;
  t561 = var2[5]*t310;
  t1218 = t1053*t1210;
  t2240 = -1.*t2081*t2157;
  t2259 = 0. + t1218 + t2240;
  t2271 = var2[4]*t2259;
  t2352 = -1.*t310*t2333;
  t2407 = t1210*t2081;
  t2420 = t1053*t2157;
  t2459 = 0. + t2407 + t2420;
  t2465 = t2390*t2459;
  t2485 = 0. + t2352 + t2465;
  t2721 = var2[3]*t2485;
  t3071 = 0. + var2[15] + var2[16] + t337 + t561 + t2271 + t2721;
  t3960 = var2[14]*t3875;
  t4370 = var2[13]*t4193;
  t4374 = var2[5]*t4193;
  t4624 = t1210*t4620;
  t4765 = -1.*t4722*t2157;
  t4872 = 0. + t4624 + t4765;
  t5017 = var2[4]*t4872;
  t5047 = -1.*t4193*t2333;
  t5152 = t1210*t4722;
  t5158 = t4620*t2157;
  t5235 = 0. + t5152 + t5158;
  t5360 = t2390*t5235;
  t5614 = 0. + t5047 + t5360;
  t5627 = var2[3]*t5614;
  t5669 = 0. + t3960 + t4370 + t4374 + t5017 + t5627;
  t5687 = var2[14]*t4159;
  t6103 = var2[13]*t6102;
  t6121 = var2[5]*t6102;
  t6186 = t1210*t6169;
  t6212 = -1.*t6211*t2157;
  t6213 = 0. + t6186 + t6212;
  t6217 = var2[4]*t6213;
  t6235 = -1.*t6102*t2333;
  t6252 = t1210*t6211;
  t6262 = t6169*t2157;
  t6273 = 0. + t6252 + t6262;
  t6275 = t2390*t6273;
  t6276 = 0. + t6235 + t6275;
  t6278 = var2[3]*t6276;
  t6312 = 0. + t5687 + t6103 + t6121 + t6217 + t6278;
  p_output1[0]=-3.e-6*t3071 + 0.00216*t5669 + 0.000956*t6312;
  p_output1[1]=-1.e-6*t3071 + 0.000956*t5669 + 0.00144*t6312;
  p_output1[2]=0.00334*t3071 - 3.e-6*t5669 - 1.e-6*t6312;
}



void AMBody_RightKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
