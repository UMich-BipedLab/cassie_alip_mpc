/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:16 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_LeftTarsus_src.h"

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
  double t60;
  double t80;
  double t202;
  double t219;
  double t205;
  double t234;
  double t355;
  double t366;
  double t260;
  double t277;
  double t310;
  double t325;
  double t332;
  double t345;
  double t346;
  double t455;
  double t475;
  double t480;
  double t532;
  double t536;
  double t555;
  double t694;
  double t697;
  double t712;
  double t745;
  double t388;
  double t407;
  double t418;
  double t361;
  double t379;
  double t381;
  double t737;
  double t751;
  double t759;
  double t777;
  double t782;
  double t783;
  double t25;
  double t829;
  double t834;
  double t845;
  double t1169;
  double t1171;
  double t1179;
  double t948;
  double t957;
  double t958;
  double t897;
  double t906;
  double t915;
  double t1189;
  double t1195;
  double t1200;
  double t1371;
  double t1374;
  double t1375;
  double t1401;
  double t1047;
  double t1075;
  double t1087;
  double t773;
  double t800;
  double t1393;
  double t1402;
  double t1420;
  double t1423;
  double t1435;
  double t1453;
  double t876;
  double t877;
  double t879;
  double t1124;
  double t1125;
  double t990;
  double t999;
  double t1552;
  double t1556;
  double t1560;
  double t1207;
  double t1209;
  double t1211;
  double t1657;
  double t1658;
  double t1671;
  double t1220;
  double t1230;
  double t1473;
  double t1485;
  double t1492;
  double t1421;
  double t1459;
  double t1858;
  double t1871;
  double t1879;
  double t2016;
  double t2020;
  double t2024;
  double t2028;
  double t1521;
  double t1526;
  double t1710;
  double t1723;
  double t1733;
  double t2025;
  double t2040;
  double t2042;
  double t2067;
  double t2077;
  double t2079;
  double t1572;
  double t1575;
  double t1577;
  double t1625;
  double t1649;
  double t1686;
  double t1687;
  double t1796;
  double t1801;
  double t1752;
  double t1757;
  double t1933;
  double t1937;
  double t1950;
  double t1954;
  double t1958;
  double t1959;
  double t1960;
  double t1993;
  double t2010;
  double t2057;
  double t2084;
  double t2394;
  double t2397;
  double t2398;
  double t2429;
  double t2434;
  double t2437;
  double t2445;
  double t2405;
  double t2418;
  double t2422;
  double t2132;
  double t2137;
  double t2438;
  double t2454;
  double t2464;
  double t2307;
  double t2314;
  double t2315;
  double t2482;
  double t2488;
  double t2494;
  double t2327;
  double t2328;
  double t2335;
  double t2161;
  double t2162;
  double t2167;
  double t2209;
  double t2215;
  double t2219;
  double t2236;
  double t2242;
  double t2283;
  double t2284;
  double t2382;
  double t2387;
  double t2352;
  double t2362;
  double t2477;
  double t2499;
  double t2656;
  double t2665;
  double t2669;
  double t2717;
  double t2720;
  double t2724;
  double t2738;
  double t2674;
  double t2675;
  double t2685;
  double t2516;
  double t2521;
  double t2734;
  double t2745;
  double t2746;
  double t2611;
  double t2614;
  double t2615;
  double t2749;
  double t2751;
  double t2752;
  double t2630;
  double t2632;
  double t2641;
  double t2548;
  double t2552;
  double t2553;
  double t2556;
  double t2560;
  double t2565;
  double t2578;
  double t2600;
  double t2648;
  double t2649;
  double t2688;
  double t2689;
  double t2706;
  double t2708;
  t60 = Cos(var1[3]);
  t80 = Sin(var1[3]);
  t202 = Cos(var1[4]);
  t219 = Sin(var1[4]);
  t205 = -1.*var1[2]*t202*t80;
  t234 = -1.*var1[1]*t219;
  t355 = Cos(var1[5]);
  t366 = Sin(var1[5]);
  t260 = var1[2]*t60*t202;
  t277 = var1[0]*t219;
  t310 = -1.*var1[1]*t60*t202;
  t325 = var1[0]*t202*t80;
  t332 = t60*t202;
  t345 = t202*t80;
  t346 = -1.*t219;
  t455 = t355*t80*t219;
  t475 = -1.*t60*t366;
  t480 = t455 + t475;
  t532 = t60*t355;
  t536 = t80*t219*t366;
  t555 = t532 + t536;
  t694 = Cos(var1[6]);
  t697 = -1.*t694;
  t712 = 1. + t697;
  t745 = Sin(var1[6]);
  t388 = -1.*t355*t80;
  t407 = t60*t219*t366;
  t418 = t388 + t407;
  t361 = t60*t355*t219;
  t379 = t80*t366;
  t381 = t361 + t379;
  t737 = 0.07996*t712;
  t751 = -0.135*t745;
  t759 = 0. + t737 + t751;
  t777 = 0.135*t712;
  t782 = 0.07996*t745;
  t783 = 0. + t777 + t782;
  t25 = -1.*var1[0];
  t829 = t202*t355*t694;
  t834 = -1.*t202*t366*t745;
  t845 = t829 + t834;
  t1169 = t694*t381;
  t1171 = -1.*t418*t745;
  t1179 = t1169 + t1171;
  t948 = t694*t480;
  t957 = -1.*t555*t745;
  t958 = t948 + t957;
  t897 = -1.*var1[2];
  t906 = -1.*t202*t355*t759;
  t915 = -1.*t202*t366*t783;
  t1189 = t202*t694*t366;
  t1195 = t202*t355*t745;
  t1200 = t1189 + t1195;
  t1371 = Cos(var1[7]);
  t1374 = -1.*t1371;
  t1375 = 1. + t1374;
  t1401 = Sin(var1[7]);
  t1047 = t694*t555;
  t1075 = t480*t745;
  t1087 = t1047 + t1075;
  t773 = t480*t759;
  t800 = t555*t783;
  t1393 = 0.135*t1375;
  t1402 = 0.08055*t1401;
  t1420 = 0. + t1393 + t1402;
  t1423 = -0.08055*t1375;
  t1435 = 0.135*t1401;
  t1453 = 0. + t1423 + t1435;
  t876 = t694*t418;
  t877 = t381*t745;
  t879 = t876 + t877;
  t1124 = t202*t355*t759;
  t1125 = t202*t366*t783;
  t990 = -1.*t381*t759;
  t999 = -1.*t418*t783;
  t1552 = t1371*t1200;
  t1556 = t219*t1401;
  t1560 = t1552 + t1556;
  t1207 = -1.*var1[1];
  t1209 = -1.*t480*t759;
  t1211 = -1.*t555*t783;
  t1657 = t1371*t879;
  t1658 = -1.*t60*t202*t1401;
  t1671 = t1657 + t1658;
  t1220 = t381*t759;
  t1230 = t418*t783;
  t1473 = t1371*t1087;
  t1485 = -1.*t202*t80*t1401;
  t1492 = t1473 + t1485;
  t1421 = -1.*t1200*t1420;
  t1459 = t219*t1453;
  t1858 = -1.*t1371*t219;
  t1871 = t1200*t1401;
  t1879 = t1858 + t1871;
  t2016 = Cos(var1[8]);
  t2020 = -1.*t2016;
  t2024 = 1. + t2020;
  t2028 = Sin(var1[8]);
  t1521 = t1087*t1420;
  t1526 = t202*t80*t1453;
  t1710 = t202*t1371*t80;
  t1723 = t1087*t1401;
  t1733 = t1710 + t1723;
  t2025 = -0.08055*t2024;
  t2040 = -0.01004*t2028;
  t2042 = 0. + t2025 + t2040;
  t2067 = -0.01004*t2024;
  t2077 = 0.08055*t2028;
  t2079 = 0. + t2067 + t2077;
  t1572 = t60*t202*t1371;
  t1575 = t879*t1401;
  t1577 = t1572 + t1575;
  t1625 = t1200*t1420;
  t1649 = -1.*t219*t1453;
  t1686 = -1.*t879*t1420;
  t1687 = -1.*t60*t202*t1453;
  t1796 = t879*t1420;
  t1801 = t60*t202*t1453;
  t1752 = -1.*t1087*t1420;
  t1757 = -1.*t202*t80*t1453;
  t1933 = -1.*t1371*t879;
  t1937 = t60*t202*t1401;
  t1950 = 0. + t1933 + t1937;
  t1954 = -1.*t1371*t1087;
  t1958 = t202*t80*t1401;
  t1959 = 0. + t1954 + t1958;
  t1960 = -1.*t1371*t1200;
  t1993 = -1.*t219*t1401;
  t2010 = 0. + t1960 + t1993;
  t2057 = -1.*t1879*t2042;
  t2084 = -1.*t845*t2079;
  t2394 = t2016*t1879;
  t2397 = t845*t2028;
  t2398 = t2394 + t2397;
  t2429 = Cos(var1[9]);
  t2434 = -1.*t2429;
  t2437 = 1. + t2434;
  t2445 = Sin(var1[9]);
  t2405 = t2016*t845;
  t2418 = -1.*t1879*t2028;
  t2422 = t2405 + t2418;
  t2132 = t1733*t2042;
  t2137 = t958*t2079;
  t2438 = -0.08055*t2437;
  t2454 = -0.13004*t2445;
  t2464 = 0. + t2438 + t2454;
  t2307 = t2016*t1733;
  t2314 = t958*t2028;
  t2315 = t2307 + t2314;
  t2482 = -0.13004*t2437;
  t2488 = 0.08055*t2445;
  t2494 = 0. + t2482 + t2488;
  t2327 = t2016*t958;
  t2328 = -1.*t1733*t2028;
  t2335 = t2327 + t2328;
  t2161 = t2016*t1577;
  t2162 = t1179*t2028;
  t2167 = t2161 + t2162;
  t2209 = t2016*t1179;
  t2215 = -1.*t1577*t2028;
  t2219 = t2209 + t2215;
  t2236 = t1879*t2042;
  t2242 = t845*t2079;
  t2283 = -1.*t1577*t2042;
  t2284 = -1.*t1179*t2079;
  t2382 = -1.*t1733*t2042;
  t2387 = -1.*t958*t2079;
  t2352 = t1577*t2042;
  t2362 = t1179*t2079;
  t2477 = -1.*t2464*t2398;
  t2499 = -1.*t2494*t2422;
  t2656 = -1.*t2445*t2398;
  t2665 = t2429*t2422;
  t2669 = t2656 + t2665;
  t2717 = Cos(var1[10]);
  t2720 = -1.*t2717;
  t2724 = 1. + t2720;
  t2738 = Sin(var1[10]);
  t2674 = t2429*t2398;
  t2675 = t2445*t2422;
  t2685 = t2674 + t2675;
  t2516 = t2464*t2315;
  t2521 = t2494*t2335;
  t2734 = -0.19074*t2724;
  t2745 = 0.03315*t2738;
  t2746 = 0. + t2734 + t2745;
  t2611 = -1.*t2445*t2315;
  t2614 = t2429*t2335;
  t2615 = t2611 + t2614;
  t2749 = -0.03315*t2724;
  t2751 = -0.19074*t2738;
  t2752 = 0. + t2749 + t2751;
  t2630 = t2429*t2315;
  t2632 = t2445*t2335;
  t2641 = t2630 + t2632;
  t2548 = -1.*t2445*t2167;
  t2552 = t2429*t2219;
  t2553 = t2548 + t2552;
  t2556 = t2429*t2167;
  t2560 = t2445*t2219;
  t2565 = t2556 + t2560;
  t2578 = t2464*t2398;
  t2600 = t2494*t2422;
  t2648 = -1.*t2464*t2167;
  t2649 = -1.*t2494*t2219;
  t2688 = -1.*t2464*t2315;
  t2689 = -1.*t2494*t2335;
  t2706 = t2464*t2167;
  t2708 = t2494*t2219;
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
  p_output1[19]=t25;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t60*var1[2];
  p_output1[25]=-1.*t80*var1[2];
  p_output1[26]=t60*var1[0] + t80*var1[1];
  p_output1[27]=-1.*t80;
  p_output1[28]=t60;
  p_output1[29]=0;
  p_output1[30]=t205 + t234;
  p_output1[31]=t260 + t277;
  p_output1[32]=t310 + t325;
  p_output1[33]=t332;
  p_output1[34]=t345;
  p_output1[35]=t346;
  p_output1[36]=t205 + t234 - 0.135*t381 + 0.07996*t418;
  p_output1[37]=t260 + t277 - 0.135*t480 + 0.07996*t555;
  p_output1[38]=t310 + t325 - 0.135*t202*t355 + 0.07996*t202*t366;
  p_output1[39]=0. + t332;
  p_output1[40]=0. + t345;
  p_output1[41]=0. + t346;
  p_output1[42]=0.135*t202*t60 + 0.08055*t879 + (0. + t897 + t906 + t915)*t958 + t845*(0. + t773 + t800 + var1[1]);
  p_output1[43]=0.08055*t1087 + 0.135*t202*t80 + t845*(0. + t25 + t990 + t999) + t1179*(0. + t1124 + t1125 + var1[2]);
  p_output1[44]=0.08055*t1200 + t1179*(0. + t1207 + t1209 + t1211) - 0.135*t219 + t958*(0. + t1220 + t1230 + var1[0]);
  p_output1[45]=0. + t1169 + t1171;
  p_output1[46]=0. + t948 + t957;
  p_output1[47]=0. + t829 + t834;
  p_output1[48]=0.08055*t1179 - 0.01004*t1577 - 1.*t1492*(0. + t1421 + t1459 + t897 + t906 + t915) - 1.*t1560*(0. + t1521 + t1526 + t773 + t800 + var1[1]);
  p_output1[49]=-0.01004*t1733 + 0.08055*t958 - 1.*t1560*(0. + t1686 + t1687 + t25 + t990 + t999) - 1.*t1671*(0. + t1124 + t1125 + t1625 + t1649 + var1[2]);
  p_output1[50]=-1.*t1671*(0. + t1207 + t1209 + t1211 + t1752 + t1757) - 0.01004*t1879 + 0.08055*t845 - 1.*t1492*(0. + t1220 + t1230 + t1796 + t1801 + var1[0]);
  p_output1[51]=t1950;
  p_output1[52]=t1959;
  p_output1[53]=t2010;
  p_output1[54]=-0.13004*t2167 + 0.08055*t2219 - 1.*t1492*(0. + t1421 + t1459 + t2057 + t2084 + t897 + t906 + t915) - 1.*t1560*(0. + t1521 + t1526 + t2132 + t2137 + t773 + t800 + var1[1]);
  p_output1[55]=-0.13004*t2315 + 0.08055*t2335 - 1.*t1560*(0. + t1686 + t1687 + t2283 + t2284 + t25 + t990 + t999) - 1.*t1671*(0. + t1124 + t1125 + t1625 + t1649 + t2236 + t2242 + var1[2]);
  p_output1[56]=-1.*t1671*(0. + t1207 + t1209 + t1211 + t1752 + t1757 + t2382 + t2387) - 0.13004*t2398 + 0.08055*t2422 - 1.*t1492*(0. + t1220 + t1230 + t1796 + t1801 + t2352 + t2362 + var1[0]);
  p_output1[57]=t1950;
  p_output1[58]=t1959;
  p_output1[59]=t2010;
  p_output1[60]=0.03315*t2553 - 0.19074*t2565 - 1.*t1492*(0. + t1421 + t1459 + t2057 + t2084 + t2477 + t2499 + t897 + t906 + t915) - 1.*t1560*(0. + t1521 + t1526 + t2132 + t2137 + t2516 + t2521 + t773 + t800 + var1[1]);
  p_output1[61]=0.03315*t2615 - 0.19074*t2641 - 1.*t1560*(0. + t1686 + t1687 + t2283 + t2284 + t25 + t2648 + t2649 + t990 + t999) - 1.*t1671*(0. + t1124 + t1125 + t1625 + t1649 + t2236 + t2242 + t2578 + t2600 + var1[2]);
  p_output1[62]=0.03315*t2669 - 0.19074*t2685 - 1.*t1671*(0. + t1207 + t1209 + t1211 + t1752 + t1757 + t2382 + t2387 + t2688 + t2689) - 1.*t1492*(0. + t1220 + t1230 + t1796 + t1801 + t2352 + t2362 + t2706 + t2708 + var1[0]);
  p_output1[63]=t1950;
  p_output1[64]=t1959;
  p_output1[65]=t2010;
  p_output1[66]=-0.62554*(t2565*t2717 + t2553*t2738) + 0.01315*(t2553*t2717 - 1.*t2565*t2738) - 1.*t1492*(0. + t1421 + t1459 + t2057 + t2084 + t2477 + t2499 - 1.*t2669*t2746 - 1.*t2685*t2752 + t897 + t906 + t915) - 1.*t1560*(0. + t1521 + t1526 + t2132 + t2137 + t2516 + t2521 + t2615*t2746 + t2641*t2752 + t773 + t800 + var1[1]);
  p_output1[67]=-0.62554*(t2641*t2717 + t2615*t2738) + 0.01315*(t2615*t2717 - 1.*t2641*t2738) - 1.*t1560*(0. + t1686 + t1687 + t2283 + t2284 + t25 + t2648 + t2649 - 1.*t2553*t2746 - 1.*t2565*t2752 + t990 + t999) - 1.*t1671*(0. + t1124 + t1125 + t1625 + t1649 + t2236 + t2242 + t2578 + t2600 + t2669*t2746 + t2685*t2752 + var1[2]);
  p_output1[68]=-0.62554*(t2685*t2717 + t2669*t2738) + 0.01315*(t2669*t2717 - 1.*t2685*t2738) - 1.*t1671*(0. + t1207 + t1209 + t1211 + t1752 + t1757 + t2382 + t2387 + t2688 + t2689 - 1.*t2615*t2746 - 1.*t2641*t2752) - 1.*t1492*(0. + t1220 + t1230 + t1796 + t1801 + t2352 + t2362 + t2706 + t2708 + t2553*t2746 + t2565*t2752 + var1[0]);
  p_output1[69]=t1950;
  p_output1[70]=t1959;
  p_output1[71]=t2010;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
}



void Js_LeftTarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
