/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:57 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_RightToe_src.h"

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
  double t122;
  double t171;
  double t110;
  double t137;
  double t178;
  double t229;
  double t157;
  double t215;
  double t223;
  double t109;
  double t230;
  double t232;
  double t245;
  double t292;
  double t227;
  double t246;
  double t263;
  double t104;
  double t301;
  double t307;
  double t333;
  double t337;
  double t345;
  double t359;
  double t364;
  double t368;
  double t374;
  double t418;
  double t265;
  double t375;
  double t377;
  double t97;
  double t427;
  double t436;
  double t438;
  double t473;
  double t388;
  double t440;
  double t456;
  double t95;
  double t496;
  double t516;
  double t523;
  double t564;
  double t462;
  double t524;
  double t546;
  double t92;
  double t568;
  double t590;
  double t597;
  double t83;
  double t665;
  double t666;
  double t682;
  double t705;
  double t714;
  double t717;
  double t691;
  double t718;
  double t720;
  double t743;
  double t745;
  double t762;
  double t771;
  double t775;
  double t792;
  double t733;
  double t797;
  double t798;
  double t805;
  double t808;
  double t809;
  double t800;
  double t817;
  double t826;
  double t842;
  double t844;
  double t870;
  double t617;
  double t839;
  double t873;
  double t876;
  double t882;
  double t904;
  double t906;
  double t953;
  double t964;
  double t965;
  double t971;
  double t984;
  double t988;
  double t996;
  double t1000;
  double t1018;
  double t970;
  double t1022;
  double t1023;
  double t1046;
  double t1047;
  double t1057;
  double t1041;
  double t1061;
  double t1062;
  double t1089;
  double t1092;
  double t1105;
  double t1069;
  double t1107;
  double t1115;
  double t1136;
  double t1152;
  double t1153;
  double t547;
  double t603;
  double t613;
  double t634;
  double t640;
  double t642;
  double t880;
  double t910;
  double t911;
  double t923;
  double t924;
  double t932;
  double t1127;
  double t1157;
  double t1165;
  double t1170;
  double t1171;
  double t1175;
  double t1332;
  double t1335;
  double t1320;
  double t1321;
  double t1404;
  double t1406;
  double t1446;
  double t1447;
  double t1523;
  double t1524;
  double t1568;
  double t1580;
  double t1640;
  double t1641;
  double t1191;
  double t1210;
  double t1213;
  double t1322;
  double t1326;
  double t1327;
  double t1338;
  double t1341;
  double t1343;
  double t1353;
  double t1367;
  double t1372;
  double t1380;
  double t1383;
  double t1395;
  double t1413;
  double t1414;
  double t1415;
  double t1434;
  double t1439;
  double t1440;
  double t1463;
  double t1470;
  double t1480;
  double t1487;
  double t1489;
  double t1500;
  double t1531;
  double t1538;
  double t1551;
  double t1560;
  double t1561;
  double t1562;
  double t1583;
  double t1587;
  double t1597;
  double t1608;
  double t1621;
  double t1625;
  double t1642;
  double t1654;
  double t1660;
  double t1669;
  double t1677;
  double t1679;
  double t1216;
  double t1224;
  double t1229;
  double t1234;
  double t1246;
  double t1251;
  t122 = Cos(var1[5]);
  t171 = Sin(var1[3]);
  t110 = Cos(var1[3]);
  t137 = Sin(var1[4]);
  t178 = Sin(var1[5]);
  t229 = Sin(var1[13]);
  t157 = t110*t122*t137;
  t215 = t171*t178;
  t223 = t157 + t215;
  t109 = Cos(var1[13]);
  t230 = -1.*t122*t171;
  t232 = t110*t137*t178;
  t245 = t230 + t232;
  t292 = Cos(var1[15]);
  t227 = t109*t223;
  t246 = -1.*t229*t245;
  t263 = t227 + t246;
  t104 = Sin(var1[15]);
  t301 = Cos(var1[14]);
  t307 = Cos(var1[4]);
  t333 = t301*t110*t307;
  t337 = Sin(var1[14]);
  t345 = t229*t223;
  t359 = t109*t245;
  t364 = t345 + t359;
  t368 = t337*t364;
  t374 = t333 + t368;
  t418 = Cos(var1[16]);
  t265 = t104*t263;
  t375 = t292*t374;
  t377 = t265 + t375;
  t97 = Sin(var1[16]);
  t427 = t292*t263;
  t436 = -1.*t104*t374;
  t438 = t427 + t436;
  t473 = Cos(var1[17]);
  t388 = -1.*t97*t377;
  t440 = t418*t438;
  t456 = t388 + t440;
  t95 = Sin(var1[17]);
  t496 = t418*t377;
  t516 = t97*t438;
  t523 = t496 + t516;
  t564 = Cos(var1[18]);
  t462 = t95*t456;
  t524 = t473*t523;
  t546 = t462 + t524;
  t92 = Sin(var1[18]);
  t568 = t473*t456;
  t590 = -1.*t95*t523;
  t597 = t568 + t590;
  t83 = Cos(var1[19]);
  t665 = t122*t171*t137;
  t666 = -1.*t110*t178;
  t682 = t665 + t666;
  t705 = t110*t122;
  t714 = t171*t137*t178;
  t717 = t705 + t714;
  t691 = t109*t682;
  t718 = -1.*t229*t717;
  t720 = t691 + t718;
  t743 = t301*t307*t171;
  t745 = t229*t682;
  t762 = t109*t717;
  t771 = t745 + t762;
  t775 = t337*t771;
  t792 = t743 + t775;
  t733 = t104*t720;
  t797 = t292*t792;
  t798 = t733 + t797;
  t805 = t292*t720;
  t808 = -1.*t104*t792;
  t809 = t805 + t808;
  t800 = -1.*t97*t798;
  t817 = t418*t809;
  t826 = t800 + t817;
  t842 = t418*t798;
  t844 = t97*t809;
  t870 = t842 + t844;
  t617 = Sin(var1[19]);
  t839 = t95*t826;
  t873 = t473*t870;
  t876 = t839 + t873;
  t882 = t473*t826;
  t904 = -1.*t95*t870;
  t906 = t882 + t904;
  t953 = t109*t307*t122;
  t964 = -1.*t307*t229*t178;
  t965 = t953 + t964;
  t971 = -1.*t301*t137;
  t984 = t307*t122*t229;
  t988 = t109*t307*t178;
  t996 = t984 + t988;
  t1000 = t337*t996;
  t1018 = t971 + t1000;
  t970 = t104*t965;
  t1022 = t292*t1018;
  t1023 = t970 + t1022;
  t1046 = t292*t965;
  t1047 = -1.*t104*t1018;
  t1057 = t1046 + t1047;
  t1041 = -1.*t97*t1023;
  t1061 = t418*t1057;
  t1062 = t1041 + t1061;
  t1089 = t418*t1023;
  t1092 = t97*t1057;
  t1105 = t1089 + t1092;
  t1069 = t95*t1062;
  t1107 = t473*t1105;
  t1115 = t1069 + t1107;
  t1136 = t473*t1062;
  t1152 = -1.*t95*t1105;
  t1153 = t1136 + t1152;
  t547 = -1.*t92*t546;
  t603 = t564*t597;
  t613 = t547 + t603;
  t634 = t564*t546;
  t640 = t92*t597;
  t642 = t634 + t640;
  t880 = -1.*t92*t876;
  t910 = t564*t906;
  t911 = t880 + t910;
  t923 = t564*t876;
  t924 = t92*t906;
  t932 = t923 + t924;
  t1127 = -1.*t92*t1115;
  t1157 = t564*t1153;
  t1165 = t1127 + t1157;
  t1170 = t564*t1115;
  t1171 = t92*t1153;
  t1175 = t1170 + t1171;
  t1332 = -1.*t109;
  t1335 = 1. + t1332;
  t1320 = -1.*t301;
  t1321 = 1. + t1320;
  t1404 = -1.*t292;
  t1406 = 1. + t1404;
  t1446 = -1.*t418;
  t1447 = 1. + t1446;
  t1523 = -1.*t473;
  t1524 = 1. + t1523;
  t1568 = -1.*t564;
  t1580 = 1. + t1568;
  t1640 = -1.*t83;
  t1641 = 1. + t1640;
  t1191 = t617*t613;
  t1210 = t83*t642;
  t1213 = t1191 + t1210;
  t1322 = -0.08055*t1321;
  t1326 = -0.135*t337;
  t1327 = 0. + t1322 + t1326;
  t1338 = 0.07996*t1335;
  t1341 = 0.135*t229;
  t1343 = 0. + t1338 + t1341;
  t1353 = -0.135*t1335;
  t1367 = 0.07996*t229;
  t1372 = 0. + t1353 + t1367;
  t1380 = -0.135*t1321;
  t1383 = 0.08055*t337;
  t1395 = 0. + t1380 + t1383;
  t1413 = -0.01004*t1406;
  t1414 = 0.08055*t104;
  t1415 = 0. + t1413 + t1414;
  t1434 = -0.08055*t1406;
  t1439 = -0.01004*t104;
  t1440 = 0. + t1434 + t1439;
  t1463 = -0.08055*t1447;
  t1470 = -0.13004*t97;
  t1480 = 0. + t1463 + t1470;
  t1487 = -0.13004*t1447;
  t1489 = 0.08055*t97;
  t1500 = 0. + t1487 + t1489;
  t1531 = -0.19074*t1524;
  t1538 = 0.03315*t95;
  t1551 = 0. + t1531 + t1538;
  t1560 = -0.03315*t1524;
  t1561 = -0.19074*t95;
  t1562 = 0. + t1560 + t1561;
  t1583 = -0.01315*t1580;
  t1587 = -0.62554*t92;
  t1597 = 0. + t1583 + t1587;
  t1608 = -0.62554*t1580;
  t1621 = 0.01315*t92;
  t1625 = 0. + t1608 + t1621;
  t1642 = -1.03354*t1641;
  t1654 = 0.05315*t617;
  t1660 = 0. + t1642 + t1654;
  t1669 = -0.05315*t1641;
  t1677 = -1.03354*t617;
  t1679 = 0. + t1669 + t1677;
  t1216 = t617*t911;
  t1224 = t83*t932;
  t1229 = t1216 + t1224;
  t1234 = t617*t1165;
  t1246 = t83*t1175;
  t1251 = t1234 + t1246;
  p_output1[0]=t617*t642 - 1.*t613*t83;
  p_output1[1]=-1.*t83*t911 + t617*t932;
  p_output1[2]=t1175*t617 - 1.*t1165*t83;
  p_output1[3]=0.;
  p_output1[4]=t1213;
  p_output1[5]=t1229;
  p_output1[6]=t1251;
  p_output1[7]=0.;
  p_output1[8]=t110*t307*t337 - 1.*t301*t364;
  p_output1[9]=t171*t307*t337 - 1.*t301*t771;
  p_output1[10]=-1.*t137*t337 - 1.*t301*t996;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.02565*t1213 + t1343*t223 + t1372*t245 + t1415*t263 + t110*t1327*t307 + t1395*t364 - 0.1306*(-1.*t110*t307*t337 + t301*t364) + t1440*t374 + t1480*t377 + t1500*t438 + t1551*t456 + t1562*t523 + t1597*t546 + t1625*t597 + t1660*t613 + t1679*t642 - 1.03824*(-1.*t617*t642 + t613*t83) + var1[0];
  p_output1[13]=0. - 0.02565*t1229 + t1327*t171*t307 + t1343*t682 + t1372*t717 + t1415*t720 + t1395*t771 - 0.1306*(-1.*t171*t307*t337 + t301*t771) + t1440*t792 + t1480*t798 + t1500*t809 + t1551*t826 + t1562*t870 + t1597*t876 + t1625*t906 + t1660*t911 + t1679*t932 - 1.03824*(t83*t911 - 1.*t617*t932) + var1[1];
  p_output1[14]=0. - 0.02565*t1251 - 1.*t1327*t137 + t1018*t1440 + t1023*t1480 + t1057*t1500 + t1062*t1551 + t1105*t1562 + t1115*t1597 + t1153*t1625 + t1165*t1660 + t1175*t1679 + t122*t1343*t307 + t1372*t178*t307 - 1.03824*(-1.*t1175*t617 + t1165*t83) + t1415*t965 + t1395*t996 - 0.1306*(t137*t337 + t301*t996) + var1[2];
  p_output1[15]=1.;
}



void T_RightToe_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
