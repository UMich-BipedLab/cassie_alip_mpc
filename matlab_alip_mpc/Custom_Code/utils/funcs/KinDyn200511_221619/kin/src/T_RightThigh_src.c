/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:32 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightThigh_src.h"

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
  double t243;
  double t564;
  double t238;
  double t338;
  double t566;
  double t668;
  double t408;
  double t590;
  double t645;
  double t191;
  double t694;
  double t716;
  double t752;
  double t128;
  double t928;
  double t932;
  double t958;
  double t1000;
  double t1322;
  double t1339;
  double t1340;
  double t1422;
  double t1432;
  double t1443;
  double t653;
  double t791;
  double t823;
  double t979;
  double t1054;
  double t1083;
  double t1140;
  double t1176;
  double t1181;
  double t1379;
  double t1445;
  double t1458;
  double t1472;
  double t1483;
  double t1495;
  double t1497;
  double t1507;
  double t1509;
  double t1589;
  double t1599;
  double t1693;
  double t1716;
  double t1721;
  double t1760;
  double t1782;
  double t1787;
  double t1798;
  double t2450;
  double t2461;
  double t2342;
  double t2356;
  double t2603;
  double t2606;
  double t1936;
  double t2036;
  double t2042;
  double t2361;
  double t2419;
  double t2433;
  double t2465;
  double t2467;
  double t2468;
  double t2479;
  double t2493;
  double t2495;
  double t2514;
  double t2515;
  double t2562;
  double t2609;
  double t2626;
  double t2629;
  double t2693;
  double t2703;
  double t2708;
  double t2044;
  double t2059;
  double t2092;
  double t2097;
  double t2112;
  double t2130;
  t243 = Cos(var1[5]);
  t564 = Sin(var1[3]);
  t238 = Cos(var1[3]);
  t338 = Sin(var1[4]);
  t566 = Sin(var1[5]);
  t668 = Sin(var1[13]);
  t408 = t238*t243*t338;
  t590 = t564*t566;
  t645 = t408 + t590;
  t191 = Cos(var1[13]);
  t694 = -1.*t243*t564;
  t716 = t238*t338*t566;
  t752 = t694 + t716;
  t128 = Cos(var1[15]);
  t928 = Sin(var1[15]);
  t932 = Cos(var1[14]);
  t958 = Cos(var1[4]);
  t1000 = Sin(var1[14]);
  t1322 = t243*t564*t338;
  t1339 = -1.*t238*t566;
  t1340 = t1322 + t1339;
  t1422 = t238*t243;
  t1432 = t564*t338*t566;
  t1443 = t1422 + t1432;
  t653 = t191*t645;
  t791 = -1.*t668*t752;
  t823 = t653 + t791;
  t979 = t932*t238*t958;
  t1054 = t668*t645;
  t1083 = t191*t752;
  t1140 = t1054 + t1083;
  t1176 = t1000*t1140;
  t1181 = t979 + t1176;
  t1379 = t191*t1340;
  t1445 = -1.*t668*t1443;
  t1458 = t1379 + t1445;
  t1472 = t932*t958*t564;
  t1483 = t668*t1340;
  t1495 = t191*t1443;
  t1497 = t1483 + t1495;
  t1507 = t1000*t1497;
  t1509 = t1472 + t1507;
  t1589 = t191*t958*t243;
  t1599 = -1.*t958*t668*t566;
  t1693 = t1589 + t1599;
  t1716 = -1.*t932*t338;
  t1721 = t958*t243*t668;
  t1760 = t191*t958*t566;
  t1782 = t1721 + t1760;
  t1787 = t1000*t1782;
  t1798 = t1716 + t1787;
  t2450 = -1.*t191;
  t2461 = 1. + t2450;
  t2342 = -1.*t932;
  t2356 = 1. + t2342;
  t2603 = -1.*t128;
  t2606 = 1. + t2603;
  t1936 = t928*t823;
  t2036 = t128*t1181;
  t2042 = t1936 + t2036;
  t2361 = -0.08055*t2356;
  t2419 = -0.135*t1000;
  t2433 = 0. + t2361 + t2419;
  t2465 = 0.07996*t2461;
  t2467 = 0.135*t668;
  t2468 = 0. + t2465 + t2467;
  t2479 = -0.135*t2461;
  t2493 = 0.07996*t668;
  t2495 = 0. + t2479 + t2493;
  t2514 = -0.135*t2356;
  t2515 = 0.08055*t1000;
  t2562 = 0. + t2514 + t2515;
  t2609 = -0.01004*t2606;
  t2626 = 0.08055*t928;
  t2629 = 0. + t2609 + t2626;
  t2693 = -0.08055*t2606;
  t2703 = -0.01004*t928;
  t2708 = 0. + t2693 + t2703;
  t2044 = t928*t1458;
  t2059 = t128*t1509;
  t2092 = t2044 + t2059;
  t2097 = t928*t1693;
  t2112 = t128*t1798;
  t2130 = t2097 + t2112;
  p_output1[0]=-1.*t128*t823 + t1181*t928;
  p_output1[1]=-1.*t128*t1458 + t1509*t928;
  p_output1[2]=-1.*t128*t1693 + t1798*t928;
  p_output1[3]=0.;
  p_output1[4]=t2042;
  p_output1[5]=t2092;
  p_output1[6]=t2130;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1140*t932 + t1000*t238*t958;
  p_output1[9]=-1.*t1497*t932 + t1000*t564*t958;
  p_output1[10]=-1.*t1000*t338 - 1.*t1782*t932;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08045*t2042 + t1140*t2562 + t1181*t2708 + t2468*t645 + t2495*t752 + t2629*t823 - 0.06984*(t128*t823 - 1.*t1181*t928) + t238*t2433*t958 - 0.1708*(t1140*t932 - 1.*t1000*t238*t958) + var1[0];
  p_output1[13]=0. - 0.08045*t2092 + t1340*t2468 + t1443*t2495 + t1497*t2562 + t1458*t2629 + t1509*t2708 - 0.06984*(t128*t1458 - 1.*t1509*t928) + t2433*t564*t958 - 0.1708*(t1497*t932 - 1.*t1000*t564*t958) + var1[1];
  p_output1[14]=0. - 0.08045*t2130 + t1782*t2562 + t1693*t2629 + t1798*t2708 - 1.*t2433*t338 - 0.06984*(t128*t1693 - 1.*t1798*t928) - 0.1708*(t1000*t338 + t1782*t932) + t243*t2468*t958 + t2495*t566*t958 + var1[2];
  p_output1[15]=1.;
}



void T_RightThigh_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
