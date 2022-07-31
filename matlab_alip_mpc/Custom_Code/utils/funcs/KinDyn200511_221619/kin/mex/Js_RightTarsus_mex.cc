/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:09 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t27;
  double t80;
  double t120;
  double t126;
  double t122;
  double t139;
  double t266;
  double t279;
  double t170;
  double t182;
  double t204;
  double t210;
  double t227;
  double t247;
  double t252;
  double t270;
  double t280;
  double t306;
  double t311;
  double t317;
  double t325;
  double t522;
  double t507;
  double t354;
  double t356;
  double t365;
  double t581;
  double t592;
  double t384;
  double t411;
  double t413;
  double t595;
  double t596;
  double t597;
  double t610;
  double t613;
  double t615;
  double t547;
  double t555;
  double t572;
  double t24;
  double t754;
  double t757;
  double t759;
  double t694;
  double t696;
  double t700;
  double t509;
  double t524;
  double t538;
  double t644;
  double t648;
  double t949;
  double t958;
  double t649;
  double t987;
  double t989;
  double t824;
  double t829;
  double t848;
  double t765;
  double t774;
  double t795;
  double t992;
  double t1002;
  double t1024;
  double t606;
  double t639;
  double t1030;
  double t1039;
  double t1043;
  double t739;
  double t751;
  double t1072;
  double t1077;
  double t1086;
  double t720;
  double t729;
  double t887;
  double t891;
  double t1059;
  double t1063;
  double t1066;
  double t1151;
  double t1153;
  double t1169;
  double t868;
  double t869;
  double t870;
  double t1028;
  double t1044;
  double t1370;
  double t1375;
  double t1379;
  double t1392;
  double t1247;
  double t1251;
  double t1254;
  double t950;
  double t971;
  double t976;
  double t1089;
  double t1093;
  double t1390;
  double t1395;
  double t1397;
  double t1400;
  double t1407;
  double t1408;
  double t1209;
  double t1219;
  double t1223;
  double t1134;
  double t1139;
  double t1182;
  double t1190;
  double t1272;
  double t1274;
  double t1311;
  double t1312;
  double t1332;
  double t1335;
  double t1336;
  double t1337;
  double t1339;
  double t1342;
  double t1344;
  double t1365;
  double t1369;
  double t1399;
  double t1412;
  double t1604;
  double t1611;
  double t1619;
  double t1720;
  double t1727;
  double t1738;
  double t1755;
  double t1642;
  double t1646;
  double t1654;
  double t1430;
  double t1431;
  double t1433;
  double t1454;
  double t1455;
  double t1456;
  double t1476;
  double t1485;
  double t1752;
  double t1762;
  double t1771;
  double t1549;
  double t1550;
  double t1559;
  double t1788;
  double t1796;
  double t1800;
  double t1582;
  double t1585;
  double t1589;
  double t1501;
  double t1503;
  double t1534;
  double t1540;
  double t1668;
  double t1676;
  double t1691;
  double t1697;
  double t1773;
  double t1804;
  double t2024;
  double t2025;
  double t2029;
  double t2114;
  double t2122;
  double t2124;
  double t2135;
  double t2034;
  double t2035;
  double t2044;
  double t1830;
  double t1833;
  double t1842;
  double t1853;
  double t1871;
  double t1878;
  double t1883;
  double t1885;
  double t2134;
  double t2143;
  double t2146;
  double t1959;
  double t1968;
  double t1970;
  double t2159;
  double t2163;
  double t2171;
  double t1990;
  double t1991;
  double t1999;
  double t1905;
  double t1907;
  double t1916;
  double t1922;
  double t2047;
  double t2054;
  double t2071;
  double t2073;
  t27 = Cos(var1[3]);
  t80 = Sin(var1[3]);
  t120 = Cos(var1[4]);
  t126 = Sin(var1[4]);
  t122 = -1.*var1[2]*t120*t80;
  t139 = -1.*var1[1]*t126;
  t266 = Cos(var1[5]);
  t279 = Sin(var1[5]);
  t170 = var1[2]*t27*t120;
  t182 = var1[0]*t126;
  t204 = -1.*var1[1]*t27*t120;
  t210 = var1[0]*t120*t80;
  t227 = t27*t120;
  t247 = t120*t80;
  t252 = -1.*t126;
  t270 = t27*t266*t126;
  t280 = t80*t279;
  t306 = t270 + t280;
  t311 = -1.*t266*t80;
  t317 = t27*t126*t279;
  t325 = t311 + t317;
  t522 = Cos(var1[13]);
  t507 = Sin(var1[13]);
  t354 = t266*t80*t126;
  t356 = -1.*t27*t279;
  t365 = t354 + t356;
  t581 = -1.*t522;
  t592 = 1. + t581;
  t384 = t27*t266;
  t411 = t80*t126*t279;
  t413 = t384 + t411;
  t595 = 0.07996*t592;
  t596 = 0.135*t507;
  t597 = 0. + t595 + t596;
  t610 = -0.135*t592;
  t613 = 0.07996*t507;
  t615 = 0. + t610 + t613;
  t547 = t522*t120*t266;
  t555 = -1.*t120*t507*t279;
  t572 = t547 + t555;
  t24 = -1.*var1[0];
  t754 = t522*t306;
  t757 = -1.*t507*t325;
  t759 = t754 + t757;
  t694 = t522*t365;
  t696 = -1.*t507*t413;
  t700 = t694 + t696;
  t509 = t507*t306;
  t524 = t522*t325;
  t538 = t509 + t524;
  t644 = -1.*var1[2];
  t648 = -1.*t120*t266*t597;
  t949 = Cos(var1[14]);
  t958 = Sin(var1[14]);
  t649 = -1.*t120*t615*t279;
  t987 = -1.*t949;
  t989 = 1. + t987;
  t824 = t120*t266*t507;
  t829 = t522*t120*t279;
  t848 = t824 + t829;
  t765 = t507*t365;
  t774 = t522*t413;
  t795 = t765 + t774;
  t992 = -0.08055*t989;
  t1002 = -0.135*t958;
  t1024 = 0. + t992 + t1002;
  t606 = t597*t365;
  t639 = t615*t413;
  t1030 = -0.135*t989;
  t1039 = 0.08055*t958;
  t1043 = 0. + t1030 + t1039;
  t739 = t120*t266*t597;
  t751 = t120*t615*t279;
  t1072 = t958*t126;
  t1077 = t949*t848;
  t1086 = t1072 + t1077;
  t720 = -1.*t597*t306;
  t729 = -1.*t615*t325;
  t887 = t597*t306;
  t891 = t615*t325;
  t1059 = -1.*t120*t958*t80;
  t1063 = t949*t795;
  t1066 = t1059 + t1063;
  t1151 = -1.*t27*t120*t958;
  t1153 = t949*t538;
  t1169 = t1151 + t1153;
  t868 = -1.*var1[1];
  t869 = -1.*t597*t365;
  t870 = -1.*t615*t413;
  t1028 = t1024*t126;
  t1044 = -1.*t1043*t848;
  t1370 = Cos(var1[15]);
  t1375 = -1.*t1370;
  t1379 = 1. + t1375;
  t1392 = Sin(var1[15]);
  t1247 = -1.*t949*t126;
  t1251 = t958*t848;
  t1254 = t1247 + t1251;
  t950 = t949*t27*t120;
  t971 = t958*t538;
  t976 = t950 + t971;
  t1089 = t120*t1024*t80;
  t1093 = t1043*t795;
  t1390 = -0.01004*t1379;
  t1395 = 0.08055*t1392;
  t1397 = 0. + t1390 + t1395;
  t1400 = -0.08055*t1379;
  t1407 = -0.01004*t1392;
  t1408 = 0. + t1400 + t1407;
  t1209 = t949*t120*t80;
  t1219 = t958*t795;
  t1223 = t1209 + t1219;
  t1134 = -1.*t1024*t126;
  t1139 = t1043*t848;
  t1182 = -1.*t27*t120*t1024;
  t1190 = -1.*t1043*t538;
  t1272 = t27*t120*t1024;
  t1274 = t1043*t538;
  t1311 = -1.*t120*t1024*t80;
  t1312 = -1.*t1043*t795;
  t1332 = t27*t120*t958;
  t1335 = -1.*t949*t538;
  t1336 = 0. + t1332 + t1335;
  t1337 = t120*t958*t80;
  t1339 = -1.*t949*t795;
  t1342 = 0. + t1337 + t1339;
  t1344 = -1.*t958*t126;
  t1365 = -1.*t949*t848;
  t1369 = 0. + t1344 + t1365;
  t1399 = -1.*t1397*t572;
  t1412 = -1.*t1408*t1254;
  t1604 = t1392*t572;
  t1611 = t1370*t1254;
  t1619 = t1604 + t1611;
  t1720 = Cos(var1[16]);
  t1727 = -1.*t1720;
  t1738 = 1. + t1727;
  t1755 = Sin(var1[16]);
  t1642 = t1370*t572;
  t1646 = -1.*t1392*t1254;
  t1654 = t1642 + t1646;
  t1430 = t1392*t759;
  t1431 = t1370*t976;
  t1433 = t1430 + t1431;
  t1454 = t1370*t759;
  t1455 = -1.*t1392*t976;
  t1456 = t1454 + t1455;
  t1476 = t1397*t700;
  t1485 = t1408*t1223;
  t1752 = -0.08055*t1738;
  t1762 = -0.13004*t1755;
  t1771 = 0. + t1752 + t1762;
  t1549 = t1392*t700;
  t1550 = t1370*t1223;
  t1559 = t1549 + t1550;
  t1788 = -0.13004*t1738;
  t1796 = 0.08055*t1755;
  t1800 = 0. + t1788 + t1796;
  t1582 = t1370*t700;
  t1585 = -1.*t1392*t1223;
  t1589 = t1582 + t1585;
  t1501 = t1397*t572;
  t1503 = t1408*t1254;
  t1534 = -1.*t1397*t759;
  t1540 = -1.*t1408*t976;
  t1668 = t1397*t759;
  t1676 = t1408*t976;
  t1691 = -1.*t1397*t700;
  t1697 = -1.*t1408*t1223;
  t1773 = -1.*t1771*t1619;
  t1804 = -1.*t1800*t1654;
  t2024 = -1.*t1755*t1619;
  t2025 = t1720*t1654;
  t2029 = t2024 + t2025;
  t2114 = Cos(var1[17]);
  t2122 = -1.*t2114;
  t2124 = 1. + t2122;
  t2135 = Sin(var1[17]);
  t2034 = t1720*t1619;
  t2035 = t1755*t1654;
  t2044 = t2034 + t2035;
  t1830 = -1.*t1755*t1433;
  t1833 = t1720*t1456;
  t1842 = t1830 + t1833;
  t1853 = t1720*t1433;
  t1871 = t1755*t1456;
  t1878 = t1853 + t1871;
  t1883 = t1771*t1559;
  t1885 = t1800*t1589;
  t2134 = -0.19074*t2124;
  t2143 = 0.03315*t2135;
  t2146 = 0. + t2134 + t2143;
  t1959 = -1.*t1755*t1559;
  t1968 = t1720*t1589;
  t1970 = t1959 + t1968;
  t2159 = -0.03315*t2124;
  t2163 = -0.19074*t2135;
  t2171 = 0. + t2159 + t2163;
  t1990 = t1720*t1559;
  t1991 = t1755*t1589;
  t1999 = t1990 + t1991;
  t1905 = t1771*t1619;
  t1907 = t1800*t1654;
  t1916 = -1.*t1771*t1433;
  t1922 = -1.*t1800*t1456;
  t2047 = t1771*t1433;
  t2054 = t1800*t1456;
  t2071 = -1.*t1771*t1559;
  t2073 = -1.*t1800*t1589;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=t24;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t27*var1[2];
  p_output1[25]=-1.*t80*var1[2];
  p_output1[26]=t27*var1[0] + t80*var1[1];
  p_output1[27]=-1.*t80;
  p_output1[28]=t27;
  p_output1[29]=0;
  p_output1[30]=t122 + t139;
  p_output1[31]=t170 + t182;
  p_output1[32]=t204 + t210;
  p_output1[33]=t227;
  p_output1[34]=t247;
  p_output1[35]=t252;
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
  p_output1[78]=t122 + t139 + 0.135*t306 + 0.07996*t325;
  p_output1[79]=t170 + t182 + 0.135*t365 + 0.07996*t413;
  p_output1[80]=t204 + t210 + 0.135*t120*t266 + 0.07996*t120*t279;
  p_output1[81]=0. + t227;
  p_output1[82]=0. + t247;
  p_output1[83]=0. + t252;
  p_output1[84]=-0.135*t120*t27 + 0.08055*t538 + (0. + t644 + t648 + t649)*t700 + t572*(0. + t606 + t639 + var1[1]);
  p_output1[85]=t572*(0. + t24 + t720 + t729) + 0.08055*t795 - 0.135*t120*t80 + t759*(0. + t739 + t751 + var1[2]);
  p_output1[86]=0.135*t126 + 0.08055*t848 + t759*(0. + t868 + t869 + t870) + t700*(0. + t887 + t891 + var1[0]);
  p_output1[87]=0. + t754 + t757;
  p_output1[88]=0. + t694 + t696;
  p_output1[89]=0. + t547 + t555;
  p_output1[90]=-1.*t1066*(0. + t1028 + t1044 + t644 + t648 + t649) + 0.08055*t759 - 0.01004*t976 - 1.*t1086*(0. + t1089 + t1093 + t606 + t639 + var1[1]);
  p_output1[91]=-0.01004*t1223 + 0.08055*t700 - 1.*t1086*(0. + t1182 + t1190 + t24 + t720 + t729) - 1.*t1169*(0. + t1134 + t1139 + t739 + t751 + var1[2]);
  p_output1[92]=-0.01004*t1254 + 0.08055*t572 - 1.*t1169*(0. + t1311 + t1312 + t868 + t869 + t870) - 1.*t1066*(0. + t1272 + t1274 + t887 + t891 + var1[0]);
  p_output1[93]=t1336;
  p_output1[94]=t1342;
  p_output1[95]=t1369;
  p_output1[96]=-0.13004*t1433 + 0.08055*t1456 - 1.*t1066*(0. + t1028 + t1044 + t1399 + t1412 + t644 + t648 + t649) - 1.*t1086*(0. + t1089 + t1093 + t1476 + t1485 + t606 + t639 + var1[1]);
  p_output1[97]=-0.13004*t1559 + 0.08055*t1589 - 1.*t1086*(0. + t1182 + t1190 + t1534 + t1540 + t24 + t720 + t729) - 1.*t1169*(0. + t1134 + t1139 + t1501 + t1503 + t739 + t751 + var1[2]);
  p_output1[98]=-0.13004*t1619 + 0.08055*t1654 - 1.*t1169*(0. + t1311 + t1312 + t1691 + t1697 + t868 + t869 + t870) - 1.*t1066*(0. + t1272 + t1274 + t1668 + t1676 + t887 + t891 + var1[0]);
  p_output1[99]=t1336;
  p_output1[100]=t1342;
  p_output1[101]=t1369;
  p_output1[102]=0.03315*t1842 - 0.19074*t1878 - 1.*t1066*(0. + t1028 + t1044 + t1399 + t1412 + t1773 + t1804 + t644 + t648 + t649) - 1.*t1086*(0. + t1089 + t1093 + t1476 + t1485 + t1883 + t1885 + t606 + t639 + var1[1]);
  p_output1[103]=0.03315*t1970 - 0.19074*t1999 - 1.*t1086*(0. + t1182 + t1190 + t1534 + t1540 + t1916 + t1922 + t24 + t720 + t729) - 1.*t1169*(0. + t1134 + t1139 + t1501 + t1503 + t1905 + t1907 + t739 + t751 + var1[2]);
  p_output1[104]=0.03315*t2029 - 0.19074*t2044 - 1.*t1169*(0. + t1311 + t1312 + t1691 + t1697 + t2071 + t2073 + t868 + t869 + t870) - 1.*t1066*(0. + t1272 + t1274 + t1668 + t1676 + t2047 + t2054 + t887 + t891 + var1[0]);
  p_output1[105]=t1336;
  p_output1[106]=t1342;
  p_output1[107]=t1369;
  p_output1[108]=-0.62554*(t1878*t2114 + t1842*t2135) + 0.01315*(t1842*t2114 - 1.*t1878*t2135) - 1.*t1066*(0. + t1028 + t1044 + t1399 + t1412 + t1773 + t1804 - 1.*t2029*t2146 - 1.*t2044*t2171 + t644 + t648 + t649) - 1.*t1086*(0. + t1089 + t1093 + t1476 + t1485 + t1883 + t1885 + t1970*t2146 + t1999*t2171 + t606 + t639 + var1[1]);
  p_output1[109]=-0.62554*(t1999*t2114 + t1970*t2135) + 0.01315*(t1970*t2114 - 1.*t1999*t2135) - 1.*t1086*(0. + t1182 + t1190 + t1534 + t1540 + t1916 + t1922 - 1.*t1842*t2146 - 1.*t1878*t2171 + t24 + t720 + t729) - 1.*t1169*(0. + t1134 + t1139 + t1501 + t1503 + t1905 + t1907 + t2029*t2146 + t2044*t2171 + t739 + t751 + var1[2]);
  p_output1[110]=-0.62554*(t2044*t2114 + t2029*t2135) + 0.01315*(t2029*t2114 - 1.*t2044*t2135) - 1.*t1169*(0. + t1311 + t1312 + t1691 + t1697 + t2071 + t2073 - 1.*t1970*t2146 - 1.*t1999*t2171 + t868 + t869 + t870) - 1.*t1066*(0. + t1272 + t1274 + t1668 + t1676 + t2047 + t2054 + t1842*t2146 + t1878*t2171 + t887 + t891 + var1[0]);
  p_output1[111]=t1336;
  p_output1[112]=t1342;
  p_output1[113]=t1369;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_RightTarsus_mex.hh"

namespace SymExpression
{

void Js_RightTarsus_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
