/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:43 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_LeftKneeSpringJoint_src.h"

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
  double t120;
  double t128;
  double t261;
  double t284;
  double t271;
  double t296;
  double t542;
  double t566;
  double t321;
  double t328;
  double t398;
  double t414;
  double t501;
  double t503;
  double t521;
  double t678;
  double t727;
  double t733;
  double t755;
  double t772;
  double t777;
  double t943;
  double t958;
  double t972;
  double t989;
  double t607;
  double t610;
  double t631;
  double t564;
  double t586;
  double t588;
  double t982;
  double t1010;
  double t1015;
  double t1028;
  double t1029;
  double t1035;
  double t89;
  double t1086;
  double t1092;
  double t1094;
  double t1435;
  double t1455;
  double t1465;
  double t1176;
  double t1187;
  double t1231;
  double t1157;
  double t1160;
  double t1161;
  double t1501;
  double t1510;
  double t1512;
  double t1693;
  double t1702;
  double t1714;
  double t1722;
  double t1369;
  double t1379;
  double t1384;
  double t1016;
  double t1072;
  double t1717;
  double t1758;
  double t1766;
  double t1774;
  double t1777;
  double t1800;
  double t1136;
  double t1137;
  double t1141;
  double t1400;
  double t1401;
  double t1308;
  double t1314;
  double t1955;
  double t1958;
  double t1976;
  double t1523;
  double t1535;
  double t1540;
  double t2065;
  double t2069;
  double t2076;
  double t1612;
  double t1622;
  double t1816;
  double t1821;
  double t1828;
  double t1767;
  double t1809;
  double t2283;
  double t2288;
  double t2294;
  double t2374;
  double t2380;
  double t2389;
  double t2432;
  double t1882;
  double t1918;
  double t2138;
  double t2147;
  double t2168;
  double t2392;
  double t2440;
  double t2447;
  double t2464;
  double t2470;
  double t2476;
  double t1981;
  double t1987;
  double t1996;
  double t2044;
  double t2045;
  double t2094;
  double t2110;
  double t2238;
  double t2239;
  double t2219;
  double t2220;
  double t2315;
  double t2322;
  double t2333;
  double t2343;
  double t2347;
  double t2356;
  double t2358;
  double t2362;
  double t2371;
  double t2461;
  double t2481;
  double t2731;
  double t2733;
  double t2738;
  double t2766;
  double t2769;
  double t2779;
  double t2796;
  double t2744;
  double t2745;
  double t2749;
  double t2487;
  double t2494;
  double t2784;
  double t2815;
  double t2820;
  double t2636;
  double t2638;
  double t2639;
  double t2825;
  double t2826;
  double t2839;
  double t2657;
  double t2661;
  double t2676;
  double t2510;
  double t2514;
  double t2516;
  double t2539;
  double t2548;
  double t2558;
  double t2575;
  double t2577;
  double t2616;
  double t2624;
  double t2707;
  double t2721;
  double t2695;
  double t2696;
  t120 = Cos(var1[3]);
  t128 = Sin(var1[3]);
  t261 = Cos(var1[4]);
  t284 = Sin(var1[4]);
  t271 = -1.*var1[2]*t261*t128;
  t296 = -1.*var1[1]*t284;
  t542 = Cos(var1[5]);
  t566 = Sin(var1[5]);
  t321 = var1[2]*t120*t261;
  t328 = var1[0]*t284;
  t398 = -1.*var1[1]*t120*t261;
  t414 = var1[0]*t261*t128;
  t501 = t120*t261;
  t503 = t261*t128;
  t521 = -1.*t284;
  t678 = t542*t128*t284;
  t727 = -1.*t120*t566;
  t733 = t678 + t727;
  t755 = t120*t542;
  t772 = t128*t284*t566;
  t777 = t755 + t772;
  t943 = Cos(var1[6]);
  t958 = -1.*t943;
  t972 = 1. + t958;
  t989 = Sin(var1[6]);
  t607 = -1.*t542*t128;
  t610 = t120*t284*t566;
  t631 = t607 + t610;
  t564 = t120*t542*t284;
  t586 = t128*t566;
  t588 = t564 + t586;
  t982 = 0.07996*t972;
  t1010 = -0.135*t989;
  t1015 = 0. + t982 + t1010;
  t1028 = 0.135*t972;
  t1029 = 0.07996*t989;
  t1035 = 0. + t1028 + t1029;
  t89 = -1.*var1[0];
  t1086 = t261*t542*t943;
  t1092 = -1.*t261*t566*t989;
  t1094 = t1086 + t1092;
  t1435 = t943*t588;
  t1455 = -1.*t631*t989;
  t1465 = t1435 + t1455;
  t1176 = t943*t733;
  t1187 = -1.*t777*t989;
  t1231 = t1176 + t1187;
  t1157 = -1.*var1[2];
  t1160 = -1.*t261*t542*t1015;
  t1161 = -1.*t261*t566*t1035;
  t1501 = t261*t943*t566;
  t1510 = t261*t542*t989;
  t1512 = t1501 + t1510;
  t1693 = Cos(var1[7]);
  t1702 = -1.*t1693;
  t1714 = 1. + t1702;
  t1722 = Sin(var1[7]);
  t1369 = t943*t777;
  t1379 = t733*t989;
  t1384 = t1369 + t1379;
  t1016 = t733*t1015;
  t1072 = t777*t1035;
  t1717 = 0.135*t1714;
  t1758 = 0.08055*t1722;
  t1766 = 0. + t1717 + t1758;
  t1774 = -0.08055*t1714;
  t1777 = 0.135*t1722;
  t1800 = 0. + t1774 + t1777;
  t1136 = t943*t631;
  t1137 = t588*t989;
  t1141 = t1136 + t1137;
  t1400 = t261*t542*t1015;
  t1401 = t261*t566*t1035;
  t1308 = -1.*t588*t1015;
  t1314 = -1.*t631*t1035;
  t1955 = t1693*t1512;
  t1958 = t284*t1722;
  t1976 = t1955 + t1958;
  t1523 = -1.*var1[1];
  t1535 = -1.*t733*t1015;
  t1540 = -1.*t777*t1035;
  t2065 = t1693*t1141;
  t2069 = -1.*t120*t261*t1722;
  t2076 = t2065 + t2069;
  t1612 = t588*t1015;
  t1622 = t631*t1035;
  t1816 = t1693*t1384;
  t1821 = -1.*t261*t128*t1722;
  t1828 = t1816 + t1821;
  t1767 = -1.*t1512*t1766;
  t1809 = t284*t1800;
  t2283 = -1.*t1693*t284;
  t2288 = t1512*t1722;
  t2294 = t2283 + t2288;
  t2374 = Cos(var1[8]);
  t2380 = -1.*t2374;
  t2389 = 1. + t2380;
  t2432 = Sin(var1[8]);
  t1882 = t1384*t1766;
  t1918 = t261*t128*t1800;
  t2138 = t261*t1693*t128;
  t2147 = t1384*t1722;
  t2168 = t2138 + t2147;
  t2392 = -0.08055*t2389;
  t2440 = -0.01004*t2432;
  t2447 = 0. + t2392 + t2440;
  t2464 = -0.01004*t2389;
  t2470 = 0.08055*t2432;
  t2476 = 0. + t2464 + t2470;
  t1981 = t120*t261*t1693;
  t1987 = t1141*t1722;
  t1996 = t1981 + t1987;
  t2044 = t1512*t1766;
  t2045 = -1.*t284*t1800;
  t2094 = -1.*t1141*t1766;
  t2110 = -1.*t120*t261*t1800;
  t2238 = t1141*t1766;
  t2239 = t120*t261*t1800;
  t2219 = -1.*t1384*t1766;
  t2220 = -1.*t261*t128*t1800;
  t2315 = -1.*t1693*t1141;
  t2322 = t120*t261*t1722;
  t2333 = 0. + t2315 + t2322;
  t2343 = -1.*t1693*t1384;
  t2347 = t261*t128*t1722;
  t2356 = 0. + t2343 + t2347;
  t2358 = -1.*t1693*t1512;
  t2362 = -1.*t284*t1722;
  t2371 = 0. + t2358 + t2362;
  t2461 = -1.*t2294*t2447;
  t2481 = -1.*t1094*t2476;
  t2731 = t2374*t2294;
  t2733 = t1094*t2432;
  t2738 = t2731 + t2733;
  t2766 = Cos(var1[9]);
  t2769 = -1.*t2766;
  t2779 = 1. + t2769;
  t2796 = Sin(var1[9]);
  t2744 = t2374*t1094;
  t2745 = -1.*t2294*t2432;
  t2749 = t2744 + t2745;
  t2487 = t2168*t2447;
  t2494 = t1231*t2476;
  t2784 = -0.08055*t2779;
  t2815 = -0.13004*t2796;
  t2820 = 0. + t2784 + t2815;
  t2636 = t2374*t2168;
  t2638 = t1231*t2432;
  t2639 = t2636 + t2638;
  t2825 = -0.13004*t2779;
  t2826 = 0.08055*t2796;
  t2839 = 0. + t2825 + t2826;
  t2657 = t2374*t1231;
  t2661 = -1.*t2168*t2432;
  t2676 = t2657 + t2661;
  t2510 = t2374*t1996;
  t2514 = t1465*t2432;
  t2516 = t2510 + t2514;
  t2539 = t2374*t1465;
  t2548 = -1.*t1996*t2432;
  t2558 = t2539 + t2548;
  t2575 = t2294*t2447;
  t2577 = t1094*t2476;
  t2616 = -1.*t1996*t2447;
  t2624 = -1.*t1465*t2476;
  t2707 = -1.*t2168*t2447;
  t2721 = -1.*t1231*t2476;
  t2695 = t1996*t2447;
  t2696 = t1465*t2476;
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
  p_output1[19]=t89;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t120*var1[2];
  p_output1[25]=-1.*t128*var1[2];
  p_output1[26]=t120*var1[0] + t128*var1[1];
  p_output1[27]=-1.*t128;
  p_output1[28]=t120;
  p_output1[29]=0;
  p_output1[30]=t271 + t296;
  p_output1[31]=t321 + t328;
  p_output1[32]=t398 + t414;
  p_output1[33]=t501;
  p_output1[34]=t503;
  p_output1[35]=t521;
  p_output1[36]=t271 + t296 - 0.135*t588 + 0.07996*t631;
  p_output1[37]=t321 + t328 - 0.135*t733 + 0.07996*t777;
  p_output1[38]=t398 + t414 - 0.135*t261*t542 + 0.07996*t261*t566;
  p_output1[39]=0. + t501;
  p_output1[40]=0. + t503;
  p_output1[41]=0. + t521;
  p_output1[42]=0.08055*t1141 + (0. + t1157 + t1160 + t1161)*t1231 + 0.135*t120*t261 + t1094*(0. + t1016 + t1072 + var1[1]);
  p_output1[43]=0.08055*t1384 + 0.135*t128*t261 + t1094*(0. + t1308 + t1314 + t89) + t1465*(0. + t1400 + t1401 + var1[2]);
  p_output1[44]=0.08055*t1512 + t1465*(0. + t1523 + t1535 + t1540) - 0.135*t284 + t1231*(0. + t1612 + t1622 + var1[0]);
  p_output1[45]=0. + t1435 + t1455;
  p_output1[46]=0. + t1176 + t1187;
  p_output1[47]=0. + t1086 + t1092;
  p_output1[48]=0.08055*t1465 - 1.*(0. + t1157 + t1160 + t1161 + t1767 + t1809)*t1828 - 0.01004*t1996 - 1.*t1976*(0. + t1016 + t1072 + t1882 + t1918 + var1[1]);
  p_output1[49]=0.08055*t1231 - 0.01004*t2168 - 1.*t1976*(0. + t1308 + t1314 + t2094 + t2110 + t89) - 1.*t2076*(0. + t1400 + t1401 + t2044 + t2045 + var1[2]);
  p_output1[50]=0.08055*t1094 - 1.*t2076*(0. + t1523 + t1535 + t1540 + t2219 + t2220) - 0.01004*t2294 - 1.*t1828*(0. + t1612 + t1622 + t2238 + t2239 + var1[0]);
  p_output1[51]=t2333;
  p_output1[52]=t2356;
  p_output1[53]=t2371;
  p_output1[54]=-1.*t1828*(0. + t1157 + t1160 + t1161 + t1767 + t1809 + t2461 + t2481) - 0.13004*t2516 + 0.08055*t2558 - 1.*t1976*(0. + t1016 + t1072 + t1882 + t1918 + t2487 + t2494 + var1[1]);
  p_output1[55]=-0.13004*t2639 + 0.08055*t2676 - 1.*t1976*(0. + t1308 + t1314 + t2094 + t2110 + t2616 + t2624 + t89) - 1.*t2076*(0. + t1400 + t1401 + t2044 + t2045 + t2575 + t2577 + var1[2]);
  p_output1[56]=-1.*t2076*(0. + t1523 + t1535 + t1540 + t2219 + t2220 + t2707 + t2721) - 0.13004*t2738 + 0.08055*t2749 - 1.*t1828*(0. + t1612 + t1622 + t2238 + t2239 + t2695 + t2696 + var1[0]);
  p_output1[57]=t2333;
  p_output1[58]=t2356;
  p_output1[59]=t2371;
  p_output1[60]=0.03315*(t2558*t2766 - 1.*t2516*t2796) - 0.19074*(t2516*t2766 + t2558*t2796) - 1.*t1828*(0. + t1157 + t1160 + t1161 + t1767 + t1809 + t2461 + t2481 - 1.*t2738*t2820 - 1.*t2749*t2839) - 1.*t1976*(0. + t1016 + t1072 + t1882 + t1918 + t2487 + t2494 + t2639*t2820 + t2676*t2839 + var1[1]);
  p_output1[61]=0.03315*(t2676*t2766 - 1.*t2639*t2796) - 0.19074*(t2639*t2766 + t2676*t2796) - 1.*t1976*(0. + t1308 + t1314 + t2094 + t2110 + t2616 + t2624 - 1.*t2516*t2820 - 1.*t2558*t2839 + t89) - 1.*t2076*(0. + t1400 + t1401 + t2044 + t2045 + t2575 + t2577 + t2738*t2820 + t2749*t2839 + var1[2]);
  p_output1[62]=0.03315*(t2749*t2766 - 1.*t2738*t2796) - 0.19074*(t2738*t2766 + t2749*t2796) - 1.*t2076*(0. + t1523 + t1535 + t1540 + t2219 + t2220 + t2707 + t2721 - 1.*t2639*t2820 - 1.*t2676*t2839) - 1.*t1828*(0. + t1612 + t1622 + t2238 + t2239 + t2695 + t2696 + t2516*t2820 + t2558*t2839 + var1[0]);
  p_output1[63]=t2333;
  p_output1[64]=t2356;
  p_output1[65]=t2371;
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



void Js_LeftKneeSpringJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
