/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightKneeJoint_src.h"

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
  double t154;
  double t225;
  double t149;
  double t186;
  double t257;
  double t417;
  double t221;
  double t270;
  double t288;
  double t142;
  double t430;
  double t467;
  double t499;
  double t569;
  double t330;
  double t523;
  double t525;
  double t125;
  double t574;
  double t575;
  double t611;
  double t622;
  double t635;
  double t642;
  double t661;
  double t706;
  double t728;
  double t120;
  double t892;
  double t910;
  double t972;
  double t1003;
  double t1042;
  double t1074;
  double t813;
  double t983;
  double t1081;
  double t1087;
  double t1131;
  double t1153;
  double t1156;
  double t1158;
  double t1165;
  double t1175;
  double t1245;
  double t1249;
  double t1253;
  double t1276;
  double t1283;
  double t1336;
  double t1351;
  double t1355;
  double t1362;
  double t542;
  double t741;
  double t763;
  double t821;
  double t824;
  double t832;
  double t1096;
  double t1189;
  double t1196;
  double t1202;
  double t1204;
  double t1216;
  double t1275;
  double t1386;
  double t1387;
  double t1412;
  double t1426;
  double t1428;
  double t1741;
  double t1746;
  double t1662;
  double t1673;
  double t1887;
  double t1891;
  double t2030;
  double t2047;
  double t1451;
  double t1454;
  double t1462;
  double t1674;
  double t1681;
  double t1704;
  double t1748;
  double t1769;
  double t1776;
  double t1828;
  double t1830;
  double t1833;
  double t1860;
  double t1863;
  double t1865;
  double t1917;
  double t1921;
  double t1934;
  double t1996;
  double t1998;
  double t2018;
  double t2065;
  double t2072;
  double t2077;
  double t2085;
  double t2093;
  double t2104;
  double t1468;
  double t1476;
  double t1480;
  double t1488;
  double t1489;
  double t1543;
  t154 = Cos(var1[5]);
  t225 = Sin(var1[3]);
  t149 = Cos(var1[3]);
  t186 = Sin(var1[4]);
  t257 = Sin(var1[5]);
  t417 = Sin(var1[13]);
  t221 = t149*t154*t186;
  t270 = t225*t257;
  t288 = t221 + t270;
  t142 = Cos(var1[13]);
  t430 = -1.*t154*t225;
  t467 = t149*t186*t257;
  t499 = t430 + t467;
  t569 = Cos(var1[15]);
  t330 = t142*t288;
  t523 = -1.*t417*t499;
  t525 = t330 + t523;
  t125 = Sin(var1[15]);
  t574 = Cos(var1[14]);
  t575 = Cos(var1[4]);
  t611 = t574*t149*t575;
  t622 = Sin(var1[14]);
  t635 = t417*t288;
  t642 = t142*t499;
  t661 = t635 + t642;
  t706 = t622*t661;
  t728 = t611 + t706;
  t120 = Sin(var1[16]);
  t892 = t154*t225*t186;
  t910 = -1.*t149*t257;
  t972 = t892 + t910;
  t1003 = t149*t154;
  t1042 = t225*t186*t257;
  t1074 = t1003 + t1042;
  t813 = Cos(var1[16]);
  t983 = t142*t972;
  t1081 = -1.*t417*t1074;
  t1087 = t983 + t1081;
  t1131 = t574*t575*t225;
  t1153 = t417*t972;
  t1156 = t142*t1074;
  t1158 = t1153 + t1156;
  t1165 = t622*t1158;
  t1175 = t1131 + t1165;
  t1245 = t142*t575*t154;
  t1249 = -1.*t575*t417*t257;
  t1253 = t1245 + t1249;
  t1276 = -1.*t574*t186;
  t1283 = t575*t154*t417;
  t1336 = t142*t575*t257;
  t1351 = t1283 + t1336;
  t1355 = t622*t1351;
  t1362 = t1276 + t1355;
  t542 = t125*t525;
  t741 = t569*t728;
  t763 = t542 + t741;
  t821 = t569*t525;
  t824 = -1.*t125*t728;
  t832 = t821 + t824;
  t1096 = t125*t1087;
  t1189 = t569*t1175;
  t1196 = t1096 + t1189;
  t1202 = t569*t1087;
  t1204 = -1.*t125*t1175;
  t1216 = t1202 + t1204;
  t1275 = t125*t1253;
  t1386 = t569*t1362;
  t1387 = t1275 + t1386;
  t1412 = t569*t1253;
  t1426 = -1.*t125*t1362;
  t1428 = t1412 + t1426;
  t1741 = -1.*t142;
  t1746 = 1. + t1741;
  t1662 = -1.*t574;
  t1673 = 1. + t1662;
  t1887 = -1.*t569;
  t1891 = 1. + t1887;
  t2030 = -1.*t813;
  t2047 = 1. + t2030;
  t1451 = t813*t763;
  t1454 = t120*t832;
  t1462 = t1451 + t1454;
  t1674 = -0.08055*t1673;
  t1681 = -0.135*t622;
  t1704 = 0. + t1674 + t1681;
  t1748 = 0.07996*t1746;
  t1769 = 0.135*t417;
  t1776 = 0. + t1748 + t1769;
  t1828 = -0.135*t1746;
  t1830 = 0.07996*t417;
  t1833 = 0. + t1828 + t1830;
  t1860 = -0.135*t1673;
  t1863 = 0.08055*t622;
  t1865 = 0. + t1860 + t1863;
  t1917 = -0.01004*t1891;
  t1921 = 0.08055*t125;
  t1934 = 0. + t1917 + t1921;
  t1996 = -0.08055*t1891;
  t1998 = -0.01004*t125;
  t2018 = 0. + t1996 + t1998;
  t2065 = -0.08055*t2047;
  t2072 = -0.13004*t120;
  t2077 = 0. + t2065 + t2072;
  t2085 = -0.13004*t2047;
  t2093 = 0.08055*t120;
  t2104 = 0. + t2085 + t2093;
  t1468 = t813*t1196;
  t1476 = t120*t1216;
  t1480 = t1468 + t1476;
  t1488 = t813*t1387;
  t1489 = t120*t1428;
  t1543 = t1488 + t1489;
  p_output1[0]=t120*t763 - 1.*t813*t832;
  p_output1[1]=t1196*t120 - 1.*t1216*t813;
  p_output1[2]=t120*t1387 - 1.*t1428*t813;
  p_output1[3]=0.;
  p_output1[4]=t1462;
  p_output1[5]=t1480;
  p_output1[6]=t1543;
  p_output1[7]=0.;
  p_output1[8]=t149*t575*t622 - 1.*t574*t661;
  p_output1[9]=-1.*t1158*t574 + t225*t575*t622;
  p_output1[10]=-1.*t1351*t574 - 1.*t186*t622;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08055*t1462 + t1776*t288 + t1833*t499 + t1934*t525 + t149*t1704*t575 + t1865*t661 - 0.1305*(-1.*t149*t575*t622 + t574*t661) + t2018*t728 + t2077*t763 + t2104*t832 - 0.13004*(-1.*t120*t763 + t813*t832) + var1[0];
  p_output1[13]=0. - 0.08055*t1480 + t1074*t1833 + t1158*t1865 + t1087*t1934 + t1175*t2018 + t1196*t2077 + t1216*t2104 + t1704*t225*t575 - 0.1305*(t1158*t574 - 1.*t225*t575*t622) - 0.13004*(-1.*t1196*t120 + t1216*t813) + t1776*t972 + var1[1];
  p_output1[14]=0. - 0.08055*t1543 - 1.*t1704*t186 + t1351*t1865 + t1253*t1934 + t1362*t2018 + t1387*t2077 + t1428*t2104 + t154*t1776*t575 + t1833*t257*t575 - 0.1305*(t1351*t574 + t186*t622) - 0.13004*(-1.*t120*t1387 + t1428*t813) + var1[2];
  p_output1[15]=1.;
}



void T_RightKneeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
