/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:53 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftRotationJoint_src.h"

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
  double t1119;
  double t1771;
  double t289;
  double t1528;
  double t1819;
  double t263;
  double t2223;
  double t3524;
  double t2033;
  double t2040;
  double t2080;
  double t1535;
  double t1830;
  double t1938;
  double t3787;
  double t3341;
  double t3342;
  double t3349;
  double t2460;
  double t3114;
  double t3127;
  double t4122;
  double t4065;
  double t4088;
  double t4101;
  double t4612;
  double t4622;
  double t4631;
  double t4773;
  double t4779;
  double t4785;
  t1119 = Cos(var1[5]);
  t1771 = Sin(var1[3]);
  t289 = Cos(var1[3]);
  t1528 = Sin(var1[4]);
  t1819 = Sin(var1[5]);
  t263 = Cos(var1[6]);
  t2223 = Sin(var1[6]);
  t3524 = Cos(var1[4]);
  t2033 = -1.*t1119*t1771;
  t2040 = t289*t1528*t1819;
  t2080 = t2033 + t2040;
  t1535 = t289*t1119*t1528;
  t1830 = t1771*t1819;
  t1938 = t1535 + t1830;
  t3787 = Cos(var1[7]);
  t3341 = t289*t1119;
  t3342 = t1771*t1528*t1819;
  t3349 = t3341 + t3342;
  t2460 = t1119*t1771*t1528;
  t3114 = -1.*t289*t1819;
  t3127 = t2460 + t3114;
  t4122 = Sin(var1[7]);
  t4065 = t263*t2080;
  t4088 = t1938*t2223;
  t4101 = t4065 + t4088;
  t4612 = t263*t3349;
  t4622 = t3127*t2223;
  t4631 = t4612 + t4622;
  t4773 = t3524*t263*t1819;
  t4779 = t3524*t1119*t2223;
  t4785 = t4773 + t4779;
  p_output1[0]=t2080*t2223 - 1.*t1938*t263;
  p_output1[1]=-1.*t263*t3127 + t2223*t3349;
  p_output1[2]=t1819*t2223*t3524 - 1.*t1119*t263*t3524;
  p_output1[3]=t289*t3524*t3787 + t4101*t4122;
  p_output1[4]=t1771*t3524*t3787 + t4122*t4631;
  p_output1[5]=-1.*t1528*t3787 + t4122*t4785;
  p_output1[6]=-1.*t3787*t4101 + t289*t3524*t4122;
  p_output1[7]=t1771*t3524*t4122 - 1.*t3787*t4631;
  p_output1[8]=-1.*t1528*t4122 - 1.*t3787*t4785;
}



void R_LeftRotationJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
