/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:24 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightThighJoint_src.h"

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
  double t639;
  double t512;
  double t598;
  double t599;
  double t604;
  double t778;
  double t781;
  double t847;
  double t850;
  double t486;
  double t943;
  double t957;
  double t976;
  double t619;
  double t877;
  double t907;
  double t982;
  double t166;
  double t1322;
  double t1387;
  double t1398;
  double t1063;
  double t1114;
  double t1070;
  double t1197;
  double t1432;
  double t1435;
  double t1449;
  double t1391;
  double t1401;
  double t1405;
  double t1679;
  double t1696;
  double t1546;
  double t1564;
  double t931;
  double t989;
  double t994;
  double t1147;
  double t1153;
  double t1188;
  double t1200;
  double t1232;
  double t1250;
  double t1257;
  double t1284;
  double t1410;
  double t1475;
  double t1477;
  double t1490;
  double t1494;
  double t1498;
  double t1499;
  double t1503;
  double t1504;
  double t1513;
  double t1531;
  double t1607;
  double t1699;
  double t1732;
  double t1784;
  double t1785;
  double t1786;
  double t1795;
  double t1798;
  double t1805;
  double t1829;
  double t2227;
  double t2246;
  double t2306;
  double t2629;
  double t2420;
  double t2489;
  double t2641;
  double t2808;
  double t2860;
  double t2912;
  double t2913;
  double t2924;
  double t2944;
  double t2954;
  double t2960;
  double t2974;
  double t3056;
  double t3057;
  double t3063;
  double t2385;
  double t2407;
  double t2415;
  double t3103;
  double t3105;
  double t3107;
  double t3121;
  double t3134;
  double t2503;
  double t2574;
  double t2905;
  double t3083;
  double t3085;
  double t3153;
  double t3158;
  double t3162;
  double t3189;
  double t3195;
  double t3199;
  double t3091;
  double t3139;
  double t3142;
  double t3177;
  double t3237;
  double t3242;
  double t3256;
  double t3269;
  double t3275;
  double t2140;
  double t2170;
  double t2224;
  double t3143;
  double t3320;
  double t3378;
  double t3410;
  double t3465;
  double t3521;
  double t3570;
  double t3578;
  double t3605;
  double t3625;
  double t3645;
  double t3655;
  t639 = Cos(var1[13]);
  t512 = Cos(var1[15]);
  t598 = -1.*t512;
  t599 = 0. + t598;
  t604 = Sin(var1[13]);
  t778 = Sin(var1[14]);
  t781 = Sin(var1[15]);
  t847 = t778*t781;
  t850 = 0. + t847;
  t486 = Cos(var1[5]);
  t943 = t639*t599;
  t957 = t604*t850;
  t976 = 0. + t943 + t957;
  t619 = -1.*t599*t604;
  t877 = t639*t850;
  t907 = 0. + t619 + t877;
  t982 = Sin(var1[5]);
  t166 = Sin(var1[3]);
  t1322 = t512*t778;
  t1387 = 0. + t1322;
  t1398 = 0. + t781;
  t1063 = Cos(var1[3]);
  t1114 = Cos(var1[14]);
  t1070 = Cos(var1[4]);
  t1197 = Sin(var1[4]);
  t1432 = t604*t1387;
  t1435 = t639*t1398;
  t1449 = 0. + t1432 + t1435;
  t1391 = t639*t1387;
  t1401 = -1.*t604*t1398;
  t1405 = 0. + t1391 + t1401;
  t1679 = -1.*t1114*t604;
  t1696 = 0. + t1679;
  t1546 = -1.*t639*t1114;
  t1564 = 0. + t1546;
  t931 = t486*t907;
  t989 = -1.*t976*t982;
  t994 = 0. + t931 + t989;
  t1147 = t1114*t781;
  t1153 = 0. + t1147;
  t1188 = t1070*t1153;
  t1200 = t486*t976;
  t1232 = t907*t982;
  t1250 = 0. + t1200 + t1232;
  t1257 = t1197*t1250;
  t1284 = 0. + t1188 + t1257;
  t1410 = t486*t1405;
  t1475 = -1.*t1449*t982;
  t1477 = 0. + t1410 + t1475;
  t1490 = t1114*t512;
  t1494 = 0. + t1490;
  t1498 = t1494*t1070;
  t1499 = t486*t1449;
  t1503 = t1405*t982;
  t1504 = 0. + t1499 + t1503;
  t1513 = t1197*t1504;
  t1531 = 0. + t1498 + t1513;
  t1607 = t1564*t486;
  t1699 = -1.*t1696*t982;
  t1732 = 0. + t1607 + t1699;
  t1784 = 0. + t778;
  t1785 = t1070*t1784;
  t1786 = t486*t1696;
  t1795 = t1564*t982;
  t1798 = 0. + t1786 + t1795;
  t1805 = t1197*t1798;
  t1829 = 0. + t1785 + t1805;
  t2227 = -1.*t1494*t1197;
  t2246 = t1070*t1504;
  t2306 = 0. + t2227 + t2246;
  t2629 = 1. + t598;
  t2420 = -1.*t639;
  t2489 = 1. + t2420;
  t2641 = -0.01004*t2629;
  t2808 = -0.01004*t512;
  t2860 = 0. + t2641 + t2808;
  t2912 = -1.*t1114;
  t2913 = 1. + t2912;
  t2924 = -0.135*t2913;
  t2944 = -0.135*t1114;
  t2954 = 0.08055*t778;
  t2960 = -0.08055*t2629;
  t2974 = -0.08055*t512;
  t3056 = 0. + t2960 + t2974;
  t3057 = t3056*t778;
  t3063 = 0. + t2924 + t2944 + t2954 + t3057;
  t2385 = -1.*t1784*t1197;
  t2407 = t1070*t1798;
  t2415 = 0. + t2385 + t2407;
  t3103 = 0.07996*t2489;
  t3105 = t639*t2860;
  t3107 = 0.135*t604;
  t3121 = t604*t3063;
  t3134 = 0. + t3103 + t3105 + t3107 + t3121;
  t2503 = -0.135*t2489;
  t2574 = 0.07996*t604;
  t2905 = -1.*t2860*t604;
  t3083 = t639*t3063;
  t3085 = 0. + t2503 + t2574 + t2905 + t3083;
  t3153 = -0.08055*t2913;
  t3158 = t1114*t3056;
  t3162 = 0. + t3153 + t3158;
  t3189 = t486*t3134;
  t3195 = t3085*t982;
  t3199 = 0. + t3189 + t3195;
  t3091 = t486*t3085;
  t3139 = -1.*t3134*t982;
  t3142 = 0. + t3091 + t3139;
  t3177 = -1.*t3162*t1197;
  t3237 = t1070*t3199;
  t3242 = 0. + t3177 + t3237;
  t3256 = t3162*t1070;
  t3269 = t1197*t3199;
  t3275 = 0. + t3256 + t3269;
  t2140 = -1.*t1153*t1197;
  t2170 = t1070*t1250;
  t2224 = 0. + t2140 + t2170;
  t3143 = t1732*t3142;
  t3320 = -1.*t3142*t1477;
  t3378 = -1.*t1732*t3142;
  t3410 = t3142*t994;
  t3465 = t3142*t1477;
  t3521 = -1.*t3142*t994;
  t3570 = t3162*t1784;
  t3578 = -1.*t3162*t1494;
  t3605 = -1.*t3162*t1784;
  t3625 = t3162*t1153;
  t3645 = t3162*t1494;
  t3655 = -1.*t3162*t1153;
  p_output1[0]=0. + t1063*t1284 - 1.*t166*t994;
  p_output1[1]=0. + t1063*t1531 - 1.*t1477*t166;
  p_output1[2]=0. - 1.*t166*t1732 + t1063*t1829;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1284*t166 + t1063*t994;
  p_output1[7]=0. + t1063*t1477 + t1531*t166;
  p_output1[8]=0. + t1063*t1732 + t166*t1829;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2224;
  p_output1[13]=t2306;
  p_output1[14]=t2415;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2306*(t3143 + t2415*t3242 + t1829*t3275) + t2415*(-1.*t2306*t3242 - 1.*t1531*t3275 + t3320);
  p_output1[19]=t2224*(-1.*t2415*t3242 - 1.*t1829*t3275 + t3378) + t2415*(t2224*t3242 + t1284*t3275 + t3410);
  p_output1[20]=t2224*(t2306*t3242 + t1531*t3275 + t3465) + t2306*(-1.*t2224*t3242 - 1.*t1284*t3275 + t3521);
  p_output1[21]=t2224;
  p_output1[22]=t2306;
  p_output1[23]=t2415;
  p_output1[24]=t1477*(t3143 + t1798*t3199 + t3570) + t1732*(-1.*t1504*t3199 + t3320 + t3578);
  p_output1[25]=t1732*(t1250*t3199 + t3410 + t3625) + (-1.*t1798*t3199 + t3378 + t3605)*t994;
  p_output1[26]=t1477*(-1.*t1250*t3199 + t3521 + t3655) + (t1504*t3199 + t3465 + t3645)*t994;
  p_output1[27]=t994;
  p_output1[28]=t1477;
  p_output1[29]=t1732;
  p_output1[30]=t1494*(t1564*t3085 + t1696*t3134 + t3570) + t1784*(-1.*t1405*t3085 - 1.*t1449*t3134 + t3578);
  p_output1[31]=t1153*(-1.*t1564*t3085 - 1.*t1696*t3134 + t3605) + t1784*(t3625 + t3085*t907 + t3134*t976);
  p_output1[32]=t1153*(t1405*t3085 + t1449*t3134 + t3645) + t1494*(t3655 - 1.*t3085*t907 - 1.*t3134*t976);
  p_output1[33]=t1153;
  p_output1[34]=t1494;
  p_output1[35]=t1784;
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
  p_output1[78]=0.135*t599 + (-1.*t1398*t2860 - 1.*t1387*t3063 + t3578)*t778 + t1494*(0. - 1.*t1114*t3063 + t3162*t778) + 0.07996*t850;
  p_output1[79]=0.07996*t1387 + 0.135*t1398 + t1153*(0. + t1114*t3063 - 1.*t3162*t778) + t778*(t3625 + t2860*t599 + t3063*t850);
  p_output1[80]=0. - 0.07996*t1114 + t1153*(t1398*t2860 + t1387*t3063 + t3645) + t1494*(t3655 - 1.*t2860*t599 - 1.*t3063*t850);
  p_output1[81]=t1153;
  p_output1[82]=t1494;
  p_output1[83]=t1784;
  p_output1[84]=0.;
  p_output1[85]=0.;
  p_output1[86]=-0.08055 - 1.*t512*(0. + t3056*t512 + t2860*t781) + t781*(0. + t2860*t512 - 1.*t3056*t781);
  p_output1[87]=t599;
  p_output1[88]=t1398;
  p_output1[89]=0.;
  p_output1[90]=0.;
  p_output1[91]=0.;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
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



void Jb_RightThighJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
