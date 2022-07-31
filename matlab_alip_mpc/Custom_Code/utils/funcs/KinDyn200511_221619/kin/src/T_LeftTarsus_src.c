/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftTarsus_src.h"

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
  double t137;
  double t220;
  double t272;
  double t235;
  double t288;
  double t198;
  double t345;
  double t364;
  double t379;
  double t255;
  double t313;
  double t336;
  double t390;
  double t135;
  double t468;
  double t483;
  double t490;
  double t138;
  double t140;
  double t169;
  double t343;
  double t411;
  double t419;
  double t429;
  double t431;
  double t439;
  double t496;
  double t521;
  double t445;
  double t498;
  double t508;
  double t119;
  double t544;
  double t563;
  double t569;
  double t590;
  double t512;
  double t573;
  double t586;
  double t69;
  double t596;
  double t615;
  double t624;
  double t4;
  double t772;
  double t779;
  double t782;
  double t727;
  double t752;
  double t753;
  double t872;
  double t877;
  double t884;
  double t721;
  double t763;
  double t817;
  double t821;
  double t827;
  double t843;
  double t860;
  double t887;
  double t903;
  double t932;
  double t933;
  double t960;
  double t642;
  double t926;
  double t961;
  double t989;
  double t1020;
  double t1022;
  double t1023;
  double t1195;
  double t1204;
  double t1212;
  double t1092;
  double t1096;
  double t1105;
  double t1138;
  double t1149;
  double t1151;
  double t1182;
  double t1213;
  double t1224;
  double t1234;
  double t1257;
  double t1282;
  double t1225;
  double t1287;
  double t1296;
  double t1331;
  double t1332;
  double t1337;
  double t587;
  double t631;
  double t638;
  double t652;
  double t654;
  double t672;
  double t1001;
  double t1050;
  double t1057;
  double t1064;
  double t1069;
  double t1085;
  double t1308;
  double t1340;
  double t1344;
  double t1352;
  double t1366;
  double t1369;
  double t1557;
  double t1563;
  double t1616;
  double t1620;
  double t1680;
  double t1685;
  double t1755;
  double t1769;
  double t1792;
  double t1811;
  double t1871;
  double t1891;
  double t1390;
  double t1392;
  double t1403;
  double t1586;
  double t1587;
  double t1590;
  double t1595;
  double t1596;
  double t1604;
  double t1625;
  double t1631;
  double t1632;
  double t1643;
  double t1648;
  double t1652;
  double t1687;
  double t1691;
  double t1714;
  double t1722;
  double t1736;
  double t1748;
  double t1770;
  double t1771;
  double t1777;
  double t1784;
  double t1786;
  double t1789;
  double t1812;
  double t1822;
  double t1826;
  double t1843;
  double t1847;
  double t1850;
  double t1892;
  double t1894;
  double t1896;
  double t1922;
  double t1935;
  double t1938;
  double t1416;
  double t1438;
  double t1459;
  double t1465;
  double t1467;
  double t1470;
  t137 = Cos(var1[3]);
  t220 = Cos(var1[5]);
  t272 = Sin(var1[4]);
  t235 = Sin(var1[3]);
  t288 = Sin(var1[5]);
  t198 = Cos(var1[6]);
  t345 = t137*t220*t272;
  t364 = t235*t288;
  t379 = t345 + t364;
  t255 = -1.*t220*t235;
  t313 = t137*t272*t288;
  t336 = t255 + t313;
  t390 = Sin(var1[6]);
  t135 = Cos(var1[8]);
  t468 = t198*t379;
  t483 = -1.*t336*t390;
  t490 = t468 + t483;
  t138 = Cos(var1[4]);
  t140 = Cos(var1[7]);
  t169 = t137*t138*t140;
  t343 = t198*t336;
  t411 = t379*t390;
  t419 = t343 + t411;
  t429 = Sin(var1[7]);
  t431 = t419*t429;
  t439 = t169 + t431;
  t496 = Sin(var1[8]);
  t521 = Cos(var1[9]);
  t445 = t135*t439;
  t498 = t490*t496;
  t508 = t445 + t498;
  t119 = Sin(var1[9]);
  t544 = t135*t490;
  t563 = -1.*t439*t496;
  t569 = t544 + t563;
  t590 = Cos(var1[10]);
  t512 = -1.*t119*t508;
  t573 = t521*t569;
  t586 = t512 + t573;
  t69 = Sin(var1[10]);
  t596 = t521*t508;
  t615 = t119*t569;
  t624 = t596 + t615;
  t4 = Sin(var1[11]);
  t772 = t220*t235*t272;
  t779 = -1.*t137*t288;
  t782 = t772 + t779;
  t727 = t137*t220;
  t752 = t235*t272*t288;
  t753 = t727 + t752;
  t872 = t198*t782;
  t877 = -1.*t753*t390;
  t884 = t872 + t877;
  t721 = t138*t140*t235;
  t763 = t198*t753;
  t817 = t782*t390;
  t821 = t763 + t817;
  t827 = t821*t429;
  t843 = t721 + t827;
  t860 = t135*t843;
  t887 = t884*t496;
  t903 = t860 + t887;
  t932 = t135*t884;
  t933 = -1.*t843*t496;
  t960 = t932 + t933;
  t642 = Cos(var1[11]);
  t926 = -1.*t119*t903;
  t961 = t521*t960;
  t989 = t926 + t961;
  t1020 = t521*t903;
  t1022 = t119*t960;
  t1023 = t1020 + t1022;
  t1195 = t138*t220*t198;
  t1204 = -1.*t138*t288*t390;
  t1212 = t1195 + t1204;
  t1092 = -1.*t140*t272;
  t1096 = t138*t198*t288;
  t1105 = t138*t220*t390;
  t1138 = t1096 + t1105;
  t1149 = t1138*t429;
  t1151 = t1092 + t1149;
  t1182 = t135*t1151;
  t1213 = t1212*t496;
  t1224 = t1182 + t1213;
  t1234 = t135*t1212;
  t1257 = -1.*t1151*t496;
  t1282 = t1234 + t1257;
  t1225 = -1.*t119*t1224;
  t1287 = t521*t1282;
  t1296 = t1225 + t1287;
  t1331 = t521*t1224;
  t1332 = t119*t1282;
  t1337 = t1331 + t1332;
  t587 = t69*t586;
  t631 = t590*t624;
  t638 = t587 + t631;
  t652 = t590*t586;
  t654 = -1.*t69*t624;
  t672 = t652 + t654;
  t1001 = t69*t989;
  t1050 = t590*t1023;
  t1057 = t1001 + t1050;
  t1064 = t590*t989;
  t1069 = -1.*t69*t1023;
  t1085 = t1064 + t1069;
  t1308 = t69*t1296;
  t1340 = t590*t1337;
  t1344 = t1308 + t1340;
  t1352 = t590*t1296;
  t1366 = -1.*t69*t1337;
  t1369 = t1352 + t1366;
  t1557 = -1.*t198;
  t1563 = 1. + t1557;
  t1616 = -1.*t140;
  t1620 = 1. + t1616;
  t1680 = -1.*t135;
  t1685 = 1. + t1680;
  t1755 = -1.*t521;
  t1769 = 1. + t1755;
  t1792 = -1.*t590;
  t1811 = 1. + t1792;
  t1871 = -1.*t642;
  t1891 = 1. + t1871;
  t1390 = t642*t638;
  t1392 = t4*t672;
  t1403 = t1390 + t1392;
  t1586 = 0.07996*t1563;
  t1587 = -0.135*t390;
  t1590 = 0. + t1586 + t1587;
  t1595 = 0.135*t1563;
  t1596 = 0.07996*t390;
  t1604 = 0. + t1595 + t1596;
  t1625 = 0.135*t1620;
  t1631 = 0.08055*t429;
  t1632 = 0. + t1625 + t1631;
  t1643 = -0.08055*t1620;
  t1648 = 0.135*t429;
  t1652 = 0. + t1643 + t1648;
  t1687 = -0.08055*t1685;
  t1691 = -0.01004*t496;
  t1714 = 0. + t1687 + t1691;
  t1722 = -0.01004*t1685;
  t1736 = 0.08055*t496;
  t1748 = 0. + t1722 + t1736;
  t1770 = -0.08055*t1769;
  t1771 = -0.13004*t119;
  t1777 = 0. + t1770 + t1771;
  t1784 = -0.13004*t1769;
  t1786 = 0.08055*t119;
  t1789 = 0. + t1784 + t1786;
  t1812 = -0.19074*t1811;
  t1822 = 0.03315*t69;
  t1826 = 0. + t1812 + t1822;
  t1843 = -0.03315*t1811;
  t1847 = -0.19074*t69;
  t1850 = 0. + t1843 + t1847;
  t1892 = -0.01315*t1891;
  t1894 = -0.62554*t4;
  t1896 = 0. + t1892 + t1894;
  t1922 = -0.62554*t1891;
  t1935 = 0.01315*t4;
  t1938 = 0. + t1922 + t1935;
  t1416 = t642*t1057;
  t1438 = t4*t1085;
  t1459 = t1416 + t1438;
  t1465 = t642*t1344;
  t1467 = t4*t1369;
  t1470 = t1465 + t1467;
  p_output1[0]=t4*t638 - 1.*t642*t672;
  p_output1[1]=t1057*t4 - 1.*t1085*t642;
  p_output1[2]=t1344*t4 - 1.*t1369*t642;
  p_output1[3]=0.;
  p_output1[4]=t1403;
  p_output1[5]=t1459;
  p_output1[6]=t1470;
  p_output1[7]=0.;
  p_output1[8]=-1.*t140*t419 + t137*t138*t429;
  p_output1[9]=t138*t235*t429 - 1.*t140*t821;
  p_output1[10]=-1.*t1138*t140 - 1.*t272*t429;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.04375*t1403 + t137*t138*t1652 + t1604*t336 + t1590*t379 + t1632*t419 + 0.1318*(t140*t419 - 1.*t137*t138*t429) + t1714*t439 + t1748*t490 + t1777*t508 + t1789*t569 + t1826*t586 + t1850*t624 + t1896*t638 + t1938*t672 - 0.73604*(-1.*t4*t638 + t642*t672) + var1[0];
  p_output1[13]=0. - 0.04375*t1459 + t1023*t1850 + t1057*t1896 + t1085*t1938 + t138*t1652*t235 - 0.73604*(-1.*t1057*t4 + t1085*t642) + t1604*t753 + t1590*t782 + t1632*t821 + 0.1318*(-1.*t138*t235*t429 + t140*t821) + t1714*t843 + t1748*t884 + t1777*t903 + t1789*t960 + t1826*t989 + var1[1];
  p_output1[14]=0. - 0.04375*t1470 + t1138*t1632 + t1151*t1714 + t1212*t1748 + t1224*t1777 + t1282*t1789 + t1296*t1826 + t1337*t1850 + t1344*t1896 + t1369*t1938 + t138*t1590*t220 - 1.*t1652*t272 + t138*t1604*t288 + 0.1318*(t1138*t140 + t272*t429) - 0.73604*(-1.*t1344*t4 + t1369*t642) + var1[2];
  p_output1[15]=1.;
}



void T_LeftTarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
