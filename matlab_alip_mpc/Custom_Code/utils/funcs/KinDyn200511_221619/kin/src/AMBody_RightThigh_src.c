/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMBody_RightThigh_src.h"

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
  double t66;
  double t719;
  double t1670;
  double t2456;
  double t2519;
  double t2759;
  double t3183;
  double t852;
  double t1836;
  double t1839;
  double t3760;
  double t4891;
  double t5046;
  double t5089;
  double t5181;
  double t5188;
  double t5528;
  double t5585;
  double t4252;
  double t4282;
  double t6135;
  double t6198;
  double t6302;
  double t5631;
  double t5635;
  double t6128;
  double t6668;
  double t6673;
  double t6645;
  double t6650;
  double t6836;
  double t6837;
  double t6946;
  double t6948;
  double t6950;
  double t6790;
  double t6885;
  double t6942;
  double t826;
  double t838;
  double t2502;
  double t3798;
  double t3821;
  double t4100;
  double t4261;
  double t4359;
  double t4472;
  double t4478;
  double t4625;
  double t4655;
  double t4710;
  double t4788;
  double t5092;
  double t5136;
  double t5296;
  double t6131;
  double t6308;
  double t6364;
  double t6464;
  double t6470;
  double t6476;
  double t6477;
  double t6558;
  double t6574;
  double t6582;
  double t6616;
  double t6628;
  double t6658;
  double t6676;
  double t6692;
  double t6943;
  double t6963;
  double t6966;
  double t6969;
  double t6972;
  double t6973;
  double t6977;
  double t6980;
  double t6981;
  double t6986;
  double t6992;
  double t6993;
  t66 = Sin(var1[14]);
  t719 = 0. + t66;
  t1670 = Cos(var1[14]);
  t2456 = Cos(var1[5]);
  t2519 = Sin(var1[13]);
  t2759 = -1.*t1670*t2519;
  t3183 = 0. + t2759;
  t852 = Cos(var1[13]);
  t1836 = -1.*t852*t1670;
  t1839 = 0. + t1836;
  t3760 = Sin(var1[5]);
  t4891 = Cos(var1[15]);
  t5046 = t1670*t4891;
  t5089 = 0. + t5046;
  t5181 = Sin(var1[15]);
  t5188 = 0. + t5181;
  t5528 = t4891*t66;
  t5585 = 0. + t5528;
  t4252 = Sin(var1[4]);
  t4282 = Cos(var1[4]);
  t6135 = t2519*t5585;
  t6198 = t852*t5188;
  t6302 = 0. + t6135 + t6198;
  t5631 = t852*t5585;
  t5635 = -1.*t2519*t5188;
  t6128 = 0. + t5631 + t5635;
  t6668 = t1670*t5181;
  t6673 = 0. + t6668;
  t6645 = -1.*t4891;
  t6650 = 0. + t6645;
  t6836 = t66*t5181;
  t6837 = 0. + t6836;
  t6946 = t852*t6650;
  t6948 = t2519*t6837;
  t6950 = 0. + t6946 + t6948;
  t6790 = -1.*t6650*t2519;
  t6885 = t852*t6837;
  t6942 = 0. + t6790 + t6885;
  t826 = var2[13]*t719;
  t838 = var2[5]*t719;
  t2502 = t1839*t2456;
  t3798 = -1.*t3183*t3760;
  t3821 = 0. + t2502 + t3798;
  t4100 = var2[4]*t3821;
  t4261 = -1.*t719*t4252;
  t4359 = t2456*t3183;
  t4472 = t1839*t3760;
  t4478 = 0. + t4359 + t4472;
  t4625 = t4282*t4478;
  t4655 = 0. + t4261 + t4625;
  t4710 = var2[3]*t4655;
  t4788 = 0. + var2[15] + t826 + t838 + t4100 + t4710;
  t5092 = var2[13]*t5089;
  t5136 = var2[5]*t5089;
  t5296 = var2[14]*t5188;
  t6131 = t2456*t6128;
  t6308 = -1.*t6302*t3760;
  t6364 = 0. + t6131 + t6308;
  t6464 = var2[4]*t6364;
  t6470 = -1.*t5089*t4252;
  t6476 = t2456*t6302;
  t6477 = t6128*t3760;
  t6558 = 0. + t6476 + t6477;
  t6574 = t4282*t6558;
  t6582 = 0. + t6470 + t6574;
  t6616 = var2[3]*t6582;
  t6628 = 0. + t5092 + t5136 + t5296 + t6464 + t6616;
  t6658 = var2[14]*t6650;
  t6676 = var2[13]*t6673;
  t6692 = var2[5]*t6673;
  t6943 = t2456*t6942;
  t6963 = -1.*t6950*t3760;
  t6966 = 0. + t6943 + t6963;
  t6969 = var2[4]*t6966;
  t6972 = -1.*t6673*t4252;
  t6973 = t2456*t6950;
  t6977 = t6942*t3760;
  t6980 = 0. + t6973 + t6977;
  t6981 = t4282*t6980;
  t6986 = 0. + t6972 + t6981;
  t6992 = var2[3]*t6986;
  t6993 = 0. + t6658 + t6676 + t6692 + t6969 + t6992;
  p_output1[0]=0.0117*t4788 + 0.000284*t6628 + 0.018*t6993;
  p_output1[1]=0.000019*t4788 + 0.0563*t6628 + 0.000284*t6993;
  p_output1[2]=0.0498*t4788 + 0.000019*t6628 + 0.0117*t6993;
}



void AMBody_RightThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
