/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:15 GMT-04:00
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
  double t14;
  double t46;
  double t129;
  double t164;
  double t142;
  double t180;
  double t249;
  double t265;
  double t190;
  double t195;
  double t204;
  double t205;
  double t234;
  double t239;
  double t247;
  double t346;
  double t347;
  double t352;
  double t366;
  double t379;
  double t384;
  double t507;
  double t511;
  double t525;
  double t533;
  double t318;
  double t325;
  double t327;
  double t260;
  double t277;
  double t290;
  double t532;
  double t536;
  double t542;
  double t563;
  double t564;
  double t565;
  double t6;
  double t584;
  double t586;
  double t593;
  double t846;
  double t857;
  double t862;
  double t712;
  double t732;
  double t741;
  double t664;
  double t676;
  double t689;
  double t887;
  double t897;
  double t898;
  double t1021;
  double t1026;
  double t1039;
  double t1054;
  double t782;
  double t783;
  double t784;
  double t555;
  double t568;
  double t1047;
  double t1075;
  double t1076;
  double t1087;
  double t1118;
  double t1120;
  double t608;
  double t626;
  double t637;
  double t801;
  double t829;
  double t762;
  double t764;
  double t1188;
  double t1189;
  double t1195;
  double t909;
  double t918;
  double t929;
  double t1244;
  double t1245;
  double t1265;
  double t957;
  double t958;
  double t1135;
  double t1161;
  double t1169;
  double t1078;
  double t1124;
  double t1425;
  double t1435;
  double t1452;
  double t1505;
  double t1513;
  double t1518;
  double t1523;
  double t1179;
  double t1183;
  double t1308;
  double t1353;
  double t1368;
  double t1521;
  double t1526;
  double t1548;
  double t1551;
  double t1552;
  double t1553;
  double t1205;
  double t1207;
  double t1208;
  double t1216;
  double t1219;
  double t1276;
  double t1278;
  double t1402;
  double t1420;
  double t1379;
  double t1387;
  double t1463;
  double t1470;
  double t1473;
  double t1482;
  double t1485;
  double t1492;
  double t1499;
  double t1502;
  double t1503;
  double t1549;
  double t1555;
  double t1796;
  double t1801;
  double t1808;
  double t1872;
  double t1873;
  double t1875;
  double t1883;
  double t1828;
  double t1852;
  double t1857;
  double t1565;
  double t1572;
  double t1879;
  double t1894;
  double t1900;
  double t1701;
  double t1702;
  double t1704;
  double t1912;
  double t1933;
  double t1934;
  double t1723;
  double t1725;
  double t1727;
  double t1578;
  double t1596;
  double t1619;
  double t1625;
  double t1629;
  double t1645;
  double t1657;
  double t1658;
  double t1683;
  double t1684;
  double t1765;
  double t1776;
  double t1748;
  double t1750;
  double t1901;
  double t1936;
  double t2147;
  double t2152;
  double t2154;
  double t2247;
  double t2254;
  double t2255;
  double t2263;
  double t2161;
  double t2162;
  double t2163;
  double t1954;
  double t1958;
  double t2261;
  double t2270;
  double t2282;
  double t2066;
  double t2067;
  double t2069;
  double t2284;
  double t2285;
  double t2301;
  double t2079;
  double t2084;
  double t2105;
  double t1976;
  double t1993;
  double t2007;
  double t2016;
  double t2020;
  double t2022;
  double t2028;
  double t2040;
  double t2116;
  double t2129;
  double t2175;
  double t2184;
  double t2215;
  double t2219;
  t14 = Cos(var1[3]);
  t46 = Sin(var1[3]);
  t129 = Cos(var1[4]);
  t164 = Sin(var1[4]);
  t142 = -1.*var1[2]*t129*t46;
  t180 = -1.*var1[1]*t164;
  t249 = Cos(var1[5]);
  t265 = Sin(var1[5]);
  t190 = var1[2]*t14*t129;
  t195 = var1[0]*t164;
  t204 = -1.*var1[1]*t14*t129;
  t205 = var1[0]*t129*t46;
  t234 = t14*t129;
  t239 = t129*t46;
  t247 = -1.*t164;
  t346 = t249*t46*t164;
  t347 = -1.*t14*t265;
  t352 = t346 + t347;
  t366 = t14*t249;
  t379 = t46*t164*t265;
  t384 = t366 + t379;
  t507 = Cos(var1[6]);
  t511 = -1.*t507;
  t525 = 1. + t511;
  t533 = Sin(var1[6]);
  t318 = -1.*t249*t46;
  t325 = t14*t164*t265;
  t327 = t318 + t325;
  t260 = t14*t249*t164;
  t277 = t46*t265;
  t290 = t260 + t277;
  t532 = 0.07996*t525;
  t536 = -0.135*t533;
  t542 = 0. + t532 + t536;
  t563 = 0.135*t525;
  t564 = 0.07996*t533;
  t565 = 0. + t563 + t564;
  t6 = -1.*var1[0];
  t584 = t129*t249*t507;
  t586 = -1.*t129*t265*t533;
  t593 = t584 + t586;
  t846 = t507*t290;
  t857 = -1.*t327*t533;
  t862 = t846 + t857;
  t712 = t507*t352;
  t732 = -1.*t384*t533;
  t741 = t712 + t732;
  t664 = -1.*var1[2];
  t676 = -1.*t129*t249*t542;
  t689 = -1.*t129*t265*t565;
  t887 = t129*t507*t265;
  t897 = t129*t249*t533;
  t898 = t887 + t897;
  t1021 = Cos(var1[7]);
  t1026 = -1.*t1021;
  t1039 = 1. + t1026;
  t1054 = Sin(var1[7]);
  t782 = t507*t384;
  t783 = t352*t533;
  t784 = t782 + t783;
  t555 = t352*t542;
  t568 = t384*t565;
  t1047 = 0.135*t1039;
  t1075 = 0.08055*t1054;
  t1076 = 0. + t1047 + t1075;
  t1087 = -0.08055*t1039;
  t1118 = 0.135*t1054;
  t1120 = 0. + t1087 + t1118;
  t608 = t507*t327;
  t626 = t290*t533;
  t637 = t608 + t626;
  t801 = t129*t249*t542;
  t829 = t129*t265*t565;
  t762 = -1.*t290*t542;
  t764 = -1.*t327*t565;
  t1188 = t1021*t898;
  t1189 = t164*t1054;
  t1195 = t1188 + t1189;
  t909 = -1.*var1[1];
  t918 = -1.*t352*t542;
  t929 = -1.*t384*t565;
  t1244 = t1021*t637;
  t1245 = -1.*t14*t129*t1054;
  t1265 = t1244 + t1245;
  t957 = t290*t542;
  t958 = t327*t565;
  t1135 = t1021*t784;
  t1161 = -1.*t129*t46*t1054;
  t1169 = t1135 + t1161;
  t1078 = -1.*t898*t1076;
  t1124 = t164*t1120;
  t1425 = -1.*t1021*t164;
  t1435 = t898*t1054;
  t1452 = t1425 + t1435;
  t1505 = Cos(var1[8]);
  t1513 = -1.*t1505;
  t1518 = 1. + t1513;
  t1523 = Sin(var1[8]);
  t1179 = t784*t1076;
  t1183 = t129*t46*t1120;
  t1308 = t129*t1021*t46;
  t1353 = t784*t1054;
  t1368 = t1308 + t1353;
  t1521 = -0.08055*t1518;
  t1526 = -0.01004*t1523;
  t1548 = 0. + t1521 + t1526;
  t1551 = -0.01004*t1518;
  t1552 = 0.08055*t1523;
  t1553 = 0. + t1551 + t1552;
  t1205 = t14*t129*t1021;
  t1207 = t637*t1054;
  t1208 = t1205 + t1207;
  t1216 = t898*t1076;
  t1219 = -1.*t164*t1120;
  t1276 = -1.*t637*t1076;
  t1278 = -1.*t14*t129*t1120;
  t1402 = t637*t1076;
  t1420 = t14*t129*t1120;
  t1379 = -1.*t784*t1076;
  t1387 = -1.*t129*t46*t1120;
  t1463 = -1.*t1021*t637;
  t1470 = t14*t129*t1054;
  t1473 = 0. + t1463 + t1470;
  t1482 = -1.*t1021*t784;
  t1485 = t129*t46*t1054;
  t1492 = 0. + t1482 + t1485;
  t1499 = -1.*t1021*t898;
  t1502 = -1.*t164*t1054;
  t1503 = 0. + t1499 + t1502;
  t1549 = -1.*t1452*t1548;
  t1555 = -1.*t593*t1553;
  t1796 = t1505*t1452;
  t1801 = t593*t1523;
  t1808 = t1796 + t1801;
  t1872 = Cos(var1[9]);
  t1873 = -1.*t1872;
  t1875 = 1. + t1873;
  t1883 = Sin(var1[9]);
  t1828 = t1505*t593;
  t1852 = -1.*t1452*t1523;
  t1857 = t1828 + t1852;
  t1565 = t1368*t1548;
  t1572 = t741*t1553;
  t1879 = -0.08055*t1875;
  t1894 = -0.13004*t1883;
  t1900 = 0. + t1879 + t1894;
  t1701 = t1505*t1368;
  t1702 = t741*t1523;
  t1704 = t1701 + t1702;
  t1912 = -0.13004*t1875;
  t1933 = 0.08055*t1883;
  t1934 = 0. + t1912 + t1933;
  t1723 = t1505*t741;
  t1725 = -1.*t1368*t1523;
  t1727 = t1723 + t1725;
  t1578 = t1505*t1208;
  t1596 = t862*t1523;
  t1619 = t1578 + t1596;
  t1625 = t1505*t862;
  t1629 = -1.*t1208*t1523;
  t1645 = t1625 + t1629;
  t1657 = t1452*t1548;
  t1658 = t593*t1553;
  t1683 = -1.*t1208*t1548;
  t1684 = -1.*t862*t1553;
  t1765 = -1.*t1368*t1548;
  t1776 = -1.*t741*t1553;
  t1748 = t1208*t1548;
  t1750 = t862*t1553;
  t1901 = -1.*t1900*t1808;
  t1936 = -1.*t1934*t1857;
  t2147 = -1.*t1883*t1808;
  t2152 = t1872*t1857;
  t2154 = t2147 + t2152;
  t2247 = Cos(var1[10]);
  t2254 = -1.*t2247;
  t2255 = 1. + t2254;
  t2263 = Sin(var1[10]);
  t2161 = t1872*t1808;
  t2162 = t1883*t1857;
  t2163 = t2161 + t2162;
  t1954 = t1900*t1704;
  t1958 = t1934*t1727;
  t2261 = -0.19074*t2255;
  t2270 = 0.03315*t2263;
  t2282 = 0. + t2261 + t2270;
  t2066 = -1.*t1883*t1704;
  t2067 = t1872*t1727;
  t2069 = t2066 + t2067;
  t2284 = -0.03315*t2255;
  t2285 = -0.19074*t2263;
  t2301 = 0. + t2284 + t2285;
  t2079 = t1872*t1704;
  t2084 = t1883*t1727;
  t2105 = t2079 + t2084;
  t1976 = -1.*t1883*t1619;
  t1993 = t1872*t1645;
  t2007 = t1976 + t1993;
  t2016 = t1872*t1619;
  t2020 = t1883*t1645;
  t2022 = t2016 + t2020;
  t2028 = t1900*t1808;
  t2040 = t1934*t1857;
  t2116 = -1.*t1900*t1619;
  t2129 = -1.*t1934*t1645;
  t2175 = -1.*t1900*t1704;
  t2184 = -1.*t1934*t1727;
  t2215 = t1900*t1619;
  t2219 = t1934*t1645;
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
  p_output1[19]=t6;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t14*var1[2];
  p_output1[25]=-1.*t46*var1[2];
  p_output1[26]=t14*var1[0] + t46*var1[1];
  p_output1[27]=-1.*t46;
  p_output1[28]=t14;
  p_output1[29]=0;
  p_output1[30]=t142 + t180;
  p_output1[31]=t190 + t195;
  p_output1[32]=t204 + t205;
  p_output1[33]=t234;
  p_output1[34]=t239;
  p_output1[35]=t247;
  p_output1[36]=t142 + t180 - 0.135*t290 + 0.07996*t327;
  p_output1[37]=t190 + t195 - 0.135*t352 + 0.07996*t384;
  p_output1[38]=t204 + t205 - 0.135*t129*t249 + 0.07996*t129*t265;
  p_output1[39]=0. + t234;
  p_output1[40]=0. + t239;
  p_output1[41]=0. + t247;
  p_output1[42]=0.135*t129*t14 + 0.08055*t637 + (0. + t664 + t676 + t689)*t741 + t593*(0. + t555 + t568 + var1[1]);
  p_output1[43]=0.135*t129*t46 + t593*(0. + t6 + t762 + t764) + 0.08055*t784 + t862*(0. + t801 + t829 + var1[2]);
  p_output1[44]=-0.135*t164 + 0.08055*t898 + t862*(0. + t909 + t918 + t929) + t741*(0. + t957 + t958 + var1[0]);
  p_output1[45]=0. + t846 + t857;
  p_output1[46]=0. + t712 + t732;
  p_output1[47]=0. + t584 + t586;
  p_output1[48]=-0.01004*t1208 - 1.*t1169*(0. + t1078 + t1124 + t664 + t676 + t689) + 0.08055*t862 - 1.*t1195*(0. + t1179 + t1183 + t555 + t568 + var1[1]);
  p_output1[49]=-0.01004*t1368 + 0.08055*t741 - 1.*t1195*(0. + t1276 + t1278 + t6 + t762 + t764) - 1.*t1265*(0. + t1216 + t1219 + t801 + t829 + var1[2]);
  p_output1[50]=-0.01004*t1452 + 0.08055*t593 - 1.*t1265*(0. + t1379 + t1387 + t909 + t918 + t929) - 1.*t1169*(0. + t1402 + t1420 + t957 + t958 + var1[0]);
  p_output1[51]=t1473;
  p_output1[52]=t1492;
  p_output1[53]=t1503;
  p_output1[54]=-0.13004*t1619 + 0.08055*t1645 - 1.*t1169*(0. + t1078 + t1124 + t1549 + t1555 + t664 + t676 + t689) - 1.*t1195*(0. + t1179 + t1183 + t1565 + t1572 + t555 + t568 + var1[1]);
  p_output1[55]=-0.13004*t1704 + 0.08055*t1727 - 1.*t1195*(0. + t1276 + t1278 + t1683 + t1684 + t6 + t762 + t764) - 1.*t1265*(0. + t1216 + t1219 + t1657 + t1658 + t801 + t829 + var1[2]);
  p_output1[56]=-0.13004*t1808 + 0.08055*t1857 - 1.*t1265*(0. + t1379 + t1387 + t1765 + t1776 + t909 + t918 + t929) - 1.*t1169*(0. + t1402 + t1420 + t1748 + t1750 + t957 + t958 + var1[0]);
  p_output1[57]=t1473;
  p_output1[58]=t1492;
  p_output1[59]=t1503;
  p_output1[60]=0.03315*t2007 - 0.19074*t2022 - 1.*t1169*(0. + t1078 + t1124 + t1549 + t1555 + t1901 + t1936 + t664 + t676 + t689) - 1.*t1195*(0. + t1179 + t1183 + t1565 + t1572 + t1954 + t1958 + t555 + t568 + var1[1]);
  p_output1[61]=0.03315*t2069 - 0.19074*t2105 - 1.*t1195*(0. + t1276 + t1278 + t1683 + t1684 + t2116 + t2129 + t6 + t762 + t764) - 1.*t1265*(0. + t1216 + t1219 + t1657 + t1658 + t2028 + t2040 + t801 + t829 + var1[2]);
  p_output1[62]=0.03315*t2154 - 0.19074*t2163 - 1.*t1265*(0. + t1379 + t1387 + t1765 + t1776 + t2175 + t2184 + t909 + t918 + t929) - 1.*t1169*(0. + t1402 + t1420 + t1748 + t1750 + t2215 + t2219 + t957 + t958 + var1[0]);
  p_output1[63]=t1473;
  p_output1[64]=t1492;
  p_output1[65]=t1503;
  p_output1[66]=-0.62554*(t2022*t2247 + t2007*t2263) + 0.01315*(t2007*t2247 - 1.*t2022*t2263) - 1.*t1169*(0. + t1078 + t1124 + t1549 + t1555 + t1901 + t1936 - 1.*t2154*t2282 - 1.*t2163*t2301 + t664 + t676 + t689) - 1.*t1195*(0. + t1179 + t1183 + t1565 + t1572 + t1954 + t1958 + t2069*t2282 + t2105*t2301 + t555 + t568 + var1[1]);
  p_output1[67]=-0.62554*(t2105*t2247 + t2069*t2263) + 0.01315*(t2069*t2247 - 1.*t2105*t2263) - 1.*t1195*(0. + t1276 + t1278 + t1683 + t1684 + t2116 + t2129 - 1.*t2007*t2282 - 1.*t2022*t2301 + t6 + t762 + t764) - 1.*t1265*(0. + t1216 + t1219 + t1657 + t1658 + t2028 + t2040 + t2154*t2282 + t2163*t2301 + t801 + t829 + var1[2]);
  p_output1[68]=-0.62554*(t2163*t2247 + t2154*t2263) + 0.01315*(t2154*t2247 - 1.*t2163*t2263) - 1.*t1265*(0. + t1379 + t1387 + t1765 + t1776 + t2175 + t2184 - 1.*t2069*t2282 - 1.*t2105*t2301 + t909 + t918 + t929) - 1.*t1169*(0. + t1402 + t1420 + t1748 + t1750 + t2215 + t2219 + t2007*t2282 + t2022*t2301 + t957 + t958 + var1[0]);
  p_output1[69]=t1473;
  p_output1[70]=t1492;
  p_output1[71]=t1503;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
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

#include "Js_LeftTarsus_mex.hh"

namespace SymExpression
{

void Js_LeftTarsus_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
