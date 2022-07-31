/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:08 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightKneeSpringJoint_src.h"

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
  double t109;
  double t183;
  double t102;
  double t133;
  double t195;
  double t228;
  double t143;
  double t200;
  double t204;
  double t98;
  double t246;
  double t252;
  double t266;
  double t352;
  double t214;
  double t286;
  double t316;
  double t86;
  double t360;
  double t368;
  double t404;
  double t409;
  double t416;
  double t420;
  double t431;
  double t440;
  double t455;
  double t473;
  double t331;
  double t456;
  double t459;
  double t61;
  double t518;
  double t522;
  double t532;
  double t26;
  double t621;
  double t651;
  double t652;
  double t678;
  double t705;
  double t722;
  double t669;
  double t730;
  double t742;
  double t753;
  double t755;
  double t805;
  double t806;
  double t807;
  double t808;
  double t571;
  double t744;
  double t811;
  double t827;
  double t841;
  double t844;
  double t845;
  double t893;
  double t899;
  double t909;
  double t935;
  double t947;
  double t965;
  double t966;
  double t973;
  double t976;
  double t914;
  double t978;
  double t985;
  double t989;
  double t1000;
  double t1005;
  double t469;
  double t539;
  double t546;
  double t577;
  double t583;
  double t589;
  double t835;
  double t846;
  double t848;
  double t855;
  double t862;
  double t873;
  double t986;
  double t1006;
  double t1017;
  double t1038;
  double t1039;
  double t1065;
  double t1260;
  double t1265;
  double t1233;
  double t1237;
  double t1348;
  double t1355;
  double t1406;
  double t1407;
  double t1468;
  double t1482;
  double t1071;
  double t1074;
  double t1081;
  double t1242;
  double t1244;
  double t1253;
  double t1268;
  double t1281;
  double t1282;
  double t1297;
  double t1302;
  double t1303;
  double t1334;
  double t1335;
  double t1337;
  double t1356;
  double t1366;
  double t1368;
  double t1396;
  double t1398;
  double t1400;
  double t1409;
  double t1428;
  double t1431;
  double t1451;
  double t1453;
  double t1466;
  double t1493;
  double t1501;
  double t1510;
  double t1524;
  double t1529;
  double t1541;
  double t1091;
  double t1092;
  double t1093;
  double t1115;
  double t1159;
  double t1168;
  t109 = Cos(var1[5]);
  t183 = Sin(var1[3]);
  t102 = Cos(var1[3]);
  t133 = Sin(var1[4]);
  t195 = Sin(var1[5]);
  t228 = Sin(var1[13]);
  t143 = t102*t109*t133;
  t200 = t183*t195;
  t204 = t143 + t200;
  t98 = Cos(var1[13]);
  t246 = -1.*t109*t183;
  t252 = t102*t133*t195;
  t266 = t246 + t252;
  t352 = Cos(var1[15]);
  t214 = t98*t204;
  t286 = -1.*t228*t266;
  t316 = t214 + t286;
  t86 = Sin(var1[15]);
  t360 = Cos(var1[14]);
  t368 = Cos(var1[4]);
  t404 = t360*t102*t368;
  t409 = Sin(var1[14]);
  t416 = t228*t204;
  t420 = t98*t266;
  t431 = t416 + t420;
  t440 = t409*t431;
  t455 = t404 + t440;
  t473 = Cos(var1[16]);
  t331 = t86*t316;
  t456 = t352*t455;
  t459 = t331 + t456;
  t61 = Sin(var1[16]);
  t518 = t352*t316;
  t522 = -1.*t86*t455;
  t532 = t518 + t522;
  t26 = Cos(var1[17]);
  t621 = t109*t183*t133;
  t651 = -1.*t102*t195;
  t652 = t621 + t651;
  t678 = t102*t109;
  t705 = t183*t133*t195;
  t722 = t678 + t705;
  t669 = t98*t652;
  t730 = -1.*t228*t722;
  t742 = t669 + t730;
  t753 = t360*t368*t183;
  t755 = t228*t652;
  t805 = t98*t722;
  t806 = t755 + t805;
  t807 = t409*t806;
  t808 = t753 + t807;
  t571 = Sin(var1[17]);
  t744 = t86*t742;
  t811 = t352*t808;
  t827 = t744 + t811;
  t841 = t352*t742;
  t844 = -1.*t86*t808;
  t845 = t841 + t844;
  t893 = t98*t368*t109;
  t899 = -1.*t368*t228*t195;
  t909 = t893 + t899;
  t935 = -1.*t360*t133;
  t947 = t368*t109*t228;
  t965 = t98*t368*t195;
  t966 = t947 + t965;
  t973 = t409*t966;
  t976 = t935 + t973;
  t914 = t86*t909;
  t978 = t352*t976;
  t985 = t914 + t978;
  t989 = t352*t909;
  t1000 = -1.*t86*t976;
  t1005 = t989 + t1000;
  t469 = -1.*t61*t459;
  t539 = t473*t532;
  t546 = t469 + t539;
  t577 = t473*t459;
  t583 = t61*t532;
  t589 = t577 + t583;
  t835 = -1.*t61*t827;
  t846 = t473*t845;
  t848 = t835 + t846;
  t855 = t473*t827;
  t862 = t61*t845;
  t873 = t855 + t862;
  t986 = -1.*t61*t985;
  t1006 = t473*t1005;
  t1017 = t986 + t1006;
  t1038 = t473*t985;
  t1039 = t61*t1005;
  t1065 = t1038 + t1039;
  t1260 = -1.*t98;
  t1265 = 1. + t1260;
  t1233 = -1.*t360;
  t1237 = 1. + t1233;
  t1348 = -1.*t352;
  t1355 = 1. + t1348;
  t1406 = -1.*t473;
  t1407 = 1. + t1406;
  t1468 = -1.*t26;
  t1482 = 1. + t1468;
  t1071 = t571*t546;
  t1074 = t26*t589;
  t1081 = t1071 + t1074;
  t1242 = -0.08055*t1237;
  t1244 = -0.135*t409;
  t1253 = 0. + t1242 + t1244;
  t1268 = 0.07996*t1265;
  t1281 = 0.135*t228;
  t1282 = 0. + t1268 + t1281;
  t1297 = -0.135*t1265;
  t1302 = 0.07996*t228;
  t1303 = 0. + t1297 + t1302;
  t1334 = -0.135*t1237;
  t1335 = 0.08055*t409;
  t1337 = 0. + t1334 + t1335;
  t1356 = -0.01004*t1355;
  t1366 = 0.08055*t86;
  t1368 = 0. + t1356 + t1366;
  t1396 = -0.08055*t1355;
  t1398 = -0.01004*t86;
  t1400 = 0. + t1396 + t1398;
  t1409 = -0.08055*t1407;
  t1428 = -0.13004*t61;
  t1431 = 0. + t1409 + t1428;
  t1451 = -0.13004*t1407;
  t1453 = 0.08055*t61;
  t1466 = 0. + t1451 + t1453;
  t1493 = -0.19074*t1482;
  t1501 = 0.03315*t571;
  t1510 = 0. + t1493 + t1501;
  t1524 = -0.03315*t1482;
  t1529 = -0.19074*t571;
  t1541 = 0. + t1524 + t1529;
  t1091 = t571*t848;
  t1092 = t26*t873;
  t1093 = t1091 + t1092;
  t1115 = t571*t1017;
  t1159 = t26*t1065;
  t1168 = t1115 + t1159;
  p_output1[0]=-1.*t26*t546 + t571*t589;
  p_output1[1]=-1.*t26*t848 + t571*t873;
  p_output1[2]=-1.*t1017*t26 + t1065*t571;
  p_output1[3]=0.;
  p_output1[4]=t1081;
  p_output1[5]=t1093;
  p_output1[6]=t1168;
  p_output1[7]=0.;
  p_output1[8]=t102*t368*t409 - 1.*t360*t431;
  p_output1[9]=t183*t368*t409 - 1.*t360*t806;
  p_output1[10]=-1.*t133*t409 - 1.*t360*t966;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.03315*t1081 + t1282*t204 + t1303*t266 + t1368*t316 + t102*t1253*t368 + t1337*t431 - 0.1305*(-1.*t102*t368*t409 + t360*t431) + t1400*t455 + t1431*t459 + t1466*t532 + t1510*t546 + t1541*t589 - 0.19074*(t26*t546 - 1.*t571*t589) + var1[0];
  p_output1[13]=0. - 0.03315*t1093 + t1253*t183*t368 + t1282*t652 + t1303*t722 + t1368*t742 + t1337*t806 - 0.1305*(-1.*t183*t368*t409 + t360*t806) + t1400*t808 + t1431*t827 + t1466*t845 + t1510*t848 + t1541*t873 - 0.19074*(t26*t848 - 1.*t571*t873) + var1[1];
  p_output1[14]=0. - 0.03315*t1168 - 1.*t1253*t133 + t1005*t1466 + t1017*t1510 + t1065*t1541 + t109*t1282*t368 + t1303*t195*t368 - 0.19074*(t1017*t26 - 1.*t1065*t571) + t1368*t909 + t1337*t966 - 0.1305*(t133*t409 + t360*t966) + t1400*t976 + t1431*t985 + var1[2];
  p_output1[15]=1.;
}



void T_RightKneeSpringJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
