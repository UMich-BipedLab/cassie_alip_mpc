/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:12 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftToeBottomBack_src.h"

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
  double t175;
  double t222;
  double t250;
  double t227;
  double t306;
  double t213;
  double t333;
  double t344;
  double t350;
  double t235;
  double t318;
  double t322;
  double t353;
  double t172;
  double t388;
  double t391;
  double t393;
  double t176;
  double t193;
  double t202;
  double t327;
  double t358;
  double t364;
  double t365;
  double t376;
  double t384;
  double t403;
  double t425;
  double t387;
  double t404;
  double t415;
  double t170;
  double t427;
  double t434;
  double t435;
  double t487;
  double t420;
  double t448;
  double t464;
  double t156;
  double t501;
  double t505;
  double t507;
  double t532;
  double t486;
  double t512;
  double t526;
  double t125;
  double t539;
  double t569;
  double t597;
  double t609;
  double t528;
  double t598;
  double t600;
  double t104;
  double t624;
  double t628;
  double t630;
  double t727;
  double t739;
  double t741;
  double t709;
  double t710;
  double t717;
  double t777;
  double t795;
  double t798;
  double t708;
  double t724;
  double t745;
  double t752;
  double t763;
  double t765;
  double t770;
  double t801;
  double t810;
  double t817;
  double t822;
  double t826;
  double t813;
  double t844;
  double t849;
  double t854;
  double t866;
  double t867;
  double t852;
  double t869;
  double t871;
  double t887;
  double t893;
  double t904;
  double t880;
  double t905;
  double t908;
  double t916;
  double t918;
  double t923;
  double t1042;
  double t1048;
  double t1049;
  double t976;
  double t986;
  double t1004;
  double t1006;
  double t1019;
  double t1028;
  double t1036;
  double t1059;
  double t1079;
  double t1103;
  double t1112;
  double t1122;
  double t1081;
  double t1124;
  double t1125;
  double t1144;
  double t1150;
  double t1153;
  double t1136;
  double t1170;
  double t1183;
  double t1202;
  double t1204;
  double t1205;
  double t1188;
  double t1209;
  double t1218;
  double t1245;
  double t1247;
  double t1254;
  double t604;
  double t663;
  double t667;
  double t673;
  double t675;
  double t676;
  double t910;
  double t924;
  double t933;
  double t944;
  double t946;
  double t950;
  double t1242;
  double t1260;
  double t1263;
  double t1284;
  double t1309;
  double t1310;
  double t1431;
  double t1433;
  double t1497;
  double t1511;
  double t1324;
  double t1340;
  double t1346;
  double t1551;
  double t1555;
  double t1609;
  double t1613;
  double t1666;
  double t1668;
  double t1706;
  double t1708;
  double t1750;
  double t1762;
  double t1434;
  double t1445;
  double t1449;
  double t1473;
  double t1475;
  double t1481;
  double t1515;
  double t1516;
  double t1518;
  double t1526;
  double t1529;
  double t1532;
  double t1349;
  double t1356;
  double t1377;
  double t1562;
  double t1568;
  double t1577;
  double t1582;
  double t1591;
  double t1593;
  double t1624;
  double t1625;
  double t1631;
  double t1644;
  double t1647;
  double t1657;
  double t1675;
  double t1680;
  double t1682;
  double t1694;
  double t1695;
  double t1697;
  double t1710;
  double t1720;
  double t1724;
  double t1729;
  double t1730;
  double t1731;
  double t1771;
  double t1775;
  double t1776;
  double t1803;
  double t1804;
  double t1810;
  double t1379;
  double t1383;
  double t1385;
  t175 = Cos(var1[3]);
  t222 = Cos(var1[5]);
  t250 = Sin(var1[4]);
  t227 = Sin(var1[3]);
  t306 = Sin(var1[5]);
  t213 = Cos(var1[6]);
  t333 = t175*t222*t250;
  t344 = t227*t306;
  t350 = t333 + t344;
  t235 = -1.*t222*t227;
  t318 = t175*t250*t306;
  t322 = t235 + t318;
  t353 = Sin(var1[6]);
  t172 = Cos(var1[8]);
  t388 = t213*t350;
  t391 = -1.*t322*t353;
  t393 = t388 + t391;
  t176 = Cos(var1[4]);
  t193 = Cos(var1[7]);
  t202 = t175*t176*t193;
  t327 = t213*t322;
  t358 = t350*t353;
  t364 = t327 + t358;
  t365 = Sin(var1[7]);
  t376 = t364*t365;
  t384 = t202 + t376;
  t403 = Sin(var1[8]);
  t425 = Cos(var1[9]);
  t387 = t172*t384;
  t404 = t393*t403;
  t415 = t387 + t404;
  t170 = Sin(var1[9]);
  t427 = t172*t393;
  t434 = -1.*t384*t403;
  t435 = t427 + t434;
  t487 = Cos(var1[10]);
  t420 = -1.*t170*t415;
  t448 = t425*t435;
  t464 = t420 + t448;
  t156 = Sin(var1[10]);
  t501 = t425*t415;
  t505 = t170*t435;
  t507 = t501 + t505;
  t532 = Cos(var1[11]);
  t486 = t156*t464;
  t512 = t487*t507;
  t526 = t486 + t512;
  t125 = Sin(var1[11]);
  t539 = t487*t464;
  t569 = -1.*t156*t507;
  t597 = t539 + t569;
  t609 = Cos(var1[12]);
  t528 = -1.*t125*t526;
  t598 = t532*t597;
  t600 = t528 + t598;
  t104 = Sin(var1[12]);
  t624 = t532*t526;
  t628 = t125*t597;
  t630 = t624 + t628;
  t727 = t222*t227*t250;
  t739 = -1.*t175*t306;
  t741 = t727 + t739;
  t709 = t175*t222;
  t710 = t227*t250*t306;
  t717 = t709 + t710;
  t777 = t213*t741;
  t795 = -1.*t717*t353;
  t798 = t777 + t795;
  t708 = t176*t193*t227;
  t724 = t213*t717;
  t745 = t741*t353;
  t752 = t724 + t745;
  t763 = t752*t365;
  t765 = t708 + t763;
  t770 = t172*t765;
  t801 = t798*t403;
  t810 = t770 + t801;
  t817 = t172*t798;
  t822 = -1.*t765*t403;
  t826 = t817 + t822;
  t813 = -1.*t170*t810;
  t844 = t425*t826;
  t849 = t813 + t844;
  t854 = t425*t810;
  t866 = t170*t826;
  t867 = t854 + t866;
  t852 = t156*t849;
  t869 = t487*t867;
  t871 = t852 + t869;
  t887 = t487*t849;
  t893 = -1.*t156*t867;
  t904 = t887 + t893;
  t880 = -1.*t125*t871;
  t905 = t532*t904;
  t908 = t880 + t905;
  t916 = t532*t871;
  t918 = t125*t904;
  t923 = t916 + t918;
  t1042 = t176*t222*t213;
  t1048 = -1.*t176*t306*t353;
  t1049 = t1042 + t1048;
  t976 = -1.*t193*t250;
  t986 = t176*t213*t306;
  t1004 = t176*t222*t353;
  t1006 = t986 + t1004;
  t1019 = t1006*t365;
  t1028 = t976 + t1019;
  t1036 = t172*t1028;
  t1059 = t1049*t403;
  t1079 = t1036 + t1059;
  t1103 = t172*t1049;
  t1112 = -1.*t1028*t403;
  t1122 = t1103 + t1112;
  t1081 = -1.*t170*t1079;
  t1124 = t425*t1122;
  t1125 = t1081 + t1124;
  t1144 = t425*t1079;
  t1150 = t170*t1122;
  t1153 = t1144 + t1150;
  t1136 = t156*t1125;
  t1170 = t487*t1153;
  t1183 = t1136 + t1170;
  t1202 = t487*t1125;
  t1204 = -1.*t156*t1153;
  t1205 = t1202 + t1204;
  t1188 = -1.*t125*t1183;
  t1209 = t532*t1205;
  t1218 = t1188 + t1209;
  t1245 = t532*t1183;
  t1247 = t125*t1205;
  t1254 = t1245 + t1247;
  t604 = t104*t600;
  t663 = t609*t630;
  t667 = t604 + t663;
  t673 = t609*t600;
  t675 = -1.*t104*t630;
  t676 = t673 + t675;
  t910 = t104*t908;
  t924 = t609*t923;
  t933 = t910 + t924;
  t944 = t609*t908;
  t946 = -1.*t104*t923;
  t950 = t944 + t946;
  t1242 = t104*t1218;
  t1260 = t609*t1254;
  t1263 = t1242 + t1260;
  t1284 = t609*t1218;
  t1309 = -1.*t104*t1254;
  t1310 = t1284 + t1309;
  t1431 = -1.*t213;
  t1433 = 1. + t1431;
  t1497 = -1.*t193;
  t1511 = 1. + t1497;
  t1324 = t193*t364;
  t1340 = -1.*t175*t176*t365;
  t1346 = t1324 + t1340;
  t1551 = -1.*t172;
  t1555 = 1. + t1551;
  t1609 = -1.*t425;
  t1613 = 1. + t1609;
  t1666 = -1.*t487;
  t1668 = 1. + t1666;
  t1706 = -1.*t532;
  t1708 = 1. + t1706;
  t1750 = -1.*t609;
  t1762 = 1. + t1750;
  t1434 = 0.07996*t1433;
  t1445 = -0.135*t353;
  t1449 = 0. + t1434 + t1445;
  t1473 = 0.135*t1433;
  t1475 = 0.07996*t353;
  t1481 = 0. + t1473 + t1475;
  t1515 = 0.135*t1511;
  t1516 = 0.08055*t365;
  t1518 = 0. + t1515 + t1516;
  t1526 = -0.08055*t1511;
  t1529 = 0.135*t365;
  t1532 = 0. + t1526 + t1529;
  t1349 = t193*t752;
  t1356 = -1.*t176*t227*t365;
  t1377 = t1349 + t1356;
  t1562 = -0.08055*t1555;
  t1568 = -0.01004*t403;
  t1577 = 0. + t1562 + t1568;
  t1582 = -0.01004*t1555;
  t1591 = 0.08055*t403;
  t1593 = 0. + t1582 + t1591;
  t1624 = -0.08055*t1613;
  t1625 = -0.13004*t170;
  t1631 = 0. + t1624 + t1625;
  t1644 = -0.13004*t1613;
  t1647 = 0.08055*t170;
  t1657 = 0. + t1644 + t1647;
  t1675 = -0.19074*t1668;
  t1680 = 0.03315*t156;
  t1682 = 0. + t1675 + t1680;
  t1694 = -0.03315*t1668;
  t1695 = -0.19074*t156;
  t1697 = 0. + t1694 + t1695;
  t1710 = -0.01315*t1708;
  t1720 = -0.62554*t125;
  t1724 = 0. + t1710 + t1720;
  t1729 = -0.62554*t1708;
  t1730 = 0.01315*t125;
  t1731 = 0. + t1729 + t1730;
  t1771 = -1.03354*t1762;
  t1775 = 0.05315*t104;
  t1776 = 0. + t1771 + t1775;
  t1803 = -0.05315*t1762;
  t1804 = -1.03354*t104;
  t1810 = 0. + t1803 + t1804;
  t1379 = t193*t1006;
  t1383 = t250*t365;
  t1385 = t1379 + t1383;
  p_output1[0]=0.642788*t667 + 0.766044*t676;
  p_output1[1]=0.642788*t933 + 0.766044*t950;
  p_output1[2]=0.642788*t1263 + 0.766044*t1310;
  p_output1[3]=0.;
  p_output1[4]=t1346;
  p_output1[5]=t1377;
  p_output1[6]=t1385;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t667 + 0.642788*t676;
  p_output1[9]=-0.766044*t933 + 0.642788*t950;
  p_output1[10]=-0.766044*t1263 + 0.642788*t1310;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*t1346 + t1532*t175*t176 + t1481*t322 + t1449*t350 + t1518*t364 + t1577*t384 + t1593*t393 + t1631*t415 + t1657*t435 + t1682*t464 + t1697*t507 + t1724*t526 + t1731*t597 + t1776*t600 + t1810*t630 - 0.063247*t667 - 1.109926*t676 + var1[0];
  p_output1[13]=0. + 0.1305*t1377 + t1532*t176*t227 + t1481*t717 + t1449*t741 + t1518*t752 + t1577*t765 + t1593*t798 + t1631*t810 + t1657*t826 + t1682*t849 + t1697*t867 + t1724*t871 + t1731*t904 + t1776*t908 + t1810*t923 - 0.063247*t933 - 1.109926*t950 + var1[1];
  p_output1[14]=0. - 0.063247*t1263 - 1.109926*t1310 + 0.1305*t1385 + t1006*t1518 + t1028*t1577 + t1049*t1593 + t1079*t1631 + t1122*t1657 + t1125*t1682 + t1153*t1697 + t1183*t1724 + t1205*t1731 + t1218*t1776 + t1254*t1810 + t1449*t176*t222 - 1.*t1532*t250 + t1481*t176*t306 + var1[2];
  p_output1[15]=1.;
}



void T_LeftToeBottomBack_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
