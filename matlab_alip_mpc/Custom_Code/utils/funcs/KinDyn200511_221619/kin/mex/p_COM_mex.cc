/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:35:14 GMT-04:00
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
  double t3;
  double t18;
  double t21;
  double t36;
  double t43;
  double t44;
  double t74;
  double t76;
  double t96;
  double t110;
  double t122;
  double t130;
  double t164;
  double t260;
  double t261;
  double t263;
  double t133;
  double t175;
  double t196;
  double t212;
  double t215;
  double t233;
  double t255;
  double t266;
  double t366;
  double t372;
  double t378;
  double t381;
  double t273;
  double t288;
  double t292;
  double t321;
  double t337;
  double t343;
  double t380;
  double t390;
  double t391;
  double t397;
  double t404;
  double t405;
  double t408;
  double t409;
  double t416;
  double t422;
  double t426;
  double t446;
  double t452;
  double t455;
  double t472;
  double t431;
  double t432;
  double t436;
  double t467;
  double t473;
  double t475;
  double t476;
  double t484;
  double t488;
  double t494;
  double t495;
  double t498;
  double t499;
  double t502;
  double t527;
  double t528;
  double t530;
  double t538;
  double t507;
  double t510;
  double t511;
  double t536;
  double t539;
  double t540;
  double t541;
  double t542;
  double t544;
  double t545;
  double t547;
  double t551;
  double t553;
  double t561;
  double t585;
  double t587;
  double t588;
  double t593;
  double t563;
  double t568;
  double t570;
  double t591;
  double t594;
  double t598;
  double t604;
  double t605;
  double t607;
  double t615;
  double t622;
  double t623;
  double t625;
  double t626;
  double t679;
  double t681;
  double t684;
  double t691;
  double t630;
  double t638;
  double t649;
  double t686;
  double t694;
  double t695;
  double t698;
  double t704;
  double t706;
  double t709;
  double t713;
  double t716;
  double t717;
  double t719;
  double t746;
  double t747;
  double t749;
  double t754;
  double t725;
  double t735;
  double t736;
  double t107;
  double t817;
  double t819;
  double t835;
  double t837;
  double t836;
  double t842;
  double t843;
  double t844;
  double t848;
  double t850;
  double t856;
  double t859;
  double t872;
  double t876;
  double t881;
  double t861;
  double t864;
  double t869;
  double t896;
  double t897;
  double t900;
  double t902;
  double t901;
  double t910;
  double t911;
  double t916;
  double t917;
  double t923;
  double t925;
  double t928;
  double t931;
  double t934;
  double t935;
  double t944;
  double t945;
  double t946;
  double t961;
  double t962;
  double t969;
  double t978;
  double t974;
  double t983;
  double t987;
  double t989;
  double t990;
  double t991;
  double t998;
  double t999;
  double t1001;
  double t1003;
  double t1005;
  double t1025;
  double t1029;
  double t1030;
  double t1034;
  double t1009;
  double t1012;
  double t1015;
  double t1031;
  double t1035;
  double t1036;
  double t1037;
  double t1041;
  double t1043;
  double t1046;
  double t1049;
  double t1051;
  double t1053;
  double t1055;
  double t1087;
  double t1091;
  double t1096;
  double t1098;
  double t1062;
  double t1063;
  double t1064;
  double t1097;
  double t1101;
  double t1102;
  double t1107;
  double t1110;
  double t1112;
  double t1116;
  double t1118;
  double t1119;
  double t1122;
  double t1123;
  double t1153;
  double t1154;
  double t1155;
  double t1161;
  double t1132;
  double t1134;
  double t1135;
  double t1160;
  double t1167;
  double t1170;
  double t1171;
  double t1174;
  double t1176;
  double t1177;
  double t1178;
  double t1184;
  double t1187;
  double t1190;
  double t1210;
  double t1212;
  double t1213;
  double t1226;
  double t1197;
  double t1198;
  double t1201;
  double t1295;
  double t1298;
  double t1299;
  double t1314;
  double t1318;
  double t1322;
  double t1312;
  double t1325;
  double t1330;
  double t1331;
  double t1332;
  double t1339;
  double t1340;
  double t1341;
  double t1371;
  double t1373;
  double t1380;
  double t1381;
  double t1383;
  double t1393;
  double t1397;
  double t1405;
  double t1422;
  double t1425;
  double t1430;
  double t1435;
  double t1436;
  double t1439;
  double t1443;
  double t1446;
  double t1459;
  double t1463;
  double t1469;
  double t1473;
  double t1477;
  double t1481;
  double t1482;
  double t1487;
  double t1495;
  double t1499;
  double t1501;
  double t1503;
  double t1506;
  double t1514;
  double t1515;
  double t1517;
  double t1528;
  double t1531;
  double t753;
  double t755;
  double t758;
  double t1535;
  double t1536;
  double t1541;
  double t766;
  double t768;
  double t770;
  double t1545;
  double t1546;
  double t1548;
  double t1309;
  double t1594;
  double t1595;
  double t1613;
  double t1616;
  double t1619;
  double t1598;
  double t1601;
  double t1604;
  double t1630;
  double t1632;
  double t1633;
  double t1640;
  double t1641;
  double t1650;
  double t1651;
  double t1655;
  double t1666;
  double t1671;
  double t1672;
  double t1674;
  double t1675;
  double t1683;
  double t1690;
  double t1694;
  double t1708;
  double t1711;
  double t1712;
  double t1714;
  double t1715;
  double t1717;
  double t1722;
  double t1727;
  double t1735;
  double t1737;
  double t1740;
  double t1741;
  double t1748;
  double t1761;
  double t1766;
  double t1769;
  double t1789;
  double t1791;
  double t1219;
  double t1230;
  double t1231;
  double t1792;
  double t1793;
  double t1794;
  double t1238;
  double t1241;
  double t1242;
  double t1803;
  double t1805;
  double t1807;
  double t1879;
  double t1885;
  double t1886;
  double t1889;
  double t1894;
  double t1900;
  double t1901;
  double t1902;
  double t1914;
  double t1917;
  double t1921;
  double t1923;
  double t1936;
  double t1940;
  double t1941;
  double t1942;
  double t1952;
  double t1959;
  double t1961;
  double t1966;
  double t1967;
  double t1976;
  double t1978;
  double t1979;
  double t1996;
  double t2002;
  double t2005;
  double t2007;
  double t2009;
  double t2014;
  double t2017;
  double t2021;
  double t2028;
  double t2031;
  double t2036;
  double t2038;
  double t2039;
  double t2041;
  double t2043;
  double t2046;
  double t2064;
  double t2065;
  double t2067;
  double t2069;
  double t2073;
  double t2082;
  double t2083;
  double t2087;
  double t1883;
  double t2154;
  double t2155;
  double t2170;
  double t2172;
  double t2176;
  double t2156;
  double t2158;
  double t2164;
  double t2196;
  double t2197;
  double t2202;
  double t2203;
  double t2206;
  double t2212;
  double t2213;
  double t2221;
  double t2231;
  double t2232;
  double t2234;
  double t2236;
  double t2238;
  double t2247;
  double t2252;
  double t2254;
  double t2267;
  double t2270;
  double t2271;
  double t2273;
  double t2275;
  double t2281;
  double t2282;
  double t2284;
  double t2300;
  double t2303;
  double t2311;
  double t2314;
  double t2317;
  double t2321;
  double t2323;
  double t2326;
  double t2346;
  double t2348;
  double t2360;
  double t2362;
  double t2364;
  double t2372;
  double t2374;
  double t2377;
  t3 = Cos(var1[3]);
  t18 = Cos(var1[4]);
  t21 = Cos(var1[5]);
  t36 = Sin(var1[4]);
  t43 = t3*t21*t36;
  t44 = Sin(var1[3]);
  t74 = Sin(var1[5]);
  t76 = t44*t74;
  t96 = t43 + t76;
  t110 = Cos(var1[13]);
  t122 = -1.*t110;
  t130 = 1. + t122;
  t164 = Sin(var1[13]);
  t260 = -1.*t21*t44;
  t261 = t3*t36*t74;
  t263 = t260 + t261;
  t133 = 0.07996*t130;
  t175 = 0.135*t164;
  t196 = t133 + t175;
  t212 = t196*t96;
  t215 = -0.135*t130;
  t233 = 0.07996*t164;
  t255 = t215 + t233;
  t266 = t255*t263;
  t366 = Cos(var1[14]);
  t372 = -1.*t366;
  t378 = 1. + t372;
  t381 = Sin(var1[14]);
  t273 = t164*t96;
  t288 = t110*t263;
  t292 = t273 + t288;
  t321 = t110*t96;
  t337 = -1.*t164*t263;
  t343 = t321 + t337;
  t380 = -0.08055*t378;
  t390 = -0.135*t381;
  t391 = t380 + t390;
  t397 = t3*t18*t391;
  t404 = -0.135*t378;
  t405 = 0.08055*t381;
  t408 = t404 + t405;
  t409 = t408*t292;
  t416 = -1.*t3*t18*t381;
  t422 = t366*t292;
  t426 = t416 + t422;
  t446 = Cos(var1[15]);
  t452 = -1.*t446;
  t455 = 1. + t452;
  t472 = Sin(var1[15]);
  t431 = t366*t3*t18;
  t432 = t381*t292;
  t436 = t431 + t432;
  t467 = -0.01004*t455;
  t473 = 0.08055*t472;
  t475 = t467 + t473;
  t476 = t475*t343;
  t484 = -0.08055*t455;
  t488 = -0.01004*t472;
  t494 = t484 + t488;
  t495 = t494*t436;
  t498 = t472*t343;
  t499 = t446*t436;
  t502 = t498 + t499;
  t527 = Cos(var1[16]);
  t528 = -1.*t527;
  t530 = 1. + t528;
  t538 = Sin(var1[16]);
  t507 = t446*t343;
  t510 = -1.*t472*t436;
  t511 = t507 + t510;
  t536 = -0.08055*t530;
  t539 = -0.13004*t538;
  t540 = t536 + t539;
  t541 = t540*t502;
  t542 = -0.13004*t530;
  t544 = 0.08055*t538;
  t545 = t542 + t544;
  t547 = t545*t511;
  t551 = -1.*t538*t502;
  t553 = t527*t511;
  t561 = t551 + t553;
  t585 = Cos(var1[17]);
  t587 = -1.*t585;
  t588 = 1. + t587;
  t593 = Sin(var1[17]);
  t563 = t527*t502;
  t568 = t538*t511;
  t570 = t563 + t568;
  t591 = -0.19074*t588;
  t594 = 0.03315*t593;
  t598 = t591 + t594;
  t604 = t598*t561;
  t605 = -0.03315*t588;
  t607 = -0.19074*t593;
  t615 = t605 + t607;
  t622 = t615*t570;
  t623 = t593*t561;
  t625 = t585*t570;
  t626 = t623 + t625;
  t679 = Cos(var1[18]);
  t681 = -1.*t679;
  t684 = 1. + t681;
  t691 = Sin(var1[18]);
  t630 = t585*t561;
  t638 = -1.*t593*t570;
  t649 = t630 + t638;
  t686 = -0.01315*t684;
  t694 = -0.62554*t691;
  t695 = t686 + t694;
  t698 = t695*t626;
  t704 = -0.62554*t684;
  t706 = 0.01315*t691;
  t709 = t704 + t706;
  t713 = t709*t649;
  t716 = -1.*t691*t626;
  t717 = t679*t649;
  t719 = t716 + t717;
  t746 = Cos(var1[19]);
  t747 = -1.*t746;
  t749 = 1. + t747;
  t754 = Sin(var1[19]);
  t725 = t679*t626;
  t735 = t691*t649;
  t736 = t725 + t735;
  t107 = -0.05485*t3*t18;
  t817 = Cos(var1[6]);
  t819 = -1.*t817;
  t835 = 1. + t819;
  t837 = Sin(var1[6]);
  t836 = 0.07996*t835;
  t842 = -0.135*t837;
  t843 = t836 + t842;
  t844 = t96*t843;
  t848 = 0.135*t835;
  t850 = 0.07996*t837;
  t856 = t848 + t850;
  t859 = t263*t856;
  t872 = t817*t96;
  t876 = -1.*t263*t837;
  t881 = t872 + t876;
  t861 = t817*t263;
  t864 = t96*t837;
  t869 = t861 + t864;
  t896 = Cos(var1[7]);
  t897 = -1.*t896;
  t900 = 1. + t897;
  t902 = Sin(var1[7]);
  t901 = 0.135*t900;
  t910 = 0.08055*t902;
  t911 = t901 + t910;
  t916 = t869*t911;
  t917 = -0.08055*t900;
  t923 = 0.135*t902;
  t925 = t917 + t923;
  t928 = t3*t18*t925;
  t931 = t896*t869;
  t934 = -1.*t3*t18*t902;
  t935 = t931 + t934;
  t944 = t3*t18*t896;
  t945 = t869*t902;
  t946 = t944 + t945;
  t961 = Cos(var1[8]);
  t962 = -1.*t961;
  t969 = 1. + t962;
  t978 = Sin(var1[8]);
  t974 = -0.08055*t969;
  t983 = -0.01004*t978;
  t987 = t974 + t983;
  t989 = t946*t987;
  t990 = -0.01004*t969;
  t991 = 0.08055*t978;
  t998 = t990 + t991;
  t999 = t881*t998;
  t1001 = t961*t946;
  t1003 = t881*t978;
  t1005 = t1001 + t1003;
  t1025 = Cos(var1[9]);
  t1029 = -1.*t1025;
  t1030 = 1. + t1029;
  t1034 = Sin(var1[9]);
  t1009 = t961*t881;
  t1012 = -1.*t946*t978;
  t1015 = t1009 + t1012;
  t1031 = -0.08055*t1030;
  t1035 = -0.13004*t1034;
  t1036 = t1031 + t1035;
  t1037 = t1036*t1005;
  t1041 = -0.13004*t1030;
  t1043 = 0.08055*t1034;
  t1046 = t1041 + t1043;
  t1049 = t1046*t1015;
  t1051 = -1.*t1034*t1005;
  t1053 = t1025*t1015;
  t1055 = t1051 + t1053;
  t1087 = Cos(var1[10]);
  t1091 = -1.*t1087;
  t1096 = 1. + t1091;
  t1098 = Sin(var1[10]);
  t1062 = t1025*t1005;
  t1063 = t1034*t1015;
  t1064 = t1062 + t1063;
  t1097 = -0.19074*t1096;
  t1101 = 0.03315*t1098;
  t1102 = t1097 + t1101;
  t1107 = t1102*t1055;
  t1110 = -0.03315*t1096;
  t1112 = -0.19074*t1098;
  t1116 = t1110 + t1112;
  t1118 = t1116*t1064;
  t1119 = t1098*t1055;
  t1122 = t1087*t1064;
  t1123 = t1119 + t1122;
  t1153 = Cos(var1[11]);
  t1154 = -1.*t1153;
  t1155 = 1. + t1154;
  t1161 = Sin(var1[11]);
  t1132 = t1087*t1055;
  t1134 = -1.*t1098*t1064;
  t1135 = t1132 + t1134;
  t1160 = -0.01315*t1155;
  t1167 = -0.62554*t1161;
  t1170 = t1160 + t1167;
  t1171 = t1170*t1123;
  t1174 = -0.62554*t1155;
  t1176 = 0.01315*t1161;
  t1177 = t1174 + t1176;
  t1178 = t1177*t1135;
  t1184 = -1.*t1161*t1123;
  t1187 = t1153*t1135;
  t1190 = t1184 + t1187;
  t1210 = Cos(var1[12]);
  t1212 = -1.*t1210;
  t1213 = 1. + t1212;
  t1226 = Sin(var1[12]);
  t1197 = t1153*t1123;
  t1198 = t1161*t1135;
  t1201 = t1197 + t1198;
  t1295 = t21*t44*t36;
  t1298 = -1.*t3*t74;
  t1299 = t1295 + t1298;
  t1314 = t3*t21;
  t1318 = t44*t36*t74;
  t1322 = t1314 + t1318;
  t1312 = t196*t1299;
  t1325 = t255*t1322;
  t1330 = t164*t1299;
  t1331 = t110*t1322;
  t1332 = t1330 + t1331;
  t1339 = t110*t1299;
  t1340 = -1.*t164*t1322;
  t1341 = t1339 + t1340;
  t1371 = t18*t391*t44;
  t1373 = t408*t1332;
  t1380 = -1.*t18*t381*t44;
  t1381 = t366*t1332;
  t1383 = t1380 + t1381;
  t1393 = t366*t18*t44;
  t1397 = t381*t1332;
  t1405 = t1393 + t1397;
  t1422 = t475*t1341;
  t1425 = t494*t1405;
  t1430 = t472*t1341;
  t1435 = t446*t1405;
  t1436 = t1430 + t1435;
  t1439 = t446*t1341;
  t1443 = -1.*t472*t1405;
  t1446 = t1439 + t1443;
  t1459 = t540*t1436;
  t1463 = t545*t1446;
  t1469 = -1.*t538*t1436;
  t1473 = t527*t1446;
  t1477 = t1469 + t1473;
  t1481 = t527*t1436;
  t1482 = t538*t1446;
  t1487 = t1481 + t1482;
  t1495 = t598*t1477;
  t1499 = t615*t1487;
  t1501 = t593*t1477;
  t1503 = t585*t1487;
  t1506 = t1501 + t1503;
  t1514 = t585*t1477;
  t1515 = -1.*t593*t1487;
  t1517 = t1514 + t1515;
  t1528 = t695*t1506;
  t1531 = t709*t1517;
  t753 = -1.03354*t749;
  t755 = 0.05315*t754;
  t758 = t753 + t755;
  t1535 = -1.*t691*t1506;
  t1536 = t679*t1517;
  t1541 = t1535 + t1536;
  t766 = -0.05315*t749;
  t768 = -1.03354*t754;
  t770 = t766 + t768;
  t1545 = t679*t1506;
  t1546 = t691*t1517;
  t1548 = t1545 + t1546;
  t1309 = -0.05485*t18*t44;
  t1594 = t1299*t843;
  t1595 = t1322*t856;
  t1613 = t817*t1299;
  t1616 = -1.*t1322*t837;
  t1619 = t1613 + t1616;
  t1598 = t817*t1322;
  t1601 = t1299*t837;
  t1604 = t1598 + t1601;
  t1630 = t1604*t911;
  t1632 = t18*t44*t925;
  t1633 = t896*t1604;
  t1640 = -1.*t18*t44*t902;
  t1641 = t1633 + t1640;
  t1650 = t18*t896*t44;
  t1651 = t1604*t902;
  t1655 = t1650 + t1651;
  t1666 = t1655*t987;
  t1671 = t1619*t998;
  t1672 = t961*t1655;
  t1674 = t1619*t978;
  t1675 = t1672 + t1674;
  t1683 = t961*t1619;
  t1690 = -1.*t1655*t978;
  t1694 = t1683 + t1690;
  t1708 = t1036*t1675;
  t1711 = t1046*t1694;
  t1712 = -1.*t1034*t1675;
  t1714 = t1025*t1694;
  t1715 = t1712 + t1714;
  t1717 = t1025*t1675;
  t1722 = t1034*t1694;
  t1727 = t1717 + t1722;
  t1735 = t1102*t1715;
  t1737 = t1116*t1727;
  t1740 = t1098*t1715;
  t1741 = t1087*t1727;
  t1748 = t1740 + t1741;
  t1761 = t1087*t1715;
  t1766 = -1.*t1098*t1727;
  t1769 = t1761 + t1766;
  t1789 = t1170*t1748;
  t1791 = t1177*t1769;
  t1219 = -1.03354*t1213;
  t1230 = 0.05315*t1226;
  t1231 = t1219 + t1230;
  t1792 = -1.*t1161*t1748;
  t1793 = t1153*t1769;
  t1794 = t1792 + t1793;
  t1238 = -0.05315*t1213;
  t1241 = -1.03354*t1226;
  t1242 = t1238 + t1241;
  t1803 = t1153*t1748;
  t1805 = t1161*t1769;
  t1807 = t1803 + t1805;
  t1879 = t18*t21*t196;
  t1885 = t18*t255*t74;
  t1886 = t18*t21*t164;
  t1889 = t110*t18*t74;
  t1894 = t1886 + t1889;
  t1900 = t110*t18*t21;
  t1901 = -1.*t18*t164*t74;
  t1902 = t1900 + t1901;
  t1914 = -1.*t391*t36;
  t1917 = t408*t1894;
  t1921 = t381*t36;
  t1923 = t366*t1894;
  t1936 = t1921 + t1923;
  t1940 = -1.*t366*t36;
  t1941 = t381*t1894;
  t1942 = t1940 + t1941;
  t1952 = t475*t1902;
  t1959 = t494*t1942;
  t1961 = t472*t1902;
  t1966 = t446*t1942;
  t1967 = t1961 + t1966;
  t1976 = t446*t1902;
  t1978 = -1.*t472*t1942;
  t1979 = t1976 + t1978;
  t1996 = t540*t1967;
  t2002 = t545*t1979;
  t2005 = -1.*t538*t1967;
  t2007 = t527*t1979;
  t2009 = t2005 + t2007;
  t2014 = t527*t1967;
  t2017 = t538*t1979;
  t2021 = t2014 + t2017;
  t2028 = t598*t2009;
  t2031 = t615*t2021;
  t2036 = t593*t2009;
  t2038 = t585*t2021;
  t2039 = t2036 + t2038;
  t2041 = t585*t2009;
  t2043 = -1.*t593*t2021;
  t2046 = t2041 + t2043;
  t2064 = t695*t2039;
  t2065 = t709*t2046;
  t2067 = -1.*t691*t2039;
  t2069 = t679*t2046;
  t2073 = t2067 + t2069;
  t2082 = t679*t2039;
  t2083 = t691*t2046;
  t2087 = t2082 + t2083;
  t1883 = 0.05485*t36;
  t2154 = t18*t21*t843;
  t2155 = t18*t74*t856;
  t2170 = t18*t21*t817;
  t2172 = -1.*t18*t74*t837;
  t2176 = t2170 + t2172;
  t2156 = t18*t817*t74;
  t2158 = t18*t21*t837;
  t2164 = t2156 + t2158;
  t2196 = t2164*t911;
  t2197 = -1.*t36*t925;
  t2202 = t896*t2164;
  t2203 = t36*t902;
  t2206 = t2202 + t2203;
  t2212 = -1.*t896*t36;
  t2213 = t2164*t902;
  t2221 = t2212 + t2213;
  t2231 = t2221*t987;
  t2232 = t2176*t998;
  t2234 = t961*t2221;
  t2236 = t2176*t978;
  t2238 = t2234 + t2236;
  t2247 = t961*t2176;
  t2252 = -1.*t2221*t978;
  t2254 = t2247 + t2252;
  t2267 = t1036*t2238;
  t2270 = t1046*t2254;
  t2271 = -1.*t1034*t2238;
  t2273 = t1025*t2254;
  t2275 = t2271 + t2273;
  t2281 = t1025*t2238;
  t2282 = t1034*t2254;
  t2284 = t2281 + t2282;
  t2300 = t1102*t2275;
  t2303 = t1116*t2284;
  t2311 = t1098*t2275;
  t2314 = t1087*t2284;
  t2317 = t2311 + t2314;
  t2321 = t1087*t2275;
  t2323 = -1.*t1098*t2284;
  t2326 = t2321 + t2323;
  t2346 = t1170*t2317;
  t2348 = t1177*t2326;
  t2360 = -1.*t1161*t2317;
  t2362 = t1153*t2326;
  t2364 = t2360 + t2362;
  t2372 = t1153*t2317;
  t2374 = t1161*t2326;
  t2377 = t2372 + t2374;
  p_output1[0]=0.0313636933885334*(1.82*(t107 + t212 + t266 - 0.1351*t292 + 0.09786*t343 + var1[0]) + 1.17*(t212 + t266 + 0.04566*t343 + t397 + t409 - 0.135*t426 - 0.08055*t436 + var1[0]) + 5.52*(t212 + t266 + t397 + t409 - 0.1708*t426 + t476 + t495 - 0.08045*t502 - 0.06984*t511 + var1[0]) + 0.758*(t212 + t266 + t397 + t409 - 0.1327*t426 + t476 + t495 + t541 + t547 - 0.15304*t561 - 0.04845*t570 + var1[0]) + 0.577*(t212 + t266 + t397 + t409 - 0.1303*t426 + t476 + t495 + t541 + t547 + t604 + t622 - 0.03195*t626 - 0.37414*t649 + var1[0]) + 0.782*(t212 + t266 + t397 + t409 - 0.1318*t426 + t476 + t495 + t541 + t547 + t604 + t622 + t698 + t713 - 0.73604*t719 - 0.04375*t736 + var1[0]) + 0.15*(t212 + t266 + t397 + t409 - 0.1306*t426 + t476 + t495 + t541 + t547 + t604 + t622 + t698 + t713 - 0.02565*(t736*t746 + t719*t754) - 1.03824*(t719*t746 - 1.*t736*t754) + t719*t758 + t736*t770 + var1[0]) + 1.82*(t107 + t844 + t859 + 0.1351*t869 + 0.09786*t881 + var1[0]) + 1.17*(t844 + t859 + 0.04566*t881 + t916 + t928 + 0.135*t935 - 0.08055*t946 + var1[0]) + 10.33*(0.01915*t18*t3 + 0.10836*t96 + var1[0]) + 0.577*(t1037 + t1049 + t1107 + t1118 - 0.03195*t1123 - 0.37414*t1135 + t844 + t859 + t916 + t928 + 0.1303*t935 + t989 + t999 + var1[0]) + 0.15*(t1037 + t1049 + t1107 + t1118 + t1171 + t1178 - 0.02565*(t1201*t1210 + t1190*t1226) - 1.03824*(t1190*t1210 - 1.*t1201*t1226) + t1190*t1231 + t1201*t1242 + t844 + t859 + t916 + t928 + 0.1306*t935 + t989 + t999 + var1[0]) + 0.782*(t1037 + t1049 + t1107 + t1118 + t1171 + t1178 - 0.73604*t1190 - 0.04375*t1201 + t844 + t859 + t916 + t928 + 0.1318*t935 + t989 + t999 + var1[0]) + 0.758*(t1037 + t1049 - 0.15304*t1055 - 0.04845*t1064 + t844 + t859 + t916 + t928 + 0.1327*t935 + t989 + t999 + var1[0]) + 5.52*(-0.08045*t1005 - 0.06984*t1015 + t844 + t859 + t916 + t928 + 0.1708*t935 + t989 + t999 + var1[0]));
  p_output1[1]=0.0313636933885334*(1.82*(t1309 + t1312 + t1325 - 0.1351*t1332 + 0.09786*t1341 + var1[1]) + 1.17*(t1312 + t1325 + 0.04566*t1341 + t1371 + t1373 - 0.135*t1383 - 0.08055*t1405 + var1[1]) + 5.52*(t1312 + t1325 + t1371 + t1373 - 0.1708*t1383 + t1422 + t1425 - 0.08045*t1436 - 0.06984*t1446 + var1[1]) + 0.758*(t1312 + t1325 + t1371 + t1373 - 0.1327*t1383 + t1422 + t1425 + t1459 + t1463 - 0.15304*t1477 - 0.04845*t1487 + var1[1]) + 0.577*(t1312 + t1325 + t1371 + t1373 - 0.1303*t1383 + t1422 + t1425 + t1459 + t1463 + t1495 + t1499 - 0.03195*t1506 - 0.37414*t1517 + var1[1]) + 0.782*(t1312 + t1325 + t1371 + t1373 - 0.1318*t1383 + t1422 + t1425 + t1459 + t1463 + t1495 + t1499 + t1528 + t1531 - 0.73604*t1541 - 0.04375*t1548 + var1[1]) + 1.82*(t1309 + t1594 + t1595 + 0.1351*t1604 + 0.09786*t1619 + var1[1]) + 1.17*(t1594 + t1595 + 0.04566*t1619 + t1630 + t1632 + 0.135*t1641 - 0.08055*t1655 + var1[1]) + 5.52*(t1594 + t1595 + t1630 + t1632 + 0.1708*t1641 + t1666 + t1671 - 0.08045*t1675 - 0.06984*t1694 + var1[1]) + 0.758*(t1594 + t1595 + t1630 + t1632 + 0.1327*t1641 + t1666 + t1671 + t1708 + t1711 - 0.15304*t1715 - 0.04845*t1727 + var1[1]) + 0.577*(t1594 + t1595 + t1630 + t1632 + 0.1303*t1641 + t1666 + t1671 + t1708 + t1711 + t1735 + t1737 - 0.03195*t1748 - 0.37414*t1769 + var1[1]) + 0.782*(t1594 + t1595 + t1630 + t1632 + 0.1318*t1641 + t1666 + t1671 + t1708 + t1711 + t1735 + t1737 + t1789 + t1791 - 0.73604*t1794 - 0.04375*t1807 + var1[1]) + 0.15*(t1594 + t1595 + t1630 + t1632 + 0.1306*t1641 + t1666 + t1671 + t1708 + t1711 + t1735 + t1737 + t1789 + t1791 + t1231*t1794 + t1242*t1807 - 0.02565*(t1226*t1794 + t1210*t1807) - 1.03824*(t1210*t1794 - 1.*t1226*t1807) + var1[1]) + 10.33*(0.10836*t1299 + 0.01915*t18*t44 + var1[1]) + 0.15*(t1312 + t1325 + t1371 + t1373 - 0.1306*t1383 + t1422 + t1425 + t1459 + t1463 + t1495 + t1499 + t1528 + t1531 - 0.02565*(t1548*t746 + t1541*t754) - 1.03824*(t1541*t746 - 1.*t1548*t754) + t1541*t758 + t1548*t770 + var1[1]));
  p_output1[2]=0.0313636933885334*(1.82*(t1879 + t1883 + t1885 - 0.1351*t1894 + 0.09786*t1902 + var1[2]) + 1.17*(t1879 + t1885 + 0.04566*t1902 + t1914 + t1917 - 0.135*t1936 - 0.08055*t1942 + var1[2]) + 5.52*(t1879 + t1885 + t1914 + t1917 - 0.1708*t1936 + t1952 + t1959 - 0.08045*t1967 - 0.06984*t1979 + var1[2]) + 0.758*(t1879 + t1885 + t1914 + t1917 - 0.1327*t1936 + t1952 + t1959 + t1996 + t2002 - 0.15304*t2009 - 0.04845*t2021 + var1[2]) + 0.577*(t1879 + t1885 + t1914 + t1917 - 0.1303*t1936 + t1952 + t1959 + t1996 + t2002 + t2028 + t2031 - 0.03195*t2039 - 0.37414*t2046 + var1[2]) + 0.782*(t1879 + t1885 + t1914 + t1917 - 0.1318*t1936 + t1952 + t1959 + t1996 + t2002 + t2028 + t2031 + t2064 + t2065 - 0.73604*t2073 - 0.04375*t2087 + var1[2]) + 1.82*(t1883 + t2154 + t2155 + 0.1351*t2164 + 0.09786*t2176 + var1[2]) + 1.17*(t2154 + t2155 + 0.04566*t2176 + t2196 + t2197 + 0.135*t2206 - 0.08055*t2221 + var1[2]) + 5.52*(t2154 + t2155 + t2196 + t2197 + 0.1708*t2206 + t2231 + t2232 - 0.08045*t2238 - 0.06984*t2254 + var1[2]) + 0.758*(t2154 + t2155 + t2196 + t2197 + 0.1327*t2206 + t2231 + t2232 + t2267 + t2270 - 0.15304*t2275 - 0.04845*t2284 + var1[2]) + 0.577*(t2154 + t2155 + t2196 + t2197 + 0.1303*t2206 + t2231 + t2232 + t2267 + t2270 + t2300 + t2303 - 0.03195*t2317 - 0.37414*t2326 + var1[2]) + 0.782*(t2154 + t2155 + t2196 + t2197 + 0.1318*t2206 + t2231 + t2232 + t2267 + t2270 + t2300 + t2303 + t2346 + t2348 - 0.73604*t2364 - 0.04375*t2377 + var1[2]) + 0.15*(t2154 + t2155 + t2196 + t2197 + 0.1306*t2206 + t2231 + t2232 + t2267 + t2270 + t2300 + t2303 + t2346 + t2348 + t1231*t2364 + t1242*t2377 - 0.02565*(t1226*t2364 + t1210*t2377) - 1.03824*(t1210*t2364 - 1.*t1226*t2377) + var1[2]) + 10.33*(0.10836*t18*t21 - 0.01915*t36 + var1[2]) + 0.15*(t1879 + t1885 + t1914 + t1917 - 0.1306*t1936 + t1952 + t1959 + t1996 + t2002 + t2028 + t2031 + t2064 + t2065 - 0.02565*(t2087*t746 + t2073*t754) - 1.03824*(t2073*t746 - 1.*t2087*t754) + t2073*t758 + t2087*t770 + var1[2]));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_COM_mex.hh"

namespace SymExpression
{

void p_COM_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
