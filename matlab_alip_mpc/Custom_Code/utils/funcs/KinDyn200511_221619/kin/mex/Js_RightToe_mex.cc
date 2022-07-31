/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:52 GMT-04:00
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
  double t53;
  double t76;
  double t123;
  double t132;
  double t130;
  double t141;
  double t254;
  double t258;
  double t174;
  double t181;
  double t200;
  double t218;
  double t243;
  double t247;
  double t253;
  double t255;
  double t264;
  double t266;
  double t276;
  double t280;
  double t285;
  double t506;
  double t488;
  double t334;
  double t350;
  double t360;
  double t559;
  double t572;
  double t363;
  double t372;
  double t435;
  double t577;
  double t589;
  double t591;
  double t619;
  double t640;
  double t644;
  double t548;
  double t550;
  double t556;
  double t49;
  double t849;
  double t853;
  double t855;
  double t742;
  double t753;
  double t754;
  double t497;
  double t519;
  double t526;
  double t702;
  double t705;
  double t1016;
  double t1045;
  double t719;
  double t1071;
  double t1083;
  double t913;
  double t926;
  double t927;
  double t875;
  double t878;
  double t881;
  double t1084;
  double t1095;
  double t1103;
  double t602;
  double t677;
  double t1117;
  double t1119;
  double t1124;
  double t817;
  double t829;
  double t1197;
  double t1200;
  double t1205;
  double t787;
  double t793;
  double t972;
  double t974;
  double t1157;
  double t1159;
  double t1174;
  double t1266;
  double t1275;
  double t1290;
  double t949;
  double t950;
  double t960;
  double t1116;
  double t1129;
  double t1536;
  double t1542;
  double t1543;
  double t1554;
  double t1388;
  double t1407;
  double t1411;
  double t1033;
  double t1047;
  double t1048;
  double t1208;
  double t1215;
  double t1544;
  double t1566;
  double t1572;
  double t1577;
  double t1578;
  double t1588;
  double t1332;
  double t1338;
  double t1347;
  double t1248;
  double t1250;
  double t1299;
  double t1306;
  double t1421;
  double t1426;
  double t1442;
  double t1447;
  double t1470;
  double t1478;
  double t1490;
  double t1491;
  double t1506;
  double t1507;
  double t1514;
  double t1518;
  double t1526;
  double t1576;
  double t1590;
  double t1727;
  double t1734;
  double t1736;
  double t1836;
  double t1848;
  double t1851;
  double t1863;
  double t1739;
  double t1742;
  double t1755;
  double t1602;
  double t1605;
  double t1606;
  double t1608;
  double t1612;
  double t1614;
  double t1624;
  double t1627;
  double t1855;
  double t1864;
  double t1871;
  double t1696;
  double t1698;
  double t1705;
  double t1889;
  double t1894;
  double t1900;
  double t1714;
  double t1715;
  double t1721;
  double t1642;
  double t1648;
  double t1680;
  double t1691;
  double t1764;
  double t1767;
  double t1777;
  double t1783;
  double t1884;
  double t1903;
  double t2057;
  double t2061;
  double t2062;
  double t2195;
  double t2196;
  double t2198;
  double t2221;
  double t2085;
  double t2088;
  double t2094;
  double t1914;
  double t1915;
  double t1922;
  double t1931;
  double t1933;
  double t1942;
  double t1947;
  double t1956;
  double t2217;
  double t2229;
  double t2233;
  double t2016;
  double t2020;
  double t2033;
  double t2242;
  double t2243;
  double t2265;
  double t2040;
  double t2041;
  double t2043;
  double t1976;
  double t1986;
  double t2003;
  double t2006;
  double t2112;
  double t2118;
  double t2152;
  double t2167;
  double t2238;
  double t2270;
  double t2433;
  double t2435;
  double t2436;
  double t2510;
  double t2520;
  double t2529;
  double t2535;
  double t2444;
  double t2446;
  double t2447;
  double t2291;
  double t2294;
  double t2299;
  double t2306;
  double t2311;
  double t2318;
  double t2323;
  double t2326;
  double t2533;
  double t2537;
  double t2540;
  double t2405;
  double t2409;
  double t2410;
  double t2555;
  double t2557;
  double t2558;
  double t2420;
  double t2421;
  double t2424;
  double t2359;
  double t2362;
  double t2381;
  double t2382;
  double t2449;
  double t2456;
  double t2465;
  double t2468;
  t53 = Cos(var1[3]);
  t76 = Sin(var1[3]);
  t123 = Cos(var1[4]);
  t132 = Sin(var1[4]);
  t130 = -1.*var1[2]*t123*t76;
  t141 = -1.*var1[1]*t132;
  t254 = Cos(var1[5]);
  t258 = Sin(var1[5]);
  t174 = var1[2]*t53*t123;
  t181 = var1[0]*t132;
  t200 = -1.*var1[1]*t53*t123;
  t218 = var1[0]*t123*t76;
  t243 = t53*t123;
  t247 = t123*t76;
  t253 = -1.*t132;
  t255 = t53*t254*t132;
  t264 = t76*t258;
  t266 = t255 + t264;
  t276 = -1.*t254*t76;
  t280 = t53*t132*t258;
  t285 = t276 + t280;
  t506 = Cos(var1[13]);
  t488 = Sin(var1[13]);
  t334 = t254*t76*t132;
  t350 = -1.*t53*t258;
  t360 = t334 + t350;
  t559 = -1.*t506;
  t572 = 1. + t559;
  t363 = t53*t254;
  t372 = t76*t132*t258;
  t435 = t363 + t372;
  t577 = 0.07996*t572;
  t589 = 0.135*t488;
  t591 = 0. + t577 + t589;
  t619 = -0.135*t572;
  t640 = 0.07996*t488;
  t644 = 0. + t619 + t640;
  t548 = t506*t123*t254;
  t550 = -1.*t123*t488*t258;
  t556 = t548 + t550;
  t49 = -1.*var1[0];
  t849 = t506*t266;
  t853 = -1.*t488*t285;
  t855 = t849 + t853;
  t742 = t506*t360;
  t753 = -1.*t488*t435;
  t754 = t742 + t753;
  t497 = t488*t266;
  t519 = t506*t285;
  t526 = t497 + t519;
  t702 = -1.*var1[2];
  t705 = -1.*t123*t254*t591;
  t1016 = Cos(var1[14]);
  t1045 = Sin(var1[14]);
  t719 = -1.*t123*t644*t258;
  t1071 = -1.*t1016;
  t1083 = 1. + t1071;
  t913 = t123*t254*t488;
  t926 = t506*t123*t258;
  t927 = t913 + t926;
  t875 = t488*t360;
  t878 = t506*t435;
  t881 = t875 + t878;
  t1084 = -0.08055*t1083;
  t1095 = -0.135*t1045;
  t1103 = 0. + t1084 + t1095;
  t602 = t591*t360;
  t677 = t644*t435;
  t1117 = -0.135*t1083;
  t1119 = 0.08055*t1045;
  t1124 = 0. + t1117 + t1119;
  t817 = t123*t254*t591;
  t829 = t123*t644*t258;
  t1197 = t1045*t132;
  t1200 = t1016*t927;
  t1205 = t1197 + t1200;
  t787 = -1.*t591*t266;
  t793 = -1.*t644*t285;
  t972 = t591*t266;
  t974 = t644*t285;
  t1157 = -1.*t123*t1045*t76;
  t1159 = t1016*t881;
  t1174 = t1157 + t1159;
  t1266 = -1.*t53*t123*t1045;
  t1275 = t1016*t526;
  t1290 = t1266 + t1275;
  t949 = -1.*var1[1];
  t950 = -1.*t591*t360;
  t960 = -1.*t644*t435;
  t1116 = t1103*t132;
  t1129 = -1.*t1124*t927;
  t1536 = Cos(var1[15]);
  t1542 = -1.*t1536;
  t1543 = 1. + t1542;
  t1554 = Sin(var1[15]);
  t1388 = -1.*t1016*t132;
  t1407 = t1045*t927;
  t1411 = t1388 + t1407;
  t1033 = t1016*t53*t123;
  t1047 = t1045*t526;
  t1048 = t1033 + t1047;
  t1208 = t123*t1103*t76;
  t1215 = t1124*t881;
  t1544 = -0.01004*t1543;
  t1566 = 0.08055*t1554;
  t1572 = 0. + t1544 + t1566;
  t1577 = -0.08055*t1543;
  t1578 = -0.01004*t1554;
  t1588 = 0. + t1577 + t1578;
  t1332 = t1016*t123*t76;
  t1338 = t1045*t881;
  t1347 = t1332 + t1338;
  t1248 = -1.*t1103*t132;
  t1250 = t1124*t927;
  t1299 = -1.*t53*t123*t1103;
  t1306 = -1.*t1124*t526;
  t1421 = t53*t123*t1103;
  t1426 = t1124*t526;
  t1442 = -1.*t123*t1103*t76;
  t1447 = -1.*t1124*t881;
  t1470 = t53*t123*t1045;
  t1478 = -1.*t1016*t526;
  t1490 = 0. + t1470 + t1478;
  t1491 = t123*t1045*t76;
  t1506 = -1.*t1016*t881;
  t1507 = 0. + t1491 + t1506;
  t1514 = -1.*t1045*t132;
  t1518 = -1.*t1016*t927;
  t1526 = 0. + t1514 + t1518;
  t1576 = -1.*t1572*t556;
  t1590 = -1.*t1588*t1411;
  t1727 = t1554*t556;
  t1734 = t1536*t1411;
  t1736 = t1727 + t1734;
  t1836 = Cos(var1[16]);
  t1848 = -1.*t1836;
  t1851 = 1. + t1848;
  t1863 = Sin(var1[16]);
  t1739 = t1536*t556;
  t1742 = -1.*t1554*t1411;
  t1755 = t1739 + t1742;
  t1602 = t1554*t855;
  t1605 = t1536*t1048;
  t1606 = t1602 + t1605;
  t1608 = t1536*t855;
  t1612 = -1.*t1554*t1048;
  t1614 = t1608 + t1612;
  t1624 = t1572*t754;
  t1627 = t1588*t1347;
  t1855 = -0.08055*t1851;
  t1864 = -0.13004*t1863;
  t1871 = 0. + t1855 + t1864;
  t1696 = t1554*t754;
  t1698 = t1536*t1347;
  t1705 = t1696 + t1698;
  t1889 = -0.13004*t1851;
  t1894 = 0.08055*t1863;
  t1900 = 0. + t1889 + t1894;
  t1714 = t1536*t754;
  t1715 = -1.*t1554*t1347;
  t1721 = t1714 + t1715;
  t1642 = t1572*t556;
  t1648 = t1588*t1411;
  t1680 = -1.*t1572*t855;
  t1691 = -1.*t1588*t1048;
  t1764 = t1572*t855;
  t1767 = t1588*t1048;
  t1777 = -1.*t1572*t754;
  t1783 = -1.*t1588*t1347;
  t1884 = -1.*t1871*t1736;
  t1903 = -1.*t1900*t1755;
  t2057 = -1.*t1863*t1736;
  t2061 = t1836*t1755;
  t2062 = t2057 + t2061;
  t2195 = Cos(var1[17]);
  t2196 = -1.*t2195;
  t2198 = 1. + t2196;
  t2221 = Sin(var1[17]);
  t2085 = t1836*t1736;
  t2088 = t1863*t1755;
  t2094 = t2085 + t2088;
  t1914 = -1.*t1863*t1606;
  t1915 = t1836*t1614;
  t1922 = t1914 + t1915;
  t1931 = t1836*t1606;
  t1933 = t1863*t1614;
  t1942 = t1931 + t1933;
  t1947 = t1871*t1705;
  t1956 = t1900*t1721;
  t2217 = -0.19074*t2198;
  t2229 = 0.03315*t2221;
  t2233 = 0. + t2217 + t2229;
  t2016 = -1.*t1863*t1705;
  t2020 = t1836*t1721;
  t2033 = t2016 + t2020;
  t2242 = -0.03315*t2198;
  t2243 = -0.19074*t2221;
  t2265 = 0. + t2242 + t2243;
  t2040 = t1836*t1705;
  t2041 = t1863*t1721;
  t2043 = t2040 + t2041;
  t1976 = t1871*t1736;
  t1986 = t1900*t1755;
  t2003 = -1.*t1871*t1606;
  t2006 = -1.*t1900*t1614;
  t2112 = t1871*t1606;
  t2118 = t1900*t1614;
  t2152 = -1.*t1871*t1705;
  t2167 = -1.*t1900*t1721;
  t2238 = -1.*t2233*t2062;
  t2270 = -1.*t2265*t2094;
  t2433 = t2221*t2062;
  t2435 = t2195*t2094;
  t2436 = t2433 + t2435;
  t2510 = Cos(var1[18]);
  t2520 = -1.*t2510;
  t2529 = 1. + t2520;
  t2535 = Sin(var1[18]);
  t2444 = t2195*t2062;
  t2446 = -1.*t2221*t2094;
  t2447 = t2444 + t2446;
  t2291 = t2221*t1922;
  t2294 = t2195*t1942;
  t2299 = t2291 + t2294;
  t2306 = t2195*t1922;
  t2311 = -1.*t2221*t1942;
  t2318 = t2306 + t2311;
  t2323 = t2233*t2033;
  t2326 = t2265*t2043;
  t2533 = -0.01315*t2529;
  t2537 = -0.62554*t2535;
  t2540 = 0. + t2533 + t2537;
  t2405 = t2221*t2033;
  t2409 = t2195*t2043;
  t2410 = t2405 + t2409;
  t2555 = -0.62554*t2529;
  t2557 = 0.01315*t2535;
  t2558 = 0. + t2555 + t2557;
  t2420 = t2195*t2033;
  t2421 = -1.*t2221*t2043;
  t2424 = t2420 + t2421;
  t2359 = t2233*t2062;
  t2362 = t2265*t2094;
  t2381 = -1.*t2233*t1922;
  t2382 = -1.*t2265*t1942;
  t2449 = t2233*t1922;
  t2456 = t2265*t1942;
  t2465 = -1.*t2233*t2033;
  t2468 = -1.*t2265*t2043;
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
  p_output1[19]=t49;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t53*var1[2];
  p_output1[25]=-1.*t76*var1[2];
  p_output1[26]=t53*var1[0] + t76*var1[1];
  p_output1[27]=-1.*t76;
  p_output1[28]=t53;
  p_output1[29]=0;
  p_output1[30]=t130 + t141;
  p_output1[31]=t174 + t181;
  p_output1[32]=t200 + t218;
  p_output1[33]=t243;
  p_output1[34]=t247;
  p_output1[35]=t253;
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
  p_output1[78]=t130 + t141 + 0.135*t266 + 0.07996*t285;
  p_output1[79]=t174 + t181 + 0.135*t360 + 0.07996*t435;
  p_output1[80]=t200 + t218 + 0.135*t123*t254 + 0.07996*t123*t258;
  p_output1[81]=0. + t243;
  p_output1[82]=0. + t247;
  p_output1[83]=0. + t253;
  p_output1[84]=0.08055*t526 - 0.135*t123*t53 + (0. + t702 + t705 + t719)*t754 + t556*(0. + t602 + t677 + var1[1]);
  p_output1[85]=-0.135*t123*t76 + t556*(0. + t49 + t787 + t793) + 0.08055*t881 + t855*(0. + t817 + t829 + var1[2]);
  p_output1[86]=0.135*t132 + 0.08055*t927 + t855*(0. + t949 + t950 + t960) + t754*(0. + t972 + t974 + var1[0]);
  p_output1[87]=0. + t849 + t853;
  p_output1[88]=0. + t742 + t753;
  p_output1[89]=0. + t548 + t550;
  p_output1[90]=-0.01004*t1048 - 1.*t1174*(0. + t1116 + t1129 + t702 + t705 + t719) + 0.08055*t855 - 1.*t1205*(0. + t1208 + t1215 + t602 + t677 + var1[1]);
  p_output1[91]=-0.01004*t1347 + 0.08055*t754 - 1.*t1205*(0. + t1299 + t1306 + t49 + t787 + t793) - 1.*t1290*(0. + t1248 + t1250 + t817 + t829 + var1[2]);
  p_output1[92]=-0.01004*t1411 + 0.08055*t556 - 1.*t1290*(0. + t1442 + t1447 + t949 + t950 + t960) - 1.*t1174*(0. + t1421 + t1426 + t972 + t974 + var1[0]);
  p_output1[93]=t1490;
  p_output1[94]=t1507;
  p_output1[95]=t1526;
  p_output1[96]=-0.13004*t1606 + 0.08055*t1614 - 1.*t1174*(0. + t1116 + t1129 + t1576 + t1590 + t702 + t705 + t719) - 1.*t1205*(0. + t1208 + t1215 + t1624 + t1627 + t602 + t677 + var1[1]);
  p_output1[97]=-0.13004*t1705 + 0.08055*t1721 - 1.*t1205*(0. + t1299 + t1306 + t1680 + t1691 + t49 + t787 + t793) - 1.*t1290*(0. + t1248 + t1250 + t1642 + t1648 + t817 + t829 + var1[2]);
  p_output1[98]=-0.13004*t1736 + 0.08055*t1755 - 1.*t1290*(0. + t1442 + t1447 + t1777 + t1783 + t949 + t950 + t960) - 1.*t1174*(0. + t1421 + t1426 + t1764 + t1767 + t972 + t974 + var1[0]);
  p_output1[99]=t1490;
  p_output1[100]=t1507;
  p_output1[101]=t1526;
  p_output1[102]=0.03315*t1922 - 0.19074*t1942 - 1.*t1174*(0. + t1116 + t1129 + t1576 + t1590 + t1884 + t1903 + t702 + t705 + t719) - 1.*t1205*(0. + t1208 + t1215 + t1624 + t1627 + t1947 + t1956 + t602 + t677 + var1[1]);
  p_output1[103]=0.03315*t2033 - 0.19074*t2043 - 1.*t1205*(0. + t1299 + t1306 + t1680 + t1691 + t2003 + t2006 + t49 + t787 + t793) - 1.*t1290*(0. + t1248 + t1250 + t1642 + t1648 + t1976 + t1986 + t817 + t829 + var1[2]);
  p_output1[104]=0.03315*t2062 - 0.19074*t2094 - 1.*t1290*(0. + t1442 + t1447 + t1777 + t1783 + t2152 + t2167 + t949 + t950 + t960) - 1.*t1174*(0. + t1421 + t1426 + t1764 + t1767 + t2112 + t2118 + t972 + t974 + var1[0]);
  p_output1[105]=t1490;
  p_output1[106]=t1507;
  p_output1[107]=t1526;
  p_output1[108]=-0.62554*t2299 + 0.01315*t2318 - 1.*t1174*(0. + t1116 + t1129 + t1576 + t1590 + t1884 + t1903 + t2238 + t2270 + t702 + t705 + t719) - 1.*t1205*(0. + t1208 + t1215 + t1624 + t1627 + t1947 + t1956 + t2323 + t2326 + t602 + t677 + var1[1]);
  p_output1[109]=-0.62554*t2410 + 0.01315*t2424 - 1.*t1205*(0. + t1299 + t1306 + t1680 + t1691 + t2003 + t2006 + t2381 + t2382 + t49 + t787 + t793) - 1.*t1290*(0. + t1248 + t1250 + t1642 + t1648 + t1976 + t1986 + t2359 + t2362 + t817 + t829 + var1[2]);
  p_output1[110]=-0.62554*t2436 + 0.01315*t2447 - 1.*t1290*(0. + t1442 + t1447 + t1777 + t1783 + t2152 + t2167 + t2465 + t2468 + t949 + t950 + t960) - 1.*t1174*(0. + t1421 + t1426 + t1764 + t1767 + t2112 + t2118 + t2449 + t2456 + t972 + t974 + var1[0]);
  p_output1[111]=t1490;
  p_output1[112]=t1507;
  p_output1[113]=t1526;
  p_output1[114]=0.05315*(t2318*t2510 - 1.*t2299*t2535) - 1.03354*(t2299*t2510 + t2318*t2535) - 1.*t1174*(0. + t1116 + t1129 + t1576 + t1590 + t1884 + t1903 + t2238 + t2270 - 1.*t2436*t2540 - 1.*t2447*t2558 + t702 + t705 + t719) - 1.*t1205*(0. + t1208 + t1215 + t1624 + t1627 + t1947 + t1956 + t2323 + t2326 + t2410*t2540 + t2424*t2558 + t602 + t677 + var1[1]);
  p_output1[115]=0.05315*(t2424*t2510 - 1.*t2410*t2535) - 1.03354*(t2410*t2510 + t2424*t2535) - 1.*t1205*(0. + t1299 + t1306 + t1680 + t1691 + t2003 + t2006 + t2381 + t2382 - 1.*t2299*t2540 - 1.*t2318*t2558 + t49 + t787 + t793) - 1.*t1290*(0. + t1248 + t1250 + t1642 + t1648 + t1976 + t1986 + t2359 + t2362 + t2436*t2540 + t2447*t2558 + t817 + t829 + var1[2]);
  p_output1[116]=0.05315*(t2447*t2510 - 1.*t2436*t2535) - 1.03354*(t2436*t2510 + t2447*t2535) - 1.*t1290*(0. + t1442 + t1447 + t1777 + t1783 + t2152 + t2167 + t2465 + t2468 - 1.*t2410*t2540 - 1.*t2424*t2558 + t949 + t950 + t960) - 1.*t1174*(0. + t1421 + t1426 + t1764 + t1767 + t2112 + t2118 + t2449 + t2456 + t2299*t2540 + t2318*t2558 + t972 + t974 + var1[0]);
  p_output1[117]=t1490;
  p_output1[118]=t1507;
  p_output1[119]=t1526;
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

#include "Js_RightToe_mex.hh"

namespace SymExpression
{

void Js_RightToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
