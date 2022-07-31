/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottomBack_src.h"

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
  double t638;
  double t688;
  double t554;
  double t641;
  double t783;
  double t858;
  double t669;
  double t819;
  double t835;
  double t484;
  double t866;
  double t896;
  double t899;
  double t964;
  double t839;
  double t942;
  double t944;
  double t468;
  double t970;
  double t982;
  double t1021;
  double t1031;
  double t1049;
  double t1056;
  double t1105;
  double t1109;
  double t1116;
  double t1157;
  double t954;
  double t1122;
  double t1123;
  double t465;
  double t1162;
  double t1163;
  double t1182;
  double t1217;
  double t1154;
  double t1184;
  double t1194;
  double t348;
  double t1236;
  double t1239;
  double t1256;
  double t1300;
  double t1206;
  double t1274;
  double t1279;
  double t252;
  double t1344;
  double t1350;
  double t1351;
  double t1392;
  double t1286;
  double t1364;
  double t1365;
  double t227;
  double t1426;
  double t1450;
  double t1458;
  double t1600;
  double t1604;
  double t1606;
  double t1624;
  double t1629;
  double t1637;
  double t1617;
  double t1665;
  double t1697;
  double t1712;
  double t1717;
  double t1718;
  double t1729;
  double t1755;
  double t1760;
  double t1705;
  double t1790;
  double t1798;
  double t1830;
  double t1839;
  double t1865;
  double t1806;
  double t1878;
  double t1882;
  double t1886;
  double t1890;
  double t1895;
  double t1885;
  double t1933;
  double t1953;
  double t1970;
  double t1976;
  double t1997;
  double t1968;
  double t2009;
  double t2014;
  double t2036;
  double t2039;
  double t2041;
  double t2148;
  double t2170;
  double t2172;
  double t2175;
  double t2179;
  double t2210;
  double t2227;
  double t2230;
  double t2231;
  double t2174;
  double t2259;
  double t2262;
  double t2268;
  double t2271;
  double t2277;
  double t2263;
  double t2291;
  double t2297;
  double t2310;
  double t2319;
  double t2330;
  double t2299;
  double t2367;
  double t2397;
  double t2448;
  double t2464;
  double t2478;
  double t2398;
  double t2484;
  double t2507;
  double t2512;
  double t2535;
  double t2550;
  double t1369;
  double t1462;
  double t1464;
  double t1481;
  double t1485;
  double t1519;
  double t2028;
  double t2042;
  double t2069;
  double t2111;
  double t2123;
  double t2130;
  double t2510;
  double t2570;
  double t2572;
  double t2580;
  double t2585;
  double t2596;
  t638 = Cos(var1[5]);
  t688 = Sin(var1[3]);
  t554 = Cos(var1[3]);
  t641 = Sin(var1[4]);
  t783 = Sin(var1[5]);
  t858 = Sin(var1[13]);
  t669 = t554*t638*t641;
  t819 = t688*t783;
  t835 = t669 + t819;
  t484 = Cos(var1[13]);
  t866 = -1.*t638*t688;
  t896 = t554*t641*t783;
  t899 = t866 + t896;
  t964 = Cos(var1[15]);
  t839 = t484*t835;
  t942 = -1.*t858*t899;
  t944 = t839 + t942;
  t468 = Sin(var1[15]);
  t970 = Cos(var1[14]);
  t982 = Cos(var1[4]);
  t1021 = t970*t554*t982;
  t1031 = Sin(var1[14]);
  t1049 = t858*t835;
  t1056 = t484*t899;
  t1105 = t1049 + t1056;
  t1109 = t1031*t1105;
  t1116 = t1021 + t1109;
  t1157 = Cos(var1[16]);
  t954 = t468*t944;
  t1122 = t964*t1116;
  t1123 = t954 + t1122;
  t465 = Sin(var1[16]);
  t1162 = t964*t944;
  t1163 = -1.*t468*t1116;
  t1182 = t1162 + t1163;
  t1217 = Cos(var1[17]);
  t1154 = -1.*t465*t1123;
  t1184 = t1157*t1182;
  t1194 = t1154 + t1184;
  t348 = Sin(var1[17]);
  t1236 = t1157*t1123;
  t1239 = t465*t1182;
  t1256 = t1236 + t1239;
  t1300 = Cos(var1[18]);
  t1206 = t348*t1194;
  t1274 = t1217*t1256;
  t1279 = t1206 + t1274;
  t252 = Sin(var1[18]);
  t1344 = t1217*t1194;
  t1350 = -1.*t348*t1256;
  t1351 = t1344 + t1350;
  t1392 = Cos(var1[19]);
  t1286 = -1.*t252*t1279;
  t1364 = t1300*t1351;
  t1365 = t1286 + t1364;
  t227 = Sin(var1[19]);
  t1426 = t1300*t1279;
  t1450 = t252*t1351;
  t1458 = t1426 + t1450;
  t1600 = t638*t688*t641;
  t1604 = -1.*t554*t783;
  t1606 = t1600 + t1604;
  t1624 = t554*t638;
  t1629 = t688*t641*t783;
  t1637 = t1624 + t1629;
  t1617 = t484*t1606;
  t1665 = -1.*t858*t1637;
  t1697 = t1617 + t1665;
  t1712 = t970*t982*t688;
  t1717 = t858*t1606;
  t1718 = t484*t1637;
  t1729 = t1717 + t1718;
  t1755 = t1031*t1729;
  t1760 = t1712 + t1755;
  t1705 = t468*t1697;
  t1790 = t964*t1760;
  t1798 = t1705 + t1790;
  t1830 = t964*t1697;
  t1839 = -1.*t468*t1760;
  t1865 = t1830 + t1839;
  t1806 = -1.*t465*t1798;
  t1878 = t1157*t1865;
  t1882 = t1806 + t1878;
  t1886 = t1157*t1798;
  t1890 = t465*t1865;
  t1895 = t1886 + t1890;
  t1885 = t348*t1882;
  t1933 = t1217*t1895;
  t1953 = t1885 + t1933;
  t1970 = t1217*t1882;
  t1976 = -1.*t348*t1895;
  t1997 = t1970 + t1976;
  t1968 = -1.*t252*t1953;
  t2009 = t1300*t1997;
  t2014 = t1968 + t2009;
  t2036 = t1300*t1953;
  t2039 = t252*t1997;
  t2041 = t2036 + t2039;
  t2148 = t484*t982*t638;
  t2170 = -1.*t982*t858*t783;
  t2172 = t2148 + t2170;
  t2175 = -1.*t970*t641;
  t2179 = t982*t638*t858;
  t2210 = t484*t982*t783;
  t2227 = t2179 + t2210;
  t2230 = t1031*t2227;
  t2231 = t2175 + t2230;
  t2174 = t468*t2172;
  t2259 = t964*t2231;
  t2262 = t2174 + t2259;
  t2268 = t964*t2172;
  t2271 = -1.*t468*t2231;
  t2277 = t2268 + t2271;
  t2263 = -1.*t465*t2262;
  t2291 = t1157*t2277;
  t2297 = t2263 + t2291;
  t2310 = t1157*t2262;
  t2319 = t465*t2277;
  t2330 = t2310 + t2319;
  t2299 = t348*t2297;
  t2367 = t1217*t2330;
  t2397 = t2299 + t2367;
  t2448 = t1217*t2297;
  t2464 = -1.*t348*t2330;
  t2478 = t2448 + t2464;
  t2398 = -1.*t252*t2397;
  t2484 = t1300*t2478;
  t2507 = t2398 + t2484;
  t2512 = t1300*t2397;
  t2535 = t252*t2478;
  t2550 = t2512 + t2535;
  t1369 = t227*t1365;
  t1462 = t1392*t1458;
  t1464 = t1369 + t1462;
  t1481 = t1392*t1365;
  t1485 = -1.*t227*t1458;
  t1519 = t1481 + t1485;
  t2028 = t227*t2014;
  t2042 = t1392*t2041;
  t2069 = t2028 + t2042;
  t2111 = t1392*t2014;
  t2123 = -1.*t227*t2041;
  t2130 = t2111 + t2123;
  t2510 = t227*t2507;
  t2570 = t1392*t2550;
  t2572 = t2510 + t2570;
  t2580 = t1392*t2507;
  t2585 = -1.*t227*t2550;
  t2596 = t2580 + t2585;
  p_output1[0]=0.642788*t1464 + 0.766044*t1519;
  p_output1[1]=0.642788*t2069 + 0.766044*t2130;
  p_output1[2]=0.642788*t2572 + 0.766044*t2596;
  p_output1[3]=t1105*t970 - 1.*t1031*t554*t982;
  p_output1[4]=t1729*t970 - 1.*t1031*t688*t982;
  p_output1[5]=t1031*t641 + t2227*t970;
  p_output1[6]=-0.766044*t1464 + 0.642788*t1519;
  p_output1[7]=-0.766044*t2069 + 0.642788*t2130;
  p_output1[8]=-0.766044*t2572 + 0.642788*t2596;
}



void R_RightToeBottomBack_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
