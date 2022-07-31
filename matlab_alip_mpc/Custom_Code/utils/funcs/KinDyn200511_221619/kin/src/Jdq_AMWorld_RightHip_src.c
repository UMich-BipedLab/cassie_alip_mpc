/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_RightHip_src.h"

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
  double t358;
  double t753;
  double t297;
  double t442;
  double t817;
  double t945;
  double t15;
  double t1641;
  double t1628;
  double t1515;
  double t1517;
  double t1614;
  double t1642;
  double t1647;
  double t1660;
  double t1677;
  double t1680;
  double t1713;
  double t1718;
  double t1749;
  double t1769;
  double t1807;
  double t1898;
  double t1928;
  double t2028;
  double t2095;
  double t699;
  double t848;
  double t866;
  double t1258;
  double t1381;
  double t1382;
  double t2343;
  double t2346;
  double t2435;
  double t1797;
  double t2117;
  double t2125;
  double t2203;
  double t2225;
  double t2254;
  double t3084;
  double t3189;
  double t3217;
  double t3273;
  double t3292;
  double t3325;
  double t2530;
  double t2531;
  double t2548;
  double t2580;
  double t2590;
  double t2605;
  double t2610;
  double t2616;
  double t2714;
  double t2787;
  double t2850;
  double t3476;
  double t3575;
  double t3631;
  double t3893;
  double t3894;
  double t3926;
  double t930;
  double t1498;
  double t1500;
  double t4269;
  double t4282;
  double t4289;
  double t4375;
  double t4430;
  double t4531;
  double t2334;
  double t2440;
  double t2457;
  double t2907;
  double t2990;
  double t2996;
  double t4358;
  double t4557;
  double t4561;
  double t3239;
  double t3329;
  double t3338;
  double t4592;
  double t4593;
  double t4598;
  double t3413;
  double t3646;
  double t3661;
  double t4638;
  double t4678;
  double t4695;
  double t3707;
  double t3709;
  double t3740;
  double t3876;
  double t3932;
  double t3934;
  double t4146;
  double t4154;
  double t4211;
  double t4048;
  double t4058;
  double t4065;
  double t4792;
  double t4806;
  double t4817;
  double t4857;
  double t4863;
  double t4872;
  double t4880;
  double t4884;
  double t4894;
  double t4905;
  double t4914;
  double t4916;
  t358 = Cos(var1[5]);
  t753 = Sin(var1[3]);
  t297 = Cos(var1[3]);
  t442 = Sin(var1[4]);
  t817 = Sin(var1[5]);
  t945 = Sin(var1[13]);
  t15 = Cos(var1[13]);
  t1641 = Cos(var1[14]);
  t1628 = Cos(var1[4]);
  t1515 = Sin(var1[14]);
  t1517 = 0. + t1515;
  t1614 = -1.*t1517*t442;
  t1642 = -1.*t1641*t945;
  t1647 = 0. + t1642;
  t1660 = t358*t1647;
  t1677 = -1.*t15*t1641;
  t1680 = 0. + t1677;
  t1713 = t1680*t817;
  t1718 = 0. + t1660 + t1713;
  t1749 = t1628*t1718;
  t1769 = 0. + t1614 + t1749;
  t1807 = -1.*t15*t358;
  t1898 = t945*t817;
  t1928 = 0. + t1807 + t1898;
  t2028 = t1628*t1928;
  t2095 = 0. + t2028;
  t699 = t297*t358*t442;
  t848 = t753*t817;
  t866 = t699 + t848;
  t1258 = -1.*t358*t753;
  t1381 = t297*t442*t817;
  t1382 = t1258 + t1381;
  t2343 = t945*t866;
  t2346 = t15*t1382;
  t2435 = t2343 + t2346;
  t1797 = -1.e-6*t1769;
  t2117 = 0.000842*t2095;
  t2125 = t1797 + t2117;
  t2203 = 0.00644*t1769;
  t2225 = -1.e-6*t2095;
  t2254 = t2203 + t2225;
  t3084 = t358*t753*t442;
  t3189 = -1.*t297*t817;
  t3217 = t3084 + t3189;
  t3273 = t297*t358;
  t3292 = t753*t442*t817;
  t3325 = t3273 + t3292;
  t2530 = 0. + t1641;
  t2531 = -1.*t2530*t442;
  t2548 = t945*t1515;
  t2580 = 0. + t2548;
  t2590 = t358*t2580;
  t2605 = t15*t1515;
  t2610 = 0. + t2605;
  t2616 = t2610*t817;
  t2714 = 0. + t2590 + t2616;
  t2787 = t1628*t2714;
  t2850 = 0. + t2531 + t2787;
  t3476 = t945*t3217;
  t3575 = t15*t3325;
  t3631 = t3476 + t3575;
  t3893 = t1628*t358*t945;
  t3894 = t15*t1628*t817;
  t3926 = t3893 + t3894;
  t930 = -1.*t15*t866;
  t1498 = t945*t1382;
  t1500 = t930 + t1498;
  t4269 = t358*t945;
  t4282 = t15*t817;
  t4289 = 0. + t4269 + t4282;
  t4375 = t1680*t358;
  t4430 = -1.*t1647*t817;
  t4531 = 0. + t4375 + t4430;
  t2334 = t297*t1628*t1515;
  t2440 = -1.*t1641*t2435;
  t2457 = t2334 + t2440;
  t2907 = t1641*t297*t1628;
  t2990 = t1515*t2435;
  t2996 = t2907 + t2990;
  t4358 = 0.000842*t4289;
  t4557 = -1.e-6*t4531;
  t4561 = t4358 + t4557;
  t3239 = -1.*t15*t3217;
  t3329 = t945*t3325;
  t3338 = t3239 + t3329;
  t4592 = -1.e-6*t4289;
  t4593 = 0.00644*t4531;
  t4598 = t4592 + t4593;
  t3413 = t1628*t1515*t753;
  t3646 = -1.*t1641*t3631;
  t3661 = t3413 + t3646;
  t4638 = t358*t2610;
  t4678 = -1.*t2580*t817;
  t4695 = 0. + t4638 + t4678;
  t3707 = t1641*t1628*t753;
  t3709 = t1515*t3631;
  t3740 = t3707 + t3709;
  t3876 = -1.*t1641*t442;
  t3932 = t1515*t3926;
  t3934 = t3876 + t3932;
  t4146 = -1.*t15*t1628*t358;
  t4154 = t1628*t945*t817;
  t4211 = t4146 + t4154;
  t4048 = -1.*t1515*t442;
  t4058 = -1.*t1641*t3926;
  t4065 = t4048 + t4058;
  t4792 = -1.e-6*t1517*t1500;
  t4806 = 0.00644*t1517*t2457;
  t4817 = 0.00608*t2530*t2996;
  t4857 = t4792 + t4806 + t4817;
  t4863 = -1.e-6*t1517*t3338;
  t4872 = 0.00644*t1517*t3661;
  t4880 = 0.00608*t2530*t3740;
  t4884 = t4863 + t4872 + t4880;
  t4894 = -1.e-6*t1517*t4211;
  t4905 = 0.00644*t1517*t4065;
  t4914 = 0.00608*t2530*t3934;
  t4916 = t4894 + t4905 + t4914;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t1500*t2125 + t2254*t2457 + 0.00608*t2850*t2996;
  p_output1[10]=t2125*t3338 + t2254*t3661 + 0.00608*t2850*t3740;
  p_output1[11]=0.00608*t2850*t3934 + t2254*t4065 + t2125*t4211;
  p_output1[12]=t1500*t4561 + t2457*t4598 + 0.00608*t2996*t4695;
  p_output1[13]=t3338*t4561 + t3661*t4598 + 0.00608*t3740*t4695;
  p_output1[14]=t4211*t4561 + t4065*t4598 + 0.00608*t3934*t4695;
  p_output1[15]=t4857;
  p_output1[16]=t4884;
  p_output1[17]=t4916;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t4857;
  p_output1[40]=t4884;
  p_output1[41]=t4916;
  p_output1[42]=-0.000842*t1500 + 1.e-6*t2457;
  p_output1[43]=-0.000842*t3338 + 1.e-6*t3661;
  p_output1[44]=1.e-6*t4065 - 0.000842*t4211;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jdq_AMWorld_RightHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
