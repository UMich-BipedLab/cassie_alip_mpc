/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:53 GMT-04:00
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
  double t59;
  double t80;
  double t116;
  double t126;
  double t117;
  double t131;
  double t223;
  double t244;
  double t144;
  double t157;
  double t168;
  double t177;
  double t197;
  double t210;
  double t213;
  double t224;
  double t253;
  double t268;
  double t285;
  double t292;
  double t314;
  double t503;
  double t475;
  double t382;
  double t386;
  double t388;
  double t595;
  double t597;
  double t403;
  double t406;
  double t414;
  double t604;
  double t611;
  double t618;
  double t627;
  double t634;
  double t640;
  double t572;
  double t575;
  double t587;
  double t8;
  double t783;
  double t792;
  double t800;
  double t679;
  double t692;
  double t707;
  double t493;
  double t520;
  double t539;
  double t665;
  double t670;
  double t922;
  double t948;
  double t671;
  double t976;
  double t978;
  double t821;
  double t824;
  double t825;
  double t807;
  double t808;
  double t810;
  double t993;
  double t997;
  double t999;
  double t622;
  double t649;
  double t1023;
  double t1039;
  double t1043;
  double t749;
  double t766;
  double t1083;
  double t1084;
  double t1087;
  double t727;
  double t733;
  double t865;
  double t873;
  double t1056;
  double t1058;
  double t1062;
  double t1144;
  double t1145;
  double t1149;
  double t835;
  double t838;
  double t850;
  double t1014;
  double t1044;
  double t1325;
  double t1338;
  double t1349;
  double t1356;
  double t1217;
  double t1219;
  double t1224;
  double t923;
  double t959;
  double t960;
  double t1096;
  double t1103;
  double t1352;
  double t1359;
  double t1360;
  double t1374;
  double t1375;
  double t1376;
  double t1188;
  double t1189;
  double t1198;
  double t1128;
  double t1139;
  double t1164;
  double t1165;
  double t1232;
  double t1236;
  double t1246;
  double t1261;
  double t1282;
  double t1284;
  double t1287;
  double t1300;
  double t1301;
  double t1312;
  double t1319;
  double t1320;
  double t1324;
  double t1372;
  double t1380;
  double t1541;
  double t1544;
  double t1552;
  double t1638;
  double t1640;
  double t1645;
  double t1652;
  double t1557;
  double t1566;
  double t1569;
  double t1404;
  double t1424;
  double t1425;
  double t1429;
  double t1443;
  double t1444;
  double t1451;
  double t1457;
  double t1648;
  double t1660;
  double t1661;
  double t1503;
  double t1509;
  double t1512;
  double t1666;
  double t1671;
  double t1685;
  double t1514;
  double t1516;
  double t1526;
  double t1475;
  double t1478;
  double t1489;
  double t1494;
  double t1576;
  double t1580;
  double t1605;
  double t1606;
  double t1663;
  double t1692;
  double t1865;
  double t1872;
  double t1875;
  double t1985;
  double t1986;
  double t1988;
  double t2004;
  double t1881;
  double t1891;
  double t1895;
  double t1706;
  double t1713;
  double t1715;
  double t1744;
  double t1762;
  double t1765;
  double t1772;
  double t1773;
  double t1990;
  double t2013;
  double t2021;
  double t1821;
  double t1822;
  double t1824;
  double t2033;
  double t2036;
  double t2051;
  double t1837;
  double t1851;
  double t1854;
  double t1788;
  double t1789;
  double t1810;
  double t1814;
  double t1905;
  double t1923;
  double t1945;
  double t1958;
  double t2025;
  double t2052;
  double t2224;
  double t2228;
  double t2230;
  double t2331;
  double t2340;
  double t2341;
  double t2353;
  double t2234;
  double t2239;
  double t2248;
  double t2061;
  double t2067;
  double t2069;
  double t2081;
  double t2090;
  double t2095;
  double t2101;
  double t2120;
  double t2352;
  double t2354;
  double t2372;
  double t2172;
  double t2185;
  double t2188;
  double t2375;
  double t2376;
  double t2379;
  double t2193;
  double t2197;
  double t2198;
  double t2134;
  double t2138;
  double t2158;
  double t2163;
  double t2263;
  double t2264;
  double t2316;
  double t2318;
  t59 = Cos(var1[3]);
  t80 = Sin(var1[3]);
  t116 = Cos(var1[4]);
  t126 = Sin(var1[4]);
  t117 = -1.*var1[2]*t116*t80;
  t131 = -1.*var1[1]*t126;
  t223 = Cos(var1[5]);
  t244 = Sin(var1[5]);
  t144 = var1[2]*t59*t116;
  t157 = var1[0]*t126;
  t168 = -1.*var1[1]*t59*t116;
  t177 = var1[0]*t116*t80;
  t197 = t59*t116;
  t210 = t116*t80;
  t213 = -1.*t126;
  t224 = t59*t223*t126;
  t253 = t80*t244;
  t268 = t224 + t253;
  t285 = -1.*t223*t80;
  t292 = t59*t126*t244;
  t314 = t285 + t292;
  t503 = Cos(var1[13]);
  t475 = Sin(var1[13]);
  t382 = t223*t80*t126;
  t386 = -1.*t59*t244;
  t388 = t382 + t386;
  t595 = -1.*t503;
  t597 = 1. + t595;
  t403 = t59*t223;
  t406 = t80*t126*t244;
  t414 = t403 + t406;
  t604 = 0.07996*t597;
  t611 = 0.135*t475;
  t618 = 0. + t604 + t611;
  t627 = -0.135*t597;
  t634 = 0.07996*t475;
  t640 = 0. + t627 + t634;
  t572 = t503*t116*t223;
  t575 = -1.*t116*t475*t244;
  t587 = t572 + t575;
  t8 = -1.*var1[0];
  t783 = t503*t268;
  t792 = -1.*t475*t314;
  t800 = t783 + t792;
  t679 = t503*t388;
  t692 = -1.*t475*t414;
  t707 = t679 + t692;
  t493 = t475*t268;
  t520 = t503*t314;
  t539 = t493 + t520;
  t665 = -1.*var1[2];
  t670 = -1.*t116*t223*t618;
  t922 = Cos(var1[14]);
  t948 = Sin(var1[14]);
  t671 = -1.*t116*t640*t244;
  t976 = -1.*t922;
  t978 = 1. + t976;
  t821 = t116*t223*t475;
  t824 = t503*t116*t244;
  t825 = t821 + t824;
  t807 = t475*t388;
  t808 = t503*t414;
  t810 = t807 + t808;
  t993 = -0.08055*t978;
  t997 = -0.135*t948;
  t999 = 0. + t993 + t997;
  t622 = t618*t388;
  t649 = t640*t414;
  t1023 = -0.135*t978;
  t1039 = 0.08055*t948;
  t1043 = 0. + t1023 + t1039;
  t749 = t116*t223*t618;
  t766 = t116*t640*t244;
  t1083 = t948*t126;
  t1084 = t922*t825;
  t1087 = t1083 + t1084;
  t727 = -1.*t618*t268;
  t733 = -1.*t640*t314;
  t865 = t618*t268;
  t873 = t640*t314;
  t1056 = -1.*t116*t948*t80;
  t1058 = t922*t810;
  t1062 = t1056 + t1058;
  t1144 = -1.*t59*t116*t948;
  t1145 = t922*t539;
  t1149 = t1144 + t1145;
  t835 = -1.*var1[1];
  t838 = -1.*t618*t388;
  t850 = -1.*t640*t414;
  t1014 = t999*t126;
  t1044 = -1.*t1043*t825;
  t1325 = Cos(var1[15]);
  t1338 = -1.*t1325;
  t1349 = 1. + t1338;
  t1356 = Sin(var1[15]);
  t1217 = -1.*t922*t126;
  t1219 = t948*t825;
  t1224 = t1217 + t1219;
  t923 = t922*t59*t116;
  t959 = t948*t539;
  t960 = t923 + t959;
  t1096 = t116*t999*t80;
  t1103 = t1043*t810;
  t1352 = -0.01004*t1349;
  t1359 = 0.08055*t1356;
  t1360 = 0. + t1352 + t1359;
  t1374 = -0.08055*t1349;
  t1375 = -0.01004*t1356;
  t1376 = 0. + t1374 + t1375;
  t1188 = t922*t116*t80;
  t1189 = t948*t810;
  t1198 = t1188 + t1189;
  t1128 = -1.*t999*t126;
  t1139 = t1043*t825;
  t1164 = -1.*t59*t116*t999;
  t1165 = -1.*t1043*t539;
  t1232 = t59*t116*t999;
  t1236 = t1043*t539;
  t1246 = -1.*t116*t999*t80;
  t1261 = -1.*t1043*t810;
  t1282 = t59*t116*t948;
  t1284 = -1.*t922*t539;
  t1287 = 0. + t1282 + t1284;
  t1300 = t116*t948*t80;
  t1301 = -1.*t922*t810;
  t1312 = 0. + t1300 + t1301;
  t1319 = -1.*t948*t126;
  t1320 = -1.*t922*t825;
  t1324 = 0. + t1319 + t1320;
  t1372 = -1.*t1360*t587;
  t1380 = -1.*t1376*t1224;
  t1541 = t1356*t587;
  t1544 = t1325*t1224;
  t1552 = t1541 + t1544;
  t1638 = Cos(var1[16]);
  t1640 = -1.*t1638;
  t1645 = 1. + t1640;
  t1652 = Sin(var1[16]);
  t1557 = t1325*t587;
  t1566 = -1.*t1356*t1224;
  t1569 = t1557 + t1566;
  t1404 = t1356*t800;
  t1424 = t1325*t960;
  t1425 = t1404 + t1424;
  t1429 = t1325*t800;
  t1443 = -1.*t1356*t960;
  t1444 = t1429 + t1443;
  t1451 = t1360*t707;
  t1457 = t1376*t1198;
  t1648 = -0.08055*t1645;
  t1660 = -0.13004*t1652;
  t1661 = 0. + t1648 + t1660;
  t1503 = t1356*t707;
  t1509 = t1325*t1198;
  t1512 = t1503 + t1509;
  t1666 = -0.13004*t1645;
  t1671 = 0.08055*t1652;
  t1685 = 0. + t1666 + t1671;
  t1514 = t1325*t707;
  t1516 = -1.*t1356*t1198;
  t1526 = t1514 + t1516;
  t1475 = t1360*t587;
  t1478 = t1376*t1224;
  t1489 = -1.*t1360*t800;
  t1494 = -1.*t1376*t960;
  t1576 = t1360*t800;
  t1580 = t1376*t960;
  t1605 = -1.*t1360*t707;
  t1606 = -1.*t1376*t1198;
  t1663 = -1.*t1661*t1552;
  t1692 = -1.*t1685*t1569;
  t1865 = -1.*t1652*t1552;
  t1872 = t1638*t1569;
  t1875 = t1865 + t1872;
  t1985 = Cos(var1[17]);
  t1986 = -1.*t1985;
  t1988 = 1. + t1986;
  t2004 = Sin(var1[17]);
  t1881 = t1638*t1552;
  t1891 = t1652*t1569;
  t1895 = t1881 + t1891;
  t1706 = -1.*t1652*t1425;
  t1713 = t1638*t1444;
  t1715 = t1706 + t1713;
  t1744 = t1638*t1425;
  t1762 = t1652*t1444;
  t1765 = t1744 + t1762;
  t1772 = t1661*t1512;
  t1773 = t1685*t1526;
  t1990 = -0.19074*t1988;
  t2013 = 0.03315*t2004;
  t2021 = 0. + t1990 + t2013;
  t1821 = -1.*t1652*t1512;
  t1822 = t1638*t1526;
  t1824 = t1821 + t1822;
  t2033 = -0.03315*t1988;
  t2036 = -0.19074*t2004;
  t2051 = 0. + t2033 + t2036;
  t1837 = t1638*t1512;
  t1851 = t1652*t1526;
  t1854 = t1837 + t1851;
  t1788 = t1661*t1552;
  t1789 = t1685*t1569;
  t1810 = -1.*t1661*t1425;
  t1814 = -1.*t1685*t1444;
  t1905 = t1661*t1425;
  t1923 = t1685*t1444;
  t1945 = -1.*t1661*t1512;
  t1958 = -1.*t1685*t1526;
  t2025 = -1.*t2021*t1875;
  t2052 = -1.*t2051*t1895;
  t2224 = t2004*t1875;
  t2228 = t1985*t1895;
  t2230 = t2224 + t2228;
  t2331 = Cos(var1[18]);
  t2340 = -1.*t2331;
  t2341 = 1. + t2340;
  t2353 = Sin(var1[18]);
  t2234 = t1985*t1875;
  t2239 = -1.*t2004*t1895;
  t2248 = t2234 + t2239;
  t2061 = t2004*t1715;
  t2067 = t1985*t1765;
  t2069 = t2061 + t2067;
  t2081 = t1985*t1715;
  t2090 = -1.*t2004*t1765;
  t2095 = t2081 + t2090;
  t2101 = t2021*t1824;
  t2120 = t2051*t1854;
  t2352 = -0.01315*t2341;
  t2354 = -0.62554*t2353;
  t2372 = 0. + t2352 + t2354;
  t2172 = t2004*t1824;
  t2185 = t1985*t1854;
  t2188 = t2172 + t2185;
  t2375 = -0.62554*t2341;
  t2376 = 0.01315*t2353;
  t2379 = 0. + t2375 + t2376;
  t2193 = t1985*t1824;
  t2197 = -1.*t2004*t1854;
  t2198 = t2193 + t2197;
  t2134 = t2021*t1875;
  t2138 = t2051*t1895;
  t2158 = -1.*t2021*t1715;
  t2163 = -1.*t2051*t1765;
  t2263 = t2021*t1715;
  t2264 = t2051*t1765;
  t2316 = -1.*t2021*t1824;
  t2318 = -1.*t2051*t1854;
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
  p_output1[19]=t8;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t59*var1[2];
  p_output1[25]=-1.*t80*var1[2];
  p_output1[26]=t59*var1[0] + t80*var1[1];
  p_output1[27]=-1.*t80;
  p_output1[28]=t59;
  p_output1[29]=0;
  p_output1[30]=t117 + t131;
  p_output1[31]=t144 + t157;
  p_output1[32]=t168 + t177;
  p_output1[33]=t197;
  p_output1[34]=t210;
  p_output1[35]=t213;
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
  p_output1[78]=t117 + t131 + 0.135*t268 + 0.07996*t314;
  p_output1[79]=t144 + t157 + 0.135*t388 + 0.07996*t414;
  p_output1[80]=t168 + t177 + 0.135*t116*t223 + 0.07996*t116*t244;
  p_output1[81]=0. + t197;
  p_output1[82]=0. + t210;
  p_output1[83]=0. + t213;
  p_output1[84]=0.08055*t539 - 0.135*t116*t59 + (0. + t665 + t670 + t671)*t707 + t587*(0. + t622 + t649 + var1[1]);
  p_output1[85]=t587*(0. + t727 + t733 + t8) - 0.135*t116*t80 + 0.08055*t810 + t800*(0. + t749 + t766 + var1[2]);
  p_output1[86]=0.135*t126 + 0.08055*t825 + t800*(0. + t835 + t838 + t850) + t707*(0. + t865 + t873 + var1[0]);
  p_output1[87]=0. + t783 + t792;
  p_output1[88]=0. + t679 + t692;
  p_output1[89]=0. + t572 + t575;
  p_output1[90]=-1.*t1062*(0. + t1014 + t1044 + t665 + t670 + t671) + 0.08055*t800 - 0.01004*t960 - 1.*t1087*(0. + t1096 + t1103 + t622 + t649 + var1[1]);
  p_output1[91]=-0.01004*t1198 + 0.08055*t707 - 1.*t1087*(0. + t1164 + t1165 + t727 + t733 + t8) - 1.*t1149*(0. + t1128 + t1139 + t749 + t766 + var1[2]);
  p_output1[92]=-0.01004*t1224 + 0.08055*t587 - 1.*t1149*(0. + t1246 + t1261 + t835 + t838 + t850) - 1.*t1062*(0. + t1232 + t1236 + t865 + t873 + var1[0]);
  p_output1[93]=t1287;
  p_output1[94]=t1312;
  p_output1[95]=t1324;
  p_output1[96]=-0.13004*t1425 + 0.08055*t1444 - 1.*t1062*(0. + t1014 + t1044 + t1372 + t1380 + t665 + t670 + t671) - 1.*t1087*(0. + t1096 + t1103 + t1451 + t1457 + t622 + t649 + var1[1]);
  p_output1[97]=-0.13004*t1512 + 0.08055*t1526 - 1.*t1087*(0. + t1164 + t1165 + t1489 + t1494 + t727 + t733 + t8) - 1.*t1149*(0. + t1128 + t1139 + t1475 + t1478 + t749 + t766 + var1[2]);
  p_output1[98]=-0.13004*t1552 + 0.08055*t1569 - 1.*t1149*(0. + t1246 + t1261 + t1605 + t1606 + t835 + t838 + t850) - 1.*t1062*(0. + t1232 + t1236 + t1576 + t1580 + t865 + t873 + var1[0]);
  p_output1[99]=t1287;
  p_output1[100]=t1312;
  p_output1[101]=t1324;
  p_output1[102]=0.03315*t1715 - 0.19074*t1765 - 1.*t1062*(0. + t1014 + t1044 + t1372 + t1380 + t1663 + t1692 + t665 + t670 + t671) - 1.*t1087*(0. + t1096 + t1103 + t1451 + t1457 + t1772 + t1773 + t622 + t649 + var1[1]);
  p_output1[103]=0.03315*t1824 - 0.19074*t1854 - 1.*t1087*(0. + t1164 + t1165 + t1489 + t1494 + t1810 + t1814 + t727 + t733 + t8) - 1.*t1149*(0. + t1128 + t1139 + t1475 + t1478 + t1788 + t1789 + t749 + t766 + var1[2]);
  p_output1[104]=0.03315*t1875 - 0.19074*t1895 - 1.*t1149*(0. + t1246 + t1261 + t1605 + t1606 + t1945 + t1958 + t835 + t838 + t850) - 1.*t1062*(0. + t1232 + t1236 + t1576 + t1580 + t1905 + t1923 + t865 + t873 + var1[0]);
  p_output1[105]=t1287;
  p_output1[106]=t1312;
  p_output1[107]=t1324;
  p_output1[108]=-0.62554*t2069 + 0.01315*t2095 - 1.*t1062*(0. + t1014 + t1044 + t1372 + t1380 + t1663 + t1692 + t2025 + t2052 + t665 + t670 + t671) - 1.*t1087*(0. + t1096 + t1103 + t1451 + t1457 + t1772 + t1773 + t2101 + t2120 + t622 + t649 + var1[1]);
  p_output1[109]=-0.62554*t2188 + 0.01315*t2198 - 1.*t1087*(0. + t1164 + t1165 + t1489 + t1494 + t1810 + t1814 + t2158 + t2163 + t727 + t733 + t8) - 1.*t1149*(0. + t1128 + t1139 + t1475 + t1478 + t1788 + t1789 + t2134 + t2138 + t749 + t766 + var1[2]);
  p_output1[110]=-0.62554*t2230 + 0.01315*t2248 - 1.*t1149*(0. + t1246 + t1261 + t1605 + t1606 + t1945 + t1958 + t2316 + t2318 + t835 + t838 + t850) - 1.*t1062*(0. + t1232 + t1236 + t1576 + t1580 + t1905 + t1923 + t2263 + t2264 + t865 + t873 + var1[0]);
  p_output1[111]=t1287;
  p_output1[112]=t1312;
  p_output1[113]=t1324;
  p_output1[114]=0.05315*(t2095*t2331 - 1.*t2069*t2353) - 1.03354*(t2069*t2331 + t2095*t2353) - 1.*t1062*(0. + t1014 + t1044 + t1372 + t1380 + t1663 + t1692 + t2025 + t2052 - 1.*t2230*t2372 - 1.*t2248*t2379 + t665 + t670 + t671) - 1.*t1087*(0. + t1096 + t1103 + t1451 + t1457 + t1772 + t1773 + t2101 + t2120 + t2188*t2372 + t2198*t2379 + t622 + t649 + var1[1]);
  p_output1[115]=0.05315*(t2198*t2331 - 1.*t2188*t2353) - 1.03354*(t2188*t2331 + t2198*t2353) - 1.*t1087*(0. + t1164 + t1165 + t1489 + t1494 + t1810 + t1814 + t2158 + t2163 - 1.*t2069*t2372 - 1.*t2095*t2379 + t727 + t733 + t8) - 1.*t1149*(0. + t1128 + t1139 + t1475 + t1478 + t1788 + t1789 + t2134 + t2138 + t2230*t2372 + t2248*t2379 + t749 + t766 + var1[2]);
  p_output1[116]=0.05315*(t2248*t2331 - 1.*t2230*t2353) - 1.03354*(t2230*t2331 + t2248*t2353) - 1.*t1149*(0. + t1246 + t1261 + t1605 + t1606 + t1945 + t1958 + t2316 + t2318 - 1.*t2188*t2372 - 1.*t2198*t2379 + t835 + t838 + t850) - 1.*t1062*(0. + t1232 + t1236 + t1576 + t1580 + t1905 + t1923 + t2263 + t2264 + t2069*t2372 + t2095*t2379 + t865 + t873 + var1[0]);
  p_output1[117]=t1287;
  p_output1[118]=t1312;
  p_output1[119]=t1324;
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

#include "Js_RightToeJoint_mex.hh"

namespace SymExpression
{

void Js_RightToeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
