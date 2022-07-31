/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftHip_src.h"

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
  double t1080;
  double t1552;
  double t1068;
  double t1336;
  double t1554;
  double t839;
  double t2109;
  double t2406;
  double t1773;
  double t1790;
  double t1865;
  double t1502;
  double t1715;
  double t1727;
  double t2497;
  double t2295;
  double t2312;
  double t2323;
  double t2234;
  double t2246;
  double t2249;
  double t2653;
  double t2500;
  double t2533;
  double t2546;
  double t2902;
  double t2908;
  double t2928;
  double t3047;
  double t3073;
  double t3076;
  t1080 = Cos(var1[5]);
  t1552 = Sin(var1[3]);
  t1068 = Cos(var1[3]);
  t1336 = Sin(var1[4]);
  t1554 = Sin(var1[5]);
  t839 = Cos(var1[6]);
  t2109 = Sin(var1[6]);
  t2406 = Cos(var1[4]);
  t1773 = -1.*t1080*t1552;
  t1790 = t1068*t1336*t1554;
  t1865 = t1773 + t1790;
  t1502 = t1068*t1080*t1336;
  t1715 = t1552*t1554;
  t1727 = t1502 + t1715;
  t2497 = Cos(var1[7]);
  t2295 = t1068*t1080;
  t2312 = t1552*t1336*t1554;
  t2323 = t2295 + t2312;
  t2234 = t1080*t1552*t1336;
  t2246 = -1.*t1068*t1554;
  t2249 = t2234 + t2246;
  t2653 = Sin(var1[7]);
  t2500 = t839*t1865;
  t2533 = t1727*t2109;
  t2546 = t2500 + t2533;
  t2902 = t839*t2323;
  t2908 = t2249*t2109;
  t2928 = t2902 + t2908;
  t3047 = t2406*t839*t1554;
  t3073 = t2406*t1080*t2109;
  t3076 = t3047 + t3073;
  p_output1[0]=t1865*t2109 - 1.*t1727*t839;
  p_output1[1]=t2109*t2323 - 1.*t2249*t839;
  p_output1[2]=t1554*t2109*t2406 - 1.*t1080*t2406*t839;
  p_output1[3]=t1068*t2406*t2497 + t2546*t2653;
  p_output1[4]=t1552*t2406*t2497 + t2653*t2928;
  p_output1[5]=-1.*t1336*t2497 + t2653*t3076;
  p_output1[6]=-1.*t2497*t2546 + t1068*t2406*t2653;
  p_output1[7]=t1552*t2406*t2653 - 1.*t2497*t2928;
  p_output1[8]=-1.*t1336*t2653 - 1.*t2497*t3076;
}



void R_LeftHip_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
