/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightThigh_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t2202;
  double t2462;
  double t1861;
  double t2219;
  double t2488;
  double t2910;
  double t2382;
  double t2514;
  double t2706;
  double t1673;
  double t2930;
  double t2979;
  double t2997;
  double t1078;
  double t3240;
  double t3275;
  double t3287;
  double t3289;
  double t3406;
  double t3410;
  double t3533;
  double t3583;
  double t3602;
  double t3606;
  double t2817;
  double t3084;
  double t3180;
  double t3288;
  double t3332;
  double t3333;
  double t3334;
  double t3341;
  double t3358;
  double t3566;
  double t3611;
  double t3619;
  double t3627;
  double t3644;
  double t3667;
  double t3723;
  double t3728;
  double t3830;
  double t3865;
  double t3878;
  double t3962;
  double t3985;
  double t3987;
  double t4001;
  double t4004;
  double t4051;
  double t4060;
  t2202 = Cos(var1[5]);
  t2462 = Sin(var1[3]);
  t1861 = Cos(var1[3]);
  t2219 = Sin(var1[4]);
  t2488 = Sin(var1[5]);
  t2910 = Sin(var1[13]);
  t2382 = t1861*t2202*t2219;
  t2514 = t2462*t2488;
  t2706 = t2382 + t2514;
  t1673 = Cos(var1[13]);
  t2930 = -1.*t2202*t2462;
  t2979 = t1861*t2219*t2488;
  t2997 = t2930 + t2979;
  t1078 = Cos(var1[15]);
  t3240 = Sin(var1[15]);
  t3275 = Cos(var1[14]);
  t3287 = Cos(var1[4]);
  t3289 = Sin(var1[14]);
  t3406 = t2202*t2462*t2219;
  t3410 = -1.*t1861*t2488;
  t3533 = t3406 + t3410;
  t3583 = t1861*t2202;
  t3602 = t2462*t2219*t2488;
  t3606 = t3583 + t3602;
  t2817 = t1673*t2706;
  t3084 = -1.*t2910*t2997;
  t3180 = t2817 + t3084;
  t3288 = t3275*t1861*t3287;
  t3332 = t2910*t2706;
  t3333 = t1673*t2997;
  t3334 = t3332 + t3333;
  t3341 = t3289*t3334;
  t3358 = t3288 + t3341;
  t3566 = t1673*t3533;
  t3611 = -1.*t2910*t3606;
  t3619 = t3566 + t3611;
  t3627 = t3275*t3287*t2462;
  t3644 = t2910*t3533;
  t3667 = t1673*t3606;
  t3723 = t3644 + t3667;
  t3728 = t3289*t3723;
  t3830 = t3627 + t3728;
  t3865 = t1673*t3287*t2202;
  t3878 = -1.*t3287*t2910*t2488;
  t3962 = t3865 + t3878;
  t3985 = -1.*t3275*t2219;
  t3987 = t3287*t2202*t2910;
  t4001 = t1673*t3287*t2488;
  t4004 = t3987 + t4001;
  t4051 = t3289*t4004;
  t4060 = t3985 + t4051;
  p_output1[0]=-1.*t1078*t3180 + t3240*t3358;
  p_output1[1]=-1.*t1078*t3619 + t3240*t3830;
  p_output1[2]=-1.*t1078*t3962 + t3240*t4060;
  p_output1[3]=t3180*t3240 + t1078*t3358;
  p_output1[4]=t3240*t3619 + t1078*t3830;
  p_output1[5]=t3240*t3962 + t1078*t4060;
  p_output1[6]=t1861*t3287*t3289 - 1.*t3275*t3334;
  p_output1[7]=t2462*t3287*t3289 - 1.*t3275*t3723;
  p_output1[8]=-1.*t2219*t3289 - 1.*t3275*t4004;
}



void R_RightThigh_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
