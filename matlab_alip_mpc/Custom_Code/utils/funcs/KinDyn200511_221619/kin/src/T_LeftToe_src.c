/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:00 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftToe_src.h"

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
  double t123;
  double t159;
  double t213;
  double t167;
  double t222;
  double t154;
  double t266;
  double t270;
  double t276;
  double t179;
  double t233;
  double t253;
  double t280;
  double t115;
  double t358;
  double t359;
  double t367;
  double t124;
  double t131;
  double t143;
  double t262;
  double t308;
  double t312;
  double t318;
  double t333;
  double t346;
  double t375;
  double t413;
  double t347;
  double t386;
  double t390;
  double t107;
  double t414;
  double t445;
  double t456;
  double t503;
  double t400;
  double t474;
  double t498;
  double t98;
  double t520;
  double t545;
  double t549;
  double t583;
  double t502;
  double t564;
  double t575;
  double t71;
  double t603;
  double t632;
  double t644;
  double t33;
  double t783;
  double t795;
  double t796;
  double t729;
  double t734;
  double t744;
  double t841;
  double t847;
  double t856;
  double t718;
  double t749;
  double t799;
  double t802;
  double t807;
  double t829;
  double t836;
  double t858;
  double t862;
  double t883;
  double t898;
  double t901;
  double t863;
  double t907;
  double t911;
  double t921;
  double t922;
  double t924;
  double t660;
  double t919;
  double t926;
  double t927;
  double t952;
  double t953;
  double t955;
  double t1078;
  double t1096;
  double t1097;
  double t1027;
  double t1036;
  double t1042;
  double t1044;
  double t1045;
  double t1046;
  double t1048;
  double t1109;
  double t1110;
  double t1119;
  double t1128;
  double t1140;
  double t1113;
  double t1141;
  double t1146;
  double t1165;
  double t1172;
  double t1192;
  double t1148;
  double t1194;
  double t1195;
  double t1217;
  double t1219;
  double t1222;
  double t580;
  double t645;
  double t646;
  double t668;
  double t676;
  double t688;
  double t935;
  double t959;
  double t962;
  double t970;
  double t979;
  double t980;
  double t1208;
  double t1247;
  double t1253;
  double t1276;
  double t1292;
  double t1294;
  double t1438;
  double t1447;
  double t1496;
  double t1503;
  double t1578;
  double t1579;
  double t1633;
  double t1636;
  double t1696;
  double t1699;
  double t1756;
  double t1758;
  double t1827;
  double t1828;
  double t1317;
  double t1328;
  double t1337;
  double t1459;
  double t1468;
  double t1471;
  double t1485;
  double t1487;
  double t1490;
  double t1505;
  double t1509;
  double t1516;
  double t1528;
  double t1529;
  double t1536;
  double t1585;
  double t1591;
  double t1593;
  double t1627;
  double t1629;
  double t1630;
  double t1638;
  double t1656;
  double t1662;
  double t1675;
  double t1678;
  double t1691;
  double t1700;
  double t1701;
  double t1703;
  double t1735;
  double t1745;
  double t1746;
  double t1759;
  double t1760;
  double t1768;
  double t1810;
  double t1812;
  double t1815;
  double t1831;
  double t1836;
  double t1839;
  double t1842;
  double t1851;
  double t1867;
  double t1341;
  double t1351;
  double t1352;
  double t1353;
  double t1358;
  double t1362;
  t123 = Cos(var1[3]);
  t159 = Cos(var1[5]);
  t213 = Sin(var1[4]);
  t167 = Sin(var1[3]);
  t222 = Sin(var1[5]);
  t154 = Cos(var1[6]);
  t266 = t123*t159*t213;
  t270 = t167*t222;
  t276 = t266 + t270;
  t179 = -1.*t159*t167;
  t233 = t123*t213*t222;
  t253 = t179 + t233;
  t280 = Sin(var1[6]);
  t115 = Cos(var1[8]);
  t358 = t154*t276;
  t359 = -1.*t253*t280;
  t367 = t358 + t359;
  t124 = Cos(var1[4]);
  t131 = Cos(var1[7]);
  t143 = t123*t124*t131;
  t262 = t154*t253;
  t308 = t276*t280;
  t312 = t262 + t308;
  t318 = Sin(var1[7]);
  t333 = t312*t318;
  t346 = t143 + t333;
  t375 = Sin(var1[8]);
  t413 = Cos(var1[9]);
  t347 = t115*t346;
  t386 = t367*t375;
  t390 = t347 + t386;
  t107 = Sin(var1[9]);
  t414 = t115*t367;
  t445 = -1.*t346*t375;
  t456 = t414 + t445;
  t503 = Cos(var1[10]);
  t400 = -1.*t107*t390;
  t474 = t413*t456;
  t498 = t400 + t474;
  t98 = Sin(var1[10]);
  t520 = t413*t390;
  t545 = t107*t456;
  t549 = t520 + t545;
  t583 = Cos(var1[11]);
  t502 = t98*t498;
  t564 = t503*t549;
  t575 = t502 + t564;
  t71 = Sin(var1[11]);
  t603 = t503*t498;
  t632 = -1.*t98*t549;
  t644 = t603 + t632;
  t33 = Cos(var1[12]);
  t783 = t159*t167*t213;
  t795 = -1.*t123*t222;
  t796 = t783 + t795;
  t729 = t123*t159;
  t734 = t167*t213*t222;
  t744 = t729 + t734;
  t841 = t154*t796;
  t847 = -1.*t744*t280;
  t856 = t841 + t847;
  t718 = t124*t131*t167;
  t749 = t154*t744;
  t799 = t796*t280;
  t802 = t749 + t799;
  t807 = t802*t318;
  t829 = t718 + t807;
  t836 = t115*t829;
  t858 = t856*t375;
  t862 = t836 + t858;
  t883 = t115*t856;
  t898 = -1.*t829*t375;
  t901 = t883 + t898;
  t863 = -1.*t107*t862;
  t907 = t413*t901;
  t911 = t863 + t907;
  t921 = t413*t862;
  t922 = t107*t901;
  t924 = t921 + t922;
  t660 = Sin(var1[12]);
  t919 = t98*t911;
  t926 = t503*t924;
  t927 = t919 + t926;
  t952 = t503*t911;
  t953 = -1.*t98*t924;
  t955 = t952 + t953;
  t1078 = t124*t159*t154;
  t1096 = -1.*t124*t222*t280;
  t1097 = t1078 + t1096;
  t1027 = -1.*t131*t213;
  t1036 = t124*t154*t222;
  t1042 = t124*t159*t280;
  t1044 = t1036 + t1042;
  t1045 = t1044*t318;
  t1046 = t1027 + t1045;
  t1048 = t115*t1046;
  t1109 = t1097*t375;
  t1110 = t1048 + t1109;
  t1119 = t115*t1097;
  t1128 = -1.*t1046*t375;
  t1140 = t1119 + t1128;
  t1113 = -1.*t107*t1110;
  t1141 = t413*t1140;
  t1146 = t1113 + t1141;
  t1165 = t413*t1110;
  t1172 = t107*t1140;
  t1192 = t1165 + t1172;
  t1148 = t98*t1146;
  t1194 = t503*t1192;
  t1195 = t1148 + t1194;
  t1217 = t503*t1146;
  t1219 = -1.*t98*t1192;
  t1222 = t1217 + t1219;
  t580 = -1.*t71*t575;
  t645 = t583*t644;
  t646 = t580 + t645;
  t668 = t583*t575;
  t676 = t71*t644;
  t688 = t668 + t676;
  t935 = -1.*t71*t927;
  t959 = t583*t955;
  t962 = t935 + t959;
  t970 = t583*t927;
  t979 = t71*t955;
  t980 = t970 + t979;
  t1208 = -1.*t71*t1195;
  t1247 = t583*t1222;
  t1253 = t1208 + t1247;
  t1276 = t583*t1195;
  t1292 = t71*t1222;
  t1294 = t1276 + t1292;
  t1438 = -1.*t154;
  t1447 = 1. + t1438;
  t1496 = -1.*t131;
  t1503 = 1. + t1496;
  t1578 = -1.*t115;
  t1579 = 1. + t1578;
  t1633 = -1.*t413;
  t1636 = 1. + t1633;
  t1696 = -1.*t503;
  t1699 = 1. + t1696;
  t1756 = -1.*t583;
  t1758 = 1. + t1756;
  t1827 = -1.*t33;
  t1828 = 1. + t1827;
  t1317 = t660*t646;
  t1328 = t33*t688;
  t1337 = t1317 + t1328;
  t1459 = 0.07996*t1447;
  t1468 = -0.135*t280;
  t1471 = 0. + t1459 + t1468;
  t1485 = 0.135*t1447;
  t1487 = 0.07996*t280;
  t1490 = 0. + t1485 + t1487;
  t1505 = 0.135*t1503;
  t1509 = 0.08055*t318;
  t1516 = 0. + t1505 + t1509;
  t1528 = -0.08055*t1503;
  t1529 = 0.135*t318;
  t1536 = 0. + t1528 + t1529;
  t1585 = -0.08055*t1579;
  t1591 = -0.01004*t375;
  t1593 = 0. + t1585 + t1591;
  t1627 = -0.01004*t1579;
  t1629 = 0.08055*t375;
  t1630 = 0. + t1627 + t1629;
  t1638 = -0.08055*t1636;
  t1656 = -0.13004*t107;
  t1662 = 0. + t1638 + t1656;
  t1675 = -0.13004*t1636;
  t1678 = 0.08055*t107;
  t1691 = 0. + t1675 + t1678;
  t1700 = -0.19074*t1699;
  t1701 = 0.03315*t98;
  t1703 = 0. + t1700 + t1701;
  t1735 = -0.03315*t1699;
  t1745 = -0.19074*t98;
  t1746 = 0. + t1735 + t1745;
  t1759 = -0.01315*t1758;
  t1760 = -0.62554*t71;
  t1768 = 0. + t1759 + t1760;
  t1810 = -0.62554*t1758;
  t1812 = 0.01315*t71;
  t1815 = 0. + t1810 + t1812;
  t1831 = -1.03354*t1828;
  t1836 = 0.05315*t660;
  t1839 = 0. + t1831 + t1836;
  t1842 = -0.05315*t1828;
  t1851 = -1.03354*t660;
  t1867 = 0. + t1842 + t1851;
  t1341 = t660*t962;
  t1351 = t33*t980;
  t1352 = t1341 + t1351;
  t1353 = t660*t1253;
  t1358 = t33*t1294;
  t1362 = t1353 + t1358;
  p_output1[0]=-1.*t33*t646 + t660*t688;
  p_output1[1]=-1.*t33*t962 + t660*t980;
  p_output1[2]=-1.*t1253*t33 + t1294*t660;
  p_output1[3]=0.;
  p_output1[4]=t1337;
  p_output1[5]=t1352;
  p_output1[6]=t1362;
  p_output1[7]=0.;
  p_output1[8]=-1.*t131*t312 + t123*t124*t318;
  p_output1[9]=t124*t167*t318 - 1.*t131*t802;
  p_output1[10]=-1.*t1044*t131 - 1.*t213*t318;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.02565*t1337 + t123*t124*t1536 + t1490*t253 + t1471*t276 + t1516*t312 + 0.1306*(t131*t312 - 1.*t123*t124*t318) + t1593*t346 + t1630*t367 + t1662*t390 + t1691*t456 + t1703*t498 + t1746*t549 + t1768*t575 + t1815*t644 + t1839*t646 + t1867*t688 - 1.03824*(t33*t646 - 1.*t660*t688) + var1[0];
  p_output1[13]=0. - 0.02565*t1352 + t124*t1536*t167 + t1490*t744 + t1471*t796 + t1516*t802 + 0.1306*(-1.*t124*t167*t318 + t131*t802) + t1593*t829 + t1630*t856 + t1662*t862 + t1691*t901 + t1703*t911 + t1746*t924 + t1768*t927 + t1815*t955 + t1839*t962 + t1867*t980 - 1.03824*(t33*t962 - 1.*t660*t980) + var1[1];
  p_output1[14]=0. - 0.02565*t1362 + t1044*t1516 + t124*t1471*t159 + t1046*t1593 + t1097*t1630 + t1110*t1662 + t1140*t1691 + t1146*t1703 + t1192*t1746 + t1195*t1768 + t1222*t1815 + t1253*t1839 + t1294*t1867 - 1.*t1536*t213 + t124*t1490*t222 + 0.1306*(t1044*t131 + t213*t318) - 1.03824*(t1253*t33 - 1.*t1294*t660) + var1[2];
  p_output1[15]=1.;
}



void T_LeftToe_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
