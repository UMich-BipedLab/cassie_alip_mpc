/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:05 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_RightKneeSpringJoint_src.h"

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
  double t155;
  double t173;
  double t287;
  double t345;
  double t292;
  double t356;
  double t548;
  double t570;
  double t366;
  double t369;
  double t427;
  double t430;
  double t456;
  double t518;
  double t529;
  double t553;
  double t594;
  double t605;
  double t630;
  double t638;
  double t644;
  double t868;
  double t854;
  double t657;
  double t663;
  double t666;
  double t954;
  double t961;
  double t688;
  double t712;
  double t729;
  double t966;
  double t974;
  double t980;
  double t1040;
  double t1049;
  double t1051;
  double t925;
  double t926;
  double t950;
  double t154;
  double t1303;
  double t1313;
  double t1333;
  double t1143;
  double t1158;
  double t1176;
  double t860;
  double t893;
  double t903;
  double t1072;
  double t1105;
  double t1608;
  double t1629;
  double t1114;
  double t1652;
  double t1664;
  double t1446;
  double t1466;
  double t1473;
  double t1363;
  double t1381;
  double t1384;
  double t1669;
  double t1685;
  double t1700;
  double t995;
  double t1057;
  double t1720;
  double t1726;
  double t1736;
  double t1261;
  double t1267;
  double t1832;
  double t1843;
  double t1862;
  double t1229;
  double t1235;
  double t1553;
  double t1559;
  double t1770;
  double t1772;
  double t1785;
  double t1982;
  double t2006;
  double t2008;
  double t1495;
  double t1500;
  double t1505;
  double t1711;
  double t1754;
  double t2383;
  double t2400;
  double t2403;
  double t2422;
  double t2119;
  double t2120;
  double t2135;
  double t1616;
  double t1630;
  double t1639;
  double t1871;
  double t1877;
  double t2408;
  double t2423;
  double t2427;
  double t2456;
  double t2460;
  double t2461;
  double t2069;
  double t2080;
  double t2089;
  double t1964;
  double t1966;
  double t2020;
  double t2024;
  double t2155;
  double t2167;
  double t2209;
  double t2213;
  double t2252;
  double t2257;
  double t2259;
  double t2261;
  double t2277;
  double t2278;
  double t2326;
  double t2333;
  double t2369;
  double t2439;
  double t2462;
  double t2631;
  double t2634;
  double t2641;
  double t2719;
  double t2722;
  double t2723;
  double t2729;
  double t2654;
  double t2655;
  double t2660;
  double t2493;
  double t2496;
  double t2500;
  double t2505;
  double t2508;
  double t2509;
  double t2518;
  double t2519;
  double t2726;
  double t2731;
  double t2737;
  double t2576;
  double t2594;
  double t2596;
  double t2745;
  double t2757;
  double t2761;
  double t2617;
  double t2618;
  double t2621;
  double t2547;
  double t2549;
  double t2560;
  double t2562;
  double t2666;
  double t2672;
  double t2679;
  double t2683;
  t155 = Cos(var1[3]);
  t173 = Sin(var1[3]);
  t287 = Cos(var1[4]);
  t345 = Sin(var1[4]);
  t292 = -1.*var1[2]*t287*t173;
  t356 = -1.*var1[1]*t345;
  t548 = Cos(var1[5]);
  t570 = Sin(var1[5]);
  t366 = var1[2]*t155*t287;
  t369 = var1[0]*t345;
  t427 = -1.*var1[1]*t155*t287;
  t430 = var1[0]*t287*t173;
  t456 = t155*t287;
  t518 = t287*t173;
  t529 = -1.*t345;
  t553 = t155*t548*t345;
  t594 = t173*t570;
  t605 = t553 + t594;
  t630 = -1.*t548*t173;
  t638 = t155*t345*t570;
  t644 = t630 + t638;
  t868 = Cos(var1[13]);
  t854 = Sin(var1[13]);
  t657 = t548*t173*t345;
  t663 = -1.*t155*t570;
  t666 = t657 + t663;
  t954 = -1.*t868;
  t961 = 1. + t954;
  t688 = t155*t548;
  t712 = t173*t345*t570;
  t729 = t688 + t712;
  t966 = 0.07996*t961;
  t974 = 0.135*t854;
  t980 = 0. + t966 + t974;
  t1040 = -0.135*t961;
  t1049 = 0.07996*t854;
  t1051 = 0. + t1040 + t1049;
  t925 = t868*t287*t548;
  t926 = -1.*t287*t854*t570;
  t950 = t925 + t926;
  t154 = -1.*var1[0];
  t1303 = t868*t605;
  t1313 = -1.*t854*t644;
  t1333 = t1303 + t1313;
  t1143 = t868*t666;
  t1158 = -1.*t854*t729;
  t1176 = t1143 + t1158;
  t860 = t854*t605;
  t893 = t868*t644;
  t903 = t860 + t893;
  t1072 = -1.*var1[2];
  t1105 = -1.*t287*t548*t980;
  t1608 = Cos(var1[14]);
  t1629 = Sin(var1[14]);
  t1114 = -1.*t287*t1051*t570;
  t1652 = -1.*t1608;
  t1664 = 1. + t1652;
  t1446 = t287*t548*t854;
  t1466 = t868*t287*t570;
  t1473 = t1446 + t1466;
  t1363 = t854*t666;
  t1381 = t868*t729;
  t1384 = t1363 + t1381;
  t1669 = -0.08055*t1664;
  t1685 = -0.135*t1629;
  t1700 = 0. + t1669 + t1685;
  t995 = t980*t666;
  t1057 = t1051*t729;
  t1720 = -0.135*t1664;
  t1726 = 0.08055*t1629;
  t1736 = 0. + t1720 + t1726;
  t1261 = t287*t548*t980;
  t1267 = t287*t1051*t570;
  t1832 = t1629*t345;
  t1843 = t1608*t1473;
  t1862 = t1832 + t1843;
  t1229 = -1.*t980*t605;
  t1235 = -1.*t1051*t644;
  t1553 = t980*t605;
  t1559 = t1051*t644;
  t1770 = -1.*t287*t1629*t173;
  t1772 = t1608*t1384;
  t1785 = t1770 + t1772;
  t1982 = -1.*t155*t287*t1629;
  t2006 = t1608*t903;
  t2008 = t1982 + t2006;
  t1495 = -1.*var1[1];
  t1500 = -1.*t980*t666;
  t1505 = -1.*t1051*t729;
  t1711 = t1700*t345;
  t1754 = -1.*t1736*t1473;
  t2383 = Cos(var1[15]);
  t2400 = -1.*t2383;
  t2403 = 1. + t2400;
  t2422 = Sin(var1[15]);
  t2119 = -1.*t1608*t345;
  t2120 = t1629*t1473;
  t2135 = t2119 + t2120;
  t1616 = t1608*t155*t287;
  t1630 = t1629*t903;
  t1639 = t1616 + t1630;
  t1871 = t287*t1700*t173;
  t1877 = t1736*t1384;
  t2408 = -0.01004*t2403;
  t2423 = 0.08055*t2422;
  t2427 = 0. + t2408 + t2423;
  t2456 = -0.08055*t2403;
  t2460 = -0.01004*t2422;
  t2461 = 0. + t2456 + t2460;
  t2069 = t1608*t287*t173;
  t2080 = t1629*t1384;
  t2089 = t2069 + t2080;
  t1964 = -1.*t1700*t345;
  t1966 = t1736*t1473;
  t2020 = -1.*t155*t287*t1700;
  t2024 = -1.*t1736*t903;
  t2155 = t155*t287*t1700;
  t2167 = t1736*t903;
  t2209 = -1.*t287*t1700*t173;
  t2213 = -1.*t1736*t1384;
  t2252 = t155*t287*t1629;
  t2257 = -1.*t1608*t903;
  t2259 = 0. + t2252 + t2257;
  t2261 = t287*t1629*t173;
  t2277 = -1.*t1608*t1384;
  t2278 = 0. + t2261 + t2277;
  t2326 = -1.*t1629*t345;
  t2333 = -1.*t1608*t1473;
  t2369 = 0. + t2326 + t2333;
  t2439 = -1.*t2427*t950;
  t2462 = -1.*t2461*t2135;
  t2631 = t2422*t950;
  t2634 = t2383*t2135;
  t2641 = t2631 + t2634;
  t2719 = Cos(var1[16]);
  t2722 = -1.*t2719;
  t2723 = 1. + t2722;
  t2729 = Sin(var1[16]);
  t2654 = t2383*t950;
  t2655 = -1.*t2422*t2135;
  t2660 = t2654 + t2655;
  t2493 = t2422*t1333;
  t2496 = t2383*t1639;
  t2500 = t2493 + t2496;
  t2505 = t2383*t1333;
  t2508 = -1.*t2422*t1639;
  t2509 = t2505 + t2508;
  t2518 = t2427*t1176;
  t2519 = t2461*t2089;
  t2726 = -0.08055*t2723;
  t2731 = -0.13004*t2729;
  t2737 = 0. + t2726 + t2731;
  t2576 = t2422*t1176;
  t2594 = t2383*t2089;
  t2596 = t2576 + t2594;
  t2745 = -0.13004*t2723;
  t2757 = 0.08055*t2729;
  t2761 = 0. + t2745 + t2757;
  t2617 = t2383*t1176;
  t2618 = -1.*t2422*t2089;
  t2621 = t2617 + t2618;
  t2547 = t2427*t950;
  t2549 = t2461*t2135;
  t2560 = -1.*t2427*t1333;
  t2562 = -1.*t2461*t1639;
  t2666 = t2427*t1333;
  t2672 = t2461*t1639;
  t2679 = -1.*t2427*t1176;
  t2683 = -1.*t2461*t2089;
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
  p_output1[19]=t154;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t155*var1[2];
  p_output1[25]=-1.*t173*var1[2];
  p_output1[26]=t155*var1[0] + t173*var1[1];
  p_output1[27]=-1.*t173;
  p_output1[28]=t155;
  p_output1[29]=0;
  p_output1[30]=t292 + t356;
  p_output1[31]=t366 + t369;
  p_output1[32]=t427 + t430;
  p_output1[33]=t456;
  p_output1[34]=t518;
  p_output1[35]=t529;
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
  p_output1[78]=t292 + t356 + 0.135*t605 + 0.07996*t644;
  p_output1[79]=t366 + t369 + 0.135*t666 + 0.07996*t729;
  p_output1[80]=t427 + t430 + 0.135*t287*t548 + 0.07996*t287*t570;
  p_output1[81]=0. + t456;
  p_output1[82]=0. + t518;
  p_output1[83]=0. + t529;
  p_output1[84]=(0. + t1072 + t1105 + t1114)*t1176 - 0.135*t155*t287 + 0.08055*t903 + t950*(0. + t1057 + t995 + var1[1]);
  p_output1[85]=0.08055*t1384 - 0.135*t173*t287 + (0. + t1229 + t1235 + t154)*t950 + t1333*(0. + t1261 + t1267 + var1[2]);
  p_output1[86]=0.08055*t1473 + t1333*(0. + t1495 + t1500 + t1505) + 0.135*t345 + t1176*(0. + t1553 + t1559 + var1[0]);
  p_output1[87]=0. + t1303 + t1313;
  p_output1[88]=0. + t1143 + t1158;
  p_output1[89]=0. + t925 + t926;
  p_output1[90]=0.08055*t1333 - 0.01004*t1639 - 1.*(0. + t1072 + t1105 + t1114 + t1711 + t1754)*t1785 - 1.*t1862*(0. + t1057 + t1871 + t1877 + t995 + var1[1]);
  p_output1[91]=0.08055*t1176 - 1.*t1862*(0. + t1229 + t1235 + t154 + t2020 + t2024) - 0.01004*t2089 - 1.*t2008*(0. + t1261 + t1267 + t1964 + t1966 + var1[2]);
  p_output1[92]=-0.01004*t2135 - 1.*t2008*(0. + t1495 + t1500 + t1505 + t2209 + t2213) + 0.08055*t950 - 1.*t1785*(0. + t1553 + t1559 + t2155 + t2167 + var1[0]);
  p_output1[93]=t2259;
  p_output1[94]=t2278;
  p_output1[95]=t2369;
  p_output1[96]=-1.*t1785*(0. + t1072 + t1105 + t1114 + t1711 + t1754 + t2439 + t2462) - 0.13004*t2500 + 0.08055*t2509 - 1.*t1862*(0. + t1057 + t1871 + t1877 + t2518 + t2519 + t995 + var1[1]);
  p_output1[97]=-1.*t1862*(0. + t1229 + t1235 + t154 + t2020 + t2024 + t2560 + t2562) - 0.13004*t2596 + 0.08055*t2621 - 1.*t2008*(0. + t1261 + t1267 + t1964 + t1966 + t2547 + t2549 + var1[2]);
  p_output1[98]=-0.13004*t2641 + 0.08055*t2660 - 1.*t2008*(0. + t1495 + t1500 + t1505 + t2209 + t2213 + t2679 + t2683) - 1.*t1785*(0. + t1553 + t1559 + t2155 + t2167 + t2666 + t2672 + var1[0]);
  p_output1[99]=t2259;
  p_output1[100]=t2278;
  p_output1[101]=t2369;
  p_output1[102]=0.03315*(t2509*t2719 - 1.*t2500*t2729) - 0.19074*(t2500*t2719 + t2509*t2729) - 1.*t1785*(0. + t1072 + t1105 + t1114 + t1711 + t1754 + t2439 + t2462 - 1.*t2641*t2737 - 1.*t2660*t2761) - 1.*t1862*(0. + t1057 + t1871 + t1877 + t2518 + t2519 + t2596*t2737 + t2621*t2761 + t995 + var1[1]);
  p_output1[103]=0.03315*(t2621*t2719 - 1.*t2596*t2729) - 0.19074*(t2596*t2719 + t2621*t2729) - 1.*t1862*(0. + t1229 + t1235 + t154 + t2020 + t2024 + t2560 + t2562 - 1.*t2500*t2737 - 1.*t2509*t2761) - 1.*t2008*(0. + t1261 + t1267 + t1964 + t1966 + t2547 + t2549 + t2641*t2737 + t2660*t2761 + var1[2]);
  p_output1[104]=0.03315*(t2660*t2719 - 1.*t2641*t2729) - 0.19074*(t2641*t2719 + t2660*t2729) - 1.*t2008*(0. + t1495 + t1500 + t1505 + t2209 + t2213 + t2679 + t2683 - 1.*t2596*t2737 - 1.*t2621*t2761) - 1.*t1785*(0. + t1553 + t1559 + t2155 + t2167 + t2666 + t2672 + t2500*t2737 + t2509*t2761 + var1[0]);
  p_output1[105]=t2259;
  p_output1[106]=t2278;
  p_output1[107]=t2369;
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



void Js_RightKneeSpringJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
