/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_RightToe_src.h"

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
  double t139;
  double t758;
  double t941;
  double t812;
  double t950;
  double t399;
  double t1883;
  double t1197;
  double t693;
  double t2063;
  double t2571;
  double t749;
  double t366;
  double t3039;
  double t3114;
  double t2748;
  double t2852;
  double t4899;
  double t4612;
  double t4674;
  double t5246;
  double t6007;
  double t4740;
  double t5273;
  double t5396;
  double t4585;
  double t6008;
  double t6010;
  double t6431;
  double t6968;
  double t5858;
  double t6450;
  double t6762;
  double t4486;
  double t7271;
  double t7334;
  double t7666;
  double t7896;
  double t6766;
  double t7848;
  double t7851;
  double t4394;
  double t7897;
  double t7898;
  double t7914;
  double t8122;
  double t8366;
  double t8384;
  double t8466;
  double t8691;
  double t7890;
  double t7940;
  double t7942;
  double t8788;
  double t8814;
  double t8929;
  double t9013;
  double t9078;
  double t8777;
  double t8862;
  double t8870;
  double t9221;
  double t9222;
  double t9223;
  double t9220;
  double t9229;
  double t9239;
  double t9243;
  double t9245;
  double t9241;
  double t9246;
  double t9253;
  double t9259;
  double t9260;
  double t9262;
  double t9282;
  double t9283;
  double t9285;
  double t9286;
  double t9295;
  double t9256;
  double t9265;
  double t9276;
  double t9308;
  double t9309;
  double t9320;
  double t9325;
  double t9336;
  double t9307;
  double t9311;
  double t9316;
  double t7974;
  double t8694;
  double t8744;
  double t8916;
  double t9125;
  double t9155;
  double t9161;
  double t9162;
  double t9163;
  double t9167;
  double t9178;
  double t9179;
  double t9189;
  double t9192;
  double t9204;
  double t918;
  double t1027;
  double t1110;
  double t1200;
  double t1360;
  double t1513;
  double t1161;
  double t1528;
  double t1537;
  double t9392;
  double t9395;
  double t9396;
  double t9399;
  double t9410;
  double t9416;
  double t9398;
  double t9422;
  double t9425;
  double t9431;
  double t9439;
  double t9443;
  double t9430;
  double t9453;
  double t9456;
  double t9462;
  double t9463;
  double t9476;
  double t9459;
  double t9490;
  double t9493;
  double t9495;
  double t9496;
  double t9499;
  double t2021;
  double t2032;
  double t2933;
  double t3188;
  double t3351;
  double t3618;
  double t3808;
  double t3878;
  double t3881;
  double t3911;
  double t3945;
  double t4199;
  double t4216;
  double t4313;
  double t9280;
  double t9299;
  double t9304;
  double t9318;
  double t9339;
  double t9340;
  double t9343;
  double t9346;
  double t9347;
  double t9351;
  double t9355;
  double t9357;
  double t9358;
  double t9359;
  double t9360;
  double t9494;
  double t9503;
  double t9509;
  double t9514;
  double t9517;
  double t9522;
  double t4326;
  double t9205;
  double t9214;
  double t9362;
  double t9378;
  double t9388;
  double t9585;
  double t9591;
  double t9595;
  double t9606;
  double t9609;
  double t9617;
  double t9598;
  double t9624;
  double t9628;
  double t9646;
  double t9650;
  double t9653;
  double t9655;
  double t9656;
  double t9657;
  double t9654;
  double t9658;
  double t9659;
  double t9662;
  double t9663;
  double t9664;
  double t9661;
  double t9678;
  double t9679;
  double t9686;
  double t9697;
  double t9700;
  double t9682;
  double t9703;
  double t9704;
  double t9707;
  double t9711;
  double t9714;
  double t9541;
  double t9544;
  double t9545;
  double t9551;
  double t9706;
  double t9719;
  double t9723;
  double t9729;
  double t9731;
  double t9734;
  double t9756;
  double t9758;
  double t9759;
  double t9766;
  double t9768;
  double t9769;
  double t9771;
  double t9772;
  double t9773;
  double t9770;
  double t9774;
  double t9775;
  double t9778;
  double t9779;
  double t9780;
  double t9777;
  double t9781;
  double t9784;
  double t9788;
  double t9791;
  double t9793;
  double t9786;
  double t9794;
  double t9795;
  double t9797;
  double t9798;
  double t9801;
  double t9796;
  double t9803;
  double t9804;
  double t9808;
  double t9810;
  double t9811;
  t139 = Cos(var1[3]);
  t758 = Cos(var1[5]);
  t941 = Sin(var1[3]);
  t812 = Sin(var1[4]);
  t950 = Sin(var1[5]);
  t399 = Sin(var1[14]);
  t1883 = 0. + t399;
  t1197 = Cos(var1[13]);
  t693 = Cos(var1[14]);
  t2063 = -1.*t693;
  t2571 = 0. + t2063;
  t749 = Sin(var1[13]);
  t366 = Cos(var1[4]);
  t3039 = t2571*t749;
  t3114 = 0. + t3039;
  t2748 = t1197*t2571;
  t2852 = 0. + t2748;
  t4899 = Cos(var1[18]);
  t4612 = Cos(var1[19]);
  t4674 = Sin(var1[18]);
  t5246 = Sin(var1[19]);
  t6007 = Cos(var1[17]);
  t4740 = t4612*t4674;
  t5273 = t4899*t5246;
  t5396 = 0. + t4740 + t5273;
  t4585 = Sin(var1[17]);
  t6008 = -1.*t4899*t4612;
  t6010 = t4674*t5246;
  t6431 = 0. + t6008 + t6010;
  t6968 = Cos(var1[16]);
  t5858 = t4585*t5396;
  t6450 = t6007*t6431;
  t6762 = 0. + t5858 + t6450;
  t4486 = Sin(var1[16]);
  t7271 = t6007*t5396;
  t7334 = -1.*t4585*t6431;
  t7666 = 0. + t7271 + t7334;
  t7896 = Cos(var1[15]);
  t6766 = -1.*t4486*t6762;
  t7848 = t6968*t7666;
  t7851 = 0. + t6766 + t7848;
  t4394 = Sin(var1[15]);
  t7897 = t6968*t6762;
  t7898 = t4486*t7666;
  t7914 = 0. + t7897 + t7898;
  t8122 = t7896*t7851;
  t8366 = -1.*t4394*t7914;
  t8384 = 0. + t8122 + t8366;
  t8466 = t693*t8384;
  t8691 = 0. + t8466;
  t7890 = t4394*t7851;
  t7940 = t7896*t7914;
  t7942 = 0. + t7890 + t7940;
  t8788 = t399*t8384;
  t8814 = 0. + t8788;
  t8929 = t1197*t7942;
  t9013 = t749*t8814;
  t9078 = 0. + t8929 + t9013;
  t8777 = -1.*t749*t7942;
  t8862 = t1197*t8814;
  t8870 = 0. + t8777 + t8862;
  t9221 = t4899*t4612;
  t9222 = -1.*t4674*t5246;
  t9223 = 0. + t9221 + t9222;
  t9220 = -1.*t4585*t5396;
  t9229 = t6007*t9223;
  t9239 = 0. + t9220 + t9229;
  t9243 = t4585*t9223;
  t9245 = 0. + t7271 + t9243;
  t9241 = t4486*t9239;
  t9246 = t6968*t9245;
  t9253 = 0. + t9241 + t9246;
  t9259 = t6968*t9239;
  t9260 = -1.*t4486*t9245;
  t9262 = 0. + t9259 + t9260;
  t9282 = -1.*t4394*t9253;
  t9283 = t7896*t9262;
  t9285 = 0. + t9282 + t9283;
  t9286 = t693*t9285;
  t9295 = 0. + t9286;
  t9256 = t7896*t9253;
  t9265 = t4394*t9262;
  t9276 = 0. + t9256 + t9265;
  t9308 = t399*t9285;
  t9309 = 0. + t9308;
  t9320 = t1197*t9276;
  t9325 = t749*t9309;
  t9336 = 0. + t9320 + t9325;
  t9307 = -1.*t749*t9276;
  t9311 = t1197*t9309;
  t9316 = 0. + t9307 + t9311;
  t7974 = var2[14]*t7942;
  t8694 = var2[13]*t8691;
  t8744 = var2[5]*t8691;
  t8916 = t758*t8870;
  t9125 = -1.*t9078*t950;
  t9155 = 0. + t8916 + t9125;
  t9161 = var2[4]*t9155;
  t9162 = -1.*t8691*t812;
  t9163 = t758*t9078;
  t9167 = t8870*t950;
  t9178 = 0. + t9163 + t9167;
  t9179 = t366*t9178;
  t9189 = 0. + t9162 + t9179;
  t9192 = var2[3]*t9189;
  t9204 = 0. + t7974 + t8694 + t8744 + t9161 + t9192;
  t918 = t139*t758*t812;
  t1027 = t941*t950;
  t1110 = t918 + t1027;
  t1200 = -1.*t758*t941;
  t1360 = t139*t812*t950;
  t1513 = t1200 + t1360;
  t1161 = t749*t1110;
  t1528 = t1197*t1513;
  t1537 = t1161 + t1528;
  t9392 = t1197*t1110;
  t9395 = -1.*t749*t1513;
  t9396 = t9392 + t9395;
  t9399 = t693*t139*t366;
  t9410 = t399*t1537;
  t9416 = t9399 + t9410;
  t9398 = t4394*t9396;
  t9422 = t7896*t9416;
  t9425 = t9398 + t9422;
  t9431 = t7896*t9396;
  t9439 = -1.*t4394*t9416;
  t9443 = t9431 + t9439;
  t9430 = -1.*t4486*t9425;
  t9453 = t6968*t9443;
  t9456 = t9430 + t9453;
  t9462 = t6968*t9425;
  t9463 = t4486*t9443;
  t9476 = t9462 + t9463;
  t9459 = t4585*t9456;
  t9490 = t6007*t9476;
  t9493 = t9459 + t9490;
  t9495 = t6007*t9456;
  t9496 = -1.*t4585*t9476;
  t9499 = t9495 + t9496;
  t2021 = var2[13]*t1883;
  t2032 = var2[5]*t1883;
  t2933 = t2852*t758;
  t3188 = -1.*t3114*t950;
  t3351 = 0. + t2933 + t3188;
  t3618 = var2[4]*t3351;
  t3808 = -1.*t1883*t812;
  t3878 = t758*t3114;
  t3881 = t2852*t950;
  t3911 = 0. + t3878 + t3881;
  t3945 = t366*t3911;
  t4199 = 0. + t3808 + t3945;
  t4216 = var2[3]*t4199;
  t4313 = 0. + var2[15] + var2[16] + var2[17] + var2[18] + var2[19] + t2021 + t2032 + t3618 + t4216;
  t9280 = var2[14]*t9276;
  t9299 = var2[13]*t9295;
  t9304 = var2[5]*t9295;
  t9318 = t758*t9316;
  t9339 = -1.*t9336*t950;
  t9340 = 0. + t9318 + t9339;
  t9343 = var2[4]*t9340;
  t9346 = -1.*t9295*t812;
  t9347 = t758*t9336;
  t9351 = t9316*t950;
  t9355 = 0. + t9347 + t9351;
  t9357 = t366*t9355;
  t9358 = 0. + t9346 + t9357;
  t9359 = var2[3]*t9358;
  t9360 = 0. + t9280 + t9299 + t9304 + t9343 + t9359;
  t9494 = -1.*t4674*t9493;
  t9503 = t4899*t9499;
  t9509 = t9494 + t9503;
  t9514 = t4899*t9493;
  t9517 = t4674*t9499;
  t9522 = t9514 + t9517;
  t4326 = 0.000449*t4313;
  t9205 = 1.e-6*t9204;
  t9214 = 0. + t4326 + t9205;
  t9362 = 0.000171*t9360;
  t9378 = -0.000099*t9204;
  t9388 = 0. + t9362 + t9378;
  t9585 = t758*t941*t812;
  t9591 = -1.*t139*t950;
  t9595 = t9585 + t9591;
  t9606 = t139*t758;
  t9609 = t941*t812*t950;
  t9617 = t9606 + t9609;
  t9598 = t749*t9595;
  t9624 = t1197*t9617;
  t9628 = t9598 + t9624;
  t9646 = t1197*t9595;
  t9650 = -1.*t749*t9617;
  t9653 = t9646 + t9650;
  t9655 = t693*t366*t941;
  t9656 = t399*t9628;
  t9657 = t9655 + t9656;
  t9654 = t4394*t9653;
  t9658 = t7896*t9657;
  t9659 = t9654 + t9658;
  t9662 = t7896*t9653;
  t9663 = -1.*t4394*t9657;
  t9664 = t9662 + t9663;
  t9661 = -1.*t4486*t9659;
  t9678 = t6968*t9664;
  t9679 = t9661 + t9678;
  t9686 = t6968*t9659;
  t9697 = t4486*t9664;
  t9700 = t9686 + t9697;
  t9682 = t4585*t9679;
  t9703 = t6007*t9700;
  t9704 = t9682 + t9703;
  t9707 = t6007*t9679;
  t9711 = -1.*t4585*t9700;
  t9714 = t9707 + t9711;
  t9541 = 1.e-6*t4313;
  t9544 = -0.000099*t9360;
  t9545 = 0.000287*t9204;
  t9551 = t9541 + t9544 + t9545;
  t9706 = -1.*t4674*t9704;
  t9719 = t4899*t9714;
  t9723 = t9706 + t9719;
  t9729 = t4899*t9704;
  t9731 = t4674*t9714;
  t9734 = t9729 + t9731;
  t9756 = t366*t758*t749;
  t9758 = t1197*t366*t950;
  t9759 = t9756 + t9758;
  t9766 = t1197*t366*t758;
  t9768 = -1.*t366*t749*t950;
  t9769 = t9766 + t9768;
  t9771 = -1.*t693*t812;
  t9772 = t399*t9759;
  t9773 = t9771 + t9772;
  t9770 = t4394*t9769;
  t9774 = t7896*t9773;
  t9775 = t9770 + t9774;
  t9778 = t7896*t9769;
  t9779 = -1.*t4394*t9773;
  t9780 = t9778 + t9779;
  t9777 = -1.*t4486*t9775;
  t9781 = t6968*t9780;
  t9784 = t9777 + t9781;
  t9788 = t6968*t9775;
  t9791 = t4486*t9780;
  t9793 = t9788 + t9791;
  t9786 = t4585*t9784;
  t9794 = t6007*t9793;
  t9795 = t9786 + t9794;
  t9797 = t6007*t9784;
  t9798 = -1.*t4585*t9793;
  t9801 = t9797 + t9798;
  t9796 = -1.*t4674*t9795;
  t9803 = t4899*t9801;
  t9804 = t9796 + t9803;
  t9808 = t4899*t9795;
  t9810 = t4674*t9801;
  t9811 = t9808 + t9810;
  p_output1[0]=(t139*t366*t399 - 1.*t1537*t693)*t9214 + t9388*(t5246*t9509 + t4612*t9522) + (-1.*t4612*t9509 + t5246*t9522)*t9551;
  p_output1[1]=t9214*(t366*t399*t941 - 1.*t693*t9628) + t9388*(t5246*t9723 + t4612*t9734) + t9551*(-1.*t4612*t9723 + t5246*t9734);
  p_output1[2]=t9214*(-1.*t399*t812 - 1.*t693*t9759) + t9388*(t5246*t9804 + t4612*t9811) + t9551*(-1.*t4612*t9804 + t5246*t9811);
}



void AMWorld_RightToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
