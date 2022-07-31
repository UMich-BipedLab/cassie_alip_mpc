/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:03 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightKnee_src.h"

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
  double t254;
  double t333;
  double t248;
  double t299;
  double t336;
  double t440;
  double t324;
  double t374;
  double t385;
  double t241;
  double t458;
  double t463;
  double t467;
  double t572;
  double t387;
  double t476;
  double t488;
  double t183;
  double t602;
  double t606;
  double t622;
  double t627;
  double t650;
  double t682;
  double t688;
  double t690;
  double t716;
  double t138;
  double t996;
  double t1014;
  double t1038;
  double t1060;
  double t1061;
  double t1081;
  double t835;
  double t1052;
  double t1084;
  double t1115;
  double t1147;
  double t1175;
  double t1190;
  double t1207;
  double t1236;
  double t1243;
  double t1363;
  double t1369;
  double t1371;
  double t1390;
  double t1402;
  double t1408;
  double t1410;
  double t1415;
  double t1417;
  double t569;
  double t735;
  double t750;
  double t865;
  double t878;
  double t912;
  double t1145;
  double t1274;
  double t1278;
  double t1333;
  double t1334;
  double t1337;
  double t1382;
  double t1431;
  double t1461;
  double t1479;
  double t1494;
  double t1511;
  double t1829;
  double t1885;
  double t1762;
  double t1788;
  double t2125;
  double t2139;
  double t2348;
  double t2367;
  double t1537;
  double t1539;
  double t1545;
  double t1812;
  double t1819;
  double t1822;
  double t1887;
  double t1891;
  double t1922;
  double t1944;
  double t1969;
  double t1991;
  double t2042;
  double t2061;
  double t2072;
  double t2154;
  double t2178;
  double t2228;
  double t2248;
  double t2287;
  double t2306;
  double t2374;
  double t2384;
  double t2385;
  double t2403;
  double t2409;
  double t2425;
  double t1548;
  double t1554;
  double t1581;
  double t1604;
  double t1612;
  double t1613;
  t254 = Cos(var1[5]);
  t333 = Sin(var1[3]);
  t248 = Cos(var1[3]);
  t299 = Sin(var1[4]);
  t336 = Sin(var1[5]);
  t440 = Sin(var1[13]);
  t324 = t248*t254*t299;
  t374 = t333*t336;
  t385 = t324 + t374;
  t241 = Cos(var1[13]);
  t458 = -1.*t254*t333;
  t463 = t248*t299*t336;
  t467 = t458 + t463;
  t572 = Cos(var1[15]);
  t387 = t241*t385;
  t476 = -1.*t440*t467;
  t488 = t387 + t476;
  t183 = Sin(var1[15]);
  t602 = Cos(var1[14]);
  t606 = Cos(var1[4]);
  t622 = t602*t248*t606;
  t627 = Sin(var1[14]);
  t650 = t440*t385;
  t682 = t241*t467;
  t688 = t650 + t682;
  t690 = t627*t688;
  t716 = t622 + t690;
  t138 = Sin(var1[16]);
  t996 = t254*t333*t299;
  t1014 = -1.*t248*t336;
  t1038 = t996 + t1014;
  t1060 = t248*t254;
  t1061 = t333*t299*t336;
  t1081 = t1060 + t1061;
  t835 = Cos(var1[16]);
  t1052 = t241*t1038;
  t1084 = -1.*t440*t1081;
  t1115 = t1052 + t1084;
  t1147 = t602*t606*t333;
  t1175 = t440*t1038;
  t1190 = t241*t1081;
  t1207 = t1175 + t1190;
  t1236 = t627*t1207;
  t1243 = t1147 + t1236;
  t1363 = t241*t606*t254;
  t1369 = -1.*t606*t440*t336;
  t1371 = t1363 + t1369;
  t1390 = -1.*t602*t299;
  t1402 = t606*t254*t440;
  t1408 = t241*t606*t336;
  t1410 = t1402 + t1408;
  t1415 = t627*t1410;
  t1417 = t1390 + t1415;
  t569 = t183*t488;
  t735 = t572*t716;
  t750 = t569 + t735;
  t865 = t572*t488;
  t878 = -1.*t183*t716;
  t912 = t865 + t878;
  t1145 = t183*t1115;
  t1274 = t572*t1243;
  t1278 = t1145 + t1274;
  t1333 = t572*t1115;
  t1334 = -1.*t183*t1243;
  t1337 = t1333 + t1334;
  t1382 = t183*t1371;
  t1431 = t572*t1417;
  t1461 = t1382 + t1431;
  t1479 = t572*t1371;
  t1494 = -1.*t183*t1417;
  t1511 = t1479 + t1494;
  t1829 = -1.*t241;
  t1885 = 1. + t1829;
  t1762 = -1.*t602;
  t1788 = 1. + t1762;
  t2125 = -1.*t572;
  t2139 = 1. + t2125;
  t2348 = -1.*t835;
  t2367 = 1. + t2348;
  t1537 = t835*t750;
  t1539 = t138*t912;
  t1545 = t1537 + t1539;
  t1812 = -0.08055*t1788;
  t1819 = -0.135*t627;
  t1822 = 0. + t1812 + t1819;
  t1887 = 0.07996*t1885;
  t1891 = 0.135*t440;
  t1922 = 0. + t1887 + t1891;
  t1944 = -0.135*t1885;
  t1969 = 0.07996*t440;
  t1991 = 0. + t1944 + t1969;
  t2042 = -0.135*t1788;
  t2061 = 0.08055*t627;
  t2072 = 0. + t2042 + t2061;
  t2154 = -0.01004*t2139;
  t2178 = 0.08055*t183;
  t2228 = 0. + t2154 + t2178;
  t2248 = -0.08055*t2139;
  t2287 = -0.01004*t183;
  t2306 = 0. + t2248 + t2287;
  t2374 = -0.08055*t2367;
  t2384 = -0.13004*t138;
  t2385 = 0. + t2374 + t2384;
  t2403 = -0.13004*t2367;
  t2409 = 0.08055*t138;
  t2425 = 0. + t2403 + t2409;
  t1548 = t835*t1278;
  t1554 = t138*t1337;
  t1581 = t1548 + t1554;
  t1604 = t835*t1461;
  t1612 = t138*t1511;
  t1613 = t1604 + t1612;
  p_output1[0]=t138*t750 - 1.*t835*t912;
  p_output1[1]=t1278*t138 - 1.*t1337*t835;
  p_output1[2]=t138*t1461 - 1.*t1511*t835;
  p_output1[3]=0.;
  p_output1[4]=t1545;
  p_output1[5]=t1581;
  p_output1[6]=t1613;
  p_output1[7]=0.;
  p_output1[8]=t248*t606*t627 - 1.*t602*t688;
  p_output1[9]=-1.*t1207*t602 + t333*t606*t627;
  p_output1[10]=-1.*t1410*t602 - 1.*t299*t627;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.04845*t1545 + t1922*t385 + t1991*t467 + t2228*t488 + t1822*t248*t606 + t2072*t688 - 0.1327*(-1.*t248*t606*t627 + t602*t688) + t2306*t716 + t2385*t750 + t2425*t912 - 0.15304*(-1.*t138*t750 + t835*t912) + var1[0];
  p_output1[13]=0. - 0.04845*t1581 + t1038*t1922 + t1081*t1991 + t1207*t2072 + t1115*t2228 + t1243*t2306 + t1278*t2385 + t1337*t2425 + t1822*t333*t606 - 0.1327*(t1207*t602 - 1.*t333*t606*t627) - 0.15304*(-1.*t1278*t138 + t1337*t835) + var1[1];
  p_output1[14]=0. - 0.04845*t1613 + t1410*t2072 + t1371*t2228 + t1417*t2306 + t1461*t2385 + t1511*t2425 - 1.*t1822*t299 + t1922*t254*t606 + t1991*t336*t606 - 0.1327*(t1410*t602 + t299*t627) - 0.15304*(-1.*t138*t1461 + t1511*t835) + var1[2];
  p_output1[15]=1.;
}



void T_RightKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
