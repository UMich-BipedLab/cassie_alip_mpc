/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightPelvisRotation_src.h"

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
  double t108;
  double t928;
  double t997;
  double t1028;
  double t1181;
  double t1313;
  double t1351;
  double t1321;
  double t1516;
  double t1349;
  double t1580;
  double t1588;
  double t1750;
  double t1762;
  double t1809;
  double t415;
  double t1124;
  double t1268;
  double t1305;
  double t1683;
  double t1693;
  double t1708;
  double t2317;
  double t2331;
  double t2338;
  double t2352;
  double t2379;
  double t2407;
  t108 = Cos(var1[3]);
  t928 = Cos(var1[13]);
  t997 = -1.*t928;
  t1028 = 1. + t997;
  t1181 = Sin(var1[13]);
  t1313 = Cos(var1[5]);
  t1351 = Sin(var1[3]);
  t1321 = Sin(var1[4]);
  t1516 = Sin(var1[5]);
  t1349 = t108*t1313*t1321;
  t1580 = t1351*t1516;
  t1588 = t1349 + t1580;
  t1750 = -1.*t1313*t1351;
  t1762 = t108*t1321*t1516;
  t1809 = t1750 + t1762;
  t415 = Cos(var1[4]);
  t1124 = 0.07996*t1028;
  t1268 = 0.135*t1181;
  t1305 = 0. + t1124 + t1268;
  t1683 = -0.135*t1028;
  t1693 = 0.07996*t1181;
  t1708 = 0. + t1683 + t1693;
  t2317 = t1313*t1351*t1321;
  t2331 = -1.*t108*t1516;
  t2338 = t2317 + t2331;
  t2352 = t108*t1313;
  t2379 = t1351*t1321*t1516;
  t2407 = t2352 + t2379;
  p_output1[0]=0. + t1305*t1588 + t1708*t1809 - 0.05485*t108*t415 + 0.09786*(-1.*t1181*t1809 + t1588*t928) - 0.1351*(t1181*t1588 + t1809*t928) + var1[0];
  p_output1[1]=0. + t1305*t2338 + t1708*t2407 - 0.05485*t1351*t415 + 0.09786*(-1.*t1181*t2407 + t2338*t928) - 0.1351*(t1181*t2338 + t2407*t928) + var1[1];
  p_output1[2]=0. + 0.05485*t1321 + t1305*t1313*t415 + t1516*t1708*t415 + 0.09786*(-1.*t1181*t1516*t415 + t1313*t415*t928) - 0.1351*(t1181*t1313*t415 + t1516*t415*t928) + var1[2];
}



void p_RightPelvisRotation_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
