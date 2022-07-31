/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:19 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottom_src.h"

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
  double t500;
  double t641;
  double t486;
  double t509;
  double t644;
  double t835;
  double t629;
  double t646;
  double t717;
  double t468;
  double t841;
  double t892;
  double t905;
  double t975;
  double t794;
  double t922;
  double t956;
  double t380;
  double t1022;
  double t1040;
  double t1100;
  double t1104;
  double t1123;
  double t1132;
  double t1143;
  double t1157;
  double t1164;
  double t1220;
  double t961;
  double t1170;
  double t1178;
  double t338;
  double t1227;
  double t1278;
  double t1294;
  double t1328;
  double t1182;
  double t1319;
  double t1322;
  double t336;
  double t1365;
  double t1413;
  double t1425;
  double t1519;
  double t1326;
  double t1446;
  double t1459;
  double t252;
  double t1539;
  double t1560;
  double t1575;
  double t1674;
  double t1516;
  double t1607;
  double t1624;
  double t196;
  double t1679;
  double t1685;
  double t1688;
  double t1791;
  double t1826;
  double t1829;
  double t1849;
  double t1851;
  double t1853;
  double t1835;
  double t1899;
  double t1944;
  double t1961;
  double t1992;
  double t1999;
  double t2009;
  double t2010;
  double t2032;
  double t1958;
  double t2082;
  double t2140;
  double t2144;
  double t2156;
  double t2157;
  double t2142;
  double t2165;
  double t2185;
  double t2273;
  double t2290;
  double t2292;
  double t2246;
  double t2295;
  double t2297;
  double t2313;
  double t2317;
  double t2327;
  double t2299;
  double t2340;
  double t2390;
  double t2405;
  double t2418;
  double t2424;
  double t2500;
  double t2503;
  double t2506;
  double t2523;
  double t2524;
  double t2535;
  double t2551;
  double t2555;
  double t2561;
  double t2513;
  double t2575;
  double t2585;
  double t2622;
  double t2636;
  double t2641;
  double t2596;
  double t2644;
  double t2647;
  double t2651;
  double t2654;
  double t2658;
  double t2648;
  double t2677;
  double t2680;
  double t2686;
  double t2697;
  double t2709;
  double t2681;
  double t2716;
  double t2722;
  double t2729;
  double t2736;
  double t2737;
  double t1672;
  double t1691;
  double t1719;
  double t1749;
  double t1766;
  double t1769;
  double t2394;
  double t2427;
  double t2431;
  double t2451;
  double t2459;
  double t2462;
  double t2728;
  double t2740;
  double t2745;
  double t2753;
  double t2761;
  double t2779;
  t500 = Cos(var1[5]);
  t641 = Sin(var1[3]);
  t486 = Cos(var1[3]);
  t509 = Sin(var1[4]);
  t644 = Sin(var1[5]);
  t835 = Sin(var1[13]);
  t629 = t486*t500*t509;
  t646 = t641*t644;
  t717 = t629 + t646;
  t468 = Cos(var1[13]);
  t841 = -1.*t500*t641;
  t892 = t486*t509*t644;
  t905 = t841 + t892;
  t975 = Cos(var1[15]);
  t794 = t468*t717;
  t922 = -1.*t835*t905;
  t956 = t794 + t922;
  t380 = Sin(var1[15]);
  t1022 = Cos(var1[14]);
  t1040 = Cos(var1[4]);
  t1100 = t1022*t486*t1040;
  t1104 = Sin(var1[14]);
  t1123 = t835*t717;
  t1132 = t468*t905;
  t1143 = t1123 + t1132;
  t1157 = t1104*t1143;
  t1164 = t1100 + t1157;
  t1220 = Cos(var1[16]);
  t961 = t380*t956;
  t1170 = t975*t1164;
  t1178 = t961 + t1170;
  t338 = Sin(var1[16]);
  t1227 = t975*t956;
  t1278 = -1.*t380*t1164;
  t1294 = t1227 + t1278;
  t1328 = Cos(var1[17]);
  t1182 = -1.*t338*t1178;
  t1319 = t1220*t1294;
  t1322 = t1182 + t1319;
  t336 = Sin(var1[17]);
  t1365 = t1220*t1178;
  t1413 = t338*t1294;
  t1425 = t1365 + t1413;
  t1519 = Cos(var1[18]);
  t1326 = t336*t1322;
  t1446 = t1328*t1425;
  t1459 = t1326 + t1446;
  t252 = Sin(var1[18]);
  t1539 = t1328*t1322;
  t1560 = -1.*t336*t1425;
  t1575 = t1539 + t1560;
  t1674 = Cos(var1[19]);
  t1516 = -1.*t252*t1459;
  t1607 = t1519*t1575;
  t1624 = t1516 + t1607;
  t196 = Sin(var1[19]);
  t1679 = t1519*t1459;
  t1685 = t252*t1575;
  t1688 = t1679 + t1685;
  t1791 = t500*t641*t509;
  t1826 = -1.*t486*t644;
  t1829 = t1791 + t1826;
  t1849 = t486*t500;
  t1851 = t641*t509*t644;
  t1853 = t1849 + t1851;
  t1835 = t468*t1829;
  t1899 = -1.*t835*t1853;
  t1944 = t1835 + t1899;
  t1961 = t1022*t1040*t641;
  t1992 = t835*t1829;
  t1999 = t468*t1853;
  t2009 = t1992 + t1999;
  t2010 = t1104*t2009;
  t2032 = t1961 + t2010;
  t1958 = t380*t1944;
  t2082 = t975*t2032;
  t2140 = t1958 + t2082;
  t2144 = t975*t1944;
  t2156 = -1.*t380*t2032;
  t2157 = t2144 + t2156;
  t2142 = -1.*t338*t2140;
  t2165 = t1220*t2157;
  t2185 = t2142 + t2165;
  t2273 = t1220*t2140;
  t2290 = t338*t2157;
  t2292 = t2273 + t2290;
  t2246 = t336*t2185;
  t2295 = t1328*t2292;
  t2297 = t2246 + t2295;
  t2313 = t1328*t2185;
  t2317 = -1.*t336*t2292;
  t2327 = t2313 + t2317;
  t2299 = -1.*t252*t2297;
  t2340 = t1519*t2327;
  t2390 = t2299 + t2340;
  t2405 = t1519*t2297;
  t2418 = t252*t2327;
  t2424 = t2405 + t2418;
  t2500 = t468*t1040*t500;
  t2503 = -1.*t1040*t835*t644;
  t2506 = t2500 + t2503;
  t2523 = -1.*t1022*t509;
  t2524 = t1040*t500*t835;
  t2535 = t468*t1040*t644;
  t2551 = t2524 + t2535;
  t2555 = t1104*t2551;
  t2561 = t2523 + t2555;
  t2513 = t380*t2506;
  t2575 = t975*t2561;
  t2585 = t2513 + t2575;
  t2622 = t975*t2506;
  t2636 = -1.*t380*t2561;
  t2641 = t2622 + t2636;
  t2596 = -1.*t338*t2585;
  t2644 = t1220*t2641;
  t2647 = t2596 + t2644;
  t2651 = t1220*t2585;
  t2654 = t338*t2641;
  t2658 = t2651 + t2654;
  t2648 = t336*t2647;
  t2677 = t1328*t2658;
  t2680 = t2648 + t2677;
  t2686 = t1328*t2647;
  t2697 = -1.*t336*t2658;
  t2709 = t2686 + t2697;
  t2681 = -1.*t252*t2680;
  t2716 = t1519*t2709;
  t2722 = t2681 + t2716;
  t2729 = t1519*t2680;
  t2736 = t252*t2709;
  t2737 = t2729 + t2736;
  t1672 = t196*t1624;
  t1691 = t1674*t1688;
  t1719 = t1672 + t1691;
  t1749 = t1674*t1624;
  t1766 = -1.*t196*t1688;
  t1769 = t1749 + t1766;
  t2394 = t196*t2390;
  t2427 = t1674*t2424;
  t2431 = t2394 + t2427;
  t2451 = t1674*t2390;
  t2459 = -1.*t196*t2424;
  t2462 = t2451 + t2459;
  t2728 = t196*t2722;
  t2740 = t1674*t2737;
  t2745 = t2728 + t2740;
  t2753 = t1674*t2722;
  t2761 = -1.*t196*t2737;
  t2779 = t2753 + t2761;
  p_output1[0]=0.642788*t1719 + 0.766044*t1769;
  p_output1[1]=0.642788*t2431 + 0.766044*t2462;
  p_output1[2]=0.642788*t2745 + 0.766044*t2779;
  p_output1[3]=t1022*t1143 - 1.*t1040*t1104*t486;
  p_output1[4]=t1022*t2009 - 1.*t1040*t1104*t641;
  p_output1[5]=t1022*t2551 + t1104*t509;
  p_output1[6]=-0.766044*t1719 + 0.642788*t1769;
  p_output1[7]=-0.766044*t2431 + 0.642788*t2462;
  p_output1[8]=-0.766044*t2745 + 0.642788*t2779;
}



void R_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
