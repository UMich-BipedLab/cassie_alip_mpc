/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:09 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t331;
  double t334;
  double t344;
  double t440;
  double t295;
  double t443;
  double t615;
  double t404;
  double t532;
  double t539;
  double t96;
  double t621;
  double t647;
  double t652;
  double t678;
  double t695;
  double t737;
  double t742;
  double t805;
  double t811;
  double t862;
  double t602;
  double t841;
  double t846;
  double t85;
  double t886;
  double t893;
  double t909;
  double t80;
  double t1093;
  double t1081;
  double t1159;
  double t1168;
  double t1185;
  double t1190;
  double t1195;
  double t1170;
  double t1206;
  double t1210;
  double t1242;
  double t1244;
  double t1268;
  double t978;
  double t1228;
  double t1281;
  double t1289;
  double t1334;
  double t1337;
  double t1338;
  double t1401;
  double t1409;
  double t1428;
  double t1431;
  double t1446;
  double t1451;
  double t1453;
  double t1466;
  double t1467;
  double t1580;
  double t1585;
  double t1598;
  double t1599;
  double t1593;
  double t1607;
  double t1613;
  double t1637;
  double t1655;
  double t1659;
  double t1733;
  double t1734;
  double t1750;
  double t1716;
  double t1764;
  double t1776;
  double t1793;
  double t1804;
  double t1806;
  double t1807;
  double t1869;
  double t1881;
  double t1897;
  double t1835;
  double t1899;
  double t1903;
  double t1905;
  double t1960;
  double t1961;
  double t1962;
  double t1973;
  double t1991;
  double t1997;
  double t1965;
  double t1998;
  double t2003;
  double t2018;
  double t2025;
  double t2034;
  double t2035;
  double t2038;
  double t2042;
  double t2004;
  double t2046;
  double t2049;
  double t2062;
  double t2066;
  double t2071;
  double t2102;
  double t2104;
  double t2110;
  double t2121;
  double t2124;
  double t2136;
  double t2139;
  double t2141;
  double t2147;
  double t2114;
  double t2152;
  double t2155;
  double t2176;
  double t2180;
  double t2181;
  double t2240;
  double t2242;
  double t2253;
  double t2254;
  double t2259;
  double t2272;
  double t2273;
  double t2275;
  double t2270;
  double t2276;
  double t2283;
  double t2302;
  double t2310;
  double t2317;
  double t2379;
  double t2384;
  double t2401;
  double t2406;
  double t2430;
  double t2435;
  double t2440;
  double t2442;
  double t2447;
  double t2535;
  double t2537;
  double t2556;
  double t2557;
  double t2541;
  double t2558;
  double t2564;
  double t2579;
  double t2582;
  double t2583;
  double t1934;
  double t1942;
  double t1944;
  double t2651;
  double t2654;
  double t2656;
  double t2646;
  double t2657;
  double t2669;
  double t2699;
  double t2709;
  double t2717;
  double t2724;
  double t2772;
  double t2774;
  double t2778;
  double t2735;
  double t2784;
  double t2787;
  double t2798;
  double t2885;
  double t2906;
  double t2911;
  double t2916;
  double t2917;
  double t2939;
  double t2996;
  double t3004;
  double t3008;
  double t3013;
  double t3020;
  double t3023;
  double t3009;
  double t3024;
  double t3039;
  double t3042;
  double t3053;
  double t3055;
  double t3040;
  double t3061;
  double t3065;
  double t3068;
  double t3072;
  double t3076;
  double t3090;
  double t3093;
  double t3099;
  double t3127;
  double t3130;
  double t3132;
  double t3118;
  double t3136;
  double t3150;
  double t3169;
  double t3172;
  double t3180;
  double t3181;
  double t3226;
  double t3227;
  double t3230;
  double t3207;
  double t3232;
  double t3233;
  double t3236;
  double t3337;
  double t3345;
  double t3346;
  double t3351;
  double t3354;
  double t3363;
  double t3368;
  double t3369;
  double t3379;
  double t3347;
  double t3380;
  double t3385;
  double t3396;
  double t3407;
  double t3410;
  double t855;
  double t947;
  double t965;
  double t1006;
  double t1020;
  double t1038;
  double t1302;
  double t1366;
  double t1368;
  double t1375;
  double t1381;
  double t1387;
  double t1493;
  double t1501;
  double t1510;
  double t1524;
  double t1546;
  double t1552;
  double t1630;
  double t1674;
  double t1685;
  double t1690;
  double t1694;
  double t1697;
  double t1785;
  double t1810;
  double t1831;
  double t1837;
  double t1908;
  double t1909;
  double t3628;
  double t2055;
  double t2072;
  double t2075;
  double t2078;
  double t2079;
  double t2080;
  double t2168;
  double t2189;
  double t2194;
  double t2198;
  double t2206;
  double t2208;
  double t2290;
  double t2334;
  double t2335;
  double t2342;
  double t2353;
  double t2364;
  double t2451;
  double t2460;
  double t2475;
  double t2492;
  double t2493;
  double t2502;
  double t2572;
  double t2585;
  double t2588;
  double t2591;
  double t2598;
  double t2603;
  double t1948;
  double t1949;
  double t2685;
  double t2728;
  double t2734;
  double t2740;
  double t2812;
  double t2813;
  double t3792;
  double t2826;
  double t2834;
  double t2842;
  double t2940;
  double t2943;
  double t2952;
  double t2971;
  double t2972;
  double t2984;
  double t3877;
  double t3883;
  double t3884;
  double t3159;
  double t3186;
  double t3200;
  double t3208;
  double t3256;
  double t3265;
  double t3929;
  double t3302;
  double t3303;
  double t3313;
  double t3394;
  double t3423;
  double t3438;
  double t3443;
  double t3444;
  double t3456;
  double t4174;
  double t4177;
  double t4202;
  double t4214;
  double t4321;
  double t4322;
  double t4383;
  double t4406;
  double t4485;
  double t4492;
  double t3488;
  double t3489;
  double t3513;
  double t4245;
  double t4266;
  double t4269;
  double t4185;
  double t4194;
  double t4195;
  double t4323;
  double t4328;
  double t4333;
  double t4285;
  double t4296;
  double t4302;
  double t4351;
  double t4353;
  double t4354;
  double t4410;
  double t4433;
  double t4439;
  double t4454;
  double t4455;
  double t4479;
  double t4497;
  double t4502;
  double t4508;
  double t4517;
  double t4520;
  double t4521;
  double t3524;
  double t3527;
  double t3529;
  double t4221;
  double t3545;
  double t3561;
  double t3564;
  double t3574;
  double t3575;
  double t3597;
  double t3601;
  double t3615;
  double t3620;
  double t3631;
  double t3633;
  double t5060;
  double t3653;
  double t3658;
  double t4215;
  double t4224;
  double t3664;
  double t3667;
  double t3675;
  double t3689;
  double t3691;
  double t3696;
  double t3706;
  double t3719;
  double t3721;
  double t4656;
  double t4657;
  double t4660;
  double t4672;
  double t4673;
  double t3748;
  double t3751;
  double t3760;
  double t4766;
  double t4781;
  double t4795;
  double t4797;
  double t4805;
  double t3768;
  double t3770;
  double t3772;
  double t4905;
  double t4929;
  double t4936;
  double t4939;
  double t4941;
  double t3780;
  double t3786;
  double t3787;
  double t4992;
  double t5012;
  double t5016;
  double t5029;
  double t5032;
  double t3798;
  double t3810;
  double t5126;
  double t5127;
  double t5132;
  double t5146;
  double t5149;
  double t5884;
  double t3827;
  double t3836;
  double t3850;
  double t3869;
  double t3871;
  double t6085;
  double t6087;
  double t6094;
  double t6112;
  double t6115;
  double t6118;
  double t6131;
  double t6143;
  double t6145;
  double t6154;
  double t6157;
  double t6167;
  double t6168;
  double t3900;
  double t3902;
  double t3905;
  double t3934;
  double t3936;
  double t6294;
  double t3958;
  double t3965;
  double t3967;
  double t3974;
  double t3979;
  t331 = Cos(var1[3]);
  t334 = Cos(var1[4]);
  t344 = Cos(var1[5]);
  t440 = Sin(var1[13]);
  t295 = Cos(var1[13]);
  t443 = Sin(var1[5]);
  t615 = Cos(var1[15]);
  t404 = t295*t331*t334*t344;
  t532 = -1.*t331*t334*t440*t443;
  t539 = t404 + t532;
  t96 = Sin(var1[15]);
  t621 = Cos(var1[14]);
  t647 = Sin(var1[4]);
  t652 = -1.*t621*t331*t647;
  t678 = Sin(var1[14]);
  t695 = t331*t334*t344*t440;
  t737 = t295*t331*t334*t443;
  t742 = t695 + t737;
  t805 = t678*t742;
  t811 = t652 + t805;
  t862 = Cos(var1[16]);
  t602 = t96*t539;
  t841 = t615*t811;
  t846 = t602 + t841;
  t85 = Sin(var1[16]);
  t886 = t615*t539;
  t893 = -1.*t96*t811;
  t909 = t886 + t893;
  t80 = Cos(var1[17]);
  t1093 = Sin(var1[3]);
  t1081 = t331*t344*t647;
  t1159 = t1093*t443;
  t1168 = t1081 + t1159;
  t1185 = t344*t1093;
  t1190 = -1.*t331*t647*t443;
  t1195 = t1185 + t1190;
  t1170 = -1.*t440*t1168;
  t1206 = t295*t1195;
  t1210 = t1170 + t1206;
  t1242 = t295*t1168;
  t1244 = t440*t1195;
  t1268 = t1242 + t1244;
  t978 = Sin(var1[17]);
  t1228 = t96*t1210;
  t1281 = t615*t678*t1268;
  t1289 = t1228 + t1281;
  t1334 = t615*t1210;
  t1337 = -1.*t678*t96*t1268;
  t1338 = t1334 + t1337;
  t1401 = -1.*t331*t334*t678;
  t1409 = t440*t1168;
  t1428 = -1.*t344*t1093;
  t1431 = t331*t647*t443;
  t1446 = t1428 + t1431;
  t1451 = t295*t1446;
  t1453 = t1409 + t1451;
  t1466 = t621*t1453;
  t1467 = t1401 + t1466;
  t1580 = -1.*t295*t1446;
  t1585 = t1170 + t1580;
  t1598 = -1.*t440*t1446;
  t1599 = t1242 + t1598;
  t1593 = t96*t1585;
  t1607 = t615*t678*t1599;
  t1613 = t1593 + t1607;
  t1637 = t615*t1585;
  t1655 = -1.*t678*t96*t1599;
  t1659 = t1637 + t1655;
  t1733 = t621*t331*t334;
  t1734 = t678*t1453;
  t1750 = t1733 + t1734;
  t1716 = -1.*t96*t1599;
  t1764 = -1.*t615*t1750;
  t1776 = t1716 + t1764;
  t1793 = t615*t1599;
  t1804 = -1.*t96*t1750;
  t1806 = t1793 + t1804;
  t1807 = t862*t1806;
  t1869 = t96*t1599;
  t1881 = t615*t1750;
  t1897 = t1869 + t1881;
  t1835 = -1.*t85*t1806;
  t1899 = -1.*t85*t1897;
  t1903 = t1899 + t1807;
  t1905 = t978*t1903;
  t1960 = -1.*t344*t1093*t647;
  t1961 = t331*t443;
  t1962 = t1960 + t1961;
  t1973 = -1.*t331*t344;
  t1991 = -1.*t1093*t647*t443;
  t1997 = t1973 + t1991;
  t1965 = t295*t1962;
  t1998 = -1.*t440*t1997;
  t2003 = t1965 + t1998;
  t2018 = -1.*t621*t334*t1093;
  t2025 = t440*t1962;
  t2034 = t295*t1997;
  t2035 = t2025 + t2034;
  t2038 = t678*t2035;
  t2042 = t2018 + t2038;
  t2004 = t96*t2003;
  t2046 = t615*t2042;
  t2049 = t2004 + t2046;
  t2062 = t615*t2003;
  t2066 = -1.*t96*t2042;
  t2071 = t2062 + t2066;
  t2102 = t295*t334*t344*t1093;
  t2104 = -1.*t334*t440*t1093*t443;
  t2110 = t2102 + t2104;
  t2121 = -1.*t621*t1093*t647;
  t2124 = t334*t344*t440*t1093;
  t2136 = t295*t334*t1093*t443;
  t2139 = t2124 + t2136;
  t2141 = t678*t2139;
  t2147 = t2121 + t2141;
  t2114 = t96*t2110;
  t2152 = t615*t2147;
  t2155 = t2114 + t2152;
  t2176 = t615*t2110;
  t2180 = -1.*t96*t2147;
  t2181 = t2176 + t2180;
  t2240 = t344*t1093*t647;
  t2242 = -1.*t331*t443;
  t2253 = t2240 + t2242;
  t2254 = -1.*t440*t2253;
  t2259 = t2254 + t2034;
  t2272 = t295*t2253;
  t2273 = t440*t1997;
  t2275 = t2272 + t2273;
  t2270 = t96*t2259;
  t2276 = t615*t678*t2275;
  t2283 = t2270 + t2276;
  t2302 = t615*t2259;
  t2310 = -1.*t678*t96*t2275;
  t2317 = t2302 + t2310;
  t2379 = -1.*t334*t678*t1093;
  t2384 = t440*t2253;
  t2401 = t331*t344;
  t2406 = t1093*t647*t443;
  t2430 = t2401 + t2406;
  t2435 = t295*t2430;
  t2440 = t2384 + t2435;
  t2442 = t621*t2440;
  t2447 = t2379 + t2442;
  t2535 = -1.*t295*t2430;
  t2537 = t2254 + t2535;
  t2556 = -1.*t440*t2430;
  t2557 = t2272 + t2556;
  t2541 = t96*t2537;
  t2558 = t615*t678*t2557;
  t2564 = t2541 + t2558;
  t2579 = t615*t2537;
  t2582 = -1.*t678*t96*t2557;
  t2583 = t2579 + t2582;
  t1934 = t862*t1897;
  t1942 = t85*t1806;
  t1944 = t1934 + t1942;
  t2651 = t621*t334*t1093;
  t2654 = t678*t2440;
  t2656 = t2651 + t2654;
  t2646 = -1.*t96*t2557;
  t2657 = -1.*t615*t2656;
  t2669 = t2646 + t2657;
  t2699 = t615*t2557;
  t2709 = -1.*t96*t2656;
  t2717 = t2699 + t2709;
  t2724 = t862*t2717;
  t2772 = t96*t2557;
  t2774 = t615*t2656;
  t2778 = t2772 + t2774;
  t2735 = -1.*t85*t2717;
  t2784 = -1.*t85*t2778;
  t2787 = t2784 + t2724;
  t2798 = t978*t2787;
  t2885 = t678*t647;
  t2906 = t334*t344*t440;
  t2911 = t295*t334*t443;
  t2916 = t2906 + t2911;
  t2917 = t621*t2916;
  t2939 = t2885 + t2917;
  t2996 = -1.*t334*t344*t440;
  t3004 = -1.*t295*t334*t443;
  t3008 = t2996 + t3004;
  t3013 = t295*t334*t344;
  t3020 = -1.*t334*t440*t443;
  t3023 = t3013 + t3020;
  t3009 = t96*t3008;
  t3024 = t615*t678*t3023;
  t3039 = t3009 + t3024;
  t3042 = t615*t3008;
  t3053 = -1.*t678*t96*t3023;
  t3055 = t3042 + t3053;
  t3040 = -1.*t85*t3039;
  t3061 = t862*t3055;
  t3065 = t3040 + t3061;
  t3068 = -1.*t80*t3065;
  t3072 = t862*t3039;
  t3076 = t85*t3055;
  t3090 = t3072 + t3076;
  t3093 = t978*t3090;
  t3099 = t3068 + t3093;
  t3127 = -1.*t621*t647;
  t3130 = t678*t2916;
  t3132 = t3127 + t3130;
  t3118 = -1.*t96*t3023;
  t3136 = -1.*t615*t3132;
  t3150 = t3118 + t3136;
  t3169 = t615*t3023;
  t3172 = -1.*t96*t3132;
  t3180 = t3169 + t3172;
  t3181 = t862*t3180;
  t3226 = t96*t3023;
  t3227 = t615*t3132;
  t3230 = t3226 + t3227;
  t3207 = -1.*t85*t3180;
  t3232 = -1.*t85*t3230;
  t3233 = t3232 + t3181;
  t3236 = t978*t3233;
  t3337 = -1.*t295*t344*t647;
  t3345 = t440*t647*t443;
  t3346 = t3337 + t3345;
  t3351 = -1.*t621*t334;
  t3354 = -1.*t344*t440*t647;
  t3363 = -1.*t295*t647*t443;
  t3368 = t3354 + t3363;
  t3369 = t678*t3368;
  t3379 = t3351 + t3369;
  t3347 = t96*t3346;
  t3380 = t615*t3379;
  t3385 = t3347 + t3380;
  t3396 = t615*t3346;
  t3407 = -1.*t96*t3379;
  t3410 = t3396 + t3407;
  t855 = -1.*t85*t846;
  t947 = t862*t909;
  t965 = t855 + t947;
  t1006 = t862*t846;
  t1020 = t85*t909;
  t1038 = t1006 + t1020;
  t1302 = -1.*t85*t1289;
  t1366 = t862*t1338;
  t1368 = t1302 + t1366;
  t1375 = t862*t1289;
  t1381 = t85*t1338;
  t1387 = t1375 + t1381;
  t1493 = -1.*t862*t96*t1467;
  t1501 = -1.*t615*t85*t1467;
  t1510 = t1493 + t1501;
  t1524 = t615*t862*t1467;
  t1546 = -1.*t96*t85*t1467;
  t1552 = t1524 + t1546;
  t1630 = -1.*t85*t1613;
  t1674 = t862*t1659;
  t1685 = t1630 + t1674;
  t1690 = t862*t1613;
  t1694 = t85*t1659;
  t1697 = t1690 + t1694;
  t1785 = t85*t1776;
  t1810 = t1785 + t1807;
  t1831 = t862*t1776;
  t1837 = t1831 + t1835;
  t1908 = -1.*t862*t1897;
  t1909 = t1908 + t1835;
  t3628 = t80*t1903;
  t2055 = -1.*t85*t2049;
  t2072 = t862*t2071;
  t2075 = t2055 + t2072;
  t2078 = t862*t2049;
  t2079 = t85*t2071;
  t2080 = t2078 + t2079;
  t2168 = -1.*t85*t2155;
  t2189 = t862*t2181;
  t2194 = t2168 + t2189;
  t2198 = t862*t2155;
  t2206 = t85*t2181;
  t2208 = t2198 + t2206;
  t2290 = -1.*t85*t2283;
  t2334 = t862*t2317;
  t2335 = t2290 + t2334;
  t2342 = t862*t2283;
  t2353 = t85*t2317;
  t2364 = t2342 + t2353;
  t2451 = -1.*t862*t96*t2447;
  t2460 = -1.*t615*t85*t2447;
  t2475 = t2451 + t2460;
  t2492 = t615*t862*t2447;
  t2493 = -1.*t96*t85*t2447;
  t2502 = t2492 + t2493;
  t2572 = -1.*t85*t2564;
  t2585 = t862*t2583;
  t2588 = t2572 + t2585;
  t2591 = t862*t2564;
  t2598 = t85*t2583;
  t2603 = t2591 + t2598;
  t1948 = t80*t1944;
  t1949 = t1905 + t1948;
  t2685 = t85*t2669;
  t2728 = t2685 + t2724;
  t2734 = t862*t2669;
  t2740 = t2734 + t2735;
  t2812 = -1.*t862*t2778;
  t2813 = t2812 + t2735;
  t3792 = t80*t2787;
  t2826 = t862*t2778;
  t2834 = t85*t2717;
  t2842 = t2826 + t2834;
  t2940 = -1.*t862*t96*t2939;
  t2943 = -1.*t615*t85*t2939;
  t2952 = t2940 + t2943;
  t2971 = t615*t862*t2939;
  t2972 = -1.*t96*t85*t2939;
  t2984 = t2971 + t2972;
  t3877 = t978*t3065;
  t3883 = t80*t3090;
  t3884 = t3877 + t3883;
  t3159 = t85*t3150;
  t3186 = t3159 + t3181;
  t3200 = t862*t3150;
  t3208 = t3200 + t3207;
  t3256 = -1.*t862*t3230;
  t3265 = t3256 + t3207;
  t3929 = t80*t3233;
  t3302 = t862*t3230;
  t3303 = t85*t3180;
  t3313 = t3302 + t3303;
  t3394 = -1.*t85*t3385;
  t3423 = t862*t3410;
  t3438 = t3394 + t3423;
  t3443 = t862*t3385;
  t3444 = t85*t3410;
  t3456 = t3443 + t3444;
  t4174 = -1.*t295;
  t4177 = 1. + t4174;
  t4202 = -1.*t621;
  t4214 = 1. + t4202;
  t4321 = -1.*t615;
  t4322 = 1. + t4321;
  t4383 = -1.*t862;
  t4406 = 1. + t4383;
  t4485 = -1.*t80;
  t4492 = 1. + t4485;
  t3488 = t978*t965;
  t3489 = t80*t1038;
  t3513 = t3488 + t3489;
  t4245 = -0.135*t4177;
  t4266 = 0.07996*t440;
  t4269 = 0. + t4245 + t4266;
  t4185 = 0.07996*t4177;
  t4194 = 0.135*t440;
  t4195 = 0. + t4185 + t4194;
  t4323 = -0.01004*t4322;
  t4328 = 0.08055*t96;
  t4333 = 0. + t4323 + t4328;
  t4285 = -0.135*t4214;
  t4296 = 0.08055*t678;
  t4302 = 0. + t4285 + t4296;
  t4351 = -0.08055*t4322;
  t4353 = -0.01004*t96;
  t4354 = 0. + t4351 + t4353;
  t4410 = -0.08055*t4406;
  t4433 = -0.13004*t85;
  t4439 = 0. + t4410 + t4433;
  t4454 = -0.13004*t4406;
  t4455 = 0.08055*t85;
  t4479 = 0. + t4454 + t4455;
  t4497 = -0.19074*t4492;
  t4502 = 0.03315*t978;
  t4508 = 0. + t4497 + t4502;
  t4517 = -0.03315*t4492;
  t4520 = -0.19074*t978;
  t4521 = 0. + t4517 + t4520;
  t3524 = t978*t1368;
  t3527 = t80*t1387;
  t3529 = t3524 + t3527;
  t4221 = -0.135*t678;
  t3545 = t978*t1510;
  t3561 = t80*t1552;
  t3564 = t3545 + t3561;
  t3574 = t978*t1685;
  t3575 = t80*t1697;
  t3597 = t3574 + t3575;
  t3601 = t80*t1810;
  t3615 = t978*t1837;
  t3620 = t3601 + t3615;
  t3631 = t978*t1909;
  t3633 = t3628 + t3631;
  t5060 = -1.*t978*t1903;
  t3653 = -1.*t978*t1944;
  t3658 = t3628 + t3653;
  t4215 = -0.08055*t4214;
  t4224 = 0. + t4215 + t4221;
  t3664 = t978*t2075;
  t3667 = t80*t2080;
  t3675 = t3664 + t3667;
  t3689 = t978*t2194;
  t3691 = t80*t2208;
  t3696 = t3689 + t3691;
  t3706 = t978*t2335;
  t3719 = t80*t2364;
  t3721 = t3706 + t3719;
  t4656 = -0.135*t621;
  t4657 = -0.08055*t678;
  t4660 = t4656 + t4657;
  t4672 = 0.08055*t621;
  t4673 = t4672 + t4221;
  t3748 = t978*t2475;
  t3751 = t80*t2502;
  t3760 = t3748 + t3751;
  t4766 = 0.135*t295;
  t4781 = t4766 + t4266;
  t4795 = 0.07996*t295;
  t4797 = -0.135*t440;
  t4805 = t4795 + t4797;
  t3768 = t978*t2588;
  t3770 = t80*t2603;
  t3772 = t3768 + t3770;
  t4905 = 0.08055*t615;
  t4929 = t4905 + t4353;
  t4936 = -0.01004*t615;
  t4939 = -0.08055*t96;
  t4941 = t4936 + t4939;
  t3780 = t80*t2728;
  t3786 = t978*t2740;
  t3787 = t3780 + t3786;
  t4992 = -0.13004*t862;
  t5012 = -0.08055*t85;
  t5016 = t4992 + t5012;
  t5029 = 0.08055*t862;
  t5032 = t5029 + t4433;
  t3798 = t978*t2813;
  t3810 = t3792 + t3798;
  t5126 = 0.03315*t80;
  t5127 = t5126 + t4520;
  t5132 = -0.19074*t80;
  t5146 = -0.03315*t978;
  t5149 = t5132 + t5146;
  t5884 = -1.*t978*t2787;
  t3827 = -1.*t978*t2842;
  t3836 = t3792 + t3827;
  t3850 = t978*t2952;
  t3869 = t80*t2984;
  t3871 = t3850 + t3869;
  t6085 = t4333*t3008;
  t6087 = -0.1305*t621*t3023;
  t6094 = t4302*t3023;
  t6112 = t678*t4354*t3023;
  t6115 = t4439*t3039;
  t6118 = t4479*t3055;
  t6131 = t4508*t3065;
  t6143 = t4521*t3090;
  t6145 = -0.03315*t3884;
  t6154 = t80*t3065;
  t6157 = -1.*t978*t3090;
  t6167 = t6154 + t6157;
  t6168 = -0.19074*t6167;
  t3900 = t80*t3186;
  t3902 = t978*t3208;
  t3905 = t3900 + t3902;
  t3934 = t978*t3265;
  t3936 = t3929 + t3934;
  t6294 = -1.*t978*t3233;
  t3958 = -1.*t978*t3313;
  t3965 = t3929 + t3958;
  t3967 = t978*t3438;
  t3974 = t80*t3456;
  t3979 = t3967 + t3974;
  p_output1[0]=(-1.*t2075*t80 + t2080*t978)*var2[3] + (-1.*t80*t965 + t1038*t978)*var2[4] + (-1.*t1368*t80 + t1387*t978)*var2[5] + (-1.*t1685*t80 + t1697*t978)*var2[13] + (-1.*t1510*t80 + t1552*t978)*var2[14] + (-1.*t1837*t80 + t1810*t978)*var2[15] + (t1905 - 1.*t1909*t80)*var2[16] + t1949*var2[17];
  p_output1[1]=(-1.*t1903*t80 + t1944*t978)*var2[3] + (-1.*t2194*t80 + t2208*t978)*var2[4] + (-1.*t2335*t80 + t2364*t978)*var2[5] + (-1.*t2588*t80 + t2603*t978)*var2[13] + (-1.*t2475*t80 + t2502*t978)*var2[14] + (-1.*t2740*t80 + t2728*t978)*var2[15] + (t2798 - 1.*t2813*t80)*var2[16] + (t2798 + t2842*t80)*var2[17];
  p_output1[2]=(-1.*t3438*t80 + t3456*t978)*var2[4] + t3099*var2[5] + t3099*var2[13] + (-1.*t2952*t80 + t2984*t978)*var2[14] + (-1.*t3208*t80 + t3186*t978)*var2[15] + (t3236 - 1.*t3265*t80)*var2[16] + (t3236 + t3313*t80)*var2[17];
  p_output1[3]=0;
  p_output1[4]=t3675*var2[3] + t3513*var2[4] + t3529*var2[5] + t3597*var2[13] + t3564*var2[14] + t3620*var2[15] + t3633*var2[16] + t3658*var2[17];
  p_output1[5]=t1949*var2[3] + t3696*var2[4] + t3721*var2[5] + t3772*var2[13] + t3760*var2[14] + t3787*var2[15] + t3810*var2[16] + t3836*var2[17];
  p_output1[6]=t3979*var2[4] + t3884*var2[5] + t3884*var2[13] + t3871*var2[14] + t3905*var2[15] + t3936*var2[16] + t3965*var2[17];
  p_output1[7]=0;
  p_output1[8]=(t2379 - 1.*t2035*t621)*var2[3] + (-1.*t331*t647*t678 - 1.*t621*t742)*var2[4] - 1.*t1268*t621*var2[5] - 1.*t1599*t621*var2[13] + t1750*var2[14];
  p_output1[9]=(-1.*t1453*t621 + t331*t334*t678)*var2[3] + (-1.*t2139*t621 - 1.*t1093*t647*t678)*var2[4] - 1.*t2275*t621*var2[5] - 1.*t2557*t621*var2[13] + t2656*var2[14];
  p_output1[10]=(-1.*t3368*t621 - 1.*t334*t678)*var2[4] - 1.*t3023*t621*var2[5] - 1.*t3023*t621*var2[13] + t3132*var2[14];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.03315*t3675 + t1962*t4195 - 1.*t1093*t334*t4224 + t1997*t4269 + t2035*t4302 + t2003*t4333 + t2042*t4354 + t2049*t4439 + t2071*t4479 + t2075*t4508 + t2080*t4521 - 0.1305*(t2035*t621 + t1093*t334*t678) - 0.19074*(t2075*t80 - 1.*t2080*t978))*var2[3] + (-0.03315*t3513 + t331*t334*t344*t4195 + t331*t334*t4269*t443 + t1038*t4521 + t4333*t539 - 1.*t331*t4224*t647 + t4302*t742 - 0.1305*(t331*t647*t678 + t621*t742) + t4354*t811 + t4439*t846 + t4479*t909 + t4508*t965 - 0.19074*(t80*t965 - 1.*t1038*t978))*var2[4] + (-0.03315*t3529 + t1195*t4195 + t1168*t4269 + t1268*t4302 + t1210*t4333 + t1289*t4439 + t1338*t4479 + t1368*t4508 + t1387*t4521 - 0.1305*t1268*t621 + t1268*t4354*t678 - 0.19074*(t1368*t80 - 1.*t1387*t978))*var2[5] + (-0.03315*t3597 + t1599*t4302 + t1585*t4333 + t1613*t4439 + t1659*t4479 + t1685*t4508 + t1697*t4521 + t1168*t4781 + t1446*t4805 - 0.1305*t1599*t621 + t1599*t4354*t678 - 0.19074*(t1685*t80 - 1.*t1697*t978))*var2[13] + (-0.03315*t3564 + t1467*t4354 + t1510*t4508 + t1552*t4521 + t331*t334*t4660 + t1453*t4673 + t1467*t4439*t615 - 0.1305*(-1.*t331*t334*t621 - 1.*t1453*t678) - 1.*t1467*t4479*t96 - 0.19074*(t1510*t80 - 1.*t1552*t978))*var2[14] + (-0.03315*t3620 + t1806*t4439 + t1776*t4479 + t1837*t4508 + t1810*t4521 + t1599*t4929 + t1750*t4941 - 0.19074*(t1837*t80 - 1.*t1810*t978))*var2[15] + (-0.03315*t3633 + t1909*t4508 + t1903*t4521 + t1897*t5016 + t1806*t5032 - 0.19074*(t5060 + t1909*t80))*var2[16] + (-0.03315*t3658 + t1903*t5127 + t1944*t5149 - 0.19074*(t5060 - 1.*t1944*t80))*var2[17];
  p_output1[13]=var2[1] + (-0.1305*t1467 - 0.03315*t1949 - 0.19074*t3658 + t1168*t4195 + t331*t334*t4224 + t1446*t4269 + t1453*t4302 + t1599*t4333 + t1750*t4354 + t1897*t4439 + t1806*t4479 + t1903*t4508 + t1944*t4521)*var2[3] + (-0.03315*t3696 + t1093*t334*t344*t4195 + t2139*t4302 + t2110*t4333 + t2147*t4354 + t1093*t334*t4269*t443 + t2155*t4439 + t2181*t4479 + t2194*t4508 + t2208*t4521 - 1.*t1093*t4224*t647 - 0.1305*(t2139*t621 + t1093*t647*t678) - 0.19074*(t2194*t80 - 1.*t2208*t978))*var2[4] + (-0.03315*t3721 + t1997*t4195 + t2253*t4269 + t2275*t4302 + t2259*t4333 + t2283*t4439 + t2317*t4479 + t2335*t4508 + t2364*t4521 - 0.1305*t2275*t621 + t2275*t4354*t678 - 0.19074*(t2335*t80 - 1.*t2364*t978))*var2[5] + (-0.03315*t3772 + t2557*t4302 + t2537*t4333 + t2564*t4439 + t2583*t4479 + t2588*t4508 + t2603*t4521 + t2253*t4781 + t2430*t4805 - 0.1305*t2557*t621 + t2557*t4354*t678 - 0.19074*(t2588*t80 - 1.*t2603*t978))*var2[13] + (-0.03315*t3760 + t2447*t4354 + t2475*t4508 + t2502*t4521 + t1093*t334*t4660 + t2440*t4673 + t2447*t4439*t615 - 0.1305*(t2018 - 1.*t2440*t678) - 1.*t2447*t4479*t96 - 0.19074*(t2475*t80 - 1.*t2502*t978))*var2[14] + (-0.03315*t3787 + t2717*t4439 + t2669*t4479 + t2740*t4508 + t2728*t4521 + t2557*t4929 + t2656*t4941 - 0.19074*(t2740*t80 - 1.*t2728*t978))*var2[15] + (-0.03315*t3810 + t2813*t4508 + t2787*t4521 + t2778*t5016 + t2717*t5032 - 0.19074*(t5884 + t2813*t80))*var2[16] + (-0.03315*t3836 + t2787*t5127 + t2842*t5149 - 0.19074*(t5884 - 1.*t2842*t80))*var2[17];
  p_output1[14]=var2[2] + (-0.03315*t3979 - 1.*t334*t4224 + t3368*t4302 + t3346*t4333 + t3379*t4354 + t3385*t4439 + t3410*t4479 + t3438*t4508 + t3456*t4521 - 1.*t344*t4195*t647 - 1.*t4269*t443*t647 - 0.1305*(t3368*t621 + t334*t678) - 0.19074*(t3438*t80 - 1.*t3456*t978))*var2[4] + (t334*t344*t4269 - 1.*t334*t4195*t443 + t6085 + t6087 + t6094 + t6112 + t6115 + t6118 + t6131 + t6143 + t6145 + t6168)*var2[5] + (t334*t344*t4781 + t334*t443*t4805 + t6085 + t6087 + t6094 + t6112 + t6115 + t6118 + t6131 + t6143 + t6145 + t6168)*var2[13] + (-0.03315*t3871 + t2939*t4354 + t2952*t4508 + t2984*t4521 + t2916*t4673 + t2939*t4439*t615 - 1.*t4660*t647 - 0.1305*(t621*t647 - 1.*t2916*t678) - 1.*t2939*t4479*t96 - 0.19074*(t2952*t80 - 1.*t2984*t978))*var2[14] + (-0.03315*t3905 + t3180*t4439 + t3150*t4479 + t3208*t4508 + t3186*t4521 + t3023*t4929 + t3132*t4941 - 0.19074*(t3208*t80 - 1.*t3186*t978))*var2[15] + (-0.03315*t3936 + t3265*t4508 + t3233*t4521 + t3230*t5016 + t3180*t5032 - 0.19074*(t6294 + t3265*t80))*var2[16] + (-0.03315*t3965 + t3233*t5127 + t3313*t5149 - 0.19074*(t6294 - 1.*t3313*t80))*var2[17];
  p_output1[15]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dT_RightKneeSpringJoint_mex.hh"

namespace SymExpression
{

void dT_RightKneeSpringJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
