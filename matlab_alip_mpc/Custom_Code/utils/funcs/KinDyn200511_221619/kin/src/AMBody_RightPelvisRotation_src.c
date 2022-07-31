/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_RightPelvisRotation_src.h"

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
  double t791;
  double t1004;
  double t630;
  double t1008;
  double t1251;
  double t815;
  double t1189;
  double t1229;
  double t79;
  double t85;
  double t306;
  double t354;
  double t526;
  double t1238;
  double t1272;
  double t1465;
  double t1496;
  double t1518;
  double t1667;
  double t1737;
  double t1782;
  double t1988;
  double t2232;
  double t2514;
  double t2895;
  double t2942;
  double t3471;
  double t3582;
  double t3940;
  t791 = Cos(var1[5]);
  t1004 = Sin(var1[13]);
  t630 = Cos(var1[13]);
  t1008 = Sin(var1[5]);
  t1251 = Cos(var1[4]);
  t815 = t630*t791;
  t1189 = -1.*t1004*t1008;
  t1229 = 0. + t815 + t1189;
  t79 = Sin(var1[4]);
  t85 = -1.*t79;
  t306 = 0. + t85;
  t354 = var2[3]*t306;
  t526 = 0. + var2[13] + var2[5] + t354;
  t1238 = var2[4]*t1229;
  t1272 = t791*t1004;
  t1465 = t630*t1008;
  t1496 = 0. + t1272 + t1465;
  t1518 = t1251*t1496;
  t1667 = 0. + t1518;
  t1737 = var2[3]*t1667;
  t1782 = 0. + t1238 + t1737;
  t1988 = -1.*t791*t1004;
  t2232 = -1.*t630*t1008;
  t2514 = 0. + t1988 + t2232;
  t2895 = var2[4]*t2514;
  t2942 = t1251*t1229;
  t3471 = 0. + t2942;
  t3582 = var2[3]*t3471;
  t3940 = 0. + t2895 + t3582;
  p_output1[0]=-1.e-6*t1782 + 2.e-6*t3940 + 0.00272*t526;
  p_output1[1]=0.00559*t1782 - 3.e-6*t3940 - 1.e-6*t526;
  p_output1[2]=-3.e-6*t1782 + 0.00464*t3940 + 2.e-6*t526;
}



void AMBody_RightPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
