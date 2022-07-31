/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:15 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightToeBottom_src.h"

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
  double t183;
  double t210;
  double t135;
  double t198;
  double t217;
  double t235;
  double t207;
  double t219;
  double t229;
  double t104;
  double t269;
  double t279;
  double t281;
  double t297;
  double t233;
  double t282;
  double t286;
  double t77;
  double t304;
  double t317;
  double t324;
  double t325;
  double t349;
  double t351;
  double t361;
  double t373;
  double t386;
  double t422;
  double t296;
  double t388;
  double t405;
  double t71;
  double t426;
  double t440;
  double t443;
  double t477;
  double t408;
  double t455;
  double t471;
  double t69;
  double t501;
  double t517;
  double t520;
  double t547;
  double t476;
  double t528;
  double t540;
  double t52;
  double t549;
  double t583;
  double t588;
  double t631;
  double t545;
  double t603;
  double t614;
  double t47;
  double t636;
  double t641;
  double t649;
  double t694;
  double t695;
  double t707;
  double t733;
  double t743;
  double t754;
  double t721;
  double t756;
  double t760;
  double t772;
  double t784;
  double t785;
  double t788;
  double t791;
  double t800;
  double t767;
  double t812;
  double t819;
  double t822;
  double t825;
  double t837;
  double t820;
  double t841;
  double t851;
  double t879;
  double t884;
  double t885;
  double t878;
  double t890;
  double t891;
  double t901;
  double t910;
  double t927;
  double t893;
  double t928;
  double t930;
  double t933;
  double t956;
  double t957;
  double t1009;
  double t1016;
  double t1030;
  double t1041;
  double t1049;
  double t1063;
  double t1066;
  double t1098;
  double t1105;
  double t1033;
  double t1108;
  double t1122;
  double t1132;
  double t1158;
  double t1161;
  double t1127;
  double t1169;
  double t1171;
  double t1178;
  double t1180;
  double t1198;
  double t1175;
  double t1199;
  double t1230;
  double t1246;
  double t1251;
  double t1258;
  double t1237;
  double t1277;
  double t1278;
  double t1294;
  double t1297;
  double t1298;
  double t624;
  double t652;
  double t661;
  double t669;
  double t676;
  double t681;
  double t932;
  double t965;
  double t966;
  double t981;
  double t991;
  double t993;
  double t1283;
  double t1328;
  double t1329;
  double t1334;
  double t1344;
  double t1351;
  double t1500;
  double t1514;
  double t1457;
  double t1474;
  double t1359;
  double t1377;
  double t1404;
  double t1566;
  double t1576;
  double t1654;
  double t1660;
  double t1699;
  double t1707;
  double t1735;
  double t1737;
  double t1796;
  double t1800;
  double t1480;
  double t1483;
  double t1490;
  double t1516;
  double t1522;
  double t1524;
  double t1538;
  double t1539;
  double t1543;
  double t1549;
  double t1556;
  double t1562;
  double t1583;
  double t1587;
  double t1588;
  double t1405;
  double t1411;
  double t1413;
  double t1626;
  double t1629;
  double t1633;
  double t1665;
  double t1674;
  double t1679;
  double t1688;
  double t1694;
  double t1696;
  double t1708;
  double t1715;
  double t1720;
  double t1722;
  double t1726;
  double t1728;
  double t1742;
  double t1745;
  double t1749;
  double t1769;
  double t1771;
  double t1775;
  double t1807;
  double t1825;
  double t1827;
  double t1835;
  double t1838;
  double t1843;
  double t1415;
  double t1418;
  double t1419;
  t183 = Cos(var1[5]);
  t210 = Sin(var1[3]);
  t135 = Cos(var1[3]);
  t198 = Sin(var1[4]);
  t217 = Sin(var1[5]);
  t235 = Sin(var1[13]);
  t207 = t135*t183*t198;
  t219 = t210*t217;
  t229 = t207 + t219;
  t104 = Cos(var1[13]);
  t269 = -1.*t183*t210;
  t279 = t135*t198*t217;
  t281 = t269 + t279;
  t297 = Cos(var1[15]);
  t233 = t104*t229;
  t282 = -1.*t235*t281;
  t286 = t233 + t282;
  t77 = Sin(var1[15]);
  t304 = Cos(var1[14]);
  t317 = Cos(var1[4]);
  t324 = t304*t135*t317;
  t325 = Sin(var1[14]);
  t349 = t235*t229;
  t351 = t104*t281;
  t361 = t349 + t351;
  t373 = t325*t361;
  t386 = t324 + t373;
  t422 = Cos(var1[16]);
  t296 = t77*t286;
  t388 = t297*t386;
  t405 = t296 + t388;
  t71 = Sin(var1[16]);
  t426 = t297*t286;
  t440 = -1.*t77*t386;
  t443 = t426 + t440;
  t477 = Cos(var1[17]);
  t408 = -1.*t71*t405;
  t455 = t422*t443;
  t471 = t408 + t455;
  t69 = Sin(var1[17]);
  t501 = t422*t405;
  t517 = t71*t443;
  t520 = t501 + t517;
  t547 = Cos(var1[18]);
  t476 = t69*t471;
  t528 = t477*t520;
  t540 = t476 + t528;
  t52 = Sin(var1[18]);
  t549 = t477*t471;
  t583 = -1.*t69*t520;
  t588 = t549 + t583;
  t631 = Cos(var1[19]);
  t545 = -1.*t52*t540;
  t603 = t547*t588;
  t614 = t545 + t603;
  t47 = Sin(var1[19]);
  t636 = t547*t540;
  t641 = t52*t588;
  t649 = t636 + t641;
  t694 = t183*t210*t198;
  t695 = -1.*t135*t217;
  t707 = t694 + t695;
  t733 = t135*t183;
  t743 = t210*t198*t217;
  t754 = t733 + t743;
  t721 = t104*t707;
  t756 = -1.*t235*t754;
  t760 = t721 + t756;
  t772 = t304*t317*t210;
  t784 = t235*t707;
  t785 = t104*t754;
  t788 = t784 + t785;
  t791 = t325*t788;
  t800 = t772 + t791;
  t767 = t77*t760;
  t812 = t297*t800;
  t819 = t767 + t812;
  t822 = t297*t760;
  t825 = -1.*t77*t800;
  t837 = t822 + t825;
  t820 = -1.*t71*t819;
  t841 = t422*t837;
  t851 = t820 + t841;
  t879 = t422*t819;
  t884 = t71*t837;
  t885 = t879 + t884;
  t878 = t69*t851;
  t890 = t477*t885;
  t891 = t878 + t890;
  t901 = t477*t851;
  t910 = -1.*t69*t885;
  t927 = t901 + t910;
  t893 = -1.*t52*t891;
  t928 = t547*t927;
  t930 = t893 + t928;
  t933 = t547*t891;
  t956 = t52*t927;
  t957 = t933 + t956;
  t1009 = t104*t317*t183;
  t1016 = -1.*t317*t235*t217;
  t1030 = t1009 + t1016;
  t1041 = -1.*t304*t198;
  t1049 = t317*t183*t235;
  t1063 = t104*t317*t217;
  t1066 = t1049 + t1063;
  t1098 = t325*t1066;
  t1105 = t1041 + t1098;
  t1033 = t77*t1030;
  t1108 = t297*t1105;
  t1122 = t1033 + t1108;
  t1132 = t297*t1030;
  t1158 = -1.*t77*t1105;
  t1161 = t1132 + t1158;
  t1127 = -1.*t71*t1122;
  t1169 = t422*t1161;
  t1171 = t1127 + t1169;
  t1178 = t422*t1122;
  t1180 = t71*t1161;
  t1198 = t1178 + t1180;
  t1175 = t69*t1171;
  t1199 = t477*t1198;
  t1230 = t1175 + t1199;
  t1246 = t477*t1171;
  t1251 = -1.*t69*t1198;
  t1258 = t1246 + t1251;
  t1237 = -1.*t52*t1230;
  t1277 = t547*t1258;
  t1278 = t1237 + t1277;
  t1294 = t547*t1230;
  t1297 = t52*t1258;
  t1298 = t1294 + t1297;
  t624 = t47*t614;
  t652 = t631*t649;
  t661 = t624 + t652;
  t669 = t631*t614;
  t676 = -1.*t47*t649;
  t681 = t669 + t676;
  t932 = t47*t930;
  t965 = t631*t957;
  t966 = t932 + t965;
  t981 = t631*t930;
  t991 = -1.*t47*t957;
  t993 = t981 + t991;
  t1283 = t47*t1278;
  t1328 = t631*t1298;
  t1329 = t1283 + t1328;
  t1334 = t631*t1278;
  t1344 = -1.*t47*t1298;
  t1351 = t1334 + t1344;
  t1500 = -1.*t104;
  t1514 = 1. + t1500;
  t1457 = -1.*t304;
  t1474 = 1. + t1457;
  t1359 = -1.*t135*t317*t325;
  t1377 = t304*t361;
  t1404 = t1359 + t1377;
  t1566 = -1.*t297;
  t1576 = 1. + t1566;
  t1654 = -1.*t422;
  t1660 = 1. + t1654;
  t1699 = -1.*t477;
  t1707 = 1. + t1699;
  t1735 = -1.*t547;
  t1737 = 1. + t1735;
  t1796 = -1.*t631;
  t1800 = 1. + t1796;
  t1480 = -0.08055*t1474;
  t1483 = -0.135*t325;
  t1490 = 0. + t1480 + t1483;
  t1516 = 0.07996*t1514;
  t1522 = 0.135*t235;
  t1524 = 0. + t1516 + t1522;
  t1538 = -0.135*t1514;
  t1539 = 0.07996*t235;
  t1543 = 0. + t1538 + t1539;
  t1549 = -0.135*t1474;
  t1556 = 0.08055*t325;
  t1562 = 0. + t1549 + t1556;
  t1583 = -0.01004*t1576;
  t1587 = 0.08055*t77;
  t1588 = 0. + t1583 + t1587;
  t1405 = -1.*t317*t325*t210;
  t1411 = t304*t788;
  t1413 = t1405 + t1411;
  t1626 = -0.08055*t1576;
  t1629 = -0.01004*t77;
  t1633 = 0. + t1626 + t1629;
  t1665 = -0.08055*t1660;
  t1674 = -0.13004*t71;
  t1679 = 0. + t1665 + t1674;
  t1688 = -0.13004*t1660;
  t1694 = 0.08055*t71;
  t1696 = 0. + t1688 + t1694;
  t1708 = -0.19074*t1707;
  t1715 = 0.03315*t69;
  t1720 = 0. + t1708 + t1715;
  t1722 = -0.03315*t1707;
  t1726 = -0.19074*t69;
  t1728 = 0. + t1722 + t1726;
  t1742 = -0.01315*t1737;
  t1745 = -0.62554*t52;
  t1749 = 0. + t1742 + t1745;
  t1769 = -0.62554*t1737;
  t1771 = 0.01315*t52;
  t1775 = 0. + t1769 + t1771;
  t1807 = -1.03354*t1800;
  t1825 = 0.05315*t47;
  t1827 = 0. + t1807 + t1825;
  t1835 = -0.05315*t1800;
  t1838 = -1.03354*t47;
  t1843 = 0. + t1835 + t1838;
  t1415 = t325*t198;
  t1418 = t304*t1066;
  t1419 = t1415 + t1418;
  p_output1[0]=0.642788*t661 + 0.766044*t681;
  p_output1[1]=0.642788*t966 + 0.766044*t993;
  p_output1[2]=0.642788*t1329 + 0.766044*t1351;
  p_output1[3]=0.;
  p_output1[4]=t1404;
  p_output1[5]=t1413;
  p_output1[6]=t1419;
  p_output1[7]=0.;
  p_output1[8]=-0.766044*t661 + 0.642788*t681;
  p_output1[9]=-0.766044*t966 + 0.642788*t993;
  p_output1[10]=-0.766044*t1329 + 0.642788*t1351;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.1305*t1404 + t1524*t229 + t1543*t281 + t1588*t286 + t135*t1490*t317 + t1562*t361 + t1633*t386 + t1679*t405 + t1696*t443 + t1720*t471 + t1728*t520 + t1749*t540 + t1775*t588 + t1827*t614 + t1843*t649 - 0.00095*t661 - 1.05124*t681 + var1[0];
  p_output1[13]=0. - 0.1305*t1413 + t1490*t210*t317 + t1524*t707 + t1543*t754 + t1588*t760 + t1562*t788 + t1633*t800 + t1679*t819 + t1696*t837 + t1720*t851 + t1728*t885 + t1749*t891 + t1775*t927 + t1827*t930 + t1843*t957 - 0.00095*t966 - 1.05124*t993 + var1[1];
  p_output1[14]=0. - 0.00095*t1329 - 1.05124*t1351 - 0.1305*t1419 + t1066*t1562 + t1030*t1588 + t1105*t1633 + t1122*t1679 + t1161*t1696 + t1171*t1720 + t1198*t1728 + t1230*t1749 + t1258*t1775 + t1278*t1827 + t1298*t1843 - 1.*t1490*t198 + t1524*t183*t317 + t1543*t217*t317 + var1[2];
  p_output1[15]=1.;
}



void T_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
