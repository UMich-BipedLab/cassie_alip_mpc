/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:51 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_LeftThigh_src.h"

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
  double t599;
  double t2009;
  double t2114;
  double t530;
  double t649;
  double t769;
  double t1470;
  double t326;
  double t1661;
  double t1728;
  double t1791;
  double t4200;
  double t4206;
  double t4250;
  double t4379;
  double t4386;
  double t4442;
  double t4675;
  double t3477;
  double t2742;
  double t4750;
  double t4755;
  double t4871;
  double t4998;
  double t5039;
  double t5041;
  double t5611;
  double t5612;
  double t5578;
  double t5587;
  double t5685;
  double t5696;
  double t5678;
  double t5708;
  double t5711;
  double t5739;
  double t5756;
  double t5777;
  double t815;
  double t1908;
  double t1945;
  double t1981;
  double t2179;
  double t2222;
  double t2749;
  double t2753;
  double t2786;
  double t3013;
  double t3579;
  double t3596;
  double t4040;
  double t4076;
  double t4312;
  double t4362;
  double t4405;
  double t4932;
  double t5078;
  double t5172;
  double t5190;
  double t5232;
  double t5239;
  double t5385;
  double t5421;
  double t5541;
  double t5553;
  double t5567;
  double t5568;
  double t5602;
  double t5638;
  double t5677;
  double t5719;
  double t5799;
  double t5820;
  double t5824;
  double t5826;
  double t5858;
  double t5859;
  double t5887;
  double t5890;
  double t5964;
  double t5968;
  double t5969;
  t599 = Cos(var1[7]);
  t2009 = Sin(var1[7]);
  t2114 = 0. + t2009;
  t530 = Cos(var1[6]);
  t649 = -1.*t530*t599;
  t769 = 0. + t649;
  t1470 = Sin(var1[5]);
  t326 = Cos(var1[5]);
  t1661 = Sin(var1[6]);
  t1728 = -1.*t599*t1661;
  t1791 = 0. + t1728;
  t4200 = Cos(var1[8]);
  t4206 = t599*t4200;
  t4250 = 0. + t4206;
  t4379 = Sin(var1[8]);
  t4386 = 0. + t4379;
  t4442 = t4200*t2009;
  t4675 = 0. + t4442;
  t3477 = Sin(var1[4]);
  t2742 = Cos(var1[4]);
  t4750 = t1661*t4675;
  t4755 = t530*t4386;
  t4871 = 0. + t4750 + t4755;
  t4998 = t530*t4675;
  t5039 = -1.*t1661*t4386;
  t5041 = 0. + t4998 + t5039;
  t5611 = t599*t4379;
  t5612 = 0. + t5611;
  t5578 = -1.*t4200;
  t5587 = 0. + t5578;
  t5685 = t2009*t4379;
  t5696 = 0. + t5685;
  t5678 = -1.*t5587*t1661;
  t5708 = t530*t5696;
  t5711 = 0. + t5678 + t5708;
  t5739 = t530*t5587;
  t5756 = t1661*t5696;
  t5777 = 0. + t5739 + t5756;
  t815 = t326*t769;
  t1908 = -1.*t1470*t1791;
  t1945 = 0. + t815 + t1908;
  t1981 = var2[4]*t1945;
  t2179 = var2[5]*t2114;
  t2222 = var2[6]*t2114;
  t2749 = t769*t1470;
  t2753 = t326*t1791;
  t2786 = 0. + t2749 + t2753;
  t3013 = t2742*t2786;
  t3579 = -1.*t3477*t2114;
  t3596 = 0. + t3013 + t3579;
  t4040 = var2[3]*t3596;
  t4076 = 0. + var2[8] + t1981 + t2179 + t2222 + t4040;
  t4312 = var2[5]*t4250;
  t4362 = var2[6]*t4250;
  t4405 = var2[7]*t4386;
  t4932 = -1.*t1470*t4871;
  t5078 = t326*t5041;
  t5172 = 0. + t4932 + t5078;
  t5190 = var2[4]*t5172;
  t5232 = -1.*t4250*t3477;
  t5239 = t326*t4871;
  t5385 = t1470*t5041;
  t5421 = 0. + t5239 + t5385;
  t5541 = t2742*t5421;
  t5553 = 0. + t5232 + t5541;
  t5567 = var2[3]*t5553;
  t5568 = 0. + t4312 + t4362 + t4405 + t5190 + t5567;
  t5602 = var2[7]*t5587;
  t5638 = var2[5]*t5612;
  t5677 = var2[6]*t5612;
  t5719 = t326*t5711;
  t5799 = -1.*t1470*t5777;
  t5820 = 0. + t5719 + t5799;
  t5824 = var2[4]*t5820;
  t5826 = -1.*t3477*t5612;
  t5858 = t1470*t5711;
  t5859 = t326*t5777;
  t5887 = 0. + t5858 + t5859;
  t5890 = t2742*t5887;
  t5964 = 0. + t5826 + t5890;
  t5968 = var2[3]*t5964;
  t5969 = 0. + t5602 + t5638 + t5677 + t5824 + t5968;
  p_output1[0]=-0.0117*t4076 + 0.000284*t5568 + 0.018*t5969;
  p_output1[1]=-0.000019*t4076 + 0.0563*t5568 + 0.000284*t5969;
  p_output1[2]=0.0498*t4076 - 0.000019*t5568 - 0.0117*t5969;
}



void AMBody_LeftThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
