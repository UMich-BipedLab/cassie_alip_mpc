/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_RightAnkleJoint_src.h"

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
  double t214;
  double t238;
  double t391;
  double t435;
  double t393;
  double t447;
  double t603;
  double t620;
  double t465;
  double t466;
  double t521;
  double t553;
  double t579;
  double t581;
  double t594;
  double t605;
  double t639;
  double t644;
  double t658;
  double t659;
  double t664;
  double t959;
  double t937;
  double t706;
  double t707;
  double t731;
  double t1076;
  double t1083;
  double t750;
  double t757;
  double t762;
  double t1084;
  double t1095;
  double t1113;
  double t1131;
  double t1146;
  double t1157;
  double t1024;
  double t1052;
  double t1072;
  double t136;
  double t1270;
  double t1285;
  double t1294;
  double t1213;
  double t1222;
  double t1223;
  double t950;
  double t969;
  double t980;
  double t1173;
  double t1188;
  double t1498;
  double t1536;
  double t1199;
  double t1549;
  double t1553;
  double t1393;
  double t1395;
  double t1396;
  double t1328;
  double t1336;
  double t1339;
  double t1567;
  double t1579;
  double t1587;
  double t1119;
  double t1162;
  double t1610;
  double t1613;
  double t1617;
  double t1262;
  double t1264;
  double t1692;
  double t1699;
  double t1712;
  double t1237;
  double t1247;
  double t1432;
  double t1433;
  double t1647;
  double t1662;
  double t1666;
  double t1826;
  double t1832;
  double t1841;
  double t1399;
  double t1415;
  double t1417;
  double t1592;
  double t1642;
  double t2124;
  double t2163;
  double t2166;
  double t2203;
  double t1934;
  double t1954;
  double t1956;
  double t1528;
  double t1537;
  double t1541;
  double t1716;
  double t1728;
  double t2176;
  double t2210;
  double t2221;
  double t2230;
  double t2251;
  double t2256;
  double t1914;
  double t1921;
  double t1923;
  double t1794;
  double t1795;
  double t1866;
  double t1879;
  double t1964;
  double t1973;
  double t2020;
  double t2026;
  double t2045;
  double t2054;
  double t2078;
  double t2102;
  double t2104;
  double t2106;
  double t2111;
  double t2120;
  double t2122;
  double t2227;
  double t2261;
  double t2495;
  double t2502;
  double t2515;
  double t2645;
  double t2655;
  double t2660;
  double t2673;
  double t2546;
  double t2548;
  double t2552;
  double t2289;
  double t2290;
  double t2301;
  double t2316;
  double t2323;
  double t2324;
  double t2331;
  double t2339;
  double t2672;
  double t2677;
  double t2695;
  double t2405;
  double t2408;
  double t2410;
  double t2703;
  double t2704;
  double t2712;
  double t2464;
  double t2471;
  double t2475;
  double t2365;
  double t2367;
  double t2383;
  double t2385;
  double t2576;
  double t2592;
  double t2612;
  double t2625;
  double t2696;
  double t2718;
  double t2953;
  double t2956;
  double t2961;
  double t3049;
  double t3050;
  double t3054;
  double t3057;
  double t2971;
  double t2980;
  double t2992;
  double t2757;
  double t2766;
  double t2767;
  double t2775;
  double t2776;
  double t2779;
  double t2820;
  double t2825;
  double t3056;
  double t3067;
  double t3073;
  double t2885;
  double t2889;
  double t2909;
  double t3086;
  double t3090;
  double t3091;
  double t2915;
  double t2916;
  double t2917;
  double t2838;
  double t2844;
  double t2866;
  double t2869;
  double t3001;
  double t3005;
  double t3009;
  double t3019;
  t214 = Cos(var1[3]);
  t238 = Sin(var1[3]);
  t391 = Cos(var1[4]);
  t435 = Sin(var1[4]);
  t393 = -1.*var1[2]*t391*t238;
  t447 = -1.*var1[1]*t435;
  t603 = Cos(var1[5]);
  t620 = Sin(var1[5]);
  t465 = var1[2]*t214*t391;
  t466 = var1[0]*t435;
  t521 = -1.*var1[1]*t214*t391;
  t553 = var1[0]*t391*t238;
  t579 = t214*t391;
  t581 = t391*t238;
  t594 = -1.*t435;
  t605 = t214*t603*t435;
  t639 = t238*t620;
  t644 = t605 + t639;
  t658 = -1.*t603*t238;
  t659 = t214*t435*t620;
  t664 = t658 + t659;
  t959 = Cos(var1[13]);
  t937 = Sin(var1[13]);
  t706 = t603*t238*t435;
  t707 = -1.*t214*t620;
  t731 = t706 + t707;
  t1076 = -1.*t959;
  t1083 = 1. + t1076;
  t750 = t214*t603;
  t757 = t238*t435*t620;
  t762 = t750 + t757;
  t1084 = 0.07996*t1083;
  t1095 = 0.135*t937;
  t1113 = 0. + t1084 + t1095;
  t1131 = -0.135*t1083;
  t1146 = 0.07996*t937;
  t1157 = 0. + t1131 + t1146;
  t1024 = t959*t391*t603;
  t1052 = -1.*t391*t937*t620;
  t1072 = t1024 + t1052;
  t136 = -1.*var1[0];
  t1270 = t959*t644;
  t1285 = -1.*t937*t664;
  t1294 = t1270 + t1285;
  t1213 = t959*t731;
  t1222 = -1.*t937*t762;
  t1223 = t1213 + t1222;
  t950 = t937*t644;
  t969 = t959*t664;
  t980 = t950 + t969;
  t1173 = -1.*var1[2];
  t1188 = -1.*t391*t603*t1113;
  t1498 = Cos(var1[14]);
  t1536 = Sin(var1[14]);
  t1199 = -1.*t391*t1157*t620;
  t1549 = -1.*t1498;
  t1553 = 1. + t1549;
  t1393 = t391*t603*t937;
  t1395 = t959*t391*t620;
  t1396 = t1393 + t1395;
  t1328 = t937*t731;
  t1336 = t959*t762;
  t1339 = t1328 + t1336;
  t1567 = -0.08055*t1553;
  t1579 = -0.135*t1536;
  t1587 = 0. + t1567 + t1579;
  t1119 = t1113*t731;
  t1162 = t1157*t762;
  t1610 = -0.135*t1553;
  t1613 = 0.08055*t1536;
  t1617 = 0. + t1610 + t1613;
  t1262 = t391*t603*t1113;
  t1264 = t391*t1157*t620;
  t1692 = t1536*t435;
  t1699 = t1498*t1396;
  t1712 = t1692 + t1699;
  t1237 = -1.*t1113*t644;
  t1247 = -1.*t1157*t664;
  t1432 = t1113*t644;
  t1433 = t1157*t664;
  t1647 = -1.*t391*t1536*t238;
  t1662 = t1498*t1339;
  t1666 = t1647 + t1662;
  t1826 = -1.*t214*t391*t1536;
  t1832 = t1498*t980;
  t1841 = t1826 + t1832;
  t1399 = -1.*var1[1];
  t1415 = -1.*t1113*t731;
  t1417 = -1.*t1157*t762;
  t1592 = t1587*t435;
  t1642 = -1.*t1617*t1396;
  t2124 = Cos(var1[15]);
  t2163 = -1.*t2124;
  t2166 = 1. + t2163;
  t2203 = Sin(var1[15]);
  t1934 = -1.*t1498*t435;
  t1954 = t1536*t1396;
  t1956 = t1934 + t1954;
  t1528 = t1498*t214*t391;
  t1537 = t1536*t980;
  t1541 = t1528 + t1537;
  t1716 = t391*t1587*t238;
  t1728 = t1617*t1339;
  t2176 = -0.01004*t2166;
  t2210 = 0.08055*t2203;
  t2221 = 0. + t2176 + t2210;
  t2230 = -0.08055*t2166;
  t2251 = -0.01004*t2203;
  t2256 = 0. + t2230 + t2251;
  t1914 = t1498*t391*t238;
  t1921 = t1536*t1339;
  t1923 = t1914 + t1921;
  t1794 = -1.*t1587*t435;
  t1795 = t1617*t1396;
  t1866 = -1.*t214*t391*t1587;
  t1879 = -1.*t1617*t980;
  t1964 = t214*t391*t1587;
  t1973 = t1617*t980;
  t2020 = -1.*t391*t1587*t238;
  t2026 = -1.*t1617*t1339;
  t2045 = t214*t391*t1536;
  t2054 = -1.*t1498*t980;
  t2078 = 0. + t2045 + t2054;
  t2102 = t391*t1536*t238;
  t2104 = -1.*t1498*t1339;
  t2106 = 0. + t2102 + t2104;
  t2111 = -1.*t1536*t435;
  t2120 = -1.*t1498*t1396;
  t2122 = 0. + t2111 + t2120;
  t2227 = -1.*t2221*t1072;
  t2261 = -1.*t2256*t1956;
  t2495 = t2203*t1072;
  t2502 = t2124*t1956;
  t2515 = t2495 + t2502;
  t2645 = Cos(var1[16]);
  t2655 = -1.*t2645;
  t2660 = 1. + t2655;
  t2673 = Sin(var1[16]);
  t2546 = t2124*t1072;
  t2548 = -1.*t2203*t1956;
  t2552 = t2546 + t2548;
  t2289 = t2203*t1294;
  t2290 = t2124*t1541;
  t2301 = t2289 + t2290;
  t2316 = t2124*t1294;
  t2323 = -1.*t2203*t1541;
  t2324 = t2316 + t2323;
  t2331 = t2221*t1223;
  t2339 = t2256*t1923;
  t2672 = -0.08055*t2660;
  t2677 = -0.13004*t2673;
  t2695 = 0. + t2672 + t2677;
  t2405 = t2203*t1223;
  t2408 = t2124*t1923;
  t2410 = t2405 + t2408;
  t2703 = -0.13004*t2660;
  t2704 = 0.08055*t2673;
  t2712 = 0. + t2703 + t2704;
  t2464 = t2124*t1223;
  t2471 = -1.*t2203*t1923;
  t2475 = t2464 + t2471;
  t2365 = t2221*t1072;
  t2367 = t2256*t1956;
  t2383 = -1.*t2221*t1294;
  t2385 = -1.*t2256*t1541;
  t2576 = t2221*t1294;
  t2592 = t2256*t1541;
  t2612 = -1.*t2221*t1223;
  t2625 = -1.*t2256*t1923;
  t2696 = -1.*t2695*t2515;
  t2718 = -1.*t2712*t2552;
  t2953 = -1.*t2673*t2515;
  t2956 = t2645*t2552;
  t2961 = t2953 + t2956;
  t3049 = Cos(var1[17]);
  t3050 = -1.*t3049;
  t3054 = 1. + t3050;
  t3057 = Sin(var1[17]);
  t2971 = t2645*t2515;
  t2980 = t2673*t2552;
  t2992 = t2971 + t2980;
  t2757 = -1.*t2673*t2301;
  t2766 = t2645*t2324;
  t2767 = t2757 + t2766;
  t2775 = t2645*t2301;
  t2776 = t2673*t2324;
  t2779 = t2775 + t2776;
  t2820 = t2695*t2410;
  t2825 = t2712*t2475;
  t3056 = -0.19074*t3054;
  t3067 = 0.03315*t3057;
  t3073 = 0. + t3056 + t3067;
  t2885 = -1.*t2673*t2410;
  t2889 = t2645*t2475;
  t2909 = t2885 + t2889;
  t3086 = -0.03315*t3054;
  t3090 = -0.19074*t3057;
  t3091 = 0. + t3086 + t3090;
  t2915 = t2645*t2410;
  t2916 = t2673*t2475;
  t2917 = t2915 + t2916;
  t2838 = t2695*t2515;
  t2844 = t2712*t2552;
  t2866 = -1.*t2695*t2301;
  t2869 = -1.*t2712*t2324;
  t3001 = t2695*t2301;
  t3005 = t2712*t2324;
  t3009 = -1.*t2695*t2410;
  t3019 = -1.*t2712*t2475;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=t136;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t214*var1[2];
  p_output1[25]=-1.*t238*var1[2];
  p_output1[26]=t214*var1[0] + t238*var1[1];
  p_output1[27]=-1.*t238;
  p_output1[28]=t214;
  p_output1[29]=0;
  p_output1[30]=t393 + t447;
  p_output1[31]=t465 + t466;
  p_output1[32]=t521 + t553;
  p_output1[33]=t579;
  p_output1[34]=t581;
  p_output1[35]=t594;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
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
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=t393 + t447 + 0.135*t644 + 0.07996*t664;
  p_output1[79]=t465 + t466 + 0.135*t731 + 0.07996*t762;
  p_output1[80]=t521 + t553 + 0.135*t391*t603 + 0.07996*t391*t620;
  p_output1[81]=0. + t579;
  p_output1[82]=0. + t581;
  p_output1[83]=0. + t594;
  p_output1[84]=(0. + t1173 + t1188 + t1199)*t1223 - 0.135*t214*t391 + 0.08055*t980 + t1072*(0. + t1119 + t1162 + var1[1]);
  p_output1[85]=0.08055*t1339 + t1072*(0. + t1237 + t1247 + t136) - 0.135*t238*t391 + t1294*(0. + t1262 + t1264 + var1[2]);
  p_output1[86]=0.08055*t1396 + t1294*(0. + t1399 + t1415 + t1417) + 0.135*t435 + t1223*(0. + t1432 + t1433 + var1[0]);
  p_output1[87]=0. + t1270 + t1285;
  p_output1[88]=0. + t1213 + t1222;
  p_output1[89]=0. + t1024 + t1052;
  p_output1[90]=0.08055*t1294 - 0.01004*t1541 - 1.*(0. + t1173 + t1188 + t1199 + t1592 + t1642)*t1666 - 1.*t1712*(0. + t1119 + t1162 + t1716 + t1728 + var1[1]);
  p_output1[91]=0.08055*t1223 - 1.*t1712*(0. + t1237 + t1247 + t136 + t1866 + t1879) - 0.01004*t1923 - 1.*t1841*(0. + t1262 + t1264 + t1794 + t1795 + var1[2]);
  p_output1[92]=0.08055*t1072 - 0.01004*t1956 - 1.*t1841*(0. + t1399 + t1415 + t1417 + t2020 + t2026) - 1.*t1666*(0. + t1432 + t1433 + t1964 + t1973 + var1[0]);
  p_output1[93]=t2078;
  p_output1[94]=t2106;
  p_output1[95]=t2122;
  p_output1[96]=-1.*t1666*(0. + t1173 + t1188 + t1199 + t1592 + t1642 + t2227 + t2261) - 0.13004*t2301 + 0.08055*t2324 - 1.*t1712*(0. + t1119 + t1162 + t1716 + t1728 + t2331 + t2339 + var1[1]);
  p_output1[97]=-1.*t1712*(0. + t1237 + t1247 + t136 + t1866 + t1879 + t2383 + t2385) - 0.13004*t2410 + 0.08055*t2475 - 1.*t1841*(0. + t1262 + t1264 + t1794 + t1795 + t2365 + t2367 + var1[2]);
  p_output1[98]=-0.13004*t2515 + 0.08055*t2552 - 1.*t1841*(0. + t1399 + t1415 + t1417 + t2020 + t2026 + t2612 + t2625) - 1.*t1666*(0. + t1432 + t1433 + t1964 + t1973 + t2576 + t2592 + var1[0]);
  p_output1[99]=t2078;
  p_output1[100]=t2106;
  p_output1[101]=t2122;
  p_output1[102]=-1.*t1666*(0. + t1173 + t1188 + t1199 + t1592 + t1642 + t2227 + t2261 + t2696 + t2718) + 0.03315*t2767 - 0.19074*t2779 - 1.*t1712*(0. + t1119 + t1162 + t1716 + t1728 + t2331 + t2339 + t2820 + t2825 + var1[1]);
  p_output1[103]=-1.*t1712*(0. + t1237 + t1247 + t136 + t1866 + t1879 + t2383 + t2385 + t2866 + t2869) + 0.03315*t2909 - 0.19074*t2917 - 1.*t1841*(0. + t1262 + t1264 + t1794 + t1795 + t2365 + t2367 + t2838 + t2844 + var1[2]);
  p_output1[104]=0.03315*t2961 - 0.19074*t2992 - 1.*t1841*(0. + t1399 + t1415 + t1417 + t2020 + t2026 + t2612 + t2625 + t3009 + t3019) - 1.*t1666*(0. + t1432 + t1433 + t1964 + t1973 + t2576 + t2592 + t3001 + t3005 + var1[0]);
  p_output1[105]=t2078;
  p_output1[106]=t2106;
  p_output1[107]=t2122;
  p_output1[108]=-0.62554*(t2779*t3049 + t2767*t3057) + 0.01315*(t2767*t3049 - 1.*t2779*t3057) - 1.*t1666*(0. + t1173 + t1188 + t1199 + t1592 + t1642 + t2227 + t2261 + t2696 + t2718 - 1.*t2961*t3073 - 1.*t2992*t3091) - 1.*t1712*(0. + t1119 + t1162 + t1716 + t1728 + t2331 + t2339 + t2820 + t2825 + t2909*t3073 + t2917*t3091 + var1[1]);
  p_output1[109]=-0.62554*(t2917*t3049 + t2909*t3057) + 0.01315*(t2909*t3049 - 1.*t2917*t3057) - 1.*t1712*(0. + t1237 + t1247 + t136 + t1866 + t1879 + t2383 + t2385 + t2866 + t2869 - 1.*t2767*t3073 - 1.*t2779*t3091) - 1.*t1841*(0. + t1262 + t1264 + t1794 + t1795 + t2365 + t2367 + t2838 + t2844 + t2961*t3073 + t2992*t3091 + var1[2]);
  p_output1[110]=-0.62554*(t2992*t3049 + t2961*t3057) + 0.01315*(t2961*t3049 - 1.*t2992*t3057) - 1.*t1841*(0. + t1399 + t1415 + t1417 + t2020 + t2026 + t2612 + t2625 + t3009 + t3019 - 1.*t2909*t3073 - 1.*t2917*t3091) - 1.*t1666*(0. + t1432 + t1433 + t1964 + t1973 + t2576 + t2592 + t3001 + t3005 + t2767*t3073 + t2779*t3091 + var1[0]);
  p_output1[111]=t2078;
  p_output1[112]=t2106;
  p_output1[113]=t2122;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
}



void Js_RightAnkleJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
