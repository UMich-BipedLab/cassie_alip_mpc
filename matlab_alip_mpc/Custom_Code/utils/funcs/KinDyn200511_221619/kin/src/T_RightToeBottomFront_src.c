/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:34:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightToeBottomFront_src.h"

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
  double t160;
  double t209;
  double t117;
  double t164;
  double t215;
  double t307;
  double t205;
  double t218;
  double t238;
  double t116;
  double t328;
  double t355;
  double t364;
  double t398;
  double t277;
  double t375;
  double t380;
  double t85;
  double t409;
  double t421;
  double t423;
  double t424;
  double t426;
  double t428;
  double t433;
  double t436;
  double t438;
  double t462;
  double t385;
  double t439;
  double t453;
  double t79;
  double t463;
  double t483;
  double t486;
  double t509;
  double t458;
  double t488;
  double t495;
  double t78;
  double t515;
  double t523;
  double t525;
  double t583;
  double t504;
  double t551;
  double t564;
  double t75;
  double t589;
  double t591;
  double t593;
  double t632;
  double t567;
  double t594;
  double t618;
  double t60;
  double t655;
  double t661;
  double t670;
  double t724;
  double t738;
  double t742;
  double t746;
  double t752;
  double t753;
  double t743;
  double t768;
  double t769;
  double t775;
  double t780;
  double t794;
  double t804;
  double t813;
  double t817;
  double t774;
  double t819;
  double t820;
  double t830;
  double t837;
  double t853;
  double t827;
  double t855;
  double t856;
  double t869;
  double t872;
  double t883;
  double t861;
  double t890;
  double t891;
  double t899;
  double t929;
  double t938;
  double t892;
  double t939;
  double t943;
  double t962;
  double t966;
  double t967;
  double t1029;
  double t1043;
  double t1055;
  double t1075;
  double t1091;
  double t1105;
  double t1112;
  double t1119;
  double t1128;
  double t1071;
  double t1132;
  double t1141;
  double t1143;
  double t1145;
  double t1150;
  double t1142;
  double t1151;
  double t1153;
  double t1164;
  double t1170;
  double t1182;
  double t1158;
  double t1188;
  double t1191;
  double t1201;
  double t1207;
  double t1220;
  double t1196;
  double t1230;
  double t1231;
  double t1250;
  double t1263;
  double t1269;
  double t626;
  double t672;
  double t675;
  double t691;
  double t696;
  double t711;
  double t948;
  double t974;
  double t993;
  double t998;
  double t1000;
  double t1009;
  double t1244;
  double t1275;
  double t1277;
  double t1303;
  double t1306;
  double t1333;
  double t1577;
  double t1593;
  double t1519;
  double t1521;
  double t1349;
  double t1354;
  double t1367;
  double t1653;
  double t1656;
  double t1697;
  double t1699;
  double t1736;
  double t1751;
  double t1810;
  double t1816;
  double t1882;
  double t1889;
  double t1534;
  double t1565;
  double t1570;
  double t1597;
  double t1605;
  double t1608;
  double t1619;
  double t1629;
  double t1631;
  double t1636;
  double t1644;
  double t1646;
  double t1657;
  double t1662;
  double t1669;
  double t1371;
  double t1378;
  double t1413;
  double t1681;
  double t1689;
  double t1692;
  double t1708;
  double t1712;
  double t1713;
  double t1718;
  double t1724;
  double t1727;
  double t1753;
  double t1756;
  double t1760;
  double t1770;
  double t1777;
  double t1790;
  double t1834;
  double t1843;
  double t1844;
  double t1862;
  double t1863;
  double t1869;
  double t1890;
  double t1893;
  double t1901;
  double t1907;
  double t1908;
  double t1914;
  double t1419;
  double t1422;
  double t1435;
  t160 = Cos(var1[5]);
  t209 = Sin(var1[3]);
  t117 = Cos(var1[3]);
  t164 = Sin(var1[4]);
  t215 = Sin(var1[5]);
  t307 = Sin(var1[13]);
  t205 = t117*t160*t164;
  t218 = t209*t215;
  t238 = t205 + t218;
  t116 = Cos(var1[13]);
  t328 = -1.*t160*t209;
  t355 = t117*t164*t215;
  t364 = t328 + t355;
  t398 = Cos(var1[15]);
  t277 = t116*t238;
  t375 = -1.*t307*t364;
  t380 = t277 + t375;
  t85 = Sin(var1[15]);
  t409 = Cos(var1[14]);
  t421 = Cos(var1[4]);
  t423 = t409*t117*t421;
  t424 = Sin(var1[14]);
  t426 = t307*t238;
  t428 = t116*t364;
  t433 = t426 + t428;
  t436 = t424*t433;
  t438 = t423 + t436;
  t462 = Cos(var1[16]);
  t385 = t85*t380;
  t439 = t398*t438;
  t453 = t385 + t439;
  t79 = Sin(var1[16]);
  t463 = t398*t380;
  t483 = -1.*t85*t438;
  t486 = t463 + t483;
  t509 = Cos(var1[17]);
  t458 = -1.*t79*t453;
  t488 = t462*t486;
  t495 = t458 + t488;
  t78 = Sin(var1[17]);
  t515 = t462*t453;
  t523 = t79*t486;
  t525 = t515 + t523;
  t583 = Cos(var1[18]);
  t504 = t78*t495;
  t551 = t509*t525;
  t564 = t504 + t551;
  t75 = Sin(var1[18]);
  t589 = t509*t495;
  t591 = -1.*t78*t525;
  t593 = t589 + t591;
  t632 = Cos(var1[19]);
  t567 = -1.*t75*t564;
  t594 = t583*t593;
  t618 = t567 + t594;
  t60 = Sin(var1[19]);
  t655 = t583*t564;
  t661 = t75*t593;
  t670 = t655 + t661;
  t724 = t160*t209*t164;
  t738 = -1.*t117*t215;
  t742 = t724 + t738;
  t746 = t117*t160;
  t752 = t209*t164*t215;
  t753 = t746 + t752;
  t743 = t116*t742;
  t768 = -1.*t307*t753;
  t769 = t743 + t768;
  t775 = t409*t421*t209;
  t780 = t307*t742;
  t794 = t116*t753;
  t804 = t780 + t794;
  t813 = t424*t804;
  t817 = t775 + t813;
  t774 = t85*t769;
  t819 = t398*t817;
  t820 = t774 + t819;
  t830 = t398*t769;
  t837 = -1.*t85*t817;
  t853 = t830 + t837;
  t827 = -1.*t79*t820;
  t855 = t462*t853;
  t856 = t827 + t855;
  t869 = t462*t820;
  t872 = t79*t853;
  t883 = t869 + t872;
  t861 = t78*t856;
  t890 = t509*t883;
  t891 = t861 + t890;
  t899 = t509*t856;
  t929 = -1.*t78*t883;
  t938 = t899 + t929;
  t892 = -1.*t75*t891;
  t939 = t583*t938;
  t943 = t892 + t939;
  t962 = t583*t891;
  t966 = t75*t938;
  t967 = t962 + t966;
  t1029 = t116*t421*t160;
  t1043 = -1.*t421*t307*t215;
  t1055 = t1029 + t1043;
  t1075 = -1.*t409*t164;
  t1091 = t421*t160*t307;
  t1105 = t116*t421*t215;
  t1112 = t1091 + t1105;
  t1119 = t424*t1112;
  t1128 = t1075 + t1119;
  t1071 = t85*t1055;
  t1132 = t398*t1128;
  t1141 = t1071 + t1132;
  t1143 = t398*t1055;
  t1145 = -1.*t85*t1128;
  t1150 = t1143 + t1145;
  t1142 = -1.*t79*t1141;
  t1151 = t462*t1150;
  t1153 = t1142 + t1151;
  t1164 = t462*t1141;
  t1170 = t79*t1150;
  t1182 = t1164 + t1170;
  t1158 = t78*t1153;
  t1188 = t509*t1182;
  t1191 = t1158 + t1188;
  t1201 = t509*t1153;
  t1207 = -1.*t78*t1182;
  t1220 = t1201 + t1207;
  t1196 = -1.*t75*t1191;
  t1230 = t583*t1220;
  t1231 = t1196 + t1230;
  t1250 = t583*t1191;
  t1263 = t75*t1220;
  t1269 = t1250 + t1263;
  t626 = t60*t618;
  t672 = t632*t670;
  t675 = t626 + t672;
  t691 = t632*t618;
  t696 = -1.*t60*t670;
  t711 = t691 + t696;
  t948 = t60*t943;
  t974 = t632*t967;
  t993 = t948 + t974;
  t998 = t632*t943;
  t1000 = -1.*t60*t967;
  t1009 = t998 + t1000;
  t1244 = t60*t1231;
  t1275 = t632*t1269;
  t1277 = t1244 + t1275;
  t1303 = t632*t1231;
  t1306 = -1.*t60*t1269;
  t1333 = t1303 + t1306;
  t1577 = -1.*t116;
  t1593 = 1. + t1577;
  t1519 = -1.*t409;
  t1521 = 1. + t1519;
  t1349 = -1.*t117*t421*t424;
  t1354 = t409*t433;
  t1367 = t1349 + t1354;
  t1653 = -1.*t398;
  t1656 = 1. + t1653;
  t1697 = -1.*t462;
  t1699 = 1. + t1697;
  t1736 = -1.*t509;
  t1751 = 1. + t1736;
  t1810 = -1.*t583;
  t1816 = 1. + t1810;
  t1882 = -1.*t632;
  t1889 = 1. + t1882;
  t1534 = -0.08055*t1521;
  t1565 = -0.135*t424;
  t1570 = 0. + t1534 + t1565;
  t1597 = 0.07996*t1593;
  t1605 = 0.135*t307;
  t1608 = 0. + t1597 + t1605;
  t1619 = -0.135*t1593;
  t1629 = 0.07996*t307;
  t1631 = 0. + t1619 + t1629;
  t1636 = -0.135*t1521;
  t1644 = 0.08055*t424;
  t1646 = 0. + t1636 + t1644;
  t1657 = -0.01004*t1656;
  t1662 = 0.08055*t85;
  t1669 = 0. + t1657 + t1662;
  t1371 = -1.*t421*t424*t209;
  t1378 = t409*t804;
  t1413 = t1371 + t1378;
  t1681 = -0.08055*t1656;
  t1689 = -0.01004*t85;
  t1692 = 0. + t1681 + t1689;
  t1708 = -0.08055*t1699;
  t1712 = -0.13004*t79;
  t1713 = 0. + t1708 + t1712;
  t1718 = -0.13004*t1699;
  t1724 = 0.08055*t79;
  t1727 = 0. + t1718 + t1724;
  t1753 = -0.19074*t1751;
  t1756 = 0.03315*t78;
  t1760 = 0. + t1753 + t1756;
  t1770 = -0.03315*t1751;
  t1777 = -0.19074*t78;
  t1790 = 0. + t1770 + t1777;
  t1834 = -0.01315*t1816;
  t1843 = -0.62554*t75;
  t1844 = 0. + t1834 + t1843;
  t1862 = -0.62554*t1816;
  t1863 = 0.01315*t75;
  t1869 = 0. + t1862 + t1863;
  t1890 = -1.03354*t1889;
  t1893 = 0.05315*t60;
  t1901 = 0. + t1890 + t1893;
  t1907 = -0.05315*t1889;
  t1908 = -1.03354*t60;
  t1914 = 0. + t1907 + t1908;
  t1419 = t424*t164;
  t1422 = t409*t1112;
  t1435 = t1419 + t1422;
  p_output1[0]=0.642788*t675 + 0.766044*t711;
  p_output1[1]=0.766044*t1009 + 0.642788*t993;
  p_output1[2]=0.642788*t1277 + 0.766044*t1333;
  p_output1[3]=0.;
  p_output1[4]=t1367;
  p_output1[5]=t1413;
  p_output1[6]=t1435;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t675 + 0.642788*t711;
  p_output1[9]=0.642788*t1009 - 0.766044*t993;
  p_output1[10]=-0.766044*t1277 + 0.642788*t1333;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*t1367 + t1608*t238 + t1631*t364 + t1669*t380 + t117*t1570*t421 + t1646*t433 + t1692*t438 + t1713*t453 + t1727*t486 + t1760*t495 + t1790*t525 + t1844*t564 + t1869*t593 + t1901*t618 + t1914*t670 + 0.046027*t675 - 0.979698*t711 + var1[0];
  p_output1[13]=0. - 0.979698*t1009 - 0.1305*t1413 + t1570*t209*t421 + t1608*t742 + t1631*t753 + t1669*t769 + t1646*t804 + t1692*t817 + t1713*t820 + t1727*t853 + t1760*t856 + t1790*t883 + t1844*t891 + t1869*t938 + t1901*t943 + t1914*t967 + 0.046027*t993 + var1[1];
  p_output1[14]=0. + 0.046027*t1277 - 0.979698*t1333 - 0.1305*t1435 - 1.*t1570*t164 + t1112*t1646 + t1055*t1669 + t1128*t1692 + t1141*t1713 + t1150*t1727 + t1153*t1760 + t1182*t1790 + t1191*t1844 + t1220*t1869 + t1231*t1901 + t1269*t1914 + t160*t1608*t421 + t1631*t215*t421 + var1[2];
  p_output1[15]=1.;
}



void T_RightToeBottomFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
