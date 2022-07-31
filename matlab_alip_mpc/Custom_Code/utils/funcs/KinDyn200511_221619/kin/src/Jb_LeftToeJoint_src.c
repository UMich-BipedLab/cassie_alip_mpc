/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:29 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftToeJoint_src.h"

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
  double t231;
  double t192;
  double t204;
  double t238;
  double t294;
  double t217;
  double t240;
  double t254;
  double t187;
  double t295;
  double t297;
  double t314;
  double t342;
  double t285;
  double t319;
  double t322;
  double t150;
  double t359;
  double t360;
  double t373;
  double t139;
  double t416;
  double t421;
  double t429;
  double t338;
  double t397;
  double t400;
  double t434;
  double t474;
  double t408;
  double t447;
  double t452;
  double t101;
  double t484;
  double t489;
  double t503;
  double t526;
  double t536;
  double t539;
  double t558;
  double t470;
  double t546;
  double t553;
  double t84;
  double t583;
  double t597;
  double t606;
  double t40;
  double t784;
  double t797;
  double t826;
  double t766;
  double t827;
  double t835;
  double t847;
  double t857;
  double t878;
  double t879;
  double t881;
  double t841;
  double t863;
  double t871;
  double t875;
  double t883;
  double t887;
  double t890;
  double t895;
  double t908;
  double t914;
  double t916;
  double t631;
  double t642;
  double t644;
  double t699;
  double t889;
  double t922;
  double t939;
  double t975;
  double t982;
  double t995;
  double t1125;
  double t1136;
  double t1138;
  double t1139;
  double t1144;
  double t1156;
  double t555;
  double t612;
  double t622;
  double t651;
  double t669;
  double t677;
  double t700;
  double t701;
  double t717;
  double t737;
  double t739;
  double t949;
  double t1002;
  double t1011;
  double t1025;
  double t1031;
  double t1055;
  double t1072;
  double t1074;
  double t1084;
  double t1099;
  double t1100;
  double t1142;
  double t1160;
  double t1162;
  double t1172;
  double t1183;
  double t1188;
  double t1213;
  double t1214;
  double t1217;
  double t1223;
  double t1316;
  double t1331;
  double t1336;
  double t1492;
  double t1502;
  double t1483;
  double t1489;
  double t1531;
  double t1543;
  double t1552;
  double t1503;
  double t1511;
  double t1513;
  double t1434;
  double t1474;
  double t1490;
  double t1525;
  double t1526;
  double t1560;
  double t1562;
  double t1582;
  double t1583;
  double t1585;
  double t1590;
  double t1592;
  double t1418;
  double t1422;
  double t1478;
  double t1482;
  double t1570;
  double t1596;
  double t1599;
  double t1622;
  double t1631;
  double t1633;
  double t1635;
  double t1637;
  double t1383;
  double t1392;
  double t1669;
  double t1670;
  double t1680;
  double t1683;
  double t1685;
  double t1425;
  double t1433;
  double t1602;
  double t1656;
  double t1659;
  double t1348;
  double t1356;
  double t1408;
  double t1661;
  double t1665;
  double t1687;
  double t1690;
  double t1695;
  double t1697;
  double t1698;
  double t1704;
  double t1706;
  double t1708;
  double t1711;
  double t1712;
  double t1714;
  double t1716;
  double t1718;
  double t1719;
  double t1337;
  double t1339;
  double t1345;
  double t1364;
  double t1373;
  double t1692;
  double t1724;
  double t1734;
  double t1746;
  double t1749;
  double t1756;
  double t1759;
  double t1768;
  double t1777;
  double t1781;
  double t1786;
  double t1787;
  double t1793;
  double t1800;
  double t1801;
  double t1745;
  double t1770;
  double t1771;
  double t1789;
  double t1803;
  double t1806;
  double t1808;
  double t1815;
  double t1817;
  double t1299;
  double t1303;
  double t1308;
  double t1772;
  double t1837;
  double t1856;
  double t1873;
  double t1892;
  double t1913;
  double t1934;
  double t1941;
  double t1972;
  double t1983;
  double t1995;
  double t2012;
  double t2245;
  double t2256;
  t231 = Cos(var1[11]);
  t192 = Cos(var1[12]);
  t204 = Sin(var1[11]);
  t238 = Sin(var1[12]);
  t294 = Cos(var1[10]);
  t217 = t192*t204;
  t240 = t231*t238;
  t254 = 0. + t217 + t240;
  t187 = Sin(var1[10]);
  t295 = -1.*t231*t192;
  t297 = t204*t238;
  t314 = 0. + t295 + t297;
  t342 = Sin(var1[9]);
  t285 = t187*t254;
  t319 = t294*t314;
  t322 = 0. + t285 + t319;
  t150 = Cos(var1[9]);
  t359 = t294*t254;
  t360 = -1.*t187*t314;
  t373 = 0. + t359 + t360;
  t139 = Cos(var1[8]);
  t416 = -1.*t342*t322;
  t421 = t150*t373;
  t429 = 0. + t416 + t421;
  t338 = t150*t322;
  t397 = t342*t373;
  t400 = 0. + t338 + t397;
  t434 = Sin(var1[8]);
  t474 = Cos(var1[6]);
  t408 = t139*t400;
  t447 = t429*t434;
  t452 = 0. + t408 + t447;
  t101 = Sin(var1[6]);
  t484 = Sin(var1[7]);
  t489 = t139*t429;
  t503 = -1.*t400*t434;
  t526 = 0. + t489 + t503;
  t536 = t484*t526;
  t539 = 0. + t536;
  t558 = Sin(var1[5]);
  t470 = -1.*t101*t452;
  t546 = t474*t539;
  t553 = 0. + t470 + t546;
  t84 = Cos(var1[5]);
  t583 = t474*t452;
  t597 = t101*t539;
  t606 = 0. + t583 + t597;
  t40 = Sin(var1[3]);
  t784 = t231*t192;
  t797 = -1.*t204*t238;
  t826 = 0. + t784 + t797;
  t766 = -1.*t187*t254;
  t827 = t294*t826;
  t835 = 0. + t766 + t827;
  t847 = t187*t826;
  t857 = 0. + t359 + t847;
  t878 = t150*t835;
  t879 = -1.*t342*t857;
  t881 = 0. + t878 + t879;
  t841 = t342*t835;
  t863 = t150*t857;
  t871 = 0. + t841 + t863;
  t875 = t139*t871;
  t883 = t881*t434;
  t887 = 0. + t875 + t883;
  t890 = t139*t881;
  t895 = -1.*t871*t434;
  t908 = 0. + t890 + t895;
  t914 = t484*t908;
  t916 = 0. + t914;
  t631 = Cos(var1[3]);
  t642 = Cos(var1[4]);
  t644 = Cos(var1[7]);
  t699 = Sin(var1[4]);
  t889 = -1.*t101*t887;
  t922 = t474*t916;
  t939 = 0. + t889 + t922;
  t975 = t474*t887;
  t982 = t101*t916;
  t995 = 0. + t975 + t982;
  t1125 = -1.*t644;
  t1136 = 0. + t1125;
  t1138 = t474*t1136;
  t1139 = 0. + t1138;
  t1144 = t1136*t101;
  t1156 = 0. + t1144;
  t555 = t84*t553;
  t612 = -1.*t558*t606;
  t622 = 0. + t555 + t612;
  t651 = t644*t526;
  t669 = 0. + t651;
  t677 = t642*t669;
  t700 = t558*t553;
  t701 = t84*t606;
  t717 = 0. + t700 + t701;
  t737 = t699*t717;
  t739 = 0. + t677 + t737;
  t949 = t84*t939;
  t1002 = -1.*t558*t995;
  t1011 = 0. + t949 + t1002;
  t1025 = t644*t908;
  t1031 = 0. + t1025;
  t1055 = t642*t1031;
  t1072 = t558*t939;
  t1074 = t84*t995;
  t1084 = 0. + t1072 + t1074;
  t1099 = t699*t1084;
  t1100 = 0. + t1055 + t1099;
  t1142 = t84*t1139;
  t1160 = -1.*t558*t1156;
  t1162 = 0. + t1142 + t1160;
  t1172 = t1139*t558;
  t1183 = t84*t1156;
  t1188 = 0. + t1172 + t1183;
  t1213 = t699*t1188;
  t1214 = 0. + t484;
  t1217 = t642*t1214;
  t1223 = 0. + t1213 + t1217;
  t1316 = -1.*t699*t1031;
  t1331 = t642*t1084;
  t1336 = 0. + t1316 + t1331;
  t1492 = -1.*t192;
  t1502 = 1. + t1492;
  t1483 = -1.*t231;
  t1489 = 1. + t1483;
  t1531 = -1.03354*t1502;
  t1543 = -1.03354*t192;
  t1552 = 0. + t1531 + t1543;
  t1503 = -0.05315*t1502;
  t1511 = -0.05315*t192;
  t1513 = 0. + t1503 + t1511;
  t1434 = -1.*t294;
  t1474 = 1. + t1434;
  t1490 = -0.01315*t1489;
  t1525 = t231*t1513;
  t1526 = -0.62554*t204;
  t1560 = -1.*t1552*t204;
  t1562 = 0. + t1490 + t1525 + t1526 + t1560;
  t1582 = -0.62554*t1489;
  t1583 = t231*t1552;
  t1585 = 0.01315*t204;
  t1590 = t1513*t204;
  t1592 = 0. + t1582 + t1583 + t1585 + t1590;
  t1418 = -1.*t150;
  t1422 = 1. + t1418;
  t1478 = -0.19074*t1474;
  t1482 = 0.03315*t187;
  t1570 = t187*t1562;
  t1596 = t294*t1592;
  t1599 = 0. + t1478 + t1482 + t1570 + t1596;
  t1622 = -0.03315*t1474;
  t1631 = -0.19074*t187;
  t1633 = t294*t1562;
  t1635 = -1.*t187*t1592;
  t1637 = 0. + t1622 + t1631 + t1633 + t1635;
  t1383 = -1.*t139;
  t1392 = 1. + t1383;
  t1669 = -0.08055*t1422;
  t1670 = -0.13004*t342;
  t1680 = -1.*t342*t1599;
  t1683 = t150*t1637;
  t1685 = 0. + t1669 + t1670 + t1680 + t1683;
  t1425 = -0.13004*t1422;
  t1433 = 0.08055*t342;
  t1602 = t150*t1599;
  t1656 = t342*t1637;
  t1659 = 0. + t1425 + t1433 + t1602 + t1656;
  t1348 = -1.*t474;
  t1356 = 1. + t1348;
  t1408 = -0.01004*t1392;
  t1661 = t139*t1659;
  t1665 = 0.08055*t434;
  t1687 = t1685*t434;
  t1690 = 0. + t1408 + t1661 + t1665 + t1687;
  t1695 = -1.*t644;
  t1697 = 1. + t1695;
  t1698 = 0.135*t1697;
  t1704 = 0.1305*t644;
  t1706 = 0.08055*t484;
  t1708 = -0.08055*t1392;
  t1711 = t139*t1685;
  t1712 = -0.01004*t434;
  t1714 = -1.*t1659*t434;
  t1716 = 0. + t1708 + t1711 + t1712 + t1714;
  t1718 = t484*t1716;
  t1719 = 0. + t1698 + t1704 + t1706 + t1718;
  t1337 = t642*t1188;
  t1339 = -1.*t699*t1214;
  t1345 = 0. + t1337 + t1339;
  t1364 = 0.135*t1356;
  t1373 = 0.07996*t101;
  t1692 = -1.*t101*t1690;
  t1724 = t474*t1719;
  t1734 = 0. + t1364 + t1373 + t1692 + t1724;
  t1746 = 0.07996*t1356;
  t1749 = -0.135*t101;
  t1756 = t474*t1690;
  t1759 = t101*t1719;
  t1768 = 0. + t1746 + t1749 + t1756 + t1759;
  t1777 = -0.08055*t1697;
  t1781 = 0.004500000000000004*t484;
  t1786 = t644*t1716;
  t1787 = 0. + t1777 + t1781 + t1786;
  t1793 = t558*t1734;
  t1800 = t84*t1768;
  t1801 = 0. + t1793 + t1800;
  t1745 = t84*t1734;
  t1770 = -1.*t558*t1768;
  t1771 = 0. + t1745 + t1770;
  t1789 = -1.*t699*t1787;
  t1803 = t642*t1801;
  t1806 = 0. + t1789 + t1803;
  t1808 = t642*t1787;
  t1815 = t699*t1801;
  t1817 = 0. + t1808 + t1815;
  t1299 = -1.*t699*t669;
  t1303 = t642*t717;
  t1308 = 0. + t1299 + t1303;
  t1772 = t1162*t1771;
  t1837 = -1.*t1771*t1011;
  t1856 = -1.*t1162*t1771;
  t1873 = t1771*t622;
  t1892 = t1771*t1011;
  t1913 = -1.*t1771*t622;
  t1934 = t1214*t1787;
  t1941 = -1.*t1787*t1031;
  t1972 = -1.*t1214*t1787;
  t1983 = t1787*t669;
  t1995 = t1787*t1031;
  t2012 = -1.*t1787*t669;
  t2245 = t1690*t887;
  t2256 = -1.*t1690*t452;
  p_output1[0]=0. - 1.*t40*t622 + t631*t739;
  p_output1[1]=0. - 1.*t1011*t40 + t1100*t631;
  p_output1[2]=0. - 1.*t1162*t40 + t1223*t631;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t622*t631 + t40*t739;
  p_output1[7]=0. + t1100*t40 + t1011*t631;
  p_output1[8]=0. + t1223*t40 + t1162*t631;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1308;
  p_output1[13]=t1336;
  p_output1[14]=t1345;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1336*(t1772 + t1345*t1806 + t1223*t1817) + t1345*(-1.*t1336*t1806 - 1.*t1100*t1817 + t1837);
  p_output1[19]=t1308*(-1.*t1345*t1806 - 1.*t1223*t1817 + t1856) + t1345*(t1308*t1806 + t1873 + t1817*t739);
  p_output1[20]=t1308*(t1336*t1806 + t1100*t1817 + t1892) + t1336*(-1.*t1308*t1806 + t1913 - 1.*t1817*t739);
  p_output1[21]=t1308;
  p_output1[22]=t1336;
  p_output1[23]=t1345;
  p_output1[24]=t1011*(t1772 + t1188*t1801 + t1934) + t1162*(-1.*t1084*t1801 + t1837 + t1941);
  p_output1[25]=(-1.*t1188*t1801 + t1856 + t1972)*t622 + t1162*(t1873 + t1983 + t1801*t717);
  p_output1[26]=(t1084*t1801 + t1892 + t1995)*t622 + t1011*(t1913 + t2012 - 1.*t1801*t717);
  p_output1[27]=t622;
  p_output1[28]=t1011;
  p_output1[29]=t1162;
  p_output1[30]=t1031*(t1139*t1734 + t1156*t1768 + t1934) + t1214*(t1941 - 1.*t1734*t939 - 1.*t1768*t995);
  p_output1[31]=t1214*(t1983 + t1734*t553 + t1768*t606) + (-1.*t1139*t1734 - 1.*t1156*t1768 + t1972)*t669;
  p_output1[32]=t1031*(t2012 - 1.*t1734*t553 - 1.*t1768*t606) + t669*(t1995 + t1734*t939 + t1768*t995);
  p_output1[33]=t669;
  p_output1[34]=t1031;
  p_output1[35]=t1214;
  p_output1[36]=t1031*(0. + t1136*t1719 + t1934) - 0.135*t452 + 0.07996*t539 + t1214*(t1941 - 1.*t1690*t887 - 1.*t1719*t916);
  p_output1[37]=t1214*(t1983 + t1690*t452 + t1719*t539) + (0. - 1.*t1136*t1719 + t1972)*t669 - 0.135*t887 + 0.07996*t916;
  p_output1[38]=0. + 0.07996*t1136 + t1031*(t2012 + t2256 - 1.*t1719*t539) + t669*(t1995 + t2245 + t1719*t916);
  p_output1[39]=t669;
  p_output1[40]=t1031;
  p_output1[41]=t1214;
  p_output1[42]=0. + 0.135*t526 - 0.1305*t887;
  p_output1[43]=0. + 0.1305*t452 + 0.135*t908;
  p_output1[44]=-0.08055 + (0. + t2256 - 1.*t1716*t526)*t887 + t452*(0. + t2245 + t1716*t908);
  p_output1[45]=t452;
  p_output1[46]=t887;
  p_output1[47]=0.;
  p_output1[48]=0. + 0.08055*t400 - 0.01004*t429 - 1.*t1659*t871 - 1.*t1685*t881;
  p_output1[49]=0. + t1659*t400 + t1685*t429 + 0.08055*t871 - 0.01004*t881;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=0. + 0.08055*t322 - 0.13004*t373 - 1.*t1637*t835 - 1.*t1599*t857;
  p_output1[55]=0. + t1599*t322 + t1637*t373 - 0.13004*t835 + 0.08055*t857;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0.;
  p_output1[59]=1.;
  p_output1[60]=0. - 0.19074*t254 - 1.*t1592*t254 + 0.03315*t314 - 1.*t1562*t826;
  p_output1[61]=0. + 0.03315*t254 + t1562*t254 + t1592*t314 - 0.19074*t826;
  p_output1[62]=0.;
  p_output1[63]=0.;
  p_output1[64]=0.;
  p_output1[65]=1.;
  p_output1[66]=0. - 0.01315*t192 - 1.*t1513*t192 - 0.62554*t238 - 1.*t1552*t238;
  p_output1[67]=0. - 0.62554*t192 - 1.*t1552*t192 + 0.01315*t238 + t1513*t238;
  p_output1[68]=0.;
  p_output1[69]=0.;
  p_output1[70]=0.;
  p_output1[71]=1.;
  p_output1[72]=0.;
  p_output1[73]=0.;
  p_output1[74]=0.;
  p_output1[75]=0.;
  p_output1[76]=0.;
  p_output1[77]=1.;
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
}



void Jb_LeftToeJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
