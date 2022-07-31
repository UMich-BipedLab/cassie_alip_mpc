/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:58 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightToeJoint_src.h"

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
  double t201;
  double t141;
  double t169;
  double t211;
  double t254;
  double t181;
  double t218;
  double t247;
  double t124;
  double t257;
  double t259;
  double t299;
  double t343;
  double t252;
  double t302;
  double t307;
  double t115;
  double t344;
  double t358;
  double t367;
  double t369;
  double t378;
  double t396;
  double t398;
  double t407;
  double t412;
  double t428;
  double t323;
  double t413;
  double t415;
  double t105;
  double t450;
  double t453;
  double t457;
  double t519;
  double t422;
  double t461;
  double t480;
  double t104;
  double t529;
  double t536;
  double t538;
  double t569;
  double t510;
  double t544;
  double t546;
  double t103;
  double t577;
  double t584;
  double t592;
  double t100;
  double t652;
  double t662;
  double t664;
  double t694;
  double t712;
  double t726;
  double t673;
  double t729;
  double t730;
  double t753;
  double t759;
  double t763;
  double t801;
  double t807;
  double t809;
  double t737;
  double t819;
  double t831;
  double t842;
  double t843;
  double t846;
  double t841;
  double t849;
  double t862;
  double t867;
  double t868;
  double t872;
  double t623;
  double t866;
  double t875;
  double t880;
  double t885;
  double t889;
  double t891;
  double t939;
  double t963;
  double t965;
  double t998;
  double t1005;
  double t1011;
  double t1014;
  double t1019;
  double t1022;
  double t985;
  double t1040;
  double t1046;
  double t1050;
  double t1064;
  double t1069;
  double t1047;
  double t1093;
  double t1094;
  double t1105;
  double t1107;
  double t1112;
  double t1099;
  double t1117;
  double t1119;
  double t1127;
  double t1134;
  double t1137;
  double t559;
  double t594;
  double t611;
  double t627;
  double t631;
  double t637;
  double t884;
  double t896;
  double t897;
  double t901;
  double t915;
  double t926;
  double t1126;
  double t1156;
  double t1158;
  double t1168;
  double t1170;
  double t1174;
  double t1399;
  double t1404;
  double t1320;
  double t1322;
  double t1506;
  double t1510;
  double t1573;
  double t1581;
  double t1624;
  double t1627;
  double t1672;
  double t1675;
  double t1730;
  double t1734;
  double t1211;
  double t1213;
  double t1222;
  double t1329;
  double t1339;
  double t1365;
  double t1410;
  double t1416;
  double t1426;
  double t1440;
  double t1457;
  double t1463;
  double t1480;
  double t1487;
  double t1494;
  double t1511;
  double t1520;
  double t1523;
  double t1550;
  double t1564;
  double t1567;
  double t1588;
  double t1590;
  double t1592;
  double t1607;
  double t1609;
  double t1614;
  double t1629;
  double t1631;
  double t1633;
  double t1653;
  double t1654;
  double t1659;
  double t1676;
  double t1679;
  double t1682;
  double t1706;
  double t1712;
  double t1724;
  double t1739;
  double t1764;
  double t1768;
  double t1782;
  double t1783;
  double t1791;
  double t1223;
  double t1226;
  double t1228;
  double t1235;
  double t1237;
  double t1242;
  t160 = Cos(var1[5]);
  t201 = Sin(var1[3]);
  t141 = Cos(var1[3]);
  t169 = Sin(var1[4]);
  t211 = Sin(var1[5]);
  t254 = Sin(var1[13]);
  t181 = t141*t160*t169;
  t218 = t201*t211;
  t247 = t181 + t218;
  t124 = Cos(var1[13]);
  t257 = -1.*t160*t201;
  t259 = t141*t169*t211;
  t299 = t257 + t259;
  t343 = Cos(var1[15]);
  t252 = t124*t247;
  t302 = -1.*t254*t299;
  t307 = t252 + t302;
  t115 = Sin(var1[15]);
  t344 = Cos(var1[14]);
  t358 = Cos(var1[4]);
  t367 = t344*t141*t358;
  t369 = Sin(var1[14]);
  t378 = t254*t247;
  t396 = t124*t299;
  t398 = t378 + t396;
  t407 = t369*t398;
  t412 = t367 + t407;
  t428 = Cos(var1[16]);
  t323 = t115*t307;
  t413 = t343*t412;
  t415 = t323 + t413;
  t105 = Sin(var1[16]);
  t450 = t343*t307;
  t453 = -1.*t115*t412;
  t457 = t450 + t453;
  t519 = Cos(var1[17]);
  t422 = -1.*t105*t415;
  t461 = t428*t457;
  t480 = t422 + t461;
  t104 = Sin(var1[17]);
  t529 = t428*t415;
  t536 = t105*t457;
  t538 = t529 + t536;
  t569 = Cos(var1[18]);
  t510 = t104*t480;
  t544 = t519*t538;
  t546 = t510 + t544;
  t103 = Sin(var1[18]);
  t577 = t519*t480;
  t584 = -1.*t104*t538;
  t592 = t577 + t584;
  t100 = Cos(var1[19]);
  t652 = t160*t201*t169;
  t662 = -1.*t141*t211;
  t664 = t652 + t662;
  t694 = t141*t160;
  t712 = t201*t169*t211;
  t726 = t694 + t712;
  t673 = t124*t664;
  t729 = -1.*t254*t726;
  t730 = t673 + t729;
  t753 = t344*t358*t201;
  t759 = t254*t664;
  t763 = t124*t726;
  t801 = t759 + t763;
  t807 = t369*t801;
  t809 = t753 + t807;
  t737 = t115*t730;
  t819 = t343*t809;
  t831 = t737 + t819;
  t842 = t343*t730;
  t843 = -1.*t115*t809;
  t846 = t842 + t843;
  t841 = -1.*t105*t831;
  t849 = t428*t846;
  t862 = t841 + t849;
  t867 = t428*t831;
  t868 = t105*t846;
  t872 = t867 + t868;
  t623 = Sin(var1[19]);
  t866 = t104*t862;
  t875 = t519*t872;
  t880 = t866 + t875;
  t885 = t519*t862;
  t889 = -1.*t104*t872;
  t891 = t885 + t889;
  t939 = t124*t358*t160;
  t963 = -1.*t358*t254*t211;
  t965 = t939 + t963;
  t998 = -1.*t344*t169;
  t1005 = t358*t160*t254;
  t1011 = t124*t358*t211;
  t1014 = t1005 + t1011;
  t1019 = t369*t1014;
  t1022 = t998 + t1019;
  t985 = t115*t965;
  t1040 = t343*t1022;
  t1046 = t985 + t1040;
  t1050 = t343*t965;
  t1064 = -1.*t115*t1022;
  t1069 = t1050 + t1064;
  t1047 = -1.*t105*t1046;
  t1093 = t428*t1069;
  t1094 = t1047 + t1093;
  t1105 = t428*t1046;
  t1107 = t105*t1069;
  t1112 = t1105 + t1107;
  t1099 = t104*t1094;
  t1117 = t519*t1112;
  t1119 = t1099 + t1117;
  t1127 = t519*t1094;
  t1134 = -1.*t104*t1112;
  t1137 = t1127 + t1134;
  t559 = -1.*t103*t546;
  t594 = t569*t592;
  t611 = t559 + t594;
  t627 = t569*t546;
  t631 = t103*t592;
  t637 = t627 + t631;
  t884 = -1.*t103*t880;
  t896 = t569*t891;
  t897 = t884 + t896;
  t901 = t569*t880;
  t915 = t103*t891;
  t926 = t901 + t915;
  t1126 = -1.*t103*t1119;
  t1156 = t569*t1137;
  t1158 = t1126 + t1156;
  t1168 = t569*t1119;
  t1170 = t103*t1137;
  t1174 = t1168 + t1170;
  t1399 = -1.*t124;
  t1404 = 1. + t1399;
  t1320 = -1.*t344;
  t1322 = 1. + t1320;
  t1506 = -1.*t343;
  t1510 = 1. + t1506;
  t1573 = -1.*t428;
  t1581 = 1. + t1573;
  t1624 = -1.*t519;
  t1627 = 1. + t1624;
  t1672 = -1.*t569;
  t1675 = 1. + t1672;
  t1730 = -1.*t100;
  t1734 = 1. + t1730;
  t1211 = t623*t611;
  t1213 = t100*t637;
  t1222 = t1211 + t1213;
  t1329 = -0.08055*t1322;
  t1339 = -0.135*t369;
  t1365 = 0. + t1329 + t1339;
  t1410 = 0.07996*t1404;
  t1416 = 0.135*t254;
  t1426 = 0. + t1410 + t1416;
  t1440 = -0.135*t1404;
  t1457 = 0.07996*t254;
  t1463 = 0. + t1440 + t1457;
  t1480 = -0.135*t1322;
  t1487 = 0.08055*t369;
  t1494 = 0. + t1480 + t1487;
  t1511 = -0.01004*t1510;
  t1520 = 0.08055*t115;
  t1523 = 0. + t1511 + t1520;
  t1550 = -0.08055*t1510;
  t1564 = -0.01004*t115;
  t1567 = 0. + t1550 + t1564;
  t1588 = -0.08055*t1581;
  t1590 = -0.13004*t105;
  t1592 = 0. + t1588 + t1590;
  t1607 = -0.13004*t1581;
  t1609 = 0.08055*t105;
  t1614 = 0. + t1607 + t1609;
  t1629 = -0.19074*t1627;
  t1631 = 0.03315*t104;
  t1633 = 0. + t1629 + t1631;
  t1653 = -0.03315*t1627;
  t1654 = -0.19074*t104;
  t1659 = 0. + t1653 + t1654;
  t1676 = -0.01315*t1675;
  t1679 = -0.62554*t103;
  t1682 = 0. + t1676 + t1679;
  t1706 = -0.62554*t1675;
  t1712 = 0.01315*t103;
  t1724 = 0. + t1706 + t1712;
  t1739 = -1.03354*t1734;
  t1764 = 0.05315*t623;
  t1768 = 0. + t1739 + t1764;
  t1782 = -0.05315*t1734;
  t1783 = -1.03354*t623;
  t1791 = 0. + t1782 + t1783;
  t1223 = t623*t897;
  t1226 = t100*t926;
  t1228 = t1223 + t1226;
  t1235 = t623*t1158;
  t1237 = t100*t1174;
  t1242 = t1235 + t1237;
  p_output1[0]=-1.*t100*t611 + t623*t637;
  p_output1[1]=-1.*t100*t897 + t623*t926;
  p_output1[2]=-1.*t100*t1158 + t1174*t623;
  p_output1[3]=0.;
  p_output1[4]=t1222;
  p_output1[5]=t1228;
  p_output1[6]=t1242;
  p_output1[7]=0.;
  p_output1[8]=t141*t358*t369 - 1.*t344*t398;
  p_output1[9]=t201*t358*t369 - 1.*t344*t801;
  p_output1[10]=-1.*t1014*t344 - 1.*t169*t369;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.05315*t1222 + t1426*t247 + t1463*t299 + t1523*t307 + t1365*t141*t358 + t1494*t398 - 0.1305*(-1.*t141*t358*t369 + t344*t398) + t1567*t412 + t1592*t415 + t1614*t457 + t1633*t480 + t1659*t538 + t1682*t546 + t1724*t592 + t1768*t611 + t1791*t637 - 1.03354*(t100*t611 - 1.*t623*t637) + var1[0];
  p_output1[13]=0. - 0.05315*t1228 + t1365*t201*t358 + t1426*t664 + t1463*t726 + t1523*t730 + t1494*t801 - 0.1305*(-1.*t201*t358*t369 + t344*t801) + t1567*t809 + t1592*t831 + t1614*t846 + t1633*t862 + t1659*t872 + t1682*t880 + t1724*t891 + t1768*t897 + t1791*t926 - 1.03354*(t100*t897 - 1.*t623*t926) + var1[1];
  p_output1[14]=0. - 0.05315*t1242 + t1014*t1494 + t1022*t1567 + t1046*t1592 + t1069*t1614 + t1094*t1633 + t1112*t1659 + t1119*t1682 - 1.*t1365*t169 + t1137*t1724 + t1158*t1768 + t1174*t1791 + t1426*t160*t358 + t1463*t211*t358 - 0.1305*(t1014*t344 + t169*t369) - 1.03354*(t100*t1158 - 1.*t1174*t623) + t1523*t965 + var1[2];
  p_output1[15]=1.;
}



void T_RightToeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
