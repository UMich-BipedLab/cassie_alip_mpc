/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftRotationJoint_src.h"

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
  double t2255;
  double t3600;
  double t570;
  double t2791;
  double t3693;
  double t3770;
  double t3772;
  double t3829;
  double t3852;
  double t2832;
  double t3731;
  double t3732;
  double t3867;
  double t3868;
  double t3870;
  double t3943;
  double t3944;
  double t3947;
  double t3954;
  double t3934;
  double t3939;
  double t3940;
  double t3963;
  double t3831;
  double t3853;
  double t3859;
  double t3871;
  double t3885;
  double t3897;
  double t4000;
  double t4001;
  double t4002;
  double t4004;
  double t4007;
  double t4008;
  double t3948;
  double t3956;
  double t3959;
  double t3965;
  double t3967;
  double t3970;
  double t4024;
  double t4031;
  double t4035;
  double t4069;
  double t4070;
  double t4072;
  t2255 = Cos(var1[5]);
  t3600 = Sin(var1[3]);
  t570 = Cos(var1[3]);
  t2791 = Sin(var1[4]);
  t3693 = Sin(var1[5]);
  t3770 = Cos(var1[6]);
  t3772 = -1.*t3770;
  t3829 = 1. + t3772;
  t3852 = Sin(var1[6]);
  t2832 = t570*t2255*t2791;
  t3731 = t3600*t3693;
  t3732 = t2832 + t3731;
  t3867 = -1.*t2255*t3600;
  t3868 = t570*t2791*t3693;
  t3870 = t3867 + t3868;
  t3943 = Cos(var1[7]);
  t3944 = -1.*t3943;
  t3947 = 1. + t3944;
  t3954 = Sin(var1[7]);
  t3934 = t3770*t3870;
  t3939 = t3732*t3852;
  t3940 = t3934 + t3939;
  t3963 = Cos(var1[4]);
  t3831 = 0.07996*t3829;
  t3853 = -0.135*t3852;
  t3859 = 0. + t3831 + t3853;
  t3871 = 0.135*t3829;
  t3885 = 0.07996*t3852;
  t3897 = 0. + t3871 + t3885;
  t4000 = t2255*t3600*t2791;
  t4001 = -1.*t570*t3693;
  t4002 = t4000 + t4001;
  t4004 = t570*t2255;
  t4007 = t3600*t2791*t3693;
  t4008 = t4004 + t4007;
  t3948 = 0.135*t3947;
  t3956 = 0.08055*t3954;
  t3959 = 0. + t3948 + t3956;
  t3965 = -0.08055*t3947;
  t3967 = 0.135*t3954;
  t3970 = 0. + t3965 + t3967;
  t4024 = t3770*t4008;
  t4031 = t4002*t3852;
  t4035 = t4024 + t4031;
  t4069 = t3963*t3770*t3693;
  t4070 = t3963*t2255*t3852;
  t4072 = t4069 + t4070;
  p_output1[0]=0. + t3732*t3859 - 0.01004*(t3732*t3770 - 1.*t3852*t3870) + t3870*t3897 + t3940*t3959 + t3963*t3970*t570 - 0.08055*(t3940*t3954 + t3943*t3963*t570) + 0.135*(t3940*t3943 - 1.*t3954*t3963*t570) + var1[0];
  p_output1[1]=0. + t3600*t3963*t3970 + t3859*t4002 + t3897*t4008 - 0.01004*(t3770*t4002 - 1.*t3852*t4008) + t3959*t4035 + 0.135*(-1.*t3600*t3954*t3963 + t3943*t4035) - 0.08055*(t3600*t3943*t3963 + t3954*t4035) + var1[1];
  p_output1[2]=0. + t2255*t3859*t3963 + t3693*t3897*t3963 - 0.01004*(t2255*t3770*t3963 - 1.*t3693*t3852*t3963) - 1.*t2791*t3970 + t3959*t4072 + 0.135*(t2791*t3954 + t3943*t4072) - 0.08055*(-1.*t2791*t3943 + t3954*t4072) + var1[2];
}



void p_LeftRotationJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
