/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottomBack_src.h"

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
  double t646;
  double t877;
  double t1042;
  double t924;
  double t1090;
  double t811;
  double t1160;
  double t1161;
  double t1173;
  double t939;
  double t1125;
  double t1138;
  double t1174;
  double t622;
  double t1277;
  double t1284;
  double t1302;
  double t742;
  double t789;
  double t799;
  double t1150;
  double t1180;
  double t1186;
  double t1189;
  double t1258;
  double t1263;
  double t1311;
  double t1374;
  double t1276;
  double t1318;
  double t1329;
  double t453;
  double t1382;
  double t1394;
  double t1432;
  double t1459;
  double t1372;
  double t1434;
  double t1439;
  double t400;
  double t1473;
  double t1481;
  double t1504;
  double t1581;
  double t1456;
  double t1529;
  double t1533;
  double t392;
  double t1593;
  double t1601;
  double t1612;
  double t1657;
  double t1577;
  double t1620;
  double t1639;
  double t130;
  double t1658;
  double t1697;
  double t1709;
  double t1914;
  double t1925;
  double t1937;
  double t1886;
  double t1887;
  double t1902;
  double t2009;
  double t2012;
  double t2026;
  double t1853;
  double t1904;
  double t1948;
  double t1949;
  double t1955;
  double t1974;
  double t2008;
  double t2031;
  double t2058;
  double t2067;
  double t2068;
  double t2072;
  double t2064;
  double t2074;
  double t2077;
  double t2132;
  double t2139;
  double t2168;
  double t2117;
  double t2172;
  double t2177;
  double t2187;
  double t2191;
  double t2196;
  double t2186;
  double t2219;
  double t2222;
  double t2245;
  double t2275;
  double t2283;
  double t2446;
  double t2470;
  double t2473;
  double t2390;
  double t2394;
  double t2399;
  double t2401;
  double t2404;
  double t2427;
  double t2439;
  double t2475;
  double t2478;
  double t2491;
  double t2495;
  double t2500;
  double t2485;
  double t2519;
  double t2526;
  double t2564;
  double t2573;
  double t2578;
  double t2560;
  double t2598;
  double t2611;
  double t2619;
  double t2623;
  double t2625;
  double t2613;
  double t2630;
  double t2632;
  double t2645;
  double t2655;
  double t2658;
  double t1642;
  double t1743;
  double t1799;
  double t1810;
  double t1813;
  double t1819;
  double t2223;
  double t2291;
  double t2298;
  double t2335;
  double t2344;
  double t2362;
  double t2638;
  double t2695;
  double t2703;
  double t2712;
  double t2723;
  double t2731;
  t646 = Cos(var1[3]);
  t877 = Cos(var1[5]);
  t1042 = Sin(var1[4]);
  t924 = Sin(var1[3]);
  t1090 = Sin(var1[5]);
  t811 = Cos(var1[6]);
  t1160 = t646*t877*t1042;
  t1161 = t924*t1090;
  t1173 = t1160 + t1161;
  t939 = -1.*t877*t924;
  t1125 = t646*t1042*t1090;
  t1138 = t939 + t1125;
  t1174 = Sin(var1[6]);
  t622 = Cos(var1[8]);
  t1277 = t811*t1173;
  t1284 = -1.*t1138*t1174;
  t1302 = t1277 + t1284;
  t742 = Cos(var1[4]);
  t789 = Cos(var1[7]);
  t799 = t646*t742*t789;
  t1150 = t811*t1138;
  t1180 = t1173*t1174;
  t1186 = t1150 + t1180;
  t1189 = Sin(var1[7]);
  t1258 = t1186*t1189;
  t1263 = t799 + t1258;
  t1311 = Sin(var1[8]);
  t1374 = Cos(var1[9]);
  t1276 = t622*t1263;
  t1318 = t1302*t1311;
  t1329 = t1276 + t1318;
  t453 = Sin(var1[9]);
  t1382 = t622*t1302;
  t1394 = -1.*t1263*t1311;
  t1432 = t1382 + t1394;
  t1459 = Cos(var1[10]);
  t1372 = -1.*t453*t1329;
  t1434 = t1374*t1432;
  t1439 = t1372 + t1434;
  t400 = Sin(var1[10]);
  t1473 = t1374*t1329;
  t1481 = t453*t1432;
  t1504 = t1473 + t1481;
  t1581 = Cos(var1[11]);
  t1456 = t400*t1439;
  t1529 = t1459*t1504;
  t1533 = t1456 + t1529;
  t392 = Sin(var1[11]);
  t1593 = t1459*t1439;
  t1601 = -1.*t400*t1504;
  t1612 = t1593 + t1601;
  t1657 = Cos(var1[12]);
  t1577 = -1.*t392*t1533;
  t1620 = t1581*t1612;
  t1639 = t1577 + t1620;
  t130 = Sin(var1[12]);
  t1658 = t1581*t1533;
  t1697 = t392*t1612;
  t1709 = t1658 + t1697;
  t1914 = t877*t924*t1042;
  t1925 = -1.*t646*t1090;
  t1937 = t1914 + t1925;
  t1886 = t646*t877;
  t1887 = t924*t1042*t1090;
  t1902 = t1886 + t1887;
  t2009 = t811*t1937;
  t2012 = -1.*t1902*t1174;
  t2026 = t2009 + t2012;
  t1853 = t742*t789*t924;
  t1904 = t811*t1902;
  t1948 = t1937*t1174;
  t1949 = t1904 + t1948;
  t1955 = t1949*t1189;
  t1974 = t1853 + t1955;
  t2008 = t622*t1974;
  t2031 = t2026*t1311;
  t2058 = t2008 + t2031;
  t2067 = t622*t2026;
  t2068 = -1.*t1974*t1311;
  t2072 = t2067 + t2068;
  t2064 = -1.*t453*t2058;
  t2074 = t1374*t2072;
  t2077 = t2064 + t2074;
  t2132 = t1374*t2058;
  t2139 = t453*t2072;
  t2168 = t2132 + t2139;
  t2117 = t400*t2077;
  t2172 = t1459*t2168;
  t2177 = t2117 + t2172;
  t2187 = t1459*t2077;
  t2191 = -1.*t400*t2168;
  t2196 = t2187 + t2191;
  t2186 = -1.*t392*t2177;
  t2219 = t1581*t2196;
  t2222 = t2186 + t2219;
  t2245 = t1581*t2177;
  t2275 = t392*t2196;
  t2283 = t2245 + t2275;
  t2446 = t742*t877*t811;
  t2470 = -1.*t742*t1090*t1174;
  t2473 = t2446 + t2470;
  t2390 = -1.*t789*t1042;
  t2394 = t742*t811*t1090;
  t2399 = t742*t877*t1174;
  t2401 = t2394 + t2399;
  t2404 = t2401*t1189;
  t2427 = t2390 + t2404;
  t2439 = t622*t2427;
  t2475 = t2473*t1311;
  t2478 = t2439 + t2475;
  t2491 = t622*t2473;
  t2495 = -1.*t2427*t1311;
  t2500 = t2491 + t2495;
  t2485 = -1.*t453*t2478;
  t2519 = t1374*t2500;
  t2526 = t2485 + t2519;
  t2564 = t1374*t2478;
  t2573 = t453*t2500;
  t2578 = t2564 + t2573;
  t2560 = t400*t2526;
  t2598 = t1459*t2578;
  t2611 = t2560 + t2598;
  t2619 = t1459*t2526;
  t2623 = -1.*t400*t2578;
  t2625 = t2619 + t2623;
  t2613 = -1.*t392*t2611;
  t2630 = t1581*t2625;
  t2632 = t2613 + t2630;
  t2645 = t1581*t2611;
  t2655 = t392*t2625;
  t2658 = t2645 + t2655;
  t1642 = t130*t1639;
  t1743 = t1657*t1709;
  t1799 = t1642 + t1743;
  t1810 = t1657*t1639;
  t1813 = -1.*t130*t1709;
  t1819 = t1810 + t1813;
  t2223 = t130*t2222;
  t2291 = t1657*t2283;
  t2298 = t2223 + t2291;
  t2335 = t1657*t2222;
  t2344 = -1.*t130*t2283;
  t2362 = t2335 + t2344;
  t2638 = t130*t2632;
  t2695 = t1657*t2658;
  t2703 = t2638 + t2695;
  t2712 = t1657*t2632;
  t2723 = -1.*t130*t2658;
  t2731 = t2712 + t2723;
  p_output1[0]=0.642788*t1799 + 0.766044*t1819;
  p_output1[1]=0.642788*t2298 + 0.766044*t2362;
  p_output1[2]=0.642788*t2703 + 0.766044*t2731;
  p_output1[3]=-1.*t1189*t646*t742 + t1186*t789;
  p_output1[4]=t1949*t789 - 1.*t1189*t742*t924;
  p_output1[5]=t1042*t1189 + t2401*t789;
  p_output1[6]=-0.766044*t1799 + 0.642788*t1819;
  p_output1[7]=-0.766044*t2298 + 0.642788*t2362;
  p_output1[8]=-0.766044*t2703 + 0.642788*t2731;
}



void R_LeftToeBottomBack_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
