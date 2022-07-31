/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:48 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftShin_src.h"

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
  double t862;
  double t1631;
  double t2008;
  double t1910;
  double t2361;
  double t1460;
  double t2431;
  double t2459;
  double t2460;
  double t2004;
  double t2398;
  double t2418;
  double t2461;
  double t814;
  double t2598;
  double t2606;
  double t2623;
  double t1042;
  double t1314;
  double t1451;
  double t2421;
  double t2471;
  double t2521;
  double t2548;
  double t2550;
  double t2551;
  double t2626;
  double t2735;
  double t2565;
  double t2646;
  double t2668;
  double t812;
  double t2764;
  double t2798;
  double t2799;
  double t605;
  double t3004;
  double t3013;
  double t3016;
  double t2946;
  double t2952;
  double t2967;
  double t3149;
  double t3150;
  double t3155;
  double t2909;
  double t2968;
  double t3025;
  double t3031;
  double t3037;
  double t3125;
  double t2844;
  double t3131;
  double t3160;
  double t3174;
  double t3176;
  double t3181;
  double t3190;
  double t3328;
  double t3339;
  double t3349;
  double t3276;
  double t3284;
  double t3300;
  double t3303;
  double t3305;
  double t3310;
  double t3312;
  double t3357;
  double t3359;
  double t3388;
  double t3393;
  double t3401;
  double t2676;
  double t2807;
  double t2827;
  double t2852;
  double t2861;
  double t2890;
  double t3175;
  double t3194;
  double t3200;
  double t3223;
  double t3231;
  double t3242;
  double t3371;
  double t3402;
  double t3418;
  double t3428;
  double t3437;
  double t3448;
  t862 = Cos(var1[3]);
  t1631 = Cos(var1[5]);
  t2008 = Sin(var1[4]);
  t1910 = Sin(var1[3]);
  t2361 = Sin(var1[5]);
  t1460 = Cos(var1[6]);
  t2431 = t862*t1631*t2008;
  t2459 = t1910*t2361;
  t2460 = t2431 + t2459;
  t2004 = -1.*t1631*t1910;
  t2398 = t862*t2008*t2361;
  t2418 = t2004 + t2398;
  t2461 = Sin(var1[6]);
  t814 = Cos(var1[8]);
  t2598 = t1460*t2460;
  t2606 = -1.*t2418*t2461;
  t2623 = t2598 + t2606;
  t1042 = Cos(var1[4]);
  t1314 = Cos(var1[7]);
  t1451 = t862*t1042*t1314;
  t2421 = t1460*t2418;
  t2471 = t2460*t2461;
  t2521 = t2421 + t2471;
  t2548 = Sin(var1[7]);
  t2550 = t2521*t2548;
  t2551 = t1451 + t2550;
  t2626 = Sin(var1[8]);
  t2735 = Cos(var1[9]);
  t2565 = t814*t2551;
  t2646 = t2623*t2626;
  t2668 = t2565 + t2646;
  t812 = Sin(var1[9]);
  t2764 = t814*t2623;
  t2798 = -1.*t2551*t2626;
  t2799 = t2764 + t2798;
  t605 = Cos(var1[10]);
  t3004 = t1631*t1910*t2008;
  t3013 = -1.*t862*t2361;
  t3016 = t3004 + t3013;
  t2946 = t862*t1631;
  t2952 = t1910*t2008*t2361;
  t2967 = t2946 + t2952;
  t3149 = t1460*t3016;
  t3150 = -1.*t2967*t2461;
  t3155 = t3149 + t3150;
  t2909 = t1042*t1314*t1910;
  t2968 = t1460*t2967;
  t3025 = t3016*t2461;
  t3031 = t2968 + t3025;
  t3037 = t3031*t2548;
  t3125 = t2909 + t3037;
  t2844 = Sin(var1[10]);
  t3131 = t814*t3125;
  t3160 = t3155*t2626;
  t3174 = t3131 + t3160;
  t3176 = t814*t3155;
  t3181 = -1.*t3125*t2626;
  t3190 = t3176 + t3181;
  t3328 = t1042*t1631*t1460;
  t3339 = -1.*t1042*t2361*t2461;
  t3349 = t3328 + t3339;
  t3276 = -1.*t1314*t2008;
  t3284 = t1042*t1460*t2361;
  t3300 = t1042*t1631*t2461;
  t3303 = t3284 + t3300;
  t3305 = t3303*t2548;
  t3310 = t3276 + t3305;
  t3312 = t814*t3310;
  t3357 = t3349*t2626;
  t3359 = t3312 + t3357;
  t3388 = t814*t3349;
  t3393 = -1.*t3310*t2626;
  t3401 = t3388 + t3393;
  t2676 = -1.*t812*t2668;
  t2807 = t2735*t2799;
  t2827 = t2676 + t2807;
  t2852 = t2735*t2668;
  t2861 = t812*t2799;
  t2890 = t2852 + t2861;
  t3175 = -1.*t812*t3174;
  t3194 = t2735*t3190;
  t3200 = t3175 + t3194;
  t3223 = t2735*t3174;
  t3231 = t812*t3190;
  t3242 = t3223 + t3231;
  t3371 = -1.*t812*t3359;
  t3402 = t2735*t3401;
  t3418 = t3371 + t3402;
  t3428 = t2735*t3359;
  t3437 = t812*t3401;
  t3448 = t3428 + t3437;
  p_output1[0]=t2844*t2890 - 1.*t2827*t605;
  p_output1[1]=t2844*t3242 - 1.*t3200*t605;
  p_output1[2]=t2844*t3448 - 1.*t3418*t605;
  p_output1[3]=t2827*t2844 + t2890*t605;
  p_output1[4]=t2844*t3200 + t3242*t605;
  p_output1[5]=t2844*t3418 + t3448*t605;
  p_output1[6]=-1.*t1314*t2521 + t1042*t2548*t862;
  p_output1[7]=t1042*t1910*t2548 - 1.*t1314*t3031;
  p_output1[8]=-1.*t2008*t2548 - 1.*t1314*t3303;
}



void R_LeftShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
