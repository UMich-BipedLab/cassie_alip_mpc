/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:56 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_RightKnee_src.h"

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
  double t200;
  double t237;
  double t192;
  double t306;
  double t351;
  double t205;
  double t314;
  double t332;
  double t108;
  double t354;
  double t359;
  double t392;
  double t505;
  double t515;
  double t520;
  double t85;
  double t629;
  double t661;
  double t698;
  double t343;
  double t538;
  double t577;
  double t744;
  double t21;
  double t1268;
  double t1284;
  double t1321;
  double t1332;
  double t1335;
  double t842;
  double t846;
  double t890;
  double t1120;
  double t1360;
  double t1391;
  double t1400;
  double t1266;
  double t1336;
  double t1355;
  double t1566;
  double t1587;
  double t1618;
  double t1657;
  double t1593;
  double t1595;
  double t604;
  double t768;
  double t774;
  double t909;
  double t952;
  double t990;
  double t1157;
  double t1170;
  double t1231;
  double t1240;
  double t1241;
  double t1356;
  double t1419;
  double t1463;
  double t1485;
  double t1487;
  double t1489;
  double t1505;
  double t1518;
  double t1523;
  double t1537;
  double t1556;
  double t1616;
  double t1667;
  double t1717;
  double t1807;
  double t1873;
  double t1876;
  double t1901;
  double t1909;
  double t1919;
  double t1948;
  double t2303;
  double t2307;
  double t2308;
  double t2631;
  double t2640;
  double t2575;
  double t2607;
  double t2642;
  double t2694;
  double t2700;
  double t2724;
  double t2747;
  double t2748;
  double t2777;
  double t2778;
  double t2426;
  double t2427;
  double t2483;
  double t2491;
  double t2500;
  double t2536;
  double t2541;
  double t2608;
  double t2612;
  double t2733;
  double t2794;
  double t2849;
  double t2852;
  double t2857;
  double t2882;
  double t2895;
  double t2896;
  double t2913;
  double t2922;
  double t2314;
  double t2325;
  double t2408;
  double t2964;
  double t2996;
  double t2999;
  double t3003;
  double t3016;
  double t2433;
  double t2445;
  double t2876;
  double t2938;
  double t2940;
  double t3050;
  double t3068;
  double t3074;
  double t3085;
  double t3108;
  double t3120;
  double t3126;
  double t2942;
  double t3026;
  double t3046;
  double t3092;
  double t3133;
  double t3143;
  double t3159;
  double t3170;
  double t3178;
  double t2163;
  double t2216;
  double t2246;
  double t3048;
  double t3233;
  double t3329;
  double t3383;
  double t3469;
  double t3522;
  double t3552;
  double t3601;
  double t3674;
  double t3704;
  double t3750;
  double t3814;
  double t4477;
  double t4457;
  t200 = Cos(var1[16]);
  t237 = Sin(var1[15]);
  t192 = Cos(var1[15]);
  t306 = Sin(var1[16]);
  t351 = Cos(var1[13]);
  t205 = -1.*t192*t200;
  t314 = t237*t306;
  t332 = 0. + t205 + t314;
  t108 = Sin(var1[13]);
  t354 = Sin(var1[14]);
  t359 = t200*t237;
  t392 = t192*t306;
  t505 = 0. + t359 + t392;
  t515 = t354*t505;
  t520 = 0. + t515;
  t85 = Cos(var1[5]);
  t629 = t351*t332;
  t661 = t108*t520;
  t698 = 0. + t629 + t661;
  t343 = -1.*t108*t332;
  t538 = t351*t520;
  t577 = 0. + t343 + t538;
  t744 = Sin(var1[5]);
  t21 = Sin(var1[3]);
  t1268 = t192*t200;
  t1284 = -1.*t237*t306;
  t1321 = 0. + t1268 + t1284;
  t1332 = t354*t1321;
  t1335 = 0. + t1332;
  t842 = Cos(var1[3]);
  t846 = Cos(var1[4]);
  t890 = Cos(var1[14]);
  t1120 = Sin(var1[4]);
  t1360 = t351*t505;
  t1391 = t108*t1335;
  t1400 = 0. + t1360 + t1391;
  t1266 = -1.*t108*t505;
  t1336 = t351*t1335;
  t1355 = 0. + t1266 + t1336;
  t1566 = -1.*t890;
  t1587 = 0. + t1566;
  t1618 = t1587*t108;
  t1657 = 0. + t1618;
  t1593 = t351*t1587;
  t1595 = 0. + t1593;
  t604 = t85*t577;
  t768 = -1.*t698*t744;
  t774 = 0. + t604 + t768;
  t909 = t890*t505;
  t952 = 0. + t909;
  t990 = t846*t952;
  t1157 = t85*t698;
  t1170 = t577*t744;
  t1231 = 0. + t1157 + t1170;
  t1240 = t1120*t1231;
  t1241 = 0. + t990 + t1240;
  t1356 = t85*t1355;
  t1419 = -1.*t1400*t744;
  t1463 = 0. + t1356 + t1419;
  t1485 = t890*t1321;
  t1487 = 0. + t1485;
  t1489 = t846*t1487;
  t1505 = t85*t1400;
  t1518 = t1355*t744;
  t1523 = 0. + t1505 + t1518;
  t1537 = t1120*t1523;
  t1556 = 0. + t1489 + t1537;
  t1616 = t1595*t85;
  t1667 = -1.*t1657*t744;
  t1717 = 0. + t1616 + t1667;
  t1807 = 0. + t354;
  t1873 = t846*t1807;
  t1876 = t85*t1657;
  t1901 = t1595*t744;
  t1909 = 0. + t1876 + t1901;
  t1919 = t1120*t1909;
  t1948 = 0. + t1873 + t1919;
  t2303 = -1.*t1487*t1120;
  t2307 = t846*t1523;
  t2308 = 0. + t2303 + t2307;
  t2631 = -1.*t200;
  t2640 = 1. + t2631;
  t2575 = -1.*t192;
  t2607 = 1. + t2575;
  t2642 = -0.08055*t2640;
  t2694 = -0.04845*t200;
  t2700 = 0.02300000000000002*t306;
  t2724 = 0. + t2642 + t2694 + t2700;
  t2747 = -0.13004*t2640;
  t2748 = -0.15304*t200;
  t2777 = 0.0321*t306;
  t2778 = 0. + t2747 + t2748 + t2777;
  t2426 = -1.*t351;
  t2427 = 1. + t2426;
  t2483 = -1.*t890;
  t2491 = 1. + t2483;
  t2500 = -0.135*t2491;
  t2536 = -0.1327*t890;
  t2541 = 0.08055*t354;
  t2608 = -0.08055*t2607;
  t2612 = -0.01004*t237;
  t2733 = t192*t2724;
  t2794 = -1.*t237*t2778;
  t2849 = 0. + t2608 + t2612 + t2733 + t2794;
  t2852 = t354*t2849;
  t2857 = 0. + t2500 + t2536 + t2541 + t2852;
  t2882 = -0.01004*t2607;
  t2895 = 0.08055*t237;
  t2896 = t237*t2724;
  t2913 = t192*t2778;
  t2922 = 0. + t2882 + t2895 + t2896 + t2913;
  t2314 = -1.*t1807*t1120;
  t2325 = t846*t1909;
  t2408 = 0. + t2314 + t2325;
  t2964 = 0.07996*t2427;
  t2996 = 0.135*t108;
  t2999 = t108*t2857;
  t3003 = t351*t2922;
  t3016 = 0. + t2964 + t2996 + t2999 + t3003;
  t2433 = -0.135*t2427;
  t2445 = 0.07996*t108;
  t2876 = t351*t2857;
  t2938 = -1.*t108*t2922;
  t2940 = 0. + t2433 + t2445 + t2876 + t2938;
  t3050 = -0.08055*t2491;
  t3068 = -0.0022999999999999965*t354;
  t3074 = t890*t2849;
  t3085 = 0. + t3050 + t3068 + t3074;
  t3108 = t85*t3016;
  t3120 = t2940*t744;
  t3126 = 0. + t3108 + t3120;
  t2942 = t85*t2940;
  t3026 = -1.*t3016*t744;
  t3046 = 0. + t2942 + t3026;
  t3092 = -1.*t3085*t1120;
  t3133 = t846*t3126;
  t3143 = 0. + t3092 + t3133;
  t3159 = t846*t3085;
  t3170 = t1120*t3126;
  t3178 = 0. + t3159 + t3170;
  t2163 = -1.*t952*t1120;
  t2216 = t846*t1231;
  t2246 = 0. + t2163 + t2216;
  t3048 = t1717*t3046;
  t3233 = -1.*t3046*t1463;
  t3329 = -1.*t1717*t3046;
  t3383 = t3046*t774;
  t3469 = -1.*t3046*t774;
  t3522 = t3046*t1463;
  t3552 = t1807*t3085;
  t3601 = -1.*t3085*t1487;
  t3674 = -1.*t1807*t3085;
  t3704 = t3085*t952;
  t3750 = -1.*t3085*t952;
  t3814 = t3085*t1487;
  t4477 = t2922*t505;
  t4457 = -1.*t2922*t332;
  p_output1[0]=0. - 1.*t21*t774 + t1241*t842;
  p_output1[1]=0. - 1.*t1463*t21 + t1556*t842;
  p_output1[2]=0. - 1.*t1717*t21 + t1948*t842;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1241*t21 + t774*t842;
  p_output1[7]=0. + t1556*t21 + t1463*t842;
  p_output1[8]=0. + t1948*t21 + t1717*t842;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2246;
  p_output1[13]=t2308;
  p_output1[14]=t2408;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2308*(t3048 + t2408*t3143 + t1948*t3178) + t2408*(-1.*t2308*t3143 - 1.*t1556*t3178 + t3233);
  p_output1[19]=t2246*(-1.*t2408*t3143 - 1.*t1948*t3178 + t3329) + t2408*(t2246*t3143 + t1241*t3178 + t3383);
  p_output1[20]=t2308*(-1.*t2246*t3143 - 1.*t1241*t3178 + t3469) + t2246*(t2308*t3143 + t1556*t3178 + t3522);
  p_output1[21]=t2246;
  p_output1[22]=t2308;
  p_output1[23]=t2408;
  p_output1[24]=t1463*(t3048 + t1909*t3126 + t3552) + t1717*(-1.*t1523*t3126 + t3233 + t3601);
  p_output1[25]=t1717*(t1231*t3126 + t3383 + t3704) + (-1.*t1909*t3126 + t3329 + t3674)*t774;
  p_output1[26]=t1463*(-1.*t1231*t3126 + t3469 + t3750) + (t1523*t3126 + t3522 + t3814)*t774;
  p_output1[27]=t774;
  p_output1[28]=t1463;
  p_output1[29]=t1717;
  p_output1[30]=t1487*(t1595*t2940 + t1657*t3016 + t3552) + t1807*(-1.*t1355*t2940 - 1.*t1400*t3016 + t3601);
  p_output1[31]=t1807*(t3704 + t2940*t577 + t3016*t698) + (-1.*t1595*t2940 - 1.*t1657*t3016 + t3674)*t952;
  p_output1[32]=t1487*(t3750 - 1.*t2940*t577 - 1.*t3016*t698) + (t1355*t2940 + t1400*t3016 + t3814)*t952;
  p_output1[33]=t952;
  p_output1[34]=t1487;
  p_output1[35]=t1807;
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
  p_output1[78]=0.135*t332 + t1487*(0. + t1587*t2857 + t3552) + t1807*(-1.*t1335*t2857 + t3601 - 1.*t2922*t505) + 0.07996*t520;
  p_output1[79]=0.07996*t1335 + 0.135*t505 + t1807*(t2922*t332 + t3704 + t2857*t520) + (0. - 1.*t1587*t2857 + t3674)*t952;
  p_output1[80]=0. + 0.07996*t1587 + t1487*(t3750 + t4457 - 1.*t2857*t520) + (t1335*t2857 + t3814 + t4477)*t952;
  p_output1[81]=t952;
  p_output1[82]=t1487;
  p_output1[83]=t1807;
  p_output1[84]=0. - 0.0022999999999999965*t505;
  p_output1[85]=0. - 0.135*t1321 - 0.1327*t332;
  p_output1[86]=-0.08055 + t332*(0. + t1321*t2849 + t4477) + t505*(0. + t4457 - 1.*t2849*t505);
  p_output1[87]=t332;
  p_output1[88]=t505;
  p_output1[89]=0.;
  p_output1[90]=0. - 0.08055*t200 - 1.*t200*t2724 - 0.01004*t306 - 1.*t2778*t306;
  p_output1[91]=0. - 0.01004*t200 - 1.*t200*t2778 + 0.08055*t306 + t2724*t306;
  p_output1[92]=0.;
  p_output1[93]=0.;
  p_output1[94]=0.;
  p_output1[95]=1.;
  p_output1[96]=-0.0321;
  p_output1[97]=0.02300000000000002;
  p_output1[98]=0.;
  p_output1[99]=0.;
  p_output1[100]=0.;
  p_output1[101]=1.;
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



void Jb_RightKnee_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
