/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftShin_src.h"

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
  double t161;
  double t221;
  double t277;
  double t262;
  double t291;
  double t194;
  double t412;
  double t422;
  double t441;
  double t266;
  double t293;
  double t396;
  double t463;
  double t151;
  double t518;
  double t529;
  double t532;
  double t172;
  double t177;
  double t180;
  double t404;
  double t486;
  double t489;
  double t490;
  double t499;
  double t511;
  double t539;
  double t584;
  double t514;
  double t557;
  double t562;
  double t140;
  double t614;
  double t628;
  double t632;
  double t84;
  double t826;
  double t833;
  double t860;
  double t734;
  double t753;
  double t755;
  double t888;
  double t892;
  double t896;
  double t732;
  double t818;
  double t861;
  double t863;
  double t870;
  double t874;
  double t669;
  double t884;
  double t906;
  double t919;
  double t930;
  double t934;
  double t950;
  double t1026;
  double t1027;
  double t1030;
  double t1001;
  double t1009;
  double t1014;
  double t1015;
  double t1018;
  double t1020;
  double t1021;
  double t1045;
  double t1050;
  double t1083;
  double t1088;
  double t1099;
  double t577;
  double t650;
  double t658;
  double t677;
  double t680;
  double t685;
  double t924;
  double t956;
  double t958;
  double t968;
  double t984;
  double t990;
  double t1079;
  double t1118;
  double t1121;
  double t1125;
  double t1126;
  double t1129;
  double t1366;
  double t1372;
  double t1457;
  double t1461;
  double t1642;
  double t1650;
  double t1748;
  double t1752;
  double t1838;
  double t1853;
  double t1187;
  double t1189;
  double t1190;
  double t1383;
  double t1387;
  double t1390;
  double t1413;
  double t1429;
  double t1430;
  double t1465;
  double t1477;
  double t1480;
  double t1495;
  double t1508;
  double t1570;
  double t1660;
  double t1691;
  double t1694;
  double t1711;
  double t1720;
  double t1721;
  double t1753;
  double t1768;
  double t1797;
  double t1806;
  double t1820;
  double t1828;
  double t1869;
  double t1872;
  double t1873;
  double t1902;
  double t1904;
  double t1909;
  double t1193;
  double t1203;
  double t1204;
  double t1237;
  double t1239;
  double t1247;
  t161 = Cos(var1[3]);
  t221 = Cos(var1[5]);
  t277 = Sin(var1[4]);
  t262 = Sin(var1[3]);
  t291 = Sin(var1[5]);
  t194 = Cos(var1[6]);
  t412 = t161*t221*t277;
  t422 = t262*t291;
  t441 = t412 + t422;
  t266 = -1.*t221*t262;
  t293 = t161*t277*t291;
  t396 = t266 + t293;
  t463 = Sin(var1[6]);
  t151 = Cos(var1[8]);
  t518 = t194*t441;
  t529 = -1.*t396*t463;
  t532 = t518 + t529;
  t172 = Cos(var1[4]);
  t177 = Cos(var1[7]);
  t180 = t161*t172*t177;
  t404 = t194*t396;
  t486 = t441*t463;
  t489 = t404 + t486;
  t490 = Sin(var1[7]);
  t499 = t489*t490;
  t511 = t180 + t499;
  t539 = Sin(var1[8]);
  t584 = Cos(var1[9]);
  t514 = t151*t511;
  t557 = t532*t539;
  t562 = t514 + t557;
  t140 = Sin(var1[9]);
  t614 = t151*t532;
  t628 = -1.*t511*t539;
  t632 = t614 + t628;
  t84 = Cos(var1[10]);
  t826 = t221*t262*t277;
  t833 = -1.*t161*t291;
  t860 = t826 + t833;
  t734 = t161*t221;
  t753 = t262*t277*t291;
  t755 = t734 + t753;
  t888 = t194*t860;
  t892 = -1.*t755*t463;
  t896 = t888 + t892;
  t732 = t172*t177*t262;
  t818 = t194*t755;
  t861 = t860*t463;
  t863 = t818 + t861;
  t870 = t863*t490;
  t874 = t732 + t870;
  t669 = Sin(var1[10]);
  t884 = t151*t874;
  t906 = t896*t539;
  t919 = t884 + t906;
  t930 = t151*t896;
  t934 = -1.*t874*t539;
  t950 = t930 + t934;
  t1026 = t172*t221*t194;
  t1027 = -1.*t172*t291*t463;
  t1030 = t1026 + t1027;
  t1001 = -1.*t177*t277;
  t1009 = t172*t194*t291;
  t1014 = t172*t221*t463;
  t1015 = t1009 + t1014;
  t1018 = t1015*t490;
  t1020 = t1001 + t1018;
  t1021 = t151*t1020;
  t1045 = t1030*t539;
  t1050 = t1021 + t1045;
  t1083 = t151*t1030;
  t1088 = -1.*t1020*t539;
  t1099 = t1083 + t1088;
  t577 = -1.*t140*t562;
  t650 = t584*t632;
  t658 = t577 + t650;
  t677 = t584*t562;
  t680 = t140*t632;
  t685 = t677 + t680;
  t924 = -1.*t140*t919;
  t956 = t584*t950;
  t958 = t924 + t956;
  t968 = t584*t919;
  t984 = t140*t950;
  t990 = t968 + t984;
  t1079 = -1.*t140*t1050;
  t1118 = t584*t1099;
  t1121 = t1079 + t1118;
  t1125 = t584*t1050;
  t1126 = t140*t1099;
  t1129 = t1125 + t1126;
  t1366 = -1.*t194;
  t1372 = 1. + t1366;
  t1457 = -1.*t177;
  t1461 = 1. + t1457;
  t1642 = -1.*t151;
  t1650 = 1. + t1642;
  t1748 = -1.*t584;
  t1752 = 1. + t1748;
  t1838 = -1.*t84;
  t1853 = 1. + t1838;
  t1187 = t669*t658;
  t1189 = t84*t685;
  t1190 = t1187 + t1189;
  t1383 = 0.07996*t1372;
  t1387 = -0.135*t463;
  t1390 = 0. + t1383 + t1387;
  t1413 = 0.135*t1372;
  t1429 = 0.07996*t463;
  t1430 = 0. + t1413 + t1429;
  t1465 = 0.135*t1461;
  t1477 = 0.08055*t490;
  t1480 = 0. + t1465 + t1477;
  t1495 = -0.08055*t1461;
  t1508 = 0.135*t490;
  t1570 = 0. + t1495 + t1508;
  t1660 = -0.08055*t1650;
  t1691 = -0.01004*t539;
  t1694 = 0. + t1660 + t1691;
  t1711 = -0.01004*t1650;
  t1720 = 0.08055*t539;
  t1721 = 0. + t1711 + t1720;
  t1753 = -0.08055*t1752;
  t1768 = -0.13004*t140;
  t1797 = 0. + t1753 + t1768;
  t1806 = -0.13004*t1752;
  t1820 = 0.08055*t140;
  t1828 = 0. + t1806 + t1820;
  t1869 = -0.19074*t1853;
  t1872 = 0.03315*t669;
  t1873 = 0. + t1869 + t1872;
  t1902 = -0.03315*t1853;
  t1904 = -0.19074*t669;
  t1909 = 0. + t1902 + t1904;
  t1193 = t669*t958;
  t1203 = t84*t990;
  t1204 = t1193 + t1203;
  t1237 = t669*t1121;
  t1239 = t84*t1129;
  t1247 = t1237 + t1239;
  p_output1[0]=t669*t685 - 1.*t658*t84;
  p_output1[1]=-1.*t84*t958 + t669*t990;
  p_output1[2]=t1129*t669 - 1.*t1121*t84;
  p_output1[3]=0.;
  p_output1[4]=t1190;
  p_output1[5]=t1204;
  p_output1[6]=t1247;
  p_output1[7]=0.;
  p_output1[8]=-1.*t177*t489 + t161*t172*t490;
  p_output1[9]=t172*t262*t490 - 1.*t177*t863;
  p_output1[10]=-1.*t1015*t177 - 1.*t277*t490;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.03195*t1190 + t1570*t161*t172 + t1430*t396 + t1390*t441 + t1480*t489 + 0.1303*(t177*t489 - 1.*t161*t172*t490) + t1694*t511 + t1721*t532 + t1797*t562 + t1828*t632 + t1873*t658 + t1909*t685 - 0.37414*(-1.*t669*t685 + t658*t84) + var1[0];
  p_output1[13]=0. - 0.03195*t1204 + t1570*t172*t262 + t1430*t755 + t1390*t860 + t1480*t863 + 0.1303*(-1.*t172*t262*t490 + t177*t863) + t1694*t874 + t1721*t896 + t1797*t919 + t1828*t950 + t1873*t958 + t1909*t990 - 0.37414*(t84*t958 - 1.*t669*t990) + var1[1];
  p_output1[14]=0. - 0.03195*t1247 + t1015*t1480 + t1020*t1694 + t1030*t1721 + t1050*t1797 + t1099*t1828 + t1121*t1873 + t1129*t1909 + t1390*t172*t221 - 1.*t1570*t277 + t1430*t172*t291 + 0.1303*(t1015*t177 + t277*t490) - 0.37414*(-1.*t1129*t669 + t1121*t84) + var1[2];
  p_output1[15]=1.;
}



void T_LeftShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
