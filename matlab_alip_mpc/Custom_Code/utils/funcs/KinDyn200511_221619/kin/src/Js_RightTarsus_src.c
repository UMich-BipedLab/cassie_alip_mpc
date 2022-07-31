/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_RightTarsus_src.h"

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
  double t87;
  double t93;
  double t182;
  double t210;
  double t185;
  double t216;
  double t374;
  double t384;
  double t232;
  double t247;
  double t280;
  double t308;
  double t329;
  double t332;
  double t354;
  double t381;
  double t411;
  double t418;
  double t431;
  double t444;
  double t452;
  double t716;
  double t694;
  double t467;
  double t489;
  double t509;
  double t754;
  double t760;
  double t541;
  double t547;
  double t595;
  double t765;
  double t774;
  double t799;
  double t813;
  double t824;
  double t829;
  double t739;
  double t751;
  double t753;
  double t39;
  double t1039;
  double t1052;
  double t1053;
  double t916;
  double t920;
  double t921;
  double t706;
  double t717;
  double t731;
  double t887;
  double t891;
  double t1251;
  double t1267;
  double t893;
  double t1310;
  double t1318;
  double t1089;
  double t1093;
  double t1121;
  double t1064;
  double t1066;
  double t1070;
  double t1320;
  double t1327;
  double t1332;
  double t804;
  double t862;
  double t1337;
  double t1342;
  double t1369;
  double t1002;
  double t1028;
  double t1421;
  double t1430;
  double t1431;
  double t971;
  double t982;
  double t1169;
  double t1179;
  double t1400;
  double t1402;
  double t1407;
  double t1501;
  double t1503;
  double t1510;
  double t1123;
  double t1131;
  double t1139;
  double t1336;
  double t1390;
  double t1871;
  double t1881;
  double t1883;
  double t1890;
  double t1637;
  double t1642;
  double t1663;
  double t1263;
  double t1272;
  double t1274;
  double t1450;
  double t1451;
  double t1885;
  double t1898;
  double t1904;
  double t1907;
  double t1913;
  double t1915;
  double t1573;
  double t1582;
  double t1591;
  double t1487;
  double t1493;
  double t1542;
  double t1544;
  double t1668;
  double t1676;
  double t1696;
  double t1700;
  double t1762;
  double t1788;
  double t1796;
  double t1813;
  double t1818;
  double t1821;
  double t1833;
  double t1851;
  double t1853;
  double t1905;
  double t1929;
  double t2215;
  double t2222;
  double t2226;
  double t2307;
  double t2315;
  double t2318;
  double t2327;
  double t2235;
  double t2242;
  double t2245;
  double t1971;
  double t1990;
  double t1991;
  double t2008;
  double t2025;
  double t2031;
  double t2035;
  double t2046;
  double t2321;
  double t2331;
  double t2336;
  double t2163;
  double t2177;
  double t2184;
  double t2351;
  double t2353;
  double t2357;
  double t2197;
  double t2200;
  double t2202;
  double t2056;
  double t2084;
  double t2134;
  double t2143;
  double t2256;
  double t2262;
  double t2280;
  double t2282;
  double t2341;
  double t2358;
  double t2503;
  double t2505;
  double t2508;
  double t2565;
  double t2573;
  double t2576;
  double t2582;
  double t2514;
  double t2517;
  double t2523;
  double t2372;
  double t2374;
  double t2383;
  double t2391;
  double t2393;
  double t2395;
  double t2401;
  double t2403;
  double t2577;
  double t2584;
  double t2585;
  double t2482;
  double t2485;
  double t2487;
  double t2605;
  double t2613;
  double t2614;
  double t2490;
  double t2491;
  double t2495;
  double t2436;
  double t2437;
  double t2460;
  double t2469;
  double t2528;
  double t2529;
  double t2542;
  double t2543;
  t87 = Cos(var1[3]);
  t93 = Sin(var1[3]);
  t182 = Cos(var1[4]);
  t210 = Sin(var1[4]);
  t185 = -1.*var1[2]*t182*t93;
  t216 = -1.*var1[1]*t210;
  t374 = Cos(var1[5]);
  t384 = Sin(var1[5]);
  t232 = var1[2]*t87*t182;
  t247 = var1[0]*t210;
  t280 = -1.*var1[1]*t87*t182;
  t308 = var1[0]*t182*t93;
  t329 = t87*t182;
  t332 = t182*t93;
  t354 = -1.*t210;
  t381 = t87*t374*t210;
  t411 = t93*t384;
  t418 = t381 + t411;
  t431 = -1.*t374*t93;
  t444 = t87*t210*t384;
  t452 = t431 + t444;
  t716 = Cos(var1[13]);
  t694 = Sin(var1[13]);
  t467 = t374*t93*t210;
  t489 = -1.*t87*t384;
  t509 = t467 + t489;
  t754 = -1.*t716;
  t760 = 1. + t754;
  t541 = t87*t374;
  t547 = t93*t210*t384;
  t595 = t541 + t547;
  t765 = 0.07996*t760;
  t774 = 0.135*t694;
  t799 = 0. + t765 + t774;
  t813 = -0.135*t760;
  t824 = 0.07996*t694;
  t829 = 0. + t813 + t824;
  t739 = t716*t182*t374;
  t751 = -1.*t182*t694*t384;
  t753 = t739 + t751;
  t39 = -1.*var1[0];
  t1039 = t716*t418;
  t1052 = -1.*t694*t452;
  t1053 = t1039 + t1052;
  t916 = t716*t509;
  t920 = -1.*t694*t595;
  t921 = t916 + t920;
  t706 = t694*t418;
  t717 = t716*t452;
  t731 = t706 + t717;
  t887 = -1.*var1[2];
  t891 = -1.*t182*t374*t799;
  t1251 = Cos(var1[14]);
  t1267 = Sin(var1[14]);
  t893 = -1.*t182*t829*t384;
  t1310 = -1.*t1251;
  t1318 = 1. + t1310;
  t1089 = t182*t374*t694;
  t1093 = t716*t182*t384;
  t1121 = t1089 + t1093;
  t1064 = t694*t509;
  t1066 = t716*t595;
  t1070 = t1064 + t1066;
  t1320 = -0.08055*t1318;
  t1327 = -0.135*t1267;
  t1332 = 0. + t1320 + t1327;
  t804 = t799*t509;
  t862 = t829*t595;
  t1337 = -0.135*t1318;
  t1342 = 0.08055*t1267;
  t1369 = 0. + t1337 + t1342;
  t1002 = t182*t374*t799;
  t1028 = t182*t829*t384;
  t1421 = t1267*t210;
  t1430 = t1251*t1121;
  t1431 = t1421 + t1430;
  t971 = -1.*t799*t418;
  t982 = -1.*t829*t452;
  t1169 = t799*t418;
  t1179 = t829*t452;
  t1400 = -1.*t182*t1267*t93;
  t1402 = t1251*t1070;
  t1407 = t1400 + t1402;
  t1501 = -1.*t87*t182*t1267;
  t1503 = t1251*t731;
  t1510 = t1501 + t1503;
  t1123 = -1.*var1[1];
  t1131 = -1.*t799*t509;
  t1139 = -1.*t829*t595;
  t1336 = t1332*t210;
  t1390 = -1.*t1369*t1121;
  t1871 = Cos(var1[15]);
  t1881 = -1.*t1871;
  t1883 = 1. + t1881;
  t1890 = Sin(var1[15]);
  t1637 = -1.*t1251*t210;
  t1642 = t1267*t1121;
  t1663 = t1637 + t1642;
  t1263 = t1251*t87*t182;
  t1272 = t1267*t731;
  t1274 = t1263 + t1272;
  t1450 = t182*t1332*t93;
  t1451 = t1369*t1070;
  t1885 = -0.01004*t1883;
  t1898 = 0.08055*t1890;
  t1904 = 0. + t1885 + t1898;
  t1907 = -0.08055*t1883;
  t1913 = -0.01004*t1890;
  t1915 = 0. + t1907 + t1913;
  t1573 = t1251*t182*t93;
  t1582 = t1267*t1070;
  t1591 = t1573 + t1582;
  t1487 = -1.*t1332*t210;
  t1493 = t1369*t1121;
  t1542 = -1.*t87*t182*t1332;
  t1544 = -1.*t1369*t731;
  t1668 = t87*t182*t1332;
  t1676 = t1369*t731;
  t1696 = -1.*t182*t1332*t93;
  t1700 = -1.*t1369*t1070;
  t1762 = t87*t182*t1267;
  t1788 = -1.*t1251*t731;
  t1796 = 0. + t1762 + t1788;
  t1813 = t182*t1267*t93;
  t1818 = -1.*t1251*t1070;
  t1821 = 0. + t1813 + t1818;
  t1833 = -1.*t1267*t210;
  t1851 = -1.*t1251*t1121;
  t1853 = 0. + t1833 + t1851;
  t1905 = -1.*t1904*t753;
  t1929 = -1.*t1915*t1663;
  t2215 = t1890*t753;
  t2222 = t1871*t1663;
  t2226 = t2215 + t2222;
  t2307 = Cos(var1[16]);
  t2315 = -1.*t2307;
  t2318 = 1. + t2315;
  t2327 = Sin(var1[16]);
  t2235 = t1871*t753;
  t2242 = -1.*t1890*t1663;
  t2245 = t2235 + t2242;
  t1971 = t1890*t1053;
  t1990 = t1871*t1274;
  t1991 = t1971 + t1990;
  t2008 = t1871*t1053;
  t2025 = -1.*t1890*t1274;
  t2031 = t2008 + t2025;
  t2035 = t1904*t921;
  t2046 = t1915*t1591;
  t2321 = -0.08055*t2318;
  t2331 = -0.13004*t2327;
  t2336 = 0. + t2321 + t2331;
  t2163 = t1890*t921;
  t2177 = t1871*t1591;
  t2184 = t2163 + t2177;
  t2351 = -0.13004*t2318;
  t2353 = 0.08055*t2327;
  t2357 = 0. + t2351 + t2353;
  t2197 = t1871*t921;
  t2200 = -1.*t1890*t1591;
  t2202 = t2197 + t2200;
  t2056 = t1904*t753;
  t2084 = t1915*t1663;
  t2134 = -1.*t1904*t1053;
  t2143 = -1.*t1915*t1274;
  t2256 = t1904*t1053;
  t2262 = t1915*t1274;
  t2280 = -1.*t1904*t921;
  t2282 = -1.*t1915*t1591;
  t2341 = -1.*t2336*t2226;
  t2358 = -1.*t2357*t2245;
  t2503 = -1.*t2327*t2226;
  t2505 = t2307*t2245;
  t2508 = t2503 + t2505;
  t2565 = Cos(var1[17]);
  t2573 = -1.*t2565;
  t2576 = 1. + t2573;
  t2582 = Sin(var1[17]);
  t2514 = t2307*t2226;
  t2517 = t2327*t2245;
  t2523 = t2514 + t2517;
  t2372 = -1.*t2327*t1991;
  t2374 = t2307*t2031;
  t2383 = t2372 + t2374;
  t2391 = t2307*t1991;
  t2393 = t2327*t2031;
  t2395 = t2391 + t2393;
  t2401 = t2336*t2184;
  t2403 = t2357*t2202;
  t2577 = -0.19074*t2576;
  t2584 = 0.03315*t2582;
  t2585 = 0. + t2577 + t2584;
  t2482 = -1.*t2327*t2184;
  t2485 = t2307*t2202;
  t2487 = t2482 + t2485;
  t2605 = -0.03315*t2576;
  t2613 = -0.19074*t2582;
  t2614 = 0. + t2605 + t2613;
  t2490 = t2307*t2184;
  t2491 = t2327*t2202;
  t2495 = t2490 + t2491;
  t2436 = t2336*t2226;
  t2437 = t2357*t2245;
  t2460 = -1.*t2336*t1991;
  t2469 = -1.*t2357*t2031;
  t2528 = t2336*t1991;
  t2529 = t2357*t2031;
  t2542 = -1.*t2336*t2184;
  t2543 = -1.*t2357*t2202;
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
  p_output1[19]=t39;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t87*var1[2];
  p_output1[25]=-1.*t93*var1[2];
  p_output1[26]=t87*var1[0] + t93*var1[1];
  p_output1[27]=-1.*t93;
  p_output1[28]=t87;
  p_output1[29]=0;
  p_output1[30]=t185 + t216;
  p_output1[31]=t232 + t247;
  p_output1[32]=t280 + t308;
  p_output1[33]=t329;
  p_output1[34]=t332;
  p_output1[35]=t354;
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
  p_output1[78]=t185 + t216 + 0.135*t418 + 0.07996*t452;
  p_output1[79]=t232 + t247 + 0.135*t509 + 0.07996*t595;
  p_output1[80]=t280 + t308 + 0.135*t182*t374 + 0.07996*t182*t384;
  p_output1[81]=0. + t329;
  p_output1[82]=0. + t332;
  p_output1[83]=0. + t354;
  p_output1[84]=0.08055*t731 - 0.135*t182*t87 + (0. + t887 + t891 + t893)*t921 + t753*(0. + t804 + t862 + var1[1]);
  p_output1[85]=0.08055*t1070 - 0.135*t182*t93 + t753*(0. + t39 + t971 + t982) + t1053*(0. + t1002 + t1028 + var1[2]);
  p_output1[86]=0.08055*t1121 + t1053*(0. + t1123 + t1131 + t1139) + 0.135*t210 + t921*(0. + t1169 + t1179 + var1[0]);
  p_output1[87]=0. + t1039 + t1052;
  p_output1[88]=0. + t916 + t920;
  p_output1[89]=0. + t739 + t751;
  p_output1[90]=0.08055*t1053 - 0.01004*t1274 - 1.*t1407*(0. + t1336 + t1390 + t887 + t891 + t893) - 1.*t1431*(0. + t1450 + t1451 + t804 + t862 + var1[1]);
  p_output1[91]=-0.01004*t1591 + 0.08055*t921 - 1.*t1431*(0. + t1542 + t1544 + t39 + t971 + t982) - 1.*t1510*(0. + t1002 + t1028 + t1487 + t1493 + var1[2]);
  p_output1[92]=-0.01004*t1663 - 1.*t1510*(0. + t1123 + t1131 + t1139 + t1696 + t1700) + 0.08055*t753 - 1.*t1407*(0. + t1169 + t1179 + t1668 + t1676 + var1[0]);
  p_output1[93]=t1796;
  p_output1[94]=t1821;
  p_output1[95]=t1853;
  p_output1[96]=-0.13004*t1991 + 0.08055*t2031 - 1.*t1407*(0. + t1336 + t1390 + t1905 + t1929 + t887 + t891 + t893) - 1.*t1431*(0. + t1450 + t1451 + t2035 + t2046 + t804 + t862 + var1[1]);
  p_output1[97]=-0.13004*t2184 + 0.08055*t2202 - 1.*t1431*(0. + t1542 + t1544 + t2134 + t2143 + t39 + t971 + t982) - 1.*t1510*(0. + t1002 + t1028 + t1487 + t1493 + t2056 + t2084 + var1[2]);
  p_output1[98]=-0.13004*t2226 + 0.08055*t2245 - 1.*t1510*(0. + t1123 + t1131 + t1139 + t1696 + t1700 + t2280 + t2282) - 1.*t1407*(0. + t1169 + t1179 + t1668 + t1676 + t2256 + t2262 + var1[0]);
  p_output1[99]=t1796;
  p_output1[100]=t1821;
  p_output1[101]=t1853;
  p_output1[102]=0.03315*t2383 - 0.19074*t2395 - 1.*t1407*(0. + t1336 + t1390 + t1905 + t1929 + t2341 + t2358 + t887 + t891 + t893) - 1.*t1431*(0. + t1450 + t1451 + t2035 + t2046 + t2401 + t2403 + t804 + t862 + var1[1]);
  p_output1[103]=0.03315*t2487 - 0.19074*t2495 - 1.*t1431*(0. + t1542 + t1544 + t2134 + t2143 + t2460 + t2469 + t39 + t971 + t982) - 1.*t1510*(0. + t1002 + t1028 + t1487 + t1493 + t2056 + t2084 + t2436 + t2437 + var1[2]);
  p_output1[104]=0.03315*t2508 - 0.19074*t2523 - 1.*t1510*(0. + t1123 + t1131 + t1139 + t1696 + t1700 + t2280 + t2282 + t2542 + t2543) - 1.*t1407*(0. + t1169 + t1179 + t1668 + t1676 + t2256 + t2262 + t2528 + t2529 + var1[0]);
  p_output1[105]=t1796;
  p_output1[106]=t1821;
  p_output1[107]=t1853;
  p_output1[108]=-0.62554*(t2395*t2565 + t2383*t2582) + 0.01315*(t2383*t2565 - 1.*t2395*t2582) - 1.*t1407*(0. + t1336 + t1390 + t1905 + t1929 + t2341 + t2358 - 1.*t2508*t2585 - 1.*t2523*t2614 + t887 + t891 + t893) - 1.*t1431*(0. + t1450 + t1451 + t2035 + t2046 + t2401 + t2403 + t2487*t2585 + t2495*t2614 + t804 + t862 + var1[1]);
  p_output1[109]=-0.62554*(t2495*t2565 + t2487*t2582) + 0.01315*(t2487*t2565 - 1.*t2495*t2582) - 1.*t1431*(0. + t1542 + t1544 + t2134 + t2143 + t2460 + t2469 - 1.*t2383*t2585 - 1.*t2395*t2614 + t39 + t971 + t982) - 1.*t1510*(0. + t1002 + t1028 + t1487 + t1493 + t2056 + t2084 + t2436 + t2437 + t2508*t2585 + t2523*t2614 + var1[2]);
  p_output1[110]=-0.62554*(t2523*t2565 + t2508*t2582) + 0.01315*(t2508*t2565 - 1.*t2523*t2582) - 1.*t1510*(0. + t1123 + t1131 + t1139 + t1696 + t1700 + t2280 + t2282 + t2542 + t2543 - 1.*t2487*t2585 - 1.*t2495*t2614) - 1.*t1407*(0. + t1169 + t1179 + t1668 + t1676 + t2256 + t2262 + t2528 + t2529 + t2383*t2585 + t2395*t2614 + var1[0]);
  p_output1[111]=t1796;
  p_output1[112]=t1821;
  p_output1[113]=t1853;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
}



void Js_RightTarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
