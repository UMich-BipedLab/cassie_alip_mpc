/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:39 GMT-04:00
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
  double t34;
  double t74;
  double t120;
  double t122;
  double t121;
  double t128;
  double t239;
  double t260;
  double t144;
  double t178;
  double t191;
  double t192;
  double t200;
  double t223;
  double t235;
  double t317;
  double t327;
  double t358;
  double t371;
  double t374;
  double t377;
  double t480;
  double t483;
  double t484;
  double t487;
  double t291;
  double t294;
  double t303;
  double t243;
  double t265;
  double t268;
  double t485;
  double t493;
  double t498;
  double t514;
  double t519;
  double t525;
  double t28;
  double t540;
  double t541;
  double t550;
  double t729;
  double t735;
  double t737;
  double t638;
  double t648;
  double t649;
  double t577;
  double t585;
  double t618;
  double t778;
  double t781;
  double t788;
  double t857;
  double t862;
  double t867;
  double t876;
  double t692;
  double t702;
  double t703;
  double t513;
  double t527;
  double t873;
  double t881;
  double t882;
  double t887;
  double t896;
  double t912;
  double t554;
  double t564;
  double t571;
  double t719;
  double t721;
  double t668;
  double t669;
  double t986;
  double t1004;
  double t1007;
  double t805;
  double t807;
  double t808;
  double t1079;
  double t1094;
  double t1103;
  double t822;
  double t829;
  double t935;
  double t937;
  double t940;
  double t883;
  double t913;
  double t1204;
  double t1205;
  double t1209;
  double t1293;
  double t1297;
  double t1298;
  double t1301;
  double t954;
  double t957;
  double t1134;
  double t1138;
  double t1140;
  double t1299;
  double t1304;
  double t1315;
  double t1325;
  double t1328;
  double t1329;
  double t1012;
  double t1019;
  double t1038;
  double t1057;
  double t1074;
  double t1124;
  double t1126;
  double t1189;
  double t1191;
  double t1156;
  double t1159;
  double t1223;
  double t1229;
  double t1241;
  double t1249;
  double t1257;
  double t1268;
  double t1281;
  double t1284;
  double t1285;
  double t1316;
  double t1332;
  double t1533;
  double t1551;
  double t1553;
  double t1592;
  double t1593;
  double t1596;
  double t1602;
  double t1565;
  double t1572;
  double t1573;
  double t1349;
  double t1353;
  double t1598;
  double t1613;
  double t1617;
  double t1462;
  double t1472;
  double t1476;
  double t1625;
  double t1629;
  double t1634;
  double t1484;
  double t1485;
  double t1490;
  double t1368;
  double t1372;
  double t1383;
  double t1392;
  double t1398;
  double t1399;
  double t1417;
  double t1423;
  double t1436;
  double t1441;
  double t1509;
  double t1516;
  double t1502;
  double t1505;
  double t1623;
  double t1666;
  double t1785;
  double t1789;
  double t1795;
  double t1876;
  double t1880;
  double t1881;
  double t1891;
  double t1803;
  double t1806;
  double t1815;
  double t1681;
  double t1682;
  double t1885;
  double t1896;
  double t1897;
  double t1741;
  double t1742;
  double t1750;
  double t1904;
  double t1909;
  double t1910;
  double t1756;
  double t1763;
  double t1765;
  double t1690;
  double t1699;
  double t1703;
  double t1708;
  double t1712;
  double t1713;
  double t1719;
  double t1724;
  double t1772;
  double t1773;
  double t1834;
  double t1838;
  double t1855;
  double t1863;
  double t1898;
  double t1917;
  double t2058;
  double t2062;
  double t2064;
  double t2129;
  double t2140;
  double t2141;
  double t2156;
  double t2088;
  double t2092;
  double t2101;
  double t1928;
  double t1930;
  double t2146;
  double t2166;
  double t2169;
  double t1983;
  double t1992;
  double t2004;
  double t2178;
  double t2183;
  double t2188;
  double t2014;
  double t2016;
  double t2026;
  double t1933;
  double t1935;
  double t1941;
  double t1961;
  double t1967;
  double t1969;
  double t1975;
  double t1978;
  double t2039;
  double t2040;
  double t2106;
  double t2107;
  double t2118;
  double t2119;
  t34 = Cos(var1[3]);
  t74 = Sin(var1[3]);
  t120 = Cos(var1[4]);
  t122 = Sin(var1[4]);
  t121 = -1.*var1[2]*t120*t74;
  t128 = -1.*var1[1]*t122;
  t239 = Cos(var1[5]);
  t260 = Sin(var1[5]);
  t144 = var1[2]*t34*t120;
  t178 = var1[0]*t122;
  t191 = -1.*var1[1]*t34*t120;
  t192 = var1[0]*t120*t74;
  t200 = t34*t120;
  t223 = t120*t74;
  t235 = -1.*t122;
  t317 = t239*t74*t122;
  t327 = -1.*t34*t260;
  t358 = t317 + t327;
  t371 = t34*t239;
  t374 = t74*t122*t260;
  t377 = t371 + t374;
  t480 = Cos(var1[6]);
  t483 = -1.*t480;
  t484 = 1. + t483;
  t487 = Sin(var1[6]);
  t291 = -1.*t239*t74;
  t294 = t34*t122*t260;
  t303 = t291 + t294;
  t243 = t34*t239*t122;
  t265 = t74*t260;
  t268 = t243 + t265;
  t485 = 0.07996*t484;
  t493 = -0.135*t487;
  t498 = 0. + t485 + t493;
  t514 = 0.135*t484;
  t519 = 0.07996*t487;
  t525 = 0. + t514 + t519;
  t28 = -1.*var1[0];
  t540 = t120*t239*t480;
  t541 = -1.*t120*t260*t487;
  t550 = t540 + t541;
  t729 = t480*t268;
  t735 = -1.*t303*t487;
  t737 = t729 + t735;
  t638 = t480*t358;
  t648 = -1.*t377*t487;
  t649 = t638 + t648;
  t577 = -1.*var1[2];
  t585 = -1.*t120*t239*t498;
  t618 = -1.*t120*t260*t525;
  t778 = t120*t480*t260;
  t781 = t120*t239*t487;
  t788 = t778 + t781;
  t857 = Cos(var1[7]);
  t862 = -1.*t857;
  t867 = 1. + t862;
  t876 = Sin(var1[7]);
  t692 = t480*t377;
  t702 = t358*t487;
  t703 = t692 + t702;
  t513 = t358*t498;
  t527 = t377*t525;
  t873 = 0.135*t867;
  t881 = 0.08055*t876;
  t882 = 0. + t873 + t881;
  t887 = -0.08055*t867;
  t896 = 0.135*t876;
  t912 = 0. + t887 + t896;
  t554 = t480*t303;
  t564 = t268*t487;
  t571 = t554 + t564;
  t719 = t120*t239*t498;
  t721 = t120*t260*t525;
  t668 = -1.*t268*t498;
  t669 = -1.*t303*t525;
  t986 = t857*t788;
  t1004 = t122*t876;
  t1007 = t986 + t1004;
  t805 = -1.*var1[1];
  t807 = -1.*t358*t498;
  t808 = -1.*t377*t525;
  t1079 = t857*t571;
  t1094 = -1.*t34*t120*t876;
  t1103 = t1079 + t1094;
  t822 = t268*t498;
  t829 = t303*t525;
  t935 = t857*t703;
  t937 = -1.*t120*t74*t876;
  t940 = t935 + t937;
  t883 = -1.*t788*t882;
  t913 = t122*t912;
  t1204 = -1.*t857*t122;
  t1205 = t788*t876;
  t1209 = t1204 + t1205;
  t1293 = Cos(var1[8]);
  t1297 = -1.*t1293;
  t1298 = 1. + t1297;
  t1301 = Sin(var1[8]);
  t954 = t703*t882;
  t957 = t120*t74*t912;
  t1134 = t120*t857*t74;
  t1138 = t703*t876;
  t1140 = t1134 + t1138;
  t1299 = -0.08055*t1298;
  t1304 = -0.01004*t1301;
  t1315 = 0. + t1299 + t1304;
  t1325 = -0.01004*t1298;
  t1328 = 0.08055*t1301;
  t1329 = 0. + t1325 + t1328;
  t1012 = t34*t120*t857;
  t1019 = t571*t876;
  t1038 = t1012 + t1019;
  t1057 = t788*t882;
  t1074 = -1.*t122*t912;
  t1124 = -1.*t571*t882;
  t1126 = -1.*t34*t120*t912;
  t1189 = t571*t882;
  t1191 = t34*t120*t912;
  t1156 = -1.*t703*t882;
  t1159 = -1.*t120*t74*t912;
  t1223 = -1.*t857*t571;
  t1229 = t34*t120*t876;
  t1241 = 0. + t1223 + t1229;
  t1249 = -1.*t857*t703;
  t1257 = t120*t74*t876;
  t1268 = 0. + t1249 + t1257;
  t1281 = -1.*t857*t788;
  t1284 = -1.*t122*t876;
  t1285 = 0. + t1281 + t1284;
  t1316 = -1.*t1209*t1315;
  t1332 = -1.*t550*t1329;
  t1533 = t1293*t1209;
  t1551 = t550*t1301;
  t1553 = t1533 + t1551;
  t1592 = Cos(var1[9]);
  t1593 = -1.*t1592;
  t1596 = 1. + t1593;
  t1602 = Sin(var1[9]);
  t1565 = t1293*t550;
  t1572 = -1.*t1209*t1301;
  t1573 = t1565 + t1572;
  t1349 = t1140*t1315;
  t1353 = t649*t1329;
  t1598 = -0.08055*t1596;
  t1613 = -0.13004*t1602;
  t1617 = 0. + t1598 + t1613;
  t1462 = t1293*t1140;
  t1472 = t649*t1301;
  t1476 = t1462 + t1472;
  t1625 = -0.13004*t1596;
  t1629 = 0.08055*t1602;
  t1634 = 0. + t1625 + t1629;
  t1484 = t1293*t649;
  t1485 = -1.*t1140*t1301;
  t1490 = t1484 + t1485;
  t1368 = t1293*t1038;
  t1372 = t737*t1301;
  t1383 = t1368 + t1372;
  t1392 = t1293*t737;
  t1398 = -1.*t1038*t1301;
  t1399 = t1392 + t1398;
  t1417 = t1209*t1315;
  t1423 = t550*t1329;
  t1436 = -1.*t1038*t1315;
  t1441 = -1.*t737*t1329;
  t1509 = -1.*t1140*t1315;
  t1516 = -1.*t649*t1329;
  t1502 = t1038*t1315;
  t1505 = t737*t1329;
  t1623 = -1.*t1617*t1553;
  t1666 = -1.*t1634*t1573;
  t1785 = -1.*t1602*t1553;
  t1789 = t1592*t1573;
  t1795 = t1785 + t1789;
  t1876 = Cos(var1[10]);
  t1880 = -1.*t1876;
  t1881 = 1. + t1880;
  t1891 = Sin(var1[10]);
  t1803 = t1592*t1553;
  t1806 = t1602*t1573;
  t1815 = t1803 + t1806;
  t1681 = t1617*t1476;
  t1682 = t1634*t1490;
  t1885 = -0.19074*t1881;
  t1896 = 0.03315*t1891;
  t1897 = 0. + t1885 + t1896;
  t1741 = -1.*t1602*t1476;
  t1742 = t1592*t1490;
  t1750 = t1741 + t1742;
  t1904 = -0.03315*t1881;
  t1909 = -0.19074*t1891;
  t1910 = 0. + t1904 + t1909;
  t1756 = t1592*t1476;
  t1763 = t1602*t1490;
  t1765 = t1756 + t1763;
  t1690 = -1.*t1602*t1383;
  t1699 = t1592*t1399;
  t1703 = t1690 + t1699;
  t1708 = t1592*t1383;
  t1712 = t1602*t1399;
  t1713 = t1708 + t1712;
  t1719 = t1617*t1553;
  t1724 = t1634*t1573;
  t1772 = -1.*t1617*t1383;
  t1773 = -1.*t1634*t1399;
  t1834 = -1.*t1617*t1476;
  t1838 = -1.*t1634*t1490;
  t1855 = t1617*t1383;
  t1863 = t1634*t1399;
  t1898 = -1.*t1897*t1795;
  t1917 = -1.*t1910*t1815;
  t2058 = t1891*t1795;
  t2062 = t1876*t1815;
  t2064 = t2058 + t2062;
  t2129 = Cos(var1[11]);
  t2140 = -1.*t2129;
  t2141 = 1. + t2140;
  t2156 = Sin(var1[11]);
  t2088 = t1876*t1795;
  t2092 = -1.*t1891*t1815;
  t2101 = t2088 + t2092;
  t1928 = t1897*t1750;
  t1930 = t1910*t1765;
  t2146 = -0.01315*t2141;
  t2166 = -0.62554*t2156;
  t2169 = 0. + t2146 + t2166;
  t1983 = t1891*t1750;
  t1992 = t1876*t1765;
  t2004 = t1983 + t1992;
  t2178 = -0.62554*t2141;
  t2183 = 0.01315*t2156;
  t2188 = 0. + t2178 + t2183;
  t2014 = t1876*t1750;
  t2016 = -1.*t1891*t1765;
  t2026 = t2014 + t2016;
  t1933 = t1891*t1703;
  t1935 = t1876*t1713;
  t1941 = t1933 + t1935;
  t1961 = t1876*t1703;
  t1967 = -1.*t1891*t1713;
  t1969 = t1961 + t1967;
  t1975 = t1897*t1795;
  t1978 = t1910*t1815;
  t2039 = -1.*t1897*t1703;
  t2040 = -1.*t1910*t1713;
  t2106 = -1.*t1897*t1750;
  t2107 = -1.*t1910*t1765;
  t2118 = t1897*t1703;
  t2119 = t1910*t1713;
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
  p_output1[19]=t28;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t34*var1[2];
  p_output1[25]=-1.*t74*var1[2];
  p_output1[26]=t34*var1[0] + t74*var1[1];
  p_output1[27]=-1.*t74;
  p_output1[28]=t34;
  p_output1[29]=0;
  p_output1[30]=t121 + t128;
  p_output1[31]=t144 + t178;
  p_output1[32]=t191 + t192;
  p_output1[33]=t200;
  p_output1[34]=t223;
  p_output1[35]=t235;
  p_output1[36]=t121 + t128 - 0.135*t268 + 0.07996*t303;
  p_output1[37]=t144 + t178 - 0.135*t358 + 0.07996*t377;
  p_output1[38]=t191 + t192 - 0.135*t120*t239 + 0.07996*t120*t260;
  p_output1[39]=0. + t200;
  p_output1[40]=0. + t223;
  p_output1[41]=0. + t235;
  p_output1[42]=0.135*t120*t34 + 0.08055*t571 + (0. + t577 + t585 + t618)*t649 + t550*(0. + t513 + t527 + var1[1]);
  p_output1[43]=t550*(0. + t28 + t668 + t669) + 0.08055*t703 + 0.135*t120*t74 + t737*(0. + t719 + t721 + var1[2]);
  p_output1[44]=-0.135*t122 + 0.08055*t788 + t737*(0. + t805 + t807 + t808) + t649*(0. + t822 + t829 + var1[0]);
  p_output1[45]=0. + t729 + t735;
  p_output1[46]=0. + t638 + t648;
  p_output1[47]=0. + t540 + t541;
  p_output1[48]=-0.01004*t1038 + 0.08055*t737 - 1.*(0. + t577 + t585 + t618 + t883 + t913)*t940 - 1.*t1007*(0. + t513 + t527 + t954 + t957 + var1[1]);
  p_output1[49]=-0.01004*t1140 + 0.08055*t649 - 1.*t1007*(0. + t1124 + t1126 + t28 + t668 + t669) - 1.*t1103*(0. + t1057 + t1074 + t719 + t721 + var1[2]);
  p_output1[50]=-0.01004*t1209 + 0.08055*t550 - 1.*t1103*(0. + t1156 + t1159 + t805 + t807 + t808) - 1.*t940*(0. + t1189 + t1191 + t822 + t829 + var1[0]);
  p_output1[51]=t1241;
  p_output1[52]=t1268;
  p_output1[53]=t1285;
  p_output1[54]=-0.13004*t1383 + 0.08055*t1399 - 1.*(0. + t1316 + t1332 + t577 + t585 + t618 + t883 + t913)*t940 - 1.*t1007*(0. + t1349 + t1353 + t513 + t527 + t954 + t957 + var1[1]);
  p_output1[55]=-0.13004*t1476 + 0.08055*t1490 - 1.*t1007*(0. + t1124 + t1126 + t1436 + t1441 + t28 + t668 + t669) - 1.*t1103*(0. + t1057 + t1074 + t1417 + t1423 + t719 + t721 + var1[2]);
  p_output1[56]=-0.13004*t1553 + 0.08055*t1573 - 1.*t1103*(0. + t1156 + t1159 + t1509 + t1516 + t805 + t807 + t808) - 1.*t940*(0. + t1189 + t1191 + t1502 + t1505 + t822 + t829 + var1[0]);
  p_output1[57]=t1241;
  p_output1[58]=t1268;
  p_output1[59]=t1285;
  p_output1[60]=0.03315*t1703 - 0.19074*t1713 - 1.*(0. + t1316 + t1332 + t1623 + t1666 + t577 + t585 + t618 + t883 + t913)*t940 - 1.*t1007*(0. + t1349 + t1353 + t1681 + t1682 + t513 + t527 + t954 + t957 + var1[1]);
  p_output1[61]=0.03315*t1750 - 0.19074*t1765 - 1.*t1007*(0. + t1124 + t1126 + t1436 + t1441 + t1772 + t1773 + t28 + t668 + t669) - 1.*t1103*(0. + t1057 + t1074 + t1417 + t1423 + t1719 + t1724 + t719 + t721 + var1[2]);
  p_output1[62]=0.03315*t1795 - 0.19074*t1815 - 1.*t1103*(0. + t1156 + t1159 + t1509 + t1516 + t1834 + t1838 + t805 + t807 + t808) - 1.*t940*(0. + t1189 + t1191 + t1502 + t1505 + t1855 + t1863 + t822 + t829 + var1[0]);
  p_output1[63]=t1241;
  p_output1[64]=t1268;
  p_output1[65]=t1285;
  p_output1[66]=-0.62554*t1941 + 0.01315*t1969 - 1.*(0. + t1316 + t1332 + t1623 + t1666 + t1898 + t1917 + t577 + t585 + t618 + t883 + t913)*t940 - 1.*t1007*(0. + t1349 + t1353 + t1681 + t1682 + t1928 + t1930 + t513 + t527 + t954 + t957 + var1[1]);
  p_output1[67]=-0.62554*t2004 + 0.01315*t2026 - 1.*t1007*(0. + t1124 + t1126 + t1436 + t1441 + t1772 + t1773 + t2039 + t2040 + t28 + t668 + t669) - 1.*t1103*(0. + t1057 + t1074 + t1417 + t1423 + t1719 + t1724 + t1975 + t1978 + t719 + t721 + var1[2]);
  p_output1[68]=-0.62554*t2064 + 0.01315*t2101 - 1.*t1103*(0. + t1156 + t1159 + t1509 + t1516 + t1834 + t1838 + t2106 + t2107 + t805 + t807 + t808) - 1.*t940*(0. + t1189 + t1191 + t1502 + t1505 + t1855 + t1863 + t2118 + t2119 + t822 + t829 + var1[0]);
  p_output1[69]=t1241;
  p_output1[70]=t1268;
  p_output1[71]=t1285;
  p_output1[72]=0.05315*(t1969*t2129 - 1.*t1941*t2156) - 1.03354*(t1941*t2129 + t1969*t2156) - 1.*(0. + t1316 + t1332 + t1623 + t1666 + t1898 + t1917 - 1.*t2064*t2169 - 1.*t2101*t2188 + t577 + t585 + t618 + t883 + t913)*t940 - 1.*t1007*(0. + t1349 + t1353 + t1681 + t1682 + t1928 + t1930 + t2004*t2169 + t2026*t2188 + t513 + t527 + t954 + t957 + var1[1]);
  p_output1[73]=0.05315*(t2026*t2129 - 1.*t2004*t2156) - 1.03354*(t2004*t2129 + t2026*t2156) - 1.*t1007*(0. + t1124 + t1126 + t1436 + t1441 + t1772 + t1773 + t2039 + t2040 - 1.*t1941*t2169 - 1.*t1969*t2188 + t28 + t668 + t669) - 1.*t1103*(0. + t1057 + t1074 + t1417 + t1423 + t1719 + t1724 + t1975 + t1978 + t2064*t2169 + t2101*t2188 + t719 + t721 + var1[2]);
  p_output1[74]=0.05315*(t2101*t2129 - 1.*t2064*t2156) - 1.03354*(t2064*t2129 + t2101*t2156) - 1.*t1103*(0. + t1156 + t1159 + t1509 + t1516 + t1834 + t1838 + t2106 + t2107 - 1.*t2004*t2169 - 1.*t2026*t2188 + t805 + t807 + t808) - 1.*t940*(0. + t1189 + t1191 + t1502 + t1505 + t1855 + t1863 + t2118 + t2119 + t1941*t2169 + t1969*t2188 + t822 + t829 + var1[0]);
  p_output1[75]=t1241;
  p_output1[76]=t1268;
  p_output1[77]=t1285;
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

#include "Js_LeftToeBottomFront_mex.hh"

namespace SymExpression
{

void Js_LeftToeBottomFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
