/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:17:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dT_BaseRotY_src.h"

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
  double t539;
  double t526;
  double t533;
  double t546;
  t539 = Cos(var1[3]);
  t526 = Cos(var1[4]);
  t533 = Sin(var1[3]);
  t546 = Sin(var1[4]);
  p_output1[0]=-1.*t526*t533*var2[3] - 1.*t539*t546*var2[4];
  p_output1[1]=t526*t539*var2[3] - 1.*t533*t546*var2[4];
  p_output1[2]=-1.*t526*var2[4];
  p_output1[3]=0;
  p_output1[4]=-1.*t539*var2[3];
  p_output1[5]=-1.*t533*var2[3];
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=-1.*t533*t546*var2[3] + t526*t539*var2[4];
  p_output1[9]=t539*t546*var2[3] + t526*t533*var2[4];
  p_output1[10]=-1.*t546*var2[4];
  p_output1[11]=0;
  p_output1[12]=var2[0];
  p_output1[13]=var2[1];
  p_output1[14]=var2[2];
  p_output1[15]=0;
}



void dT_BaseRotY_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
