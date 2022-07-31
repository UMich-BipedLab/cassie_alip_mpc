/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:08 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftThighJoint_src.h"

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
  double t155;
  double t180;
  double t138;
  double t162;
  double t207;
  double t116;
  double t255;
  double t290;
  double t299;
  double t166;
  double t236;
  double t238;
  double t301;
  double t103;
  double t425;
  double t496;
  double t786;
  double t798;
  double t804;
  double t714;
  double t748;
  double t767;
  double t558;
  double t589;
  double t502;
  double t504;
  double t521;
  double t532;
  double t562;
  double t576;
  double t240;
  double t321;
  double t328;
  double t844;
  double t846;
  double t875;
  double t916;
  double t924;
  double t960;
  double t769;
  double t818;
  double t826;
  double t1123;
  double t1137;
  double t1147;
  double t1148;
  double t1163;
  double t1181;
  double t1047;
  double t1050;
  double t1059;
  double t1472;
  double t1482;
  double t1577;
  double t1662;
  double t1798;
  double t1799;
  double t1248;
  double t1252;
  double t1255;
  double t1497;
  double t1512;
  double t1525;
  double t1541;
  double t1552;
  double t1553;
  double t1691;
  double t1710;
  double t1712;
  double t1733;
  double t1751;
  double t1754;
  double t1802;
  double t1808;
  double t1809;
  double t1829;
  double t1833;
  double t1865;
  double t1273;
  double t1283;
  double t1302;
  double t1319;
  double t1322;
  double t1325;
  t155 = Cos(var1[5]);
  t180 = Sin(var1[3]);
  t138 = Cos(var1[3]);
  t162 = Sin(var1[4]);
  t207 = Sin(var1[5]);
  t116 = Cos(var1[6]);
  t255 = -1.*t155*t180;
  t290 = t138*t162*t207;
  t299 = t255 + t290;
  t166 = t138*t155*t162;
  t236 = t180*t207;
  t238 = t166 + t236;
  t301 = Sin(var1[6]);
  t103 = Cos(var1[8]);
  t425 = Cos(var1[4]);
  t496 = Cos(var1[7]);
  t786 = t138*t155;
  t798 = t180*t162*t207;
  t804 = t786 + t798;
  t714 = t155*t180*t162;
  t748 = -1.*t138*t207;
  t767 = t714 + t748;
  t558 = Sin(var1[7]);
  t589 = Sin(var1[8]);
  t502 = t138*t425*t496;
  t504 = t116*t299;
  t521 = t238*t301;
  t532 = t504 + t521;
  t562 = t532*t558;
  t576 = t502 + t562;
  t240 = t116*t238;
  t321 = -1.*t299*t301;
  t328 = t240 + t321;
  t844 = t425*t496*t180;
  t846 = t116*t804;
  t875 = t767*t301;
  t916 = t846 + t875;
  t924 = t916*t558;
  t960 = t844 + t924;
  t769 = t116*t767;
  t818 = -1.*t804*t301;
  t826 = t769 + t818;
  t1123 = -1.*t496*t162;
  t1137 = t425*t116*t207;
  t1147 = t425*t155*t301;
  t1148 = t1137 + t1147;
  t1163 = t1148*t558;
  t1181 = t1123 + t1163;
  t1047 = t425*t155*t116;
  t1050 = -1.*t425*t207*t301;
  t1059 = t1047 + t1050;
  t1472 = -1.*t116;
  t1482 = 1. + t1472;
  t1577 = -1.*t496;
  t1662 = 1. + t1577;
  t1798 = -1.*t103;
  t1799 = 1. + t1798;
  t1248 = t103*t576;
  t1252 = t328*t589;
  t1255 = t1248 + t1252;
  t1497 = 0.07996*t1482;
  t1512 = -0.135*t301;
  t1525 = 0. + t1497 + t1512;
  t1541 = 0.135*t1482;
  t1552 = 0.07996*t301;
  t1553 = 0. + t1541 + t1552;
  t1691 = 0.135*t1662;
  t1710 = 0.08055*t558;
  t1712 = 0. + t1691 + t1710;
  t1733 = -0.08055*t1662;
  t1751 = 0.135*t558;
  t1754 = 0. + t1733 + t1751;
  t1802 = -0.08055*t1799;
  t1808 = -0.01004*t589;
  t1809 = 0. + t1802 + t1808;
  t1829 = -0.01004*t1799;
  t1833 = 0.08055*t589;
  t1865 = 0. + t1829 + t1833;
  t1273 = t103*t960;
  t1283 = t826*t589;
  t1302 = t1273 + t1283;
  t1319 = t103*t1181;
  t1322 = t1059*t589;
  t1325 = t1319 + t1322;
  p_output1[0]=-1.*t103*t328 + t576*t589;
  p_output1[1]=-1.*t103*t826 + t589*t960;
  p_output1[2]=-1.*t103*t1059 + t1181*t589;
  p_output1[3]=0.;
  p_output1[4]=t1255;
  p_output1[5]=t1302;
  p_output1[6]=t1325;
  p_output1[7]=0.;
  p_output1[8]=-1.*t496*t532 + t138*t425*t558;
  p_output1[9]=t180*t425*t558 - 1.*t496*t916;
  p_output1[10]=-1.*t1148*t496 - 1.*t162*t558;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08055*t1255 + t1525*t238 + t1553*t299 + t1865*t328 + t138*t1754*t425 + t1712*t532 + 0.135*(t496*t532 - 1.*t138*t425*t558) + t1809*t576 - 0.01004*(t103*t328 - 1.*t576*t589) + var1[0];
  p_output1[13]=0. - 0.08055*t1302 + t1754*t180*t425 + t1525*t767 + t1553*t804 + t1865*t826 + t1712*t916 + 0.135*(-1.*t180*t425*t558 + t496*t916) + t1809*t960 - 0.01004*(t103*t826 - 1.*t589*t960) + var1[1];
  p_output1[14]=0. - 0.08055*t1325 + t1148*t1712 - 1.*t162*t1754 + t1181*t1809 + t1059*t1865 + t1525*t155*t425 + t1553*t207*t425 + 0.135*(t1148*t496 + t162*t558) - 0.01004*(t103*t1059 - 1.*t1181*t589) + var1[2];
  p_output1[15]=1.;
}



void T_LeftThighJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
