/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:07 GMT-04:00
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
  double t18;
  double t47;
  double t111;
  double t165;
  double t147;
  double t166;
  double t281;
  double t302;
  double t192;
  double t200;
  double t228;
  double t232;
  double t252;
  double t268;
  double t269;
  double t392;
  double t402;
  double t419;
  double t431;
  double t459;
  double t472;
  double t538;
  double t549;
  double t553;
  double t564;
  double t339;
  double t346;
  double t374;
  double t300;
  double t328;
  double t331;
  double t559;
  double t590;
  double t594;
  double t612;
  double t613;
  double t618;
  double t9;
  double t641;
  double t656;
  double t664;
  double t852;
  double t858;
  double t871;
  double t751;
  double t755;
  double t759;
  double t701;
  double t721;
  double t744;
  double t892;
  double t908;
  double t925;
  double t1047;
  double t1051;
  double t1052;
  double t1069;
  double t800;
  double t801;
  double t819;
  double t601;
  double t621;
  double t1054;
  double t1078;
  double t1080;
  double t1097;
  double t1099;
  double t1121;
  double t671;
  double t675;
  double t682;
  double t831;
  double t838;
  double t790;
  double t792;
  double t1171;
  double t1173;
  double t1176;
  double t951;
  double t957;
  double t969;
  double t1252;
  double t1264;
  double t1266;
  double t982;
  double t988;
  double t1132;
  double t1137;
  double t1142;
  double t1092;
  double t1122;
  double t1388;
  double t1390;
  double t1392;
  double t1450;
  double t1453;
  double t1454;
  double t1469;
  double t1162;
  double t1165;
  double t1282;
  double t1289;
  double t1297;
  double t1458;
  double t1472;
  double t1478;
  double t1493;
  double t1494;
  double t1499;
  double t1195;
  double t1198;
  double t1207;
  double t1235;
  double t1236;
  double t1271;
  double t1277;
  double t1369;
  double t1370;
  double t1334;
  double t1342;
  double t1400;
  double t1402;
  double t1407;
  double t1417;
  double t1424;
  double t1429;
  double t1437;
  double t1444;
  double t1447;
  double t1489;
  double t1500;
  double t1718;
  double t1720;
  double t1723;
  double t1771;
  double t1774;
  double t1779;
  double t1786;
  double t1753;
  double t1754;
  double t1759;
  double t1513;
  double t1514;
  double t1783;
  double t1792;
  double t1794;
  double t1619;
  double t1623;
  double t1629;
  double t1798;
  double t1803;
  double t1805;
  double t1634;
  double t1635;
  double t1639;
  double t1530;
  double t1531;
  double t1545;
  double t1548;
  double t1561;
  double t1571;
  double t1592;
  double t1593;
  double t1600;
  double t1604;
  double t1699;
  double t1704;
  double t1668;
  double t1670;
  double t1797;
  double t1819;
  double t1974;
  double t1977;
  double t1978;
  double t2050;
  double t2051;
  double t2052;
  double t2063;
  double t1981;
  double t1988;
  double t1993;
  double t1824;
  double t1829;
  double t2054;
  double t2071;
  double t2076;
  double t1922;
  double t1924;
  double t1928;
  double t2084;
  double t2086;
  double t2089;
  double t1939;
  double t1947;
  double t1952;
  double t1837;
  double t1840;
  double t1842;
  double t1844;
  double t1856;
  double t1867;
  double t1891;
  double t1895;
  double t1956;
  double t1963;
  double t2005;
  double t2012;
  double t2024;
  double t2031;
  double t2082;
  double t2090;
  double t2230;
  double t2231;
  double t2233;
  double t2307;
  double t2327;
  double t2329;
  double t2341;
  double t2239;
  double t2252;
  double t2258;
  double t2101;
  double t2104;
  double t2337;
  double t2352;
  double t2355;
  double t2159;
  double t2160;
  double t2164;
  double t2359;
  double t2363;
  double t2369;
  double t2174;
  double t2179;
  double t2182;
  double t2116;
  double t2122;
  double t2125;
  double t2131;
  double t2136;
  double t2141;
  double t2150;
  double t2152;
  double t2198;
  double t2201;
  double t2262;
  double t2268;
  double t2292;
  double t2297;
  t18 = Cos(var1[3]);
  t47 = Sin(var1[3]);
  t111 = Cos(var1[4]);
  t165 = Sin(var1[4]);
  t147 = -1.*var1[2]*t111*t47;
  t166 = -1.*var1[1]*t165;
  t281 = Cos(var1[5]);
  t302 = Sin(var1[5]);
  t192 = var1[2]*t18*t111;
  t200 = var1[0]*t165;
  t228 = -1.*var1[1]*t18*t111;
  t232 = var1[0]*t111*t47;
  t252 = t18*t111;
  t268 = t111*t47;
  t269 = -1.*t165;
  t392 = t281*t47*t165;
  t402 = -1.*t18*t302;
  t419 = t392 + t402;
  t431 = t18*t281;
  t459 = t47*t165*t302;
  t472 = t431 + t459;
  t538 = Cos(var1[6]);
  t549 = -1.*t538;
  t553 = 1. + t549;
  t564 = Sin(var1[6]);
  t339 = -1.*t281*t47;
  t346 = t18*t165*t302;
  t374 = t339 + t346;
  t300 = t18*t281*t165;
  t328 = t47*t302;
  t331 = t300 + t328;
  t559 = 0.07996*t553;
  t590 = -0.135*t564;
  t594 = 0. + t559 + t590;
  t612 = 0.135*t553;
  t613 = 0.07996*t564;
  t618 = 0. + t612 + t613;
  t9 = -1.*var1[0];
  t641 = t111*t281*t538;
  t656 = -1.*t111*t302*t564;
  t664 = t641 + t656;
  t852 = t538*t331;
  t858 = -1.*t374*t564;
  t871 = t852 + t858;
  t751 = t538*t419;
  t755 = -1.*t472*t564;
  t759 = t751 + t755;
  t701 = -1.*var1[2];
  t721 = -1.*t111*t281*t594;
  t744 = -1.*t111*t302*t618;
  t892 = t111*t538*t302;
  t908 = t111*t281*t564;
  t925 = t892 + t908;
  t1047 = Cos(var1[7]);
  t1051 = -1.*t1047;
  t1052 = 1. + t1051;
  t1069 = Sin(var1[7]);
  t800 = t538*t472;
  t801 = t419*t564;
  t819 = t800 + t801;
  t601 = t419*t594;
  t621 = t472*t618;
  t1054 = 0.135*t1052;
  t1078 = 0.08055*t1069;
  t1080 = 0. + t1054 + t1078;
  t1097 = -0.08055*t1052;
  t1099 = 0.135*t1069;
  t1121 = 0. + t1097 + t1099;
  t671 = t538*t374;
  t675 = t331*t564;
  t682 = t671 + t675;
  t831 = t111*t281*t594;
  t838 = t111*t302*t618;
  t790 = -1.*t331*t594;
  t792 = -1.*t374*t618;
  t1171 = t1047*t925;
  t1173 = t165*t1069;
  t1176 = t1171 + t1173;
  t951 = -1.*var1[1];
  t957 = -1.*t419*t594;
  t969 = -1.*t472*t618;
  t1252 = t1047*t682;
  t1264 = -1.*t18*t111*t1069;
  t1266 = t1252 + t1264;
  t982 = t331*t594;
  t988 = t374*t618;
  t1132 = t1047*t819;
  t1137 = -1.*t111*t47*t1069;
  t1142 = t1132 + t1137;
  t1092 = -1.*t925*t1080;
  t1122 = t165*t1121;
  t1388 = -1.*t1047*t165;
  t1390 = t925*t1069;
  t1392 = t1388 + t1390;
  t1450 = Cos(var1[8]);
  t1453 = -1.*t1450;
  t1454 = 1. + t1453;
  t1469 = Sin(var1[8]);
  t1162 = t819*t1080;
  t1165 = t111*t47*t1121;
  t1282 = t111*t1047*t47;
  t1289 = t819*t1069;
  t1297 = t1282 + t1289;
  t1458 = -0.08055*t1454;
  t1472 = -0.01004*t1469;
  t1478 = 0. + t1458 + t1472;
  t1493 = -0.01004*t1454;
  t1494 = 0.08055*t1469;
  t1499 = 0. + t1493 + t1494;
  t1195 = t18*t111*t1047;
  t1198 = t682*t1069;
  t1207 = t1195 + t1198;
  t1235 = t925*t1080;
  t1236 = -1.*t165*t1121;
  t1271 = -1.*t682*t1080;
  t1277 = -1.*t18*t111*t1121;
  t1369 = t682*t1080;
  t1370 = t18*t111*t1121;
  t1334 = -1.*t819*t1080;
  t1342 = -1.*t111*t47*t1121;
  t1400 = -1.*t1047*t682;
  t1402 = t18*t111*t1069;
  t1407 = 0. + t1400 + t1402;
  t1417 = -1.*t1047*t819;
  t1424 = t111*t47*t1069;
  t1429 = 0. + t1417 + t1424;
  t1437 = -1.*t1047*t925;
  t1444 = -1.*t165*t1069;
  t1447 = 0. + t1437 + t1444;
  t1489 = -1.*t1392*t1478;
  t1500 = -1.*t664*t1499;
  t1718 = t1450*t1392;
  t1720 = t664*t1469;
  t1723 = t1718 + t1720;
  t1771 = Cos(var1[9]);
  t1774 = -1.*t1771;
  t1779 = 1. + t1774;
  t1786 = Sin(var1[9]);
  t1753 = t1450*t664;
  t1754 = -1.*t1392*t1469;
  t1759 = t1753 + t1754;
  t1513 = t1297*t1478;
  t1514 = t759*t1499;
  t1783 = -0.08055*t1779;
  t1792 = -0.13004*t1786;
  t1794 = 0. + t1783 + t1792;
  t1619 = t1450*t1297;
  t1623 = t759*t1469;
  t1629 = t1619 + t1623;
  t1798 = -0.13004*t1779;
  t1803 = 0.08055*t1786;
  t1805 = 0. + t1798 + t1803;
  t1634 = t1450*t759;
  t1635 = -1.*t1297*t1469;
  t1639 = t1634 + t1635;
  t1530 = t1450*t1207;
  t1531 = t871*t1469;
  t1545 = t1530 + t1531;
  t1548 = t1450*t871;
  t1561 = -1.*t1207*t1469;
  t1571 = t1548 + t1561;
  t1592 = t1392*t1478;
  t1593 = t664*t1499;
  t1600 = -1.*t1207*t1478;
  t1604 = -1.*t871*t1499;
  t1699 = -1.*t1297*t1478;
  t1704 = -1.*t759*t1499;
  t1668 = t1207*t1478;
  t1670 = t871*t1499;
  t1797 = -1.*t1794*t1723;
  t1819 = -1.*t1805*t1759;
  t1974 = -1.*t1786*t1723;
  t1977 = t1771*t1759;
  t1978 = t1974 + t1977;
  t2050 = Cos(var1[10]);
  t2051 = -1.*t2050;
  t2052 = 1. + t2051;
  t2063 = Sin(var1[10]);
  t1981 = t1771*t1723;
  t1988 = t1786*t1759;
  t1993 = t1981 + t1988;
  t1824 = t1794*t1629;
  t1829 = t1805*t1639;
  t2054 = -0.19074*t2052;
  t2071 = 0.03315*t2063;
  t2076 = 0. + t2054 + t2071;
  t1922 = -1.*t1786*t1629;
  t1924 = t1771*t1639;
  t1928 = t1922 + t1924;
  t2084 = -0.03315*t2052;
  t2086 = -0.19074*t2063;
  t2089 = 0. + t2084 + t2086;
  t1939 = t1771*t1629;
  t1947 = t1786*t1639;
  t1952 = t1939 + t1947;
  t1837 = -1.*t1786*t1545;
  t1840 = t1771*t1571;
  t1842 = t1837 + t1840;
  t1844 = t1771*t1545;
  t1856 = t1786*t1571;
  t1867 = t1844 + t1856;
  t1891 = t1794*t1723;
  t1895 = t1805*t1759;
  t1956 = -1.*t1794*t1545;
  t1963 = -1.*t1805*t1571;
  t2005 = -1.*t1794*t1629;
  t2012 = -1.*t1805*t1639;
  t2024 = t1794*t1545;
  t2031 = t1805*t1571;
  t2082 = -1.*t2076*t1978;
  t2090 = -1.*t2089*t1993;
  t2230 = t2063*t1978;
  t2231 = t2050*t1993;
  t2233 = t2230 + t2231;
  t2307 = Cos(var1[11]);
  t2327 = -1.*t2307;
  t2329 = 1. + t2327;
  t2341 = Sin(var1[11]);
  t2239 = t2050*t1978;
  t2252 = -1.*t2063*t1993;
  t2258 = t2239 + t2252;
  t2101 = t2076*t1928;
  t2104 = t2089*t1952;
  t2337 = -0.01315*t2329;
  t2352 = -0.62554*t2341;
  t2355 = 0. + t2337 + t2352;
  t2159 = t2063*t1928;
  t2160 = t2050*t1952;
  t2164 = t2159 + t2160;
  t2359 = -0.62554*t2329;
  t2363 = 0.01315*t2341;
  t2369 = 0. + t2359 + t2363;
  t2174 = t2050*t1928;
  t2179 = -1.*t2063*t1952;
  t2182 = t2174 + t2179;
  t2116 = t2063*t1842;
  t2122 = t2050*t1867;
  t2125 = t2116 + t2122;
  t2131 = t2050*t1842;
  t2136 = -1.*t2063*t1867;
  t2141 = t2131 + t2136;
  t2150 = t2076*t1978;
  t2152 = t2089*t1993;
  t2198 = -1.*t2076*t1842;
  t2201 = -1.*t2089*t1867;
  t2262 = -1.*t2076*t1928;
  t2268 = -1.*t2089*t1952;
  t2292 = t2076*t1842;
  t2297 = t2089*t1867;
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
  p_output1[19]=t9;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t18*var1[2];
  p_output1[25]=-1.*t47*var1[2];
  p_output1[26]=t18*var1[0] + t47*var1[1];
  p_output1[27]=-1.*t47;
  p_output1[28]=t18;
  p_output1[29]=0;
  p_output1[30]=t147 + t166;
  p_output1[31]=t192 + t200;
  p_output1[32]=t228 + t232;
  p_output1[33]=t252;
  p_output1[34]=t268;
  p_output1[35]=t269;
  p_output1[36]=t147 + t166 - 0.135*t331 + 0.07996*t374;
  p_output1[37]=t192 + t200 - 0.135*t419 + 0.07996*t472;
  p_output1[38]=t228 + t232 - 0.135*t111*t281 + 0.07996*t111*t302;
  p_output1[39]=0. + t252;
  p_output1[40]=0. + t268;
  p_output1[41]=0. + t269;
  p_output1[42]=0.135*t111*t18 + 0.08055*t682 + (0. + t701 + t721 + t744)*t759 + t664*(0. + t601 + t621 + var1[1]);
  p_output1[43]=0.135*t111*t47 + 0.08055*t819 + t664*(0. + t790 + t792 + t9) + t871*(0. + t831 + t838 + var1[2]);
  p_output1[44]=-0.135*t165 + 0.08055*t925 + t871*(0. + t951 + t957 + t969) + t759*(0. + t982 + t988 + var1[0]);
  p_output1[45]=0. + t852 + t858;
  p_output1[46]=0. + t751 + t755;
  p_output1[47]=0. + t641 + t656;
  p_output1[48]=-0.01004*t1207 - 1.*t1142*(0. + t1092 + t1122 + t701 + t721 + t744) + 0.08055*t871 - 1.*t1176*(0. + t1162 + t1165 + t601 + t621 + var1[1]);
  p_output1[49]=-0.01004*t1297 + 0.08055*t759 - 1.*t1176*(0. + t1271 + t1277 + t790 + t792 + t9) - 1.*t1266*(0. + t1235 + t1236 + t831 + t838 + var1[2]);
  p_output1[50]=-0.01004*t1392 + 0.08055*t664 - 1.*t1266*(0. + t1334 + t1342 + t951 + t957 + t969) - 1.*t1142*(0. + t1369 + t1370 + t982 + t988 + var1[0]);
  p_output1[51]=t1407;
  p_output1[52]=t1429;
  p_output1[53]=t1447;
  p_output1[54]=-0.13004*t1545 + 0.08055*t1571 - 1.*t1142*(0. + t1092 + t1122 + t1489 + t1500 + t701 + t721 + t744) - 1.*t1176*(0. + t1162 + t1165 + t1513 + t1514 + t601 + t621 + var1[1]);
  p_output1[55]=-0.13004*t1629 + 0.08055*t1639 - 1.*t1176*(0. + t1271 + t1277 + t1600 + t1604 + t790 + t792 + t9) - 1.*t1266*(0. + t1235 + t1236 + t1592 + t1593 + t831 + t838 + var1[2]);
  p_output1[56]=-0.13004*t1723 + 0.08055*t1759 - 1.*t1266*(0. + t1334 + t1342 + t1699 + t1704 + t951 + t957 + t969) - 1.*t1142*(0. + t1369 + t1370 + t1668 + t1670 + t982 + t988 + var1[0]);
  p_output1[57]=t1407;
  p_output1[58]=t1429;
  p_output1[59]=t1447;
  p_output1[60]=0.03315*t1842 - 0.19074*t1867 - 1.*t1142*(0. + t1092 + t1122 + t1489 + t1500 + t1797 + t1819 + t701 + t721 + t744) - 1.*t1176*(0. + t1162 + t1165 + t1513 + t1514 + t1824 + t1829 + t601 + t621 + var1[1]);
  p_output1[61]=0.03315*t1928 - 0.19074*t1952 - 1.*t1176*(0. + t1271 + t1277 + t1600 + t1604 + t1956 + t1963 + t790 + t792 + t9) - 1.*t1266*(0. + t1235 + t1236 + t1592 + t1593 + t1891 + t1895 + t831 + t838 + var1[2]);
  p_output1[62]=0.03315*t1978 - 0.19074*t1993 - 1.*t1266*(0. + t1334 + t1342 + t1699 + t1704 + t2005 + t2012 + t951 + t957 + t969) - 1.*t1142*(0. + t1369 + t1370 + t1668 + t1670 + t2024 + t2031 + t982 + t988 + var1[0]);
  p_output1[63]=t1407;
  p_output1[64]=t1429;
  p_output1[65]=t1447;
  p_output1[66]=-0.62554*t2125 + 0.01315*t2141 - 1.*t1142*(0. + t1092 + t1122 + t1489 + t1500 + t1797 + t1819 + t2082 + t2090 + t701 + t721 + t744) - 1.*t1176*(0. + t1162 + t1165 + t1513 + t1514 + t1824 + t1829 + t2101 + t2104 + t601 + t621 + var1[1]);
  p_output1[67]=-0.62554*t2164 + 0.01315*t2182 - 1.*t1176*(0. + t1271 + t1277 + t1600 + t1604 + t1956 + t1963 + t2198 + t2201 + t790 + t792 + t9) - 1.*t1266*(0. + t1235 + t1236 + t1592 + t1593 + t1891 + t1895 + t2150 + t2152 + t831 + t838 + var1[2]);
  p_output1[68]=-0.62554*t2233 + 0.01315*t2258 - 1.*t1266*(0. + t1334 + t1342 + t1699 + t1704 + t2005 + t2012 + t2262 + t2268 + t951 + t957 + t969) - 1.*t1142*(0. + t1369 + t1370 + t1668 + t1670 + t2024 + t2031 + t2292 + t2297 + t982 + t988 + var1[0]);
  p_output1[69]=t1407;
  p_output1[70]=t1429;
  p_output1[71]=t1447;
  p_output1[72]=0.05315*(t2141*t2307 - 1.*t2125*t2341) - 1.03354*(t2125*t2307 + t2141*t2341) - 1.*t1142*(0. + t1092 + t1122 + t1489 + t1500 + t1797 + t1819 + t2082 + t2090 - 1.*t2233*t2355 - 1.*t2258*t2369 + t701 + t721 + t744) - 1.*t1176*(0. + t1162 + t1165 + t1513 + t1514 + t1824 + t1829 + t2101 + t2104 + t2164*t2355 + t2182*t2369 + t601 + t621 + var1[1]);
  p_output1[73]=0.05315*(t2182*t2307 - 1.*t2164*t2341) - 1.03354*(t2164*t2307 + t2182*t2341) - 1.*t1176*(0. + t1271 + t1277 + t1600 + t1604 + t1956 + t1963 + t2198 + t2201 - 1.*t2125*t2355 - 1.*t2141*t2369 + t790 + t792 + t9) - 1.*t1266*(0. + t1235 + t1236 + t1592 + t1593 + t1891 + t1895 + t2150 + t2152 + t2233*t2355 + t2258*t2369 + t831 + t838 + var1[2]);
  p_output1[74]=0.05315*(t2258*t2307 - 1.*t2233*t2341) - 1.03354*(t2233*t2307 + t2258*t2341) - 1.*t1266*(0. + t1334 + t1342 + t1699 + t1704 + t2005 + t2012 + t2262 + t2268 - 1.*t2164*t2355 - 1.*t2182*t2369 + t951 + t957 + t969) - 1.*t1142*(0. + t1369 + t1370 + t1668 + t1670 + t2024 + t2031 + t2292 + t2297 + t2125*t2355 + t2141*t2369 + t982 + t988 + var1[0]);
  p_output1[75]=t1407;
  p_output1[76]=t1429;
  p_output1[77]=t1447;
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

#include "Js_LeftToeBottomBack_mex.hh"

namespace SymExpression
{

void Js_LeftToeBottomBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
