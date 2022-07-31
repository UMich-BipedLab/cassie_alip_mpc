/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_LeftThigh_src.h"

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
  double t1647;
  double t1822;
  double t1618;
  double t1652;
  double t2374;
  double t2441;
  double t2516;
  double t2535;
  double t2607;
  double t3082;
  double t3137;
  double t3159;
  double t1821;
  double t2394;
  double t2405;
  double t3553;
  double t3677;
  double t3754;
  double t3819;
  double t3527;
  double t3535;
  double t3538;
  double t4384;
  double t4830;
  double t4949;
  double t5038;
  double t5105;
  double t4698;
  double t4780;
  double t4791;
  double t5259;
  double t5262;
  double t5287;
  double t2599;
  double t2649;
  double t2816;
  double t3189;
  double t3438;
  double t3456;
  double t5779;
  double t5796;
  double t5875;
  double t5734;
  double t5737;
  double t5744;
  double t3769;
  double t3820;
  double t3874;
  double t4425;
  double t4440;
  double t4446;
  double t5900;
  double t5901;
  double t5905;
  double t5102;
  double t5134;
  double t5221;
  double t5364;
  double t5430;
  double t5440;
  double t6001;
  double t6023;
  double t6024;
  double t6042;
  double t6045;
  double t6047;
  double t6119;
  double t6121;
  double t6127;
  double t6157;
  double t6177;
  double t6179;
  double t6184;
  double t6185;
  double t6189;
  t1647 = Cos(var1[5]);
  t1822 = Sin(var1[3]);
  t1618 = Cos(var1[3]);
  t1652 = Sin(var1[4]);
  t2374 = Sin(var1[5]);
  t2441 = Cos(var1[6]);
  t2516 = -1.*t2441;
  t2535 = 1. + t2516;
  t2607 = Sin(var1[6]);
  t3082 = -1.*t1647*t1822;
  t3137 = t1618*t1652*t2374;
  t3159 = t3082 + t3137;
  t1821 = t1618*t1647*t1652;
  t2394 = t1822*t2374;
  t2405 = t1821 + t2394;
  t3553 = Cos(var1[7]);
  t3677 = -1.*t3553;
  t3754 = 1. + t3677;
  t3819 = Sin(var1[7]);
  t3527 = t2441*t3159;
  t3535 = t2405*t2607;
  t3538 = t3527 + t3535;
  t4384 = Cos(var1[4]);
  t4830 = Cos(var1[8]);
  t4949 = -1.*t4830;
  t5038 = 1. + t4949;
  t5105 = Sin(var1[8]);
  t4698 = t1618*t4384*t3553;
  t4780 = t3538*t3819;
  t4791 = t4698 + t4780;
  t5259 = t2441*t2405;
  t5262 = -1.*t3159*t2607;
  t5287 = t5259 + t5262;
  t2599 = 0.07996*t2535;
  t2649 = -0.135*t2607;
  t2816 = 0. + t2599 + t2649;
  t3189 = 0.135*t2535;
  t3438 = 0.07996*t2607;
  t3456 = 0. + t3189 + t3438;
  t5779 = t1618*t1647;
  t5796 = t1822*t1652*t2374;
  t5875 = t5779 + t5796;
  t5734 = t1647*t1822*t1652;
  t5737 = -1.*t1618*t2374;
  t5744 = t5734 + t5737;
  t3769 = 0.135*t3754;
  t3820 = 0.08055*t3819;
  t3874 = 0. + t3769 + t3820;
  t4425 = -0.08055*t3754;
  t4440 = 0.135*t3819;
  t4446 = 0. + t4425 + t4440;
  t5900 = t2441*t5875;
  t5901 = t5744*t2607;
  t5905 = t5900 + t5901;
  t5102 = -0.08055*t5038;
  t5134 = -0.01004*t5105;
  t5221 = 0. + t5102 + t5134;
  t5364 = -0.01004*t5038;
  t5430 = 0.08055*t5105;
  t5440 = 0. + t5364 + t5430;
  t6001 = t4384*t3553*t1822;
  t6023 = t5905*t3819;
  t6024 = t6001 + t6023;
  t6042 = t2441*t5744;
  t6045 = -1.*t5875*t2607;
  t6047 = t6042 + t6045;
  t6119 = t4384*t2441*t2374;
  t6121 = t4384*t1647*t2607;
  t6127 = t6119 + t6121;
  t6157 = -1.*t3553*t1652;
  t6177 = t6127*t3819;
  t6179 = t6157 + t6177;
  t6184 = t4384*t1647*t2441;
  t6185 = -1.*t4384*t2374*t2607;
  t6189 = t6184 + t6185;
  p_output1[0]=0. + t2405*t2816 + t3159*t3456 + t3538*t3874 + 0.1708*(t3538*t3553 - 1.*t1618*t3819*t4384) + t1618*t4384*t4446 + t4791*t5221 - 0.06984*(-1.*t4791*t5105 + t4830*t5287) - 0.08045*(t4791*t4830 + t5105*t5287) + t5287*t5440 + var1[0];
  p_output1[1]=0. + t1822*t4384*t4446 + t2816*t5744 + t3456*t5875 + t3874*t5905 + 0.1708*(-1.*t1822*t3819*t4384 + t3553*t5905) + t5221*t6024 + t5440*t6047 - 0.06984*(-1.*t5105*t6024 + t4830*t6047) - 0.08045*(t4830*t6024 + t5105*t6047) + var1[1];
  p_output1[2]=0. + t1647*t2816*t4384 + t2374*t3456*t4384 - 1.*t1652*t4446 + t3874*t6127 + 0.1708*(t1652*t3819 + t3553*t6127) + t5221*t6179 + t5440*t6189 - 0.06984*(-1.*t5105*t6179 + t4830*t6189) - 0.08045*(t4830*t6179 + t5105*t6189) + var1[2];
}



void p_LeftThigh_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
