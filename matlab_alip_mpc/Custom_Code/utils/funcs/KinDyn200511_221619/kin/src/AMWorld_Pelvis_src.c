/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:28 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_Pelvis_src.h"

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
  double t478;
  double t3282;
  double t3873;
  double t269;
  double t607;
  double t1689;
  double t1707;
  double t3868;
  double t3884;
  double t3928;
  double t4250;
  double t4286;
  double t4302;
  double t4657;
  double t2270;
  double t4208;
  double t4376;
  double t4515;
  double t4695;
  double t4731;
  double t4745;
  double t4775;
  double t4889;
  double t4907;
  double t4965;
  double t5044;
  t478 = Cos(var1[4]);
  t3282 = Cos(var1[5]);
  t3873 = Sin(var1[5]);
  t269 = Cos(var1[3]);
  t607 = Sin(var1[4]);
  t1689 = -1.*var2[3]*t607;
  t1707 = var2[5] + t1689;
  t3868 = var2[3]*t478*t3282;
  t3884 = -1.*var2[4]*t3873;
  t3928 = 0. + t3868 + t3884;
  t4250 = var2[4]*t3282;
  t4286 = var2[3]*t478*t3873;
  t4302 = 0. + t4250 + t4286;
  t4657 = Sin(var1[3]);
  t2270 = 0.0942*t1707;
  t4208 = 0.015*t3928;
  t4376 = 0.000169*t4302;
  t4515 = t2270 + t4208 + t4376;
  t4695 = 0.015*t1707;
  t4731 = 0.113*t3928;
  t4745 = 0.000516*t4302;
  t4775 = t4695 + t4731 + t4745;
  t4889 = 0.000169*t1707;
  t4907 = 0.000516*t3928;
  t4965 = 0.084*t4302;
  t5044 = t4889 + t4907 + t4965;
  p_output1[0]=t269*t4515*t478 + t4775*(t3873*t4657 + t269*t3282*t607) + t5044*(-1.*t3282*t4657 + t269*t3873*t607);
  p_output1[1]=t4515*t4657*t478 + t4775*(-1.*t269*t3873 + t3282*t4657*t607) + t5044*(t269*t3282 + t3873*t4657*t607);
  p_output1[2]=t3282*t4775*t478 + t3873*t478*t5044 - 1.*t4515*t607;
}



void AMWorld_Pelvis_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
