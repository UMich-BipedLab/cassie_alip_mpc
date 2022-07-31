/*
 * Automatically Generated from Mathematica.
 * Tue 2 Jun 2020 15:03:42 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "LL_Right_src.h"

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
  double t287;
  double t321;
  double t580;
  double t202;
  double t752;
  double t1311;
  double t1128;
  double t1112;
  double t1314;
  double t1452;
  double t1459;
  double t60;
  double t539;
  double t786;
  double t900;
  double t968;
  double t1012;
  double t1241;
  double t1516;
  double t1586;
  double t1592;
  double t1616;
  double t1915;
  double t1931;
  double t1948;
  double t2019;
  double t2134;
  double t2140;
  double t2301;
  double t2797;
  double t2841;
  double t2936;
  double t2957;
  double t3037;
  double t3038;
  double t3133;
  double t3659;
  double t3920;
  double t3943;
  double t4097;
  double t4099;
  double t4260;
  double t4405;
  double t4870;
  double t4876;
  double t5064;
  double t5458;
  double t5536;
  double t5615;
  double t5645;
  double t5684;
  double t5809;
  double t5849;
  double t5866;
  double t5876;
  double t5895;
  double t6006;
  double t6012;
  double t6046;
  double t6187;
  double t6167;
  double t6177;
  double t6197;
  double t6204;
  double t6229;
  double t6235;
  double t6249;
  double t6265;
  double t6268;
  double t6278;
  double t6213;
  double t6252;
  double t6257;
  double t6260;
  double t6262;
  double t6290;
  double t6292;
  double t6303;
  double t6309;
  double t1978;
  double t2073;
  double t2114;
  double t2435;
  double t2725;
  double t2732;
  double t6377;
  double t6390;
  double t6397;
  double t2954;
  double t2959;
  double t2988;
  double t3503;
  double t3504;
  double t3551;
  double t4272;
  double t4585;
  double t4696;
  double t6411;
  double t6414;
  double t6421;
  double t6431;
  double t6437;
  double t6438;
  double t5387;
  double t5438;
  double t5442;
  double t5848;
  double t5856;
  double t5864;
  double t6451;
  double t6454;
  double t6456;
  double t6469;
  double t6470;
  double t6484;
  double t5926;
  double t5969;
  double t5979;
  double t6501;
  double t6506;
  double t6507;
  double t6513;
  double t6522;
  double t6531;
  double t6576;
  double t6577;
  double t6581;
  double t6588;
  double t6590;
  double t6594;
  double t6604;
  double t6606;
  double t6607;
  double t6586;
  double t6596;
  double t6599;
  double t6600;
  double t6602;
  double t6608;
  double t6610;
  double t6611;
  double t6616;
  double t6640;
  double t6645;
  double t6649;
  double t6662;
  double t6665;
  double t6668;
  double t6670;
  double t6674;
  double t6679;
  double t6686;
  double t6692;
  double t6694;
  double t6698;
  double t6699;
  double t6702;
  double t6709;
  double t6715;
  double t6721;
  double t6727;
  double t6730;
  double t6731;
  double t1623;
  double t1625;
  double t1656;
  double t1673;
  double t1682;
  double t2131;
  double t2320;
  double t2781;
  double t3498;
  double t4027;
  double t5357;
  double t5644;
  double t5925;
  double t6050;
  double t6059;
  double t6083;
  double t6085;
  double t6100;
  double t6114;
  double t6131;
  double t6135;
  double t6142;
  double t6150;
  double t6317;
  double t6334;
  double t6355;
  double t6369;
  double t6371;
  double t6372;
  double t6406;
  double t6410;
  double t6422;
  double t6448;
  double t6457;
  double t6499;
  double t6509;
  double t6534;
  double t6543;
  double t6546;
  double t6547;
  double t6550;
  double t6554;
  double t6556;
  double t6565;
  double t6566;
  double t6570;
  double t6617;
  double t6627;
  double t6630;
  double t6631;
  double t6633;
  double t6635;
  double t6657;
  double t6660;
  double t6669;
  double t6682;
  double t6696;
  double t6708;
  double t6724;
  double t6732;
  double t6734;
  double t6735;
  double t6738;
  double t6741;
  double t6746;
  double t6751;
  double t6755;
  double t6762;
  double t6766;
  t287 = Cos(var1[4]);
  t321 = Cos(var1[5]);
  t580 = Sin(var1[13]);
  t202 = Cos(var1[13]);
  t752 = Sin(var1[5]);
  t1311 = Sin(var1[14]);
  t1128 = Sin(var1[4]);
  t1112 = Cos(var1[14]);
  t1314 = t287*t321*t580;
  t1452 = t202*t287*t752;
  t1459 = t1314 + t1452;
  t60 = Sin(var1[15]);
  t539 = t202*t287*t321;
  t786 = -1.*t287*t580*t752;
  t900 = t539 + t786;
  t968 = t60*t900;
  t1012 = Cos(var1[15]);
  t1241 = -1.*t1112*t1128;
  t1516 = t1311*t1459;
  t1586 = t1241 + t1516;
  t1592 = t1012*t1586;
  t1616 = t968 + t1592;
  t1915 = Cos(var1[16]);
  t1931 = -1.*t1915;
  t1948 = 1. + t1931;
  t2019 = Sin(var1[16]);
  t2134 = t1012*t900;
  t2140 = -1.*t60*t1586;
  t2301 = t2134 + t2140;
  t2797 = Cos(var1[17]);
  t2841 = -1.*t2797;
  t2936 = 1. + t2841;
  t2957 = Sin(var1[17]);
  t3037 = -1.*t2019*t1616;
  t3038 = t1915*t2301;
  t3133 = t3037 + t3038;
  t3659 = t1915*t1616;
  t3920 = t2019*t2301;
  t3943 = t3659 + t3920;
  t4097 = Cos(var1[18]);
  t4099 = -1.*t4097;
  t4260 = 1. + t4099;
  t4405 = Sin(var1[18]);
  t4870 = t2957*t3133;
  t4876 = t2797*t3943;
  t5064 = t4870 + t4876;
  t5458 = t2797*t3133;
  t5536 = -1.*t2957*t3943;
  t5615 = t5458 + t5536;
  t5645 = Cos(var1[19]);
  t5684 = -1.*t5645;
  t5809 = 1. + t5684;
  t5849 = Sin(var1[19]);
  t5866 = -1.*t4405*t5064;
  t5876 = t4097*t5615;
  t5895 = t5866 + t5876;
  t6006 = t4097*t5064;
  t6012 = t4405*t5615;
  t6046 = t6006 + t6012;
  t6187 = Sin(var1[3]);
  t6167 = Cos(var1[3]);
  t6177 = t6167*t321*t1128;
  t6197 = t6187*t752;
  t6204 = t6177 + t6197;
  t6229 = -1.*t321*t6187;
  t6235 = t6167*t1128*t752;
  t6249 = t6229 + t6235;
  t6265 = t580*t6204;
  t6268 = t202*t6249;
  t6278 = t6265 + t6268;
  t6213 = t202*t6204;
  t6252 = -1.*t580*t6249;
  t6257 = t6213 + t6252;
  t6260 = t60*t6257;
  t6262 = t1112*t6167*t287;
  t6290 = t1311*t6278;
  t6292 = t6262 + t6290;
  t6303 = t1012*t6292;
  t6309 = t6260 + t6303;
  t1978 = -0.08055*t1948;
  t2073 = -0.13004*t2019;
  t2114 = 0. + t1978 + t2073;
  t2435 = -0.13004*t1948;
  t2725 = 0.08055*t2019;
  t2732 = 0. + t2435 + t2725;
  t6377 = t1012*t6257;
  t6390 = -1.*t60*t6292;
  t6397 = t6377 + t6390;
  t2954 = -0.19074*t2936;
  t2959 = 0.03315*t2957;
  t2988 = 0. + t2954 + t2959;
  t3503 = -0.03315*t2936;
  t3504 = -0.19074*t2957;
  t3551 = 0. + t3503 + t3504;
  t4272 = -0.01315*t4260;
  t4585 = -0.62554*t4405;
  t4696 = 0. + t4272 + t4585;
  t6411 = -1.*t2019*t6309;
  t6414 = t1915*t6397;
  t6421 = t6411 + t6414;
  t6431 = t1915*t6309;
  t6437 = t2019*t6397;
  t6438 = t6431 + t6437;
  t5387 = -0.62554*t4260;
  t5438 = 0.01315*t4405;
  t5442 = 0. + t5387 + t5438;
  t5848 = -1.03354*t5809;
  t5856 = 0.05315*t5849;
  t5864 = 0. + t5848 + t5856;
  t6451 = t2957*t6421;
  t6454 = t2797*t6438;
  t6456 = t6451 + t6454;
  t6469 = t2797*t6421;
  t6470 = -1.*t2957*t6438;
  t6484 = t6469 + t6470;
  t5926 = -0.05315*t5809;
  t5969 = -1.03354*t5849;
  t5979 = 0. + t5926 + t5969;
  t6501 = -1.*t4405*t6456;
  t6506 = t4097*t6484;
  t6507 = t6501 + t6506;
  t6513 = t4097*t6456;
  t6522 = t4405*t6484;
  t6531 = t6513 + t6522;
  t6576 = t321*t6187*t1128;
  t6577 = -1.*t6167*t752;
  t6581 = t6576 + t6577;
  t6588 = t6167*t321;
  t6590 = t6187*t1128*t752;
  t6594 = t6588 + t6590;
  t6604 = t580*t6581;
  t6606 = t202*t6594;
  t6607 = t6604 + t6606;
  t6586 = t202*t6581;
  t6596 = -1.*t580*t6594;
  t6599 = t6586 + t6596;
  t6600 = t60*t6599;
  t6602 = t1112*t287*t6187;
  t6608 = t1311*t6607;
  t6610 = t6602 + t6608;
  t6611 = t1012*t6610;
  t6616 = t6600 + t6611;
  t6640 = t1012*t6599;
  t6645 = -1.*t60*t6610;
  t6649 = t6640 + t6645;
  t6662 = -1.*t2019*t6616;
  t6665 = t1915*t6649;
  t6668 = t6662 + t6665;
  t6670 = t1915*t6616;
  t6674 = t2019*t6649;
  t6679 = t6670 + t6674;
  t6686 = t2957*t6668;
  t6692 = t2797*t6679;
  t6694 = t6686 + t6692;
  t6698 = t2797*t6668;
  t6699 = -1.*t2957*t6679;
  t6702 = t6698 + t6699;
  t6709 = -1.*t4405*t6694;
  t6715 = t4097*t6702;
  t6721 = t6709 + t6715;
  t6727 = t4097*t6694;
  t6730 = t4405*t6702;
  t6731 = t6727 + t6730;
  t1623 = t1311*t1128;
  t1625 = t1112*t1459;
  t1656 = t1623 + t1625;
  t1673 = 0.004500000000000004*t1656;
  t1682 = 0.08055*t1616;
  t2131 = t2114*t1616;
  t2320 = 0.01004*t2301;
  t2781 = t2732*t2301;
  t3498 = t2988*t3133;
  t4027 = t3551*t3943;
  t5357 = t4696*t5064;
  t5644 = t5442*t5615;
  t5925 = t5864*t5895;
  t6050 = t5979*t6046;
  t6059 = t5849*t5895;
  t6083 = t5645*t6046;
  t6085 = t6059 + t6083;
  t6100 = -0.05315*t6085;
  t6114 = t5645*t5895;
  t6131 = -1.*t5849*t6046;
  t6135 = t6114 + t6131;
  t6142 = -1.03354*t6135;
  t6150 = 0. + t1673 + t1682 + t2131 + t2320 + t2781 + t3498 + t4027 + t5357 + t5644 + t5925 + t6050 + t6100 + t6142;
  t6317 = -1.*t6167*t287*t1311;
  t6334 = t1112*t6278;
  t6355 = t6317 + t6334;
  t6369 = 0.004500000000000004*t6355;
  t6371 = 0.08055*t6309;
  t6372 = t2114*t6309;
  t6406 = 0.01004*t6397;
  t6410 = t2732*t6397;
  t6422 = t2988*t6421;
  t6448 = t3551*t6438;
  t6457 = t4696*t6456;
  t6499 = t5442*t6484;
  t6509 = t5864*t6507;
  t6534 = t5979*t6531;
  t6543 = t5849*t6507;
  t6546 = t5645*t6531;
  t6547 = t6543 + t6546;
  t6550 = -0.05315*t6547;
  t6554 = t5645*t6507;
  t6556 = -1.*t5849*t6531;
  t6565 = t6554 + t6556;
  t6566 = -1.03354*t6565;
  t6570 = 0. + t6369 + t6371 + t6372 + t6406 + t6410 + t6422 + t6448 + t6457 + t6499 + t6509 + t6534 + t6550 + t6566;
  t6617 = -1.*t287*t1311*t6187;
  t6627 = t1112*t6607;
  t6630 = t6617 + t6627;
  t6631 = 0.004500000000000004*t6630;
  t6633 = 0.08055*t6616;
  t6635 = t2114*t6616;
  t6657 = 0.01004*t6649;
  t6660 = t2732*t6649;
  t6669 = t2988*t6668;
  t6682 = t3551*t6679;
  t6696 = t4696*t6694;
  t6708 = t5442*t6702;
  t6724 = t5864*t6721;
  t6732 = t5979*t6731;
  t6734 = t5849*t6721;
  t6735 = t5645*t6731;
  t6738 = t6734 + t6735;
  t6741 = -0.05315*t6738;
  t6746 = t5645*t6721;
  t6751 = -1.*t5849*t6731;
  t6755 = t6746 + t6751;
  t6762 = -1.03354*t6755;
  t6766 = 0. + t6631 + t6633 + t6635 + t6657 + t6660 + t6669 + t6682 + t6696 + t6708 + t6724 + t6732 + t6741 + t6762;
  p_output1[0]=Sqrt(Power(t1616*t6150 + t6309*t6570 + t6616*t6766,2) + Power((-1.*t1012*t6257 + t60*t6292)*t6570 + (-1.*t1012*t6599 + t60*t6610)*t6766 + t6150*(t1586*t60 - 1.*t1012*t900),2));
}



void LL_Right_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
