/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:41 GMT-04:00
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
  double t42;
  double t62;
  double t144;
  double t169;
  double t159;
  double t171;
  double t280;
  double t290;
  double t187;
  double t195;
  double t216;
  double t231;
  double t244;
  double t260;
  double t271;
  double t282;
  double t299;
  double t301;
  double t309;
  double t315;
  double t329;
  double t506;
  double t499;
  double t337;
  double t352;
  double t361;
  double t559;
  double t579;
  double t392;
  double t393;
  double t396;
  double t589;
  double t594;
  double t595;
  double t601;
  double t606;
  double t612;
  double t545;
  double t551;
  double t555;
  double t24;
  double t737;
  double t741;
  double t772;
  double t668;
  double t670;
  double t675;
  double t505;
  double t520;
  double t523;
  double t628;
  double t650;
  double t952;
  double t959;
  double t662;
  double t979;
  double t1007;
  double t824;
  double t831;
  double t844;
  double t776;
  double t780;
  double t793;
  double t1011;
  double t1014;
  double t1025;
  double t596;
  double t614;
  double t1032;
  double t1041;
  double t1045;
  double t718;
  double t720;
  double t1088;
  double t1092;
  double t1094;
  double t681;
  double t682;
  double t892;
  double t898;
  double t1068;
  double t1070;
  double t1082;
  double t1152;
  double t1164;
  double t1178;
  double t865;
  double t875;
  double t877;
  double t1026;
  double t1051;
  double t1383;
  double t1396;
  double t1403;
  double t1411;
  double t1236;
  double t1246;
  double t1254;
  double t957;
  double t960;
  double t963;
  double t1106;
  double t1108;
  double t1405;
  double t1425;
  double t1445;
  double t1451;
  double t1454;
  double t1459;
  double t1198;
  double t1205;
  double t1212;
  double t1127;
  double t1141;
  double t1182;
  double t1192;
  double t1260;
  double t1261;
  double t1283;
  double t1285;
  double t1312;
  double t1316;
  double t1329;
  double t1357;
  double t1366;
  double t1372;
  double t1377;
  double t1378;
  double t1381;
  double t1448;
  double t1460;
  double t1638;
  double t1640;
  double t1642;
  double t1719;
  double t1730;
  double t1734;
  double t1737;
  double t1649;
  double t1651;
  double t1652;
  double t1483;
  double t1484;
  double t1490;
  double t1493;
  double t1495;
  double t1500;
  double t1514;
  double t1516;
  double t1735;
  double t1739;
  double t1742;
  double t1597;
  double t1604;
  double t1605;
  double t1754;
  double t1755;
  double t1761;
  double t1621;
  double t1626;
  double t1630;
  double t1542;
  double t1549;
  double t1560;
  double t1574;
  double t1666;
  double t1667;
  double t1707;
  double t1708;
  double t1748;
  double t1762;
  double t1939;
  double t1946;
  double t1947;
  double t2030;
  double t2031;
  double t2041;
  double t2054;
  double t1958;
  double t1961;
  double t1965;
  double t1784;
  double t1788;
  double t1795;
  double t1802;
  double t1804;
  double t1807;
  double t1823;
  double t1824;
  double t2052;
  double t2056;
  double t2057;
  double t1875;
  double t1882;
  double t1888;
  double t2071;
  double t2075;
  double t2082;
  double t1899;
  double t1902;
  double t1926;
  double t1833;
  double t1834;
  double t1851;
  double t1853;
  double t1969;
  double t1979;
  double t1995;
  double t2008;
  double t2066;
  double t2083;
  double t2270;
  double t2273;
  double t2275;
  double t2353;
  double t2354;
  double t2366;
  double t2369;
  double t2294;
  double t2303;
  double t2307;
  double t2104;
  double t2124;
  double t2129;
  double t2139;
  double t2143;
  double t2145;
  double t2150;
  double t2157;
  double t2367;
  double t2376;
  double t2382;
  double t2216;
  double t2234;
  double t2243;
  double t2386;
  double t2387;
  double t2401;
  double t2248;
  double t2250;
  double t2251;
  double t2180;
  double t2184;
  double t2196;
  double t2198;
  double t2317;
  double t2331;
  double t2335;
  double t2339;
  t42 = Cos(var1[3]);
  t62 = Sin(var1[3]);
  t144 = Cos(var1[4]);
  t169 = Sin(var1[4]);
  t159 = -1.*var1[2]*t144*t62;
  t171 = -1.*var1[1]*t169;
  t280 = Cos(var1[5]);
  t290 = Sin(var1[5]);
  t187 = var1[2]*t42*t144;
  t195 = var1[0]*t169;
  t216 = -1.*var1[1]*t42*t144;
  t231 = var1[0]*t144*t62;
  t244 = t42*t144;
  t260 = t144*t62;
  t271 = -1.*t169;
  t282 = t42*t280*t169;
  t299 = t62*t290;
  t301 = t282 + t299;
  t309 = -1.*t280*t62;
  t315 = t42*t169*t290;
  t329 = t309 + t315;
  t506 = Cos(var1[13]);
  t499 = Sin(var1[13]);
  t337 = t280*t62*t169;
  t352 = -1.*t42*t290;
  t361 = t337 + t352;
  t559 = -1.*t506;
  t579 = 1. + t559;
  t392 = t42*t280;
  t393 = t62*t169*t290;
  t396 = t392 + t393;
  t589 = 0.07996*t579;
  t594 = 0.135*t499;
  t595 = 0. + t589 + t594;
  t601 = -0.135*t579;
  t606 = 0.07996*t499;
  t612 = 0. + t601 + t606;
  t545 = t506*t144*t280;
  t551 = -1.*t144*t499*t290;
  t555 = t545 + t551;
  t24 = -1.*var1[0];
  t737 = t506*t301;
  t741 = -1.*t499*t329;
  t772 = t737 + t741;
  t668 = t506*t361;
  t670 = -1.*t499*t396;
  t675 = t668 + t670;
  t505 = t499*t301;
  t520 = t506*t329;
  t523 = t505 + t520;
  t628 = -1.*var1[2];
  t650 = -1.*t144*t280*t595;
  t952 = Cos(var1[14]);
  t959 = Sin(var1[14]);
  t662 = -1.*t144*t612*t290;
  t979 = -1.*t952;
  t1007 = 1. + t979;
  t824 = t144*t280*t499;
  t831 = t506*t144*t290;
  t844 = t824 + t831;
  t776 = t499*t361;
  t780 = t506*t396;
  t793 = t776 + t780;
  t1011 = -0.08055*t1007;
  t1014 = -0.135*t959;
  t1025 = 0. + t1011 + t1014;
  t596 = t595*t361;
  t614 = t612*t396;
  t1032 = -0.135*t1007;
  t1041 = 0.08055*t959;
  t1045 = 0. + t1032 + t1041;
  t718 = t144*t280*t595;
  t720 = t144*t612*t290;
  t1088 = t959*t169;
  t1092 = t952*t844;
  t1094 = t1088 + t1092;
  t681 = -1.*t595*t301;
  t682 = -1.*t612*t329;
  t892 = t595*t301;
  t898 = t612*t329;
  t1068 = -1.*t144*t959*t62;
  t1070 = t952*t793;
  t1082 = t1068 + t1070;
  t1152 = -1.*t42*t144*t959;
  t1164 = t952*t523;
  t1178 = t1152 + t1164;
  t865 = -1.*var1[1];
  t875 = -1.*t595*t361;
  t877 = -1.*t612*t396;
  t1026 = t1025*t169;
  t1051 = -1.*t1045*t844;
  t1383 = Cos(var1[15]);
  t1396 = -1.*t1383;
  t1403 = 1. + t1396;
  t1411 = Sin(var1[15]);
  t1236 = -1.*t952*t169;
  t1246 = t959*t844;
  t1254 = t1236 + t1246;
  t957 = t952*t42*t144;
  t960 = t959*t523;
  t963 = t957 + t960;
  t1106 = t144*t1025*t62;
  t1108 = t1045*t793;
  t1405 = -0.01004*t1403;
  t1425 = 0.08055*t1411;
  t1445 = 0. + t1405 + t1425;
  t1451 = -0.08055*t1403;
  t1454 = -0.01004*t1411;
  t1459 = 0. + t1451 + t1454;
  t1198 = t952*t144*t62;
  t1205 = t959*t793;
  t1212 = t1198 + t1205;
  t1127 = -1.*t1025*t169;
  t1141 = t1045*t844;
  t1182 = -1.*t42*t144*t1025;
  t1192 = -1.*t1045*t523;
  t1260 = t42*t144*t1025;
  t1261 = t1045*t523;
  t1283 = -1.*t144*t1025*t62;
  t1285 = -1.*t1045*t793;
  t1312 = t42*t144*t959;
  t1316 = -1.*t952*t523;
  t1329 = 0. + t1312 + t1316;
  t1357 = t144*t959*t62;
  t1366 = -1.*t952*t793;
  t1372 = 0. + t1357 + t1366;
  t1377 = -1.*t959*t169;
  t1378 = -1.*t952*t844;
  t1381 = 0. + t1377 + t1378;
  t1448 = -1.*t1445*t555;
  t1460 = -1.*t1459*t1254;
  t1638 = t1411*t555;
  t1640 = t1383*t1254;
  t1642 = t1638 + t1640;
  t1719 = Cos(var1[16]);
  t1730 = -1.*t1719;
  t1734 = 1. + t1730;
  t1737 = Sin(var1[16]);
  t1649 = t1383*t555;
  t1651 = -1.*t1411*t1254;
  t1652 = t1649 + t1651;
  t1483 = t1411*t772;
  t1484 = t1383*t963;
  t1490 = t1483 + t1484;
  t1493 = t1383*t772;
  t1495 = -1.*t1411*t963;
  t1500 = t1493 + t1495;
  t1514 = t1445*t675;
  t1516 = t1459*t1212;
  t1735 = -0.08055*t1734;
  t1739 = -0.13004*t1737;
  t1742 = 0. + t1735 + t1739;
  t1597 = t1411*t675;
  t1604 = t1383*t1212;
  t1605 = t1597 + t1604;
  t1754 = -0.13004*t1734;
  t1755 = 0.08055*t1737;
  t1761 = 0. + t1754 + t1755;
  t1621 = t1383*t675;
  t1626 = -1.*t1411*t1212;
  t1630 = t1621 + t1626;
  t1542 = t1445*t555;
  t1549 = t1459*t1254;
  t1560 = -1.*t1445*t772;
  t1574 = -1.*t1459*t963;
  t1666 = t1445*t772;
  t1667 = t1459*t963;
  t1707 = -1.*t1445*t675;
  t1708 = -1.*t1459*t1212;
  t1748 = -1.*t1742*t1642;
  t1762 = -1.*t1761*t1652;
  t1939 = -1.*t1737*t1642;
  t1946 = t1719*t1652;
  t1947 = t1939 + t1946;
  t2030 = Cos(var1[17]);
  t2031 = -1.*t2030;
  t2041 = 1. + t2031;
  t2054 = Sin(var1[17]);
  t1958 = t1719*t1642;
  t1961 = t1737*t1652;
  t1965 = t1958 + t1961;
  t1784 = -1.*t1737*t1490;
  t1788 = t1719*t1500;
  t1795 = t1784 + t1788;
  t1802 = t1719*t1490;
  t1804 = t1737*t1500;
  t1807 = t1802 + t1804;
  t1823 = t1742*t1605;
  t1824 = t1761*t1630;
  t2052 = -0.19074*t2041;
  t2056 = 0.03315*t2054;
  t2057 = 0. + t2052 + t2056;
  t1875 = -1.*t1737*t1605;
  t1882 = t1719*t1630;
  t1888 = t1875 + t1882;
  t2071 = -0.03315*t2041;
  t2075 = -0.19074*t2054;
  t2082 = 0. + t2071 + t2075;
  t1899 = t1719*t1605;
  t1902 = t1737*t1630;
  t1926 = t1899 + t1902;
  t1833 = t1742*t1642;
  t1834 = t1761*t1652;
  t1851 = -1.*t1742*t1490;
  t1853 = -1.*t1761*t1500;
  t1969 = t1742*t1490;
  t1979 = t1761*t1500;
  t1995 = -1.*t1742*t1605;
  t2008 = -1.*t1761*t1630;
  t2066 = -1.*t2057*t1947;
  t2083 = -1.*t2082*t1965;
  t2270 = t2054*t1947;
  t2273 = t2030*t1965;
  t2275 = t2270 + t2273;
  t2353 = Cos(var1[18]);
  t2354 = -1.*t2353;
  t2366 = 1. + t2354;
  t2369 = Sin(var1[18]);
  t2294 = t2030*t1947;
  t2303 = -1.*t2054*t1965;
  t2307 = t2294 + t2303;
  t2104 = t2054*t1795;
  t2124 = t2030*t1807;
  t2129 = t2104 + t2124;
  t2139 = t2030*t1795;
  t2143 = -1.*t2054*t1807;
  t2145 = t2139 + t2143;
  t2150 = t2057*t1888;
  t2157 = t2082*t1926;
  t2367 = -0.01315*t2366;
  t2376 = -0.62554*t2369;
  t2382 = 0. + t2367 + t2376;
  t2216 = t2054*t1888;
  t2234 = t2030*t1926;
  t2243 = t2216 + t2234;
  t2386 = -0.62554*t2366;
  t2387 = 0.01315*t2369;
  t2401 = 0. + t2386 + t2387;
  t2248 = t2030*t1888;
  t2250 = -1.*t2054*t1926;
  t2251 = t2248 + t2250;
  t2180 = t2057*t1947;
  t2184 = t2082*t1965;
  t2196 = -1.*t2057*t1795;
  t2198 = -1.*t2082*t1807;
  t2317 = t2057*t1795;
  t2331 = t2082*t1807;
  t2335 = -1.*t2057*t1888;
  t2339 = -1.*t2082*t1926;
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
  p_output1[24]=-1.*t42*var1[2];
  p_output1[25]=-1.*t62*var1[2];
  p_output1[26]=t42*var1[0] + t62*var1[1];
  p_output1[27]=-1.*t62;
  p_output1[28]=t42;
  p_output1[29]=0;
  p_output1[30]=t159 + t171;
  p_output1[31]=t187 + t195;
  p_output1[32]=t216 + t231;
  p_output1[33]=t244;
  p_output1[34]=t260;
  p_output1[35]=t271;
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
  p_output1[78]=t159 + t171 + 0.135*t301 + 0.07996*t329;
  p_output1[79]=t187 + t195 + 0.135*t361 + 0.07996*t396;
  p_output1[80]=t216 + t231 + 0.135*t144*t280 + 0.07996*t144*t290;
  p_output1[81]=0. + t244;
  p_output1[82]=0. + t260;
  p_output1[83]=0. + t271;
  p_output1[84]=-0.135*t144*t42 + 0.08055*t523 + (0. + t628 + t650 + t662)*t675 + t555*(0. + t596 + t614 + var1[1]);
  p_output1[85]=-0.135*t144*t62 + t555*(0. + t24 + t681 + t682) + 0.08055*t793 + t772*(0. + t718 + t720 + var1[2]);
  p_output1[86]=0.135*t169 + 0.08055*t844 + t772*(0. + t865 + t875 + t877) + t675*(0. + t892 + t898 + var1[0]);
  p_output1[87]=0. + t737 + t741;
  p_output1[88]=0. + t668 + t670;
  p_output1[89]=0. + t545 + t551;
  p_output1[90]=-1.*t1082*(0. + t1026 + t1051 + t628 + t650 + t662) + 0.08055*t772 - 0.01004*t963 - 1.*t1094*(0. + t1106 + t1108 + t596 + t614 + var1[1]);
  p_output1[91]=-0.01004*t1212 + 0.08055*t675 - 1.*t1094*(0. + t1182 + t1192 + t24 + t681 + t682) - 1.*t1178*(0. + t1127 + t1141 + t718 + t720 + var1[2]);
  p_output1[92]=-0.01004*t1254 + 0.08055*t555 - 1.*t1178*(0. + t1283 + t1285 + t865 + t875 + t877) - 1.*t1082*(0. + t1260 + t1261 + t892 + t898 + var1[0]);
  p_output1[93]=t1329;
  p_output1[94]=t1372;
  p_output1[95]=t1381;
  p_output1[96]=-0.13004*t1490 + 0.08055*t1500 - 1.*t1082*(0. + t1026 + t1051 + t1448 + t1460 + t628 + t650 + t662) - 1.*t1094*(0. + t1106 + t1108 + t1514 + t1516 + t596 + t614 + var1[1]);
  p_output1[97]=-0.13004*t1605 + 0.08055*t1630 - 1.*t1094*(0. + t1182 + t1192 + t1560 + t1574 + t24 + t681 + t682) - 1.*t1178*(0. + t1127 + t1141 + t1542 + t1549 + t718 + t720 + var1[2]);
  p_output1[98]=-0.13004*t1642 + 0.08055*t1652 - 1.*t1178*(0. + t1283 + t1285 + t1707 + t1708 + t865 + t875 + t877) - 1.*t1082*(0. + t1260 + t1261 + t1666 + t1667 + t892 + t898 + var1[0]);
  p_output1[99]=t1329;
  p_output1[100]=t1372;
  p_output1[101]=t1381;
  p_output1[102]=0.03315*t1795 - 0.19074*t1807 - 1.*t1082*(0. + t1026 + t1051 + t1448 + t1460 + t1748 + t1762 + t628 + t650 + t662) - 1.*t1094*(0. + t1106 + t1108 + t1514 + t1516 + t1823 + t1824 + t596 + t614 + var1[1]);
  p_output1[103]=0.03315*t1888 - 0.19074*t1926 - 1.*t1094*(0. + t1182 + t1192 + t1560 + t1574 + t1851 + t1853 + t24 + t681 + t682) - 1.*t1178*(0. + t1127 + t1141 + t1542 + t1549 + t1833 + t1834 + t718 + t720 + var1[2]);
  p_output1[104]=0.03315*t1947 - 0.19074*t1965 - 1.*t1178*(0. + t1283 + t1285 + t1707 + t1708 + t1995 + t2008 + t865 + t875 + t877) - 1.*t1082*(0. + t1260 + t1261 + t1666 + t1667 + t1969 + t1979 + t892 + t898 + var1[0]);
  p_output1[105]=t1329;
  p_output1[106]=t1372;
  p_output1[107]=t1381;
  p_output1[108]=-0.62554*t2129 + 0.01315*t2145 - 1.*t1082*(0. + t1026 + t1051 + t1448 + t1460 + t1748 + t1762 + t2066 + t2083 + t628 + t650 + t662) - 1.*t1094*(0. + t1106 + t1108 + t1514 + t1516 + t1823 + t1824 + t2150 + t2157 + t596 + t614 + var1[1]);
  p_output1[109]=-0.62554*t2243 + 0.01315*t2251 - 1.*t1094*(0. + t1182 + t1192 + t1560 + t1574 + t1851 + t1853 + t2196 + t2198 + t24 + t681 + t682) - 1.*t1178*(0. + t1127 + t1141 + t1542 + t1549 + t1833 + t1834 + t2180 + t2184 + t718 + t720 + var1[2]);
  p_output1[110]=-0.62554*t2275 + 0.01315*t2307 - 1.*t1178*(0. + t1283 + t1285 + t1707 + t1708 + t1995 + t2008 + t2335 + t2339 + t865 + t875 + t877) - 1.*t1082*(0. + t1260 + t1261 + t1666 + t1667 + t1969 + t1979 + t2317 + t2331 + t892 + t898 + var1[0]);
  p_output1[111]=t1329;
  p_output1[112]=t1372;
  p_output1[113]=t1381;
  p_output1[114]=0.05315*(t2145*t2353 - 1.*t2129*t2369) - 1.03354*(t2129*t2353 + t2145*t2369) - 1.*t1082*(0. + t1026 + t1051 + t1448 + t1460 + t1748 + t1762 + t2066 + t2083 - 1.*t2275*t2382 - 1.*t2307*t2401 + t628 + t650 + t662) - 1.*t1094*(0. + t1106 + t1108 + t1514 + t1516 + t1823 + t1824 + t2150 + t2157 + t2243*t2382 + t2251*t2401 + t596 + t614 + var1[1]);
  p_output1[115]=0.05315*(t2251*t2353 - 1.*t2243*t2369) - 1.03354*(t2243*t2353 + t2251*t2369) - 1.*t1094*(0. + t1182 + t1192 + t1560 + t1574 + t1851 + t1853 + t2196 + t2198 - 1.*t2129*t2382 + t24 - 1.*t2145*t2401 + t681 + t682) - 1.*t1178*(0. + t1127 + t1141 + t1542 + t1549 + t1833 + t1834 + t2180 + t2184 + t2275*t2382 + t2307*t2401 + t718 + t720 + var1[2]);
  p_output1[116]=0.05315*(t2307*t2353 - 1.*t2275*t2369) - 1.03354*(t2275*t2353 + t2307*t2369) - 1.*t1178*(0. + t1283 + t1285 + t1707 + t1708 + t1995 + t2008 + t2335 + t2339 - 1.*t2243*t2382 - 1.*t2251*t2401 + t865 + t875 + t877) - 1.*t1082*(0. + t1260 + t1261 + t1666 + t1667 + t1969 + t1979 + t2317 + t2331 + t2129*t2382 + t2145*t2401 + t892 + t898 + var1[0]);
  p_output1[117]=t1329;
  p_output1[118]=t1372;
  p_output1[119]=t1381;
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

#include "Js_RightToeBottomBack_mex.hh"

namespace SymExpression
{

void Js_RightToeBottomBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
