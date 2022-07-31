/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:48 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftPelvisRotation_src.h"

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
  double t959;
  double t1739;
  double t693;
  double t2627;
  double t2885;
  double t3646;
  double t2679;
  double t4076;
  double t3832;
  double t4007;
  double t4062;
  double t3561;
  double t3685;
  double t3711;
  double t4773;
  double t4785;
  double t4786;
  double t4384;
  double t4558;
  double t4741;
  t959 = Cos(var1[4]);
  t1739 = Sin(var1[3]);
  t693 = Cos(var1[3]);
  t2627 = Sin(var1[4]);
  t2885 = Cos(var1[5]);
  t3646 = Sin(var1[5]);
  t2679 = Cos(var1[6]);
  t4076 = Sin(var1[6]);
  t3832 = t693*t2885*t2627;
  t4007 = t1739*t3646;
  t4062 = t3832 + t4007;
  t3561 = -1.*t2885*t1739;
  t3685 = t693*t2627*t3646;
  t3711 = t3561 + t3685;
  t4773 = t2885*t1739*t2627;
  t4785 = -1.*t693*t3646;
  t4786 = t4773 + t4785;
  t4384 = t693*t2885;
  t4558 = t1739*t2627*t3646;
  t4741 = t4384 + t4558;
  p_output1[0]=t693*t959;
  p_output1[1]=t1739*t959;
  p_output1[2]=-1.*t2627;
  p_output1[3]=t2679*t3711 + t4062*t4076;
  p_output1[4]=t2679*t4741 + t4076*t4786;
  p_output1[5]=t2679*t3646*t959 + t2885*t4076*t959;
  p_output1[6]=t2679*t4062 - 1.*t3711*t4076;
  p_output1[7]=-1.*t4076*t4741 + t2679*t4786;
  p_output1[8]=t2679*t2885*t959 - 1.*t3646*t4076*t959;
}



void R_LeftPelvisRotation_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
