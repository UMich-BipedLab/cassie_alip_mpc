/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:34 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightPelvisRotation_src.h"

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
  double t1507;
  double t1285;
  double t2055;
  double t1757;
  double t2377;
  double t2598;
  double t2259;
  double t2992;
  double t2453;
  double t2600;
  double t2731;
  double t3485;
  double t3689;
  double t3736;
  double t3799;
  double t3860;
  double t3881;
  double t3963;
  double t4053;
  double t4061;
  t1507 = Cos(var1[4]);
  t1285 = Cos(var1[3]);
  t2055 = Sin(var1[4]);
  t1757 = Sin(var1[3]);
  t2377 = Cos(var1[5]);
  t2598 = Sin(var1[5]);
  t2259 = Sin(var1[13]);
  t2992 = Cos(var1[13]);
  t2453 = t1285*t2377*t2055;
  t2600 = t1757*t2598;
  t2731 = t2453 + t2600;
  t3485 = -1.*t2377*t1757;
  t3689 = t1285*t2055*t2598;
  t3736 = t3485 + t3689;
  t3799 = t2377*t1757*t2055;
  t3860 = -1.*t1285*t2598;
  t3881 = t3799 + t3860;
  t3963 = t1285*t2377;
  t4053 = t1757*t2055*t2598;
  t4061 = t3963 + t4053;
  p_output1[0]=t1285*t1507;
  p_output1[1]=t1507*t1757;
  p_output1[2]=-1.*t2055;
  p_output1[3]=t2259*t2731 + t2992*t3736;
  p_output1[4]=t2259*t3881 + t2992*t4061;
  p_output1[5]=t1507*t2259*t2377 + t1507*t2598*t2992;
  p_output1[6]=t2731*t2992 - 1.*t2259*t3736;
  p_output1[7]=t2992*t3881 - 1.*t2259*t4061;
  p_output1[8]=-1.*t1507*t2259*t2598 + t1507*t2377*t2992;
}



void R_RightPelvisRotation_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
