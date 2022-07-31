/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:19 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_BaseRotX_src.h"

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
  double t1210;
  double t840;
  double t1200;
  double t1214;
  double t1256;
  double t1258;
  double t1262;
  double t1263;
  double t1265;
  double t1267;
  double t1271;
  double t1272;
  t1210 = Cos(var1[3]);
  t840 = Cos(var1[4]);
  t1200 = Sin(var1[3]);
  t1214 = Sin(var1[4]);
  t1256 = Sin(var1[5]);
  t1258 = Cos(var1[5]);
  t1262 = t1210*t1258*t1214;
  t1263 = t1200*t1256;
  t1265 = t1262 + t1263;
  t1267 = -1.*t1210*t1258;
  t1271 = -1.*t1200*t1214*t1256;
  t1272 = t1267 + t1271;
  p_output1[0]=-1.*t1200*t840*var2[3] - 1.*t1210*t1214*var2[4];
  p_output1[1]=t1210*t840*var2[3] - 1.*t1200*t1214*var2[4];
  p_output1[2]=-1.*t840*var2[4];
  p_output1[3]=t1272*var2[3] + t1210*t1256*t840*var2[4] + t1265*var2[5];
  p_output1[4]=(t1210*t1214*t1256 - 1.*t1200*t1258)*var2[3] + t1200*t1256*t840*var2[4] + (-1.*t1210*t1256 + t1200*t1214*t1258)*var2[5];
  p_output1[5]=-1.*t1214*t1256*var2[4] + t1258*t840*var2[5];
  p_output1[6]=(t1210*t1256 - 1.*t1200*t1214*t1258)*var2[3] + t1210*t1258*t840*var2[4] + (-1.*t1210*t1214*t1256 + t1200*t1258)*var2[5];
  p_output1[7]=t1265*var2[3] + t1200*t1258*t840*var2[4] + t1272*var2[5];
  p_output1[8]=-1.*t1214*t1258*var2[4] - 1.*t1256*t840*var2[5];
}



void dR_BaseRotX_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
