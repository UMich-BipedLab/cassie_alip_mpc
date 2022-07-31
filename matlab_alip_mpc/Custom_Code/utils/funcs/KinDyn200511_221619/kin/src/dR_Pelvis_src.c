/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_Pelvis_src.h"

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
  double t2338;
  double t1509;
  double t1924;
  double t2609;
  double t3052;
  double t3469;
  double t3520;
  double t3638;
  double t3683;
  double t3752;
  double t3853;
  double t3877;
  t2338 = Cos(var1[3]);
  t1509 = Cos(var1[4]);
  t1924 = Sin(var1[3]);
  t2609 = Sin(var1[4]);
  t3052 = Sin(var1[5]);
  t3469 = Cos(var1[5]);
  t3520 = t2338*t3469*t2609;
  t3638 = t1924*t3052;
  t3683 = t3520 + t3638;
  t3752 = -1.*t2338*t3469;
  t3853 = -1.*t1924*t2609*t3052;
  t3877 = t3752 + t3853;
  p_output1[0]=-1.*t1509*t1924*var2[3] - 1.*t2338*t2609*var2[4];
  p_output1[1]=t1509*t2338*var2[3] - 1.*t1924*t2609*var2[4];
  p_output1[2]=-1.*t1509*var2[4];
  p_output1[3]=t3877*var2[3] + t1509*t2338*t3052*var2[4] + t3683*var2[5];
  p_output1[4]=(t2338*t2609*t3052 - 1.*t1924*t3469)*var2[3] + t1509*t1924*t3052*var2[4] + (-1.*t2338*t3052 + t1924*t2609*t3469)*var2[5];
  p_output1[5]=-1.*t2609*t3052*var2[4] + t1509*t3469*var2[5];
  p_output1[6]=(t2338*t3052 - 1.*t1924*t2609*t3469)*var2[3] + t1509*t2338*t3469*var2[4] + (-1.*t2338*t2609*t3052 + t1924*t3469)*var2[5];
  p_output1[7]=t3683*var2[3] + t1509*t1924*t3469*var2[4] + t3877*var2[5];
  p_output1[8]=-1.*t2609*t3469*var2[4] - 1.*t1509*t3052*var2[5];
}



void dR_Pelvis_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
