/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:37 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightKneeJoint_src.h"

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
  double t245;
  double t1949;
  double t2028;
  double t2622;
  double t2693;
  double t2733;
  double t2847;
  double t2768;
  double t2884;
  double t370;
  double t627;
  double t824;
  double t1024;
  double t2791;
  double t2953;
  double t2992;
  double t3489;
  double t3627;
  double t3688;
  double t334;
  double t4035;
  double t4036;
  double t4049;
  double t4144;
  double t4156;
  double t4160;
  double t4339;
  double t4782;
  double t4800;
  double t4874;
  double t5383;
  double t5386;
  double t5387;
  double t5561;
  double t5562;
  double t5563;
  double t5568;
  double t5579;
  double t5580;
  double t5588;
  double t5747;
  double t5752;
  double t5776;
  double t894;
  double t1242;
  double t1457;
  double t2646;
  double t2699;
  double t2725;
  double t3185;
  double t3254;
  double t3310;
  double t3841;
  double t3957;
  double t4020;
  double t5868;
  double t5871;
  double t5872;
  double t5886;
  double t5892;
  double t5905;
  double t4204;
  double t4746;
  double t4776;
  double t5911;
  double t5916;
  double t5917;
  double t5291;
  double t5319;
  double t5359;
  double t5565;
  double t5570;
  double t5571;
  double t5919;
  double t5928;
  double t5940;
  double t5966;
  double t5971;
  double t5972;
  double t5678;
  double t5685;
  double t5717;
  double t5985;
  double t5986;
  double t5990;
  double t5998;
  double t6024;
  double t6045;
  double t6091;
  double t6098;
  double t6102;
  double t6108;
  double t6109;
  double t6111;
  double t6123;
  double t6129;
  double t6130;
  double t6134;
  double t6136;
  double t6137;
  double t6148;
  double t6155;
  double t6157;
  t245 = Cos(var1[3]);
  t1949 = Cos(var1[13]);
  t2028 = -1.*t1949;
  t2622 = 1. + t2028;
  t2693 = Sin(var1[13]);
  t2733 = Cos(var1[5]);
  t2847 = Sin(var1[3]);
  t2768 = Sin(var1[4]);
  t2884 = Sin(var1[5]);
  t370 = Cos(var1[14]);
  t627 = -1.*t370;
  t824 = 1. + t627;
  t1024 = Sin(var1[14]);
  t2791 = t245*t2733*t2768;
  t2953 = t2847*t2884;
  t2992 = t2791 + t2953;
  t3489 = -1.*t2733*t2847;
  t3627 = t245*t2768*t2884;
  t3688 = t3489 + t3627;
  t334 = Cos(var1[4]);
  t4035 = t2693*t2992;
  t4036 = t1949*t3688;
  t4049 = t4035 + t4036;
  t4144 = Cos(var1[15]);
  t4156 = -1.*t4144;
  t4160 = 1. + t4156;
  t4339 = Sin(var1[15]);
  t4782 = t1949*t2992;
  t4800 = -1.*t2693*t3688;
  t4874 = t4782 + t4800;
  t5383 = t370*t245*t334;
  t5386 = t1024*t4049;
  t5387 = t5383 + t5386;
  t5561 = Cos(var1[16]);
  t5562 = -1.*t5561;
  t5563 = 1. + t5562;
  t5568 = Sin(var1[16]);
  t5579 = t4339*t4874;
  t5580 = t4144*t5387;
  t5588 = t5579 + t5580;
  t5747 = t4144*t4874;
  t5752 = -1.*t4339*t5387;
  t5776 = t5747 + t5752;
  t894 = -0.08055*t824;
  t1242 = -0.135*t1024;
  t1457 = 0. + t894 + t1242;
  t2646 = 0.07996*t2622;
  t2699 = 0.135*t2693;
  t2725 = 0. + t2646 + t2699;
  t3185 = -0.135*t2622;
  t3254 = 0.07996*t2693;
  t3310 = 0. + t3185 + t3254;
  t3841 = -0.135*t824;
  t3957 = 0.08055*t1024;
  t4020 = 0. + t3841 + t3957;
  t5868 = t2733*t2847*t2768;
  t5871 = -1.*t245*t2884;
  t5872 = t5868 + t5871;
  t5886 = t245*t2733;
  t5892 = t2847*t2768*t2884;
  t5905 = t5886 + t5892;
  t4204 = -0.01004*t4160;
  t4746 = 0.08055*t4339;
  t4776 = 0. + t4204 + t4746;
  t5911 = t2693*t5872;
  t5916 = t1949*t5905;
  t5917 = t5911 + t5916;
  t5291 = -0.08055*t4160;
  t5319 = -0.01004*t4339;
  t5359 = 0. + t5291 + t5319;
  t5565 = -0.08055*t5563;
  t5570 = -0.13004*t5568;
  t5571 = 0. + t5565 + t5570;
  t5919 = t1949*t5872;
  t5928 = -1.*t2693*t5905;
  t5940 = t5919 + t5928;
  t5966 = t370*t334*t2847;
  t5971 = t1024*t5917;
  t5972 = t5966 + t5971;
  t5678 = -0.13004*t5563;
  t5685 = 0.08055*t5568;
  t5717 = 0. + t5678 + t5685;
  t5985 = t4339*t5940;
  t5986 = t4144*t5972;
  t5990 = t5985 + t5986;
  t5998 = t4144*t5940;
  t6024 = -1.*t4339*t5972;
  t6045 = t5998 + t6024;
  t6091 = t334*t2733*t2693;
  t6098 = t1949*t334*t2884;
  t6102 = t6091 + t6098;
  t6108 = t1949*t334*t2733;
  t6109 = -1.*t334*t2693*t2884;
  t6111 = t6108 + t6109;
  t6123 = -1.*t370*t2768;
  t6129 = t1024*t6102;
  t6130 = t6123 + t6129;
  t6134 = t4339*t6111;
  t6136 = t4144*t6130;
  t6137 = t6134 + t6136;
  t6148 = t4144*t6111;
  t6155 = -1.*t4339*t6130;
  t6157 = t6148 + t6155;
  p_output1[0]=0. + t2725*t2992 + t1457*t245*t334 + t3310*t3688 + t4020*t4049 - 0.1305*(-1.*t1024*t245*t334 + t370*t4049) + t4776*t4874 + t5359*t5387 + t5571*t5588 + t5717*t5776 - 0.13004*(-1.*t5568*t5588 + t5561*t5776) - 0.08055*(t5561*t5588 + t5568*t5776) + var1[0];
  p_output1[1]=0. + t1457*t2847*t334 + t2725*t5872 + t3310*t5905 + t4020*t5917 - 0.1305*(-1.*t1024*t2847*t334 + t370*t5917) + t4776*t5940 + t5359*t5972 + t5571*t5990 + t5717*t6045 - 0.13004*(-1.*t5568*t5990 + t5561*t6045) - 0.08055*(t5561*t5990 + t5568*t6045) + var1[1];
  p_output1[2]=0. - 1.*t1457*t2768 + t2725*t2733*t334 + t2884*t3310*t334 + t4020*t6102 - 0.1305*(t1024*t2768 + t370*t6102) + t4776*t6111 + t5359*t6130 + t5571*t6137 + t5717*t6157 - 0.13004*(-1.*t5568*t6137 + t5561*t6157) - 0.08055*(t5561*t6137 + t5568*t6157) + var1[2];
}



void p_RightKneeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
