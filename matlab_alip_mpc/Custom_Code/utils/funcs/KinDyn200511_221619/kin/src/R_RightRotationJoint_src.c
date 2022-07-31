/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightRotationJoint_src.h"

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
  double t355;
  double t1018;
  double t324;
  double t787;
  double t1238;
  double t298;
  double t1427;
  double t2054;
  double t984;
  double t1241;
  double t1310;
  double t1430;
  double t1486;
  double t1500;
  double t2275;
  double t2291;
  double t1604;
  double t1653;
  double t1861;
  double t1894;
  double t1920;
  double t1950;
  double t2370;
  double t2396;
  double t2403;
  double t2471;
  double t2476;
  double t2587;
  double t2686;
  double t2701;
  double t2729;
  t355 = Cos(var1[5]);
  t1018 = Sin(var1[3]);
  t324 = Cos(var1[3]);
  t787 = Sin(var1[4]);
  t1238 = Sin(var1[5]);
  t298 = Cos(var1[13]);
  t1427 = Sin(var1[13]);
  t2054 = Cos(var1[4]);
  t984 = t324*t355*t787;
  t1241 = t1018*t1238;
  t1310 = t984 + t1241;
  t1430 = -1.*t355*t1018;
  t1486 = t324*t787*t1238;
  t1500 = t1430 + t1486;
  t2275 = Cos(var1[14]);
  t2291 = Sin(var1[14]);
  t1604 = t355*t1018*t787;
  t1653 = -1.*t324*t1238;
  t1861 = t1604 + t1653;
  t1894 = t324*t355;
  t1920 = t1018*t787*t1238;
  t1950 = t1894 + t1920;
  t2370 = t1427*t1310;
  t2396 = t298*t1500;
  t2403 = t2370 + t2396;
  t2471 = t1427*t1861;
  t2476 = t298*t1950;
  t2587 = t2471 + t2476;
  t2686 = t2054*t355*t1427;
  t2701 = t298*t2054*t1238;
  t2729 = t2686 + t2701;
  p_output1[0]=t1427*t1500 - 1.*t1310*t298;
  p_output1[1]=t1427*t1950 - 1.*t1861*t298;
  p_output1[2]=t1238*t1427*t2054 - 1.*t2054*t298*t355;
  p_output1[3]=t2291*t2403 + t2054*t2275*t324;
  p_output1[4]=t1018*t2054*t2275 + t2291*t2587;
  p_output1[5]=t2291*t2729 - 1.*t2275*t787;
  p_output1[6]=-1.*t2275*t2403 + t2054*t2291*t324;
  p_output1[7]=t1018*t2054*t2291 - 1.*t2275*t2587;
  p_output1[8]=-1.*t2275*t2729 - 1.*t2291*t787;
}



void R_RightRotationJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
