/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:37 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftToeJoint_src.h"

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
  double t118;
  double t157;
  double t216;
  double t159;
  double t252;
  double t150;
  double t291;
  double t293;
  double t303;
  double t191;
  double t281;
  double t283;
  double t323;
  double t117;
  double t365;
  double t370;
  double t376;
  double t122;
  double t124;
  double t147;
  double t287;
  double t327;
  double t328;
  double t330;
  double t343;
  double t350;
  double t388;
  double t438;
  double t352;
  double t396;
  double t406;
  double t111;
  double t441;
  double t456;
  double t473;
  double t527;
  double t415;
  double t474;
  double t501;
  double t110;
  double t540;
  double t546;
  double t561;
  double t602;
  double t522;
  double t566;
  double t577;
  double t104;
  double t613;
  double t632;
  double t641;
  double t64;
  double t752;
  double t754;
  double t755;
  double t724;
  double t729;
  double t733;
  double t799;
  double t822;
  double t824;
  double t708;
  double t746;
  double t757;
  double t761;
  double t775;
  double t793;
  double t797;
  double t832;
  double t836;
  double t848;
  double t861;
  double t866;
  double t844;
  double t869;
  double t872;
  double t881;
  double t885;
  double t888;
  double t666;
  double t880;
  double t893;
  double t895;
  double t898;
  double t900;
  double t903;
  double t1042;
  double t1049;
  double t1062;
  double t966;
  double t977;
  double t988;
  double t1016;
  double t1024;
  double t1027;
  double t1034;
  double t1066;
  double t1068;
  double t1075;
  double t1095;
  double t1097;
  double t1070;
  double t1107;
  double t1112;
  double t1132;
  double t1142;
  double t1148;
  double t1131;
  double t1154;
  double t1159;
  double t1167;
  double t1170;
  double t1173;
  double t591;
  double t646;
  double t653;
  double t670;
  double t682;
  double t689;
  double t896;
  double t904;
  double t918;
  double t944;
  double t947;
  double t953;
  double t1166;
  double t1176;
  double t1194;
  double t1209;
  double t1210;
  double t1216;
  double t1398;
  double t1405;
  double t1454;
  double t1458;
  double t1571;
  double t1573;
  double t1637;
  double t1644;
  double t1685;
  double t1688;
  double t1727;
  double t1729;
  double t1762;
  double t1764;
  double t1226;
  double t1227;
  double t1244;
  double t1407;
  double t1416;
  double t1419;
  double t1426;
  double t1428;
  double t1437;
  double t1485;
  double t1487;
  double t1492;
  double t1504;
  double t1514;
  double t1520;
  double t1578;
  double t1586;
  double t1597;
  double t1606;
  double t1610;
  double t1624;
  double t1646;
  double t1651;
  double t1658;
  double t1667;
  double t1672;
  double t1674;
  double t1692;
  double t1693;
  double t1696;
  double t1713;
  double t1714;
  double t1718;
  double t1732;
  double t1737;
  double t1741;
  double t1747;
  double t1753;
  double t1755;
  double t1770;
  double t1780;
  double t1792;
  double t1815;
  double t1836;
  double t1847;
  double t1245;
  double t1272;
  double t1281;
  double t1284;
  double t1285;
  double t1300;
  t118 = Cos(var1[3]);
  t157 = Cos(var1[5]);
  t216 = Sin(var1[4]);
  t159 = Sin(var1[3]);
  t252 = Sin(var1[5]);
  t150 = Cos(var1[6]);
  t291 = t118*t157*t216;
  t293 = t159*t252;
  t303 = t291 + t293;
  t191 = -1.*t157*t159;
  t281 = t118*t216*t252;
  t283 = t191 + t281;
  t323 = Sin(var1[6]);
  t117 = Cos(var1[8]);
  t365 = t150*t303;
  t370 = -1.*t283*t323;
  t376 = t365 + t370;
  t122 = Cos(var1[4]);
  t124 = Cos(var1[7]);
  t147 = t118*t122*t124;
  t287 = t150*t283;
  t327 = t303*t323;
  t328 = t287 + t327;
  t330 = Sin(var1[7]);
  t343 = t328*t330;
  t350 = t147 + t343;
  t388 = Sin(var1[8]);
  t438 = Cos(var1[9]);
  t352 = t117*t350;
  t396 = t376*t388;
  t406 = t352 + t396;
  t111 = Sin(var1[9]);
  t441 = t117*t376;
  t456 = -1.*t350*t388;
  t473 = t441 + t456;
  t527 = Cos(var1[10]);
  t415 = -1.*t111*t406;
  t474 = t438*t473;
  t501 = t415 + t474;
  t110 = Sin(var1[10]);
  t540 = t438*t406;
  t546 = t111*t473;
  t561 = t540 + t546;
  t602 = Cos(var1[11]);
  t522 = t110*t501;
  t566 = t527*t561;
  t577 = t522 + t566;
  t104 = Sin(var1[11]);
  t613 = t527*t501;
  t632 = -1.*t110*t561;
  t641 = t613 + t632;
  t64 = Cos(var1[12]);
  t752 = t157*t159*t216;
  t754 = -1.*t118*t252;
  t755 = t752 + t754;
  t724 = t118*t157;
  t729 = t159*t216*t252;
  t733 = t724 + t729;
  t799 = t150*t755;
  t822 = -1.*t733*t323;
  t824 = t799 + t822;
  t708 = t122*t124*t159;
  t746 = t150*t733;
  t757 = t755*t323;
  t761 = t746 + t757;
  t775 = t761*t330;
  t793 = t708 + t775;
  t797 = t117*t793;
  t832 = t824*t388;
  t836 = t797 + t832;
  t848 = t117*t824;
  t861 = -1.*t793*t388;
  t866 = t848 + t861;
  t844 = -1.*t111*t836;
  t869 = t438*t866;
  t872 = t844 + t869;
  t881 = t438*t836;
  t885 = t111*t866;
  t888 = t881 + t885;
  t666 = Sin(var1[12]);
  t880 = t110*t872;
  t893 = t527*t888;
  t895 = t880 + t893;
  t898 = t527*t872;
  t900 = -1.*t110*t888;
  t903 = t898 + t900;
  t1042 = t122*t157*t150;
  t1049 = -1.*t122*t252*t323;
  t1062 = t1042 + t1049;
  t966 = -1.*t124*t216;
  t977 = t122*t150*t252;
  t988 = t122*t157*t323;
  t1016 = t977 + t988;
  t1024 = t1016*t330;
  t1027 = t966 + t1024;
  t1034 = t117*t1027;
  t1066 = t1062*t388;
  t1068 = t1034 + t1066;
  t1075 = t117*t1062;
  t1095 = -1.*t1027*t388;
  t1097 = t1075 + t1095;
  t1070 = -1.*t111*t1068;
  t1107 = t438*t1097;
  t1112 = t1070 + t1107;
  t1132 = t438*t1068;
  t1142 = t111*t1097;
  t1148 = t1132 + t1142;
  t1131 = t110*t1112;
  t1154 = t527*t1148;
  t1159 = t1131 + t1154;
  t1167 = t527*t1112;
  t1170 = -1.*t110*t1148;
  t1173 = t1167 + t1170;
  t591 = -1.*t104*t577;
  t646 = t602*t641;
  t653 = t591 + t646;
  t670 = t602*t577;
  t682 = t104*t641;
  t689 = t670 + t682;
  t896 = -1.*t104*t895;
  t904 = t602*t903;
  t918 = t896 + t904;
  t944 = t602*t895;
  t947 = t104*t903;
  t953 = t944 + t947;
  t1166 = -1.*t104*t1159;
  t1176 = t602*t1173;
  t1194 = t1166 + t1176;
  t1209 = t602*t1159;
  t1210 = t104*t1173;
  t1216 = t1209 + t1210;
  t1398 = -1.*t150;
  t1405 = 1. + t1398;
  t1454 = -1.*t124;
  t1458 = 1. + t1454;
  t1571 = -1.*t117;
  t1573 = 1. + t1571;
  t1637 = -1.*t438;
  t1644 = 1. + t1637;
  t1685 = -1.*t527;
  t1688 = 1. + t1685;
  t1727 = -1.*t602;
  t1729 = 1. + t1727;
  t1762 = -1.*t64;
  t1764 = 1. + t1762;
  t1226 = t666*t653;
  t1227 = t64*t689;
  t1244 = t1226 + t1227;
  t1407 = 0.07996*t1405;
  t1416 = -0.135*t323;
  t1419 = 0. + t1407 + t1416;
  t1426 = 0.135*t1405;
  t1428 = 0.07996*t323;
  t1437 = 0. + t1426 + t1428;
  t1485 = 0.135*t1458;
  t1487 = 0.08055*t330;
  t1492 = 0. + t1485 + t1487;
  t1504 = -0.08055*t1458;
  t1514 = 0.135*t330;
  t1520 = 0. + t1504 + t1514;
  t1578 = -0.08055*t1573;
  t1586 = -0.01004*t388;
  t1597 = 0. + t1578 + t1586;
  t1606 = -0.01004*t1573;
  t1610 = 0.08055*t388;
  t1624 = 0. + t1606 + t1610;
  t1646 = -0.08055*t1644;
  t1651 = -0.13004*t111;
  t1658 = 0. + t1646 + t1651;
  t1667 = -0.13004*t1644;
  t1672 = 0.08055*t111;
  t1674 = 0. + t1667 + t1672;
  t1692 = -0.19074*t1688;
  t1693 = 0.03315*t110;
  t1696 = 0. + t1692 + t1693;
  t1713 = -0.03315*t1688;
  t1714 = -0.19074*t110;
  t1718 = 0. + t1713 + t1714;
  t1732 = -0.01315*t1729;
  t1737 = -0.62554*t104;
  t1741 = 0. + t1732 + t1737;
  t1747 = -0.62554*t1729;
  t1753 = 0.01315*t104;
  t1755 = 0. + t1747 + t1753;
  t1770 = -1.03354*t1764;
  t1780 = 0.05315*t666;
  t1792 = 0. + t1770 + t1780;
  t1815 = -0.05315*t1764;
  t1836 = -1.03354*t666;
  t1847 = 0. + t1815 + t1836;
  t1245 = t666*t918;
  t1272 = t64*t953;
  t1281 = t1245 + t1272;
  t1284 = t666*t1194;
  t1285 = t64*t1216;
  t1300 = t1284 + t1285;
  p_output1[0]=-1.*t64*t653 + t666*t689;
  p_output1[1]=-1.*t64*t918 + t666*t953;
  p_output1[2]=-1.*t1194*t64 + t1216*t666;
  p_output1[3]=0.;
  p_output1[4]=t1244;
  p_output1[5]=t1281;
  p_output1[6]=t1300;
  p_output1[7]=0.;
  p_output1[8]=-1.*t124*t328 + t118*t122*t330;
  p_output1[9]=t122*t159*t330 - 1.*t124*t761;
  p_output1[10]=-1.*t1016*t124 - 1.*t216*t330;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.05315*t1244 + t118*t122*t1520 + t1437*t283 + t1419*t303 + t1492*t328 + 0.1305*(t124*t328 - 1.*t118*t122*t330) + t1597*t350 + t1624*t376 + t1658*t406 + t1674*t473 + t1696*t501 + t1718*t561 + t1741*t577 + t1755*t641 + t1792*t653 + t1847*t689 - 1.03354*(t64*t653 - 1.*t666*t689) + var1[0];
  p_output1[13]=0. - 0.05315*t1281 + t122*t1520*t159 + t1437*t733 + t1419*t755 + t1492*t761 + 0.1305*(-1.*t122*t159*t330 + t124*t761) + t1597*t793 + t1624*t824 + t1658*t836 + t1674*t866 + t1696*t872 + t1718*t888 + t1741*t895 + t1755*t903 + t1792*t918 + t1847*t953 - 1.03354*(t64*t918 - 1.*t666*t953) + var1[1];
  p_output1[14]=0. - 0.05315*t1300 + t1016*t1492 + t122*t1419*t157 + t1027*t1597 + t1062*t1624 + t1068*t1658 + t1097*t1674 + t1112*t1696 + t1148*t1718 + t1159*t1741 + t1173*t1755 + t1194*t1792 + t1216*t1847 - 1.*t1520*t216 + t122*t1437*t252 + 0.1305*(t1016*t124 + t216*t330) - 1.03354*(t1194*t64 - 1.*t1216*t666) + var1[2];
  p_output1[15]=1.;
}



void T_LeftToeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
