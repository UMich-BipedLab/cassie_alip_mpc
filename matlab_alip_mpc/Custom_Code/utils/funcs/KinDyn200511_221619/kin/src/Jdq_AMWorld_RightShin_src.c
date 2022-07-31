/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:54 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_RightShin_src.h"

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
  double t536;
  double t546;
  double t550;
  double t515;
  double t226;
  double t573;
  double t917;
  double t518;
  double t439;
  double t745;
  double t690;
  double t966;
  double t1607;
  double t1508;
  double t1520;
  double t1642;
  double t1732;
  double t1582;
  double t1652;
  double t1659;
  double t1471;
  double t1745;
  double t1782;
  double t1897;
  double t1684;
  double t1945;
  double t1948;
  double t2045;
  double t2053;
  double t2059;
  double t2117;
  double t2130;
  double t2521;
  double t2560;
  double t2572;
  double t2591;
  double t2612;
  double t2677;
  double t2728;
  double t2737;
  double t2795;
  double t2825;
  double t931;
  double t1001;
  double t1011;
  double t1172;
  double t1236;
  double t1282;
  double t1121;
  double t1333;
  double t1337;
  double t3156;
  double t3173;
  double t3179;
  double t3222;
  double t3245;
  double t3263;
  double t3204;
  double t3267;
  double t3310;
  double t3353;
  double t3355;
  double t3392;
  double t1986;
  double t1999;
  double t2029;
  double t2100;
  double t2190;
  double t2199;
  double t2201;
  double t2235;
  double t2244;
  double t2261;
  double t2342;
  double t2350;
  double t2396;
  double t2408;
  double t2634;
  double t2647;
  double t2664;
  double t2791;
  double t2826;
  double t2916;
  double t2917;
  double t2924;
  double t3043;
  double t3049;
  double t3067;
  double t3076;
  double t3082;
  double t3123;
  double t3338;
  double t3408;
  double t3468;
  double t3499;
  double t3517;
  double t3547;
  double t435;
  double t484;
  double t578;
  double t683;
  double t686;
  double t723;
  double t729;
  double t784;
  double t800;
  double t865;
  double t889;
  double t2414;
  double t3154;
  double t3155;
  double t3768;
  double t3774;
  double t3818;
  double t3848;
  double t3888;
  double t3923;
  double t3821;
  double t3952;
  double t4049;
  double t4207;
  double t4222;
  double t4252;
  double t4293;
  double t4376;
  double t4391;
  double t4278;
  double t4464;
  double t4468;
  double t4562;
  double t4577;
  double t4601;
  double t3604;
  double t3641;
  double t3643;
  double t4531;
  double t4643;
  double t4664;
  double t4681;
  double t4684;
  double t4732;
  double t4887;
  double t4901;
  double t4910;
  double t5034;
  double t5115;
  double t5169;
  double t5203;
  double t5214;
  double t5242;
  double t5189;
  double t5254;
  double t5299;
  double t5326;
  double t5339;
  double t5357;
  double t5324;
  double t5407;
  double t5415;
  double t5463;
  double t5495;
  double t5544;
  double t918;
  double t1397;
  double t1434;
  double t3494;
  double t3549;
  double t3550;
  double t6099;
  double t6100;
  double t6187;
  double t6244;
  double t6261;
  double t6265;
  double t3644;
  double t3656;
  double t3665;
  double t5958;
  double t5998;
  double t6088;
  double t3752;
  double t4126;
  double t4166;
  double t6225;
  double t6269;
  double t6325;
  double t4668;
  double t4736;
  double t4754;
  double t6354;
  double t6356;
  double t6414;
  double t4777;
  double t4784;
  double t4795;
  double t4854;
  double t4921;
  double t4949;
  double t5438;
  double t5646;
  double t5652;
  double t5675;
  double t5762;
  double t5828;
  double t6705;
  double t6717;
  double t6745;
  double t6772;
  double t6795;
  double t6808;
  double t6660;
  double t6771;
  double t6832;
  double t6834;
  double t6849;
  double t6901;
  double t6925;
  double t6953;
  double t6955;
  double t6957;
  double t7021;
  double t7035;
  double t7054;
  double t7056;
  double t7066;
  double t7078;
  double t7085;
  double t7113;
  double t7300;
  double t7339;
  double t7341;
  t536 = Cos(var1[14]);
  t546 = -1.*t536;
  t550 = 0. + t546;
  t515 = Cos(var1[4]);
  t226 = Sin(var1[14]);
  t573 = Sin(var1[13]);
  t917 = Cos(var1[3]);
  t518 = Cos(var1[5]);
  t439 = Sin(var1[4]);
  t745 = Sin(var1[5]);
  t690 = Cos(var1[13]);
  t966 = Sin(var1[3]);
  t1607 = Cos(var1[16]);
  t1508 = Cos(var1[17]);
  t1520 = Sin(var1[16]);
  t1642 = Sin(var1[17]);
  t1732 = Cos(var1[15]);
  t1582 = t1508*t1520;
  t1652 = t1607*t1642;
  t1659 = 0. + t1582 + t1652;
  t1471 = Sin(var1[15]);
  t1745 = t1607*t1508;
  t1782 = -1.*t1520*t1642;
  t1897 = 0. + t1745 + t1782;
  t1684 = -1.*t1471*t1659;
  t1945 = t1732*t1897;
  t1948 = 0. + t1684 + t1945;
  t2045 = t1732*t1659;
  t2053 = t1471*t1897;
  t2059 = 0. + t2045 + t2053;
  t2117 = t226*t1948;
  t2130 = 0. + t2117;
  t2521 = -1.*t1607*t1508;
  t2560 = t1520*t1642;
  t2572 = 0. + t2521 + t2560;
  t2591 = -1.*t1471*t2572;
  t2612 = 0. + t2045 + t2591;
  t2677 = t1471*t1659;
  t2728 = t1732*t2572;
  t2737 = 0. + t2677 + t2728;
  t2795 = t226*t2612;
  t2825 = 0. + t2795;
  t931 = t917*t518*t439;
  t1001 = t966*t745;
  t1011 = t931 + t1001;
  t1172 = -1.*t518*t966;
  t1236 = t917*t439*t745;
  t1282 = t1172 + t1236;
  t1121 = t573*t1011;
  t1333 = t690*t1282;
  t1337 = t1121 + t1333;
  t3156 = t690*t1011;
  t3173 = -1.*t573*t1282;
  t3179 = t3156 + t3173;
  t3222 = t536*t917*t515;
  t3245 = t226*t1337;
  t3263 = t3222 + t3245;
  t3204 = t1471*t3179;
  t3267 = t1732*t3263;
  t3310 = t3204 + t3267;
  t3353 = t1732*t3179;
  t3355 = -1.*t1471*t3263;
  t3392 = t3353 + t3355;
  t1986 = t536*t1948;
  t1999 = 0. + t1986;
  t2029 = -1.*t1999*t439;
  t2100 = t690*t2059;
  t2190 = t573*t2130;
  t2199 = 0. + t2100 + t2190;
  t2201 = t518*t2199;
  t2235 = -1.*t573*t2059;
  t2244 = t690*t2130;
  t2261 = 0. + t2235 + t2244;
  t2342 = t2261*t745;
  t2350 = 0. + t2201 + t2342;
  t2396 = t515*t2350;
  t2408 = 0. + t2029 + t2396;
  t2634 = t536*t2612;
  t2647 = 0. + t2634;
  t2664 = -1.*t2647*t439;
  t2791 = t690*t2737;
  t2826 = t573*t2825;
  t2916 = 0. + t2791 + t2826;
  t2917 = t518*t2916;
  t2924 = -1.*t573*t2737;
  t3043 = t690*t2825;
  t3049 = 0. + t2924 + t3043;
  t3067 = t3049*t745;
  t3076 = 0. + t2917 + t3067;
  t3082 = t515*t3076;
  t3123 = 0. + t2664 + t3082;
  t3338 = -1.*t1520*t3310;
  t3408 = t1607*t3392;
  t3468 = t3338 + t3408;
  t3499 = t1607*t3310;
  t3517 = t1520*t3392;
  t3547 = t3499 + t3517;
  t435 = 0. + t226;
  t484 = -1.*t435*t439;
  t578 = t550*t573;
  t683 = 0. + t578;
  t686 = t518*t683;
  t723 = t690*t550;
  t729 = 0. + t723;
  t784 = t729*t745;
  t800 = 0. + t686 + t784;
  t865 = t515*t800;
  t889 = 0. + t484 + t865;
  t2414 = 0.0341*t2408;
  t3154 = 0.000334*t3123;
  t3155 = t2414 + t3154;
  t3768 = t518*t966*t439;
  t3774 = -1.*t917*t745;
  t3818 = t3768 + t3774;
  t3848 = t917*t518;
  t3888 = t966*t439*t745;
  t3923 = t3848 + t3888;
  t3821 = t573*t3818;
  t3952 = t690*t3923;
  t4049 = t3821 + t3952;
  t4207 = t690*t3818;
  t4222 = -1.*t573*t3923;
  t4252 = t4207 + t4222;
  t4293 = t536*t515*t966;
  t4376 = t226*t4049;
  t4391 = t4293 + t4376;
  t4278 = t1471*t4252;
  t4464 = t1732*t4391;
  t4468 = t4278 + t4464;
  t4562 = t1732*t4252;
  t4577 = -1.*t1471*t4391;
  t4601 = t4562 + t4577;
  t3604 = 0.000334*t2408;
  t3641 = 0.00036*t3123;
  t3643 = t3604 + t3641;
  t4531 = -1.*t1520*t4468;
  t4643 = t1607*t4601;
  t4664 = t4531 + t4643;
  t4681 = t1607*t4468;
  t4684 = t1520*t4601;
  t4732 = t4681 + t4684;
  t4887 = t515*t518*t573;
  t4901 = t690*t515*t745;
  t4910 = t4887 + t4901;
  t5034 = t690*t515*t518;
  t5115 = -1.*t515*t573*t745;
  t5169 = t5034 + t5115;
  t5203 = -1.*t536*t439;
  t5214 = t226*t4910;
  t5242 = t5203 + t5214;
  t5189 = t1471*t5169;
  t5254 = t1732*t5242;
  t5299 = t5189 + t5254;
  t5326 = t1732*t5169;
  t5339 = -1.*t1471*t5242;
  t5357 = t5326 + t5339;
  t5324 = -1.*t1520*t5299;
  t5407 = t1607*t5357;
  t5415 = t5324 + t5407;
  t5463 = t1607*t5299;
  t5495 = t1520*t5357;
  t5544 = t5463 + t5495;
  t918 = t917*t515*t226;
  t1397 = -1.*t536*t1337;
  t1434 = t918 + t1397;
  t3494 = t1642*t3468;
  t3549 = t1508*t3547;
  t3550 = t3494 + t3549;
  t6099 = t518*t2261;
  t6100 = -1.*t2199*t745;
  t6187 = 0. + t6099 + t6100;
  t6244 = t518*t3049;
  t6261 = -1.*t2916*t745;
  t6265 = 0. + t6244 + t6261;
  t3644 = -1.*t1508*t3468;
  t3656 = t1642*t3547;
  t3665 = t3644 + t3656;
  t5958 = t729*t518;
  t5998 = -1.*t683*t745;
  t6088 = 0. + t5958 + t5998;
  t3752 = t515*t226*t966;
  t4126 = -1.*t536*t4049;
  t4166 = t3752 + t4126;
  t6225 = 0.0341*t6187;
  t6269 = 0.000334*t6265;
  t6325 = t6225 + t6269;
  t4668 = t1642*t4664;
  t4736 = t1508*t4732;
  t4754 = t4668 + t4736;
  t6354 = 0.000334*t6187;
  t6356 = 0.00036*t6265;
  t6414 = t6354 + t6356;
  t4777 = -1.*t1508*t4664;
  t4784 = t1642*t4732;
  t4795 = t4777 + t4784;
  t4854 = -1.*t226*t439;
  t4921 = -1.*t536*t4910;
  t4949 = t4854 + t4921;
  t5438 = t1642*t5415;
  t5646 = t1508*t5544;
  t5652 = t5438 + t5646;
  t5675 = -1.*t1508*t5415;
  t5762 = t1642*t5544;
  t5828 = t5675 + t5762;
  t6705 = 0.0341*t1999;
  t6717 = 0.000334*t2647;
  t6745 = t6705 + t6717;
  t6772 = 0.000334*t1999;
  t6795 = 0.00036*t2647;
  t6808 = t6772 + t6795;
  t6660 = 0.0341*t435*t1434;
  t6771 = t6745*t3550;
  t6832 = t6808*t3665;
  t6834 = t6660 + t6771 + t6832;
  t6849 = 0.0341*t435*t4166;
  t6901 = t6745*t4754;
  t6925 = t6808*t4795;
  t6953 = t6849 + t6901 + t6925;
  t6955 = 0.0341*t435*t4949;
  t6957 = t6745*t5652;
  t7021 = t6808*t5828;
  t7035 = t6955 + t6957 + t7021;
  t7054 = 0.0341*t2059;
  t7056 = 0.000334*t2737;
  t7066 = t7054 + t7056;
  t7078 = 0.000334*t2059;
  t7085 = 0.00036*t2737;
  t7113 = t7078 + t7085;
  t7300 = 0.0341*t1434;
  t7339 = 0.0341*t4166;
  t7341 = 0.0341*t4949;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t3155*t3550 + t3643*t3665 + 0.0341*t1434*t889;
  p_output1[10]=t3155*t4754 + t3643*t4795 + 0.0341*t4166*t889;
  p_output1[11]=t3155*t5652 + t3643*t5828 + 0.0341*t4949*t889;
  p_output1[12]=0.0341*t1434*t6088 + t3550*t6325 + t3665*t6414;
  p_output1[13]=0.0341*t4166*t6088 + t4754*t6325 + t4795*t6414;
  p_output1[14]=0.0341*t4949*t6088 + t5652*t6325 + t5828*t6414;
  p_output1[15]=t6834;
  p_output1[16]=t6953;
  p_output1[17]=t7035;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
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
  p_output1[39]=t6834;
  p_output1[40]=t6953;
  p_output1[41]=t7035;
  p_output1[42]=t3550*t7066 + t3665*t7113;
  p_output1[43]=t4754*t7066 + t4795*t7113;
  p_output1[44]=t5652*t7066 + t5828*t7113;
  p_output1[45]=t7300;
  p_output1[46]=t7339;
  p_output1[47]=t7341;
  p_output1[48]=t7300;
  p_output1[49]=t7339;
  p_output1[50]=t7341;
  p_output1[51]=t7300;
  p_output1[52]=t7339;
  p_output1[53]=t7341;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jdq_AMWorld_RightShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
