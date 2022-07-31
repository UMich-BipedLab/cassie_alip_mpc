/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftToeBottomFront_src.h"

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
  double t132;
  double t158;
  double t199;
  double t178;
  double t206;
  double t156;
  double t236;
  double t244;
  double t267;
  double t197;
  double t209;
  double t214;
  double t277;
  double t108;
  double t336;
  double t337;
  double t344;
  double t146;
  double t152;
  double t154;
  double t224;
  double t281;
  double t293;
  double t311;
  double t313;
  double t314;
  double t374;
  double t427;
  double t321;
  double t396;
  double t400;
  double t90;
  double t432;
  double t433;
  double t445;
  double t463;
  double t423;
  double t460;
  double t461;
  double t52;
  double t486;
  double t490;
  double t492;
  double t520;
  double t462;
  double t504;
  double t510;
  double t50;
  double t528;
  double t540;
  double t568;
  double t598;
  double t512;
  double t579;
  double t582;
  double t11;
  double t611;
  double t614;
  double t616;
  double t727;
  double t736;
  double t745;
  double t686;
  double t701;
  double t714;
  double t794;
  double t815;
  double t825;
  double t681;
  double t725;
  double t746;
  double t754;
  double t762;
  double t789;
  double t793;
  double t830;
  double t832;
  double t841;
  double t845;
  double t850;
  double t840;
  double t866;
  double t868;
  double t890;
  double t899;
  double t908;
  double t887;
  double t915;
  double t918;
  double t945;
  double t957;
  double t971;
  double t936;
  double t976;
  double t983;
  double t989;
  double t990;
  double t995;
  double t1100;
  double t1102;
  double t1105;
  double t1046;
  double t1049;
  double t1051;
  double t1065;
  double t1073;
  double t1083;
  double t1095;
  double t1133;
  double t1137;
  double t1159;
  double t1171;
  double t1174;
  double t1145;
  double t1179;
  double t1194;
  double t1199;
  double t1214;
  double t1216;
  double t1195;
  double t1226;
  double t1232;
  double t1248;
  double t1255;
  double t1256;
  double t1239;
  double t1262;
  double t1274;
  double t1325;
  double t1340;
  double t1341;
  double t591;
  double t629;
  double t651;
  double t655;
  double t658;
  double t669;
  double t985;
  double t1001;
  double t1009;
  double t1016;
  double t1017;
  double t1020;
  double t1305;
  double t1342;
  double t1346;
  double t1375;
  double t1392;
  double t1412;
  double t1606;
  double t1612;
  double t1660;
  double t1685;
  double t1423;
  double t1428;
  double t1430;
  double t1752;
  double t1756;
  double t1840;
  double t1846;
  double t1873;
  double t1878;
  double t1945;
  double t1947;
  double t1994;
  double t1997;
  double t1624;
  double t1636;
  double t1638;
  double t1642;
  double t1648;
  double t1657;
  double t1689;
  double t1712;
  double t1716;
  double t1728;
  double t1734;
  double t1740;
  double t1440;
  double t1448;
  double t1471;
  double t1775;
  double t1783;
  double t1798;
  double t1803;
  double t1816;
  double t1818;
  double t1847;
  double t1849;
  double t1857;
  double t1862;
  double t1866;
  double t1869;
  double t1888;
  double t1900;
  double t1902;
  double t1911;
  double t1922;
  double t1923;
  double t1948;
  double t1955;
  double t1966;
  double t1974;
  double t1985;
  double t1988;
  double t2002;
  double t2006;
  double t2012;
  double t2025;
  double t2033;
  double t2036;
  double t1472;
  double t1478;
  double t1480;
  t132 = Cos(var1[3]);
  t158 = Cos(var1[5]);
  t199 = Sin(var1[4]);
  t178 = Sin(var1[3]);
  t206 = Sin(var1[5]);
  t156 = Cos(var1[6]);
  t236 = t132*t158*t199;
  t244 = t178*t206;
  t267 = t236 + t244;
  t197 = -1.*t158*t178;
  t209 = t132*t199*t206;
  t214 = t197 + t209;
  t277 = Sin(var1[6]);
  t108 = Cos(var1[8]);
  t336 = t156*t267;
  t337 = -1.*t214*t277;
  t344 = t336 + t337;
  t146 = Cos(var1[4]);
  t152 = Cos(var1[7]);
  t154 = t132*t146*t152;
  t224 = t156*t214;
  t281 = t267*t277;
  t293 = t224 + t281;
  t311 = Sin(var1[7]);
  t313 = t293*t311;
  t314 = t154 + t313;
  t374 = Sin(var1[8]);
  t427 = Cos(var1[9]);
  t321 = t108*t314;
  t396 = t344*t374;
  t400 = t321 + t396;
  t90 = Sin(var1[9]);
  t432 = t108*t344;
  t433 = -1.*t314*t374;
  t445 = t432 + t433;
  t463 = Cos(var1[10]);
  t423 = -1.*t90*t400;
  t460 = t427*t445;
  t461 = t423 + t460;
  t52 = Sin(var1[10]);
  t486 = t427*t400;
  t490 = t90*t445;
  t492 = t486 + t490;
  t520 = Cos(var1[11]);
  t462 = t52*t461;
  t504 = t463*t492;
  t510 = t462 + t504;
  t50 = Sin(var1[11]);
  t528 = t463*t461;
  t540 = -1.*t52*t492;
  t568 = t528 + t540;
  t598 = Cos(var1[12]);
  t512 = -1.*t50*t510;
  t579 = t520*t568;
  t582 = t512 + t579;
  t11 = Sin(var1[12]);
  t611 = t520*t510;
  t614 = t50*t568;
  t616 = t611 + t614;
  t727 = t158*t178*t199;
  t736 = -1.*t132*t206;
  t745 = t727 + t736;
  t686 = t132*t158;
  t701 = t178*t199*t206;
  t714 = t686 + t701;
  t794 = t156*t745;
  t815 = -1.*t714*t277;
  t825 = t794 + t815;
  t681 = t146*t152*t178;
  t725 = t156*t714;
  t746 = t745*t277;
  t754 = t725 + t746;
  t762 = t754*t311;
  t789 = t681 + t762;
  t793 = t108*t789;
  t830 = t825*t374;
  t832 = t793 + t830;
  t841 = t108*t825;
  t845 = -1.*t789*t374;
  t850 = t841 + t845;
  t840 = -1.*t90*t832;
  t866 = t427*t850;
  t868 = t840 + t866;
  t890 = t427*t832;
  t899 = t90*t850;
  t908 = t890 + t899;
  t887 = t52*t868;
  t915 = t463*t908;
  t918 = t887 + t915;
  t945 = t463*t868;
  t957 = -1.*t52*t908;
  t971 = t945 + t957;
  t936 = -1.*t50*t918;
  t976 = t520*t971;
  t983 = t936 + t976;
  t989 = t520*t918;
  t990 = t50*t971;
  t995 = t989 + t990;
  t1100 = t146*t158*t156;
  t1102 = -1.*t146*t206*t277;
  t1105 = t1100 + t1102;
  t1046 = -1.*t152*t199;
  t1049 = t146*t156*t206;
  t1051 = t146*t158*t277;
  t1065 = t1049 + t1051;
  t1073 = t1065*t311;
  t1083 = t1046 + t1073;
  t1095 = t108*t1083;
  t1133 = t1105*t374;
  t1137 = t1095 + t1133;
  t1159 = t108*t1105;
  t1171 = -1.*t1083*t374;
  t1174 = t1159 + t1171;
  t1145 = -1.*t90*t1137;
  t1179 = t427*t1174;
  t1194 = t1145 + t1179;
  t1199 = t427*t1137;
  t1214 = t90*t1174;
  t1216 = t1199 + t1214;
  t1195 = t52*t1194;
  t1226 = t463*t1216;
  t1232 = t1195 + t1226;
  t1248 = t463*t1194;
  t1255 = -1.*t52*t1216;
  t1256 = t1248 + t1255;
  t1239 = -1.*t50*t1232;
  t1262 = t520*t1256;
  t1274 = t1239 + t1262;
  t1325 = t520*t1232;
  t1340 = t50*t1256;
  t1341 = t1325 + t1340;
  t591 = t11*t582;
  t629 = t598*t616;
  t651 = t591 + t629;
  t655 = t598*t582;
  t658 = -1.*t11*t616;
  t669 = t655 + t658;
  t985 = t11*t983;
  t1001 = t598*t995;
  t1009 = t985 + t1001;
  t1016 = t598*t983;
  t1017 = -1.*t11*t995;
  t1020 = t1016 + t1017;
  t1305 = t11*t1274;
  t1342 = t598*t1341;
  t1346 = t1305 + t1342;
  t1375 = t598*t1274;
  t1392 = -1.*t11*t1341;
  t1412 = t1375 + t1392;
  t1606 = -1.*t156;
  t1612 = 1. + t1606;
  t1660 = -1.*t152;
  t1685 = 1. + t1660;
  t1423 = t152*t293;
  t1428 = -1.*t132*t146*t311;
  t1430 = t1423 + t1428;
  t1752 = -1.*t108;
  t1756 = 1. + t1752;
  t1840 = -1.*t427;
  t1846 = 1. + t1840;
  t1873 = -1.*t463;
  t1878 = 1. + t1873;
  t1945 = -1.*t520;
  t1947 = 1. + t1945;
  t1994 = -1.*t598;
  t1997 = 1. + t1994;
  t1624 = 0.07996*t1612;
  t1636 = -0.135*t277;
  t1638 = 0. + t1624 + t1636;
  t1642 = 0.135*t1612;
  t1648 = 0.07996*t277;
  t1657 = 0. + t1642 + t1648;
  t1689 = 0.135*t1685;
  t1712 = 0.08055*t311;
  t1716 = 0. + t1689 + t1712;
  t1728 = -0.08055*t1685;
  t1734 = 0.135*t311;
  t1740 = 0. + t1728 + t1734;
  t1440 = t152*t754;
  t1448 = -1.*t146*t178*t311;
  t1471 = t1440 + t1448;
  t1775 = -0.08055*t1756;
  t1783 = -0.01004*t374;
  t1798 = 0. + t1775 + t1783;
  t1803 = -0.01004*t1756;
  t1816 = 0.08055*t374;
  t1818 = 0. + t1803 + t1816;
  t1847 = -0.08055*t1846;
  t1849 = -0.13004*t90;
  t1857 = 0. + t1847 + t1849;
  t1862 = -0.13004*t1846;
  t1866 = 0.08055*t90;
  t1869 = 0. + t1862 + t1866;
  t1888 = -0.19074*t1878;
  t1900 = 0.03315*t52;
  t1902 = 0. + t1888 + t1900;
  t1911 = -0.03315*t1878;
  t1922 = -0.19074*t52;
  t1923 = 0. + t1911 + t1922;
  t1948 = -0.01315*t1947;
  t1955 = -0.62554*t50;
  t1966 = 0. + t1948 + t1955;
  t1974 = -0.62554*t1947;
  t1985 = 0.01315*t50;
  t1988 = 0. + t1974 + t1985;
  t2002 = -1.03354*t1997;
  t2006 = 0.05315*t11;
  t2012 = 0. + t2002 + t2006;
  t2025 = -0.05315*t1997;
  t2033 = -1.03354*t11;
  t2036 = 0. + t2025 + t2033;
  t1472 = t152*t1065;
  t1478 = t199*t311;
  t1480 = t1472 + t1478;
  p_output1[0]=0.642788*t651 + 0.766044*t669;
  p_output1[1]=0.642788*t1009 + 0.766044*t1020;
  p_output1[2]=0.642788*t1346 + 0.766044*t1412;
  p_output1[3]=0.;
  p_output1[4]=t1430;
  p_output1[5]=t1471;
  p_output1[6]=t1480;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t651 + 0.642788*t669;
  p_output1[9]=-0.766044*t1009 + 0.642788*t1020;
  p_output1[10]=-0.766044*t1346 + 0.642788*t1412;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1305*t1430 + t132*t146*t1740 + t1657*t214 + t1638*t267 + t1716*t293 + t1798*t314 + t1818*t344 + t1857*t400 + t1869*t445 + t1902*t461 + t1923*t492 + t1966*t510 + t1988*t568 + t2012*t582 + t2036*t616 + 0.046027*t651 - 0.979698*t669 + var1[0];
  p_output1[13]=0. + 0.046027*t1009 - 0.979698*t1020 + 0.1305*t1471 + t146*t1740*t178 + t1657*t714 + t1638*t745 + t1716*t754 + t1798*t789 + t1818*t825 + t1857*t832 + t1869*t850 + t1902*t868 + t1923*t908 + t1966*t918 + t1988*t971 + t2012*t983 + t2036*t995 + var1[1];
  p_output1[14]=0. + 0.046027*t1346 - 0.979698*t1412 + 0.1305*t1480 + t146*t158*t1638 + t1065*t1716 + t1083*t1798 + t1105*t1818 + t1137*t1857 + t1174*t1869 + t1194*t1902 + t1216*t1923 + t1232*t1966 + t1256*t1988 - 1.*t1740*t199 + t1274*t2012 + t1341*t2036 + t146*t1657*t206 + var1[2];
  p_output1[15]=1.;
}



void T_LeftToeBottomFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
