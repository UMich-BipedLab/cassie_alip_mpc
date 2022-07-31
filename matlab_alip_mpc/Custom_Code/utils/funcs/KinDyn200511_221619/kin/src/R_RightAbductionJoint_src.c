/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightAbductionJoint_src.h"

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
  double t609;
  double t227;
  double t2766;
  double t949;
  double t3447;
  double t3791;
  double t3279;
  double t4227;
  double t3787;
  double t3825;
  double t3833;
  double t4244;
  double t4423;
  double t4556;
  double t4823;
  double t4979;
  double t5007;
  double t5212;
  double t5364;
  double t5422;
  t609 = Cos(var1[4]);
  t227 = Cos(var1[3]);
  t2766 = Sin(var1[4]);
  t949 = Sin(var1[3]);
  t3447 = Cos(var1[5]);
  t3791 = Sin(var1[5]);
  t3279 = Sin(var1[13]);
  t4227 = Cos(var1[13]);
  t3787 = t227*t3447*t2766;
  t3825 = t949*t3791;
  t3833 = t3787 + t3825;
  t4244 = -1.*t3447*t949;
  t4423 = t227*t2766*t3791;
  t4556 = t4244 + t4423;
  t4823 = t3447*t949*t2766;
  t4979 = -1.*t227*t3791;
  t5007 = t4823 + t4979;
  t5212 = t227*t3447;
  t5364 = t949*t2766*t3791;
  t5422 = t5212 + t5364;
  p_output1[0]=t227*t609;
  p_output1[1]=t609*t949;
  p_output1[2]=-1.*t2766;
  p_output1[3]=t3279*t3833 + t4227*t4556;
  p_output1[4]=t3279*t5007 + t4227*t5422;
  p_output1[5]=t3279*t3447*t609 + t3791*t4227*t609;
  p_output1[6]=t3833*t4227 - 1.*t3279*t4556;
  p_output1[7]=t4227*t5007 - 1.*t3279*t5422;
  p_output1[8]=-1.*t3279*t3791*t609 + t3447*t4227*t609;
}



void R_RightAbductionJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
