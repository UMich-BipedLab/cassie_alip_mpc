/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:55 GMT-04:00
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
  double t39;
  double t75;
  double t169;
  double t176;
  double t170;
  double t177;
  double t279;
  double t294;
  double t185;
  double t189;
  double t199;
  double t200;
  double t246;
  double t251;
  double t275;
  double t351;
  double t359;
  double t361;
  double t375;
  double t393;
  double t395;
  double t495;
  double t499;
  double t506;
  double t512;
  double t321;
  double t333;
  double t341;
  double t289;
  double t297;
  double t305;
  double t508;
  double t515;
  double t533;
  double t539;
  double t544;
  double t546;
  double t18;
  double t570;
  double t576;
  double t578;
  double t812;
  double t814;
  double t817;
  double t656;
  double t682;
  double t684;
  double t623;
  double t629;
  double t631;
  double t867;
  double t870;
  double t874;
  double t1004;
  double t1015;
  double t1016;
  double t1023;
  double t765;
  double t776;
  double t778;
  double t536;
  double t557;
  double t1020;
  double t1031;
  double t1032;
  double t1038;
  double t1042;
  double t1050;
  double t596;
  double t604;
  double t605;
  double t791;
  double t796;
  double t741;
  double t754;
  double t1129;
  double t1150;
  double t1153;
  double t903;
  double t910;
  double t920;
  double t1206;
  double t1213;
  double t1215;
  double t951;
  double t956;
  double t1075;
  double t1080;
  double t1083;
  double t1035;
  double t1057;
  double t1323;
  double t1325;
  double t1327;
  double t1394;
  double t1397;
  double t1404;
  double t1406;
  double t1091;
  double t1096;
  double t1260;
  double t1264;
  double t1268;
  double t1405;
  double t1411;
  double t1412;
  double t1418;
  double t1419;
  double t1422;
  double t1157;
  double t1159;
  double t1160;
  double t1191;
  double t1195;
  double t1230;
  double t1240;
  double t1306;
  double t1311;
  double t1281;
  double t1285;
  double t1347;
  double t1350;
  double t1352;
  double t1357;
  double t1361;
  double t1363;
  double t1381;
  double t1390;
  double t1392;
  double t1417;
  double t1431;
  double t1654;
  double t1656;
  double t1664;
  double t1690;
  double t1705;
  double t1710;
  double t1714;
  double t1678;
  double t1679;
  double t1680;
  double t1437;
  double t1440;
  double t1712;
  double t1716;
  double t1728;
  double t1568;
  double t1571;
  double t1576;
  double t1733;
  double t1737;
  double t1741;
  double t1589;
  double t1592;
  double t1594;
  double t1451;
  double t1456;
  double t1467;
  double t1481;
  double t1487;
  double t1492;
  double t1529;
  double t1534;
  double t1554;
  double t1564;
  double t1634;
  double t1635;
  double t1614;
  double t1624;
  double t1731;
  double t1749;
  double t1914;
  double t1916;
  double t1921;
  double t2033;
  double t2039;
  double t2044;
  double t2049;
  double t1931;
  double t1932;
  double t1937;
  double t1766;
  double t1770;
  double t2045;
  double t2051;
  double t2054;
  double t1856;
  double t1860;
  double t1863;
  double t2059;
  double t2062;
  double t2064;
  double t1874;
  double t1878;
  double t1882;
  double t1780;
  double t1784;
  double t1793;
  double t1802;
  double t1803;
  double t1819;
  double t1847;
  double t1849;
  double t1900;
  double t1904;
  double t1958;
  double t1975;
  double t2011;
  double t2016;
  double t2055;
  double t2066;
  double t2244;
  double t2256;
  double t2258;
  double t2342;
  double t2359;
  double t2360;
  double t2378;
  double t2266;
  double t2267;
  double t2271;
  double t2071;
  double t2085;
  double t2372;
  double t2381;
  double t2382;
  double t2192;
  double t2193;
  double t2195;
  double t2386;
  double t2390;
  double t2392;
  double t2202;
  double t2204;
  double t2207;
  double t2105;
  double t2108;
  double t2118;
  double t2121;
  double t2123;
  double t2129;
  double t2159;
  double t2161;
  double t2224;
  double t2226;
  double t2286;
  double t2287;
  double t2324;
  double t2330;
  t39 = Cos(var1[3]);
  t75 = Sin(var1[3]);
  t169 = Cos(var1[4]);
  t176 = Sin(var1[4]);
  t170 = -1.*var1[2]*t169*t75;
  t177 = -1.*var1[1]*t176;
  t279 = Cos(var1[5]);
  t294 = Sin(var1[5]);
  t185 = var1[2]*t39*t169;
  t189 = var1[0]*t176;
  t199 = -1.*var1[1]*t39*t169;
  t200 = var1[0]*t169*t75;
  t246 = t39*t169;
  t251 = t169*t75;
  t275 = -1.*t176;
  t351 = t279*t75*t176;
  t359 = -1.*t39*t294;
  t361 = t351 + t359;
  t375 = t39*t279;
  t393 = t75*t176*t294;
  t395 = t375 + t393;
  t495 = Cos(var1[6]);
  t499 = -1.*t495;
  t506 = 1. + t499;
  t512 = Sin(var1[6]);
  t321 = -1.*t279*t75;
  t333 = t39*t176*t294;
  t341 = t321 + t333;
  t289 = t39*t279*t176;
  t297 = t75*t294;
  t305 = t289 + t297;
  t508 = 0.07996*t506;
  t515 = -0.135*t512;
  t533 = 0. + t508 + t515;
  t539 = 0.135*t506;
  t544 = 0.07996*t512;
  t546 = 0. + t539 + t544;
  t18 = -1.*var1[0];
  t570 = t169*t279*t495;
  t576 = -1.*t169*t294*t512;
  t578 = t570 + t576;
  t812 = t495*t305;
  t814 = -1.*t341*t512;
  t817 = t812 + t814;
  t656 = t495*t361;
  t682 = -1.*t395*t512;
  t684 = t656 + t682;
  t623 = -1.*var1[2];
  t629 = -1.*t169*t279*t533;
  t631 = -1.*t169*t294*t546;
  t867 = t169*t495*t294;
  t870 = t169*t279*t512;
  t874 = t867 + t870;
  t1004 = Cos(var1[7]);
  t1015 = -1.*t1004;
  t1016 = 1. + t1015;
  t1023 = Sin(var1[7]);
  t765 = t495*t395;
  t776 = t361*t512;
  t778 = t765 + t776;
  t536 = t361*t533;
  t557 = t395*t546;
  t1020 = 0.135*t1016;
  t1031 = 0.08055*t1023;
  t1032 = 0. + t1020 + t1031;
  t1038 = -0.08055*t1016;
  t1042 = 0.135*t1023;
  t1050 = 0. + t1038 + t1042;
  t596 = t495*t341;
  t604 = t305*t512;
  t605 = t596 + t604;
  t791 = t169*t279*t533;
  t796 = t169*t294*t546;
  t741 = -1.*t305*t533;
  t754 = -1.*t341*t546;
  t1129 = t1004*t874;
  t1150 = t176*t1023;
  t1153 = t1129 + t1150;
  t903 = -1.*var1[1];
  t910 = -1.*t361*t533;
  t920 = -1.*t395*t546;
  t1206 = t1004*t605;
  t1213 = -1.*t39*t169*t1023;
  t1215 = t1206 + t1213;
  t951 = t305*t533;
  t956 = t341*t546;
  t1075 = t1004*t778;
  t1080 = -1.*t169*t75*t1023;
  t1083 = t1075 + t1080;
  t1035 = -1.*t874*t1032;
  t1057 = t176*t1050;
  t1323 = -1.*t1004*t176;
  t1325 = t874*t1023;
  t1327 = t1323 + t1325;
  t1394 = Cos(var1[8]);
  t1397 = -1.*t1394;
  t1404 = 1. + t1397;
  t1406 = Sin(var1[8]);
  t1091 = t778*t1032;
  t1096 = t169*t75*t1050;
  t1260 = t169*t1004*t75;
  t1264 = t778*t1023;
  t1268 = t1260 + t1264;
  t1405 = -0.08055*t1404;
  t1411 = -0.01004*t1406;
  t1412 = 0. + t1405 + t1411;
  t1418 = -0.01004*t1404;
  t1419 = 0.08055*t1406;
  t1422 = 0. + t1418 + t1419;
  t1157 = t39*t169*t1004;
  t1159 = t605*t1023;
  t1160 = t1157 + t1159;
  t1191 = t874*t1032;
  t1195 = -1.*t176*t1050;
  t1230 = -1.*t605*t1032;
  t1240 = -1.*t39*t169*t1050;
  t1306 = t605*t1032;
  t1311 = t39*t169*t1050;
  t1281 = -1.*t778*t1032;
  t1285 = -1.*t169*t75*t1050;
  t1347 = -1.*t1004*t605;
  t1350 = t39*t169*t1023;
  t1352 = 0. + t1347 + t1350;
  t1357 = -1.*t1004*t778;
  t1361 = t169*t75*t1023;
  t1363 = 0. + t1357 + t1361;
  t1381 = -1.*t1004*t874;
  t1390 = -1.*t176*t1023;
  t1392 = 0. + t1381 + t1390;
  t1417 = -1.*t1327*t1412;
  t1431 = -1.*t578*t1422;
  t1654 = t1394*t1327;
  t1656 = t578*t1406;
  t1664 = t1654 + t1656;
  t1690 = Cos(var1[9]);
  t1705 = -1.*t1690;
  t1710 = 1. + t1705;
  t1714 = Sin(var1[9]);
  t1678 = t1394*t578;
  t1679 = -1.*t1327*t1406;
  t1680 = t1678 + t1679;
  t1437 = t1268*t1412;
  t1440 = t684*t1422;
  t1712 = -0.08055*t1710;
  t1716 = -0.13004*t1714;
  t1728 = 0. + t1712 + t1716;
  t1568 = t1394*t1268;
  t1571 = t684*t1406;
  t1576 = t1568 + t1571;
  t1733 = -0.13004*t1710;
  t1737 = 0.08055*t1714;
  t1741 = 0. + t1733 + t1737;
  t1589 = t1394*t684;
  t1592 = -1.*t1268*t1406;
  t1594 = t1589 + t1592;
  t1451 = t1394*t1160;
  t1456 = t817*t1406;
  t1467 = t1451 + t1456;
  t1481 = t1394*t817;
  t1487 = -1.*t1160*t1406;
  t1492 = t1481 + t1487;
  t1529 = t1327*t1412;
  t1534 = t578*t1422;
  t1554 = -1.*t1160*t1412;
  t1564 = -1.*t817*t1422;
  t1634 = -1.*t1268*t1412;
  t1635 = -1.*t684*t1422;
  t1614 = t1160*t1412;
  t1624 = t817*t1422;
  t1731 = -1.*t1728*t1664;
  t1749 = -1.*t1741*t1680;
  t1914 = -1.*t1714*t1664;
  t1916 = t1690*t1680;
  t1921 = t1914 + t1916;
  t2033 = Cos(var1[10]);
  t2039 = -1.*t2033;
  t2044 = 1. + t2039;
  t2049 = Sin(var1[10]);
  t1931 = t1690*t1664;
  t1932 = t1714*t1680;
  t1937 = t1931 + t1932;
  t1766 = t1728*t1576;
  t1770 = t1741*t1594;
  t2045 = -0.19074*t2044;
  t2051 = 0.03315*t2049;
  t2054 = 0. + t2045 + t2051;
  t1856 = -1.*t1714*t1576;
  t1860 = t1690*t1594;
  t1863 = t1856 + t1860;
  t2059 = -0.03315*t2044;
  t2062 = -0.19074*t2049;
  t2064 = 0. + t2059 + t2062;
  t1874 = t1690*t1576;
  t1878 = t1714*t1594;
  t1882 = t1874 + t1878;
  t1780 = -1.*t1714*t1467;
  t1784 = t1690*t1492;
  t1793 = t1780 + t1784;
  t1802 = t1690*t1467;
  t1803 = t1714*t1492;
  t1819 = t1802 + t1803;
  t1847 = t1728*t1664;
  t1849 = t1741*t1680;
  t1900 = -1.*t1728*t1467;
  t1904 = -1.*t1741*t1492;
  t1958 = -1.*t1728*t1576;
  t1975 = -1.*t1741*t1594;
  t2011 = t1728*t1467;
  t2016 = t1741*t1492;
  t2055 = -1.*t2054*t1921;
  t2066 = -1.*t2064*t1937;
  t2244 = t2049*t1921;
  t2256 = t2033*t1937;
  t2258 = t2244 + t2256;
  t2342 = Cos(var1[11]);
  t2359 = -1.*t2342;
  t2360 = 1. + t2359;
  t2378 = Sin(var1[11]);
  t2266 = t2033*t1921;
  t2267 = -1.*t2049*t1937;
  t2271 = t2266 + t2267;
  t2071 = t2054*t1863;
  t2085 = t2064*t1882;
  t2372 = -0.01315*t2360;
  t2381 = -0.62554*t2378;
  t2382 = 0. + t2372 + t2381;
  t2192 = t2049*t1863;
  t2193 = t2033*t1882;
  t2195 = t2192 + t2193;
  t2386 = -0.62554*t2360;
  t2390 = 0.01315*t2378;
  t2392 = 0. + t2386 + t2390;
  t2202 = t2033*t1863;
  t2204 = -1.*t2049*t1882;
  t2207 = t2202 + t2204;
  t2105 = t2049*t1793;
  t2108 = t2033*t1819;
  t2118 = t2105 + t2108;
  t2121 = t2033*t1793;
  t2123 = -1.*t2049*t1819;
  t2129 = t2121 + t2123;
  t2159 = t2054*t1921;
  t2161 = t2064*t1937;
  t2224 = -1.*t2054*t1793;
  t2226 = -1.*t2064*t1819;
  t2286 = -1.*t2054*t1863;
  t2287 = -1.*t2064*t1882;
  t2324 = t2054*t1793;
  t2330 = t2064*t1819;
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
  p_output1[19]=t18;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t39*var1[2];
  p_output1[25]=-1.*t75*var1[2];
  p_output1[26]=t39*var1[0] + t75*var1[1];
  p_output1[27]=-1.*t75;
  p_output1[28]=t39;
  p_output1[29]=0;
  p_output1[30]=t170 + t177;
  p_output1[31]=t185 + t189;
  p_output1[32]=t199 + t200;
  p_output1[33]=t246;
  p_output1[34]=t251;
  p_output1[35]=t275;
  p_output1[36]=t170 + t177 - 0.135*t305 + 0.07996*t341;
  p_output1[37]=t185 + t189 - 0.135*t361 + 0.07996*t395;
  p_output1[38]=t199 + t200 - 0.135*t169*t279 + 0.07996*t169*t294;
  p_output1[39]=0. + t246;
  p_output1[40]=0. + t251;
  p_output1[41]=0. + t275;
  p_output1[42]=0.135*t169*t39 + 0.08055*t605 + (0. + t623 + t629 + t631)*t684 + t578*(0. + t536 + t557 + var1[1]);
  p_output1[43]=0.135*t169*t75 + t578*(0. + t18 + t741 + t754) + 0.08055*t778 + t817*(0. + t791 + t796 + var1[2]);
  p_output1[44]=-0.135*t176 + 0.08055*t874 + t817*(0. + t903 + t910 + t920) + t684*(0. + t951 + t956 + var1[0]);
  p_output1[45]=0. + t812 + t814;
  p_output1[46]=0. + t656 + t682;
  p_output1[47]=0. + t570 + t576;
  p_output1[48]=-0.01004*t1160 - 1.*t1083*(0. + t1035 + t1057 + t623 + t629 + t631) + 0.08055*t817 - 1.*t1153*(0. + t1091 + t1096 + t536 + t557 + var1[1]);
  p_output1[49]=-0.01004*t1268 + 0.08055*t684 - 1.*t1153*(0. + t1230 + t1240 + t18 + t741 + t754) - 1.*t1215*(0. + t1191 + t1195 + t791 + t796 + var1[2]);
  p_output1[50]=-0.01004*t1327 + 0.08055*t578 - 1.*t1215*(0. + t1281 + t1285 + t903 + t910 + t920) - 1.*t1083*(0. + t1306 + t1311 + t951 + t956 + var1[0]);
  p_output1[51]=t1352;
  p_output1[52]=t1363;
  p_output1[53]=t1392;
  p_output1[54]=-0.13004*t1467 + 0.08055*t1492 - 1.*t1083*(0. + t1035 + t1057 + t1417 + t1431 + t623 + t629 + t631) - 1.*t1153*(0. + t1091 + t1096 + t1437 + t1440 + t536 + t557 + var1[1]);
  p_output1[55]=-0.13004*t1576 + 0.08055*t1594 - 1.*t1153*(0. + t1230 + t1240 + t1554 + t1564 + t18 + t741 + t754) - 1.*t1215*(0. + t1191 + t1195 + t1529 + t1534 + t791 + t796 + var1[2]);
  p_output1[56]=-0.13004*t1664 + 0.08055*t1680 - 1.*t1215*(0. + t1281 + t1285 + t1634 + t1635 + t903 + t910 + t920) - 1.*t1083*(0. + t1306 + t1311 + t1614 + t1624 + t951 + t956 + var1[0]);
  p_output1[57]=t1352;
  p_output1[58]=t1363;
  p_output1[59]=t1392;
  p_output1[60]=0.03315*t1793 - 0.19074*t1819 - 1.*t1083*(0. + t1035 + t1057 + t1417 + t1431 + t1731 + t1749 + t623 + t629 + t631) - 1.*t1153*(0. + t1091 + t1096 + t1437 + t1440 + t1766 + t1770 + t536 + t557 + var1[1]);
  p_output1[61]=0.03315*t1863 - 0.19074*t1882 - 1.*t1153*(0. + t1230 + t1240 + t1554 + t1564 + t18 + t1900 + t1904 + t741 + t754) - 1.*t1215*(0. + t1191 + t1195 + t1529 + t1534 + t1847 + t1849 + t791 + t796 + var1[2]);
  p_output1[62]=0.03315*t1921 - 0.19074*t1937 - 1.*t1215*(0. + t1281 + t1285 + t1634 + t1635 + t1958 + t1975 + t903 + t910 + t920) - 1.*t1083*(0. + t1306 + t1311 + t1614 + t1624 + t2011 + t2016 + t951 + t956 + var1[0]);
  p_output1[63]=t1352;
  p_output1[64]=t1363;
  p_output1[65]=t1392;
  p_output1[66]=-0.62554*t2118 + 0.01315*t2129 - 1.*t1083*(0. + t1035 + t1057 + t1417 + t1431 + t1731 + t1749 + t2055 + t2066 + t623 + t629 + t631) - 1.*t1153*(0. + t1091 + t1096 + t1437 + t1440 + t1766 + t1770 + t2071 + t2085 + t536 + t557 + var1[1]);
  p_output1[67]=-0.62554*t2195 + 0.01315*t2207 - 1.*t1153*(0. + t1230 + t1240 + t1554 + t1564 + t18 + t1900 + t1904 + t2224 + t2226 + t741 + t754) - 1.*t1215*(0. + t1191 + t1195 + t1529 + t1534 + t1847 + t1849 + t2159 + t2161 + t791 + t796 + var1[2]);
  p_output1[68]=-0.62554*t2258 + 0.01315*t2271 - 1.*t1215*(0. + t1281 + t1285 + t1634 + t1635 + t1958 + t1975 + t2286 + t2287 + t903 + t910 + t920) - 1.*t1083*(0. + t1306 + t1311 + t1614 + t1624 + t2011 + t2016 + t2324 + t2330 + t951 + t956 + var1[0]);
  p_output1[69]=t1352;
  p_output1[70]=t1363;
  p_output1[71]=t1392;
  p_output1[72]=0.05315*(t2129*t2342 - 1.*t2118*t2378) - 1.03354*(t2118*t2342 + t2129*t2378) - 1.*t1083*(0. + t1035 + t1057 + t1417 + t1431 + t1731 + t1749 + t2055 + t2066 - 1.*t2258*t2382 - 1.*t2271*t2392 + t623 + t629 + t631) - 1.*t1153*(0. + t1091 + t1096 + t1437 + t1440 + t1766 + t1770 + t2071 + t2085 + t2195*t2382 + t2207*t2392 + t536 + t557 + var1[1]);
  p_output1[73]=0.05315*(t2207*t2342 - 1.*t2195*t2378) - 1.03354*(t2195*t2342 + t2207*t2378) - 1.*t1153*(0. + t1230 + t1240 + t1554 + t1564 + t18 + t1900 + t1904 + t2224 + t2226 - 1.*t2118*t2382 - 1.*t2129*t2392 + t741 + t754) - 1.*t1215*(0. + t1191 + t1195 + t1529 + t1534 + t1847 + t1849 + t2159 + t2161 + t2258*t2382 + t2271*t2392 + t791 + t796 + var1[2]);
  p_output1[74]=0.05315*(t2271*t2342 - 1.*t2258*t2378) - 1.03354*(t2258*t2342 + t2271*t2378) - 1.*t1215*(0. + t1281 + t1285 + t1634 + t1635 + t1958 + t1975 + t2286 + t2287 - 1.*t2195*t2382 - 1.*t2207*t2392 + t903 + t910 + t920) - 1.*t1083*(0. + t1306 + t1311 + t1614 + t1624 + t2011 + t2016 + t2324 + t2330 + t2118*t2382 + t2129*t2392 + t951 + t956 + var1[0]);
  p_output1[75]=t1352;
  p_output1[76]=t1363;
  p_output1[77]=t1392;
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

#include "Js_LeftToe_mex.hh"

namespace SymExpression
{

void Js_LeftToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
