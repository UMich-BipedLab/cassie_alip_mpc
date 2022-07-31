/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightThighJoint_src.h"

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
  double t1365;
  double t1955;
  double t1357;
  double t1518;
  double t1961;
  double t2194;
  double t1740;
  double t2055;
  double t2066;
  double t923;
  double t2223;
  double t2244;
  double t2324;
  double t310;
  double t2382;
  double t2384;
  double t2406;
  double t2435;
  double t2583;
  double t2685;
  double t2694;
  double t2721;
  double t2734;
  double t2765;
  double t2189;
  double t2334;
  double t2342;
  double t2418;
  double t2447;
  double t2475;
  double t2480;
  double t2513;
  double t2532;
  double t2717;
  double t2772;
  double t2818;
  double t2846;
  double t2879;
  double t2908;
  double t2935;
  double t2967;
  double t2994;
  double t3055;
  double t3072;
  double t3090;
  double t3136;
  double t3179;
  double t3181;
  double t3200;
  double t3208;
  double t3215;
  t1365 = Cos(var1[5]);
  t1955 = Sin(var1[3]);
  t1357 = Cos(var1[3]);
  t1518 = Sin(var1[4]);
  t1961 = Sin(var1[5]);
  t2194 = Sin(var1[13]);
  t1740 = t1357*t1365*t1518;
  t2055 = t1955*t1961;
  t2066 = t1740 + t2055;
  t923 = Cos(var1[13]);
  t2223 = -1.*t1365*t1955;
  t2244 = t1357*t1518*t1961;
  t2324 = t2223 + t2244;
  t310 = Cos(var1[15]);
  t2382 = Sin(var1[15]);
  t2384 = Cos(var1[14]);
  t2406 = Cos(var1[4]);
  t2435 = Sin(var1[14]);
  t2583 = t1365*t1955*t1518;
  t2685 = -1.*t1357*t1961;
  t2694 = t2583 + t2685;
  t2721 = t1357*t1365;
  t2734 = t1955*t1518*t1961;
  t2765 = t2721 + t2734;
  t2189 = t923*t2066;
  t2334 = -1.*t2194*t2324;
  t2342 = t2189 + t2334;
  t2418 = t2384*t1357*t2406;
  t2447 = t2194*t2066;
  t2475 = t923*t2324;
  t2480 = t2447 + t2475;
  t2513 = t2435*t2480;
  t2532 = t2418 + t2513;
  t2717 = t923*t2694;
  t2772 = -1.*t2194*t2765;
  t2818 = t2717 + t2772;
  t2846 = t2384*t2406*t1955;
  t2879 = t2194*t2694;
  t2908 = t923*t2765;
  t2935 = t2879 + t2908;
  t2967 = t2435*t2935;
  t2994 = t2846 + t2967;
  t3055 = t923*t2406*t1365;
  t3072 = -1.*t2406*t2194*t1961;
  t3090 = t3055 + t3072;
  t3136 = -1.*t2384*t1518;
  t3179 = t2406*t1365*t2194;
  t3181 = t923*t2406*t1961;
  t3200 = t3179 + t3181;
  t3208 = t2435*t3200;
  t3215 = t3136 + t3208;
  p_output1[0]=t2382*t2532 - 1.*t2342*t310;
  p_output1[1]=t2382*t2994 - 1.*t2818*t310;
  p_output1[2]=-1.*t3090*t310 + t2382*t3215;
  p_output1[3]=t2342*t2382 + t2532*t310;
  p_output1[4]=t2382*t2818 + t2994*t310;
  p_output1[5]=t2382*t3090 + t310*t3215;
  p_output1[6]=t1357*t2406*t2435 - 1.*t2384*t2480;
  p_output1[7]=t1955*t2406*t2435 - 1.*t2384*t2935;
  p_output1[8]=-1.*t1518*t2435 - 1.*t2384*t3200;
}



void R_RightThighJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
