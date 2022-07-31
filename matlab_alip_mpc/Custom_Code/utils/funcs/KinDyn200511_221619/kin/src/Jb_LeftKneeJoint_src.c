/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftKneeJoint_src.h"

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
  double t228;
  double t323;
  double t225;
  double t360;
  double t426;
  double t272;
  double t363;
  double t398;
  double t99;
  double t445;
  double t514;
  double t519;
  double t557;
  double t622;
  double t648;
  double t821;
  double t423;
  double t699;
  double t720;
  double t94;
  double t831;
  double t860;
  double t903;
  double t41;
  double t1234;
  double t1245;
  double t1247;
  double t1257;
  double t1280;
  double t965;
  double t975;
  double t976;
  double t1091;
  double t1217;
  double t1294;
  double t1299;
  double t1318;
  double t1326;
  double t1347;
  double t1506;
  double t1511;
  double t1524;
  double t1530;
  double t1570;
  double t1598;
  double t788;
  double t910;
  double t924;
  double t1073;
  double t1074;
  double t1090;
  double t1092;
  double t1107;
  double t1184;
  double t1193;
  double t1195;
  double t1311;
  double t1350;
  double t1366;
  double t1385;
  double t1388;
  double t1404;
  double t1409;
  double t1415;
  double t1439;
  double t1443;
  double t1457;
  double t1567;
  double t1607;
  double t1613;
  double t1648;
  double t1675;
  double t1715;
  double t1727;
  double t1728;
  double t1732;
  double t1746;
  double t1968;
  double t1974;
  double t1994;
  double t2216;
  double t2227;
  double t2137;
  double t2203;
  double t2288;
  double t2344;
  double t2375;
  double t2228;
  double t2231;
  double t2252;
  double t2101;
  double t2102;
  double t2204;
  double t2263;
  double t2287;
  double t2383;
  double t2399;
  double t2421;
  double t2430;
  double t2439;
  double t2470;
  double t2509;
  double t2516;
  double t2534;
  double t2535;
  double t2543;
  double t2548;
  double t2560;
  double t2574;
  double t2002;
  double t2008;
  double t2019;
  double t2118;
  double t2132;
  double t2413;
  double t2577;
  double t2580;
  double t2594;
  double t2603;
  double t2625;
  double t2635;
  double t2658;
  double t2699;
  double t2704;
  double t2706;
  double t2709;
  double t2745;
  double t2750;
  double t2778;
  double t2582;
  double t2669;
  double t2675;
  double t2740;
  double t2791;
  double t2807;
  double t2826;
  double t2833;
  double t2834;
  double t1923;
  double t1927;
  double t1928;
  double t2691;
  double t2842;
  double t2878;
  double t2937;
  double t3019;
  double t3096;
  double t3167;
  double t3182;
  double t3262;
  double t3298;
  double t3376;
  double t3417;
  double t3844;
  double t3821;
  t228 = Cos(var1[8]);
  t323 = Sin(var1[9]);
  t225 = Cos(var1[9]);
  t360 = Sin(var1[8]);
  t426 = Cos(var1[6]);
  t272 = -1.*t225*t228;
  t363 = t323*t360;
  t398 = 0. + t272 + t363;
  t99 = Sin(var1[6]);
  t445 = Sin(var1[7]);
  t514 = t228*t323;
  t519 = t225*t360;
  t557 = 0. + t514 + t519;
  t622 = t445*t557;
  t648 = 0. + t622;
  t821 = Sin(var1[5]);
  t423 = -1.*t99*t398;
  t699 = t426*t648;
  t720 = 0. + t423 + t699;
  t94 = Cos(var1[5]);
  t831 = t426*t398;
  t860 = t99*t648;
  t903 = 0. + t831 + t860;
  t41 = Sin(var1[3]);
  t1234 = t225*t228;
  t1245 = -1.*t323*t360;
  t1247 = 0. + t1234 + t1245;
  t1257 = t445*t1247;
  t1280 = 0. + t1257;
  t965 = Cos(var1[3]);
  t975 = Cos(var1[4]);
  t976 = Cos(var1[7]);
  t1091 = Sin(var1[4]);
  t1217 = -1.*t99*t557;
  t1294 = t426*t1280;
  t1299 = 0. + t1217 + t1294;
  t1318 = t426*t557;
  t1326 = t99*t1280;
  t1347 = 0. + t1318 + t1326;
  t1506 = -1.*t976;
  t1511 = 0. + t1506;
  t1524 = t426*t1511;
  t1530 = 0. + t1524;
  t1570 = t1511*t99;
  t1598 = 0. + t1570;
  t788 = t94*t720;
  t910 = -1.*t821*t903;
  t924 = 0. + t788 + t910;
  t1073 = t976*t557;
  t1074 = 0. + t1073;
  t1090 = t975*t1074;
  t1092 = t821*t720;
  t1107 = t94*t903;
  t1184 = 0. + t1092 + t1107;
  t1193 = t1091*t1184;
  t1195 = 0. + t1090 + t1193;
  t1311 = t94*t1299;
  t1350 = -1.*t821*t1347;
  t1366 = 0. + t1311 + t1350;
  t1385 = t976*t1247;
  t1388 = 0. + t1385;
  t1404 = t975*t1388;
  t1409 = t821*t1299;
  t1415 = t94*t1347;
  t1439 = 0. + t1409 + t1415;
  t1443 = t1091*t1439;
  t1457 = 0. + t1404 + t1443;
  t1567 = t94*t1530;
  t1607 = -1.*t821*t1598;
  t1613 = 0. + t1567 + t1607;
  t1648 = t1530*t821;
  t1675 = t94*t1598;
  t1715 = 0. + t1648 + t1675;
  t1727 = t1091*t1715;
  t1728 = 0. + t445;
  t1732 = t975*t1728;
  t1746 = 0. + t1727 + t1732;
  t1968 = -1.*t1091*t1388;
  t1974 = t975*t1439;
  t1994 = 0. + t1968 + t1974;
  t2216 = -1.*t225;
  t2227 = 1. + t2216;
  t2137 = -1.*t228;
  t2203 = 1. + t2137;
  t2288 = -0.08055*t2227;
  t2344 = -0.08055*t225;
  t2375 = 0. + t2288 + t2344;
  t2228 = -0.13004*t2227;
  t2231 = -0.13004*t225;
  t2252 = 0. + t2228 + t2231;
  t2101 = -1.*t426;
  t2102 = 1. + t2101;
  t2204 = -0.01004*t2203;
  t2263 = t2252*t228;
  t2287 = 0.08055*t360;
  t2383 = t2375*t360;
  t2399 = 0. + t2204 + t2263 + t2287 + t2383;
  t2421 = -1.*t976;
  t2430 = 1. + t2421;
  t2439 = 0.135*t2430;
  t2470 = 0.1305*t976;
  t2509 = 0.08055*t445;
  t2516 = -0.08055*t2203;
  t2534 = t2375*t228;
  t2535 = -0.01004*t360;
  t2543 = -1.*t2252*t360;
  t2548 = 0. + t2516 + t2534 + t2535 + t2543;
  t2560 = t445*t2548;
  t2574 = 0. + t2439 + t2470 + t2509 + t2560;
  t2002 = t975*t1715;
  t2008 = -1.*t1091*t1728;
  t2019 = 0. + t2002 + t2008;
  t2118 = 0.135*t2102;
  t2132 = 0.07996*t99;
  t2413 = -1.*t99*t2399;
  t2577 = t426*t2574;
  t2580 = 0. + t2118 + t2132 + t2413 + t2577;
  t2594 = 0.07996*t2102;
  t2603 = -0.135*t99;
  t2625 = t426*t2399;
  t2635 = t99*t2574;
  t2658 = 0. + t2594 + t2603 + t2625 + t2635;
  t2699 = -0.08055*t2430;
  t2704 = 0.004500000000000004*t445;
  t2706 = t976*t2548;
  t2709 = 0. + t2699 + t2704 + t2706;
  t2745 = t821*t2580;
  t2750 = t94*t2658;
  t2778 = 0. + t2745 + t2750;
  t2582 = t94*t2580;
  t2669 = -1.*t821*t2658;
  t2675 = 0. + t2582 + t2669;
  t2740 = -1.*t1091*t2709;
  t2791 = t975*t2778;
  t2807 = 0. + t2740 + t2791;
  t2826 = t975*t2709;
  t2833 = t1091*t2778;
  t2834 = 0. + t2826 + t2833;
  t1923 = -1.*t1091*t1074;
  t1927 = t975*t1184;
  t1928 = 0. + t1923 + t1927;
  t2691 = t1613*t2675;
  t2842 = -1.*t2675*t1366;
  t2878 = -1.*t1613*t2675;
  t2937 = t2675*t924;
  t3019 = -1.*t2675*t924;
  t3096 = t2675*t1366;
  t3167 = t1728*t2709;
  t3182 = -1.*t2709*t1388;
  t3262 = -1.*t1728*t2709;
  t3298 = t2709*t1074;
  t3376 = -1.*t2709*t1074;
  t3417 = t2709*t1388;
  t3844 = t2399*t557;
  t3821 = -1.*t2399*t398;
  p_output1[0]=0. - 1.*t41*t924 + t1195*t965;
  p_output1[1]=0. - 1.*t1366*t41 + t1457*t965;
  p_output1[2]=0. - 1.*t1613*t41 + t1746*t965;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1195*t41 + t924*t965;
  p_output1[7]=0. + t1457*t41 + t1366*t965;
  p_output1[8]=0. + t1746*t41 + t1613*t965;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1928;
  p_output1[13]=t1994;
  p_output1[14]=t2019;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1994*(t2691 + t2019*t2807 + t1746*t2834) + t2019*(-1.*t1994*t2807 - 1.*t1457*t2834 + t2842);
  p_output1[19]=t1928*(-1.*t2019*t2807 - 1.*t1746*t2834 + t2878) + t2019*(t1928*t2807 + t1195*t2834 + t2937);
  p_output1[20]=t1994*(-1.*t1928*t2807 - 1.*t1195*t2834 + t3019) + t1928*(t1994*t2807 + t1457*t2834 + t3096);
  p_output1[21]=t1928;
  p_output1[22]=t1994;
  p_output1[23]=t2019;
  p_output1[24]=t1366*(t2691 + t1715*t2778 + t3167) + t1613*(-1.*t1439*t2778 + t2842 + t3182);
  p_output1[25]=t1613*(t1184*t2778 + t2937 + t3298) + (-1.*t1715*t2778 + t2878 + t3262)*t924;
  p_output1[26]=t1366*(-1.*t1184*t2778 + t3019 + t3376) + (t1439*t2778 + t3096 + t3417)*t924;
  p_output1[27]=t924;
  p_output1[28]=t1366;
  p_output1[29]=t1613;
  p_output1[30]=t1388*(t1530*t2580 + t1598*t2658 + t3167) + t1728*(-1.*t1299*t2580 - 1.*t1347*t2658 + t3182);
  p_output1[31]=t1074*(-1.*t1530*t2580 - 1.*t1598*t2658 + t3262) + t1728*(t3298 + t2580*t720 + t2658*t903);
  p_output1[32]=t1074*(t1299*t2580 + t1347*t2658 + t3417) + t1388*(t3376 - 1.*t2580*t720 - 1.*t2658*t903);
  p_output1[33]=t1074;
  p_output1[34]=t1388;
  p_output1[35]=t1728;
  p_output1[36]=t1388*(0. + t1511*t2574 + t3167) - 0.135*t398 + t1728*(-1.*t1280*t2574 + t3182 - 1.*t2399*t557) + 0.07996*t648;
  p_output1[37]=0.07996*t1280 + t1074*(0. - 1.*t1511*t2574 + t3262) - 0.135*t557 + t1728*(t3298 + t2399*t398 + t2574*t648);
  p_output1[38]=0. + 0.07996*t1511 + t1074*(t1280*t2574 + t3417 + t3844) + t1388*(t3376 + t3821 - 1.*t2574*t648);
  p_output1[39]=t1074;
  p_output1[40]=t1388;
  p_output1[41]=t1728;
  p_output1[42]=0. + 0.004500000000000004*t557;
  p_output1[43]=0. + 0.135*t1247 + 0.1305*t398;
  p_output1[44]=-0.08055 + (0. + t1247*t2548 + t3844)*t398 + t557*(0. + t3821 - 1.*t2548*t557);
  p_output1[45]=t398;
  p_output1[46]=t557;
  p_output1[47]=0.;
  p_output1[48]=0. + t2344 - 1.*t225*t2375 - 0.01004*t323 - 1.*t2252*t323;
  p_output1[49]=0. - 0.01004*t225 - 1.*t225*t2252 + 0.08055*t323 + t2375*t323;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=0.;
  p_output1[55]=0.;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0.;
  p_output1[59]=1.;
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



void Jb_LeftKneeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
