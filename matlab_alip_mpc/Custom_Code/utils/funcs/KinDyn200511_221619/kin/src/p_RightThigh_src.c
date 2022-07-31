/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:19 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightThigh_src.h"

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
  double t217;
  double t1365;
  double t1382;
  double t1522;
  double t1729;
  double t2125;
  double t2242;
  double t2185;
  double t2279;
  double t280;
  double t407;
  double t432;
  double t1096;
  double t2203;
  double t2315;
  double t2346;
  double t2516;
  double t2524;
  double t2548;
  double t222;
  double t2617;
  double t2648;
  double t2653;
  double t2713;
  double t2714;
  double t2787;
  double t2907;
  double t3084;
  double t3091;
  double t3109;
  double t3295;
  double t3299;
  double t3374;
  double t518;
  double t1103;
  double t1179;
  double t1687;
  double t1769;
  double t2082;
  double t2457;
  double t2481;
  double t2482;
  double t2590;
  double t2596;
  double t2610;
  double t3709;
  double t3716;
  double t3740;
  double t3793;
  double t3807;
  double t3815;
  double t2850;
  double t2990;
  double t3077;
  double t3827;
  double t3893;
  double t3894;
  double t3275;
  double t3283;
  double t3285;
  double t3932;
  double t3934;
  double t3943;
  double t4140;
  double t4154;
  double t4166;
  double t4360;
  double t4363;
  double t4369;
  double t4380;
  double t4437;
  double t4443;
  double t4526;
  double t4527;
  double t4540;
  t217 = Cos(var1[3]);
  t1365 = Cos(var1[13]);
  t1382 = -1.*t1365;
  t1522 = 1. + t1382;
  t1729 = Sin(var1[13]);
  t2125 = Cos(var1[5]);
  t2242 = Sin(var1[3]);
  t2185 = Sin(var1[4]);
  t2279 = Sin(var1[5]);
  t280 = Cos(var1[14]);
  t407 = -1.*t280;
  t432 = 1. + t407;
  t1096 = Sin(var1[14]);
  t2203 = t217*t2125*t2185;
  t2315 = t2242*t2279;
  t2346 = t2203 + t2315;
  t2516 = -1.*t2125*t2242;
  t2524 = t217*t2185*t2279;
  t2548 = t2516 + t2524;
  t222 = Cos(var1[4]);
  t2617 = t1729*t2346;
  t2648 = t1365*t2548;
  t2653 = t2617 + t2648;
  t2713 = Cos(var1[15]);
  t2714 = -1.*t2713;
  t2787 = 1. + t2714;
  t2907 = Sin(var1[15]);
  t3084 = t1365*t2346;
  t3091 = -1.*t1729*t2548;
  t3109 = t3084 + t3091;
  t3295 = t280*t217*t222;
  t3299 = t1096*t2653;
  t3374 = t3295 + t3299;
  t518 = -0.08055*t432;
  t1103 = -0.135*t1096;
  t1179 = 0. + t518 + t1103;
  t1687 = 0.07996*t1522;
  t1769 = 0.135*t1729;
  t2082 = 0. + t1687 + t1769;
  t2457 = -0.135*t1522;
  t2481 = 0.07996*t1729;
  t2482 = 0. + t2457 + t2481;
  t2590 = -0.135*t432;
  t2596 = 0.08055*t1096;
  t2610 = 0. + t2590 + t2596;
  t3709 = t2125*t2242*t2185;
  t3716 = -1.*t217*t2279;
  t3740 = t3709 + t3716;
  t3793 = t217*t2125;
  t3807 = t2242*t2185*t2279;
  t3815 = t3793 + t3807;
  t2850 = -0.01004*t2787;
  t2990 = 0.08055*t2907;
  t3077 = 0. + t2850 + t2990;
  t3827 = t1729*t3740;
  t3893 = t1365*t3815;
  t3894 = t3827 + t3893;
  t3275 = -0.08055*t2787;
  t3283 = -0.01004*t2907;
  t3285 = 0. + t3275 + t3283;
  t3932 = t1365*t3740;
  t3934 = -1.*t1729*t3815;
  t3943 = t3932 + t3934;
  t4140 = t280*t222*t2242;
  t4154 = t1096*t3894;
  t4166 = t4140 + t4154;
  t4360 = t222*t2125*t1729;
  t4363 = t1365*t222*t2279;
  t4369 = t4360 + t4363;
  t4380 = t1365*t222*t2125;
  t4437 = -1.*t222*t1729*t2279;
  t4443 = t4380 + t4437;
  t4526 = -1.*t280*t2185;
  t4527 = t1096*t4369;
  t4540 = t4526 + t4527;
  p_output1[0]=0. + t1179*t217*t222 + t2082*t2346 + t2482*t2548 + t2610*t2653 - 0.1708*(-1.*t1096*t217*t222 + t2653*t280) + t3077*t3109 + t3285*t3374 - 0.08045*(t2907*t3109 + t2713*t3374) - 0.06984*(t2713*t3109 - 1.*t2907*t3374) + var1[0];
  p_output1[1]=0. + t1179*t222*t2242 + t2082*t3740 + t2482*t3815 + t2610*t3894 - 0.1708*(-1.*t1096*t222*t2242 + t280*t3894) + t3077*t3943 + t3285*t4166 - 0.08045*(t2907*t3943 + t2713*t4166) - 0.06984*(t2713*t3943 - 1.*t2907*t4166) + var1[1];
  p_output1[2]=0. - 1.*t1179*t2185 + t2082*t2125*t222 + t222*t2279*t2482 + t2610*t4369 - 0.1708*(t1096*t2185 + t280*t4369) + t3077*t4443 + t3285*t4540 - 0.08045*(t2907*t4443 + t2713*t4540) - 0.06984*(t2713*t4443 - 1.*t2907*t4540) + var1[2];
}



void p_RightThigh_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
