/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:10 GMT-04:00
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
  double t72;
  double t96;
  double t126;
  double t130;
  double t128;
  double t139;
  double t223;
  double t242;
  double t154;
  double t158;
  double t180;
  double t193;
  double t199;
  double t203;
  double t206;
  double t231;
  double t244;
  double t247;
  double t252;
  double t267;
  double t288;
  double t428;
  double t406;
  double t310;
  double t314;
  double t320;
  double t478;
  double t488;
  double t329;
  double t344;
  double t347;
  double t506;
  double t508;
  double t527;
  double t536;
  double t540;
  double t542;
  double t454;
  double t463;
  double t464;
  double t34;
  double t705;
  double t724;
  double t725;
  double t585;
  double t590;
  double t596;
  double t418;
  double t432;
  double t433;
  double t565;
  double t568;
  double t934;
  double t940;
  double t569;
  double t976;
  double t992;
  double t760;
  double t770;
  double t773;
  double t731;
  double t733;
  double t734;
  double t993;
  double t994;
  double t995;
  double t528;
  double t553;
  double t1001;
  double t1005;
  double t1015;
  double t690;
  double t691;
  double t1050;
  double t1057;
  double t1066;
  double t617;
  double t646;
  double t855;
  double t863;
  double t1021;
  double t1023;
  double t1026;
  double t1102;
  double t1103;
  double t1104;
  double t790;
  double t811;
  double t840;
  double t998;
  double t1017;
  double t1282;
  double t1284;
  double t1288;
  double t1300;
  double t1177;
  double t1181;
  double t1184;
  double t937;
  double t945;
  double t962;
  double t1067;
  double t1078;
  double t1295;
  double t1311;
  double t1317;
  double t1345;
  double t1349;
  double t1352;
  double t1147;
  double t1151;
  double t1153;
  double t1088;
  double t1095;
  double t1123;
  double t1126;
  double t1187;
  double t1190;
  double t1201;
  double t1217;
  double t1234;
  double t1262;
  double t1264;
  double t1265;
  double t1269;
  double t1270;
  double t1272;
  double t1279;
  double t1280;
  double t1336;
  double t1353;
  double t1517;
  double t1525;
  double t1529;
  double t1589;
  double t1596;
  double t1597;
  double t1609;
  double t1532;
  double t1533;
  double t1536;
  double t1364;
  double t1378;
  double t1381;
  double t1398;
  double t1400;
  double t1401;
  double t1406;
  double t1407;
  double t1600;
  double t1615;
  double t1618;
  double t1478;
  double t1480;
  double t1493;
  double t1625;
  double t1629;
  double t1631;
  double t1499;
  double t1500;
  double t1503;
  double t1438;
  double t1445;
  double t1466;
  double t1470;
  double t1551;
  double t1552;
  double t1565;
  double t1568;
  double t1619;
  double t1635;
  double t1821;
  double t1832;
  double t1840;
  double t1906;
  double t1907;
  double t1911;
  double t1916;
  double t1849;
  double t1856;
  double t1857;
  double t1646;
  double t1652;
  double t1657;
  double t1661;
  double t1664;
  double t1666;
  double t1692;
  double t1696;
  double t1913;
  double t1920;
  double t1924;
  double t1778;
  double t1783;
  double t1784;
  double t1932;
  double t1934;
  double t1936;
  double t1803;
  double t1808;
  double t1812;
  double t1734;
  double t1737;
  double t1744;
  double t1751;
  double t1863;
  double t1864;
  double t1882;
  double t1887;
  double t1925;
  double t1937;
  double t2094;
  double t2096;
  double t2098;
  double t2163;
  double t2164;
  double t2167;
  double t2182;
  double t2105;
  double t2108;
  double t2110;
  double t1945;
  double t1946;
  double t1947;
  double t1952;
  double t1956;
  double t1980;
  double t1985;
  double t1987;
  double t2179;
  double t2198;
  double t2200;
  double t2056;
  double t2061;
  double t2062;
  double t2211;
  double t2216;
  double t2219;
  double t2076;
  double t2079;
  double t2080;
  double t2015;
  double t2016;
  double t2030;
  double t2033;
  double t2116;
  double t2117;
  double t2145;
  double t2149;
  t72 = Cos(var1[3]);
  t96 = Sin(var1[3]);
  t126 = Cos(var1[4]);
  t130 = Sin(var1[4]);
  t128 = -1.*var1[2]*t126*t96;
  t139 = -1.*var1[1]*t130;
  t223 = Cos(var1[5]);
  t242 = Sin(var1[5]);
  t154 = var1[2]*t72*t126;
  t158 = var1[0]*t130;
  t180 = -1.*var1[1]*t72*t126;
  t193 = var1[0]*t126*t96;
  t199 = t72*t126;
  t203 = t126*t96;
  t206 = -1.*t130;
  t231 = t72*t223*t130;
  t244 = t96*t242;
  t247 = t231 + t244;
  t252 = -1.*t223*t96;
  t267 = t72*t130*t242;
  t288 = t252 + t267;
  t428 = Cos(var1[13]);
  t406 = Sin(var1[13]);
  t310 = t223*t96*t130;
  t314 = -1.*t72*t242;
  t320 = t310 + t314;
  t478 = -1.*t428;
  t488 = 1. + t478;
  t329 = t72*t223;
  t344 = t96*t130*t242;
  t347 = t329 + t344;
  t506 = 0.07996*t488;
  t508 = 0.135*t406;
  t527 = 0. + t506 + t508;
  t536 = -0.135*t488;
  t540 = 0.07996*t406;
  t542 = 0. + t536 + t540;
  t454 = t428*t126*t223;
  t463 = -1.*t126*t406*t242;
  t464 = t454 + t463;
  t34 = -1.*var1[0];
  t705 = t428*t247;
  t724 = -1.*t406*t288;
  t725 = t705 + t724;
  t585 = t428*t320;
  t590 = -1.*t406*t347;
  t596 = t585 + t590;
  t418 = t406*t247;
  t432 = t428*t288;
  t433 = t418 + t432;
  t565 = -1.*var1[2];
  t568 = -1.*t126*t223*t527;
  t934 = Cos(var1[14]);
  t940 = Sin(var1[14]);
  t569 = -1.*t126*t542*t242;
  t976 = -1.*t934;
  t992 = 1. + t976;
  t760 = t126*t223*t406;
  t770 = t428*t126*t242;
  t773 = t760 + t770;
  t731 = t406*t320;
  t733 = t428*t347;
  t734 = t731 + t733;
  t993 = -0.08055*t992;
  t994 = -0.135*t940;
  t995 = 0. + t993 + t994;
  t528 = t527*t320;
  t553 = t542*t347;
  t1001 = -0.135*t992;
  t1005 = 0.08055*t940;
  t1015 = 0. + t1001 + t1005;
  t690 = t126*t223*t527;
  t691 = t126*t542*t242;
  t1050 = t940*t130;
  t1057 = t934*t773;
  t1066 = t1050 + t1057;
  t617 = -1.*t527*t247;
  t646 = -1.*t542*t288;
  t855 = t527*t247;
  t863 = t542*t288;
  t1021 = -1.*t126*t940*t96;
  t1023 = t934*t734;
  t1026 = t1021 + t1023;
  t1102 = -1.*t72*t126*t940;
  t1103 = t934*t433;
  t1104 = t1102 + t1103;
  t790 = -1.*var1[1];
  t811 = -1.*t527*t320;
  t840 = -1.*t542*t347;
  t998 = t995*t130;
  t1017 = -1.*t1015*t773;
  t1282 = Cos(var1[15]);
  t1284 = -1.*t1282;
  t1288 = 1. + t1284;
  t1300 = Sin(var1[15]);
  t1177 = -1.*t934*t130;
  t1181 = t940*t773;
  t1184 = t1177 + t1181;
  t937 = t934*t72*t126;
  t945 = t940*t433;
  t962 = t937 + t945;
  t1067 = t126*t995*t96;
  t1078 = t1015*t734;
  t1295 = -0.01004*t1288;
  t1311 = 0.08055*t1300;
  t1317 = 0. + t1295 + t1311;
  t1345 = -0.08055*t1288;
  t1349 = -0.01004*t1300;
  t1352 = 0. + t1345 + t1349;
  t1147 = t934*t126*t96;
  t1151 = t940*t734;
  t1153 = t1147 + t1151;
  t1088 = -1.*t995*t130;
  t1095 = t1015*t773;
  t1123 = -1.*t72*t126*t995;
  t1126 = -1.*t1015*t433;
  t1187 = t72*t126*t995;
  t1190 = t1015*t433;
  t1201 = -1.*t126*t995*t96;
  t1217 = -1.*t1015*t734;
  t1234 = t72*t126*t940;
  t1262 = -1.*t934*t433;
  t1264 = 0. + t1234 + t1262;
  t1265 = t126*t940*t96;
  t1269 = -1.*t934*t734;
  t1270 = 0. + t1265 + t1269;
  t1272 = -1.*t940*t130;
  t1279 = -1.*t934*t773;
  t1280 = 0. + t1272 + t1279;
  t1336 = -1.*t1317*t464;
  t1353 = -1.*t1352*t1184;
  t1517 = t1300*t464;
  t1525 = t1282*t1184;
  t1529 = t1517 + t1525;
  t1589 = Cos(var1[16]);
  t1596 = -1.*t1589;
  t1597 = 1. + t1596;
  t1609 = Sin(var1[16]);
  t1532 = t1282*t464;
  t1533 = -1.*t1300*t1184;
  t1536 = t1532 + t1533;
  t1364 = t1300*t725;
  t1378 = t1282*t962;
  t1381 = t1364 + t1378;
  t1398 = t1282*t725;
  t1400 = -1.*t1300*t962;
  t1401 = t1398 + t1400;
  t1406 = t1317*t596;
  t1407 = t1352*t1153;
  t1600 = -0.08055*t1597;
  t1615 = -0.13004*t1609;
  t1618 = 0. + t1600 + t1615;
  t1478 = t1300*t596;
  t1480 = t1282*t1153;
  t1493 = t1478 + t1480;
  t1625 = -0.13004*t1597;
  t1629 = 0.08055*t1609;
  t1631 = 0. + t1625 + t1629;
  t1499 = t1282*t596;
  t1500 = -1.*t1300*t1153;
  t1503 = t1499 + t1500;
  t1438 = t1317*t464;
  t1445 = t1352*t1184;
  t1466 = -1.*t1317*t725;
  t1470 = -1.*t1352*t962;
  t1551 = t1317*t725;
  t1552 = t1352*t962;
  t1565 = -1.*t1317*t596;
  t1568 = -1.*t1352*t1153;
  t1619 = -1.*t1618*t1529;
  t1635 = -1.*t1631*t1536;
  t1821 = -1.*t1609*t1529;
  t1832 = t1589*t1536;
  t1840 = t1821 + t1832;
  t1906 = Cos(var1[17]);
  t1907 = -1.*t1906;
  t1911 = 1. + t1907;
  t1916 = Sin(var1[17]);
  t1849 = t1589*t1529;
  t1856 = t1609*t1536;
  t1857 = t1849 + t1856;
  t1646 = -1.*t1609*t1381;
  t1652 = t1589*t1401;
  t1657 = t1646 + t1652;
  t1661 = t1589*t1381;
  t1664 = t1609*t1401;
  t1666 = t1661 + t1664;
  t1692 = t1618*t1493;
  t1696 = t1631*t1503;
  t1913 = -0.19074*t1911;
  t1920 = 0.03315*t1916;
  t1924 = 0. + t1913 + t1920;
  t1778 = -1.*t1609*t1493;
  t1783 = t1589*t1503;
  t1784 = t1778 + t1783;
  t1932 = -0.03315*t1911;
  t1934 = -0.19074*t1916;
  t1936 = 0. + t1932 + t1934;
  t1803 = t1589*t1493;
  t1808 = t1609*t1503;
  t1812 = t1803 + t1808;
  t1734 = t1618*t1529;
  t1737 = t1631*t1536;
  t1744 = -1.*t1618*t1381;
  t1751 = -1.*t1631*t1401;
  t1863 = t1618*t1381;
  t1864 = t1631*t1401;
  t1882 = -1.*t1618*t1493;
  t1887 = -1.*t1631*t1503;
  t1925 = -1.*t1924*t1840;
  t1937 = -1.*t1936*t1857;
  t2094 = t1916*t1840;
  t2096 = t1906*t1857;
  t2098 = t2094 + t2096;
  t2163 = Cos(var1[18]);
  t2164 = -1.*t2163;
  t2167 = 1. + t2164;
  t2182 = Sin(var1[18]);
  t2105 = t1906*t1840;
  t2108 = -1.*t1916*t1857;
  t2110 = t2105 + t2108;
  t1945 = t1916*t1657;
  t1946 = t1906*t1666;
  t1947 = t1945 + t1946;
  t1952 = t1906*t1657;
  t1956 = -1.*t1916*t1666;
  t1980 = t1952 + t1956;
  t1985 = t1924*t1784;
  t1987 = t1936*t1812;
  t2179 = -0.01315*t2167;
  t2198 = -0.62554*t2182;
  t2200 = 0. + t2179 + t2198;
  t2056 = t1916*t1784;
  t2061 = t1906*t1812;
  t2062 = t2056 + t2061;
  t2211 = -0.62554*t2167;
  t2216 = 0.01315*t2182;
  t2219 = 0. + t2211 + t2216;
  t2076 = t1906*t1784;
  t2079 = -1.*t1916*t1812;
  t2080 = t2076 + t2079;
  t2015 = t1924*t1840;
  t2016 = t1936*t1857;
  t2030 = -1.*t1924*t1657;
  t2033 = -1.*t1936*t1666;
  t2116 = t1924*t1657;
  t2117 = t1936*t1666;
  t2145 = -1.*t1924*t1784;
  t2149 = -1.*t1936*t1812;
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
  p_output1[19]=t34;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t72*var1[2];
  p_output1[25]=-1.*t96*var1[2];
  p_output1[26]=t72*var1[0] + t96*var1[1];
  p_output1[27]=-1.*t96;
  p_output1[28]=t72;
  p_output1[29]=0;
  p_output1[30]=t128 + t139;
  p_output1[31]=t154 + t158;
  p_output1[32]=t180 + t193;
  p_output1[33]=t199;
  p_output1[34]=t203;
  p_output1[35]=t206;
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
  p_output1[78]=t128 + t139 + 0.135*t247 + 0.07996*t288;
  p_output1[79]=t154 + t158 + 0.135*t320 + 0.07996*t347;
  p_output1[80]=t180 + t193 + 0.135*t126*t223 + 0.07996*t126*t242;
  p_output1[81]=0. + t199;
  p_output1[82]=0. + t203;
  p_output1[83]=0. + t206;
  p_output1[84]=0.08055*t433 + (0. + t565 + t568 + t569)*t596 - 0.135*t126*t72 + t464*(0. + t528 + t553 + var1[1]);
  p_output1[85]=t464*(0. + t34 + t617 + t646) + 0.08055*t734 - 0.135*t126*t96 + t725*(0. + t690 + t691 + var1[2]);
  p_output1[86]=0.135*t130 + 0.08055*t773 + t725*(0. + t790 + t811 + t840) + t596*(0. + t855 + t863 + var1[0]);
  p_output1[87]=0. + t705 + t724;
  p_output1[88]=0. + t585 + t590;
  p_output1[89]=0. + t454 + t463;
  p_output1[90]=0.08055*t725 - 0.01004*t962 - 1.*t1026*(0. + t1017 + t565 + t568 + t569 + t998) - 1.*t1066*(0. + t1067 + t1078 + t528 + t553 + var1[1]);
  p_output1[91]=-0.01004*t1153 + 0.08055*t596 - 1.*t1066*(0. + t1123 + t1126 + t34 + t617 + t646) - 1.*t1104*(0. + t1088 + t1095 + t690 + t691 + var1[2]);
  p_output1[92]=-0.01004*t1184 + 0.08055*t464 - 1.*t1104*(0. + t1201 + t1217 + t790 + t811 + t840) - 1.*t1026*(0. + t1187 + t1190 + t855 + t863 + var1[0]);
  p_output1[93]=t1264;
  p_output1[94]=t1270;
  p_output1[95]=t1280;
  p_output1[96]=-0.13004*t1381 + 0.08055*t1401 - 1.*t1026*(0. + t1017 + t1336 + t1353 + t565 + t568 + t569 + t998) - 1.*t1066*(0. + t1067 + t1078 + t1406 + t1407 + t528 + t553 + var1[1]);
  p_output1[97]=-0.13004*t1493 + 0.08055*t1503 - 1.*t1066*(0. + t1123 + t1126 + t1466 + t1470 + t34 + t617 + t646) - 1.*t1104*(0. + t1088 + t1095 + t1438 + t1445 + t690 + t691 + var1[2]);
  p_output1[98]=-0.13004*t1529 + 0.08055*t1536 - 1.*t1104*(0. + t1201 + t1217 + t1565 + t1568 + t790 + t811 + t840) - 1.*t1026*(0. + t1187 + t1190 + t1551 + t1552 + t855 + t863 + var1[0]);
  p_output1[99]=t1264;
  p_output1[100]=t1270;
  p_output1[101]=t1280;
  p_output1[102]=0.03315*t1657 - 0.19074*t1666 - 1.*t1026*(0. + t1017 + t1336 + t1353 + t1619 + t1635 + t565 + t568 + t569 + t998) - 1.*t1066*(0. + t1067 + t1078 + t1406 + t1407 + t1692 + t1696 + t528 + t553 + var1[1]);
  p_output1[103]=0.03315*t1784 - 0.19074*t1812 - 1.*t1066*(0. + t1123 + t1126 + t1466 + t1470 + t1744 + t1751 + t34 + t617 + t646) - 1.*t1104*(0. + t1088 + t1095 + t1438 + t1445 + t1734 + t1737 + t690 + t691 + var1[2]);
  p_output1[104]=0.03315*t1840 - 0.19074*t1857 - 1.*t1104*(0. + t1201 + t1217 + t1565 + t1568 + t1882 + t1887 + t790 + t811 + t840) - 1.*t1026*(0. + t1187 + t1190 + t1551 + t1552 + t1863 + t1864 + t855 + t863 + var1[0]);
  p_output1[105]=t1264;
  p_output1[106]=t1270;
  p_output1[107]=t1280;
  p_output1[108]=-0.62554*t1947 + 0.01315*t1980 - 1.*t1026*(0. + t1017 + t1336 + t1353 + t1619 + t1635 + t1925 + t1937 + t565 + t568 + t569 + t998) - 1.*t1066*(0. + t1067 + t1078 + t1406 + t1407 + t1692 + t1696 + t1985 + t1987 + t528 + t553 + var1[1]);
  p_output1[109]=-0.62554*t2062 + 0.01315*t2080 - 1.*t1066*(0. + t1123 + t1126 + t1466 + t1470 + t1744 + t1751 + t2030 + t2033 + t34 + t617 + t646) - 1.*t1104*(0. + t1088 + t1095 + t1438 + t1445 + t1734 + t1737 + t2015 + t2016 + t690 + t691 + var1[2]);
  p_output1[110]=-0.62554*t2098 + 0.01315*t2110 - 1.*t1104*(0. + t1201 + t1217 + t1565 + t1568 + t1882 + t1887 + t2145 + t2149 + t790 + t811 + t840) - 1.*t1026*(0. + t1187 + t1190 + t1551 + t1552 + t1863 + t1864 + t2116 + t2117 + t855 + t863 + var1[0]);
  p_output1[111]=t1264;
  p_output1[112]=t1270;
  p_output1[113]=t1280;
  p_output1[114]=0.05315*(t1980*t2163 - 1.*t1947*t2182) - 1.03354*(t1947*t2163 + t1980*t2182) - 1.*t1026*(0. + t1017 + t1336 + t1353 + t1619 + t1635 + t1925 + t1937 - 1.*t2098*t2200 - 1.*t2110*t2219 + t565 + t568 + t569 + t998) - 1.*t1066*(0. + t1067 + t1078 + t1406 + t1407 + t1692 + t1696 + t1985 + t1987 + t2062*t2200 + t2080*t2219 + t528 + t553 + var1[1]);
  p_output1[115]=0.05315*(t2080*t2163 - 1.*t2062*t2182) - 1.03354*(t2062*t2163 + t2080*t2182) - 1.*t1066*(0. + t1123 + t1126 + t1466 + t1470 + t1744 + t1751 + t2030 + t2033 - 1.*t1947*t2200 - 1.*t1980*t2219 + t34 + t617 + t646) - 1.*t1104*(0. + t1088 + t1095 + t1438 + t1445 + t1734 + t1737 + t2015 + t2016 + t2098*t2200 + t2110*t2219 + t690 + t691 + var1[2]);
  p_output1[116]=0.05315*(t2110*t2163 - 1.*t2098*t2182) - 1.03354*(t2098*t2163 + t2110*t2182) - 1.*t1104*(0. + t1201 + t1217 + t1565 + t1568 + t1882 + t1887 + t2145 + t2149 - 1.*t2062*t2200 - 1.*t2080*t2219 + t790 + t811 + t840) - 1.*t1026*(0. + t1187 + t1190 + t1551 + t1552 + t1863 + t1864 + t2116 + t2117 + t1947*t2200 + t1980*t2219 + t855 + t863 + var1[0]);
  p_output1[117]=t1264;
  p_output1[118]=t1270;
  p_output1[119]=t1280;
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

#include "Js_RightToeBottom_mex.hh"

namespace SymExpression
{

void Js_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
