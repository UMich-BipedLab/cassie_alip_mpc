/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:30 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightShin_src.h"

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
  double t362;
  double t323;
  double t330;
  double t363;
  double t474;
  double t360;
  double t368;
  double t434;
  double t225;
  double t485;
  double t492;
  double t519;
  double t584;
  double t458;
  double t523;
  double t524;
  double t205;
  double t590;
  double t640;
  double t658;
  double t662;
  double t672;
  double t686;
  double t130;
  double t737;
  double t741;
  double t772;
  double t545;
  double t697;
  double t713;
  double t806;
  double t44;
  double t1087;
  double t1089;
  double t1095;
  double t1118;
  double t1119;
  double t1152;
  double t1154;
  double t1161;
  double t1193;
  double t1224;
  double t922;
  double t925;
  double t928;
  double t988;
  double t1271;
  double t1273;
  double t1283;
  double t1149;
  double t1231;
  double t1233;
  double t1505;
  double t1508;
  double t1588;
  double t1599;
  double t1519;
  double t1560;
  double t736;
  double t818;
  double t834;
  double t932;
  double t941;
  double t981;
  double t1000;
  double t1005;
  double t1006;
  double t1018;
  double t1033;
  double t1249;
  double t1289;
  double t1292;
  double t1306;
  double t1309;
  double t1319;
  double t1340;
  double t1396;
  double t1422;
  double t1443;
  double t1446;
  double t1562;
  double t1609;
  double t1610;
  double t1644;
  double t1654;
  double t1655;
  double t1664;
  double t1678;
  double t1697;
  double t1710;
  double t1905;
  double t1910;
  double t1950;
  double t2137;
  double t2138;
  double t2117;
  double t2122;
  double t2162;
  double t2181;
  double t2190;
  double t2207;
  double t2231;
  double t2237;
  double t2242;
  double t2247;
  double t2087;
  double t2101;
  double t2133;
  double t2136;
  double t2221;
  double t2265;
  double t2271;
  double t2284;
  double t2286;
  double t2297;
  double t2310;
  double t2317;
  double t1989;
  double t2020;
  double t2059;
  double t2062;
  double t2064;
  double t2067;
  double t2082;
  double t2106;
  double t2111;
  double t2281;
  double t2329;
  double t2345;
  double t2347;
  double t2350;
  double t2374;
  double t2383;
  double t2391;
  double t2401;
  double t2407;
  double t1977;
  double t1981;
  double t1983;
  double t2428;
  double t2430;
  double t2433;
  double t2438;
  double t2446;
  double t2022;
  double t2041;
  double t2369;
  double t2408;
  double t2417;
  double t2466;
  double t2480;
  double t2484;
  double t2498;
  double t2520;
  double t2526;
  double t2529;
  double t2421;
  double t2453;
  double t2456;
  double t2519;
  double t2540;
  double t2542;
  double t2567;
  double t2571;
  double t2577;
  double t1897;
  double t1900;
  double t1904;
  double t2463;
  double t2597;
  double t2637;
  double t2678;
  double t2711;
  double t2735;
  double t2789;
  double t2832;
  double t2856;
  double t2869;
  double t2898;
  double t2922;
  double t3393;
  double t3435;
  t362 = Cos(var1[16]);
  t323 = Cos(var1[17]);
  t330 = Sin(var1[16]);
  t363 = Sin(var1[17]);
  t474 = Cos(var1[15]);
  t360 = t323*t330;
  t368 = t362*t363;
  t434 = 0. + t360 + t368;
  t225 = Sin(var1[15]);
  t485 = -1.*t362*t323;
  t492 = t330*t363;
  t519 = 0. + t485 + t492;
  t584 = Cos(var1[13]);
  t458 = t225*t434;
  t523 = t474*t519;
  t524 = 0. + t458 + t523;
  t205 = Sin(var1[13]);
  t590 = Sin(var1[14]);
  t640 = t474*t434;
  t658 = -1.*t225*t519;
  t662 = 0. + t640 + t658;
  t672 = t590*t662;
  t686 = 0. + t672;
  t130 = Cos(var1[5]);
  t737 = t584*t524;
  t741 = t205*t686;
  t772 = 0. + t737 + t741;
  t545 = -1.*t205*t524;
  t697 = t584*t686;
  t713 = 0. + t545 + t697;
  t806 = Sin(var1[5]);
  t44 = Sin(var1[3]);
  t1087 = t362*t323;
  t1089 = -1.*t330*t363;
  t1095 = 0. + t1087 + t1089;
  t1118 = t225*t1095;
  t1119 = 0. + t640 + t1118;
  t1152 = -1.*t225*t434;
  t1154 = t474*t1095;
  t1161 = 0. + t1152 + t1154;
  t1193 = t590*t1161;
  t1224 = 0. + t1193;
  t922 = Cos(var1[3]);
  t925 = Cos(var1[4]);
  t928 = Cos(var1[14]);
  t988 = Sin(var1[4]);
  t1271 = t584*t1119;
  t1273 = t205*t1224;
  t1283 = 0. + t1271 + t1273;
  t1149 = -1.*t205*t1119;
  t1231 = t584*t1224;
  t1233 = 0. + t1149 + t1231;
  t1505 = -1.*t928;
  t1508 = 0. + t1505;
  t1588 = t1508*t205;
  t1599 = 0. + t1588;
  t1519 = t584*t1508;
  t1560 = 0. + t1519;
  t736 = t130*t713;
  t818 = -1.*t772*t806;
  t834 = 0. + t736 + t818;
  t932 = t928*t662;
  t941 = 0. + t932;
  t981 = t925*t941;
  t1000 = t130*t772;
  t1005 = t713*t806;
  t1006 = 0. + t1000 + t1005;
  t1018 = t988*t1006;
  t1033 = 0. + t981 + t1018;
  t1249 = t130*t1233;
  t1289 = -1.*t1283*t806;
  t1292 = 0. + t1249 + t1289;
  t1306 = t928*t1161;
  t1309 = 0. + t1306;
  t1319 = t925*t1309;
  t1340 = t130*t1283;
  t1396 = t1233*t806;
  t1422 = 0. + t1340 + t1396;
  t1443 = t988*t1422;
  t1446 = 0. + t1319 + t1443;
  t1562 = t1560*t130;
  t1609 = -1.*t1599*t806;
  t1610 = 0. + t1562 + t1609;
  t1644 = 0. + t590;
  t1654 = t925*t1644;
  t1655 = t130*t1599;
  t1664 = t1560*t806;
  t1678 = 0. + t1655 + t1664;
  t1697 = t988*t1678;
  t1710 = 0. + t1654 + t1697;
  t1905 = -1.*t1309*t988;
  t1910 = t925*t1422;
  t1950 = 0. + t1905 + t1910;
  t2137 = -1.*t323;
  t2138 = 1. + t2137;
  t2117 = -1.*t362;
  t2122 = 1. + t2117;
  t2162 = -0.19074*t2138;
  t2181 = -0.37414*t323;
  t2190 = 0.0011999999999999997*t363;
  t2207 = 0. + t2162 + t2181 + t2190;
  t2231 = -0.03315*t2138;
  t2237 = -0.03195*t323;
  t2242 = 0.18339999999999998*t363;
  t2247 = 0. + t2231 + t2237 + t2242;
  t2087 = -1.*t474;
  t2101 = 1. + t2087;
  t2133 = -0.08055*t2122;
  t2136 = -0.13004*t330;
  t2221 = -1.*t330*t2207;
  t2265 = t362*t2247;
  t2271 = 0. + t2133 + t2136 + t2221 + t2265;
  t2284 = -0.13004*t2122;
  t2286 = 0.08055*t330;
  t2297 = t362*t2207;
  t2310 = t330*t2247;
  t2317 = 0. + t2284 + t2286 + t2297 + t2310;
  t1989 = -1.*t584;
  t2020 = 1. + t1989;
  t2059 = -1.*t928;
  t2062 = 1. + t2059;
  t2064 = -0.135*t2062;
  t2067 = -0.1303*t928;
  t2082 = 0.08055*t590;
  t2106 = -0.08055*t2101;
  t2111 = -0.01004*t225;
  t2281 = t474*t2271;
  t2329 = -1.*t225*t2317;
  t2345 = 0. + t2106 + t2111 + t2281 + t2329;
  t2347 = t590*t2345;
  t2350 = 0. + t2064 + t2067 + t2082 + t2347;
  t2374 = -0.01004*t2101;
  t2383 = 0.08055*t225;
  t2391 = t225*t2271;
  t2401 = t474*t2317;
  t2407 = 0. + t2374 + t2383 + t2391 + t2401;
  t1977 = -1.*t1644*t988;
  t1981 = t925*t1678;
  t1983 = 0. + t1977 + t1981;
  t2428 = 0.07996*t2020;
  t2430 = 0.135*t205;
  t2433 = t205*t2350;
  t2438 = t584*t2407;
  t2446 = 0. + t2428 + t2430 + t2433 + t2438;
  t2022 = -0.135*t2020;
  t2041 = 0.07996*t205;
  t2369 = t584*t2350;
  t2408 = -1.*t205*t2407;
  t2417 = 0. + t2022 + t2041 + t2369 + t2408;
  t2466 = -0.08055*t2062;
  t2480 = -0.00470000000000001*t590;
  t2484 = t928*t2345;
  t2498 = 0. + t2466 + t2480 + t2484;
  t2520 = t130*t2446;
  t2526 = t2417*t806;
  t2529 = 0. + t2520 + t2526;
  t2421 = t130*t2417;
  t2453 = -1.*t2446*t806;
  t2456 = 0. + t2421 + t2453;
  t2519 = -1.*t2498*t988;
  t2540 = t925*t2529;
  t2542 = 0. + t2519 + t2540;
  t2567 = t925*t2498;
  t2571 = t988*t2529;
  t2577 = 0. + t2567 + t2571;
  t1897 = -1.*t941*t988;
  t1900 = t925*t1006;
  t1904 = 0. + t1897 + t1900;
  t2463 = t1610*t2456;
  t2597 = -1.*t2456*t1292;
  t2637 = -1.*t1610*t2456;
  t2678 = t2456*t834;
  t2711 = t2456*t1292;
  t2735 = -1.*t2456*t834;
  t2789 = t1644*t2498;
  t2832 = -1.*t2498*t1309;
  t2856 = -1.*t1644*t2498;
  t2869 = t2498*t941;
  t2898 = t2498*t1309;
  t2922 = -1.*t2498*t941;
  t3393 = t2407*t1119;
  t3435 = -1.*t2407*t524;
  p_output1[0]=0. - 1.*t44*t834 + t1033*t922;
  p_output1[1]=0. - 1.*t1292*t44 + t1446*t922;
  p_output1[2]=0. - 1.*t1610*t44 + t1710*t922;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1033*t44 + t834*t922;
  p_output1[7]=0. + t1446*t44 + t1292*t922;
  p_output1[8]=0. + t1710*t44 + t1610*t922;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1904;
  p_output1[13]=t1950;
  p_output1[14]=t1983;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1950*(t2463 + t1983*t2542 + t1710*t2577) + t1983*(-1.*t1950*t2542 - 1.*t1446*t2577 + t2597);
  p_output1[19]=t1904*(-1.*t1983*t2542 - 1.*t1710*t2577 + t2637) + t1983*(t1904*t2542 + t1033*t2577 + t2678);
  p_output1[20]=t1904*(t1950*t2542 + t1446*t2577 + t2711) + t1950*(-1.*t1904*t2542 - 1.*t1033*t2577 + t2735);
  p_output1[21]=t1904;
  p_output1[22]=t1950;
  p_output1[23]=t1983;
  p_output1[24]=t1292*(t2463 + t1678*t2529 + t2789) + t1610*(-1.*t1422*t2529 + t2597 + t2832);
  p_output1[25]=t1610*(t1006*t2529 + t2678 + t2869) + (-1.*t1678*t2529 + t2637 + t2856)*t834;
  p_output1[26]=t1292*(-1.*t1006*t2529 + t2735 + t2922) + (t1422*t2529 + t2711 + t2898)*t834;
  p_output1[27]=t834;
  p_output1[28]=t1292;
  p_output1[29]=t1610;
  p_output1[30]=t1309*(t1560*t2417 + t1599*t2446 + t2789) + t1644*(-1.*t1233*t2417 - 1.*t1283*t2446 + t2832);
  p_output1[31]=t1644*(t2869 + t2417*t713 + t2446*t772) + (-1.*t1560*t2417 - 1.*t1599*t2446 + t2856)*t941;
  p_output1[32]=t1309*(t2922 - 1.*t2417*t713 - 1.*t2446*t772) + (t1233*t2417 + t1283*t2446 + t2898)*t941;
  p_output1[33]=t941;
  p_output1[34]=t1309;
  p_output1[35]=t1644;
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
  p_output1[78]=t1309*(0. + t1508*t2350 + t2789) + t1644*(-1.*t1224*t2350 - 1.*t1119*t2407 + t2832) + 0.135*t524 + 0.07996*t686;
  p_output1[79]=0.135*t1119 + 0.07996*t1224 + t1644*(t2869 + t2407*t524 + t2350*t686) + (0. - 1.*t1508*t2350 + t2856)*t941;
  p_output1[80]=0. + 0.07996*t1508 + t1309*(t2922 + t3435 - 1.*t2350*t686) + (t1224*t2350 + t2898 + t3393)*t941;
  p_output1[81]=t941;
  p_output1[82]=t1309;
  p_output1[83]=t1644;
  p_output1[84]=0. + 0.1303*t1119 - 0.135*t662;
  p_output1[85]=0. - 0.135*t1161 - 0.1303*t524;
  p_output1[86]=-0.08055 + (0. + t1161*t2345 + t3393)*t524 + t1119*(0. + t3435 - 1.*t2345*t662);
  p_output1[87]=t524;
  p_output1[88]=t1119;
  p_output1[89]=0.;
  p_output1[90]=0. - 1.*t1095*t2271 - 0.01004*t434 - 1.*t2317*t434 + 0.08055*t519;
  p_output1[91]=0. - 0.01004*t1095 + 0.08055*t434 + t2271*t434 + t2317*t519;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=0. - 0.08055*t323 - 1.*t2247*t323 - 0.13004*t363 - 1.*t2207*t363;
  p_output1[97]=0. - 0.13004*t323 - 1.*t2207*t323 + 0.08055*t363 + t2247*t363;
  p_output1[98]=0.;
  p_output1[99]=0.;
  p_output1[100]=0.;
  p_output1[101]=1.;
  p_output1[102]=-0.0011999999999999997;
  p_output1[103]=0.18339999999999998;
  p_output1[104]=0.;
  p_output1[105]=0.;
  p_output1[106]=0.;
  p_output1[107]=1.;
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



void Jb_RightShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
