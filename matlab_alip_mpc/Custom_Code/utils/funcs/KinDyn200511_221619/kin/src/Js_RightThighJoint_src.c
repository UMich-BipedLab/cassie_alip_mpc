/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:27 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_RightThighJoint_src.h"

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
  double t183;
  double t199;
  double t541;
  double t580;
  double t564;
  double t582;
  double t887;
  double t895;
  double t605;
  double t626;
  double t693;
  double t715;
  double t791;
  double t809;
  double t813;
  double t888;
  double t911;
  double t937;
  double t1012;
  double t1021;
  double t1035;
  double t1355;
  double t1327;
  double t1079;
  double t1111;
  double t1121;
  double t1462;
  double t1495;
  double t1137;
  double t1159;
  double t1166;
  double t1516;
  double t1534;
  double t1538;
  double t1551;
  double t1553;
  double t1558;
  double t1435;
  double t1440;
  double t1446;
  double t117;
  double t1943;
  double t1951;
  double t1958;
  double t1679;
  double t1683;
  double t1705;
  double t1332;
  double t1380;
  double t1388;
  double t1614;
  double t1619;
  double t2123;
  double t2136;
  double t1648;
  double t2149;
  double t2150;
  double t2036;
  double t2037;
  double t2046;
  double t1969;
  double t1982;
  double t1995;
  double t2156;
  double t2165;
  double t2167;
  double t1548;
  double t1571;
  double t2182;
  double t2195;
  double t2199;
  double t1934;
  double t1935;
  double t2250;
  double t2261;
  double t2263;
  double t1886;
  double t1900;
  double t2088;
  double t2089;
  double t2237;
  double t2239;
  double t2248;
  double t2427;
  double t2431;
  double t2439;
  double t2056;
  double t2067;
  double t2076;
  t183 = Cos(var1[3]);
  t199 = Sin(var1[3]);
  t541 = Cos(var1[4]);
  t580 = Sin(var1[4]);
  t564 = -1.*var1[2]*t541*t199;
  t582 = -1.*var1[1]*t580;
  t887 = Cos(var1[5]);
  t895 = Sin(var1[5]);
  t605 = var1[2]*t183*t541;
  t626 = var1[0]*t580;
  t693 = -1.*var1[1]*t183*t541;
  t715 = var1[0]*t541*t199;
  t791 = t183*t541;
  t809 = t541*t199;
  t813 = -1.*t580;
  t888 = t183*t887*t580;
  t911 = t199*t895;
  t937 = t888 + t911;
  t1012 = -1.*t887*t199;
  t1021 = t183*t580*t895;
  t1035 = t1012 + t1021;
  t1355 = Cos(var1[13]);
  t1327 = Sin(var1[13]);
  t1079 = t887*t199*t580;
  t1111 = -1.*t183*t895;
  t1121 = t1079 + t1111;
  t1462 = -1.*t1355;
  t1495 = 1. + t1462;
  t1137 = t183*t887;
  t1159 = t199*t580*t895;
  t1166 = t1137 + t1159;
  t1516 = 0.07996*t1495;
  t1534 = 0.135*t1327;
  t1538 = 0. + t1516 + t1534;
  t1551 = -0.135*t1495;
  t1553 = 0.07996*t1327;
  t1558 = 0. + t1551 + t1553;
  t1435 = t1355*t541*t887;
  t1440 = -1.*t541*t1327*t895;
  t1446 = t1435 + t1440;
  t117 = -1.*var1[0];
  t1943 = t1355*t937;
  t1951 = -1.*t1327*t1035;
  t1958 = t1943 + t1951;
  t1679 = t1355*t1121;
  t1683 = -1.*t1327*t1166;
  t1705 = t1679 + t1683;
  t1332 = t1327*t937;
  t1380 = t1355*t1035;
  t1388 = t1332 + t1380;
  t1614 = -1.*var1[2];
  t1619 = -1.*t541*t887*t1538;
  t2123 = Cos(var1[14]);
  t2136 = Sin(var1[14]);
  t1648 = -1.*t541*t1558*t895;
  t2149 = -1.*t2123;
  t2150 = 1. + t2149;
  t2036 = t541*t887*t1327;
  t2037 = t1355*t541*t895;
  t2046 = t2036 + t2037;
  t1969 = t1327*t1121;
  t1982 = t1355*t1166;
  t1995 = t1969 + t1982;
  t2156 = -0.08055*t2150;
  t2165 = -0.135*t2136;
  t2167 = 0. + t2156 + t2165;
  t1548 = t1538*t1121;
  t1571 = t1558*t1166;
  t2182 = -0.135*t2150;
  t2195 = 0.08055*t2136;
  t2199 = 0. + t2182 + t2195;
  t1934 = t541*t887*t1538;
  t1935 = t541*t1558*t895;
  t2250 = t2136*t580;
  t2261 = t2123*t2046;
  t2263 = t2250 + t2261;
  t1886 = -1.*t1538*t937;
  t1900 = -1.*t1558*t1035;
  t2088 = t1538*t937;
  t2089 = t1558*t1035;
  t2237 = -1.*t541*t2136*t199;
  t2239 = t2123*t1995;
  t2248 = t2237 + t2239;
  t2427 = -1.*t183*t541*t2136;
  t2431 = t2123*t1388;
  t2439 = t2427 + t2431;
  t2056 = -1.*var1[1];
  t2067 = -1.*t1538*t1121;
  t2076 = -1.*t1558*t1166;
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
  p_output1[19]=t117;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t183*var1[2];
  p_output1[25]=-1.*t199*var1[2];
  p_output1[26]=t183*var1[0] + t199*var1[1];
  p_output1[27]=-1.*t199;
  p_output1[28]=t183;
  p_output1[29]=0;
  p_output1[30]=t564 + t582;
  p_output1[31]=t605 + t626;
  p_output1[32]=t693 + t715;
  p_output1[33]=t791;
  p_output1[34]=t809;
  p_output1[35]=t813;
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
  p_output1[78]=0.07996*t1035 + t564 + t582 + 0.135*t937;
  p_output1[79]=0.135*t1121 + 0.07996*t1166 + t605 + t626;
  p_output1[80]=t693 + t715 + 0.135*t541*t887 + 0.07996*t541*t895;
  p_output1[81]=0. + t791;
  p_output1[82]=0. + t809;
  p_output1[83]=0. + t813;
  p_output1[84]=0.08055*t1388 + (0. + t1614 + t1619 + t1648)*t1705 - 0.135*t183*t541 + t1446*(0. + t1548 + t1571 + var1[1]);
  p_output1[85]=t1446*(0. + t117 + t1886 + t1900) + 0.08055*t1995 - 0.135*t199*t541 + t1958*(0. + t1934 + t1935 + var1[2]);
  p_output1[86]=0.08055*t2046 + t1958*(0. + t2056 + t2067 + t2076) + 0.135*t580 + t1705*(0. + t2088 + t2089 + var1[0]);
  p_output1[87]=0. + t1943 + t1951;
  p_output1[88]=0. + t1679 + t1683;
  p_output1[89]=0. + t1435 + t1440;
  p_output1[90]=0.08055*t1958 - 0.01004*(t1388*t2136 + t183*t2123*t541) - 1.*t2248*(0. + t1614 + t1619 + t1648 - 1.*t2046*t2199 + t2167*t580) - 1.*t2263*(0. + t1548 + t1571 + t1995*t2199 + t199*t2167*t541 + var1[1]);
  p_output1[91]=0.08055*t1705 - 0.01004*(t1995*t2136 + t199*t2123*t541) - 1.*t2263*(0. + t117 + t1886 + t1900 - 1.*t1388*t2199 - 1.*t183*t2167*t541) - 1.*t2439*(0. + t1934 + t1935 + t2046*t2199 - 1.*t2167*t580 + var1[2]);
  p_output1[92]=0.08055*t1446 - 1.*t2439*(0. + t2056 + t2067 + t2076 - 1.*t1995*t2199 - 1.*t199*t2167*t541) - 0.01004*(t2046*t2136 - 1.*t2123*t580) - 1.*t2248*(0. + t2088 + t2089 + t1388*t2199 + t183*t2167*t541 + var1[0]);
  p_output1[93]=0. - 1.*t1388*t2123 + t183*t2136*t541;
  p_output1[94]=0. - 1.*t1995*t2123 + t199*t2136*t541;
  p_output1[95]=0. - 1.*t2046*t2123 - 1.*t2136*t580;
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



void Js_RightThighJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
