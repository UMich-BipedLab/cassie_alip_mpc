/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_LeftThigh_src.h"

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
  double t162;
  double t205;
  double t346;
  double t365;
  double t362;
  double t380;
  double t608;
  double t641;
  double t424;
  double t450;
  double t495;
  double t519;
  double t531;
  double t587;
  double t599;
  double t804;
  double t824;
  double t851;
  double t927;
  double t930;
  double t942;
  double t1090;
  double t1105;
  double t1158;
  double t1199;
  double t681;
  double t693;
  double t696;
  double t625;
  double t660;
  double t671;
  double t1185;
  double t1201;
  double t1209;
  double t1243;
  double t1254;
  double t1256;
  double t95;
  double t1289;
  double t1301;
  double t1316;
  double t1676;
  double t1687;
  double t1696;
  double t1426;
  double t1431;
  double t1437;
  double t1383;
  double t1388;
  double t1397;
  double t1775;
  double t1780;
  double t1781;
  double t2012;
  double t2021;
  double t2023;
  double t2040;
  double t1588;
  double t1589;
  double t1595;
  double t1232;
  double t1259;
  double t2027;
  double t2041;
  double t2046;
  double t2052;
  double t2062;
  double t2077;
  double t1318;
  double t1329;
  double t1337;
  double t1617;
  double t1636;
  double t1490;
  double t1523;
  double t2155;
  double t2159;
  double t2164;
  double t1808;
  double t1813;
  double t1828;
  double t2276;
  double t2277;
  double t2279;
  double t1888;
  double t1907;
  double t2096;
  double t2132;
  double t2135;
  t162 = Cos(var1[3]);
  t205 = Sin(var1[3]);
  t346 = Cos(var1[4]);
  t365 = Sin(var1[4]);
  t362 = -1.*var1[2]*t346*t205;
  t380 = -1.*var1[1]*t365;
  t608 = Cos(var1[5]);
  t641 = Sin(var1[5]);
  t424 = var1[2]*t162*t346;
  t450 = var1[0]*t365;
  t495 = -1.*var1[1]*t162*t346;
  t519 = var1[0]*t346*t205;
  t531 = t162*t346;
  t587 = t346*t205;
  t599 = -1.*t365;
  t804 = t608*t205*t365;
  t824 = -1.*t162*t641;
  t851 = t804 + t824;
  t927 = t162*t608;
  t930 = t205*t365*t641;
  t942 = t927 + t930;
  t1090 = Cos(var1[6]);
  t1105 = -1.*t1090;
  t1158 = 1. + t1105;
  t1199 = Sin(var1[6]);
  t681 = -1.*t608*t205;
  t693 = t162*t365*t641;
  t696 = t681 + t693;
  t625 = t162*t608*t365;
  t660 = t205*t641;
  t671 = t625 + t660;
  t1185 = 0.07996*t1158;
  t1201 = -0.135*t1199;
  t1209 = 0. + t1185 + t1201;
  t1243 = 0.135*t1158;
  t1254 = 0.07996*t1199;
  t1256 = 0. + t1243 + t1254;
  t95 = -1.*var1[0];
  t1289 = t346*t608*t1090;
  t1301 = -1.*t346*t641*t1199;
  t1316 = t1289 + t1301;
  t1676 = t1090*t671;
  t1687 = -1.*t696*t1199;
  t1696 = t1676 + t1687;
  t1426 = t1090*t851;
  t1431 = -1.*t942*t1199;
  t1437 = t1426 + t1431;
  t1383 = -1.*var1[2];
  t1388 = -1.*t346*t608*t1209;
  t1397 = -1.*t346*t641*t1256;
  t1775 = t346*t1090*t641;
  t1780 = t346*t608*t1199;
  t1781 = t1775 + t1780;
  t2012 = Cos(var1[7]);
  t2021 = -1.*t2012;
  t2023 = 1. + t2021;
  t2040 = Sin(var1[7]);
  t1588 = t1090*t942;
  t1589 = t851*t1199;
  t1595 = t1588 + t1589;
  t1232 = t851*t1209;
  t1259 = t942*t1256;
  t2027 = 0.135*t2023;
  t2041 = 0.08055*t2040;
  t2046 = 0. + t2027 + t2041;
  t2052 = -0.08055*t2023;
  t2062 = 0.135*t2040;
  t2077 = 0. + t2052 + t2062;
  t1318 = t1090*t696;
  t1329 = t671*t1199;
  t1337 = t1318 + t1329;
  t1617 = t346*t608*t1209;
  t1636 = t346*t641*t1256;
  t1490 = -1.*t671*t1209;
  t1523 = -1.*t696*t1256;
  t2155 = t2012*t1781;
  t2159 = t365*t2040;
  t2164 = t2155 + t2159;
  t1808 = -1.*var1[1];
  t1813 = -1.*t851*t1209;
  t1828 = -1.*t942*t1256;
  t2276 = t2012*t1337;
  t2277 = -1.*t162*t346*t2040;
  t2279 = t2276 + t2277;
  t1888 = t671*t1209;
  t1907 = t696*t1256;
  t2096 = t2012*t1595;
  t2132 = -1.*t346*t205*t2040;
  t2135 = t2096 + t2132;
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
  p_output1[19]=t95;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t162*var1[2];
  p_output1[25]=-1.*t205*var1[2];
  p_output1[26]=t162*var1[0] + t205*var1[1];
  p_output1[27]=-1.*t205;
  p_output1[28]=t162;
  p_output1[29]=0;
  p_output1[30]=t362 + t380;
  p_output1[31]=t424 + t450;
  p_output1[32]=t495 + t519;
  p_output1[33]=t531;
  p_output1[34]=t587;
  p_output1[35]=t599;
  p_output1[36]=t362 + t380 - 0.135*t671 + 0.07996*t696;
  p_output1[37]=t424 + t450 - 0.135*t851 + 0.07996*t942;
  p_output1[38]=t495 + t519 - 0.135*t346*t608 + 0.07996*t346*t641;
  p_output1[39]=0. + t531;
  p_output1[40]=0. + t587;
  p_output1[41]=0. + t599;
  p_output1[42]=0.08055*t1337 + (0. + t1383 + t1388 + t1397)*t1437 + 0.135*t162*t346 + t1316*(0. + t1232 + t1259 + var1[1]);
  p_output1[43]=0.08055*t1595 + 0.135*t205*t346 + t1316*(0. + t1490 + t1523 + t95) + t1696*(0. + t1617 + t1636 + var1[2]);
  p_output1[44]=0.08055*t1781 + t1696*(0. + t1808 + t1813 + t1828) - 0.135*t365 + t1437*(0. + t1888 + t1907 + var1[0]);
  p_output1[45]=0. + t1676 + t1687;
  p_output1[46]=0. + t1426 + t1431;
  p_output1[47]=0. + t1289 + t1301;
  p_output1[48]=0.08055*t1696 - 0.01004*(t1337*t2040 + t162*t2012*t346) - 1.*t2135*(0. + t1383 + t1388 + t1397 - 1.*t1781*t2046 + t2077*t365) - 1.*t2164*(0. + t1232 + t1259 + t1595*t2046 + t205*t2077*t346 + var1[1]);
  p_output1[49]=0.08055*t1437 - 0.01004*(t1595*t2040 + t2012*t205*t346) - 1.*t2164*(0. + t1490 + t1523 - 1.*t1337*t2046 - 1.*t162*t2077*t346 + t95) - 1.*t2279*(0. + t1617 + t1636 + t1781*t2046 - 1.*t2077*t365 + var1[2]);
  p_output1[50]=0.08055*t1316 - 1.*t2279*(0. + t1808 + t1813 + t1828 - 1.*t1595*t2046 - 1.*t205*t2077*t346) - 0.01004*(t1781*t2040 - 1.*t2012*t365) - 1.*t2135*(0. + t1888 + t1907 + t1337*t2046 + t162*t2077*t346 + var1[0]);
  p_output1[51]=0. - 1.*t1337*t2012 + t162*t2040*t346;
  p_output1[52]=0. - 1.*t1595*t2012 + t2040*t205*t346;
  p_output1[53]=0. - 1.*t1781*t2012 - 1.*t2040*t365;
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



void Js_LeftThigh_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
