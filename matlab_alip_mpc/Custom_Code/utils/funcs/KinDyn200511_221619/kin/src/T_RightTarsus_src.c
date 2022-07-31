/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:13 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightTarsus_src.h"

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
  double t239;
  double t169;
  double t184;
  double t243;
  double t329;
  double t231;
  double t273;
  double t283;
  double t152;
  double t332;
  double t336;
  double t342;
  double t391;
  double t301;
  double t357;
  double t366;
  double t123;
  double t412;
  double t435;
  double t446;
  double t449;
  double t456;
  double t458;
  double t464;
  double t465;
  double t477;
  double t525;
  double t381;
  double t505;
  double t518;
  double t118;
  double t528;
  double t531;
  double t545;
  double t604;
  double t520;
  double t553;
  double t557;
  double t116;
  double t607;
  double t609;
  double t623;
  double t103;
  double t715;
  double t730;
  double t738;
  double t749;
  double t762;
  double t771;
  double t741;
  double t774;
  double t775;
  double t787;
  double t790;
  double t791;
  double t797;
  double t805;
  double t806;
  double t780;
  double t826;
  double t827;
  double t852;
  double t856;
  double t859;
  double t664;
  double t845;
  double t864;
  double t873;
  double t880;
  double t886;
  double t890;
  double t930;
  double t944;
  double t954;
  double t1008;
  double t1015;
  double t1030;
  double t1046;
  double t1048;
  double t1054;
  double t966;
  double t1067;
  double t1073;
  double t1081;
  double t1088;
  double t1090;
  double t1080;
  double t1091;
  double t1135;
  double t1156;
  double t1168;
  double t1172;
  double t588;
  double t625;
  double t633;
  double t668;
  double t681;
  double t692;
  double t878;
  double t897;
  double t900;
  double t905;
  double t906;
  double t912;
  double t1152;
  double t1189;
  double t1191;
  double t1204;
  double t1208;
  double t1209;
  double t1443;
  double t1448;
  double t1383;
  double t1402;
  double t1496;
  double t1501;
  double t1576;
  double t1583;
  double t1647;
  double t1650;
  double t1724;
  double t1726;
  double t1230;
  double t1242;
  double t1245;
  double t1425;
  double t1428;
  double t1429;
  double t1450;
  double t1451;
  double t1454;
  double t1461;
  double t1465;
  double t1472;
  double t1474;
  double t1479;
  double t1486;
  double t1514;
  double t1515;
  double t1517;
  double t1563;
  double t1568;
  double t1572;
  double t1584;
  double t1588;
  double t1592;
  double t1617;
  double t1625;
  double t1628;
  double t1653;
  double t1657;
  double t1658;
  double t1683;
  double t1705;
  double t1708;
  double t1753;
  double t1756;
  double t1757;
  double t1767;
  double t1775;
  double t1781;
  double t1246;
  double t1248;
  double t1259;
  double t1293;
  double t1297;
  double t1319;
  t175 = Cos(var1[5]);
  t239 = Sin(var1[3]);
  t169 = Cos(var1[3]);
  t184 = Sin(var1[4]);
  t243 = Sin(var1[5]);
  t329 = Sin(var1[13]);
  t231 = t169*t175*t184;
  t273 = t239*t243;
  t283 = t231 + t273;
  t152 = Cos(var1[13]);
  t332 = -1.*t175*t239;
  t336 = t169*t184*t243;
  t342 = t332 + t336;
  t391 = Cos(var1[15]);
  t301 = t152*t283;
  t357 = -1.*t329*t342;
  t366 = t301 + t357;
  t123 = Sin(var1[15]);
  t412 = Cos(var1[14]);
  t435 = Cos(var1[4]);
  t446 = t412*t169*t435;
  t449 = Sin(var1[14]);
  t456 = t329*t283;
  t458 = t152*t342;
  t464 = t456 + t458;
  t465 = t449*t464;
  t477 = t446 + t465;
  t525 = Cos(var1[16]);
  t381 = t123*t366;
  t505 = t391*t477;
  t518 = t381 + t505;
  t118 = Sin(var1[16]);
  t528 = t391*t366;
  t531 = -1.*t123*t477;
  t545 = t528 + t531;
  t604 = Cos(var1[17]);
  t520 = -1.*t118*t518;
  t553 = t525*t545;
  t557 = t520 + t553;
  t116 = Sin(var1[17]);
  t607 = t525*t518;
  t609 = t118*t545;
  t623 = t607 + t609;
  t103 = Sin(var1[18]);
  t715 = t175*t239*t184;
  t730 = -1.*t169*t243;
  t738 = t715 + t730;
  t749 = t169*t175;
  t762 = t239*t184*t243;
  t771 = t749 + t762;
  t741 = t152*t738;
  t774 = -1.*t329*t771;
  t775 = t741 + t774;
  t787 = t412*t435*t239;
  t790 = t329*t738;
  t791 = t152*t771;
  t797 = t790 + t791;
  t805 = t449*t797;
  t806 = t787 + t805;
  t780 = t123*t775;
  t826 = t391*t806;
  t827 = t780 + t826;
  t852 = t391*t775;
  t856 = -1.*t123*t806;
  t859 = t852 + t856;
  t664 = Cos(var1[18]);
  t845 = -1.*t118*t827;
  t864 = t525*t859;
  t873 = t845 + t864;
  t880 = t525*t827;
  t886 = t118*t859;
  t890 = t880 + t886;
  t930 = t152*t435*t175;
  t944 = -1.*t435*t329*t243;
  t954 = t930 + t944;
  t1008 = -1.*t412*t184;
  t1015 = t435*t175*t329;
  t1030 = t152*t435*t243;
  t1046 = t1015 + t1030;
  t1048 = t449*t1046;
  t1054 = t1008 + t1048;
  t966 = t123*t954;
  t1067 = t391*t1054;
  t1073 = t966 + t1067;
  t1081 = t391*t954;
  t1088 = -1.*t123*t1054;
  t1090 = t1081 + t1088;
  t1080 = -1.*t118*t1073;
  t1091 = t525*t1090;
  t1135 = t1080 + t1091;
  t1156 = t525*t1073;
  t1168 = t118*t1090;
  t1172 = t1156 + t1168;
  t588 = t116*t557;
  t625 = t604*t623;
  t633 = t588 + t625;
  t668 = t604*t557;
  t681 = -1.*t116*t623;
  t692 = t668 + t681;
  t878 = t116*t873;
  t897 = t604*t890;
  t900 = t878 + t897;
  t905 = t604*t873;
  t906 = -1.*t116*t890;
  t912 = t905 + t906;
  t1152 = t116*t1135;
  t1189 = t604*t1172;
  t1191 = t1152 + t1189;
  t1204 = t604*t1135;
  t1208 = -1.*t116*t1172;
  t1209 = t1204 + t1208;
  t1443 = -1.*t152;
  t1448 = 1. + t1443;
  t1383 = -1.*t412;
  t1402 = 1. + t1383;
  t1496 = -1.*t391;
  t1501 = 1. + t1496;
  t1576 = -1.*t525;
  t1583 = 1. + t1576;
  t1647 = -1.*t604;
  t1650 = 1. + t1647;
  t1724 = -1.*t664;
  t1726 = 1. + t1724;
  t1230 = t664*t633;
  t1242 = t103*t692;
  t1245 = t1230 + t1242;
  t1425 = -0.08055*t1402;
  t1428 = -0.135*t449;
  t1429 = 0. + t1425 + t1428;
  t1450 = 0.07996*t1448;
  t1451 = 0.135*t329;
  t1454 = 0. + t1450 + t1451;
  t1461 = -0.135*t1448;
  t1465 = 0.07996*t329;
  t1472 = 0. + t1461 + t1465;
  t1474 = -0.135*t1402;
  t1479 = 0.08055*t449;
  t1486 = 0. + t1474 + t1479;
  t1514 = -0.01004*t1501;
  t1515 = 0.08055*t123;
  t1517 = 0. + t1514 + t1515;
  t1563 = -0.08055*t1501;
  t1568 = -0.01004*t123;
  t1572 = 0. + t1563 + t1568;
  t1584 = -0.08055*t1583;
  t1588 = -0.13004*t118;
  t1592 = 0. + t1584 + t1588;
  t1617 = -0.13004*t1583;
  t1625 = 0.08055*t118;
  t1628 = 0. + t1617 + t1625;
  t1653 = -0.19074*t1650;
  t1657 = 0.03315*t116;
  t1658 = 0. + t1653 + t1657;
  t1683 = -0.03315*t1650;
  t1705 = -0.19074*t116;
  t1708 = 0. + t1683 + t1705;
  t1753 = -0.01315*t1726;
  t1756 = -0.62554*t103;
  t1757 = 0. + t1753 + t1756;
  t1767 = -0.62554*t1726;
  t1775 = 0.01315*t103;
  t1781 = 0. + t1767 + t1775;
  t1246 = t664*t900;
  t1248 = t103*t912;
  t1259 = t1246 + t1248;
  t1293 = t664*t1191;
  t1297 = t103*t1209;
  t1319 = t1293 + t1297;
  p_output1[0]=t103*t633 - 1.*t664*t692;
  p_output1[1]=t103*t900 - 1.*t664*t912;
  p_output1[2]=t103*t1191 - 1.*t1209*t664;
  p_output1[3]=0.;
  p_output1[4]=t1245;
  p_output1[5]=t1259;
  p_output1[6]=t1319;
  p_output1[7]=0.;
  p_output1[8]=t169*t435*t449 - 1.*t412*t464;
  p_output1[9]=t239*t435*t449 - 1.*t412*t797;
  p_output1[10]=-1.*t1046*t412 - 1.*t184*t449;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.04375*t1245 + t1454*t283 + t1472*t342 + t1517*t366 + t1429*t169*t435 + t1486*t464 - 0.1318*(-1.*t169*t435*t449 + t412*t464) + t1572*t477 + t1592*t518 + t1628*t545 + t1658*t557 + t1708*t623 + t1757*t633 + t1781*t692 - 0.73604*(-1.*t103*t633 + t664*t692) + var1[0];
  p_output1[13]=0. - 0.04375*t1259 + t1429*t239*t435 + t1454*t738 + t1472*t771 + t1517*t775 + t1486*t797 - 0.1318*(-1.*t239*t435*t449 + t412*t797) + t1572*t806 + t1592*t827 + t1628*t859 + t1658*t873 + t1708*t890 + t1757*t900 + t1781*t912 - 0.73604*(-1.*t103*t900 + t664*t912) + var1[1];
  p_output1[14]=0. - 0.04375*t1319 + t1046*t1486 + t1054*t1572 + t1073*t1592 + t1090*t1628 + t1135*t1658 + t1172*t1708 + t1191*t1757 + t1209*t1781 - 1.*t1429*t184 + t1454*t175*t435 + t1472*t243*t435 - 0.1318*(t1046*t412 + t184*t449) - 0.73604*(-1.*t103*t1191 + t1209*t664) + t1517*t954 + var1[2];
  p_output1[15]=1.;
}



void T_RightTarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
