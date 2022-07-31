/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:19 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "p_RightThighJoint_src.h"

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
  double t112;
  double t1777;
  double t1990;
  double t2178;
  double t3147;
  double t3449;
  double t3755;
  double t3456;
  double t3796;
  double t793;
  double t906;
  double t980;
  double t1171;
  double t3510;
  double t3805;
  double t3976;
  double t4280;
  double t4283;
  double t4351;
  double t442;
  double t4527;
  double t4549;
  double t4686;
  double t4694;
  double t4843;
  double t4893;
  double t4923;
  double t5028;
  double t5035;
  double t5098;
  double t5312;
  double t5340;
  double t5355;
  double t1139;
  double t1605;
  double t1666;
  double t2830;
  double t3333;
  double t3396;
  double t4166;
  double t4173;
  double t4196;
  double t4482;
  double t4499;
  double t4502;
  double t5572;
  double t5594;
  double t5652;
  double t5673;
  double t5676;
  double t5748;
  double t4918;
  double t4971;
  double t5008;
  double t5761;
  double t5770;
  double t5772;
  double t5213;
  double t5257;
  double t5307;
  double t5778;
  double t5784;
  double t5799;
  double t5825;
  double t5826;
  double t5832;
  double t5935;
  double t5936;
  double t5946;
  double t5983;
  double t6044;
  double t6053;
  double t6105;
  double t6110;
  double t6150;
  t112 = Cos(var1[3]);
  t1777 = Cos(var1[13]);
  t1990 = -1.*t1777;
  t2178 = 1. + t1990;
  t3147 = Sin(var1[13]);
  t3449 = Cos(var1[5]);
  t3755 = Sin(var1[3]);
  t3456 = Sin(var1[4]);
  t3796 = Sin(var1[5]);
  t793 = Cos(var1[14]);
  t906 = -1.*t793;
  t980 = 1. + t906;
  t1171 = Sin(var1[14]);
  t3510 = t112*t3449*t3456;
  t3805 = t3755*t3796;
  t3976 = t3510 + t3805;
  t4280 = -1.*t3449*t3755;
  t4283 = t112*t3456*t3796;
  t4351 = t4280 + t4283;
  t442 = Cos(var1[4]);
  t4527 = t3147*t3976;
  t4549 = t1777*t4351;
  t4686 = t4527 + t4549;
  t4694 = Cos(var1[15]);
  t4843 = -1.*t4694;
  t4893 = 1. + t4843;
  t4923 = Sin(var1[15]);
  t5028 = t1777*t3976;
  t5035 = -1.*t3147*t4351;
  t5098 = t5028 + t5035;
  t5312 = t793*t112*t442;
  t5340 = t1171*t4686;
  t5355 = t5312 + t5340;
  t1139 = -0.08055*t980;
  t1605 = -0.135*t1171;
  t1666 = 0. + t1139 + t1605;
  t2830 = 0.07996*t2178;
  t3333 = 0.135*t3147;
  t3396 = 0. + t2830 + t3333;
  t4166 = -0.135*t2178;
  t4173 = 0.07996*t3147;
  t4196 = 0. + t4166 + t4173;
  t4482 = -0.135*t980;
  t4499 = 0.08055*t1171;
  t4502 = 0. + t4482 + t4499;
  t5572 = t3449*t3755*t3456;
  t5594 = -1.*t112*t3796;
  t5652 = t5572 + t5594;
  t5673 = t112*t3449;
  t5676 = t3755*t3456*t3796;
  t5748 = t5673 + t5676;
  t4918 = -0.01004*t4893;
  t4971 = 0.08055*t4923;
  t5008 = 0. + t4918 + t4971;
  t5761 = t3147*t5652;
  t5770 = t1777*t5748;
  t5772 = t5761 + t5770;
  t5213 = -0.08055*t4893;
  t5257 = -0.01004*t4923;
  t5307 = 0. + t5213 + t5257;
  t5778 = t1777*t5652;
  t5784 = -1.*t3147*t5748;
  t5799 = t5778 + t5784;
  t5825 = t793*t442*t3755;
  t5826 = t1171*t5772;
  t5832 = t5825 + t5826;
  t5935 = t442*t3449*t3147;
  t5936 = t1777*t442*t3796;
  t5946 = t5935 + t5936;
  t5983 = t1777*t442*t3449;
  t6044 = -1.*t442*t3147*t3796;
  t6053 = t5983 + t6044;
  t6105 = -1.*t793*t3456;
  t6110 = t1171*t5946;
  t6150 = t6105 + t6110;
  p_output1[0]=0. + t3396*t3976 + t4196*t4351 + t112*t1666*t442 + t4502*t4686 + t5008*t5098 + t5307*t5355 - 0.08055*(t4923*t5098 + t4694*t5355) - 0.01004*(t4694*t5098 - 1.*t4923*t5355) - 0.135*(-1.*t112*t1171*t442 + t4686*t793) + var1[0];
  p_output1[1]=0. + t1666*t3755*t442 + t3396*t5652 + t4196*t5748 + t4502*t5772 + t5008*t5799 + t5307*t5832 - 0.08055*(t4923*t5799 + t4694*t5832) - 0.01004*(t4694*t5799 - 1.*t4923*t5832) - 0.135*(-1.*t1171*t3755*t442 + t5772*t793) + var1[1];
  p_output1[2]=0. - 1.*t1666*t3456 + t3396*t3449*t442 + t3796*t4196*t442 + t4502*t5946 + t5008*t6053 + t5307*t6150 - 0.08055*(t4923*t6053 + t4694*t6150) - 0.01004*(t4694*t6053 - 1.*t4923*t6150) - 0.135*(t1171*t3456 + t5946*t793) + var1[2];
}



void p_RightThighJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
