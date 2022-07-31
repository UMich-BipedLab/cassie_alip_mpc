/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:06 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_LeftAnkleJoint_src.h"

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
  double t79;
  double t93;
  double t186;
  double t206;
  double t204;
  double t210;
  double t346;
  double t368;
  double t245;
  double t250;
  double t257;
  double t289;
  double t306;
  double t332;
  double t343;
  double t471;
  double t476;
  double t485;
  double t511;
  double t530;
  double t541;
  double t632;
  double t656;
  double t662;
  double t703;
  double t449;
  double t453;
  double t457;
  double t364;
  double t432;
  double t435;
  double t665;
  double t707;
  double t710;
  double t746;
  double t748;
  double t751;
  double t68;
  double t768;
  double t771;
  double t780;
  double t1108;
  double t1110;
  double t1114;
  double t926;
  double t927;
  double t928;
  double t854;
  double t881;
  double t912;
  double t1130;
  double t1146;
  double t1149;
  double t1303;
  double t1305;
  double t1313;
  double t1346;
  double t1006;
  double t1017;
  double t1023;
  double t736;
  double t766;
  double t1318;
  double t1348;
  double t1349;
  double t1359;
  double t1373;
  double t1383;
  double t797;
  double t818;
  double t819;
  double t1070;
  double t1074;
  double t950;
  double t962;
  double t1477;
  double t1518;
  double t1522;
  double t1157;
  double t1178;
  double t1180;
  double t1601;
  double t1603;
  double t1620;
  double t1234;
  double t1237;
  double t1397;
  double t1416;
  double t1417;
  double t1356;
  double t1384;
  double t1756;
  double t1761;
  double t1764;
  double t1950;
  double t1959;
  double t1977;
  double t1991;
  double t1456;
  double t1461;
  double t1651;
  double t1652;
  double t1656;
  double t1990;
  double t1993;
  double t2006;
  double t2011;
  double t2015;
  double t2027;
  double t1541;
  double t1559;
  double t1560;
  double t1584;
  double t1589;
  double t1625;
  double t1633;
  double t1709;
  double t1728;
  double t1697;
  double t1698;
  double t1793;
  double t1851;
  double t1854;
  double t1861;
  double t1889;
  double t1919;
  double t1929;
  double t1931;
  double t1939;
  double t2007;
  double t2028;
  double t2379;
  double t2385;
  double t2391;
  double t2438;
  double t2445;
  double t2450;
  double t2459;
  double t2396;
  double t2399;
  double t2422;
  double t2048;
  double t2056;
  double t2457;
  double t2470;
  double t2479;
  double t2278;
  double t2280;
  double t2283;
  double t2520;
  double t2524;
  double t2527;
  double t2299;
  double t2307;
  double t2309;
  double t2084;
  double t2100;
  double t2109;
  double t2118;
  double t2121;
  double t2137;
  double t2182;
  double t2190;
  double t2210;
  double t2239;
  double t2345;
  double t2358;
  double t2329;
  double t2339;
  double t2511;
  double t2529;
  double t2680;
  double t2682;
  double t2686;
  double t2760;
  double t2766;
  double t2769;
  double t2774;
  double t2689;
  double t2694;
  double t2695;
  double t2534;
  double t2544;
  double t2772;
  double t2779;
  double t2782;
  double t2624;
  double t2626;
  double t2628;
  double t2785;
  double t2786;
  double t2801;
  double t2639;
  double t2644;
  double t2646;
  double t2552;
  double t2558;
  double t2559;
  double t2577;
  double t2591;
  double t2601;
  double t2615;
  double t2619;
  double t2658;
  double t2669;
  double t2704;
  double t2710;
  double t2727;
  double t2734;
  t79 = Cos(var1[3]);
  t93 = Sin(var1[3]);
  t186 = Cos(var1[4]);
  t206 = Sin(var1[4]);
  t204 = -1.*var1[2]*t186*t93;
  t210 = -1.*var1[1]*t206;
  t346 = Cos(var1[5]);
  t368 = Sin(var1[5]);
  t245 = var1[2]*t79*t186;
  t250 = var1[0]*t206;
  t257 = -1.*var1[1]*t79*t186;
  t289 = var1[0]*t186*t93;
  t306 = t79*t186;
  t332 = t186*t93;
  t343 = -1.*t206;
  t471 = t346*t93*t206;
  t476 = -1.*t79*t368;
  t485 = t471 + t476;
  t511 = t79*t346;
  t530 = t93*t206*t368;
  t541 = t511 + t530;
  t632 = Cos(var1[6]);
  t656 = -1.*t632;
  t662 = 1. + t656;
  t703 = Sin(var1[6]);
  t449 = -1.*t346*t93;
  t453 = t79*t206*t368;
  t457 = t449 + t453;
  t364 = t79*t346*t206;
  t432 = t93*t368;
  t435 = t364 + t432;
  t665 = 0.07996*t662;
  t707 = -0.135*t703;
  t710 = 0. + t665 + t707;
  t746 = 0.135*t662;
  t748 = 0.07996*t703;
  t751 = 0. + t746 + t748;
  t68 = -1.*var1[0];
  t768 = t186*t346*t632;
  t771 = -1.*t186*t368*t703;
  t780 = t768 + t771;
  t1108 = t632*t435;
  t1110 = -1.*t457*t703;
  t1114 = t1108 + t1110;
  t926 = t632*t485;
  t927 = -1.*t541*t703;
  t928 = t926 + t927;
  t854 = -1.*var1[2];
  t881 = -1.*t186*t346*t710;
  t912 = -1.*t186*t368*t751;
  t1130 = t186*t632*t368;
  t1146 = t186*t346*t703;
  t1149 = t1130 + t1146;
  t1303 = Cos(var1[7]);
  t1305 = -1.*t1303;
  t1313 = 1. + t1305;
  t1346 = Sin(var1[7]);
  t1006 = t632*t541;
  t1017 = t485*t703;
  t1023 = t1006 + t1017;
  t736 = t485*t710;
  t766 = t541*t751;
  t1318 = 0.135*t1313;
  t1348 = 0.08055*t1346;
  t1349 = 0. + t1318 + t1348;
  t1359 = -0.08055*t1313;
  t1373 = 0.135*t1346;
  t1383 = 0. + t1359 + t1373;
  t797 = t632*t457;
  t818 = t435*t703;
  t819 = t797 + t818;
  t1070 = t186*t346*t710;
  t1074 = t186*t368*t751;
  t950 = -1.*t435*t710;
  t962 = -1.*t457*t751;
  t1477 = t1303*t1149;
  t1518 = t206*t1346;
  t1522 = t1477 + t1518;
  t1157 = -1.*var1[1];
  t1178 = -1.*t485*t710;
  t1180 = -1.*t541*t751;
  t1601 = t1303*t819;
  t1603 = -1.*t79*t186*t1346;
  t1620 = t1601 + t1603;
  t1234 = t435*t710;
  t1237 = t457*t751;
  t1397 = t1303*t1023;
  t1416 = -1.*t186*t93*t1346;
  t1417 = t1397 + t1416;
  t1356 = -1.*t1149*t1349;
  t1384 = t206*t1383;
  t1756 = -1.*t1303*t206;
  t1761 = t1149*t1346;
  t1764 = t1756 + t1761;
  t1950 = Cos(var1[8]);
  t1959 = -1.*t1950;
  t1977 = 1. + t1959;
  t1991 = Sin(var1[8]);
  t1456 = t1023*t1349;
  t1461 = t186*t93*t1383;
  t1651 = t186*t1303*t93;
  t1652 = t1023*t1346;
  t1656 = t1651 + t1652;
  t1990 = -0.08055*t1977;
  t1993 = -0.01004*t1991;
  t2006 = 0. + t1990 + t1993;
  t2011 = -0.01004*t1977;
  t2015 = 0.08055*t1991;
  t2027 = 0. + t2011 + t2015;
  t1541 = t79*t186*t1303;
  t1559 = t819*t1346;
  t1560 = t1541 + t1559;
  t1584 = t1149*t1349;
  t1589 = -1.*t206*t1383;
  t1625 = -1.*t819*t1349;
  t1633 = -1.*t79*t186*t1383;
  t1709 = t819*t1349;
  t1728 = t79*t186*t1383;
  t1697 = -1.*t1023*t1349;
  t1698 = -1.*t186*t93*t1383;
  t1793 = -1.*t1303*t819;
  t1851 = t79*t186*t1346;
  t1854 = 0. + t1793 + t1851;
  t1861 = -1.*t1303*t1023;
  t1889 = t186*t93*t1346;
  t1919 = 0. + t1861 + t1889;
  t1929 = -1.*t1303*t1149;
  t1931 = -1.*t206*t1346;
  t1939 = 0. + t1929 + t1931;
  t2007 = -1.*t1764*t2006;
  t2028 = -1.*t780*t2027;
  t2379 = t1950*t1764;
  t2385 = t780*t1991;
  t2391 = t2379 + t2385;
  t2438 = Cos(var1[9]);
  t2445 = -1.*t2438;
  t2450 = 1. + t2445;
  t2459 = Sin(var1[9]);
  t2396 = t1950*t780;
  t2399 = -1.*t1764*t1991;
  t2422 = t2396 + t2399;
  t2048 = t1656*t2006;
  t2056 = t928*t2027;
  t2457 = -0.08055*t2450;
  t2470 = -0.13004*t2459;
  t2479 = 0. + t2457 + t2470;
  t2278 = t1950*t1656;
  t2280 = t928*t1991;
  t2283 = t2278 + t2280;
  t2520 = -0.13004*t2450;
  t2524 = 0.08055*t2459;
  t2527 = 0. + t2520 + t2524;
  t2299 = t1950*t928;
  t2307 = -1.*t1656*t1991;
  t2309 = t2299 + t2307;
  t2084 = t1950*t1560;
  t2100 = t1114*t1991;
  t2109 = t2084 + t2100;
  t2118 = t1950*t1114;
  t2121 = -1.*t1560*t1991;
  t2137 = t2118 + t2121;
  t2182 = t1764*t2006;
  t2190 = t780*t2027;
  t2210 = -1.*t1560*t2006;
  t2239 = -1.*t1114*t2027;
  t2345 = -1.*t1656*t2006;
  t2358 = -1.*t928*t2027;
  t2329 = t1560*t2006;
  t2339 = t1114*t2027;
  t2511 = -1.*t2479*t2391;
  t2529 = -1.*t2527*t2422;
  t2680 = -1.*t2459*t2391;
  t2682 = t2438*t2422;
  t2686 = t2680 + t2682;
  t2760 = Cos(var1[10]);
  t2766 = -1.*t2760;
  t2769 = 1. + t2766;
  t2774 = Sin(var1[10]);
  t2689 = t2438*t2391;
  t2694 = t2459*t2422;
  t2695 = t2689 + t2694;
  t2534 = t2479*t2283;
  t2544 = t2527*t2309;
  t2772 = -0.19074*t2769;
  t2779 = 0.03315*t2774;
  t2782 = 0. + t2772 + t2779;
  t2624 = -1.*t2459*t2283;
  t2626 = t2438*t2309;
  t2628 = t2624 + t2626;
  t2785 = -0.03315*t2769;
  t2786 = -0.19074*t2774;
  t2801 = 0. + t2785 + t2786;
  t2639 = t2438*t2283;
  t2644 = t2459*t2309;
  t2646 = t2639 + t2644;
  t2552 = -1.*t2459*t2109;
  t2558 = t2438*t2137;
  t2559 = t2552 + t2558;
  t2577 = t2438*t2109;
  t2591 = t2459*t2137;
  t2601 = t2577 + t2591;
  t2615 = t2479*t2391;
  t2619 = t2527*t2422;
  t2658 = -1.*t2479*t2109;
  t2669 = -1.*t2527*t2137;
  t2704 = -1.*t2479*t2283;
  t2710 = -1.*t2527*t2309;
  t2727 = t2479*t2109;
  t2734 = t2527*t2137;
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
  p_output1[19]=t68;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t79*var1[2];
  p_output1[25]=-1.*t93*var1[2];
  p_output1[26]=t79*var1[0] + t93*var1[1];
  p_output1[27]=-1.*t93;
  p_output1[28]=t79;
  p_output1[29]=0;
  p_output1[30]=t204 + t210;
  p_output1[31]=t245 + t250;
  p_output1[32]=t257 + t289;
  p_output1[33]=t306;
  p_output1[34]=t332;
  p_output1[35]=t343;
  p_output1[36]=t204 + t210 - 0.135*t435 + 0.07996*t457;
  p_output1[37]=t245 + t250 - 0.135*t485 + 0.07996*t541;
  p_output1[38]=t257 + t289 - 0.135*t186*t346 + 0.07996*t186*t368;
  p_output1[39]=0. + t306;
  p_output1[40]=0. + t332;
  p_output1[41]=0. + t343;
  p_output1[42]=0.135*t186*t79 + 0.08055*t819 + (0. + t854 + t881 + t912)*t928 + t780*(0. + t736 + t766 + var1[1]);
  p_output1[43]=0.08055*t1023 + 0.135*t186*t93 + t780*(0. + t68 + t950 + t962) + t1114*(0. + t1070 + t1074 + var1[2]);
  p_output1[44]=0.08055*t1149 + t1114*(0. + t1157 + t1178 + t1180) - 0.135*t206 + t928*(0. + t1234 + t1237 + var1[0]);
  p_output1[45]=0. + t1108 + t1110;
  p_output1[46]=0. + t926 + t927;
  p_output1[47]=0. + t768 + t771;
  p_output1[48]=0.08055*t1114 - 0.01004*t1560 - 1.*t1417*(0. + t1356 + t1384 + t854 + t881 + t912) - 1.*t1522*(0. + t1456 + t1461 + t736 + t766 + var1[1]);
  p_output1[49]=-0.01004*t1656 + 0.08055*t928 - 1.*t1522*(0. + t1625 + t1633 + t68 + t950 + t962) - 1.*t1620*(0. + t1070 + t1074 + t1584 + t1589 + var1[2]);
  p_output1[50]=-1.*t1620*(0. + t1157 + t1178 + t1180 + t1697 + t1698) - 0.01004*t1764 + 0.08055*t780 - 1.*t1417*(0. + t1234 + t1237 + t1709 + t1728 + var1[0]);
  p_output1[51]=t1854;
  p_output1[52]=t1919;
  p_output1[53]=t1939;
  p_output1[54]=-0.13004*t2109 + 0.08055*t2137 - 1.*t1417*(0. + t1356 + t1384 + t2007 + t2028 + t854 + t881 + t912) - 1.*t1522*(0. + t1456 + t1461 + t2048 + t2056 + t736 + t766 + var1[1]);
  p_output1[55]=-0.13004*t2283 + 0.08055*t2309 - 1.*t1522*(0. + t1625 + t1633 + t2210 + t2239 + t68 + t950 + t962) - 1.*t1620*(0. + t1070 + t1074 + t1584 + t1589 + t2182 + t2190 + var1[2]);
  p_output1[56]=-1.*t1620*(0. + t1157 + t1178 + t1180 + t1697 + t1698 + t2345 + t2358) - 0.13004*t2391 + 0.08055*t2422 - 1.*t1417*(0. + t1234 + t1237 + t1709 + t1728 + t2329 + t2339 + var1[0]);
  p_output1[57]=t1854;
  p_output1[58]=t1919;
  p_output1[59]=t1939;
  p_output1[60]=0.03315*t2559 - 0.19074*t2601 - 1.*t1417*(0. + t1356 + t1384 + t2007 + t2028 + t2511 + t2529 + t854 + t881 + t912) - 1.*t1522*(0. + t1456 + t1461 + t2048 + t2056 + t2534 + t2544 + t736 + t766 + var1[1]);
  p_output1[61]=0.03315*t2628 - 0.19074*t2646 - 1.*t1522*(0. + t1625 + t1633 + t2210 + t2239 + t2658 + t2669 + t68 + t950 + t962) - 1.*t1620*(0. + t1070 + t1074 + t1584 + t1589 + t2182 + t2190 + t2615 + t2619 + var1[2]);
  p_output1[62]=0.03315*t2686 - 0.19074*t2695 - 1.*t1620*(0. + t1157 + t1178 + t1180 + t1697 + t1698 + t2345 + t2358 + t2704 + t2710) - 1.*t1417*(0. + t1234 + t1237 + t1709 + t1728 + t2329 + t2339 + t2727 + t2734 + var1[0]);
  p_output1[63]=t1854;
  p_output1[64]=t1919;
  p_output1[65]=t1939;
  p_output1[66]=-0.62554*(t2601*t2760 + t2559*t2774) + 0.01315*(t2559*t2760 - 1.*t2601*t2774) - 1.*t1417*(0. + t1356 + t1384 + t2007 + t2028 + t2511 + t2529 - 1.*t2686*t2782 - 1.*t2695*t2801 + t854 + t881 + t912) - 1.*t1522*(0. + t1456 + t1461 + t2048 + t2056 + t2534 + t2544 + t2628*t2782 + t2646*t2801 + t736 + t766 + var1[1]);
  p_output1[67]=-0.62554*(t2646*t2760 + t2628*t2774) + 0.01315*(t2628*t2760 - 1.*t2646*t2774) - 1.*t1522*(0. + t1625 + t1633 + t2210 + t2239 + t2658 + t2669 - 1.*t2559*t2782 - 1.*t2601*t2801 + t68 + t950 + t962) - 1.*t1620*(0. + t1070 + t1074 + t1584 + t1589 + t2182 + t2190 + t2615 + t2619 + t2686*t2782 + t2695*t2801 + var1[2]);
  p_output1[68]=-0.62554*(t2695*t2760 + t2686*t2774) + 0.01315*(t2686*t2760 - 1.*t2695*t2774) - 1.*t1620*(0. + t1157 + t1178 + t1180 + t1697 + t1698 + t2345 + t2358 + t2704 + t2710 - 1.*t2628*t2782 - 1.*t2646*t2801) - 1.*t1417*(0. + t1234 + t1237 + t1709 + t1728 + t2329 + t2339 + t2727 + t2734 + t2559*t2782 + t2601*t2801 + var1[0]);
  p_output1[69]=t1854;
  p_output1[70]=t1919;
  p_output1[71]=t1939;
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



void Js_LeftAnkleJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
