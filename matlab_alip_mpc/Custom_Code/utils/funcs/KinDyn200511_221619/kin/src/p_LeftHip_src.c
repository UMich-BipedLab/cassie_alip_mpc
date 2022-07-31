/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftHip_src.h"

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
  double t1450;
  double t2916;
  double t743;
  double t1503;
  double t2978;
  double t3698;
  double t3997;
  double t4003;
  double t4829;
  double t2474;
  double t3043;
  double t3400;
  double t5391;
  double t5392;
  double t5420;
  double t8850;
  double t8989;
  double t9294;
  double t9414;
  double t7910;
  double t8672;
  double t8723;
  double t9456;
  double t4326;
  double t5095;
  double t5170;
  double t5425;
  double t5726;
  double t5749;
  double t9551;
  double t9552;
  double t9553;
  double t9559;
  double t9560;
  double t9561;
  double t9327;
  double t9420;
  double t9443;
  double t9479;
  double t9498;
  double t9505;
  double t9571;
  double t9579;
  double t9586;
  double t9648;
  double t9649;
  double t9653;
  t1450 = Cos(var1[5]);
  t2916 = Sin(var1[3]);
  t743 = Cos(var1[3]);
  t1503 = Sin(var1[4]);
  t2978 = Sin(var1[5]);
  t3698 = Cos(var1[6]);
  t3997 = -1.*t3698;
  t4003 = 1. + t3997;
  t4829 = Sin(var1[6]);
  t2474 = t743*t1450*t1503;
  t3043 = t2916*t2978;
  t3400 = t2474 + t3043;
  t5391 = -1.*t1450*t2916;
  t5392 = t743*t1503*t2978;
  t5420 = t5391 + t5392;
  t8850 = Cos(var1[7]);
  t8989 = -1.*t8850;
  t9294 = 1. + t8989;
  t9414 = Sin(var1[7]);
  t7910 = t3698*t5420;
  t8672 = t3400*t4829;
  t8723 = t7910 + t8672;
  t9456 = Cos(var1[4]);
  t4326 = 0.07996*t4003;
  t5095 = -0.135*t4829;
  t5170 = 0. + t4326 + t5095;
  t5425 = 0.135*t4003;
  t5726 = 0.07996*t4829;
  t5749 = 0. + t5425 + t5726;
  t9551 = t1450*t2916*t1503;
  t9552 = -1.*t743*t2978;
  t9553 = t9551 + t9552;
  t9559 = t743*t1450;
  t9560 = t2916*t1503*t2978;
  t9561 = t9559 + t9560;
  t9327 = 0.135*t9294;
  t9420 = 0.08055*t9414;
  t9443 = 0. + t9327 + t9420;
  t9479 = -0.08055*t9294;
  t9498 = 0.135*t9414;
  t9505 = 0. + t9479 + t9498;
  t9571 = t3698*t9561;
  t9579 = t9553*t4829;
  t9586 = t9571 + t9579;
  t9648 = t9456*t3698*t2978;
  t9649 = t9456*t1450*t4829;
  t9653 = t9648 + t9649;
  p_output1[0]=0. + t3400*t5170 + 0.04566*(t3400*t3698 - 1.*t4829*t5420) + t5420*t5749 + t8723*t9443 - 0.08055*(t8723*t9414 + t743*t8850*t9456) + 0.135*(t8723*t8850 - 1.*t743*t9414*t9456) + t743*t9456*t9505 + var1[0];
  p_output1[1]=0. + t2916*t9456*t9505 + t5170*t9553 + t5749*t9561 + 0.04566*(t3698*t9553 - 1.*t4829*t9561) + t9443*t9586 + 0.135*(-1.*t2916*t9414*t9456 + t8850*t9586) - 0.08055*(t2916*t8850*t9456 + t9414*t9586) + var1[1];
  p_output1[2]=0. + t1450*t5170*t9456 + t2978*t5749*t9456 + 0.04566*(t1450*t3698*t9456 - 1.*t2978*t4829*t9456) - 1.*t1503*t9505 + t9443*t9653 + 0.135*(t1503*t9414 + t8850*t9653) - 0.08055*(-1.*t1503*t8850 + t9414*t9653) + var1[2];
}



void p_LeftHip_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
