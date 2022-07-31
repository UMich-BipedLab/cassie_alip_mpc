/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:23 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightAnkleJoint_src.h"

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
  double t251;
  double t208;
  double t233;
  double t263;
  double t302;
  double t240;
  double t269;
  double t272;
  double t199;
  double t309;
  double t321;
  double t325;
  double t378;
  double t299;
  double t337;
  double t350;
  double t167;
  double t380;
  double t389;
  double t394;
  double t426;
  double t355;
  double t396;
  double t410;
  double t154;
  double t450;
  double t461;
  double t464;
  double t467;
  double t468;
  double t477;
  double t97;
  double t504;
  double t528;
  double t540;
  double t418;
  double t483;
  double t484;
  double t544;
  double t25;
  double t725;
  double t733;
  double t747;
  double t714;
  double t765;
  double t766;
  double t776;
  double t786;
  double t770;
  double t788;
  double t792;
  double t815;
  double t823;
  double t827;
  double t842;
  double t843;
  double t609;
  double t631;
  double t635;
  double t671;
  double t874;
  double t881;
  double t885;
  double t810;
  double t844;
  double t848;
  double t944;
  double t947;
  double t988;
  double t1009;
  double t953;
  double t968;
  double t495;
  double t556;
  double t585;
  double t641;
  double t649;
  double t650;
  double t673;
  double t677;
  double t689;
  double t694;
  double t698;
  double t860;
  double t887;
  double t888;
  double t901;
  double t904;
  double t905;
  double t906;
  double t907;
  double t910;
  double t914;
  double t923;
  double t972;
  double t1012;
  double t1013;
  double t1034;
  double t1036;
  double t1043;
  double t1046;
  double t1071;
  double t1082;
  double t1101;
  double t1168;
  double t1172;
  double t1189;
  double t1312;
  double t1317;
  double t1295;
  double t1296;
  double t1367;
  double t1372;
  double t1377;
  double t1337;
  double t1346;
  double t1359;
  double t1271;
  double t1278;
  double t1298;
  double t1360;
  double t1366;
  double t1382;
  double t1385;
  double t1408;
  double t1411;
  double t1422;
  double t1427;
  double t1436;
  double t1238;
  double t1244;
  double t1290;
  double t1291;
  double t1390;
  double t1449;
  double t1450;
  double t1472;
  double t1475;
  double t1476;
  double t1483;
  double t1484;
  double t1212;
  double t1217;
  double t1261;
  double t1263;
  double t1451;
  double t1485;
  double t1491;
  double t1505;
  double t1512;
  double t1513;
  double t1514;
  double t1525;
  double t1533;
  double t1534;
  double t1543;
  double t1551;
  double t1556;
  double t1558;
  double t1562;
  double t1190;
  double t1197;
  double t1207;
  double t1591;
  double t1592;
  double t1597;
  double t1607;
  double t1611;
  double t1224;
  double t1227;
  double t1500;
  double t1571;
  double t1573;
  double t1626;
  double t1629;
  double t1630;
  double t1635;
  double t1651;
  double t1654;
  double t1656;
  double t1578;
  double t1617;
  double t1620;
  double t1643;
  double t1676;
  double t1680;
  double t1689;
  double t1693;
  double t1694;
  double t1164;
  double t1165;
  double t1166;
  double t1624;
  double t1706;
  double t1727;
  double t1746;
  double t1783;
  double t1798;
  double t1836;
  double t1852;
  double t1884;
  double t1911;
  double t1947;
  double t1981;
  double t2308;
  double t2326;
  t251 = Cos(var1[17]);
  t208 = Cos(var1[18]);
  t233 = Sin(var1[17]);
  t263 = Sin(var1[18]);
  t302 = Cos(var1[16]);
  t240 = t208*t233;
  t269 = t251*t263;
  t272 = 0. + t240 + t269;
  t199 = Sin(var1[16]);
  t309 = -1.*t251*t208;
  t321 = t233*t263;
  t325 = 0. + t309 + t321;
  t378 = Sin(var1[15]);
  t299 = t199*t272;
  t337 = t302*t325;
  t350 = 0. + t299 + t337;
  t167 = Cos(var1[15]);
  t380 = t302*t272;
  t389 = -1.*t199*t325;
  t394 = 0. + t380 + t389;
  t426 = Cos(var1[13]);
  t355 = t167*t350;
  t396 = t378*t394;
  t410 = 0. + t355 + t396;
  t154 = Sin(var1[13]);
  t450 = Sin(var1[14]);
  t461 = -1.*t378*t350;
  t464 = t167*t394;
  t467 = 0. + t461 + t464;
  t468 = t450*t467;
  t477 = 0. + t468;
  t97 = Cos(var1[5]);
  t504 = t426*t410;
  t528 = t154*t477;
  t540 = 0. + t504 + t528;
  t418 = -1.*t154*t410;
  t483 = t426*t477;
  t484 = 0. + t418 + t483;
  t544 = Sin(var1[5]);
  t25 = Sin(var1[3]);
  t725 = t251*t208;
  t733 = -1.*t233*t263;
  t747 = 0. + t725 + t733;
  t714 = -1.*t199*t272;
  t765 = t302*t747;
  t766 = 0. + t714 + t765;
  t776 = t199*t747;
  t786 = 0. + t380 + t776;
  t770 = t378*t766;
  t788 = t167*t786;
  t792 = 0. + t770 + t788;
  t815 = t167*t766;
  t823 = -1.*t378*t786;
  t827 = 0. + t815 + t823;
  t842 = t450*t827;
  t843 = 0. + t842;
  t609 = Cos(var1[3]);
  t631 = Cos(var1[4]);
  t635 = Cos(var1[14]);
  t671 = Sin(var1[4]);
  t874 = t426*t792;
  t881 = t154*t843;
  t885 = 0. + t874 + t881;
  t810 = -1.*t154*t792;
  t844 = t426*t843;
  t848 = 0. + t810 + t844;
  t944 = -1.*t635;
  t947 = 0. + t944;
  t988 = t947*t154;
  t1009 = 0. + t988;
  t953 = t426*t947;
  t968 = 0. + t953;
  t495 = t97*t484;
  t556 = -1.*t540*t544;
  t585 = 0. + t495 + t556;
  t641 = t635*t467;
  t649 = 0. + t641;
  t650 = t631*t649;
  t673 = t97*t540;
  t677 = t484*t544;
  t689 = 0. + t673 + t677;
  t694 = t671*t689;
  t698 = 0. + t650 + t694;
  t860 = t97*t848;
  t887 = -1.*t885*t544;
  t888 = 0. + t860 + t887;
  t901 = t635*t827;
  t904 = 0. + t901;
  t905 = t631*t904;
  t906 = t97*t885;
  t907 = t848*t544;
  t910 = 0. + t906 + t907;
  t914 = t671*t910;
  t923 = 0. + t905 + t914;
  t972 = t968*t97;
  t1012 = -1.*t1009*t544;
  t1013 = 0. + t972 + t1012;
  t1034 = 0. + t450;
  t1036 = t631*t1034;
  t1043 = t97*t1009;
  t1046 = t968*t544;
  t1071 = 0. + t1043 + t1046;
  t1082 = t671*t1071;
  t1101 = 0. + t1036 + t1082;
  t1168 = -1.*t904*t671;
  t1172 = t631*t910;
  t1189 = 0. + t1168 + t1172;
  t1312 = -1.*t208;
  t1317 = 1. + t1312;
  t1295 = -1.*t251;
  t1296 = 1. + t1295;
  t1367 = -0.62554*t1317;
  t1372 = -0.62554*t208;
  t1377 = 0. + t1367 + t1372;
  t1337 = -0.01315*t1317;
  t1346 = -0.01315*t208;
  t1359 = 0. + t1337 + t1346;
  t1271 = -1.*t302;
  t1278 = 1. + t1271;
  t1298 = -0.03315*t1296;
  t1360 = t251*t1359;
  t1366 = -0.19074*t233;
  t1382 = -1.*t1377*t233;
  t1385 = 0. + t1298 + t1360 + t1366 + t1382;
  t1408 = -0.19074*t1296;
  t1411 = t251*t1377;
  t1422 = 0.03315*t233;
  t1427 = t1359*t233;
  t1436 = 0. + t1408 + t1411 + t1422 + t1427;
  t1238 = -1.*t167;
  t1244 = 1. + t1238;
  t1290 = -0.13004*t1278;
  t1291 = 0.08055*t199;
  t1390 = t199*t1385;
  t1449 = t302*t1436;
  t1450 = 0. + t1290 + t1291 + t1390 + t1449;
  t1472 = -0.08055*t1278;
  t1475 = -0.13004*t199;
  t1476 = t302*t1385;
  t1483 = -1.*t199*t1436;
  t1484 = 0. + t1472 + t1475 + t1476 + t1483;
  t1212 = -1.*t426;
  t1217 = 1. + t1212;
  t1261 = -0.01004*t1244;
  t1263 = 0.08055*t378;
  t1451 = t167*t1450;
  t1485 = t378*t1484;
  t1491 = 0. + t1261 + t1263 + t1451 + t1485;
  t1505 = -1.*t635;
  t1512 = 1. + t1505;
  t1513 = -0.135*t1512;
  t1514 = -0.1305*t635;
  t1525 = 0.08055*t450;
  t1533 = -0.08055*t1244;
  t1534 = -0.01004*t378;
  t1543 = -1.*t378*t1450;
  t1551 = t167*t1484;
  t1556 = 0. + t1533 + t1534 + t1543 + t1551;
  t1558 = t450*t1556;
  t1562 = 0. + t1513 + t1514 + t1525 + t1558;
  t1190 = -1.*t1034*t671;
  t1197 = t631*t1071;
  t1207 = 0. + t1190 + t1197;
  t1591 = 0.07996*t1217;
  t1592 = 0.135*t154;
  t1597 = t426*t1491;
  t1607 = t154*t1562;
  t1611 = 0. + t1591 + t1592 + t1597 + t1607;
  t1224 = -0.135*t1217;
  t1227 = 0.07996*t154;
  t1500 = -1.*t154*t1491;
  t1571 = t426*t1562;
  t1573 = 0. + t1224 + t1227 + t1500 + t1571;
  t1626 = -0.08055*t1512;
  t1629 = -0.004500000000000004*t450;
  t1630 = t635*t1556;
  t1635 = 0. + t1626 + t1629 + t1630;
  t1651 = t97*t1611;
  t1654 = t1573*t544;
  t1656 = 0. + t1651 + t1654;
  t1578 = t97*t1573;
  t1617 = -1.*t1611*t544;
  t1620 = 0. + t1578 + t1617;
  t1643 = -1.*t1635*t671;
  t1676 = t631*t1656;
  t1680 = 0. + t1643 + t1676;
  t1689 = t631*t1635;
  t1693 = t671*t1656;
  t1694 = 0. + t1689 + t1693;
  t1164 = -1.*t649*t671;
  t1165 = t631*t689;
  t1166 = 0. + t1164 + t1165;
  t1624 = t1013*t1620;
  t1706 = -1.*t1620*t888;
  t1727 = -1.*t1013*t1620;
  t1746 = t1620*t585;
  t1783 = t1620*t888;
  t1798 = -1.*t1620*t585;
  t1836 = t1034*t1635;
  t1852 = -1.*t1635*t904;
  t1884 = -1.*t1034*t1635;
  t1911 = t1635*t649;
  t1947 = t1635*t904;
  t1981 = -1.*t1635*t649;
  t2308 = t1491*t792;
  t2326 = -1.*t1491*t410;
  p_output1[0]=0. - 1.*t25*t585 + t609*t698;
  p_output1[1]=0. - 1.*t25*t888 + t609*t923;
  p_output1[2]=0. - 1.*t1013*t25 + t1101*t609;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t585*t609 + t25*t698;
  p_output1[7]=0. + t609*t888 + t25*t923;
  p_output1[8]=0. + t1101*t25 + t1013*t609;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1166;
  p_output1[13]=t1189;
  p_output1[14]=t1207;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1189*(t1624 + t1207*t1680 + t1101*t1694) + t1207*(-1.*t1189*t1680 + t1706 - 1.*t1694*t923);
  p_output1[19]=t1166*(-1.*t1207*t1680 - 1.*t1101*t1694 + t1727) + t1207*(t1166*t1680 + t1746 + t1694*t698);
  p_output1[20]=t1189*(-1.*t1166*t1680 + t1798 - 1.*t1694*t698) + t1166*(t1189*t1680 + t1783 + t1694*t923);
  p_output1[21]=t1166;
  p_output1[22]=t1189;
  p_output1[23]=t1207;
  p_output1[24]=(t1624 + t1071*t1656 + t1836)*t888 + t1013*(t1706 + t1852 - 1.*t1656*t910);
  p_output1[25]=(-1.*t1071*t1656 + t1727 + t1884)*t585 + t1013*(t1746 + t1911 + t1656*t689);
  p_output1[26]=(t1798 + t1981 - 1.*t1656*t689)*t888 + t585*(t1783 + t1947 + t1656*t910);
  p_output1[27]=t585;
  p_output1[28]=t888;
  p_output1[29]=t1013;
  p_output1[30]=t1034*(t1852 - 1.*t1573*t848 - 1.*t1611*t885) + t904*(t1009*t1611 + t1836 + t1573*t968);
  p_output1[31]=t1034*(t1911 + t1573*t484 + t1611*t540) + t649*(-1.*t1009*t1611 + t1884 - 1.*t1573*t968);
  p_output1[32]=t649*(t1947 + t1573*t848 + t1611*t885) + (t1981 - 1.*t1573*t484 - 1.*t1611*t540)*t904;
  p_output1[33]=t649;
  p_output1[34]=t904;
  p_output1[35]=t1034;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=0.135*t410 + 0.07996*t477 + t1034*(t1852 - 1.*t1491*t792 - 1.*t1562*t843) + t904*(0. + t1836 + t1562*t947);
  p_output1[79]=t1034*(t1911 + t1491*t410 + t1562*t477) + 0.135*t792 + 0.07996*t843 + t649*(0. + t1884 - 1.*t1562*t947);
  p_output1[80]=0. + t649*(t1947 + t2308 + t1562*t843) + (t1981 + t2326 - 1.*t1562*t477)*t904 + 0.07996*t947;
  p_output1[81]=t649;
  p_output1[82]=t904;
  p_output1[83]=t1034;
  p_output1[84]=0. - 0.135*t467 + 0.1305*t792;
  p_output1[85]=0. - 0.1305*t410 - 0.135*t827;
  p_output1[86]=-0.08055 + (0. + t2326 - 1.*t1556*t467)*t792 + t410*(0. + t2308 + t1556*t827);
  p_output1[87]=t410;
  p_output1[88]=t792;
  p_output1[89]=0.;
  p_output1[90]=0. + 0.08055*t350 - 0.01004*t394 - 1.*t1484*t766 - 1.*t1450*t786;
  p_output1[91]=0. + t1450*t350 + t1484*t394 - 0.01004*t766 + 0.08055*t786;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=0. - 0.13004*t272 - 1.*t1436*t272 + 0.08055*t325 - 1.*t1385*t747;
  p_output1[97]=0. + 0.08055*t272 + t1385*t272 + t1436*t325 - 0.13004*t747;
  p_output1[98]=0.;
  p_output1[99]=0.;
  p_output1[100]=0.;
  p_output1[101]=1.;
  p_output1[102]=0. - 0.03315*t208 - 1.*t1359*t208 - 0.19074*t263 - 1.*t1377*t263;
  p_output1[103]=0. - 0.19074*t208 - 1.*t1377*t208 + 0.03315*t263 + t1359*t263;
  p_output1[104]=0.;
  p_output1[105]=0.;
  p_output1[106]=0.;
  p_output1[107]=1.;
  p_output1[108]=0.;
  p_output1[109]=0.;
  p_output1[110]=0.;
  p_output1[111]=0.;
  p_output1[112]=0.;
  p_output1[113]=1.;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
}



void Jb_RightAnkleJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
