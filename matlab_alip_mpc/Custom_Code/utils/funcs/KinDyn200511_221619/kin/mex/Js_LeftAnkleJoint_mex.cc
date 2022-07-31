/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:05 GMT-04:00
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
  double t50;
  double t70;
  double t147;
  double t169;
  double t150;
  double t180;
  double t287;
  double t291;
  double t204;
  double t206;
  double t217;
  double t239;
  double t250;
  double t256;
  double t285;
  double t368;
  double t371;
  double t402;
  double t435;
  double t436;
  double t445;
  double t489;
  double t495;
  double t506;
  double t518;
  double t315;
  double t332;
  double t336;
  double t289;
  double t301;
  double t305;
  double t511;
  double t530;
  double t539;
  double t546;
  double t553;
  double t557;
  double t39;
  double t580;
  double t596;
  double t599;
  double t782;
  double t785;
  double t786;
  double t665;
  double t670;
  double t699;
  double t640;
  double t649;
  double t653;
  double t833;
  double t854;
  double t861;
  double t976;
  double t985;
  double t987;
  double t1005;
  double t748;
  double t751;
  double t760;
  double t541;
  double t563;
  double t1002;
  double t1006;
  double t1007;
  double t1017;
  double t1023;
  double t1050;
  double t610;
  double t616;
  double t629;
  double t768;
  double t771;
  double t717;
  double t720;
  double t1127;
  double t1129;
  double t1130;
  double t883;
  double t901;
  double t907;
  double t1237;
  double t1240;
  double t1261;
  double t926;
  double t927;
  double t1074;
  double t1090;
  double t1105;
  double t1009;
  double t1053;
  double t1362;
  double t1373;
  double t1377;
  double t1445;
  double t1452;
  double t1453;
  double t1458;
  double t1110;
  double t1114;
  double t1282;
  double t1285;
  double t1288;
  double t1456;
  double t1461;
  double t1462;
  double t1469;
  double t1477;
  double t1494;
  double t1156;
  double t1157;
  double t1171;
  double t1230;
  double t1233;
  double t1273;
  double t1276;
  double t1348;
  double t1349;
  double t1315;
  double t1316;
  double t1389;
  double t1390;
  double t1397;
  double t1402;
  double t1416;
  double t1417;
  double t1418;
  double t1437;
  double t1444;
  double t1467;
  double t1507;
  double t1755;
  double t1756;
  double t1759;
  double t1799;
  double t1822;
  double t1830;
  double t1853;
  double t1764;
  double t1780;
  double t1790;
  double t1539;
  double t1541;
  double t1851;
  double t1854;
  double t1855;
  double t1652;
  double t1656;
  double t1674;
  double t1861;
  double t1889;
  double t1902;
  double t1676;
  double t1680;
  double t1686;
  double t1563;
  double t1570;
  double t1579;
  double t1589;
  double t1590;
  double t1592;
  double t1603;
  double t1620;
  double t1629;
  double t1630;
  double t1710;
  double t1711;
  double t1698;
  double t1707;
  double t1859;
  double t1916;
  double t2106;
  double t2109;
  double t2110;
  double t2222;
  double t2230;
  double t2241;
  double t2249;
  double t2118;
  double t2121;
  double t2135;
  double t1931;
  double t1939;
  double t2246;
  double t2252;
  double t2275;
  double t2035;
  double t2041;
  double t2044;
  double t2280;
  double t2283;
  double t2287;
  double t2048;
  double t2056;
  double t2059;
  double t1976;
  double t1977;
  double t1980;
  double t1991;
  double t1993;
  double t1994;
  double t2011;
  double t2015;
  double t2073;
  double t2076;
  double t2138;
  double t2172;
  double t2182;
  double t2190;
  t50 = Cos(var1[3]);
  t70 = Sin(var1[3]);
  t147 = Cos(var1[4]);
  t169 = Sin(var1[4]);
  t150 = -1.*var1[2]*t147*t70;
  t180 = -1.*var1[1]*t169;
  t287 = Cos(var1[5]);
  t291 = Sin(var1[5]);
  t204 = var1[2]*t50*t147;
  t206 = var1[0]*t169;
  t217 = -1.*var1[1]*t50*t147;
  t239 = var1[0]*t147*t70;
  t250 = t50*t147;
  t256 = t147*t70;
  t285 = -1.*t169;
  t368 = t287*t70*t169;
  t371 = -1.*t50*t291;
  t402 = t368 + t371;
  t435 = t50*t287;
  t436 = t70*t169*t291;
  t445 = t435 + t436;
  t489 = Cos(var1[6]);
  t495 = -1.*t489;
  t506 = 1. + t495;
  t518 = Sin(var1[6]);
  t315 = -1.*t287*t70;
  t332 = t50*t169*t291;
  t336 = t315 + t332;
  t289 = t50*t287*t169;
  t301 = t70*t291;
  t305 = t289 + t301;
  t511 = 0.07996*t506;
  t530 = -0.135*t518;
  t539 = 0. + t511 + t530;
  t546 = 0.135*t506;
  t553 = 0.07996*t518;
  t557 = 0. + t546 + t553;
  t39 = -1.*var1[0];
  t580 = t147*t287*t489;
  t596 = -1.*t147*t291*t518;
  t599 = t580 + t596;
  t782 = t489*t305;
  t785 = -1.*t336*t518;
  t786 = t782 + t785;
  t665 = t489*t402;
  t670 = -1.*t445*t518;
  t699 = t665 + t670;
  t640 = -1.*var1[2];
  t649 = -1.*t147*t287*t539;
  t653 = -1.*t147*t291*t557;
  t833 = t147*t489*t291;
  t854 = t147*t287*t518;
  t861 = t833 + t854;
  t976 = Cos(var1[7]);
  t985 = -1.*t976;
  t987 = 1. + t985;
  t1005 = Sin(var1[7]);
  t748 = t489*t445;
  t751 = t402*t518;
  t760 = t748 + t751;
  t541 = t402*t539;
  t563 = t445*t557;
  t1002 = 0.135*t987;
  t1006 = 0.08055*t1005;
  t1007 = 0. + t1002 + t1006;
  t1017 = -0.08055*t987;
  t1023 = 0.135*t1005;
  t1050 = 0. + t1017 + t1023;
  t610 = t489*t336;
  t616 = t305*t518;
  t629 = t610 + t616;
  t768 = t147*t287*t539;
  t771 = t147*t291*t557;
  t717 = -1.*t305*t539;
  t720 = -1.*t336*t557;
  t1127 = t976*t861;
  t1129 = t169*t1005;
  t1130 = t1127 + t1129;
  t883 = -1.*var1[1];
  t901 = -1.*t402*t539;
  t907 = -1.*t445*t557;
  t1237 = t976*t629;
  t1240 = -1.*t50*t147*t1005;
  t1261 = t1237 + t1240;
  t926 = t305*t539;
  t927 = t336*t557;
  t1074 = t976*t760;
  t1090 = -1.*t147*t70*t1005;
  t1105 = t1074 + t1090;
  t1009 = -1.*t861*t1007;
  t1053 = t169*t1050;
  t1362 = -1.*t976*t169;
  t1373 = t861*t1005;
  t1377 = t1362 + t1373;
  t1445 = Cos(var1[8]);
  t1452 = -1.*t1445;
  t1453 = 1. + t1452;
  t1458 = Sin(var1[8]);
  t1110 = t760*t1007;
  t1114 = t147*t70*t1050;
  t1282 = t147*t976*t70;
  t1285 = t760*t1005;
  t1288 = t1282 + t1285;
  t1456 = -0.08055*t1453;
  t1461 = -0.01004*t1458;
  t1462 = 0. + t1456 + t1461;
  t1469 = -0.01004*t1453;
  t1477 = 0.08055*t1458;
  t1494 = 0. + t1469 + t1477;
  t1156 = t50*t147*t976;
  t1157 = t629*t1005;
  t1171 = t1156 + t1157;
  t1230 = t861*t1007;
  t1233 = -1.*t169*t1050;
  t1273 = -1.*t629*t1007;
  t1276 = -1.*t50*t147*t1050;
  t1348 = t629*t1007;
  t1349 = t50*t147*t1050;
  t1315 = -1.*t760*t1007;
  t1316 = -1.*t147*t70*t1050;
  t1389 = -1.*t976*t629;
  t1390 = t50*t147*t1005;
  t1397 = 0. + t1389 + t1390;
  t1402 = -1.*t976*t760;
  t1416 = t147*t70*t1005;
  t1417 = 0. + t1402 + t1416;
  t1418 = -1.*t976*t861;
  t1437 = -1.*t169*t1005;
  t1444 = 0. + t1418 + t1437;
  t1467 = -1.*t1377*t1462;
  t1507 = -1.*t599*t1494;
  t1755 = t1445*t1377;
  t1756 = t599*t1458;
  t1759 = t1755 + t1756;
  t1799 = Cos(var1[9]);
  t1822 = -1.*t1799;
  t1830 = 1. + t1822;
  t1853 = Sin(var1[9]);
  t1764 = t1445*t599;
  t1780 = -1.*t1377*t1458;
  t1790 = t1764 + t1780;
  t1539 = t1288*t1462;
  t1541 = t699*t1494;
  t1851 = -0.08055*t1830;
  t1854 = -0.13004*t1853;
  t1855 = 0. + t1851 + t1854;
  t1652 = t1445*t1288;
  t1656 = t699*t1458;
  t1674 = t1652 + t1656;
  t1861 = -0.13004*t1830;
  t1889 = 0.08055*t1853;
  t1902 = 0. + t1861 + t1889;
  t1676 = t1445*t699;
  t1680 = -1.*t1288*t1458;
  t1686 = t1676 + t1680;
  t1563 = t1445*t1171;
  t1570 = t786*t1458;
  t1579 = t1563 + t1570;
  t1589 = t1445*t786;
  t1590 = -1.*t1171*t1458;
  t1592 = t1589 + t1590;
  t1603 = t1377*t1462;
  t1620 = t599*t1494;
  t1629 = -1.*t1171*t1462;
  t1630 = -1.*t786*t1494;
  t1710 = -1.*t1288*t1462;
  t1711 = -1.*t699*t1494;
  t1698 = t1171*t1462;
  t1707 = t786*t1494;
  t1859 = -1.*t1855*t1759;
  t1916 = -1.*t1902*t1790;
  t2106 = -1.*t1853*t1759;
  t2109 = t1799*t1790;
  t2110 = t2106 + t2109;
  t2222 = Cos(var1[10]);
  t2230 = -1.*t2222;
  t2241 = 1. + t2230;
  t2249 = Sin(var1[10]);
  t2118 = t1799*t1759;
  t2121 = t1853*t1790;
  t2135 = t2118 + t2121;
  t1931 = t1855*t1674;
  t1939 = t1902*t1686;
  t2246 = -0.19074*t2241;
  t2252 = 0.03315*t2249;
  t2275 = 0. + t2246 + t2252;
  t2035 = -1.*t1853*t1674;
  t2041 = t1799*t1686;
  t2044 = t2035 + t2041;
  t2280 = -0.03315*t2241;
  t2283 = -0.19074*t2249;
  t2287 = 0. + t2280 + t2283;
  t2048 = t1799*t1674;
  t2056 = t1853*t1686;
  t2059 = t2048 + t2056;
  t1976 = -1.*t1853*t1579;
  t1977 = t1799*t1592;
  t1980 = t1976 + t1977;
  t1991 = t1799*t1579;
  t1993 = t1853*t1592;
  t1994 = t1991 + t1993;
  t2011 = t1855*t1759;
  t2015 = t1902*t1790;
  t2073 = -1.*t1855*t1579;
  t2076 = -1.*t1902*t1592;
  t2138 = -1.*t1855*t1674;
  t2172 = -1.*t1902*t1686;
  t2182 = t1855*t1579;
  t2190 = t1902*t1592;
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
  p_output1[19]=t39;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t50*var1[2];
  p_output1[25]=-1.*t70*var1[2];
  p_output1[26]=t50*var1[0] + t70*var1[1];
  p_output1[27]=-1.*t70;
  p_output1[28]=t50;
  p_output1[29]=0;
  p_output1[30]=t150 + t180;
  p_output1[31]=t204 + t206;
  p_output1[32]=t217 + t239;
  p_output1[33]=t250;
  p_output1[34]=t256;
  p_output1[35]=t285;
  p_output1[36]=t150 + t180 - 0.135*t305 + 0.07996*t336;
  p_output1[37]=t204 + t206 - 0.135*t402 + 0.07996*t445;
  p_output1[38]=t217 + t239 - 0.135*t147*t287 + 0.07996*t147*t291;
  p_output1[39]=0. + t250;
  p_output1[40]=0. + t256;
  p_output1[41]=0. + t285;
  p_output1[42]=0.135*t147*t50 + 0.08055*t629 + (0. + t640 + t649 + t653)*t699 + t599*(0. + t541 + t563 + var1[1]);
  p_output1[43]=0.135*t147*t70 + t599*(0. + t39 + t717 + t720) + 0.08055*t760 + t786*(0. + t768 + t771 + var1[2]);
  p_output1[44]=-0.135*t169 + 0.08055*t861 + t786*(0. + t883 + t901 + t907) + t699*(0. + t926 + t927 + var1[0]);
  p_output1[45]=0. + t782 + t785;
  p_output1[46]=0. + t665 + t670;
  p_output1[47]=0. + t580 + t596;
  p_output1[48]=-0.01004*t1171 - 1.*t1105*(0. + t1009 + t1053 + t640 + t649 + t653) + 0.08055*t786 - 1.*t1130*(0. + t1110 + t1114 + t541 + t563 + var1[1]);
  p_output1[49]=-0.01004*t1288 + 0.08055*t699 - 1.*t1130*(0. + t1273 + t1276 + t39 + t717 + t720) - 1.*t1261*(0. + t1230 + t1233 + t768 + t771 + var1[2]);
  p_output1[50]=-0.01004*t1377 + 0.08055*t599 - 1.*t1261*(0. + t1315 + t1316 + t883 + t901 + t907) - 1.*t1105*(0. + t1348 + t1349 + t926 + t927 + var1[0]);
  p_output1[51]=t1397;
  p_output1[52]=t1417;
  p_output1[53]=t1444;
  p_output1[54]=-0.13004*t1579 + 0.08055*t1592 - 1.*t1105*(0. + t1009 + t1053 + t1467 + t1507 + t640 + t649 + t653) - 1.*t1130*(0. + t1110 + t1114 + t1539 + t1541 + t541 + t563 + var1[1]);
  p_output1[55]=-0.13004*t1674 + 0.08055*t1686 - 1.*t1130*(0. + t1273 + t1276 + t1629 + t1630 + t39 + t717 + t720) - 1.*t1261*(0. + t1230 + t1233 + t1603 + t1620 + t768 + t771 + var1[2]);
  p_output1[56]=-0.13004*t1759 + 0.08055*t1790 - 1.*t1261*(0. + t1315 + t1316 + t1710 + t1711 + t883 + t901 + t907) - 1.*t1105*(0. + t1348 + t1349 + t1698 + t1707 + t926 + t927 + var1[0]);
  p_output1[57]=t1397;
  p_output1[58]=t1417;
  p_output1[59]=t1444;
  p_output1[60]=0.03315*t1980 - 0.19074*t1994 - 1.*t1105*(0. + t1009 + t1053 + t1467 + t1507 + t1859 + t1916 + t640 + t649 + t653) - 1.*t1130*(0. + t1110 + t1114 + t1539 + t1541 + t1931 + t1939 + t541 + t563 + var1[1]);
  p_output1[61]=0.03315*t2044 - 0.19074*t2059 - 1.*t1130*(0. + t1273 + t1276 + t1629 + t1630 + t2073 + t2076 + t39 + t717 + t720) - 1.*t1261*(0. + t1230 + t1233 + t1603 + t1620 + t2011 + t2015 + t768 + t771 + var1[2]);
  p_output1[62]=0.03315*t2110 - 0.19074*t2135 - 1.*t1261*(0. + t1315 + t1316 + t1710 + t1711 + t2138 + t2172 + t883 + t901 + t907) - 1.*t1105*(0. + t1348 + t1349 + t1698 + t1707 + t2182 + t2190 + t926 + t927 + var1[0]);
  p_output1[63]=t1397;
  p_output1[64]=t1417;
  p_output1[65]=t1444;
  p_output1[66]=-0.62554*(t1994*t2222 + t1980*t2249) + 0.01315*(t1980*t2222 - 1.*t1994*t2249) - 1.*t1105*(0. + t1009 + t1053 + t1467 + t1507 + t1859 + t1916 - 1.*t2110*t2275 - 1.*t2135*t2287 + t640 + t649 + t653) - 1.*t1130*(0. + t1110 + t1114 + t1539 + t1541 + t1931 + t1939 + t2044*t2275 + t2059*t2287 + t541 + t563 + var1[1]);
  p_output1[67]=-0.62554*(t2059*t2222 + t2044*t2249) + 0.01315*(t2044*t2222 - 1.*t2059*t2249) - 1.*t1130*(0. + t1273 + t1276 + t1629 + t1630 + t2073 + t2076 - 1.*t1980*t2275 - 1.*t1994*t2287 + t39 + t717 + t720) - 1.*t1261*(0. + t1230 + t1233 + t1603 + t1620 + t2011 + t2015 + t2110*t2275 + t2135*t2287 + t768 + t771 + var1[2]);
  p_output1[68]=-0.62554*(t2135*t2222 + t2110*t2249) + 0.01315*(t2110*t2222 - 1.*t2135*t2249) - 1.*t1261*(0. + t1315 + t1316 + t1710 + t1711 + t2138 + t2172 - 1.*t2044*t2275 - 1.*t2059*t2287 + t883 + t901 + t907) - 1.*t1105*(0. + t1348 + t1349 + t1698 + t1707 + t2182 + t2190 + t1980*t2275 + t1994*t2287 + t926 + t927 + var1[0]);
  p_output1[69]=t1397;
  p_output1[70]=t1417;
  p_output1[71]=t1444;
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

#include "Js_LeftAnkleJoint_mex.hh"

namespace SymExpression
{

void Js_LeftAnkleJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
