/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftToeBottom_src.h"

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
  double t121;
  double t166;
  double t190;
  double t176;
  double t215;
  double t163;
  double t292;
  double t300;
  double t302;
  double t182;
  double t243;
  double t248;
  double t309;
  double t120;
  double t371;
  double t403;
  double t409;
  double t123;
  double t124;
  double t157;
  double t273;
  double t311;
  double t315;
  double t334;
  double t347;
  double t353;
  double t412;
  double t452;
  double t360;
  double t416;
  double t420;
  double t115;
  double t458;
  double t464;
  double t473;
  double t517;
  double t425;
  double t478;
  double t499;
  double t107;
  double t518;
  double t520;
  double t523;
  double t559;
  double t503;
  double t528;
  double t529;
  double t64;
  double t584;
  double t585;
  double t588;
  double t633;
  double t532;
  double t612;
  double t618;
  double t62;
  double t641;
  double t644;
  double t645;
  double t757;
  double t769;
  double t791;
  double t726;
  double t728;
  double t735;
  double t821;
  double t826;
  double t829;
  double t725;
  double t742;
  double t792;
  double t794;
  double t795;
  double t810;
  double t815;
  double t837;
  double t841;
  double t877;
  double t879;
  double t880;
  double t863;
  double t883;
  double t884;
  double t907;
  double t931;
  double t970;
  double t892;
  double t990;
  double t993;
  double t1005;
  double t1020;
  double t1025;
  double t997;
  double t1029;
  double t1038;
  double t1049;
  double t1063;
  double t1068;
  double t1186;
  double t1191;
  double t1204;
  double t1143;
  double t1165;
  double t1168;
  double t1172;
  double t1174;
  double t1175;
  double t1176;
  double t1209;
  double t1241;
  double t1252;
  double t1255;
  double t1258;
  double t1249;
  double t1268;
  double t1271;
  double t1282;
  double t1284;
  double t1316;
  double t1278;
  double t1329;
  double t1333;
  double t1342;
  double t1345;
  double t1353;
  double t1340;
  double t1372;
  double t1378;
  double t1421;
  double t1426;
  double t1434;
  double t623;
  double t660;
  double t669;
  double t691;
  double t707;
  double t715;
  double t1048;
  double t1072;
  double t1073;
  double t1088;
  double t1090;
  double t1101;
  double t1391;
  double t1439;
  double t1450;
  double t1457;
  double t1461;
  double t1484;
  double t1629;
  double t1639;
  double t1730;
  double t1731;
  double t1497;
  double t1502;
  double t1523;
  double t1810;
  double t1811;
  double t1863;
  double t1875;
  double t1925;
  double t1949;
  double t1991;
  double t1998;
  double t2061;
  double t2065;
  double t1641;
  double t1660;
  double t1682;
  double t1701;
  double t1705;
  double t1711;
  double t1735;
  double t1743;
  double t1747;
  double t1769;
  double t1777;
  double t1780;
  double t1525;
  double t1529;
  double t1541;
  double t1815;
  double t1820;
  double t1824;
  double t1836;
  double t1838;
  double t1844;
  double t1876;
  double t1886;
  double t1903;
  double t1915;
  double t1917;
  double t1922;
  double t1957;
  double t1975;
  double t1976;
  double t1980;
  double t1983;
  double t1987;
  double t2013;
  double t2015;
  double t2022;
  double t2033;
  double t2034;
  double t2052;
  double t2066;
  double t2070;
  double t2075;
  double t2082;
  double t2084;
  double t2086;
  double t1544;
  double t1550;
  double t1555;
  t121 = Cos(var1[3]);
  t166 = Cos(var1[5]);
  t190 = Sin(var1[4]);
  t176 = Sin(var1[3]);
  t215 = Sin(var1[5]);
  t163 = Cos(var1[6]);
  t292 = t121*t166*t190;
  t300 = t176*t215;
  t302 = t292 + t300;
  t182 = -1.*t166*t176;
  t243 = t121*t190*t215;
  t248 = t182 + t243;
  t309 = Sin(var1[6]);
  t120 = Cos(var1[8]);
  t371 = t163*t302;
  t403 = -1.*t248*t309;
  t409 = t371 + t403;
  t123 = Cos(var1[4]);
  t124 = Cos(var1[7]);
  t157 = t121*t123*t124;
  t273 = t163*t248;
  t311 = t302*t309;
  t315 = t273 + t311;
  t334 = Sin(var1[7]);
  t347 = t315*t334;
  t353 = t157 + t347;
  t412 = Sin(var1[8]);
  t452 = Cos(var1[9]);
  t360 = t120*t353;
  t416 = t409*t412;
  t420 = t360 + t416;
  t115 = Sin(var1[9]);
  t458 = t120*t409;
  t464 = -1.*t353*t412;
  t473 = t458 + t464;
  t517 = Cos(var1[10]);
  t425 = -1.*t115*t420;
  t478 = t452*t473;
  t499 = t425 + t478;
  t107 = Sin(var1[10]);
  t518 = t452*t420;
  t520 = t115*t473;
  t523 = t518 + t520;
  t559 = Cos(var1[11]);
  t503 = t107*t499;
  t528 = t517*t523;
  t529 = t503 + t528;
  t64 = Sin(var1[11]);
  t584 = t517*t499;
  t585 = -1.*t107*t523;
  t588 = t584 + t585;
  t633 = Cos(var1[12]);
  t532 = -1.*t64*t529;
  t612 = t559*t588;
  t618 = t532 + t612;
  t62 = Sin(var1[12]);
  t641 = t559*t529;
  t644 = t64*t588;
  t645 = t641 + t644;
  t757 = t166*t176*t190;
  t769 = -1.*t121*t215;
  t791 = t757 + t769;
  t726 = t121*t166;
  t728 = t176*t190*t215;
  t735 = t726 + t728;
  t821 = t163*t791;
  t826 = -1.*t735*t309;
  t829 = t821 + t826;
  t725 = t123*t124*t176;
  t742 = t163*t735;
  t792 = t791*t309;
  t794 = t742 + t792;
  t795 = t794*t334;
  t810 = t725 + t795;
  t815 = t120*t810;
  t837 = t829*t412;
  t841 = t815 + t837;
  t877 = t120*t829;
  t879 = -1.*t810*t412;
  t880 = t877 + t879;
  t863 = -1.*t115*t841;
  t883 = t452*t880;
  t884 = t863 + t883;
  t907 = t452*t841;
  t931 = t115*t880;
  t970 = t907 + t931;
  t892 = t107*t884;
  t990 = t517*t970;
  t993 = t892 + t990;
  t1005 = t517*t884;
  t1020 = -1.*t107*t970;
  t1025 = t1005 + t1020;
  t997 = -1.*t64*t993;
  t1029 = t559*t1025;
  t1038 = t997 + t1029;
  t1049 = t559*t993;
  t1063 = t64*t1025;
  t1068 = t1049 + t1063;
  t1186 = t123*t166*t163;
  t1191 = -1.*t123*t215*t309;
  t1204 = t1186 + t1191;
  t1143 = -1.*t124*t190;
  t1165 = t123*t163*t215;
  t1168 = t123*t166*t309;
  t1172 = t1165 + t1168;
  t1174 = t1172*t334;
  t1175 = t1143 + t1174;
  t1176 = t120*t1175;
  t1209 = t1204*t412;
  t1241 = t1176 + t1209;
  t1252 = t120*t1204;
  t1255 = -1.*t1175*t412;
  t1258 = t1252 + t1255;
  t1249 = -1.*t115*t1241;
  t1268 = t452*t1258;
  t1271 = t1249 + t1268;
  t1282 = t452*t1241;
  t1284 = t115*t1258;
  t1316 = t1282 + t1284;
  t1278 = t107*t1271;
  t1329 = t517*t1316;
  t1333 = t1278 + t1329;
  t1342 = t517*t1271;
  t1345 = -1.*t107*t1316;
  t1353 = t1342 + t1345;
  t1340 = -1.*t64*t1333;
  t1372 = t559*t1353;
  t1378 = t1340 + t1372;
  t1421 = t559*t1333;
  t1426 = t64*t1353;
  t1434 = t1421 + t1426;
  t623 = t62*t618;
  t660 = t633*t645;
  t669 = t623 + t660;
  t691 = t633*t618;
  t707 = -1.*t62*t645;
  t715 = t691 + t707;
  t1048 = t62*t1038;
  t1072 = t633*t1068;
  t1073 = t1048 + t1072;
  t1088 = t633*t1038;
  t1090 = -1.*t62*t1068;
  t1101 = t1088 + t1090;
  t1391 = t62*t1378;
  t1439 = t633*t1434;
  t1450 = t1391 + t1439;
  t1457 = t633*t1378;
  t1461 = -1.*t62*t1434;
  t1484 = t1457 + t1461;
  t1629 = -1.*t163;
  t1639 = 1. + t1629;
  t1730 = -1.*t124;
  t1731 = 1. + t1730;
  t1497 = t124*t315;
  t1502 = -1.*t121*t123*t334;
  t1523 = t1497 + t1502;
  t1810 = -1.*t120;
  t1811 = 1. + t1810;
  t1863 = -1.*t452;
  t1875 = 1. + t1863;
  t1925 = -1.*t517;
  t1949 = 1. + t1925;
  t1991 = -1.*t559;
  t1998 = 1. + t1991;
  t2061 = -1.*t633;
  t2065 = 1. + t2061;
  t1641 = 0.07996*t1639;
  t1660 = -0.135*t309;
  t1682 = 0. + t1641 + t1660;
  t1701 = 0.135*t1639;
  t1705 = 0.07996*t309;
  t1711 = 0. + t1701 + t1705;
  t1735 = 0.135*t1731;
  t1743 = 0.08055*t334;
  t1747 = 0. + t1735 + t1743;
  t1769 = -0.08055*t1731;
  t1777 = 0.135*t334;
  t1780 = 0. + t1769 + t1777;
  t1525 = t124*t794;
  t1529 = -1.*t123*t176*t334;
  t1541 = t1525 + t1529;
  t1815 = -0.08055*t1811;
  t1820 = -0.01004*t412;
  t1824 = 0. + t1815 + t1820;
  t1836 = -0.01004*t1811;
  t1838 = 0.08055*t412;
  t1844 = 0. + t1836 + t1838;
  t1876 = -0.08055*t1875;
  t1886 = -0.13004*t115;
  t1903 = 0. + t1876 + t1886;
  t1915 = -0.13004*t1875;
  t1917 = 0.08055*t115;
  t1922 = 0. + t1915 + t1917;
  t1957 = -0.19074*t1949;
  t1975 = 0.03315*t107;
  t1976 = 0. + t1957 + t1975;
  t1980 = -0.03315*t1949;
  t1983 = -0.19074*t107;
  t1987 = 0. + t1980 + t1983;
  t2013 = -0.01315*t1998;
  t2015 = -0.62554*t64;
  t2022 = 0. + t2013 + t2015;
  t2033 = -0.62554*t1998;
  t2034 = 0.01315*t64;
  t2052 = 0. + t2033 + t2034;
  t2066 = -1.03354*t2065;
  t2070 = 0.05315*t62;
  t2075 = 0. + t2066 + t2070;
  t2082 = -0.05315*t2065;
  t2084 = -1.03354*t62;
  t2086 = 0. + t2082 + t2084;
  t1544 = t124*t1172;
  t1550 = t190*t334;
  t1555 = t1544 + t1550;
  p_output1[0]=0.642788*t669 + 0.766044*t715;
  p_output1[1]=0.642788*t1073 + 0.766044*t1101;
  p_output1[2]=0.642788*t1450 + 0.766044*t1484;
  p_output1[3]=0.;
  p_output1[4]=t1523;
  p_output1[5]=t1541;
  p_output1[6]=t1555;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t669 + 0.642788*t715;
  p_output1[9]=-0.766044*t1073 + 0.642788*t1101;
  p_output1[10]=-0.766044*t1450 + 0.642788*t1484;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*t1523 + t121*t123*t1780 + t1711*t248 + t1682*t302 + t1747*t315 + t1824*t353 + t1844*t409 + t1903*t420 + t1922*t473 + t1976*t499 + t1987*t523 + t2022*t529 + t2052*t588 + t2075*t618 + t2086*t645 - 0.00095*t669 - 1.05124*t715 + var1[0];
  p_output1[13]=0. - 0.00095*t1073 - 1.05124*t1101 + 0.1305*t1541 + t123*t176*t1780 + t1025*t2052 + t1038*t2075 + t1068*t2086 + t1711*t735 + t1682*t791 + t1747*t794 + t1824*t810 + t1844*t829 + t1903*t841 + t1922*t880 + t1976*t884 + t1987*t970 + t2022*t993 + var1[1];
  p_output1[14]=0. - 0.00095*t1450 - 1.05124*t1484 + 0.1305*t1555 + t123*t166*t1682 + t1172*t1747 + t1175*t1824 + t1204*t1844 - 1.*t1780*t190 + t1241*t1903 + t1258*t1922 + t1271*t1976 + t1316*t1987 + t1333*t2022 + t1353*t2052 + t1378*t2075 + t1434*t2086 + t123*t1711*t215 + var1[2];
  p_output1[15]=1.;
}



void T_LeftToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
