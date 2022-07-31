/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:34:20 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "R_RightToeBottomFront_src.h"

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
  double t581;
  double t625;
  double t499;
  double t595;
  double t636;
  double t789;
  double t603;
  double t695;
  double t703;
  double t452;
  double t836;
  double t861;
  double t896;
  double t996;
  double t741;
  double t901;
  double t936;
  double t404;
  double t997;
  double t1010;
  double t1038;
  double t1067;
  double t1084;
  double t1104;
  double t1119;
  double t1132;
  double t1134;
  double t1168;
  double t992;
  double t1140;
  double t1143;
  double t383;
  double t1170;
  double t1173;
  double t1189;
  double t1259;
  double t1153;
  double t1228;
  double t1231;
  double t329;
  double t1260;
  double t1266;
  double t1270;
  double t1360;
  double t1250;
  double t1274;
  double t1281;
  double t157;
  double t1370;
  double t1389;
  double t1421;
  double t1509;
  double t1298;
  double t1422;
  double t1443;
  double t86;
  double t1551;
  double t1595;
  double t1599;
  double t1661;
  double t1667;
  double t1692;
  double t1704;
  double t1717;
  double t1724;
  double t1694;
  double t1748;
  double t1755;
  double t1770;
  double t1772;
  double t1834;
  double t1846;
  double t1852;
  double t1873;
  double t1760;
  double t1933;
  double t1944;
  double t1948;
  double t1998;
  double t2001;
  double t1945;
  double t2037;
  double t2039;
  double t2054;
  double t2061;
  double t2087;
  double t2049;
  double t2088;
  double t2099;
  double t2125;
  double t2129;
  double t2139;
  double t2116;
  double t2152;
  double t2194;
  double t2249;
  double t2258;
  double t2282;
  double t2362;
  double t2370;
  double t2382;
  double t2420;
  double t2425;
  double t2429;
  double t2445;
  double t2459;
  double t2463;
  double t2394;
  double t2470;
  double t2477;
  double t2483;
  double t2499;
  double t2507;
  double t2482;
  double t2512;
  double t2515;
  double t2525;
  double t2542;
  double t2547;
  double t2522;
  double t2551;
  double t2562;
  double t2577;
  double t2599;
  double t2607;
  double t2566;
  double t2648;
  double t2652;
  double t2662;
  double t2664;
  double t2675;
  double t1450;
  double t1605;
  double t1614;
  double t1625;
  double t1630;
  double t1639;
  double t2210;
  double t2297;
  double t2325;
  double t2327;
  double t2342;
  double t2343;
  double t2658;
  double t2703;
  double t2715;
  double t2743;
  double t2748;
  double t2750;
  t581 = Cos(var1[5]);
  t625 = Sin(var1[3]);
  t499 = Cos(var1[3]);
  t595 = Sin(var1[4]);
  t636 = Sin(var1[5]);
  t789 = Sin(var1[13]);
  t603 = t499*t581*t595;
  t695 = t625*t636;
  t703 = t603 + t695;
  t452 = Cos(var1[13]);
  t836 = -1.*t581*t625;
  t861 = t499*t595*t636;
  t896 = t836 + t861;
  t996 = Cos(var1[15]);
  t741 = t452*t703;
  t901 = -1.*t789*t896;
  t936 = t741 + t901;
  t404 = Sin(var1[15]);
  t997 = Cos(var1[14]);
  t1010 = Cos(var1[4]);
  t1038 = t997*t499*t1010;
  t1067 = Sin(var1[14]);
  t1084 = t789*t703;
  t1104 = t452*t896;
  t1119 = t1084 + t1104;
  t1132 = t1067*t1119;
  t1134 = t1038 + t1132;
  t1168 = Cos(var1[16]);
  t992 = t404*t936;
  t1140 = t996*t1134;
  t1143 = t992 + t1140;
  t383 = Sin(var1[16]);
  t1170 = t996*t936;
  t1173 = -1.*t404*t1134;
  t1189 = t1170 + t1173;
  t1259 = Cos(var1[17]);
  t1153 = -1.*t383*t1143;
  t1228 = t1168*t1189;
  t1231 = t1153 + t1228;
  t329 = Sin(var1[17]);
  t1260 = t1168*t1143;
  t1266 = t383*t1189;
  t1270 = t1260 + t1266;
  t1360 = Cos(var1[18]);
  t1250 = t329*t1231;
  t1274 = t1259*t1270;
  t1281 = t1250 + t1274;
  t157 = Sin(var1[18]);
  t1370 = t1259*t1231;
  t1389 = -1.*t329*t1270;
  t1421 = t1370 + t1389;
  t1509 = Cos(var1[19]);
  t1298 = -1.*t157*t1281;
  t1422 = t1360*t1421;
  t1443 = t1298 + t1422;
  t86 = Sin(var1[19]);
  t1551 = t1360*t1281;
  t1595 = t157*t1421;
  t1599 = t1551 + t1595;
  t1661 = t581*t625*t595;
  t1667 = -1.*t499*t636;
  t1692 = t1661 + t1667;
  t1704 = t499*t581;
  t1717 = t625*t595*t636;
  t1724 = t1704 + t1717;
  t1694 = t452*t1692;
  t1748 = -1.*t789*t1724;
  t1755 = t1694 + t1748;
  t1770 = t997*t1010*t625;
  t1772 = t789*t1692;
  t1834 = t452*t1724;
  t1846 = t1772 + t1834;
  t1852 = t1067*t1846;
  t1873 = t1770 + t1852;
  t1760 = t404*t1755;
  t1933 = t996*t1873;
  t1944 = t1760 + t1933;
  t1948 = t996*t1755;
  t1998 = -1.*t404*t1873;
  t2001 = t1948 + t1998;
  t1945 = -1.*t383*t1944;
  t2037 = t1168*t2001;
  t2039 = t1945 + t2037;
  t2054 = t1168*t1944;
  t2061 = t383*t2001;
  t2087 = t2054 + t2061;
  t2049 = t329*t2039;
  t2088 = t1259*t2087;
  t2099 = t2049 + t2088;
  t2125 = t1259*t2039;
  t2129 = -1.*t329*t2087;
  t2139 = t2125 + t2129;
  t2116 = -1.*t157*t2099;
  t2152 = t1360*t2139;
  t2194 = t2116 + t2152;
  t2249 = t1360*t2099;
  t2258 = t157*t2139;
  t2282 = t2249 + t2258;
  t2362 = t452*t1010*t581;
  t2370 = -1.*t1010*t789*t636;
  t2382 = t2362 + t2370;
  t2420 = -1.*t997*t595;
  t2425 = t1010*t581*t789;
  t2429 = t452*t1010*t636;
  t2445 = t2425 + t2429;
  t2459 = t1067*t2445;
  t2463 = t2420 + t2459;
  t2394 = t404*t2382;
  t2470 = t996*t2463;
  t2477 = t2394 + t2470;
  t2483 = t996*t2382;
  t2499 = -1.*t404*t2463;
  t2507 = t2483 + t2499;
  t2482 = -1.*t383*t2477;
  t2512 = t1168*t2507;
  t2515 = t2482 + t2512;
  t2525 = t1168*t2477;
  t2542 = t383*t2507;
  t2547 = t2525 + t2542;
  t2522 = t329*t2515;
  t2551 = t1259*t2547;
  t2562 = t2522 + t2551;
  t2577 = t1259*t2515;
  t2599 = -1.*t329*t2547;
  t2607 = t2577 + t2599;
  t2566 = -1.*t157*t2562;
  t2648 = t1360*t2607;
  t2652 = t2566 + t2648;
  t2662 = t1360*t2562;
  t2664 = t157*t2607;
  t2675 = t2662 + t2664;
  t1450 = t86*t1443;
  t1605 = t1509*t1599;
  t1614 = t1450 + t1605;
  t1625 = t1509*t1443;
  t1630 = -1.*t86*t1599;
  t1639 = t1625 + t1630;
  t2210 = t86*t2194;
  t2297 = t1509*t2282;
  t2325 = t2210 + t2297;
  t2327 = t1509*t2194;
  t2342 = -1.*t86*t2282;
  t2343 = t2327 + t2342;
  t2658 = t86*t2652;
  t2703 = t1509*t2675;
  t2715 = t2658 + t2703;
  t2743 = t1509*t2652;
  t2748 = -1.*t86*t2675;
  t2750 = t2743 + t2748;
  p_output1[0]=0.642788*t1614 + 0.766044*t1639;
  p_output1[1]=0.642788*t2325 + 0.766044*t2343;
  p_output1[2]=0.642788*t2715 + 0.766044*t2750;
  p_output1[3]=-1.*t1010*t1067*t499 + t1119*t997;
  p_output1[4]=-1.*t1010*t1067*t625 + t1846*t997;
  p_output1[5]=t1067*t595 + t2445*t997;
  p_output1[6]=-0.766044*t1614 + 0.642788*t1639;
  p_output1[7]=-0.766044*t2325 + 0.642788*t2343;
  p_output1[8]=-0.766044*t2715 + 0.642788*t2750;
}



void R_RightToeBottomFront_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
