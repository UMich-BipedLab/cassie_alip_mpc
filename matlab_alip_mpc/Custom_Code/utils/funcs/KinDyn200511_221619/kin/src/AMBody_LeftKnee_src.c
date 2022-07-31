/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:21 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_LeftKnee_src.h"

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
  double t275;
  double t301;
  double t381;
  double t1873;
  double t1897;
  double t57;
  double t430;
  double t610;
  double t846;
  double t50;
  double t1110;
  double t1213;
  double t1555;
  double t3181;
  double t3299;
  double t3067;
  double t3359;
  double t4168;
  double t4269;
  double t4385;
  double t4480;
  double t4863;
  double t3284;
  double t3492;
  double t3511;
  double t5130;
  double t5148;
  double t2660;
  double t2011;
  double t5010;
  double t5205;
  double t5542;
  double t5731;
  double t6020;
  double t6025;
  double t6774;
  double t6822;
  double t6823;
  double t6848;
  double t6862;
  double t6952;
  double t6994;
  double t6950;
  double t7027;
  double t7056;
  double t7085;
  double t7211;
  double t7214;
  double t704;
  double t1776;
  double t1811;
  double t1836;
  double t1915;
  double t1943;
  double t2174;
  double t2203;
  double t2262;
  double t2524;
  double t2707;
  double t2795;
  double t2856;
  double t2951;
  double t3512;
  double t4888;
  double t4998;
  double t5701;
  double t6092;
  double t6177;
  double t6218;
  double t6221;
  double t6228;
  double t6468;
  double t6482;
  double t6526;
  double t6659;
  double t6679;
  double t6705;
  double t6751;
  double t6874;
  double t6915;
  double t7080;
  double t7219;
  double t7220;
  double t7243;
  double t7263;
  double t7313;
  double t7319;
  double t7321;
  double t7325;
  double t7331;
  double t7355;
  double t7362;
  t275 = Cos(var1[7]);
  t301 = -1.*t275;
  t381 = 0. + t301;
  t1873 = Sin(var1[7]);
  t1897 = 0. + t1873;
  t57 = Cos(var1[6]);
  t430 = t57*t381;
  t610 = 0. + t430;
  t846 = Sin(var1[5]);
  t50 = Cos(var1[5]);
  t1110 = Sin(var1[6]);
  t1213 = t381*t1110;
  t1555 = 0. + t1213;
  t3181 = Cos(var1[8]);
  t3299 = Sin(var1[9]);
  t3067 = Cos(var1[9]);
  t3359 = Sin(var1[8]);
  t4168 = t3181*t3299;
  t4269 = t3067*t3359;
  t4385 = 0. + t4168 + t4269;
  t4480 = t275*t4385;
  t4863 = 0. + t4480;
  t3284 = -1.*t3067*t3181;
  t3492 = t3299*t3359;
  t3511 = 0. + t3284 + t3492;
  t5130 = t1873*t4385;
  t5148 = 0. + t5130;
  t2660 = Sin(var1[4]);
  t2011 = Cos(var1[4]);
  t5010 = -1.*t1110*t3511;
  t5205 = t57*t5148;
  t5542 = 0. + t5010 + t5205;
  t5731 = t57*t3511;
  t6020 = t1110*t5148;
  t6025 = 0. + t5731 + t6020;
  t6774 = t3067*t3181;
  t6822 = -1.*t3299*t3359;
  t6823 = 0. + t6774 + t6822;
  t6848 = t275*t6823;
  t6862 = 0. + t6848;
  t6952 = t1873*t6823;
  t6994 = 0. + t6952;
  t6950 = -1.*t1110*t4385;
  t7027 = t57*t6994;
  t7056 = 0. + t6950 + t7027;
  t7085 = t57*t4385;
  t7211 = t1110*t6994;
  t7214 = 0. + t7085 + t7211;
  t704 = t50*t610;
  t1776 = -1.*t846*t1555;
  t1811 = 0. + t704 + t1776;
  t1836 = var2[4]*t1811;
  t1915 = var2[5]*t1897;
  t1943 = var2[6]*t1897;
  t2174 = t610*t846;
  t2203 = t50*t1555;
  t2262 = 0. + t2174 + t2203;
  t2524 = t2011*t2262;
  t2707 = -1.*t2660*t1897;
  t2795 = 0. + t2524 + t2707;
  t2856 = var2[3]*t2795;
  t2951 = 0. + var2[9] + var2[8] + t1836 + t1915 + t1943 + t2856;
  t3512 = var2[7]*t3511;
  t4888 = var2[5]*t4863;
  t4998 = var2[6]*t4863;
  t5701 = t50*t5542;
  t6092 = -1.*t846*t6025;
  t6177 = 0. + t5701 + t6092;
  t6218 = var2[4]*t6177;
  t6221 = -1.*t2660*t4863;
  t6228 = t846*t5542;
  t6468 = t50*t6025;
  t6482 = 0. + t6228 + t6468;
  t6526 = t2011*t6482;
  t6659 = 0. + t6221 + t6526;
  t6679 = var2[3]*t6659;
  t6705 = 0. + t3512 + t4888 + t4998 + t6218 + t6679;
  t6751 = var2[7]*t4385;
  t6874 = var2[5]*t6862;
  t6915 = var2[6]*t6862;
  t7080 = t50*t7056;
  t7219 = -1.*t846*t7214;
  t7220 = 0. + t7080 + t7219;
  t7243 = var2[4]*t7220;
  t7263 = -1.*t2660*t6862;
  t7313 = t846*t7056;
  t7319 = t50*t7214;
  t7321 = 0. + t7313 + t7319;
  t7325 = t2011*t7321;
  t7331 = 0. + t7263 + t7325;
  t7355 = var2[3]*t7331;
  t7362 = 0. + t6751 + t6874 + t6915 + t7243 + t7355;
  p_output1[0]=3.e-6*t2951 + 0.00216*t6705 + 0.000956*t7362;
  p_output1[1]=1.e-6*t2951 + 0.000956*t6705 + 0.00144*t7362;
  p_output1[2]=0.00334*t2951 + 3.e-6*t6705 + 1.e-6*t7362;
}



void AMBody_LeftKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
