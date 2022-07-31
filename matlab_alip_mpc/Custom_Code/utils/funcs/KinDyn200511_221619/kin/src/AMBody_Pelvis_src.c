/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_Pelvis_src.h"

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
  double t2012;
  double t1907;
  double t2437;
  double t92;
  double t1023;
  double t1790;
  double t2062;
  double t2870;
  double t2879;
  double t2975;
  double t2983;
  double t3013;
  t2012 = Cos(var1[5]);
  t1907 = Cos(var1[4]);
  t2437 = Sin(var1[5]);
  t92 = Sin(var1[4]);
  t1023 = -1.*var2[3]*t92;
  t1790 = var2[5] + t1023;
  t2062 = var2[3]*t1907*t2012;
  t2870 = -1.*var2[4]*t2437;
  t2879 = 0. + t2062 + t2870;
  t2975 = var2[4]*t2012;
  t2983 = var2[3]*t1907*t2437;
  t3013 = 0. + t2975 + t2983;
  p_output1[0]=0.0942*t1790 + 0.015*t2879 + 0.000169*t3013;
  p_output1[1]=0.000169*t1790 + 0.000516*t2879 + 0.084*t3013;
  p_output1[2]=0.015*t1790 + 0.113*t2879 + 0.000516*t3013;
}



void AMBody_Pelvis_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
