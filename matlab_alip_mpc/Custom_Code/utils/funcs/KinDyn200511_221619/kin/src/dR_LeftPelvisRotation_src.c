/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftPelvisRotation_src.h"

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
  double t1643;
  double t210;
  double t1468;
  double t1651;
  double t2440;
  double t4359;
  double t2837;
  double t4371;
  double t6095;
  double t6162;
  double t6197;
  double t6489;
  double t7240;
  double t7243;
  double t7246;
  double t4882;
  double t4954;
  double t5288;
  double t7773;
  double t8072;
  double t8147;
  double t8379;
  double t9025;
  double t9051;
  double t9064;
  double t6496;
  double t6510;
  double t6786;
  double t9214;
  double t5405;
  double t5411;
  double t5498;
  double t5396;
  double t8715;
  double t8734;
  double t8813;
  double t9313;
  double t7247;
  double t7255;
  double t9337;
  double t9342;
  double t9343;
  t1643 = Cos(var1[3]);
  t210 = Cos(var1[4]);
  t1468 = Sin(var1[3]);
  t1651 = Sin(var1[4]);
  t2440 = Cos(var1[6]);
  t4359 = Cos(var1[5]);
  t2837 = Sin(var1[5]);
  t4371 = Sin(var1[6]);
  t6095 = t1643*t4359*t1651;
  t6162 = t1468*t2837;
  t6197 = t6095 + t6162;
  t6489 = t2440*t6197;
  t7240 = -1.*t4359*t1468;
  t7243 = t1643*t1651*t2837;
  t7246 = t7240 + t7243;
  t4882 = -1.*t1643*t4359;
  t4954 = -1.*t1468*t1651*t2837;
  t5288 = t4882 + t4954;
  t7773 = t4359*t1468*t1651;
  t8072 = -1.*t1643*t2837;
  t8147 = t7773 + t8072;
  t8379 = t2440*t8147;
  t9025 = t210*t4359*t2440;
  t9051 = -1.*t210*t2837*t4371;
  t9064 = t9025 + t9051;
  t6496 = t4359*t1468;
  t6510 = -1.*t1643*t1651*t2837;
  t6786 = t6496 + t6510;
  t9214 = -1.*t6197*t4371;
  t5405 = -1.*t4359*t1468*t1651;
  t5411 = t1643*t2837;
  t5498 = t5405 + t5411;
  t5396 = t2440*t5288;
  t8715 = t1643*t4359;
  t8734 = t1468*t1651*t2837;
  t8813 = t8715 + t8734;
  t9313 = -1.*t8147*t4371;
  t7247 = -1.*t7246*t4371;
  t7255 = t6489 + t7247;
  t9337 = -1.*t210*t2440*t2837;
  t9342 = -1.*t210*t4359*t4371;
  t9343 = t9337 + t9342;
  p_output1[0]=-1.*t1468*t210*var2[3] - 1.*t1643*t1651*var2[4];
  p_output1[1]=t1643*t210*var2[3] - 1.*t1468*t1651*var2[4];
  p_output1[2]=-1.*t210*var2[4];
  p_output1[3]=(t5396 + t4371*t5498)*var2[3] + (t1643*t210*t2440*t2837 + t1643*t210*t4359*t4371)*var2[4] + (t6489 + t4371*t6786)*var2[5] + t7255*var2[6];
  p_output1[4]=(t4371*t6197 + t2440*t7246)*var2[3] + (t1468*t210*t2440*t2837 + t1468*t210*t4359*t4371)*var2[4] + (t4371*t5288 + t8379)*var2[5] + (t8379 - 1.*t4371*t8813)*var2[6];
  p_output1[5]=(-1.*t1651*t2440*t2837 - 1.*t1651*t4359*t4371)*var2[4] + t9064*var2[5] + t9064*var2[6];
  p_output1[6]=(-1.*t4371*t5288 + t2440*t5498)*var2[3] + (t1643*t210*t2440*t4359 - 1.*t1643*t210*t2837*t4371)*var2[4] + (t2440*t6786 + t9214)*var2[5] + (-1.*t2440*t7246 + t9214)*var2[6];
  p_output1[7]=t7255*var2[3] + (t1468*t210*t2440*t4359 - 1.*t1468*t210*t2837*t4371)*var2[4] + (t5396 + t9313)*var2[5] + (-1.*t2440*t8813 + t9313)*var2[6];
  p_output1[8]=(-1.*t1651*t2440*t4359 + t1651*t2837*t4371)*var2[4] + t9343*var2[5] + t9343*var2[6];
}



void dR_LeftPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
