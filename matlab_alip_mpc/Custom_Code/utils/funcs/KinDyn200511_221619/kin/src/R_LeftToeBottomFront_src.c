/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:48 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottomFront_src.h"

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
  double t443;
  double t691;
  double t750;
  double t696;
  double t810;
  double t580;
  double t943;
  double t963;
  double t980;
  double t734;
  double t812;
  double t863;
  double t1019;
  double t428;
  double t1228;
  double t1264;
  double t1273;
  double t446;
  double t451;
  double t534;
  double t941;
  double t1041;
  double t1088;
  double t1144;
  double t1148;
  double t1161;
  double t1303;
  double t1335;
  double t1226;
  double t1307;
  double t1324;
  double t399;
  double t1371;
  double t1391;
  double t1395;
  double t1415;
  double t1325;
  double t1397;
  double t1400;
  double t307;
  double t1420;
  double t1425;
  double t1431;
  double t1552;
  double t1411;
  double t1434;
  double t1466;
  double t288;
  double t1586;
  double t1595;
  double t1614;
  double t1631;
  double t1509;
  double t1616;
  double t1621;
  double t121;
  double t1642;
  double t1653;
  double t1677;
  double t1810;
  double t1862;
  double t1866;
  double t1764;
  double t1767;
  double t1798;
  double t1962;
  double t1963;
  double t1982;
  double t1760;
  double t1803;
  double t1892;
  double t1901;
  double t1917;
  double t1923;
  double t1955;
  double t1988;
  double t2005;
  double t2018;
  double t2020;
  double t2021;
  double t2006;
  double t2032;
  double t2058;
  double t2075;
  double t2084;
  double t2086;
  double t2073;
  double t2090;
  double t2108;
  double t2123;
  double t2144;
  double t2146;
  double t2113;
  double t2159;
  double t2168;
  double t2187;
  double t2203;
  double t2213;
  double t2389;
  double t2432;
  double t2433;
  double t2305;
  double t2322;
  double t2323;
  double t2334;
  double t2339;
  double t2354;
  double t2376;
  double t2441;
  double t2445;
  double t2454;
  double t2456;
  double t2463;
  double t2447;
  double t2483;
  double t2486;
  double t2494;
  double t2516;
  double t2535;
  double t2491;
  double t2549;
  double t2550;
  double t2557;
  double t2592;
  double t2593;
  double t2553;
  double t2597;
  double t2600;
  double t2614;
  double t2616;
  double t2622;
  double t1622;
  double t1705;
  double t1709;
  double t1714;
  double t1727;
  double t1730;
  double t2175;
  double t2218;
  double t2242;
  double t2291;
  double t2293;
  double t2295;
  double t2601;
  double t2635;
  double t2638;
  double t2657;
  double t2658;
  double t2679;
  t443 = Cos(var1[3]);
  t691 = Cos(var1[5]);
  t750 = Sin(var1[4]);
  t696 = Sin(var1[3]);
  t810 = Sin(var1[5]);
  t580 = Cos(var1[6]);
  t943 = t443*t691*t750;
  t963 = t696*t810;
  t980 = t943 + t963;
  t734 = -1.*t691*t696;
  t812 = t443*t750*t810;
  t863 = t734 + t812;
  t1019 = Sin(var1[6]);
  t428 = Cos(var1[8]);
  t1228 = t580*t980;
  t1264 = -1.*t863*t1019;
  t1273 = t1228 + t1264;
  t446 = Cos(var1[4]);
  t451 = Cos(var1[7]);
  t534 = t443*t446*t451;
  t941 = t580*t863;
  t1041 = t980*t1019;
  t1088 = t941 + t1041;
  t1144 = Sin(var1[7]);
  t1148 = t1088*t1144;
  t1161 = t534 + t1148;
  t1303 = Sin(var1[8]);
  t1335 = Cos(var1[9]);
  t1226 = t428*t1161;
  t1307 = t1273*t1303;
  t1324 = t1226 + t1307;
  t399 = Sin(var1[9]);
  t1371 = t428*t1273;
  t1391 = -1.*t1161*t1303;
  t1395 = t1371 + t1391;
  t1415 = Cos(var1[10]);
  t1325 = -1.*t399*t1324;
  t1397 = t1335*t1395;
  t1400 = t1325 + t1397;
  t307 = Sin(var1[10]);
  t1420 = t1335*t1324;
  t1425 = t399*t1395;
  t1431 = t1420 + t1425;
  t1552 = Cos(var1[11]);
  t1411 = t307*t1400;
  t1434 = t1415*t1431;
  t1466 = t1411 + t1434;
  t288 = Sin(var1[11]);
  t1586 = t1415*t1400;
  t1595 = -1.*t307*t1431;
  t1614 = t1586 + t1595;
  t1631 = Cos(var1[12]);
  t1509 = -1.*t288*t1466;
  t1616 = t1552*t1614;
  t1621 = t1509 + t1616;
  t121 = Sin(var1[12]);
  t1642 = t1552*t1466;
  t1653 = t288*t1614;
  t1677 = t1642 + t1653;
  t1810 = t691*t696*t750;
  t1862 = -1.*t443*t810;
  t1866 = t1810 + t1862;
  t1764 = t443*t691;
  t1767 = t696*t750*t810;
  t1798 = t1764 + t1767;
  t1962 = t580*t1866;
  t1963 = -1.*t1798*t1019;
  t1982 = t1962 + t1963;
  t1760 = t446*t451*t696;
  t1803 = t580*t1798;
  t1892 = t1866*t1019;
  t1901 = t1803 + t1892;
  t1917 = t1901*t1144;
  t1923 = t1760 + t1917;
  t1955 = t428*t1923;
  t1988 = t1982*t1303;
  t2005 = t1955 + t1988;
  t2018 = t428*t1982;
  t2020 = -1.*t1923*t1303;
  t2021 = t2018 + t2020;
  t2006 = -1.*t399*t2005;
  t2032 = t1335*t2021;
  t2058 = t2006 + t2032;
  t2075 = t1335*t2005;
  t2084 = t399*t2021;
  t2086 = t2075 + t2084;
  t2073 = t307*t2058;
  t2090 = t1415*t2086;
  t2108 = t2073 + t2090;
  t2123 = t1415*t2058;
  t2144 = -1.*t307*t2086;
  t2146 = t2123 + t2144;
  t2113 = -1.*t288*t2108;
  t2159 = t1552*t2146;
  t2168 = t2113 + t2159;
  t2187 = t1552*t2108;
  t2203 = t288*t2146;
  t2213 = t2187 + t2203;
  t2389 = t446*t691*t580;
  t2432 = -1.*t446*t810*t1019;
  t2433 = t2389 + t2432;
  t2305 = -1.*t451*t750;
  t2322 = t446*t580*t810;
  t2323 = t446*t691*t1019;
  t2334 = t2322 + t2323;
  t2339 = t2334*t1144;
  t2354 = t2305 + t2339;
  t2376 = t428*t2354;
  t2441 = t2433*t1303;
  t2445 = t2376 + t2441;
  t2454 = t428*t2433;
  t2456 = -1.*t2354*t1303;
  t2463 = t2454 + t2456;
  t2447 = -1.*t399*t2445;
  t2483 = t1335*t2463;
  t2486 = t2447 + t2483;
  t2494 = t1335*t2445;
  t2516 = t399*t2463;
  t2535 = t2494 + t2516;
  t2491 = t307*t2486;
  t2549 = t1415*t2535;
  t2550 = t2491 + t2549;
  t2557 = t1415*t2486;
  t2592 = -1.*t307*t2535;
  t2593 = t2557 + t2592;
  t2553 = -1.*t288*t2550;
  t2597 = t1552*t2593;
  t2600 = t2553 + t2597;
  t2614 = t1552*t2550;
  t2616 = t288*t2593;
  t2622 = t2614 + t2616;
  t1622 = t121*t1621;
  t1705 = t1631*t1677;
  t1709 = t1622 + t1705;
  t1714 = t1631*t1621;
  t1727 = -1.*t121*t1677;
  t1730 = t1714 + t1727;
  t2175 = t121*t2168;
  t2218 = t1631*t2213;
  t2242 = t2175 + t2218;
  t2291 = t1631*t2168;
  t2293 = -1.*t121*t2213;
  t2295 = t2291 + t2293;
  t2601 = t121*t2600;
  t2635 = t1631*t2622;
  t2638 = t2601 + t2635;
  t2657 = t1631*t2600;
  t2658 = -1.*t121*t2622;
  t2679 = t2657 + t2658;
  p_output1[0]=0.642788*t1709 + 0.766044*t1730;
  p_output1[1]=0.642788*t2242 + 0.766044*t2295;
  p_output1[2]=0.642788*t2638 + 0.766044*t2679;
  p_output1[3]=-1.*t1144*t443*t446 + t1088*t451;
  p_output1[4]=t1901*t451 - 1.*t1144*t446*t696;
  p_output1[5]=t2334*t451 + t1144*t750;
  p_output1[6]=-0.766044*t1709 + 0.642788*t1730;
  p_output1[7]=-0.766044*t2242 + 0.642788*t2295;
  p_output1[8]=-0.766044*t2638 + 0.642788*t2679;
}



void R_LeftToeBottomFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
