/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:10 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftAnkleJoint_src.h"

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
  double t143;
  double t197;
  double t255;
  double t202;
  double t263;
  double t196;
  double t319;
  double t322;
  double t330;
  double t221;
  double t283;
  double t299;
  double t350;
  double t141;
  double t466;
  double t474;
  double t483;
  double t144;
  double t170;
  double t178;
  double t306;
  double t358;
  double t383;
  double t384;
  double t399;
  double t404;
  double t517;
  double t545;
  double t428;
  double t523;
  double t529;
  double t134;
  double t567;
  double t570;
  double t582;
  double t612;
  double t538;
  double t587;
  double t594;
  double t129;
  double t617;
  double t623;
  double t626;
  double t72;
  double t794;
  double t798;
  double t802;
  double t766;
  double t777;
  double t791;
  double t862;
  double t870;
  double t876;
  double t759;
  double t793;
  double t807;
  double t810;
  double t814;
  double t822;
  double t823;
  double t878;
  double t879;
  double t915;
  double t919;
  double t920;
  double t682;
  double t914;
  double t932;
  double t933;
  double t935;
  double t936;
  double t942;
  double t1051;
  double t1053;
  double t1062;
  double t997;
  double t1011;
  double t1021;
  double t1025;
  double t1034;
  double t1036;
  double t1049;
  double t1063;
  double t1066;
  double t1097;
  double t1098;
  double t1111;
  double t1071;
  double t1120;
  double t1145;
  double t1151;
  double t1155;
  double t1162;
  double t605;
  double t635;
  double t642;
  double t709;
  double t730;
  double t737;
  double t934;
  double t943;
  double t944;
  double t948;
  double t952;
  double t955;
  double t1150;
  double t1170;
  double t1174;
  double t1195;
  double t1198;
  double t1201;
  double t1353;
  double t1361;
  double t1411;
  double t1418;
  double t1499;
  double t1516;
  double t1554;
  double t1558;
  double t1647;
  double t1649;
  double t1700;
  double t1701;
  double t1232;
  double t1234;
  double t1242;
  double t1363;
  double t1366;
  double t1368;
  double t1384;
  double t1391;
  double t1396;
  double t1420;
  double t1429;
  double t1435;
  double t1439;
  double t1441;
  double t1442;
  double t1527;
  double t1532;
  double t1536;
  double t1548;
  double t1549;
  double t1550;
  double t1584;
  double t1588;
  double t1614;
  double t1627;
  double t1637;
  double t1639;
  double t1653;
  double t1655;
  double t1660;
  double t1664;
  double t1666;
  double t1689;
  double t1705;
  double t1707;
  double t1713;
  double t1726;
  double t1731;
  double t1732;
  double t1260;
  double t1262;
  double t1272;
  double t1273;
  double t1275;
  double t1280;
  t143 = Cos(var1[3]);
  t197 = Cos(var1[5]);
  t255 = Sin(var1[4]);
  t202 = Sin(var1[3]);
  t263 = Sin(var1[5]);
  t196 = Cos(var1[6]);
  t319 = t143*t197*t255;
  t322 = t202*t263;
  t330 = t319 + t322;
  t221 = -1.*t197*t202;
  t283 = t143*t255*t263;
  t299 = t221 + t283;
  t350 = Sin(var1[6]);
  t141 = Cos(var1[8]);
  t466 = t196*t330;
  t474 = -1.*t299*t350;
  t483 = t466 + t474;
  t144 = Cos(var1[4]);
  t170 = Cos(var1[7]);
  t178 = t143*t144*t170;
  t306 = t196*t299;
  t358 = t330*t350;
  t383 = t306 + t358;
  t384 = Sin(var1[7]);
  t399 = t383*t384;
  t404 = t178 + t399;
  t517 = Sin(var1[8]);
  t545 = Cos(var1[9]);
  t428 = t141*t404;
  t523 = t483*t517;
  t529 = t428 + t523;
  t134 = Sin(var1[9]);
  t567 = t141*t483;
  t570 = -1.*t404*t517;
  t582 = t567 + t570;
  t612 = Cos(var1[10]);
  t538 = -1.*t134*t529;
  t587 = t545*t582;
  t594 = t538 + t587;
  t129 = Sin(var1[10]);
  t617 = t545*t529;
  t623 = t134*t582;
  t626 = t617 + t623;
  t72 = Sin(var1[11]);
  t794 = t197*t202*t255;
  t798 = -1.*t143*t263;
  t802 = t794 + t798;
  t766 = t143*t197;
  t777 = t202*t255*t263;
  t791 = t766 + t777;
  t862 = t196*t802;
  t870 = -1.*t791*t350;
  t876 = t862 + t870;
  t759 = t144*t170*t202;
  t793 = t196*t791;
  t807 = t802*t350;
  t810 = t793 + t807;
  t814 = t810*t384;
  t822 = t759 + t814;
  t823 = t141*t822;
  t878 = t876*t517;
  t879 = t823 + t878;
  t915 = t141*t876;
  t919 = -1.*t822*t517;
  t920 = t915 + t919;
  t682 = Cos(var1[11]);
  t914 = -1.*t134*t879;
  t932 = t545*t920;
  t933 = t914 + t932;
  t935 = t545*t879;
  t936 = t134*t920;
  t942 = t935 + t936;
  t1051 = t144*t197*t196;
  t1053 = -1.*t144*t263*t350;
  t1062 = t1051 + t1053;
  t997 = -1.*t170*t255;
  t1011 = t144*t196*t263;
  t1021 = t144*t197*t350;
  t1025 = t1011 + t1021;
  t1034 = t1025*t384;
  t1036 = t997 + t1034;
  t1049 = t141*t1036;
  t1063 = t1062*t517;
  t1066 = t1049 + t1063;
  t1097 = t141*t1062;
  t1098 = -1.*t1036*t517;
  t1111 = t1097 + t1098;
  t1071 = -1.*t134*t1066;
  t1120 = t545*t1111;
  t1145 = t1071 + t1120;
  t1151 = t545*t1066;
  t1155 = t134*t1111;
  t1162 = t1151 + t1155;
  t605 = t129*t594;
  t635 = t612*t626;
  t642 = t605 + t635;
  t709 = t612*t594;
  t730 = -1.*t129*t626;
  t737 = t709 + t730;
  t934 = t129*t933;
  t943 = t612*t942;
  t944 = t934 + t943;
  t948 = t612*t933;
  t952 = -1.*t129*t942;
  t955 = t948 + t952;
  t1150 = t129*t1145;
  t1170 = t612*t1162;
  t1174 = t1150 + t1170;
  t1195 = t612*t1145;
  t1198 = -1.*t129*t1162;
  t1201 = t1195 + t1198;
  t1353 = -1.*t196;
  t1361 = 1. + t1353;
  t1411 = -1.*t170;
  t1418 = 1. + t1411;
  t1499 = -1.*t141;
  t1516 = 1. + t1499;
  t1554 = -1.*t545;
  t1558 = 1. + t1554;
  t1647 = -1.*t612;
  t1649 = 1. + t1647;
  t1700 = -1.*t682;
  t1701 = 1. + t1700;
  t1232 = t682*t642;
  t1234 = t72*t737;
  t1242 = t1232 + t1234;
  t1363 = 0.07996*t1361;
  t1366 = -0.135*t350;
  t1368 = 0. + t1363 + t1366;
  t1384 = 0.135*t1361;
  t1391 = 0.07996*t350;
  t1396 = 0. + t1384 + t1391;
  t1420 = 0.135*t1418;
  t1429 = 0.08055*t384;
  t1435 = 0. + t1420 + t1429;
  t1439 = -0.08055*t1418;
  t1441 = 0.135*t384;
  t1442 = 0. + t1439 + t1441;
  t1527 = -0.08055*t1516;
  t1532 = -0.01004*t517;
  t1536 = 0. + t1527 + t1532;
  t1548 = -0.01004*t1516;
  t1549 = 0.08055*t517;
  t1550 = 0. + t1548 + t1549;
  t1584 = -0.08055*t1558;
  t1588 = -0.13004*t134;
  t1614 = 0. + t1584 + t1588;
  t1627 = -0.13004*t1558;
  t1637 = 0.08055*t134;
  t1639 = 0. + t1627 + t1637;
  t1653 = -0.19074*t1649;
  t1655 = 0.03315*t129;
  t1660 = 0. + t1653 + t1655;
  t1664 = -0.03315*t1649;
  t1666 = -0.19074*t129;
  t1689 = 0. + t1664 + t1666;
  t1705 = -0.01315*t1701;
  t1707 = -0.62554*t72;
  t1713 = 0. + t1705 + t1707;
  t1726 = -0.62554*t1701;
  t1731 = 0.01315*t72;
  t1732 = 0. + t1726 + t1731;
  t1260 = t682*t944;
  t1262 = t72*t955;
  t1272 = t1260 + t1262;
  t1273 = t682*t1174;
  t1275 = t72*t1201;
  t1280 = t1273 + t1275;
  p_output1[0]=t642*t72 - 1.*t682*t737;
  p_output1[1]=t72*t944 - 1.*t682*t955;
  p_output1[2]=-1.*t1201*t682 + t1174*t72;
  p_output1[3]=0.;
  p_output1[4]=t1242;
  p_output1[5]=t1272;
  p_output1[6]=t1280;
  p_output1[7]=0.;
  p_output1[8]=-1.*t170*t383 + t143*t144*t384;
  p_output1[9]=t144*t202*t384 - 1.*t170*t810;
  p_output1[10]=-1.*t1025*t170 - 1.*t255*t384;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.01315*t1242 + t143*t144*t1442 + t1396*t299 + t1368*t330 + t1435*t383 + 0.1305*(t170*t383 - 1.*t143*t144*t384) + t1536*t404 + t1550*t483 + t1614*t529 + t1639*t582 + t1660*t594 + t1689*t626 + t1713*t642 + t1732*t737 - 0.62554*(-1.*t642*t72 + t682*t737) + var1[0];
  p_output1[13]=0. - 0.01315*t1272 + t144*t1442*t202 + t1396*t791 + t1368*t802 + t1435*t810 + 0.1305*(-1.*t144*t202*t384 + t170*t810) + t1536*t822 + t1550*t876 + t1614*t879 + t1639*t920 + t1660*t933 + t1689*t942 + t1713*t944 + t1732*t955 - 0.62554*(-1.*t72*t944 + t682*t955) + var1[1];
  p_output1[14]=0. - 0.01315*t1280 + t1025*t1435 + t1036*t1536 + t1062*t1550 + t1066*t1614 + t1111*t1639 + t1145*t1660 + t1162*t1689 + t1174*t1713 + t1201*t1732 + t1368*t144*t197 - 1.*t1442*t255 + t1396*t144*t263 + 0.1305*(t1025*t170 + t255*t384) - 0.62554*(t1201*t682 - 1.*t1174*t72) + var1[2];
  p_output1[15]=1.;
}



void T_LeftAnkleJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
