/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:47 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "T_LeftKneeSpringJoint_src.h"

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
  double t79;
  double t170;
  double t219;
  double t179;
  double t222;
  double t163;
  double t262;
  double t317;
  double t337;
  double t211;
  double t233;
  double t241;
  double t356;
  double t50;
  double t427;
  double t433;
  double t445;
  double t112;
  double t151;
  double t162;
  double t249;
  double t357;
  double t368;
  double t381;
  double t394;
  double t411;
  double t455;
  double t541;
  double t423;
  double t488;
  double t501;
  double t48;
  double t553;
  double t584;
  double t597;
  double t45;
  double t880;
  double t885;
  double t890;
  double t801;
  double t802;
  double t874;
  double t992;
  double t994;
  double t1001;
  double t784;
  double t877;
  double t897;
  double t925;
  double t967;
  double t979;
  double t647;
  double t982;
  double t1005;
  double t1007;
  double t1010;
  double t1021;
  double t1029;
  double t1174;
  double t1175;
  double t1189;
  double t1118;
  double t1144;
  double t1145;
  double t1148;
  double t1149;
  double t1166;
  double t1169;
  double t1203;
  double t1205;
  double t1216;
  double t1225;
  double t1234;
  double t519;
  double t615;
  double t621;
  double t688;
  double t707;
  double t715;
  double t1009;
  double t1030;
  double t1040;
  double t1058;
  double t1091;
  double t1097;
  double t1208;
  double t1237;
  double t1238;
  double t1248;
  double t1252;
  double t1257;
  double t1451;
  double t1452;
  double t1510;
  double t1517;
  double t1633;
  double t1651;
  double t1708;
  double t1709;
  double t1814;
  double t1817;
  double t1267;
  double t1295;
  double t1309;
  double t1453;
  double t1461;
  double t1462;
  double t1483;
  double t1488;
  double t1490;
  double t1526;
  double t1534;
  double t1551;
  double t1594;
  double t1600;
  double t1609;
  double t1652;
  double t1656;
  double t1674;
  double t1686;
  double t1698;
  double t1699;
  double t1740;
  double t1743;
  double t1773;
  double t1779;
  double t1787;
  double t1797;
  double t1820;
  double t1822;
  double t1836;
  double t1843;
  double t1855;
  double t1859;
  double t1313;
  double t1318;
  double t1320;
  double t1343;
  double t1348;
  double t1352;
  t79 = Cos(var1[3]);
  t170 = Cos(var1[5]);
  t219 = Sin(var1[4]);
  t179 = Sin(var1[3]);
  t222 = Sin(var1[5]);
  t163 = Cos(var1[6]);
  t262 = t79*t170*t219;
  t317 = t179*t222;
  t337 = t262 + t317;
  t211 = -1.*t170*t179;
  t233 = t79*t219*t222;
  t241 = t211 + t233;
  t356 = Sin(var1[6]);
  t50 = Cos(var1[8]);
  t427 = t163*t337;
  t433 = -1.*t241*t356;
  t445 = t427 + t433;
  t112 = Cos(var1[4]);
  t151 = Cos(var1[7]);
  t162 = t79*t112*t151;
  t249 = t163*t241;
  t357 = t337*t356;
  t368 = t249 + t357;
  t381 = Sin(var1[7]);
  t394 = t368*t381;
  t411 = t162 + t394;
  t455 = Sin(var1[8]);
  t541 = Cos(var1[9]);
  t423 = t50*t411;
  t488 = t445*t455;
  t501 = t423 + t488;
  t48 = Sin(var1[9]);
  t553 = t50*t445;
  t584 = -1.*t411*t455;
  t597 = t553 + t584;
  t45 = Cos(var1[10]);
  t880 = t170*t179*t219;
  t885 = -1.*t79*t222;
  t890 = t880 + t885;
  t801 = t79*t170;
  t802 = t179*t219*t222;
  t874 = t801 + t802;
  t992 = t163*t890;
  t994 = -1.*t874*t356;
  t1001 = t992 + t994;
  t784 = t112*t151*t179;
  t877 = t163*t874;
  t897 = t890*t356;
  t925 = t877 + t897;
  t967 = t925*t381;
  t979 = t784 + t967;
  t647 = Sin(var1[10]);
  t982 = t50*t979;
  t1005 = t1001*t455;
  t1007 = t982 + t1005;
  t1010 = t50*t1001;
  t1021 = -1.*t979*t455;
  t1029 = t1010 + t1021;
  t1174 = t112*t170*t163;
  t1175 = -1.*t112*t222*t356;
  t1189 = t1174 + t1175;
  t1118 = -1.*t151*t219;
  t1144 = t112*t163*t222;
  t1145 = t112*t170*t356;
  t1148 = t1144 + t1145;
  t1149 = t1148*t381;
  t1166 = t1118 + t1149;
  t1169 = t50*t1166;
  t1203 = t1189*t455;
  t1205 = t1169 + t1203;
  t1216 = t50*t1189;
  t1225 = -1.*t1166*t455;
  t1234 = t1216 + t1225;
  t519 = -1.*t48*t501;
  t615 = t541*t597;
  t621 = t519 + t615;
  t688 = t541*t501;
  t707 = t48*t597;
  t715 = t688 + t707;
  t1009 = -1.*t48*t1007;
  t1030 = t541*t1029;
  t1040 = t1009 + t1030;
  t1058 = t541*t1007;
  t1091 = t48*t1029;
  t1097 = t1058 + t1091;
  t1208 = -1.*t48*t1205;
  t1237 = t541*t1234;
  t1238 = t1208 + t1237;
  t1248 = t541*t1205;
  t1252 = t48*t1234;
  t1257 = t1248 + t1252;
  t1451 = -1.*t163;
  t1452 = 1. + t1451;
  t1510 = -1.*t151;
  t1517 = 1. + t1510;
  t1633 = -1.*t50;
  t1651 = 1. + t1633;
  t1708 = -1.*t541;
  t1709 = 1. + t1708;
  t1814 = -1.*t45;
  t1817 = 1. + t1814;
  t1267 = t647*t621;
  t1295 = t45*t715;
  t1309 = t1267 + t1295;
  t1453 = 0.07996*t1452;
  t1461 = -0.135*t356;
  t1462 = 0. + t1453 + t1461;
  t1483 = 0.135*t1452;
  t1488 = 0.07996*t356;
  t1490 = 0. + t1483 + t1488;
  t1526 = 0.135*t1517;
  t1534 = 0.08055*t381;
  t1551 = 0. + t1526 + t1534;
  t1594 = -0.08055*t1517;
  t1600 = 0.135*t381;
  t1609 = 0. + t1594 + t1600;
  t1652 = -0.08055*t1651;
  t1656 = -0.01004*t455;
  t1674 = 0. + t1652 + t1656;
  t1686 = -0.01004*t1651;
  t1698 = 0.08055*t455;
  t1699 = 0. + t1686 + t1698;
  t1740 = -0.08055*t1709;
  t1743 = -0.13004*t48;
  t1773 = 0. + t1740 + t1743;
  t1779 = -0.13004*t1709;
  t1787 = 0.08055*t48;
  t1797 = 0. + t1779 + t1787;
  t1820 = -0.19074*t1817;
  t1822 = 0.03315*t647;
  t1836 = 0. + t1820 + t1822;
  t1843 = -0.03315*t1817;
  t1855 = -0.19074*t647;
  t1859 = 0. + t1843 + t1855;
  t1313 = t647*t1040;
  t1318 = t45*t1097;
  t1320 = t1313 + t1318;
  t1343 = t647*t1238;
  t1348 = t45*t1257;
  t1352 = t1343 + t1348;
  p_output1[0]=-1.*t45*t621 + t647*t715;
  p_output1[1]=-1.*t1040*t45 + t1097*t647;
  p_output1[2]=-1.*t1238*t45 + t1257*t647;
  p_output1[3]=0.;
  p_output1[4]=t1309;
  p_output1[5]=t1320;
  p_output1[6]=t1352;
  p_output1[7]=0.;
  p_output1[8]=-1.*t151*t368 + t112*t381*t79;
  p_output1[9]=t112*t179*t381 - 1.*t151*t925;
  p_output1[10]=-1.*t1148*t151 - 1.*t219*t381;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.03315*t1309 + t1490*t241 + t1462*t337 + t1551*t368 + t1674*t411 + t1699*t445 + t1773*t501 + t1797*t597 + t1836*t621 + t1859*t715 - 0.19074*(t45*t621 - 1.*t647*t715) + t112*t1609*t79 + 0.1305*(t151*t368 - 1.*t112*t381*t79) + var1[0];
  p_output1[13]=0. - 0.03315*t1320 + t1001*t1699 + t1007*t1773 + t112*t1609*t179 + t1029*t1797 + t1040*t1836 + t1097*t1859 - 0.19074*(t1040*t45 - 1.*t1097*t647) + t1490*t874 + t1462*t890 + t1551*t925 + 0.1305*(-1.*t112*t179*t381 + t151*t925) + t1674*t979 + var1[1];
  p_output1[14]=0. - 0.03315*t1352 + t1148*t1551 + t1166*t1674 + t1189*t1699 + t112*t1462*t170 + t1205*t1773 + t1234*t1797 + t1238*t1836 + t1257*t1859 - 1.*t1609*t219 + t112*t1490*t222 + 0.1305*(t1148*t151 + t219*t381) - 0.19074*(t1238*t45 - 1.*t1257*t647) + var1[2];
  p_output1[15]=1.;
}



void T_LeftKneeSpringJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
