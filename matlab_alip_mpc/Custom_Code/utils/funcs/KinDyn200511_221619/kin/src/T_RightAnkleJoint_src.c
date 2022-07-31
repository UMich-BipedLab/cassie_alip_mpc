/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:31 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightAnkleJoint_src.h"

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
  double t111;
  double t138;
  double t86;
  double t116;
  double t149;
  double t207;
  double t123;
  double t159;
  double t171;
  double t71;
  double t213;
  double t218;
  double t231;
  double t270;
  double t193;
  double t252;
  double t260;
  double t68;
  double t273;
  double t288;
  double t292;
  double t308;
  double t311;
  double t313;
  double t348;
  double t374;
  double t382;
  double t420;
  double t266;
  double t385;
  double t416;
  double t63;
  double t423;
  double t424;
  double t432;
  double t466;
  double t418;
  double t438;
  double t455;
  double t59;
  double t473;
  double t478;
  double t493;
  double t13;
  double t615;
  double t616;
  double t638;
  double t682;
  double t695;
  double t708;
  double t663;
  double t712;
  double t713;
  double t724;
  double t726;
  double t747;
  double t757;
  double t769;
  double t772;
  double t720;
  double t784;
  double t789;
  double t793;
  double t794;
  double t795;
  double t543;
  double t790;
  double t798;
  double t799;
  double t807;
  double t820;
  double t821;
  double t868;
  double t884;
  double t891;
  double t919;
  double t933;
  double t941;
  double t948;
  double t952;
  double t954;
  double t901;
  double t967;
  double t970;
  double t976;
  double t981;
  double t989;
  double t973;
  double t1005;
  double t1007;
  double t1012;
  double t1016;
  double t1023;
  double t462;
  double t505;
  double t510;
  double t568;
  double t570;
  double t578;
  double t802;
  double t823;
  double t830;
  double t836;
  double t838;
  double t839;
  double t1008;
  double t1026;
  double t1039;
  double t1045;
  double t1056;
  double t1065;
  double t1306;
  double t1310;
  double t1251;
  double t1275;
  double t1388;
  double t1389;
  double t1478;
  double t1488;
  double t1531;
  double t1546;
  double t1595;
  double t1596;
  double t1091;
  double t1092;
  double t1110;
  double t1282;
  double t1284;
  double t1298;
  double t1312;
  double t1317;
  double t1322;
  double t1328;
  double t1335;
  double t1342;
  double t1348;
  double t1373;
  double t1379;
  double t1391;
  double t1394;
  double t1418;
  double t1447;
  double t1449;
  double t1457;
  double t1496;
  double t1501;
  double t1504;
  double t1506;
  double t1509;
  double t1512;
  double t1554;
  double t1555;
  double t1567;
  double t1577;
  double t1582;
  double t1586;
  double t1598;
  double t1605;
  double t1609;
  double t1621;
  double t1625;
  double t1634;
  double t1117;
  double t1125;
  double t1127;
  double t1167;
  double t1182;
  double t1184;
  t111 = Cos(var1[5]);
  t138 = Sin(var1[3]);
  t86 = Cos(var1[3]);
  t116 = Sin(var1[4]);
  t149 = Sin(var1[5]);
  t207 = Sin(var1[13]);
  t123 = t86*t111*t116;
  t159 = t138*t149;
  t171 = t123 + t159;
  t71 = Cos(var1[13]);
  t213 = -1.*t111*t138;
  t218 = t86*t116*t149;
  t231 = t213 + t218;
  t270 = Cos(var1[15]);
  t193 = t71*t171;
  t252 = -1.*t207*t231;
  t260 = t193 + t252;
  t68 = Sin(var1[15]);
  t273 = Cos(var1[14]);
  t288 = Cos(var1[4]);
  t292 = t273*t86*t288;
  t308 = Sin(var1[14]);
  t311 = t207*t171;
  t313 = t71*t231;
  t348 = t311 + t313;
  t374 = t308*t348;
  t382 = t292 + t374;
  t420 = Cos(var1[16]);
  t266 = t68*t260;
  t385 = t270*t382;
  t416 = t266 + t385;
  t63 = Sin(var1[16]);
  t423 = t270*t260;
  t424 = -1.*t68*t382;
  t432 = t423 + t424;
  t466 = Cos(var1[17]);
  t418 = -1.*t63*t416;
  t438 = t420*t432;
  t455 = t418 + t438;
  t59 = Sin(var1[17]);
  t473 = t420*t416;
  t478 = t63*t432;
  t493 = t473 + t478;
  t13 = Sin(var1[18]);
  t615 = t111*t138*t116;
  t616 = -1.*t86*t149;
  t638 = t615 + t616;
  t682 = t86*t111;
  t695 = t138*t116*t149;
  t708 = t682 + t695;
  t663 = t71*t638;
  t712 = -1.*t207*t708;
  t713 = t663 + t712;
  t724 = t273*t288*t138;
  t726 = t207*t638;
  t747 = t71*t708;
  t757 = t726 + t747;
  t769 = t308*t757;
  t772 = t724 + t769;
  t720 = t68*t713;
  t784 = t270*t772;
  t789 = t720 + t784;
  t793 = t270*t713;
  t794 = -1.*t68*t772;
  t795 = t793 + t794;
  t543 = Cos(var1[18]);
  t790 = -1.*t63*t789;
  t798 = t420*t795;
  t799 = t790 + t798;
  t807 = t420*t789;
  t820 = t63*t795;
  t821 = t807 + t820;
  t868 = t71*t288*t111;
  t884 = -1.*t288*t207*t149;
  t891 = t868 + t884;
  t919 = -1.*t273*t116;
  t933 = t288*t111*t207;
  t941 = t71*t288*t149;
  t948 = t933 + t941;
  t952 = t308*t948;
  t954 = t919 + t952;
  t901 = t68*t891;
  t967 = t270*t954;
  t970 = t901 + t967;
  t976 = t270*t891;
  t981 = -1.*t68*t954;
  t989 = t976 + t981;
  t973 = -1.*t63*t970;
  t1005 = t420*t989;
  t1007 = t973 + t1005;
  t1012 = t420*t970;
  t1016 = t63*t989;
  t1023 = t1012 + t1016;
  t462 = t59*t455;
  t505 = t466*t493;
  t510 = t462 + t505;
  t568 = t466*t455;
  t570 = -1.*t59*t493;
  t578 = t568 + t570;
  t802 = t59*t799;
  t823 = t466*t821;
  t830 = t802 + t823;
  t836 = t466*t799;
  t838 = -1.*t59*t821;
  t839 = t836 + t838;
  t1008 = t59*t1007;
  t1026 = t466*t1023;
  t1039 = t1008 + t1026;
  t1045 = t466*t1007;
  t1056 = -1.*t59*t1023;
  t1065 = t1045 + t1056;
  t1306 = -1.*t71;
  t1310 = 1. + t1306;
  t1251 = -1.*t273;
  t1275 = 1. + t1251;
  t1388 = -1.*t270;
  t1389 = 1. + t1388;
  t1478 = -1.*t420;
  t1488 = 1. + t1478;
  t1531 = -1.*t466;
  t1546 = 1. + t1531;
  t1595 = -1.*t543;
  t1596 = 1. + t1595;
  t1091 = t543*t510;
  t1092 = t13*t578;
  t1110 = t1091 + t1092;
  t1282 = -0.08055*t1275;
  t1284 = -0.135*t308;
  t1298 = 0. + t1282 + t1284;
  t1312 = 0.07996*t1310;
  t1317 = 0.135*t207;
  t1322 = 0. + t1312 + t1317;
  t1328 = -0.135*t1310;
  t1335 = 0.07996*t207;
  t1342 = 0. + t1328 + t1335;
  t1348 = -0.135*t1275;
  t1373 = 0.08055*t308;
  t1379 = 0. + t1348 + t1373;
  t1391 = -0.01004*t1389;
  t1394 = 0.08055*t68;
  t1418 = 0. + t1391 + t1394;
  t1447 = -0.08055*t1389;
  t1449 = -0.01004*t68;
  t1457 = 0. + t1447 + t1449;
  t1496 = -0.08055*t1488;
  t1501 = -0.13004*t63;
  t1504 = 0. + t1496 + t1501;
  t1506 = -0.13004*t1488;
  t1509 = 0.08055*t63;
  t1512 = 0. + t1506 + t1509;
  t1554 = -0.19074*t1546;
  t1555 = 0.03315*t59;
  t1567 = 0. + t1554 + t1555;
  t1577 = -0.03315*t1546;
  t1582 = -0.19074*t59;
  t1586 = 0. + t1577 + t1582;
  t1598 = -0.01315*t1596;
  t1605 = -0.62554*t13;
  t1609 = 0. + t1598 + t1605;
  t1621 = -0.62554*t1596;
  t1625 = 0.01315*t13;
  t1634 = 0. + t1621 + t1625;
  t1117 = t543*t830;
  t1125 = t13*t839;
  t1127 = t1117 + t1125;
  t1167 = t543*t1039;
  t1182 = t13*t1065;
  t1184 = t1167 + t1182;
  p_output1[0]=t13*t510 - 1.*t543*t578;
  p_output1[1]=t13*t830 - 1.*t543*t839;
  p_output1[2]=t1039*t13 - 1.*t1065*t543;
  p_output1[3]=0.;
  p_output1[4]=t1110;
  p_output1[5]=t1127;
  p_output1[6]=t1184;
  p_output1[7]=0.;
  p_output1[8]=-1.*t273*t348 + t288*t308*t86;
  p_output1[9]=t138*t288*t308 - 1.*t273*t757;
  p_output1[10]=-1.*t116*t308 - 1.*t273*t948;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.01315*t1110 + t1322*t171 + t1342*t231 + t1418*t260 + t1379*t348 + t1457*t382 + t1504*t416 + t1512*t432 + t1567*t455 + t1586*t493 + t1609*t510 + t1634*t578 - 0.62554*(-1.*t13*t510 + t543*t578) + t1298*t288*t86 - 0.1305*(t273*t348 - 1.*t288*t308*t86) + var1[0];
  p_output1[13]=0. - 0.01315*t1127 + t1298*t138*t288 + t1322*t638 + t1342*t708 + t1418*t713 + t1379*t757 - 0.1305*(-1.*t138*t288*t308 + t273*t757) + t1457*t772 + t1504*t789 + t1512*t795 + t1567*t799 + t1586*t821 + t1609*t830 + t1634*t839 - 0.62554*(-1.*t13*t830 + t543*t839) + var1[1];
  p_output1[14]=0. - 0.01315*t1184 - 1.*t116*t1298 + t1007*t1567 + t1023*t1586 + t1039*t1609 + t1065*t1634 + t111*t1322*t288 + t1342*t149*t288 - 0.62554*(-1.*t1039*t13 + t1065*t543) + t1418*t891 + t1379*t948 - 0.1305*(t116*t308 + t273*t948) + t1457*t954 + t1504*t970 + t1512*t989 + var1[2];
  p_output1[15]=1.;
}



void T_RightAnkleJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
