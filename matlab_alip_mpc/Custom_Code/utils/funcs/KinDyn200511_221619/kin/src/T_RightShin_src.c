/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:37 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightShin_src.h"

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
  double t155;
  double t213;
  double t144;
  double t164;
  double t215;
  double t320;
  double t185;
  double t242;
  double t246;
  double t135;
  double t353;
  double t376;
  double t394;
  double t440;
  double t316;
  double t399;
  double t410;
  double t132;
  double t443;
  double t445;
  double t455;
  double t457;
  double t460;
  double t461;
  double t494;
  double t496;
  double t542;
  double t592;
  double t430;
  double t555;
  double t562;
  double t119;
  double t600;
  double t616;
  double t626;
  double t106;
  double t821;
  double t840;
  double t863;
  double t897;
  double t900;
  double t923;
  double t879;
  double t943;
  double t946;
  double t985;
  double t994;
  double t1025;
  double t1028;
  double t1029;
  double t1040;
  double t709;
  double t978;
  double t1042;
  double t1053;
  double t1065;
  double t1067;
  double t1074;
  double t1166;
  double t1183;
  double t1198;
  double t1235;
  double t1243;
  double t1246;
  double t1257;
  double t1258;
  double t1268;
  double t1211;
  double t1288;
  double t1289;
  double t1320;
  double t1325;
  double t1334;
  double t576;
  double t643;
  double t646;
  double t746;
  double t769;
  double t785;
  double t1059;
  double t1080;
  double t1081;
  double t1085;
  double t1093;
  double t1097;
  double t1314;
  double t1357;
  double t1360;
  double t1367;
  double t1377;
  double t1380;
  double t1682;
  double t1684;
  double t1621;
  double t1624;
  double t1822;
  double t1840;
  double t1944;
  double t1956;
  double t2032;
  double t2054;
  double t1388;
  double t1412;
  double t1414;
  double t1640;
  double t1666;
  double t1670;
  double t1690;
  double t1700;
  double t1703;
  double t1741;
  double t1744;
  double t1747;
  double t1753;
  double t1766;
  double t1810;
  double t1847;
  double t1861;
  double t1875;
  double t1914;
  double t1916;
  double t1938;
  double t1959;
  double t1965;
  double t1974;
  double t1979;
  double t1987;
  double t2007;
  double t2061;
  double t2063;
  double t2076;
  double t2103;
  double t2105;
  double t2122;
  double t1416;
  double t1426;
  double t1469;
  double t1470;
  double t1487;
  double t1489;
  t155 = Cos(var1[5]);
  t213 = Sin(var1[3]);
  t144 = Cos(var1[3]);
  t164 = Sin(var1[4]);
  t215 = Sin(var1[5]);
  t320 = Sin(var1[13]);
  t185 = t144*t155*t164;
  t242 = t213*t215;
  t246 = t185 + t242;
  t135 = Cos(var1[13]);
  t353 = -1.*t155*t213;
  t376 = t144*t164*t215;
  t394 = t353 + t376;
  t440 = Cos(var1[15]);
  t316 = t135*t246;
  t399 = -1.*t320*t394;
  t410 = t316 + t399;
  t132 = Sin(var1[15]);
  t443 = Cos(var1[14]);
  t445 = Cos(var1[4]);
  t455 = t443*t144*t445;
  t457 = Sin(var1[14]);
  t460 = t320*t246;
  t461 = t135*t394;
  t494 = t460 + t461;
  t496 = t457*t494;
  t542 = t455 + t496;
  t592 = Cos(var1[16]);
  t430 = t132*t410;
  t555 = t440*t542;
  t562 = t430 + t555;
  t119 = Sin(var1[16]);
  t600 = t440*t410;
  t616 = -1.*t132*t542;
  t626 = t600 + t616;
  t106 = Cos(var1[17]);
  t821 = t155*t213*t164;
  t840 = -1.*t144*t215;
  t863 = t821 + t840;
  t897 = t144*t155;
  t900 = t213*t164*t215;
  t923 = t897 + t900;
  t879 = t135*t863;
  t943 = -1.*t320*t923;
  t946 = t879 + t943;
  t985 = t443*t445*t213;
  t994 = t320*t863;
  t1025 = t135*t923;
  t1028 = t994 + t1025;
  t1029 = t457*t1028;
  t1040 = t985 + t1029;
  t709 = Sin(var1[17]);
  t978 = t132*t946;
  t1042 = t440*t1040;
  t1053 = t978 + t1042;
  t1065 = t440*t946;
  t1067 = -1.*t132*t1040;
  t1074 = t1065 + t1067;
  t1166 = t135*t445*t155;
  t1183 = -1.*t445*t320*t215;
  t1198 = t1166 + t1183;
  t1235 = -1.*t443*t164;
  t1243 = t445*t155*t320;
  t1246 = t135*t445*t215;
  t1257 = t1243 + t1246;
  t1258 = t457*t1257;
  t1268 = t1235 + t1258;
  t1211 = t132*t1198;
  t1288 = t440*t1268;
  t1289 = t1211 + t1288;
  t1320 = t440*t1198;
  t1325 = -1.*t132*t1268;
  t1334 = t1320 + t1325;
  t576 = -1.*t119*t562;
  t643 = t592*t626;
  t646 = t576 + t643;
  t746 = t592*t562;
  t769 = t119*t626;
  t785 = t746 + t769;
  t1059 = -1.*t119*t1053;
  t1080 = t592*t1074;
  t1081 = t1059 + t1080;
  t1085 = t592*t1053;
  t1093 = t119*t1074;
  t1097 = t1085 + t1093;
  t1314 = -1.*t119*t1289;
  t1357 = t592*t1334;
  t1360 = t1314 + t1357;
  t1367 = t592*t1289;
  t1377 = t119*t1334;
  t1380 = t1367 + t1377;
  t1682 = -1.*t135;
  t1684 = 1. + t1682;
  t1621 = -1.*t443;
  t1624 = 1. + t1621;
  t1822 = -1.*t440;
  t1840 = 1. + t1822;
  t1944 = -1.*t592;
  t1956 = 1. + t1944;
  t2032 = -1.*t106;
  t2054 = 1. + t2032;
  t1388 = t709*t646;
  t1412 = t106*t785;
  t1414 = t1388 + t1412;
  t1640 = -0.08055*t1624;
  t1666 = -0.135*t457;
  t1670 = 0. + t1640 + t1666;
  t1690 = 0.07996*t1684;
  t1700 = 0.135*t320;
  t1703 = 0. + t1690 + t1700;
  t1741 = -0.135*t1684;
  t1744 = 0.07996*t320;
  t1747 = 0. + t1741 + t1744;
  t1753 = -0.135*t1624;
  t1766 = 0.08055*t457;
  t1810 = 0. + t1753 + t1766;
  t1847 = -0.01004*t1840;
  t1861 = 0.08055*t132;
  t1875 = 0. + t1847 + t1861;
  t1914 = -0.08055*t1840;
  t1916 = -0.01004*t132;
  t1938 = 0. + t1914 + t1916;
  t1959 = -0.08055*t1956;
  t1965 = -0.13004*t119;
  t1974 = 0. + t1959 + t1965;
  t1979 = -0.13004*t1956;
  t1987 = 0.08055*t119;
  t2007 = 0. + t1979 + t1987;
  t2061 = -0.19074*t2054;
  t2063 = 0.03315*t709;
  t2076 = 0. + t2061 + t2063;
  t2103 = -0.03315*t2054;
  t2105 = -0.19074*t709;
  t2122 = 0. + t2103 + t2105;
  t1416 = t709*t1081;
  t1426 = t106*t1097;
  t1469 = t1416 + t1426;
  t1470 = t709*t1360;
  t1487 = t106*t1380;
  t1489 = t1470 + t1487;
  p_output1[0]=-1.*t106*t646 + t709*t785;
  p_output1[1]=-1.*t106*t1081 + t1097*t709;
  p_output1[2]=-1.*t106*t1360 + t1380*t709;
  p_output1[3]=0.;
  p_output1[4]=t1414;
  p_output1[5]=t1469;
  p_output1[6]=t1489;
  p_output1[7]=0.;
  p_output1[8]=t144*t445*t457 - 1.*t443*t494;
  p_output1[9]=-1.*t1028*t443 + t213*t445*t457;
  p_output1[10]=-1.*t1257*t443 - 1.*t164*t457;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.03195*t1414 + t1703*t246 + t1747*t394 + t1875*t410 + t144*t1670*t445 + t1810*t494 - 0.1303*(-1.*t144*t445*t457 + t443*t494) + t1938*t542 + t1974*t562 + t2007*t626 + t2076*t646 + t2122*t785 - 0.37414*(t106*t646 - 1.*t709*t785) + var1[0];
  p_output1[13]=0. - 0.03195*t1469 + t1028*t1810 + t1040*t1938 + t1053*t1974 + t1074*t2007 + t1081*t2076 + t1097*t2122 + t1670*t213*t445 - 0.1303*(t1028*t443 - 1.*t213*t445*t457) - 0.37414*(t106*t1081 - 1.*t1097*t709) + t1703*t863 + t1747*t923 + t1875*t946 + var1[1];
  p_output1[14]=0. - 0.03195*t1489 - 1.*t164*t1670 + t1257*t1810 + t1198*t1875 + t1268*t1938 + t1289*t1974 + t1334*t2007 + t1360*t2076 + t1380*t2122 + t155*t1703*t445 + t1747*t215*t445 - 0.1303*(t1257*t443 + t164*t457) - 0.37414*(t106*t1360 - 1.*t1380*t709) + var1[2];
  p_output1[15]=1.;
}



void T_RightShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
