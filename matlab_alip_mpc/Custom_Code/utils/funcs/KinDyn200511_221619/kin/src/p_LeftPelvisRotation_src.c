/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftPelvisRotation_src.h"

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
  double t212;
  double t2877;
  double t4213;
  double t2889;
  double t4803;
  double t5940;
  double t6318;
  double t6335;
  double t6458;
  double t6989;
  double t7099;
  double t7138;
  double t3602;
  double t4889;
  double t5398;
  double t339;
  double t6336;
  double t6898;
  double t6941;
  double t7189;
  double t7332;
  double t7418;
  double t8581;
  double t8582;
  double t8584;
  double t8526;
  double t8531;
  double t8547;
  t212 = Cos(var1[3]);
  t2877 = Cos(var1[5]);
  t4213 = Sin(var1[3]);
  t2889 = Sin(var1[4]);
  t4803 = Sin(var1[5]);
  t5940 = Cos(var1[6]);
  t6318 = -1.*t5940;
  t6335 = 1. + t6318;
  t6458 = Sin(var1[6]);
  t6989 = -1.*t2877*t4213;
  t7099 = t212*t2889*t4803;
  t7138 = t6989 + t7099;
  t3602 = t212*t2877*t2889;
  t4889 = t4213*t4803;
  t5398 = t3602 + t4889;
  t339 = Cos(var1[4]);
  t6336 = 0.07996*t6335;
  t6898 = -0.135*t6458;
  t6941 = 0. + t6336 + t6898;
  t7189 = 0.135*t6335;
  t7332 = 0.07996*t6458;
  t7418 = 0. + t7189 + t7332;
  t8581 = t212*t2877;
  t8582 = t4213*t2889*t4803;
  t8584 = t8581 + t8582;
  t8526 = t2877*t4213*t2889;
  t8531 = -1.*t212*t4803;
  t8547 = t8526 + t8531;
  p_output1[0]=0. - 0.05485*t212*t339 + t5398*t6941 + 0.1351*(t5398*t6458 + t5940*t7138) + 0.09786*(t5398*t5940 - 1.*t6458*t7138) + t7138*t7418 + var1[0];
  p_output1[1]=0. - 0.05485*t339*t4213 + t6941*t8547 + t7418*t8584 + 0.1351*(t6458*t8547 + t5940*t8584) + 0.09786*(t5940*t8547 - 1.*t6458*t8584) + var1[1];
  p_output1[2]=0. + 0.05485*t2889 + 0.1351*(t339*t4803*t5940 + t2877*t339*t6458) + 0.09786*(t2877*t339*t5940 - 1.*t339*t4803*t6458) + t2877*t339*t6941 + t339*t4803*t7418 + var1[2];
}



void p_LeftPelvisRotation_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
