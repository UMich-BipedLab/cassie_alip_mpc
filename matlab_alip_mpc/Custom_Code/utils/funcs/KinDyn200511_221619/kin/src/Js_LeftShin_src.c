/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:42 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_LeftShin_src.h"

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
  double t125;
  double t160;
  double t246;
  double t272;
  double t264;
  double t283;
  double t448;
  double t494;
  double t305;
  double t306;
  double t340;
  double t350;
  double t385;
  double t390;
  double t411;
  double t609;
  double t611;
  double t637;
  double t675;
  double t689;
  double t707;
  double t806;
  double t811;
  double t820;
  double t851;
  double t572;
  double t578;
  double t593;
  double t458;
  double t550;
  double t553;
  double t847;
  double t887;
  double t900;
  double t913;
  double t929;
  double t936;
  double t79;
  double t984;
  double t1011;
  double t1013;
  double t1326;
  double t1329;
  double t1344;
  double t1170;
  double t1188;
  double t1206;
  double t1078;
  double t1107;
  double t1111;
  double t1372;
  double t1375;
  double t1376;
  double t1539;
  double t1547;
  double t1553;
  double t1564;
  double t1241;
  double t1267;
  double t1296;
  double t911;
  double t973;
  double t1560;
  double t1582;
  double t1589;
  double t1604;
  double t1605;
  double t1606;
  double t1027;
  double t1032;
  double t1055;
  double t1313;
  double t1323;
  double t1224;
  double t1230;
  double t1688;
  double t1707;
  double t1727;
  double t1398;
  double t1420;
  double t1439;
  double t1810;
  double t1819;
  double t1827;
  double t1458;
  double t1459;
  double t1623;
  double t1639;
  double t1662;
  double t1599;
  double t1608;
  double t2064;
  double t2093;
  double t2134;
  double t2289;
  double t2298;
  double t2300;
  double t2306;
  double t1670;
  double t1672;
  double t1883;
  double t1904;
  double t1923;
  double t2302;
  double t2307;
  double t2309;
  double t2316;
  double t2320;
  double t2323;
  double t1753;
  double t1756;
  double t1760;
  double t1797;
  double t1802;
  double t1837;
  double t1851;
  double t2025;
  double t2032;
  double t1967;
  double t1977;
  double t2151;
  double t2157;
  double t2171;
  double t2179;
  double t2199;
  double t2230;
  double t2252;
  double t2275;
  double t2288;
  double t2312;
  double t2333;
  double t2643;
  double t2644;
  double t2652;
  double t2712;
  double t2714;
  double t2721;
  double t2724;
  double t2667;
  double t2669;
  double t2687;
  double t2368;
  double t2369;
  double t2723;
  double t2730;
  double t2731;
  double t2507;
  double t2509;
  double t2516;
  double t2737;
  double t2740;
  double t2750;
  double t2528;
  double t2546;
  double t2566;
  double t2382;
  double t2387;
  double t2391;
  double t2412;
  double t2414;
  double t2422;
  double t2459;
  double t2462;
  double t2495;
  double t2497;
  double t2625;
  double t2628;
  double t2597;
  double t2600;
  t125 = Cos(var1[3]);
  t160 = Sin(var1[3]);
  t246 = Cos(var1[4]);
  t272 = Sin(var1[4]);
  t264 = -1.*var1[2]*t246*t160;
  t283 = -1.*var1[1]*t272;
  t448 = Cos(var1[5]);
  t494 = Sin(var1[5]);
  t305 = var1[2]*t125*t246;
  t306 = var1[0]*t272;
  t340 = -1.*var1[1]*t125*t246;
  t350 = var1[0]*t246*t160;
  t385 = t125*t246;
  t390 = t246*t160;
  t411 = -1.*t272;
  t609 = t448*t160*t272;
  t611 = -1.*t125*t494;
  t637 = t609 + t611;
  t675 = t125*t448;
  t689 = t160*t272*t494;
  t707 = t675 + t689;
  t806 = Cos(var1[6]);
  t811 = -1.*t806;
  t820 = 1. + t811;
  t851 = Sin(var1[6]);
  t572 = -1.*t448*t160;
  t578 = t125*t272*t494;
  t593 = t572 + t578;
  t458 = t125*t448*t272;
  t550 = t160*t494;
  t553 = t458 + t550;
  t847 = 0.07996*t820;
  t887 = -0.135*t851;
  t900 = 0. + t847 + t887;
  t913 = 0.135*t820;
  t929 = 0.07996*t851;
  t936 = 0. + t913 + t929;
  t79 = -1.*var1[0];
  t984 = t246*t448*t806;
  t1011 = -1.*t246*t494*t851;
  t1013 = t984 + t1011;
  t1326 = t806*t553;
  t1329 = -1.*t593*t851;
  t1344 = t1326 + t1329;
  t1170 = t806*t637;
  t1188 = -1.*t707*t851;
  t1206 = t1170 + t1188;
  t1078 = -1.*var1[2];
  t1107 = -1.*t246*t448*t900;
  t1111 = -1.*t246*t494*t936;
  t1372 = t246*t806*t494;
  t1375 = t246*t448*t851;
  t1376 = t1372 + t1375;
  t1539 = Cos(var1[7]);
  t1547 = -1.*t1539;
  t1553 = 1. + t1547;
  t1564 = Sin(var1[7]);
  t1241 = t806*t707;
  t1267 = t637*t851;
  t1296 = t1241 + t1267;
  t911 = t637*t900;
  t973 = t707*t936;
  t1560 = 0.135*t1553;
  t1582 = 0.08055*t1564;
  t1589 = 0. + t1560 + t1582;
  t1604 = -0.08055*t1553;
  t1605 = 0.135*t1564;
  t1606 = 0. + t1604 + t1605;
  t1027 = t806*t593;
  t1032 = t553*t851;
  t1055 = t1027 + t1032;
  t1313 = t246*t448*t900;
  t1323 = t246*t494*t936;
  t1224 = -1.*t553*t900;
  t1230 = -1.*t593*t936;
  t1688 = t1539*t1376;
  t1707 = t272*t1564;
  t1727 = t1688 + t1707;
  t1398 = -1.*var1[1];
  t1420 = -1.*t637*t900;
  t1439 = -1.*t707*t936;
  t1810 = t1539*t1055;
  t1819 = -1.*t125*t246*t1564;
  t1827 = t1810 + t1819;
  t1458 = t553*t900;
  t1459 = t593*t936;
  t1623 = t1539*t1296;
  t1639 = -1.*t246*t160*t1564;
  t1662 = t1623 + t1639;
  t1599 = -1.*t1376*t1589;
  t1608 = t272*t1606;
  t2064 = -1.*t1539*t272;
  t2093 = t1376*t1564;
  t2134 = t2064 + t2093;
  t2289 = Cos(var1[8]);
  t2298 = -1.*t2289;
  t2300 = 1. + t2298;
  t2306 = Sin(var1[8]);
  t1670 = t1296*t1589;
  t1672 = t246*t160*t1606;
  t1883 = t246*t1539*t160;
  t1904 = t1296*t1564;
  t1923 = t1883 + t1904;
  t2302 = -0.08055*t2300;
  t2307 = -0.01004*t2306;
  t2309 = 0. + t2302 + t2307;
  t2316 = -0.01004*t2300;
  t2320 = 0.08055*t2306;
  t2323 = 0. + t2316 + t2320;
  t1753 = t125*t246*t1539;
  t1756 = t1055*t1564;
  t1760 = t1753 + t1756;
  t1797 = t1376*t1589;
  t1802 = -1.*t272*t1606;
  t1837 = -1.*t1055*t1589;
  t1851 = -1.*t125*t246*t1606;
  t2025 = t1055*t1589;
  t2032 = t125*t246*t1606;
  t1967 = -1.*t1296*t1589;
  t1977 = -1.*t246*t160*t1606;
  t2151 = -1.*t1539*t1055;
  t2157 = t125*t246*t1564;
  t2171 = 0. + t2151 + t2157;
  t2179 = -1.*t1539*t1296;
  t2199 = t246*t160*t1564;
  t2230 = 0. + t2179 + t2199;
  t2252 = -1.*t1539*t1376;
  t2275 = -1.*t272*t1564;
  t2288 = 0. + t2252 + t2275;
  t2312 = -1.*t2134*t2309;
  t2333 = -1.*t1013*t2323;
  t2643 = t2289*t2134;
  t2644 = t1013*t2306;
  t2652 = t2643 + t2644;
  t2712 = Cos(var1[9]);
  t2714 = -1.*t2712;
  t2721 = 1. + t2714;
  t2724 = Sin(var1[9]);
  t2667 = t2289*t1013;
  t2669 = -1.*t2134*t2306;
  t2687 = t2667 + t2669;
  t2368 = t1923*t2309;
  t2369 = t1206*t2323;
  t2723 = -0.08055*t2721;
  t2730 = -0.13004*t2724;
  t2731 = 0. + t2723 + t2730;
  t2507 = t2289*t1923;
  t2509 = t1206*t2306;
  t2516 = t2507 + t2509;
  t2737 = -0.13004*t2721;
  t2740 = 0.08055*t2724;
  t2750 = 0. + t2737 + t2740;
  t2528 = t2289*t1206;
  t2546 = -1.*t1923*t2306;
  t2566 = t2528 + t2546;
  t2382 = t2289*t1760;
  t2387 = t1344*t2306;
  t2391 = t2382 + t2387;
  t2412 = t2289*t1344;
  t2414 = -1.*t1760*t2306;
  t2422 = t2412 + t2414;
  t2459 = t2134*t2309;
  t2462 = t1013*t2323;
  t2495 = -1.*t1760*t2309;
  t2497 = -1.*t1344*t2323;
  t2625 = -1.*t1923*t2309;
  t2628 = -1.*t1206*t2323;
  t2597 = t1760*t2309;
  t2600 = t1344*t2323;
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
  p_output1[19]=t79;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t125*var1[2];
  p_output1[25]=-1.*t160*var1[2];
  p_output1[26]=t125*var1[0] + t160*var1[1];
  p_output1[27]=-1.*t160;
  p_output1[28]=t125;
  p_output1[29]=0;
  p_output1[30]=t264 + t283;
  p_output1[31]=t305 + t306;
  p_output1[32]=t340 + t350;
  p_output1[33]=t385;
  p_output1[34]=t390;
  p_output1[35]=t411;
  p_output1[36]=t264 + t283 - 0.135*t553 + 0.07996*t593;
  p_output1[37]=t305 + t306 - 0.135*t637 + 0.07996*t707;
  p_output1[38]=t340 + t350 - 0.135*t246*t448 + 0.07996*t246*t494;
  p_output1[39]=0. + t385;
  p_output1[40]=0. + t390;
  p_output1[41]=0. + t411;
  p_output1[42]=0.08055*t1055 + (0. + t1078 + t1107 + t1111)*t1206 + 0.135*t125*t246 + t1013*(0. + t911 + t973 + var1[1]);
  p_output1[43]=0.08055*t1296 + 0.135*t160*t246 + t1013*(0. + t1224 + t1230 + t79) + t1344*(0. + t1313 + t1323 + var1[2]);
  p_output1[44]=0.08055*t1376 + t1344*(0. + t1398 + t1420 + t1439) - 0.135*t272 + t1206*(0. + t1458 + t1459 + var1[0]);
  p_output1[45]=0. + t1326 + t1329;
  p_output1[46]=0. + t1170 + t1188;
  p_output1[47]=0. + t1011 + t984;
  p_output1[48]=0.08055*t1344 - 1.*(0. + t1078 + t1107 + t1111 + t1599 + t1608)*t1662 - 0.01004*t1760 - 1.*t1727*(0. + t1670 + t1672 + t911 + t973 + var1[1]);
  p_output1[49]=0.08055*t1206 - 0.01004*t1923 - 1.*t1727*(0. + t1224 + t1230 + t1837 + t1851 + t79) - 1.*t1827*(0. + t1313 + t1323 + t1797 + t1802 + var1[2]);
  p_output1[50]=0.08055*t1013 - 1.*t1827*(0. + t1398 + t1420 + t1439 + t1967 + t1977) - 0.01004*t2134 - 1.*t1662*(0. + t1458 + t1459 + t2025 + t2032 + var1[0]);
  p_output1[51]=t2171;
  p_output1[52]=t2230;
  p_output1[53]=t2288;
  p_output1[54]=-1.*t1662*(0. + t1078 + t1107 + t1111 + t1599 + t1608 + t2312 + t2333) - 0.13004*t2391 + 0.08055*t2422 - 1.*t1727*(0. + t1670 + t1672 + t2368 + t2369 + t911 + t973 + var1[1]);
  p_output1[55]=-0.13004*t2516 + 0.08055*t2566 - 1.*t1727*(0. + t1224 + t1230 + t1837 + t1851 + t2495 + t2497 + t79) - 1.*t1827*(0. + t1313 + t1323 + t1797 + t1802 + t2459 + t2462 + var1[2]);
  p_output1[56]=-1.*t1827*(0. + t1398 + t1420 + t1439 + t1967 + t1977 + t2625 + t2628) - 0.13004*t2652 + 0.08055*t2687 - 1.*t1662*(0. + t1458 + t1459 + t2025 + t2032 + t2597 + t2600 + var1[0]);
  p_output1[57]=t2171;
  p_output1[58]=t2230;
  p_output1[59]=t2288;
  p_output1[60]=0.03315*(t2422*t2712 - 1.*t2391*t2724) - 0.19074*(t2391*t2712 + t2422*t2724) - 1.*t1662*(0. + t1078 + t1107 + t1111 + t1599 + t1608 + t2312 + t2333 - 1.*t2652*t2731 - 1.*t2687*t2750) - 1.*t1727*(0. + t1670 + t1672 + t2368 + t2369 + t2516*t2731 + t2566*t2750 + t911 + t973 + var1[1]);
  p_output1[61]=0.03315*(t2566*t2712 - 1.*t2516*t2724) - 0.19074*(t2516*t2712 + t2566*t2724) - 1.*t1727*(0. + t1224 + t1230 + t1837 + t1851 + t2495 + t2497 - 1.*t2391*t2731 - 1.*t2422*t2750 + t79) - 1.*t1827*(0. + t1313 + t1323 + t1797 + t1802 + t2459 + t2462 + t2652*t2731 + t2687*t2750 + var1[2]);
  p_output1[62]=0.03315*(t2687*t2712 - 1.*t2652*t2724) - 0.19074*(t2652*t2712 + t2687*t2724) - 1.*t1827*(0. + t1398 + t1420 + t1439 + t1967 + t1977 + t2625 + t2628 - 1.*t2516*t2731 - 1.*t2566*t2750) - 1.*t1662*(0. + t1458 + t1459 + t2025 + t2032 + t2597 + t2600 + t2391*t2731 + t2422*t2750 + var1[0]);
  p_output1[63]=t2171;
  p_output1[64]=t2230;
  p_output1[65]=t2288;
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



void Js_LeftShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
