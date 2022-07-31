/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightHip_src.h"

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
  double t57;
  double t4789;
  double t4839;
  double t4891;
  double t5113;
  double t5513;
  double t6536;
  double t5533;
  double t6607;
  double t1102;
  double t2037;
  double t3203;
  double t4056;
  double t6155;
  double t6632;
  double t6635;
  double t6888;
  double t6892;
  double t6949;
  double t245;
  double t7176;
  double t7357;
  double t7367;
  double t3823;
  double t4285;
  double t4286;
  double t5078;
  double t5245;
  double t5395;
  double t6652;
  double t6656;
  double t6843;
  double t7113;
  double t7127;
  double t7152;
  double t7936;
  double t8101;
  double t8102;
  double t8156;
  double t8157;
  double t8159;
  double t8165;
  double t8172;
  double t8201;
  double t8577;
  double t8644;
  double t8711;
  t57 = Cos(var1[3]);
  t4789 = Cos(var1[13]);
  t4839 = -1.*t4789;
  t4891 = 1. + t4839;
  t5113 = Sin(var1[13]);
  t5513 = Cos(var1[5]);
  t6536 = Sin(var1[3]);
  t5533 = Sin(var1[4]);
  t6607 = Sin(var1[5]);
  t1102 = Cos(var1[14]);
  t2037 = -1.*t1102;
  t3203 = 1. + t2037;
  t4056 = Sin(var1[14]);
  t6155 = t57*t5513*t5533;
  t6632 = t6536*t6607;
  t6635 = t6155 + t6632;
  t6888 = -1.*t5513*t6536;
  t6892 = t57*t5533*t6607;
  t6949 = t6888 + t6892;
  t245 = Cos(var1[4]);
  t7176 = t5113*t6635;
  t7357 = t4789*t6949;
  t7367 = t7176 + t7357;
  t3823 = -0.08055*t3203;
  t4285 = -0.135*t4056;
  t4286 = 0. + t3823 + t4285;
  t5078 = 0.07996*t4891;
  t5245 = 0.135*t5113;
  t5395 = 0. + t5078 + t5245;
  t6652 = -0.135*t4891;
  t6656 = 0.07996*t5113;
  t6843 = 0. + t6652 + t6656;
  t7113 = -0.135*t3203;
  t7127 = 0.08055*t4056;
  t7152 = 0. + t7113 + t7127;
  t7936 = t5513*t6536*t5533;
  t8101 = -1.*t57*t6607;
  t8102 = t7936 + t8101;
  t8156 = t57*t5513;
  t8157 = t6536*t5533*t6607;
  t8159 = t8156 + t8157;
  t8165 = t5113*t8102;
  t8172 = t4789*t8159;
  t8201 = t8165 + t8172;
  t8577 = t245*t5513*t5113;
  t8644 = t4789*t245*t6607;
  t8711 = t8577 + t8644;
  p_output1[0]=0. + t245*t4286*t57 + t5395*t6635 + t6843*t6949 + 0.04566*(t4789*t6635 - 1.*t5113*t6949) + t7152*t7367 - 0.135*(-1.*t245*t4056*t57 + t1102*t7367) - 0.08055*(t1102*t245*t57 + t4056*t7367) + var1[0];
  p_output1[1]=0. + t245*t4286*t6536 + t5395*t8102 + t6843*t8159 + 0.04566*(t4789*t8102 - 1.*t5113*t8159) + t7152*t8201 - 0.135*(-1.*t245*t4056*t6536 + t1102*t8201) - 0.08055*(t1102*t245*t6536 + t4056*t8201) + var1[1];
  p_output1[2]=0. + t245*t5395*t5513 - 1.*t4286*t5533 + 0.04566*(t245*t4789*t5513 - 1.*t245*t5113*t6607) + t245*t6607*t6843 + t7152*t8711 - 0.135*(t4056*t5533 + t1102*t8711) - 0.08055*(-1.*t1102*t5533 + t4056*t8711) + var1[2];
}



void p_RightHip_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
