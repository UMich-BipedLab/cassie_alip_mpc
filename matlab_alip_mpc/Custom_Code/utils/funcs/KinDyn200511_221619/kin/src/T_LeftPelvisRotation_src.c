/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftPelvisRotation_src.h"

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
  double t527;
  double t935;
  double t165;
  double t1218;
  double t1435;
  double t1605;
  double t1401;
  double t2582;
  double t2352;
  double t2432;
  double t2482;
  double t1474;
  double t1612;
  double t1683;
  double t3665;
  double t3690;
  double t3711;
  double t3221;
  double t3301;
  double t3538;
  double t4539;
  double t4551;
  double t1911;
  double t2931;
  double t3215;
  double t4378;
  double t4417;
  double t4437;
  double t4558;
  double t4602;
  double t4618;
  double t4741;
  double t4746;
  double t4760;
  double t3646;
  double t3743;
  double t3812;
  double t4438;
  double t4464;
  double t4473;
  double t4044;
  double t4062;
  double t4142;
  double t4474;
  double t4507;
  double t4511;
  t527 = Cos(var1[4]);
  t935 = Sin(var1[3]);
  t165 = Cos(var1[3]);
  t1218 = Sin(var1[4]);
  t1435 = Cos(var1[5]);
  t1605 = Sin(var1[5]);
  t1401 = Cos(var1[6]);
  t2582 = Sin(var1[6]);
  t2352 = t165*t1435*t1218;
  t2432 = t935*t1605;
  t2482 = t2352 + t2432;
  t1474 = -1.*t1435*t935;
  t1612 = t165*t1218*t1605;
  t1683 = t1474 + t1612;
  t3665 = t1435*t935*t1218;
  t3690 = -1.*t165*t1605;
  t3711 = t3665 + t3690;
  t3221 = t165*t1435;
  t3301 = t935*t1218*t1605;
  t3538 = t3221 + t3301;
  t4539 = -1.*t1401;
  t4551 = 1. + t4539;
  t1911 = t1401*t1683;
  t2931 = t2482*t2582;
  t3215 = t1911 + t2931;
  t4378 = t1401*t2482;
  t4417 = -1.*t1683*t2582;
  t4437 = t4378 + t4417;
  t4558 = 0.07996*t4551;
  t4602 = -0.135*t2582;
  t4618 = 0. + t4558 + t4602;
  t4741 = 0.135*t4551;
  t4746 = 0.07996*t2582;
  t4760 = 0. + t4741 + t4746;
  t3646 = t1401*t3538;
  t3743 = t3711*t2582;
  t3812 = t3646 + t3743;
  t4438 = t1401*t3711;
  t4464 = -1.*t3538*t2582;
  t4473 = t4438 + t4464;
  t4044 = t527*t1401*t1605;
  t4062 = t527*t1435*t2582;
  t4142 = t4044 + t4062;
  t4474 = t527*t1435*t1401;
  t4507 = -1.*t527*t1605*t2582;
  t4511 = t4474 + t4507;
  p_output1[0]=t165*t527;
  p_output1[1]=t527*t935;
  p_output1[2]=-1.*t1218;
  p_output1[3]=0.;
  p_output1[4]=t3215;
  p_output1[5]=t3812;
  p_output1[6]=t4142;
  p_output1[7]=0.;
  p_output1[8]=t4437;
  p_output1[9]=t4473;
  p_output1[10]=t4511;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1351*t3215 + 0.09786*t4437 + t2482*t4618 + t1683*t4760 - 0.05485*t165*t527 + var1[0];
  p_output1[13]=0. + 0.1351*t3812 + 0.09786*t4473 + t3711*t4618 + t3538*t4760 - 0.05485*t527*t935 + var1[1];
  p_output1[14]=0. + 0.05485*t1218 + 0.1351*t4142 + 0.09786*t4511 + t1435*t4618*t527 + t1605*t4760*t527 + var1[2];
  p_output1[15]=1.;
}



void T_LeftPelvisRotation_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
