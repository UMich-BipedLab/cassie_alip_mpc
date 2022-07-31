/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:06 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightTarsus_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t348;
  double t300;
  double t322;
  double t359;
  double t447;
  double t340;
  double t405;
  double t419;
  double t290;
  double t472;
  double t482;
  double t484;
  double t513;
  double t433;
  double t488;
  double t494;
  double t261;
  double t515;
  double t544;
  double t574;
  double t609;
  double t512;
  double t586;
  double t590;
  double t246;
  double t616;
  double t618;
  double t628;
  double t656;
  double t673;
  double t674;
  double t212;
  double t733;
  double t747;
  double t761;
  double t603;
  double t692;
  double t719;
  double t786;
  double t13;
  double t937;
  double t944;
  double t948;
  double t932;
  double t969;
  double t973;
  double t991;
  double t1009;
  double t986;
  double t1010;
  double t1012;
  double t1016;
  double t1022;
  double t1026;
  double t1035;
  double t1037;
  double t809;
  double t815;
  double t816;
  double t847;
  double t1058;
  double t1060;
  double t1082;
  double t1013;
  double t1040;
  double t1045;
  double t1202;
  double t1234;
  double t1266;
  double t1269;
  double t1249;
  double t1250;
  double t725;
  double t789;
  double t792;
  double t828;
  double t835;
  double t842;
  double t851;
  double t861;
  double t867;
  double t885;
  double t888;
  double t1052;
  double t1087;
  double t1106;
  double t1115;
  double t1137;
  double t1139;
  double t1140;
  double t1155;
  double t1160;
  double t1173;
  double t1181;
  double t1261;
  double t1275;
  double t1277;
  double t1292;
  double t1299;
  double t1300;
  double t1301;
  double t1304;
  double t1309;
  double t1323;
  double t1450;
  double t1463;
  double t1464;
  double t1641;
  double t1662;
  double t1630;
  double t1632;
  double t1668;
  double t1672;
  double t1676;
  double t1678;
  double t1698;
  double t1699;
  double t1704;
  double t1707;
  double t1615;
  double t1617;
  double t1634;
  double t1635;
  double t1692;
  double t1713;
  double t1733;
  double t1747;
  double t1748;
  double t1759;
  double t1761;
  double t1768;
  double t1587;
  double t1597;
  double t1622;
  double t1626;
  double t1736;
  double t1779;
  double t1782;
  double t1801;
  double t1803;
  double t1805;
  double t1806;
  double t1808;
  double t1528;
  double t1545;
  double t1566;
  double t1576;
  double t1577;
  double t1579;
  double t1581;
  double t1599;
  double t1603;
  double t1792;
  double t1810;
  double t1812;
  double t1816;
  double t1820;
  double t1825;
  double t1827;
  double t1828;
  double t1833;
  double t1836;
  double t1482;
  double t1484;
  double t1522;
  double t1849;
  double t1854;
  double t1855;
  double t1857;
  double t1859;
  double t1555;
  double t1559;
  double t1822;
  double t1840;
  double t1845;
  double t1876;
  double t1883;
  double t1884;
  double t1889;
  double t1895;
  double t1897;
  double t1909;
  double t1846;
  double t1860;
  double t1866;
  double t1894;
  double t1910;
  double t1912;
  double t1930;
  double t1934;
  double t1941;
  double t1420;
  double t1422;
  double t1424;
  double t1870;
  double t1965;
  double t1998;
  double t2023;
  double t2048;
  double t2077;
  double t2093;
  double t2110;
  double t2140;
  double t2156;
  double t2186;
  double t2203;
  double t2419;
  double t2425;
  t348 = Cos(var1[17]);
  t300 = Cos(var1[18]);
  t322 = Sin(var1[17]);
  t359 = Sin(var1[18]);
  t447 = Cos(var1[16]);
  t340 = t300*t322;
  t405 = t348*t359;
  t419 = 0. + t340 + t405;
  t290 = Sin(var1[16]);
  t472 = -1.*t348*t300;
  t482 = t322*t359;
  t484 = 0. + t472 + t482;
  t513 = Sin(var1[15]);
  t433 = t290*t419;
  t488 = t447*t484;
  t494 = 0. + t433 + t488;
  t261 = Cos(var1[15]);
  t515 = t447*t419;
  t544 = -1.*t290*t484;
  t574 = 0. + t515 + t544;
  t609 = Cos(var1[13]);
  t512 = t261*t494;
  t586 = t513*t574;
  t590 = 0. + t512 + t586;
  t246 = Sin(var1[13]);
  t616 = Sin(var1[14]);
  t618 = -1.*t513*t494;
  t628 = t261*t574;
  t656 = 0. + t618 + t628;
  t673 = t616*t656;
  t674 = 0. + t673;
  t212 = Cos(var1[5]);
  t733 = t609*t590;
  t747 = t246*t674;
  t761 = 0. + t733 + t747;
  t603 = -1.*t246*t590;
  t692 = t609*t674;
  t719 = 0. + t603 + t692;
  t786 = Sin(var1[5]);
  t13 = Sin(var1[3]);
  t937 = t348*t300;
  t944 = -1.*t322*t359;
  t948 = 0. + t937 + t944;
  t932 = -1.*t290*t419;
  t969 = t447*t948;
  t973 = 0. + t932 + t969;
  t991 = t290*t948;
  t1009 = 0. + t515 + t991;
  t986 = t513*t973;
  t1010 = t261*t1009;
  t1012 = 0. + t986 + t1010;
  t1016 = t261*t973;
  t1022 = -1.*t513*t1009;
  t1026 = 0. + t1016 + t1022;
  t1035 = t616*t1026;
  t1037 = 0. + t1035;
  t809 = Cos(var1[3]);
  t815 = Cos(var1[4]);
  t816 = Cos(var1[14]);
  t847 = Sin(var1[4]);
  t1058 = t609*t1012;
  t1060 = t246*t1037;
  t1082 = 0. + t1058 + t1060;
  t1013 = -1.*t246*t1012;
  t1040 = t609*t1037;
  t1045 = 0. + t1013 + t1040;
  t1202 = -1.*t816;
  t1234 = 0. + t1202;
  t1266 = t1234*t246;
  t1269 = 0. + t1266;
  t1249 = t609*t1234;
  t1250 = 0. + t1249;
  t725 = t212*t719;
  t789 = -1.*t761*t786;
  t792 = 0. + t725 + t789;
  t828 = t816*t656;
  t835 = 0. + t828;
  t842 = t815*t835;
  t851 = t212*t761;
  t861 = t719*t786;
  t867 = 0. + t851 + t861;
  t885 = t847*t867;
  t888 = 0. + t842 + t885;
  t1052 = t212*t1045;
  t1087 = -1.*t1082*t786;
  t1106 = 0. + t1052 + t1087;
  t1115 = t816*t1026;
  t1137 = 0. + t1115;
  t1139 = t815*t1137;
  t1140 = t212*t1082;
  t1155 = t1045*t786;
  t1160 = 0. + t1140 + t1155;
  t1173 = t847*t1160;
  t1181 = 0. + t1139 + t1173;
  t1261 = t1250*t212;
  t1275 = -1.*t1269*t786;
  t1277 = 0. + t1261 + t1275;
  t1292 = 0. + t616;
  t1299 = t815*t1292;
  t1300 = t212*t1269;
  t1301 = t1250*t786;
  t1304 = 0. + t1300 + t1301;
  t1309 = t847*t1304;
  t1323 = 0. + t1299 + t1309;
  t1450 = -1.*t1137*t847;
  t1463 = t815*t1160;
  t1464 = 0. + t1450 + t1463;
  t1641 = -1.*t300;
  t1662 = 1. + t1641;
  t1630 = -1.*t348;
  t1632 = 1. + t1630;
  t1668 = -0.62554*t1662;
  t1672 = -0.73604*t300;
  t1676 = -0.030599999999999995*t359;
  t1678 = 0. + t1668 + t1672 + t1676;
  t1698 = -0.01315*t1662;
  t1699 = -0.04375*t300;
  t1704 = 0.11050000000000004*t359;
  t1707 = 0. + t1698 + t1699 + t1704;
  t1615 = -1.*t447;
  t1617 = 1. + t1615;
  t1634 = -0.03315*t1632;
  t1635 = -0.19074*t322;
  t1692 = -1.*t322*t1678;
  t1713 = t348*t1707;
  t1733 = 0. + t1634 + t1635 + t1692 + t1713;
  t1747 = -0.19074*t1632;
  t1748 = 0.03315*t322;
  t1759 = t348*t1678;
  t1761 = t322*t1707;
  t1768 = 0. + t1747 + t1748 + t1759 + t1761;
  t1587 = -1.*t261;
  t1597 = 1. + t1587;
  t1622 = -0.13004*t1617;
  t1626 = 0.08055*t290;
  t1736 = t290*t1733;
  t1779 = t447*t1768;
  t1782 = 0. + t1622 + t1626 + t1736 + t1779;
  t1801 = -0.08055*t1617;
  t1803 = -0.13004*t290;
  t1805 = t447*t1733;
  t1806 = -1.*t290*t1768;
  t1808 = 0. + t1801 + t1803 + t1805 + t1806;
  t1528 = -1.*t609;
  t1545 = 1. + t1528;
  t1566 = -1.*t816;
  t1576 = 1. + t1566;
  t1577 = -0.135*t1576;
  t1579 = -0.1318*t816;
  t1581 = 0.08055*t616;
  t1599 = -0.08055*t1597;
  t1603 = -0.01004*t513;
  t1792 = -1.*t513*t1782;
  t1810 = t261*t1808;
  t1812 = 0. + t1599 + t1603 + t1792 + t1810;
  t1816 = t616*t1812;
  t1820 = 0. + t1577 + t1579 + t1581 + t1816;
  t1825 = -0.01004*t1597;
  t1827 = 0.08055*t513;
  t1828 = t261*t1782;
  t1833 = t513*t1808;
  t1836 = 0. + t1825 + t1827 + t1828 + t1833;
  t1482 = -1.*t1292*t847;
  t1484 = t815*t1304;
  t1522 = 0. + t1482 + t1484;
  t1849 = 0.07996*t1545;
  t1854 = 0.135*t246;
  t1855 = t246*t1820;
  t1857 = t609*t1836;
  t1859 = 0. + t1849 + t1854 + t1855 + t1857;
  t1555 = -0.135*t1545;
  t1559 = 0.07996*t246;
  t1822 = t609*t1820;
  t1840 = -1.*t246*t1836;
  t1845 = 0. + t1555 + t1559 + t1822 + t1840;
  t1876 = -0.08055*t1576;
  t1883 = -0.0032000000000000084*t616;
  t1884 = t816*t1812;
  t1889 = 0. + t1876 + t1883 + t1884;
  t1895 = t212*t1859;
  t1897 = t1845*t786;
  t1909 = 0. + t1895 + t1897;
  t1846 = t212*t1845;
  t1860 = -1.*t1859*t786;
  t1866 = 0. + t1846 + t1860;
  t1894 = -1.*t1889*t847;
  t1910 = t815*t1909;
  t1912 = 0. + t1894 + t1910;
  t1930 = t815*t1889;
  t1934 = t847*t1909;
  t1941 = 0. + t1930 + t1934;
  t1420 = -1.*t835*t847;
  t1422 = t815*t867;
  t1424 = 0. + t1420 + t1422;
  t1870 = t1277*t1866;
  t1965 = -1.*t1866*t1106;
  t1998 = -1.*t1277*t1866;
  t2023 = t1866*t792;
  t2048 = t1866*t1106;
  t2077 = -1.*t1866*t792;
  t2093 = t1292*t1889;
  t2110 = -1.*t1889*t1137;
  t2140 = -1.*t1292*t1889;
  t2156 = t1889*t835;
  t2186 = t1889*t1137;
  t2203 = -1.*t1889*t835;
  t2419 = t1836*t1012;
  t2425 = -1.*t1836*t590;
  p_output1[0]=0. - 1.*t13*t792 + t809*t888;
  p_output1[1]=0. - 1.*t1106*t13 + t1181*t809;
  p_output1[2]=0. - 1.*t1277*t13 + t1323*t809;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t792*t809 + t13*t888;
  p_output1[7]=0. + t1181*t13 + t1106*t809;
  p_output1[8]=0. + t13*t1323 + t1277*t809;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1424;
  p_output1[13]=t1464;
  p_output1[14]=t1522;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1464*(t1870 + t1522*t1912 + t1323*t1941) + t1522*(-1.*t1464*t1912 - 1.*t1181*t1941 + t1965);
  p_output1[19]=t1424*(-1.*t1522*t1912 - 1.*t1323*t1941 + t1998) + t1522*(t1424*t1912 + t2023 + t1941*t888);
  p_output1[20]=t1424*(t1464*t1912 + t1181*t1941 + t2048) + t1464*(-1.*t1424*t1912 + t2077 - 1.*t1941*t888);
  p_output1[21]=t1424;
  p_output1[22]=t1464;
  p_output1[23]=t1522;
  p_output1[24]=t1106*(t1870 + t1304*t1909 + t2093) + t1277*(-1.*t1160*t1909 + t1965 + t2110);
  p_output1[25]=(-1.*t1304*t1909 + t1998 + t2140)*t792 + t1277*(t2023 + t2156 + t1909*t867);
  p_output1[26]=(t1160*t1909 + t2048 + t2186)*t792 + t1106*(t2077 + t2203 - 1.*t1909*t867);
  p_output1[27]=t792;
  p_output1[28]=t1106;
  p_output1[29]=t1277;
  p_output1[30]=t1137*(t1250*t1845 + t1269*t1859 + t2093) + t1292*(-1.*t1045*t1845 - 1.*t1082*t1859 + t2110);
  p_output1[31]=t1292*(t2156 + t1845*t719 + t1859*t761) + (-1.*t1250*t1845 - 1.*t1269*t1859 + t2140)*t835;
  p_output1[32]=t1137*(t2203 - 1.*t1845*t719 - 1.*t1859*t761) + (t1045*t1845 + t1082*t1859 + t2186)*t835;
  p_output1[33]=t835;
  p_output1[34]=t1137;
  p_output1[35]=t1292;
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
  p_output1[78]=t1137*(0. + t1234*t1820 + t2093) + t1292*(-1.*t1037*t1820 - 1.*t1012*t1836 + t2110) + 0.135*t590 + 0.07996*t674;
  p_output1[79]=0.135*t1012 + 0.07996*t1037 + t1292*(t2156 + t1836*t590 + t1820*t674) + (0. - 1.*t1234*t1820 + t2140)*t835;
  p_output1[80]=0. + 0.07996*t1234 + t1137*(t2203 + t2425 - 1.*t1820*t674) + (t1037*t1820 + t2186 + t2419)*t835;
  p_output1[81]=t835;
  p_output1[82]=t1137;
  p_output1[83]=t1292;
  p_output1[84]=0. + 0.1318*t1012 - 0.135*t656;
  p_output1[85]=0. - 0.135*t1026 - 0.1318*t590;
  p_output1[86]=-0.08055 + (0. + t1026*t1812 + t2419)*t590 + t1012*(0. + t2425 - 1.*t1812*t656);
  p_output1[87]=t590;
  p_output1[88]=t1012;
  p_output1[89]=0.;
  p_output1[90]=0. - 1.*t1009*t1782 + 0.08055*t494 - 0.01004*t574 - 1.*t1808*t973;
  p_output1[91]=0. + 0.08055*t1009 + t1782*t494 + t1808*t574 - 0.01004*t973;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=0. - 0.13004*t419 - 1.*t1768*t419 + 0.08055*t484 - 1.*t1733*t948;
  p_output1[97]=0. + 0.08055*t419 + t1733*t419 + t1768*t484 - 0.13004*t948;
  p_output1[98]=0.;
  p_output1[99]=0.;
  p_output1[100]=0.;
  p_output1[101]=1.;
  p_output1[102]=0. - 0.03315*t300 - 1.*t1707*t300 - 0.19074*t359 - 1.*t1678*t359;
  p_output1[103]=0. - 0.19074*t300 - 1.*t1678*t300 + 0.03315*t359 + t1707*t359;
  p_output1[104]=0.;
  p_output1[105]=0.;
  p_output1[106]=0.;
  p_output1[107]=1.;
  p_output1[108]=0.030599999999999995;
  p_output1[109]=0.11050000000000004;
  p_output1[110]=0.;
  p_output1[111]=0.;
  p_output1[112]=0.;
  p_output1[113]=1.;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
}



void Jb_RightTarsus_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
