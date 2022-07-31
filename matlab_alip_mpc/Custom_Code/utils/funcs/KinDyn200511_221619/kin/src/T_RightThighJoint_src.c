/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightThighJoint_src.h"

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
  double t272;
  double t373;
  double t224;
  double t343;
  double t447;
  double t640;
  double t360;
  double t458;
  double t505;
  double t221;
  double t648;
  double t659;
  double t663;
  double t141;
  double t751;
  double t883;
  double t891;
  double t911;
  double t1257;
  double t1325;
  double t1356;
  double t1439;
  double t1453;
  double t1456;
  double t553;
  double t729;
  double t736;
  double t903;
  double t913;
  double t966;
  double t1002;
  double t1008;
  double t1011;
  double t1419;
  double t1516;
  double t1551;
  double t1584;
  double t1627;
  double t1630;
  double t1632;
  double t1668;
  double t1676;
  double t1705;
  double t1717;
  double t1730;
  double t1757;
  double t1768;
  double t1828;
  double t1848;
  double t1924;
  double t1925;
  double t2235;
  double t2241;
  double t2142;
  double t2151;
  double t2465;
  double t2478;
  double t1973;
  double t1974;
  double t1988;
  double t2152;
  double t2154;
  double t2203;
  double t2273;
  double t2283;
  double t2321;
  double t2354;
  double t2360;
  double t2388;
  double t2406;
  double t2428;
  double t2430;
  double t2481;
  double t2488;
  double t2495;
  double t2560;
  double t2568;
  double t2575;
  double t2007;
  double t2015;
  double t2016;
  double t2036;
  double t2068;
  double t2070;
  t272 = Cos(var1[5]);
  t373 = Sin(var1[3]);
  t224 = Cos(var1[3]);
  t343 = Sin(var1[4]);
  t447 = Sin(var1[5]);
  t640 = Sin(var1[13]);
  t360 = t224*t272*t343;
  t458 = t373*t447;
  t505 = t360 + t458;
  t221 = Cos(var1[13]);
  t648 = -1.*t272*t373;
  t659 = t224*t343*t447;
  t663 = t648 + t659;
  t141 = Cos(var1[15]);
  t751 = Sin(var1[15]);
  t883 = Cos(var1[14]);
  t891 = Cos(var1[4]);
  t911 = Sin(var1[14]);
  t1257 = t272*t373*t343;
  t1325 = -1.*t224*t447;
  t1356 = t1257 + t1325;
  t1439 = t224*t272;
  t1453 = t373*t343*t447;
  t1456 = t1439 + t1453;
  t553 = t221*t505;
  t729 = -1.*t640*t663;
  t736 = t553 + t729;
  t903 = t883*t224*t891;
  t913 = t640*t505;
  t966 = t221*t663;
  t1002 = t913 + t966;
  t1008 = t911*t1002;
  t1011 = t903 + t1008;
  t1419 = t221*t1356;
  t1516 = -1.*t640*t1456;
  t1551 = t1419 + t1516;
  t1584 = t883*t891*t373;
  t1627 = t640*t1356;
  t1630 = t221*t1456;
  t1632 = t1627 + t1630;
  t1668 = t911*t1632;
  t1676 = t1584 + t1668;
  t1705 = t221*t891*t272;
  t1717 = -1.*t891*t640*t447;
  t1730 = t1705 + t1717;
  t1757 = -1.*t883*t343;
  t1768 = t891*t272*t640;
  t1828 = t221*t891*t447;
  t1848 = t1768 + t1828;
  t1924 = t911*t1848;
  t1925 = t1757 + t1924;
  t2235 = -1.*t221;
  t2241 = 1. + t2235;
  t2142 = -1.*t883;
  t2151 = 1. + t2142;
  t2465 = -1.*t141;
  t2478 = 1. + t2465;
  t1973 = t751*t736;
  t1974 = t141*t1011;
  t1988 = t1973 + t1974;
  t2152 = -0.08055*t2151;
  t2154 = -0.135*t911;
  t2203 = 0. + t2152 + t2154;
  t2273 = 0.07996*t2241;
  t2283 = 0.135*t640;
  t2321 = 0. + t2273 + t2283;
  t2354 = -0.135*t2241;
  t2360 = 0.07996*t640;
  t2388 = 0. + t2354 + t2360;
  t2406 = -0.135*t2151;
  t2428 = 0.08055*t911;
  t2430 = 0. + t2406 + t2428;
  t2481 = -0.01004*t2478;
  t2488 = 0.08055*t751;
  t2495 = 0. + t2481 + t2488;
  t2560 = -0.08055*t2478;
  t2568 = -0.01004*t751;
  t2575 = 0. + t2560 + t2568;
  t2007 = t751*t1551;
  t2015 = t141*t1676;
  t2016 = t2007 + t2015;
  t2036 = t751*t1730;
  t2068 = t141*t1925;
  t2070 = t2036 + t2068;
  p_output1[0]=-1.*t141*t736 + t1011*t751;
  p_output1[1]=-1.*t141*t1551 + t1676*t751;
  p_output1[2]=-1.*t141*t1730 + t1925*t751;
  p_output1[3]=0.;
  p_output1[4]=t1988;
  p_output1[5]=t2016;
  p_output1[6]=t2070;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1002*t883 + t224*t891*t911;
  p_output1[9]=-1.*t1632*t883 + t373*t891*t911;
  p_output1[10]=-1.*t1848*t883 - 1.*t343*t911;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08055*t1988 + t1002*t2430 + t1011*t2575 + t2321*t505 + t2388*t663 + t2495*t736 - 0.01004*(t141*t736 - 1.*t1011*t751) + t2203*t224*t891 - 0.135*(t1002*t883 - 1.*t224*t891*t911) + var1[0];
  p_output1[13]=0. - 0.08055*t2016 + t1356*t2321 + t1456*t2388 + t1632*t2430 + t1551*t2495 + t1676*t2575 - 0.01004*(t141*t1551 - 1.*t1676*t751) + t2203*t373*t891 - 0.135*(t1632*t883 - 1.*t373*t891*t911) + var1[1];
  p_output1[14]=0. - 0.08055*t2070 + t1848*t2430 + t1730*t2495 + t1925*t2575 - 1.*t2203*t343 - 0.01004*(t141*t1730 - 1.*t1925*t751) + t2321*t272*t891 + t2388*t447*t891 - 0.135*(t1848*t883 + t343*t911) + var1[2];
  p_output1[15]=1.;
}



void T_RightThighJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
