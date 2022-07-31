/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:24 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_LeftAbductionJoint_src.h"

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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1536;
  double t1620;
  double t1640;
  double t1652;
  double t1659;
  double t1664;
  double t1700;
  double t1622;
  double t1801;
  double t1588;
  double t1663;
  double t1666;
  double t1669;
  double t1704;
  double t1705;
  double t1708;
  double t1838;
  double t1842;
  double t1855;
  double t1812;
  double t1823;
  double t1835;
  double t1904;
  double t1905;
  double t1909;
  double t1894;
  double t1896;
  double t1899;
  double t1969;
  double t1977;
  double t1979;
  double t1939;
  double t1945;
  double t1864;
  double t2054;
  double t2055;
  double t2058;
  double t1901;
  double t1902;
  double t1911;
  double t1914;
  double t1917;
  double t2097;
  double t2098;
  double t2103;
  double t2062;
  double t2076;
  double t1948;
  double t1954;
  double t2024;
  double t2025;
  double t2028;
  double t2154;
  double t2155;
  double t2159;
  double t2162;
  double t2163;
  double t1604;
  double t1680;
  double t1729;
  double t1733;
  double t1735;
  double t1742;
  double t1743;
  double t1747;
  double t1750;
  double t1756;
  double t1781;
  double t1788;
  double t1807;
  double t2014;
  double t2015;
  double t2017;
  double t2018;
  double t2019;
  double t2020;
  double t2022;
  double t2031;
  double t2046;
  double t2246;
  double t2247;
  double t2254;
  double t2257;
  double t2260;
  double t2131;
  double t2365;
  double t2367;
  double t2368;
  double t2370;
  double t2371;
  double t2376;
  double t2380;
  double t2381;
  double t2152;
  double t2153;
  double t2164;
  double t1836;
  double t1861;
  double t1865;
  double t1868;
  double t1870;
  double t1877;
  double t1878;
  double t1881;
  double t1885;
  double t2063;
  double t1982;
  double t1986;
  double t1989;
  double t1992;
  double t1998;
  double t2001;
  double t2004;
  double t2007;
  double t2008;
  double t2242;
  double t2245;
  double t2261;
  double t2052;
  double t2060;
  double t2072;
  double t2078;
  double t2088;
  double t2089;
  double t2092;
  double t2143;
  double t2434;
  double t2436;
  double t2439;
  double t2133;
  double t2137;
  double t2144;
  double t2145;
  double t2147;
  double t2148;
  double t2332;
  double t2333;
  double t2334;
  double t2336;
  double t2337;
  double t2338;
  double t2342;
  double t2344;
  double t2345;
  double t2347;
  double t2363;
  double t2364;
  double t2382;
  double t2172;
  double t2195;
  double t2197;
  double t2402;
  double t2408;
  double t2410;
  double t2416;
  double t2417;
  double t2423;
  double t2425;
  double t2110;
  double t2111;
  double t1903;
  double t1919;
  double t1936;
  double t1941;
  double t1942;
  double t1962;
  double t1964;
  double t2271;
  double t2280;
  double t2281;
  double t2094;
  double t2106;
  double t2112;
  double t2118;
  double t2122;
  double t2125;
  double t2127;
  double t2433;
  double t2441;
  double t2446;
  double t2447;
  double t2449;
  double t2451;
  double t2452;
  double t2456;
  double t2457;
  double t2488;
  double t2492;
  double t2495;
  double t2470;
  double t2468;
  double t2472;
  double t2388;
  double t2389;
  double t2390;
  t1536 = Sin(var1[3]);
  t1620 = Cos(var1[4]);
  t1640 = Cos(var1[6]);
  t1652 = -1.*t1640;
  t1659 = 1. + t1652;
  t1664 = Sin(var1[6]);
  t1700 = Sin(var1[5]);
  t1622 = Cos(var1[5]);
  t1801 = Cos(var1[3]);
  t1588 = Sin(var1[4]);
  t1663 = 0.07996*t1659;
  t1666 = -0.135*t1664;
  t1669 = 0. + t1663 + t1666;
  t1704 = 0.135*t1659;
  t1705 = 0.07996*t1664;
  t1708 = 0. + t1704 + t1705;
  t1838 = t1622*t1536;
  t1842 = -1.*t1801*t1588*t1700;
  t1855 = t1838 + t1842;
  t1812 = -1.*t1801*t1622*t1588;
  t1823 = -1.*t1536*t1700;
  t1835 = t1812 + t1823;
  t1904 = -1.*t1801*t1622;
  t1905 = -1.*t1536*t1588*t1700;
  t1909 = t1904 + t1905;
  t1894 = -1.*t1622*t1536*t1588;
  t1896 = t1801*t1700;
  t1899 = t1894 + t1896;
  t1969 = t1801*t1622;
  t1977 = t1536*t1588*t1700;
  t1979 = t1969 + t1977;
  t1939 = -1.*t1899*t1664;
  t1945 = t1640*t1899;
  t1864 = t1640*t1855;
  t2054 = t1801*t1622*t1588;
  t2055 = t1536*t1700;
  t2058 = t2054 + t2055;
  t1901 = -0.135*t1640;
  t1902 = t1901 + t1705;
  t1911 = 0.07996*t1640;
  t1914 = 0.135*t1664;
  t1917 = t1911 + t1914;
  t2097 = -1.*t1622*t1536;
  t2098 = t1801*t1588*t1700;
  t2103 = t2097 + t2098;
  t2062 = -1.*t2058*t1664;
  t2076 = t1640*t2058;
  t1948 = -1.*t1909*t1664;
  t1954 = t1945 + t1948;
  t2024 = t1801*t1620*t1622*t1640;
  t2025 = -1.*t1801*t1620*t1700*t1664;
  t2028 = t2024 + t2025;
  t2154 = -1.*t1801*t1620*t1640*t1700;
  t2155 = -1.*t1801*t1620*t1622*t1664;
  t2159 = t2154 + t2155;
  t2162 = 0.07996*t2159;
  t2163 = 0.135*t2028;
  t1604 = -0.08055*t1536*t1588;
  t1680 = -1.*t1620*t1622*t1536*t1669;
  t1729 = -1.*t1620*t1536*t1700*t1708;
  t1733 = -1.*t1620*t1640*t1536*t1700;
  t1735 = -1.*t1620*t1622*t1536*t1664;
  t1742 = t1733 + t1735;
  t1743 = 0.135*t1742;
  t1747 = -1.*t1620*t1622*t1640*t1536;
  t1750 = t1620*t1536*t1700*t1664;
  t1756 = t1747 + t1750;
  t1781 = 0.07996*t1756;
  t1788 = t1604 + t1680 + t1729 + t1743 + t1781;
  t1807 = 0.08055*t1801*t1620;
  t2014 = 0.08055*t1801*t1588;
  t2015 = t1801*t1620*t1622*t1669;
  t2017 = t1801*t1620*t1700*t1708;
  t2018 = t1801*t1620*t1640*t1700;
  t2019 = t1801*t1620*t1622*t1664;
  t2020 = t2018 + t2019;
  t2022 = 0.135*t2020;
  t2031 = 0.07996*t2028;
  t2046 = t2014 + t2015 + t2017 + t2022 + t2031;
  t2246 = 0.07996*t1742;
  t2247 = t1620*t1622*t1640*t1536;
  t2254 = -1.*t1620*t1536*t1700*t1664;
  t2257 = t2247 + t2254;
  t2260 = 0.135*t2257;
  t2131 = 0.08055*t1620*t1536;
  t2365 = t1640*t1588*t1700;
  t2367 = t1622*t1588*t1664;
  t2368 = t2365 + t2367;
  t2370 = 0.07996*t2368;
  t2371 = -1.*t1622*t1640*t1588;
  t2376 = t1588*t1700*t1664;
  t2380 = t2371 + t2376;
  t2381 = 0.135*t2380;
  t2152 = -1.*t1801*t1620*t1700*t1669;
  t2153 = t1801*t1620*t1622*t1708;
  t2164 = t2152 + t2153 + t2162 + t2163;
  t1836 = t1835*t1669;
  t1861 = t1855*t1708;
  t1865 = t1835*t1664;
  t1868 = t1864 + t1865;
  t1870 = 0.135*t1868;
  t1877 = t1640*t1835;
  t1878 = -1.*t1855*t1664;
  t1881 = t1877 + t1878;
  t1885 = 0.07996*t1881;
  t2063 = t1864 + t2062;
  t1982 = t1979*t1669;
  t1986 = t1899*t1708;
  t1989 = t1640*t1979;
  t1992 = t1989 + t1939;
  t1998 = 0.07996*t1992;
  t2001 = t1979*t1664;
  t2004 = t1945 + t2001;
  t2007 = 0.135*t2004;
  t2008 = t1982 + t1986 + t1998 + t2007;
  t2242 = -1.*t1620*t1536*t1700*t1669;
  t2245 = t1620*t1622*t1536*t1708;
  t2261 = t2242 + t2245 + t2246 + t2260;
  t2052 = t1855*t1669;
  t2060 = t2058*t1708;
  t2072 = 0.07996*t2063;
  t2078 = t1855*t1664;
  t2088 = t2076 + t2078;
  t2089 = 0.135*t2088;
  t2092 = t2052 + t2060 + t2072 + t2089;
  t2143 = t1640*t1909;
  t2434 = t1622*t1536*t1588;
  t2436 = -1.*t1801*t1700;
  t2439 = t2434 + t2436;
  t2133 = t1899*t1669;
  t2137 = t1909*t1708;
  t2144 = t1899*t1664;
  t2145 = t2143 + t2144;
  t2147 = 0.135*t2145;
  t2148 = 0.07996*t1954;
  t2332 = -1.*t1620*t1622*t1669;
  t2333 = -1.*t1620*t1700*t1708;
  t2334 = -1.*t1620*t1640*t1700;
  t2336 = -1.*t1620*t1622*t1664;
  t2337 = t2334 + t2336;
  t2338 = 0.135*t2337;
  t2342 = -1.*t1620*t1622*t1640;
  t2344 = t1620*t1700*t1664;
  t2345 = t2342 + t2344;
  t2347 = 0.07996*t2345;
  t2363 = t1588*t1700*t1669;
  t2364 = -1.*t1622*t1588*t1708;
  t2382 = t2363 + t2364 + t2370 + t2381;
  t2172 = t1801*t1620*t1622*t1902;
  t2195 = t1801*t1620*t1700*t1917;
  t2197 = t2172 + t2195 + t2162 + t2163;
  t2402 = t1855*t1902;
  t2408 = t2058*t1917;
  t2410 = 0.135*t2063;
  t2416 = -1.*t1640*t2058;
  t2417 = t2416 + t1878;
  t2423 = 0.07996*t2417;
  t2425 = t2402 + t2408 + t2410 + t2423;
  t2110 = -1.*t1640*t2103;
  t2111 = t2110 + t2062;
  t1903 = t1899*t1902;
  t1919 = t1909*t1917;
  t1936 = -1.*t1640*t1909;
  t1941 = t1936 + t1939;
  t1942 = 0.07996*t1941;
  t1962 = 0.135*t1954;
  t1964 = t1903 + t1919 + t1942 + t1962;
  t2271 = t1620*t1622*t1536*t1902;
  t2280 = t1620*t1536*t1700*t1917;
  t2281 = t2271 + t2280 + t2246 + t2260;
  t2094 = t2058*t1902;
  t2106 = t2103*t1917;
  t2112 = 0.07996*t2111;
  t2118 = -1.*t2103*t1664;
  t2122 = t2076 + t2118;
  t2125 = 0.135*t2122;
  t2127 = t2094 + t2106 + t2112 + t2125;
  t2433 = t1909*t1902;
  t2441 = t2439*t1917;
  t2446 = -1.*t2439*t1664;
  t2447 = t2143 + t2446;
  t2449 = 0.135*t2447;
  t2451 = -1.*t1640*t2439;
  t2452 = t2451 + t1948;
  t2456 = 0.07996*t2452;
  t2457 = t2433 + t2441 + t2449 + t2456;
  t2488 = 0.135*t1640;
  t2492 = -0.07996*t1664;
  t2495 = t2488 + t2492;
  t2470 = t1620*t1622*t1917;
  t2468 = -1.*t1620*t1700*t1902;
  t2472 = t2468 + t2470 + t2338 + t2347;
  t2388 = -1.*t1622*t1588*t1902;
  t2389 = -1.*t1588*t1700*t1917;
  t2390 = t2388 + t2389 + t2370 + t2381;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t1807 + t1836 + t1861 + t1870 + t1885)*var2[3] + t1788*var2[4] + t2008*var2[5] + t1964*var2[6];
  p_output1[10]=(t2131 + t2133 + t2137 + t2147 + t2148)*var2[3] + t2046*var2[4] + t2092*var2[5] + t2127*var2[6];
  p_output1[11]=0;
  p_output1[12]=t1788*var2[3] + (-1.*t1588*t1622*t1669*t1801 - 1.*t1588*t1700*t1708*t1801 + 0.135*(-1.*t1588*t1622*t1664*t1801 - 1.*t1588*t1640*t1700*t1801) + 0.07996*(-1.*t1588*t1622*t1640*t1801 + t1588*t1664*t1700*t1801) + t1807)*var2[4] + t2164*var2[5] + t2197*var2[6];
  p_output1[13]=t2046*var2[3] + (-1.*t1536*t1588*t1622*t1669 + 0.135*(-1.*t1536*t1588*t1622*t1664 - 1.*t1536*t1588*t1640*t1700) + 0.07996*(-1.*t1536*t1588*t1622*t1640 + t1536*t1588*t1664*t1700) - 1.*t1536*t1588*t1700*t1708 + t2131)*var2[4] + t2261*var2[5] + t2281*var2[6];
  p_output1[14]=(-0.08055*t1588 + t2332 + t2333 + t2338 + t2347)*var2[4] + t2382*var2[5] + t2390*var2[6];
  p_output1[15]=t2008*var2[3] + t2164*var2[4] + (t1836 + t1861 + t1870 + t1885)*var2[5] + t2425*var2[6];
  p_output1[16]=t2092*var2[3] + t2261*var2[4] + (t2133 + t2137 + t2147 + t2148)*var2[5] + t2457*var2[6];
  p_output1[17]=t2382*var2[4] + (t2332 + t2333 + t2338 + t2347)*var2[5] + t2472*var2[6];
  p_output1[18]=t1964*var2[3] + t2197*var2[4] + t2425*var2[5] + (0.135*t2111 + t2408 + 0.07996*(t1664*t2103 + t2416) + t2103*t2495)*var2[6];
  p_output1[19]=t2127*var2[3] + t2281*var2[4] + t2457*var2[5] + (t2441 + 0.135*(-1.*t1640*t1979 + t2446) + 0.07996*(t2001 + t2451) + t1979*t2495)*var2[6];
  p_output1[20]=t2390*var2[4] + t2472*var2[5] + (t2338 + t2347 + t2470 + t1620*t1700*t2495)*var2[6];
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
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
}



void dJp_LeftAbductionJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
