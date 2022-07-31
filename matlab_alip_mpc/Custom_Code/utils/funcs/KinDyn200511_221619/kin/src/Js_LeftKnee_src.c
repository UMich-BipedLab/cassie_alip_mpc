/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_LeftKnee_src.h"

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
  double t209;
  double t233;
  double t349;
  double t358;
  double t351;
  double t369;
  double t701;
  double t720;
  double t433;
  double t471;
  double t505;
  double t515;
  double t650;
  double t683;
  double t684;
  double t817;
  double t894;
  double t918;
  double t974;
  double t980;
  double t1018;
  double t1209;
  double t1219;
  double t1273;
  double t1297;
  double t786;
  double t797;
  double t799;
  double t718;
  double t768;
  double t775;
  double t1294;
  double t1338;
  double t1353;
  double t1379;
  double t1386;
  double t1397;
  double t108;
  double t1459;
  double t1469;
  double t1495;
  double t1830;
  double t1834;
  double t1846;
  double t1663;
  double t1665;
  double t1666;
  double t1611;
  double t1615;
  double t1627;
  double t1874;
  double t1894;
  double t1907;
  double t2096;
  double t2103;
  double t2105;
  double t2123;
  double t1755;
  double t1758;
  double t1772;
  double t1364;
  double t1442;
  double t2115;
  double t2127;
  double t2139;
  double t2181;
  double t2200;
  double t2211;
  double t1516;
  double t1604;
  double t1606;
  double t1806;
  double t1810;
  double t1712;
  double t1737;
  double t2436;
  double t2437;
  double t2442;
  double t1928;
  double t1989;
  double t1992;
  double t2532;
  double t2541;
  double t2550;
  double t2028;
  double t2033;
  double t2261;
  double t2317;
  double t2329;
  double t2180;
  double t2233;
  double t2697;
  double t2733;
  double t2760;
  double t2938;
  double t2953;
  double t2975;
  double t2995;
  double t2377;
  double t2383;
  double t2583;
  double t2595;
  double t2596;
  double t2982;
  double t3003;
  double t3004;
  double t3028;
  double t3060;
  double t3064;
  double t2450;
  double t2456;
  double t2460;
  double t2505;
  double t2507;
  double t2566;
  double t2576;
  double t2680;
  double t2681;
  double t2642;
  double t2645;
  double t2830;
  double t2837;
  double t2880;
  double t2885;
  double t2890;
  double t2900;
  double t2905;
  double t2912;
  double t2931;
  t209 = Cos(var1[3]);
  t233 = Sin(var1[3]);
  t349 = Cos(var1[4]);
  t358 = Sin(var1[4]);
  t351 = -1.*var1[2]*t349*t233;
  t369 = -1.*var1[1]*t358;
  t701 = Cos(var1[5]);
  t720 = Sin(var1[5]);
  t433 = var1[2]*t209*t349;
  t471 = var1[0]*t358;
  t505 = -1.*var1[1]*t209*t349;
  t515 = var1[0]*t349*t233;
  t650 = t209*t349;
  t683 = t349*t233;
  t684 = -1.*t358;
  t817 = t701*t233*t358;
  t894 = -1.*t209*t720;
  t918 = t817 + t894;
  t974 = t209*t701;
  t980 = t233*t358*t720;
  t1018 = t974 + t980;
  t1209 = Cos(var1[6]);
  t1219 = -1.*t1209;
  t1273 = 1. + t1219;
  t1297 = Sin(var1[6]);
  t786 = -1.*t701*t233;
  t797 = t209*t358*t720;
  t799 = t786 + t797;
  t718 = t209*t701*t358;
  t768 = t233*t720;
  t775 = t718 + t768;
  t1294 = 0.07996*t1273;
  t1338 = -0.135*t1297;
  t1353 = 0. + t1294 + t1338;
  t1379 = 0.135*t1273;
  t1386 = 0.07996*t1297;
  t1397 = 0. + t1379 + t1386;
  t108 = -1.*var1[0];
  t1459 = t349*t701*t1209;
  t1469 = -1.*t349*t720*t1297;
  t1495 = t1459 + t1469;
  t1830 = t1209*t775;
  t1834 = -1.*t799*t1297;
  t1846 = t1830 + t1834;
  t1663 = t1209*t918;
  t1665 = -1.*t1018*t1297;
  t1666 = t1663 + t1665;
  t1611 = -1.*var1[2];
  t1615 = -1.*t349*t701*t1353;
  t1627 = -1.*t349*t720*t1397;
  t1874 = t349*t1209*t720;
  t1894 = t349*t701*t1297;
  t1907 = t1874 + t1894;
  t2096 = Cos(var1[7]);
  t2103 = -1.*t2096;
  t2105 = 1. + t2103;
  t2123 = Sin(var1[7]);
  t1755 = t1209*t1018;
  t1758 = t918*t1297;
  t1772 = t1755 + t1758;
  t1364 = t918*t1353;
  t1442 = t1018*t1397;
  t2115 = 0.135*t2105;
  t2127 = 0.08055*t2123;
  t2139 = 0. + t2115 + t2127;
  t2181 = -0.08055*t2105;
  t2200 = 0.135*t2123;
  t2211 = 0. + t2181 + t2200;
  t1516 = t1209*t799;
  t1604 = t775*t1297;
  t1606 = t1516 + t1604;
  t1806 = t349*t701*t1353;
  t1810 = t349*t720*t1397;
  t1712 = -1.*t775*t1353;
  t1737 = -1.*t799*t1397;
  t2436 = t2096*t1907;
  t2437 = t358*t2123;
  t2442 = t2436 + t2437;
  t1928 = -1.*var1[1];
  t1989 = -1.*t918*t1353;
  t1992 = -1.*t1018*t1397;
  t2532 = t2096*t1606;
  t2541 = -1.*t209*t349*t2123;
  t2550 = t2532 + t2541;
  t2028 = t775*t1353;
  t2033 = t799*t1397;
  t2261 = t2096*t1772;
  t2317 = -1.*t349*t233*t2123;
  t2329 = t2261 + t2317;
  t2180 = -1.*t1907*t2139;
  t2233 = t358*t2211;
  t2697 = -1.*t2096*t358;
  t2733 = t1907*t2123;
  t2760 = t2697 + t2733;
  t2938 = Cos(var1[8]);
  t2953 = -1.*t2938;
  t2975 = 1. + t2953;
  t2995 = Sin(var1[8]);
  t2377 = t1772*t2139;
  t2383 = t349*t233*t2211;
  t2583 = t349*t2096*t233;
  t2595 = t1772*t2123;
  t2596 = t2583 + t2595;
  t2982 = -0.08055*t2975;
  t3003 = -0.01004*t2995;
  t3004 = 0. + t2982 + t3003;
  t3028 = -0.01004*t2975;
  t3060 = 0.08055*t2995;
  t3064 = 0. + t3028 + t3060;
  t2450 = t209*t349*t2096;
  t2456 = t1606*t2123;
  t2460 = t2450 + t2456;
  t2505 = t1907*t2139;
  t2507 = -1.*t358*t2211;
  t2566 = -1.*t1606*t2139;
  t2576 = -1.*t209*t349*t2211;
  t2680 = t1606*t2139;
  t2681 = t209*t349*t2211;
  t2642 = -1.*t1772*t2139;
  t2645 = -1.*t349*t233*t2211;
  t2830 = -1.*t2096*t1606;
  t2837 = t209*t349*t2123;
  t2880 = 0. + t2830 + t2837;
  t2885 = -1.*t2096*t1772;
  t2890 = t349*t233*t2123;
  t2900 = 0. + t2885 + t2890;
  t2905 = -1.*t2096*t1907;
  t2912 = -1.*t358*t2123;
  t2931 = 0. + t2905 + t2912;
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
  p_output1[19]=t108;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t209*var1[2];
  p_output1[25]=-1.*t233*var1[2];
  p_output1[26]=t209*var1[0] + t233*var1[1];
  p_output1[27]=-1.*t233;
  p_output1[28]=t209;
  p_output1[29]=0;
  p_output1[30]=t351 + t369;
  p_output1[31]=t433 + t471;
  p_output1[32]=t505 + t515;
  p_output1[33]=t650;
  p_output1[34]=t683;
  p_output1[35]=t684;
  p_output1[36]=t351 + t369 - 0.135*t775 + 0.07996*t799;
  p_output1[37]=0.07996*t1018 + t433 + t471 - 0.135*t918;
  p_output1[38]=t505 + t515 - 0.135*t349*t701 + 0.07996*t349*t720;
  p_output1[39]=0. + t650;
  p_output1[40]=0. + t683;
  p_output1[41]=0. + t684;
  p_output1[42]=0.08055*t1606 + (0. + t1611 + t1615 + t1627)*t1666 + 0.135*t209*t349 + t1495*(0. + t1364 + t1442 + var1[1]);
  p_output1[43]=t1495*(0. + t108 + t1712 + t1737) + 0.08055*t1772 + 0.135*t233*t349 + t1846*(0. + t1806 + t1810 + var1[2]);
  p_output1[44]=0.08055*t1907 + t1846*(0. + t1928 + t1989 + t1992) - 0.135*t358 + t1666*(0. + t2028 + t2033 + var1[0]);
  p_output1[45]=0. + t1830 + t1834;
  p_output1[46]=0. + t1663 + t1665;
  p_output1[47]=0. + t1459 + t1469;
  p_output1[48]=0.08055*t1846 - 1.*(0. + t1611 + t1615 + t1627 + t2180 + t2233)*t2329 - 0.01004*t2460 - 1.*t2442*(0. + t1364 + t1442 + t2377 + t2383 + var1[1]);
  p_output1[49]=0.08055*t1666 - 1.*t2442*(0. + t108 + t1712 + t1737 + t2566 + t2576) - 0.01004*t2596 - 1.*t2550*(0. + t1806 + t1810 + t2505 + t2507 + var1[2]);
  p_output1[50]=0.08055*t1495 - 1.*t2550*(0. + t1928 + t1989 + t1992 + t2642 + t2645) - 0.01004*t2760 - 1.*t2329*(0. + t2028 + t2033 + t2680 + t2681 + var1[0]);
  p_output1[51]=t2880;
  p_output1[52]=t2900;
  p_output1[53]=t2931;
  p_output1[54]=-0.13004*(t2460*t2938 + t1846*t2995) + 0.08055*(t1846*t2938 - 1.*t2460*t2995) - 1.*t2329*(0. + t1611 + t1615 + t1627 + t2180 + t2233 - 1.*t2760*t3004 - 1.*t1495*t3064) - 1.*t2442*(0. + t1364 + t1442 + t2377 + t2383 + t2596*t3004 + t1666*t3064 + var1[1]);
  p_output1[55]=-0.13004*(t2596*t2938 + t1666*t2995) + 0.08055*(t1666*t2938 - 1.*t2596*t2995) - 1.*t2442*(0. + t108 + t1712 + t1737 + t2566 + t2576 - 1.*t2460*t3004 - 1.*t1846*t3064) - 1.*t2550*(0. + t1806 + t1810 + t2505 + t2507 + t2760*t3004 + t1495*t3064 + var1[2]);
  p_output1[56]=-0.13004*(t2760*t2938 + t1495*t2995) + 0.08055*(t1495*t2938 - 1.*t2760*t2995) - 1.*t2550*(0. + t1928 + t1989 + t1992 + t2642 + t2645 - 1.*t2596*t3004 - 1.*t1666*t3064) - 1.*t2329*(0. + t2028 + t2033 + t2680 + t2681 + t2460*t3004 + t1846*t3064 + var1[0]);
  p_output1[57]=t2880;
  p_output1[58]=t2900;
  p_output1[59]=t2931;
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



void Js_LeftKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
