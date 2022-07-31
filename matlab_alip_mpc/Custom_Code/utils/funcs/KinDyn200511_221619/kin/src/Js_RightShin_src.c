/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Js_RightShin_src.h"

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
  double t43;
  double t51;
  double t269;
  double t283;
  double t274;
  double t343;
  double t527;
  double t565;
  double t361;
  double t377;
  double t412;
  double t425;
  double t467;
  double t480;
  double t505;
  double t555;
  double t581;
  double t583;
  double t642;
  double t651;
  double t659;
  double t890;
  double t858;
  double t684;
  double t688;
  double t692;
  double t967;
  double t976;
  double t717;
  double t725;
  double t740;
  double t977;
  double t999;
  double t1007;
  double t1028;
  double t1031;
  double t1070;
  double t939;
  double t951;
  double t963;
  double t40;
  double t1331;
  double t1343;
  double t1378;
  double t1207;
  double t1212;
  double t1221;
  double t877;
  double t905;
  double t920;
  double t1121;
  double t1138;
  double t1612;
  double t1631;
  double t1185;
  double t1673;
  double t1675;
  double t1449;
  double t1456;
  double t1466;
  double t1402;
  double t1412;
  double t1417;
  double t1676;
  double t1677;
  double t1697;
  double t1023;
  double t1075;
  double t1704;
  double t1705;
  double t1717;
  double t1265;
  double t1287;
  double t1818;
  double t1832;
  double t1847;
  double t1253;
  double t1254;
  double t1494;
  double t1513;
  double t1749;
  double t1778;
  double t1792;
  double t1947;
  double t1949;
  double t1953;
  double t1474;
  double t1482;
  double t1485;
  double t1698;
  double t1723;
  double t2414;
  double t2418;
  double t2425;
  double t2440;
  double t2115;
  double t2130;
  double t2134;
  double t1626;
  double t1634;
  double t1641;
  double t1848;
  double t1858;
  double t2429;
  double t2445;
  double t2447;
  double t2459;
  double t2465;
  double t2473;
  double t2023;
  double t2035;
  double t2058;
  double t1924;
  double t1930;
  double t1986;
  double t1991;
  double t2154;
  double t2197;
  double t2209;
  double t2213;
  double t2287;
  double t2309;
  double t2328;
  double t2336;
  double t2346;
  double t2349;
  double t2376;
  double t2381;
  double t2386;
  double t2454;
  double t2478;
  double t2672;
  double t2677;
  double t2685;
  double t2757;
  double t2776;
  double t2778;
  double t2793;
  double t2695;
  double t2699;
  double t2709;
  double t2494;
  double t2496;
  double t2506;
  double t2515;
  double t2525;
  double t2527;
  double t2535;
  double t2548;
  double t2785;
  double t2796;
  double t2798;
  double t2604;
  double t2621;
  double t2636;
  double t2802;
  double t2803;
  double t2811;
  double t2646;
  double t2648;
  double t2654;
  double t2565;
  double t2569;
  double t2578;
  double t2581;
  double t2720;
  double t2721;
  double t2727;
  double t2729;
  t43 = Cos(var1[3]);
  t51 = Sin(var1[3]);
  t269 = Cos(var1[4]);
  t283 = Sin(var1[4]);
  t274 = -1.*var1[2]*t269*t51;
  t343 = -1.*var1[1]*t283;
  t527 = Cos(var1[5]);
  t565 = Sin(var1[5]);
  t361 = var1[2]*t43*t269;
  t377 = var1[0]*t283;
  t412 = -1.*var1[1]*t43*t269;
  t425 = var1[0]*t269*t51;
  t467 = t43*t269;
  t480 = t269*t51;
  t505 = -1.*t283;
  t555 = t43*t527*t283;
  t581 = t51*t565;
  t583 = t555 + t581;
  t642 = -1.*t527*t51;
  t651 = t43*t283*t565;
  t659 = t642 + t651;
  t890 = Cos(var1[13]);
  t858 = Sin(var1[13]);
  t684 = t527*t51*t283;
  t688 = -1.*t43*t565;
  t692 = t684 + t688;
  t967 = -1.*t890;
  t976 = 1. + t967;
  t717 = t43*t527;
  t725 = t51*t283*t565;
  t740 = t717 + t725;
  t977 = 0.07996*t976;
  t999 = 0.135*t858;
  t1007 = 0. + t977 + t999;
  t1028 = -0.135*t976;
  t1031 = 0.07996*t858;
  t1070 = 0. + t1028 + t1031;
  t939 = t890*t269*t527;
  t951 = -1.*t269*t858*t565;
  t963 = t939 + t951;
  t40 = -1.*var1[0];
  t1331 = t890*t583;
  t1343 = -1.*t858*t659;
  t1378 = t1331 + t1343;
  t1207 = t890*t692;
  t1212 = -1.*t858*t740;
  t1221 = t1207 + t1212;
  t877 = t858*t583;
  t905 = t890*t659;
  t920 = t877 + t905;
  t1121 = -1.*var1[2];
  t1138 = -1.*t269*t527*t1007;
  t1612 = Cos(var1[14]);
  t1631 = Sin(var1[14]);
  t1185 = -1.*t269*t1070*t565;
  t1673 = -1.*t1612;
  t1675 = 1. + t1673;
  t1449 = t269*t527*t858;
  t1456 = t890*t269*t565;
  t1466 = t1449 + t1456;
  t1402 = t858*t692;
  t1412 = t890*t740;
  t1417 = t1402 + t1412;
  t1676 = -0.08055*t1675;
  t1677 = -0.135*t1631;
  t1697 = 0. + t1676 + t1677;
  t1023 = t1007*t692;
  t1075 = t1070*t740;
  t1704 = -0.135*t1675;
  t1705 = 0.08055*t1631;
  t1717 = 0. + t1704 + t1705;
  t1265 = t269*t527*t1007;
  t1287 = t269*t1070*t565;
  t1818 = t1631*t283;
  t1832 = t1612*t1466;
  t1847 = t1818 + t1832;
  t1253 = -1.*t1007*t583;
  t1254 = -1.*t1070*t659;
  t1494 = t1007*t583;
  t1513 = t1070*t659;
  t1749 = -1.*t269*t1631*t51;
  t1778 = t1612*t1417;
  t1792 = t1749 + t1778;
  t1947 = -1.*t43*t269*t1631;
  t1949 = t1612*t920;
  t1953 = t1947 + t1949;
  t1474 = -1.*var1[1];
  t1482 = -1.*t1007*t692;
  t1485 = -1.*t1070*t740;
  t1698 = t1697*t283;
  t1723 = -1.*t1717*t1466;
  t2414 = Cos(var1[15]);
  t2418 = -1.*t2414;
  t2425 = 1. + t2418;
  t2440 = Sin(var1[15]);
  t2115 = -1.*t1612*t283;
  t2130 = t1631*t1466;
  t2134 = t2115 + t2130;
  t1626 = t1612*t43*t269;
  t1634 = t1631*t920;
  t1641 = t1626 + t1634;
  t1848 = t269*t1697*t51;
  t1858 = t1717*t1417;
  t2429 = -0.01004*t2425;
  t2445 = 0.08055*t2440;
  t2447 = 0. + t2429 + t2445;
  t2459 = -0.08055*t2425;
  t2465 = -0.01004*t2440;
  t2473 = 0. + t2459 + t2465;
  t2023 = t1612*t269*t51;
  t2035 = t1631*t1417;
  t2058 = t2023 + t2035;
  t1924 = -1.*t1697*t283;
  t1930 = t1717*t1466;
  t1986 = -1.*t43*t269*t1697;
  t1991 = -1.*t1717*t920;
  t2154 = t43*t269*t1697;
  t2197 = t1717*t920;
  t2209 = -1.*t269*t1697*t51;
  t2213 = -1.*t1717*t1417;
  t2287 = t43*t269*t1631;
  t2309 = -1.*t1612*t920;
  t2328 = 0. + t2287 + t2309;
  t2336 = t269*t1631*t51;
  t2346 = -1.*t1612*t1417;
  t2349 = 0. + t2336 + t2346;
  t2376 = -1.*t1631*t283;
  t2381 = -1.*t1612*t1466;
  t2386 = 0. + t2376 + t2381;
  t2454 = -1.*t2447*t963;
  t2478 = -1.*t2473*t2134;
  t2672 = t2440*t963;
  t2677 = t2414*t2134;
  t2685 = t2672 + t2677;
  t2757 = Cos(var1[16]);
  t2776 = -1.*t2757;
  t2778 = 1. + t2776;
  t2793 = Sin(var1[16]);
  t2695 = t2414*t963;
  t2699 = -1.*t2440*t2134;
  t2709 = t2695 + t2699;
  t2494 = t2440*t1378;
  t2496 = t2414*t1641;
  t2506 = t2494 + t2496;
  t2515 = t2414*t1378;
  t2525 = -1.*t2440*t1641;
  t2527 = t2515 + t2525;
  t2535 = t2447*t1221;
  t2548 = t2473*t2058;
  t2785 = -0.08055*t2778;
  t2796 = -0.13004*t2793;
  t2798 = 0. + t2785 + t2796;
  t2604 = t2440*t1221;
  t2621 = t2414*t2058;
  t2636 = t2604 + t2621;
  t2802 = -0.13004*t2778;
  t2803 = 0.08055*t2793;
  t2811 = 0. + t2802 + t2803;
  t2646 = t2414*t1221;
  t2648 = -1.*t2440*t2058;
  t2654 = t2646 + t2648;
  t2565 = t2447*t963;
  t2569 = t2473*t2134;
  t2578 = -1.*t2447*t1378;
  t2581 = -1.*t2473*t1641;
  t2720 = t2447*t1378;
  t2721 = t2473*t1641;
  t2727 = -1.*t2447*t1221;
  t2729 = -1.*t2473*t2058;
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
  p_output1[19]=t40;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t43*var1[2];
  p_output1[25]=-1.*t51*var1[2];
  p_output1[26]=t43*var1[0] + t51*var1[1];
  p_output1[27]=-1.*t51;
  p_output1[28]=t43;
  p_output1[29]=0;
  p_output1[30]=t274 + t343;
  p_output1[31]=t361 + t377;
  p_output1[32]=t412 + t425;
  p_output1[33]=t467;
  p_output1[34]=t480;
  p_output1[35]=t505;
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
  p_output1[78]=t274 + t343 + 0.135*t583 + 0.07996*t659;
  p_output1[79]=t361 + t377 + 0.135*t692 + 0.07996*t740;
  p_output1[80]=t412 + t425 + 0.135*t269*t527 + 0.07996*t269*t565;
  p_output1[81]=0. + t467;
  p_output1[82]=0. + t480;
  p_output1[83]=0. + t505;
  p_output1[84]=(0. + t1121 + t1138 + t1185)*t1221 - 0.135*t269*t43 + 0.08055*t920 + t963*(0. + t1023 + t1075 + var1[1]);
  p_output1[85]=0.08055*t1417 - 0.135*t269*t51 + (0. + t1253 + t1254 + t40)*t963 + t1378*(0. + t1265 + t1287 + var1[2]);
  p_output1[86]=0.08055*t1466 + t1378*(0. + t1474 + t1482 + t1485) + 0.135*t283 + t1221*(0. + t1494 + t1513 + var1[0]);
  p_output1[87]=0. + t1331 + t1343;
  p_output1[88]=0. + t1207 + t1212;
  p_output1[89]=0. + t939 + t951;
  p_output1[90]=0.08055*t1378 - 0.01004*t1641 - 1.*(0. + t1121 + t1138 + t1185 + t1698 + t1723)*t1792 - 1.*t1847*(0. + t1023 + t1075 + t1848 + t1858 + var1[1]);
  p_output1[91]=0.08055*t1221 - 0.01004*t2058 - 1.*t1847*(0. + t1253 + t1254 + t1986 + t1991 + t40) - 1.*t1953*(0. + t1265 + t1287 + t1924 + t1930 + var1[2]);
  p_output1[92]=-0.01004*t2134 - 1.*t1953*(0. + t1474 + t1482 + t1485 + t2209 + t2213) + 0.08055*t963 - 1.*t1792*(0. + t1494 + t1513 + t2154 + t2197 + var1[0]);
  p_output1[93]=t2328;
  p_output1[94]=t2349;
  p_output1[95]=t2386;
  p_output1[96]=-1.*t1792*(0. + t1121 + t1138 + t1185 + t1698 + t1723 + t2454 + t2478) - 0.13004*t2506 + 0.08055*t2527 - 1.*t1847*(0. + t1023 + t1075 + t1848 + t1858 + t2535 + t2548 + var1[1]);
  p_output1[97]=-0.13004*t2636 + 0.08055*t2654 - 1.*t1847*(0. + t1253 + t1254 + t1986 + t1991 + t2578 + t2581 + t40) - 1.*t1953*(0. + t1265 + t1287 + t1924 + t1930 + t2565 + t2569 + var1[2]);
  p_output1[98]=-0.13004*t2685 + 0.08055*t2709 - 1.*t1953*(0. + t1474 + t1482 + t1485 + t2209 + t2213 + t2727 + t2729) - 1.*t1792*(0. + t1494 + t1513 + t2154 + t2197 + t2720 + t2721 + var1[0]);
  p_output1[99]=t2328;
  p_output1[100]=t2349;
  p_output1[101]=t2386;
  p_output1[102]=0.03315*(t2527*t2757 - 1.*t2506*t2793) - 0.19074*(t2506*t2757 + t2527*t2793) - 1.*t1792*(0. + t1121 + t1138 + t1185 + t1698 + t1723 + t2454 + t2478 - 1.*t2685*t2798 - 1.*t2709*t2811) - 1.*t1847*(0. + t1023 + t1075 + t1848 + t1858 + t2535 + t2548 + t2636*t2798 + t2654*t2811 + var1[1]);
  p_output1[103]=0.03315*(t2654*t2757 - 1.*t2636*t2793) - 0.19074*(t2636*t2757 + t2654*t2793) - 1.*t1847*(0. + t1253 + t1254 + t1986 + t1991 + t2578 + t2581 - 1.*t2506*t2798 - 1.*t2527*t2811 + t40) - 1.*t1953*(0. + t1265 + t1287 + t1924 + t1930 + t2565 + t2569 + t2685*t2798 + t2709*t2811 + var1[2]);
  p_output1[104]=0.03315*(t2709*t2757 - 1.*t2685*t2793) - 0.19074*(t2685*t2757 + t2709*t2793) - 1.*t1953*(0. + t1474 + t1482 + t1485 + t2209 + t2213 + t2727 + t2729 - 1.*t2636*t2798 - 1.*t2654*t2811) - 1.*t1792*(0. + t1494 + t1513 + t2154 + t2197 + t2720 + t2721 + t2506*t2798 + t2527*t2811 + var1[0]);
  p_output1[105]=t2328;
  p_output1[106]=t2349;
  p_output1[107]=t2386;
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



void Js_RightShin_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
