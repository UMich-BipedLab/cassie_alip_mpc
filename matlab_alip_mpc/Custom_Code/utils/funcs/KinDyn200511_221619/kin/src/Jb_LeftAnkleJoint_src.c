/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:02 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftAnkleJoint_src.h"

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
  double t274;
  double t234;
  double t240;
  double t296;
  double t385;
  double t271;
  double t347;
  double t366;
  double t198;
  double t398;
  double t422;
  double t438;
  double t176;
  double t507;
  double t517;
  double t533;
  double t367;
  double t441;
  double t494;
  double t564;
  double t636;
  double t501;
  double t592;
  double t606;
  double t168;
  double t648;
  double t655;
  double t657;
  double t664;
  double t669;
  double t692;
  double t762;
  double t620;
  double t701;
  double t721;
  double t110;
  double t789;
  double t811;
  double t815;
  double t34;
  double t969;
  double t983;
  double t988;
  double t1012;
  double t1022;
  double t1028;
  double t990;
  double t999;
  double t1004;
  double t1039;
  double t1049;
  double t1052;
  double t1064;
  double t1083;
  double t1087;
  double t1098;
  double t845;
  double t852;
  double t859;
  double t900;
  double t1051;
  double t1102;
  double t1126;
  double t1142;
  double t1151;
  double t1163;
  double t1267;
  double t1269;
  double t1270;
  double t1277;
  double t1282;
  double t1299;
  double t723;
  double t834;
  double t839;
  double t889;
  double t894;
  double t896;
  double t906;
  double t907;
  double t921;
  double t923;
  double t931;
  double t1140;
  double t1167;
  double t1202;
  double t1204;
  double t1209;
  double t1214;
  double t1224;
  double t1226;
  double t1228;
  double t1236;
  double t1238;
  double t1281;
  double t1302;
  double t1324;
  double t1332;
  double t1366;
  double t1394;
  double t1395;
  double t1410;
  double t1433;
  double t1443;
  double t1548;
  double t1557;
  double t1574;
  double t1724;
  double t1725;
  double t1714;
  double t1720;
  double t1765;
  double t1767;
  double t1784;
  double t1738;
  double t1747;
  double t1749;
  double t1668;
  double t1670;
  double t1721;
  double t1754;
  double t1764;
  double t1795;
  double t1797;
  double t1825;
  double t1828;
  double t1830;
  double t1833;
  double t1844;
  double t1628;
  double t1634;
  double t1862;
  double t1866;
  double t1871;
  double t1881;
  double t1891;
  double t1682;
  double t1694;
  double t1801;
  double t1853;
  double t1856;
  double t1604;
  double t1609;
  double t1644;
  double t1858;
  double t1859;
  double t1894;
  double t1899;
  double t1912;
  double t1913;
  double t1918;
  double t1920;
  double t1926;
  double t1929;
  double t1932;
  double t1937;
  double t1940;
  double t1947;
  double t1953;
  double t1954;
  double t1577;
  double t1579;
  double t1595;
  double t1615;
  double t1625;
  double t1910;
  double t1955;
  double t1972;
  double t1986;
  double t2005;
  double t2007;
  double t2008;
  double t2023;
  double t2060;
  double t2064;
  double t2074;
  double t2083;
  double t2093;
  double t2097;
  double t2104;
  double t1973;
  double t2029;
  double t2033;
  double t2092;
  double t2108;
  double t2113;
  double t2124;
  double t2128;
  double t2131;
  double t1533;
  double t1543;
  double t1544;
  double t2047;
  double t2145;
  double t2167;
  double t2187;
  double t2224;
  double t2250;
  double t2269;
  double t2279;
  double t2306;
  double t2314;
  double t2336;
  double t2357;
  double t2593;
  double t2606;
  t274 = Cos(var1[10]);
  t234 = Cos(var1[11]);
  t240 = Sin(var1[10]);
  t296 = Sin(var1[11]);
  t385 = Cos(var1[9]);
  t271 = t234*t240;
  t347 = t274*t296;
  t366 = 0. + t271 + t347;
  t198 = Sin(var1[9]);
  t398 = -1.*t274*t234;
  t422 = t240*t296;
  t438 = 0. + t398 + t422;
  t176 = Cos(var1[8]);
  t507 = t385*t366;
  t517 = -1.*t198*t438;
  t533 = 0. + t507 + t517;
  t367 = t198*t366;
  t441 = t385*t438;
  t494 = 0. + t367 + t441;
  t564 = Sin(var1[8]);
  t636 = Cos(var1[6]);
  t501 = t176*t494;
  t592 = t533*t564;
  t606 = 0. + t501 + t592;
  t168 = Sin(var1[6]);
  t648 = Sin(var1[7]);
  t655 = t176*t533;
  t657 = -1.*t494*t564;
  t664 = 0. + t655 + t657;
  t669 = t648*t664;
  t692 = 0. + t669;
  t762 = Sin(var1[5]);
  t620 = -1.*t168*t606;
  t701 = t636*t692;
  t721 = 0. + t620 + t701;
  t110 = Cos(var1[5]);
  t789 = t636*t606;
  t811 = t168*t692;
  t815 = 0. + t789 + t811;
  t34 = Sin(var1[3]);
  t969 = t274*t234;
  t983 = -1.*t240*t296;
  t988 = 0. + t969 + t983;
  t1012 = -1.*t198*t366;
  t1022 = t385*t988;
  t1028 = 0. + t1012 + t1022;
  t990 = t198*t988;
  t999 = 0. + t507 + t990;
  t1004 = t176*t999;
  t1039 = t1028*t564;
  t1049 = 0. + t1004 + t1039;
  t1052 = t176*t1028;
  t1064 = -1.*t999*t564;
  t1083 = 0. + t1052 + t1064;
  t1087 = t648*t1083;
  t1098 = 0. + t1087;
  t845 = Cos(var1[3]);
  t852 = Cos(var1[4]);
  t859 = Cos(var1[7]);
  t900 = Sin(var1[4]);
  t1051 = -1.*t168*t1049;
  t1102 = t636*t1098;
  t1126 = 0. + t1051 + t1102;
  t1142 = t636*t1049;
  t1151 = t168*t1098;
  t1163 = 0. + t1142 + t1151;
  t1267 = -1.*t859;
  t1269 = 0. + t1267;
  t1270 = t636*t1269;
  t1277 = 0. + t1270;
  t1282 = t1269*t168;
  t1299 = 0. + t1282;
  t723 = t110*t721;
  t834 = -1.*t762*t815;
  t839 = 0. + t723 + t834;
  t889 = t859*t664;
  t894 = 0. + t889;
  t896 = t852*t894;
  t906 = t762*t721;
  t907 = t110*t815;
  t921 = 0. + t906 + t907;
  t923 = t900*t921;
  t931 = 0. + t896 + t923;
  t1140 = t110*t1126;
  t1167 = -1.*t762*t1163;
  t1202 = 0. + t1140 + t1167;
  t1204 = t859*t1083;
  t1209 = 0. + t1204;
  t1214 = t852*t1209;
  t1224 = t762*t1126;
  t1226 = t110*t1163;
  t1228 = 0. + t1224 + t1226;
  t1236 = t900*t1228;
  t1238 = 0. + t1214 + t1236;
  t1281 = t110*t1277;
  t1302 = -1.*t762*t1299;
  t1324 = 0. + t1281 + t1302;
  t1332 = t1277*t762;
  t1366 = t110*t1299;
  t1394 = 0. + t1332 + t1366;
  t1395 = t900*t1394;
  t1410 = 0. + t648;
  t1433 = t852*t1410;
  t1443 = 0. + t1395 + t1433;
  t1548 = -1.*t900*t1209;
  t1557 = t852*t1228;
  t1574 = 0. + t1548 + t1557;
  t1724 = -1.*t234;
  t1725 = 1. + t1724;
  t1714 = -1.*t274;
  t1720 = 1. + t1714;
  t1765 = -0.62554*t1725;
  t1767 = -0.62554*t234;
  t1784 = 0. + t1765 + t1767;
  t1738 = -0.01315*t1725;
  t1747 = -0.01315*t234;
  t1749 = 0. + t1738 + t1747;
  t1668 = -1.*t385;
  t1670 = 1. + t1668;
  t1721 = -0.03315*t1720;
  t1754 = t274*t1749;
  t1764 = -0.19074*t240;
  t1795 = -1.*t1784*t240;
  t1797 = 0. + t1721 + t1754 + t1764 + t1795;
  t1825 = -0.19074*t1720;
  t1828 = t274*t1784;
  t1830 = 0.03315*t240;
  t1833 = t1749*t240;
  t1844 = 0. + t1825 + t1828 + t1830 + t1833;
  t1628 = -1.*t176;
  t1634 = 1. + t1628;
  t1862 = -0.08055*t1670;
  t1866 = -0.13004*t198;
  t1871 = t385*t1797;
  t1881 = -1.*t198*t1844;
  t1891 = 0. + t1862 + t1866 + t1871 + t1881;
  t1682 = -0.13004*t1670;
  t1694 = 0.08055*t198;
  t1801 = t198*t1797;
  t1853 = t385*t1844;
  t1856 = 0. + t1682 + t1694 + t1801 + t1853;
  t1604 = -1.*t636;
  t1609 = 1. + t1604;
  t1644 = -0.01004*t1634;
  t1858 = t176*t1856;
  t1859 = 0.08055*t564;
  t1894 = t1891*t564;
  t1899 = 0. + t1644 + t1858 + t1859 + t1894;
  t1912 = -1.*t859;
  t1913 = 1. + t1912;
  t1918 = 0.135*t1913;
  t1920 = 0.1305*t859;
  t1926 = 0.08055*t648;
  t1929 = -0.08055*t1634;
  t1932 = t176*t1891;
  t1937 = -0.01004*t564;
  t1940 = -1.*t1856*t564;
  t1947 = 0. + t1929 + t1932 + t1937 + t1940;
  t1953 = t648*t1947;
  t1954 = 0. + t1918 + t1920 + t1926 + t1953;
  t1577 = t852*t1394;
  t1579 = -1.*t900*t1410;
  t1595 = 0. + t1577 + t1579;
  t1615 = 0.135*t1609;
  t1625 = 0.07996*t168;
  t1910 = -1.*t168*t1899;
  t1955 = t636*t1954;
  t1972 = 0. + t1615 + t1625 + t1910 + t1955;
  t1986 = 0.07996*t1609;
  t2005 = -0.135*t168;
  t2007 = t636*t1899;
  t2008 = t168*t1954;
  t2023 = 0. + t1986 + t2005 + t2007 + t2008;
  t2060 = -0.08055*t1913;
  t2064 = 0.004500000000000004*t648;
  t2074 = t859*t1947;
  t2083 = 0. + t2060 + t2064 + t2074;
  t2093 = t762*t1972;
  t2097 = t110*t2023;
  t2104 = 0. + t2093 + t2097;
  t1973 = t110*t1972;
  t2029 = -1.*t762*t2023;
  t2033 = 0. + t1973 + t2029;
  t2092 = -1.*t900*t2083;
  t2108 = t852*t2104;
  t2113 = 0. + t2092 + t2108;
  t2124 = t852*t2083;
  t2128 = t900*t2104;
  t2131 = 0. + t2124 + t2128;
  t1533 = -1.*t900*t894;
  t1543 = t852*t921;
  t1544 = 0. + t1533 + t1543;
  t2047 = t1324*t2033;
  t2145 = -1.*t2033*t1202;
  t2167 = -1.*t1324*t2033;
  t2187 = t2033*t839;
  t2224 = t2033*t1202;
  t2250 = -1.*t2033*t839;
  t2269 = t1410*t2083;
  t2279 = -1.*t2083*t1209;
  t2306 = -1.*t1410*t2083;
  t2314 = t2083*t894;
  t2336 = t2083*t1209;
  t2357 = -1.*t2083*t894;
  t2593 = t1899*t1049;
  t2606 = -1.*t1899*t606;
  p_output1[0]=0. - 1.*t34*t839 + t845*t931;
  p_output1[1]=0. - 1.*t1202*t34 + t1238*t845;
  p_output1[2]=0. - 1.*t1324*t34 + t1443*t845;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t839*t845 + t34*t931;
  p_output1[7]=0. + t1238*t34 + t1202*t845;
  p_output1[8]=0. + t1443*t34 + t1324*t845;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1544;
  p_output1[13]=t1574;
  p_output1[14]=t1595;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1574*(t2047 + t1595*t2113 + t1443*t2131) + t1595*(-1.*t1574*t2113 - 1.*t1238*t2131 + t2145);
  p_output1[19]=t1544*(-1.*t1595*t2113 - 1.*t1443*t2131 + t2167) + t1595*(t1544*t2113 + t2187 + t2131*t931);
  p_output1[20]=t1544*(t1574*t2113 + t1238*t2131 + t2224) + t1574*(-1.*t1544*t2113 + t2250 - 1.*t2131*t931);
  p_output1[21]=t1544;
  p_output1[22]=t1574;
  p_output1[23]=t1595;
  p_output1[24]=t1202*(t2047 + t1394*t2104 + t2269) + t1324*(-1.*t1228*t2104 + t2145 + t2279);
  p_output1[25]=(-1.*t1394*t2104 + t2167 + t2306)*t839 + t1324*(t2187 + t2314 + t2104*t921);
  p_output1[26]=(t1228*t2104 + t2224 + t2336)*t839 + t1202*(t2250 + t2357 - 1.*t2104*t921);
  p_output1[27]=t839;
  p_output1[28]=t1202;
  p_output1[29]=t1324;
  p_output1[30]=t1209*(t1277*t1972 + t1299*t2023 + t2269) + t1410*(-1.*t1126*t1972 - 1.*t1163*t2023 + t2279);
  p_output1[31]=t1410*(t2314 + t1972*t721 + t2023*t815) + (-1.*t1277*t1972 - 1.*t1299*t2023 + t2306)*t894;
  p_output1[32]=t1209*(t2357 - 1.*t1972*t721 - 1.*t2023*t815) + (t1126*t1972 + t1163*t2023 + t2336)*t894;
  p_output1[33]=t894;
  p_output1[34]=t1209;
  p_output1[35]=t1410;
  p_output1[36]=t1209*(0. + t1269*t1954 + t2269) + t1410*(-1.*t1049*t1899 - 1.*t1098*t1954 + t2279) - 0.135*t606 + 0.07996*t692;
  p_output1[37]=-0.135*t1049 + 0.07996*t1098 + t1410*(t2314 + t1899*t606 + t1954*t692) + (0. - 1.*t1269*t1954 + t2306)*t894;
  p_output1[38]=0. + 0.07996*t1269 + t1209*(t2357 + t2606 - 1.*t1954*t692) + (t1098*t1954 + t2336 + t2593)*t894;
  p_output1[39]=t894;
  p_output1[40]=t1209;
  p_output1[41]=t1410;
  p_output1[42]=0. - 0.1305*t1049 + 0.135*t664;
  p_output1[43]=0. + 0.135*t1083 + 0.1305*t606;
  p_output1[44]=-0.08055 + (0. + t1083*t1947 + t2593)*t606 + t1049*(0. + t2606 - 1.*t1947*t664);
  p_output1[45]=t606;
  p_output1[46]=t1049;
  p_output1[47]=0.;
  p_output1[48]=0. - 1.*t1028*t1891 + 0.08055*t494 - 0.01004*t533 - 1.*t1856*t999;
  p_output1[49]=0. - 0.01004*t1028 + t1856*t494 + t1891*t533 + 0.08055*t999;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
  p_output1[54]=0. - 0.13004*t366 - 1.*t1844*t366 + 0.08055*t438 - 1.*t1797*t988;
  p_output1[55]=0. + 0.08055*t366 + t1797*t366 + t1844*t438 - 0.13004*t988;
  p_output1[56]=0.;
  p_output1[57]=0.;
  p_output1[58]=0.;
  p_output1[59]=1.;
  p_output1[60]=0. - 0.03315*t234 - 1.*t1749*t234 - 0.19074*t296 - 1.*t1784*t296;
  p_output1[61]=0. - 0.19074*t234 - 1.*t1784*t234 + 0.03315*t296 + t1749*t296;
  p_output1[62]=0.;
  p_output1[63]=0.;
  p_output1[64]=0.;
  p_output1[65]=1.;
  p_output1[66]=0.;
  p_output1[67]=0.;
  p_output1[68]=0.;
  p_output1[69]=0.;
  p_output1[70]=0.;
  p_output1[71]=1.;
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



void Jb_LeftAnkleJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
