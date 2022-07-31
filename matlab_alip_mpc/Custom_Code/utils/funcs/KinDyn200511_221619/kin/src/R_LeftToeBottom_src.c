/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_LeftToeBottom_src.h"

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
  double t691;
  double t916;
  double t973;
  double t923;
  double t1081;
  double t859;
  double t1147;
  double t1176;
  double t1207;
  double t927;
  double t1122;
  double t1125;
  double t1227;
  double t628;
  double t1421;
  double t1449;
  double t1451;
  double t699;
  double t724;
  double t747;
  double t1142;
  double t1271;
  double t1301;
  double t1332;
  double t1342;
  double t1372;
  double t1457;
  double t1541;
  double t1394;
  double t1473;
  double t1474;
  double t572;
  double t1544;
  double t1550;
  double t1563;
  double t1604;
  double t1509;
  double t1569;
  double t1574;
  double t375;
  double t1624;
  double t1637;
  double t1678;
  double t1735;
  double t1592;
  double t1690;
  double t1711;
  double t364;
  double t1769;
  double t1777;
  double t1821;
  double t1911;
  double t1718;
  double t1824;
  double t1862;
  double t222;
  double t1916;
  double t1919;
  double t1959;
  double t2119;
  double t2137;
  double t2138;
  double t2095;
  double t2105;
  double t2108;
  double t2218;
  double t2236;
  double t2238;
  double t2087;
  double t2109;
  double t2142;
  double t2151;
  double t2178;
  double t2186;
  double t2199;
  double t2268;
  double t2277;
  double t2292;
  double t2294;
  double t2309;
  double t2285;
  double t2310;
  double t2330;
  double t2385;
  double t2389;
  double t2398;
  double t2369;
  double t2408;
  double t2417;
  double t2473;
  double t2482;
  double t2486;
  double t2434;
  double t2489;
  double t2497;
  double t2501;
  double t2524;
  double t2544;
  double t2652;
  double t2660;
  double t2664;
  double t2595;
  double t2602;
  double t2605;
  double t2615;
  double t2617;
  double t2631;
  double t2636;
  double t2670;
  double t2672;
  double t2740;
  double t2747;
  double t2749;
  double t2704;
  double t2755;
  double t2760;
  double t2796;
  double t2820;
  double t2823;
  double t2773;
  double t2826;
  double t2837;
  double t2843;
  double t2844;
  double t2849;
  double t2840;
  double t2855;
  double t2856;
  double t2880;
  double t2881;
  double t2890;
  double t1883;
  double t1962;
  double t1976;
  double t2021;
  double t2052;
  double t2066;
  double t2500;
  double t2556;
  double t2569;
  double t2579;
  double t2580;
  double t2583;
  double t2875;
  double t2897;
  double t2903;
  double t2930;
  double t2935;
  double t2947;
  t691 = Cos(var1[3]);
  t916 = Cos(var1[5]);
  t973 = Sin(var1[4]);
  t923 = Sin(var1[3]);
  t1081 = Sin(var1[5]);
  t859 = Cos(var1[6]);
  t1147 = t691*t916*t973;
  t1176 = t923*t1081;
  t1207 = t1147 + t1176;
  t927 = -1.*t916*t923;
  t1122 = t691*t973*t1081;
  t1125 = t927 + t1122;
  t1227 = Sin(var1[6]);
  t628 = Cos(var1[8]);
  t1421 = t859*t1207;
  t1449 = -1.*t1125*t1227;
  t1451 = t1421 + t1449;
  t699 = Cos(var1[4]);
  t724 = Cos(var1[7]);
  t747 = t691*t699*t724;
  t1142 = t859*t1125;
  t1271 = t1207*t1227;
  t1301 = t1142 + t1271;
  t1332 = Sin(var1[7]);
  t1342 = t1301*t1332;
  t1372 = t747 + t1342;
  t1457 = Sin(var1[8]);
  t1541 = Cos(var1[9]);
  t1394 = t628*t1372;
  t1473 = t1451*t1457;
  t1474 = t1394 + t1473;
  t572 = Sin(var1[9]);
  t1544 = t628*t1451;
  t1550 = -1.*t1372*t1457;
  t1563 = t1544 + t1550;
  t1604 = Cos(var1[10]);
  t1509 = -1.*t572*t1474;
  t1569 = t1541*t1563;
  t1574 = t1509 + t1569;
  t375 = Sin(var1[10]);
  t1624 = t1541*t1474;
  t1637 = t572*t1563;
  t1678 = t1624 + t1637;
  t1735 = Cos(var1[11]);
  t1592 = t375*t1574;
  t1690 = t1604*t1678;
  t1711 = t1592 + t1690;
  t364 = Sin(var1[11]);
  t1769 = t1604*t1574;
  t1777 = -1.*t375*t1678;
  t1821 = t1769 + t1777;
  t1911 = Cos(var1[12]);
  t1718 = -1.*t364*t1711;
  t1824 = t1735*t1821;
  t1862 = t1718 + t1824;
  t222 = Sin(var1[12]);
  t1916 = t1735*t1711;
  t1919 = t364*t1821;
  t1959 = t1916 + t1919;
  t2119 = t916*t923*t973;
  t2137 = -1.*t691*t1081;
  t2138 = t2119 + t2137;
  t2095 = t691*t916;
  t2105 = t923*t973*t1081;
  t2108 = t2095 + t2105;
  t2218 = t859*t2138;
  t2236 = -1.*t2108*t1227;
  t2238 = t2218 + t2236;
  t2087 = t699*t724*t923;
  t2109 = t859*t2108;
  t2142 = t2138*t1227;
  t2151 = t2109 + t2142;
  t2178 = t2151*t1332;
  t2186 = t2087 + t2178;
  t2199 = t628*t2186;
  t2268 = t2238*t1457;
  t2277 = t2199 + t2268;
  t2292 = t628*t2238;
  t2294 = -1.*t2186*t1457;
  t2309 = t2292 + t2294;
  t2285 = -1.*t572*t2277;
  t2310 = t1541*t2309;
  t2330 = t2285 + t2310;
  t2385 = t1541*t2277;
  t2389 = t572*t2309;
  t2398 = t2385 + t2389;
  t2369 = t375*t2330;
  t2408 = t1604*t2398;
  t2417 = t2369 + t2408;
  t2473 = t1604*t2330;
  t2482 = -1.*t375*t2398;
  t2486 = t2473 + t2482;
  t2434 = -1.*t364*t2417;
  t2489 = t1735*t2486;
  t2497 = t2434 + t2489;
  t2501 = t1735*t2417;
  t2524 = t364*t2486;
  t2544 = t2501 + t2524;
  t2652 = t699*t916*t859;
  t2660 = -1.*t699*t1081*t1227;
  t2664 = t2652 + t2660;
  t2595 = -1.*t724*t973;
  t2602 = t699*t859*t1081;
  t2605 = t699*t916*t1227;
  t2615 = t2602 + t2605;
  t2617 = t2615*t1332;
  t2631 = t2595 + t2617;
  t2636 = t628*t2631;
  t2670 = t2664*t1457;
  t2672 = t2636 + t2670;
  t2740 = t628*t2664;
  t2747 = -1.*t2631*t1457;
  t2749 = t2740 + t2747;
  t2704 = -1.*t572*t2672;
  t2755 = t1541*t2749;
  t2760 = t2704 + t2755;
  t2796 = t1541*t2672;
  t2820 = t572*t2749;
  t2823 = t2796 + t2820;
  t2773 = t375*t2760;
  t2826 = t1604*t2823;
  t2837 = t2773 + t2826;
  t2843 = t1604*t2760;
  t2844 = -1.*t375*t2823;
  t2849 = t2843 + t2844;
  t2840 = -1.*t364*t2837;
  t2855 = t1735*t2849;
  t2856 = t2840 + t2855;
  t2880 = t1735*t2837;
  t2881 = t364*t2849;
  t2890 = t2880 + t2881;
  t1883 = t222*t1862;
  t1962 = t1911*t1959;
  t1976 = t1883 + t1962;
  t2021 = t1911*t1862;
  t2052 = -1.*t222*t1959;
  t2066 = t2021 + t2052;
  t2500 = t222*t2497;
  t2556 = t1911*t2544;
  t2569 = t2500 + t2556;
  t2579 = t1911*t2497;
  t2580 = -1.*t222*t2544;
  t2583 = t2579 + t2580;
  t2875 = t222*t2856;
  t2897 = t1911*t2890;
  t2903 = t2875 + t2897;
  t2930 = t1911*t2856;
  t2935 = -1.*t222*t2890;
  t2947 = t2930 + t2935;
  p_output1[0]=0.642788*t1976 + 0.766044*t2066;
  p_output1[1]=0.642788*t2569 + 0.766044*t2583;
  p_output1[2]=0.642788*t2903 + 0.766044*t2947;
  p_output1[3]=-1.*t1332*t691*t699 + t1301*t724;
  p_output1[4]=t2151*t724 - 1.*t1332*t699*t923;
  p_output1[5]=t2615*t724 + t1332*t973;
  p_output1[6]=-0.766044*t1976 + 0.642788*t2066;
  p_output1[7]=-0.766044*t2569 + 0.642788*t2583;
  p_output1[8]=-0.766044*t2903 + 0.642788*t2947;
}



void R_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
