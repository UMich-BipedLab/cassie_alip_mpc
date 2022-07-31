/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:14 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t188;
  double t199;
  double t221;
  double t788;
  double t759;
  double t760;
  double t807;
  double t838;
  double t773;
  double t819;
  double t826;
  double t735;
  double t850;
  double t927;
  double t976;
  double t998;
  double t837;
  double t982;
  double t986;
  double t713;
  double t1028;
  double t1066;
  double t1078;
  double t81;
  double t108;
  double t168;
  double t503;
  double t1101;
  double t987;
  double t1083;
  double t1084;
  double t699;
  double t1124;
  double t1126;
  double t1128;
  double t257;
  double t9;
  double t1093;
  double t1142;
  double t1172;
  double t1321;
  double t1371;
  double t1378;
  double t1411;
  double t1455;
  double t537;
  double t1626;
  double t1674;
  double t1836;
  double t1845;
  double t1886;
  double t1825;
  double t1896;
  double t1906;
  double t1920;
  double t1930;
  double t1909;
  double t1946;
  double t1949;
  double t1968;
  double t1971;
  double t1982;
  double t1960;
  double t2016;
  double t2021;
  double t2069;
  double t2093;
  double t2096;
  double t2130;
  double t2163;
  double t1238;
  double t1281;
  double t1314;
  double t1399;
  double t1460;
  double t1479;
  double t1499;
  double t1529;
  double t1539;
  double t1545;
  double t1547;
  double t1588;
  double t1593;
  double t1605;
  double t1641;
  double t1678;
  double t1685;
  double t1721;
  double t1722;
  double t1742;
  double t1711;
  double t1752;
  double t1783;
  double t2351;
  double t2352;
  double t2353;
  double t2394;
  double t2396;
  double t2400;
  double t2361;
  double t2436;
  double t2446;
  double t2500;
  double t2501;
  double t2525;
  double t2456;
  double t2543;
  double t2572;
  double t2620;
  double t2630;
  double t2633;
  double t2586;
  double t2651;
  double t2686;
  double t2735;
  double t2749;
  double t2758;
  double t15;
  double t88;
  double t296;
  double t396;
  double t450;
  double t515;
  double t527;
  double t545;
  double t624;
  double t661;
  double t664;
  double t2038;
  double t2040;
  double t2047;
  double t2118;
  double t2167;
  double t2187;
  double t2190;
  double t2191;
  double t2203;
  double t2204;
  double t2255;
  double t2268;
  double t2276;
  double t2284;
  double t2717;
  double t2772;
  double t2777;
  double t2789;
  double t2824;
  double t2855;
  double t688;
  double t1609;
  double t1618;
  double t2323;
  double t2331;
  double t2349;
  double t3062;
  double t3098;
  double t3106;
  double t3137;
  double t3147;
  double t3164;
  double t3113;
  double t3182;
  double t3221;
  double t3262;
  double t3289;
  double t3293;
  double t3333;
  double t3336;
  double t3356;
  double t3332;
  double t3371;
  double t3383;
  double t3439;
  double t3440;
  double t3442;
  double t3438;
  double t3448;
  double t3462;
  double t3526;
  double t3534;
  double t3537;
  double t3479;
  double t3542;
  double t3546;
  double t3551;
  double t3587;
  double t3632;
  double t2894;
  double t2908;
  double t2911;
  double t2972;
  double t3549;
  double t3637;
  double t3646;
  double t3662;
  double t3675;
  double t3709;
  double t3906;
  double t3911;
  double t3915;
  double t3997;
  double t4004;
  double t4018;
  double t4046;
  double t4168;
  double t4171;
  double t4039;
  double t4175;
  double t4176;
  double t4201;
  double t4204;
  double t4262;
  double t4200;
  double t4287;
  double t4342;
  double t4380;
  double t4397;
  double t4421;
  double t4351;
  double t4423;
  double t4447;
  double t4472;
  double t4480;
  double t4490;
  double t4450;
  double t4522;
  double t4576;
  double t4593;
  double t4603;
  double t4611;
  double t1639;
  double t1786;
  double t1795;
  double t4767;
  double t4785;
  double t4823;
  double t2780;
  double t2862;
  double t2863;
  double t4711;
  double t4730;
  double t4737;
  double t4921;
  double t4951;
  double t4982;
  double t2987;
  double t2999;
  double t3008;
  double t4756;
  double t4837;
  double t4861;
  double t3054;
  double t3227;
  double t3242;
  double t5073;
  double t5137;
  double t5159;
  double t3655;
  double t3761;
  double t3765;
  double t5259;
  double t5261;
  double t5307;
  double t5317;
  double t3773;
  double t3774;
  double t3817;
  double t3892;
  double t3938;
  double t3976;
  double t4584;
  double t4616;
  double t4619;
  double t4623;
  double t4637;
  double t4683;
  double t5502;
  double t5513;
  double t5541;
  double t5558;
  double t5563;
  double t5623;
  double t5630;
  double t5635;
  double t5640;
  double t5642;
  double t5550;
  double t5624;
  double t5662;
  double t5672;
  double t5683;
  double t5705;
  double t5707;
  double t5711;
  double t5739;
  double t5783;
  double t5795;
  double t5807;
  double t5834;
  double t5844;
  double t5899;
  double t5974;
  double t5975;
  double t5999;
  double t6302;
  double t6303;
  double t6307;
  double t6327;
  double t6353;
  double t6354;
  double t6368;
  double t6391;
  double t6412;
  t188 = Cos(var1[14]);
  t199 = -1.*t188;
  t221 = 0. + t199;
  t788 = Cos(var1[18]);
  t759 = Cos(var1[19]);
  t760 = Sin(var1[18]);
  t807 = Sin(var1[19]);
  t838 = Cos(var1[17]);
  t773 = t759*t760;
  t819 = t788*t807;
  t826 = 0. + t773 + t819;
  t735 = Sin(var1[17]);
  t850 = -1.*t788*t759;
  t927 = t760*t807;
  t976 = 0. + t850 + t927;
  t998 = Cos(var1[16]);
  t837 = t735*t826;
  t982 = t838*t976;
  t986 = 0. + t837 + t982;
  t713 = Sin(var1[16]);
  t1028 = t838*t826;
  t1066 = -1.*t735*t976;
  t1078 = 0. + t1028 + t1066;
  t81 = Sin(var1[4]);
  t108 = Cos(var1[4]);
  t168 = Cos(var1[5]);
  t503 = Cos(var1[13]);
  t1101 = Sin(var1[15]);
  t987 = -1.*t713*t986;
  t1083 = t998*t1078;
  t1084 = 0. + t987 + t1083;
  t699 = Cos(var1[15]);
  t1124 = t998*t986;
  t1126 = t713*t1078;
  t1128 = 0. + t1124 + t1126;
  t257 = Sin(var1[13]);
  t9 = Sin(var1[14]);
  t1093 = t699*t1084;
  t1142 = -1.*t1101*t1128;
  t1172 = 0. + t1093 + t1142;
  t1321 = t1101*t1084;
  t1371 = t699*t1128;
  t1378 = 0. + t1321 + t1371;
  t1411 = t9*t1172;
  t1455 = 0. + t1411;
  t537 = Sin(var1[5]);
  t1626 = Cos(var1[3]);
  t1674 = Sin(var1[3]);
  t1836 = t788*t759;
  t1845 = -1.*t760*t807;
  t1886 = 0. + t1836 + t1845;
  t1825 = -1.*t735*t826;
  t1896 = t838*t1886;
  t1906 = 0. + t1825 + t1896;
  t1920 = t735*t1886;
  t1930 = 0. + t1028 + t1920;
  t1909 = t713*t1906;
  t1946 = t998*t1930;
  t1949 = 0. + t1909 + t1946;
  t1968 = t998*t1906;
  t1971 = -1.*t713*t1930;
  t1982 = 0. + t1968 + t1971;
  t1960 = -1.*t1101*t1949;
  t2016 = t699*t1982;
  t2021 = 0. + t1960 + t2016;
  t2069 = t699*t1949;
  t2093 = t1101*t1982;
  t2096 = 0. + t2069 + t2093;
  t2130 = t9*t2021;
  t2163 = 0. + t2130;
  t1238 = t188*t1172;
  t1281 = 0. + t1238;
  t1314 = -1.*t1281*t81;
  t1399 = t503*t1378;
  t1460 = t257*t1455;
  t1479 = 0. + t1399 + t1460;
  t1499 = t168*t1479;
  t1529 = -1.*t257*t1378;
  t1539 = t503*t1455;
  t1545 = 0. + t1529 + t1539;
  t1547 = t1545*t537;
  t1588 = 0. + t1499 + t1547;
  t1593 = t108*t1588;
  t1605 = 0. + t1314 + t1593;
  t1641 = t1626*t168*t81;
  t1678 = t1674*t537;
  t1685 = t1641 + t1678;
  t1721 = -1.*t168*t1674;
  t1722 = t1626*t81*t537;
  t1742 = t1721 + t1722;
  t1711 = t257*t1685;
  t1752 = t503*t1742;
  t1783 = t1711 + t1752;
  t2351 = t503*t1685;
  t2352 = -1.*t257*t1742;
  t2353 = t2351 + t2352;
  t2394 = t188*t1626*t108;
  t2396 = t9*t1783;
  t2400 = t2394 + t2396;
  t2361 = t1101*t2353;
  t2436 = t699*t2400;
  t2446 = t2361 + t2436;
  t2500 = t699*t2353;
  t2501 = -1.*t1101*t2400;
  t2525 = t2500 + t2501;
  t2456 = -1.*t713*t2446;
  t2543 = t998*t2525;
  t2572 = t2456 + t2543;
  t2620 = t998*t2446;
  t2630 = t713*t2525;
  t2633 = t2620 + t2630;
  t2586 = t735*t2572;
  t2651 = t838*t2633;
  t2686 = t2586 + t2651;
  t2735 = t838*t2572;
  t2749 = -1.*t735*t2633;
  t2758 = t2735 + t2749;
  t15 = 0. + t9;
  t88 = -1.*t15*t81;
  t296 = t221*t257;
  t396 = 0. + t296;
  t450 = t168*t396;
  t515 = t503*t221;
  t527 = 0. + t515;
  t545 = t527*t537;
  t624 = 0. + t450 + t545;
  t661 = t108*t624;
  t664 = 0. + t88 + t661;
  t2038 = t188*t2021;
  t2040 = 0. + t2038;
  t2047 = -1.*t2040*t81;
  t2118 = t503*t2096;
  t2167 = t257*t2163;
  t2187 = 0. + t2118 + t2167;
  t2190 = t168*t2187;
  t2191 = -1.*t257*t2096;
  t2203 = t503*t2163;
  t2204 = 0. + t2191 + t2203;
  t2255 = t2204*t537;
  t2268 = 0. + t2190 + t2255;
  t2276 = t108*t2268;
  t2284 = 0. + t2047 + t2276;
  t2717 = -1.*t760*t2686;
  t2772 = t788*t2758;
  t2777 = t2717 + t2772;
  t2789 = t788*t2686;
  t2824 = t760*t2758;
  t2855 = t2789 + t2824;
  t688 = 0.000449*t664;
  t1609 = 1.e-6*t1605;
  t1618 = t688 + t1609;
  t2323 = 0.000171*t2284;
  t2331 = -0.000099*t1605;
  t2349 = t2323 + t2331;
  t3062 = t168*t1674*t81;
  t3098 = -1.*t1626*t537;
  t3106 = t3062 + t3098;
  t3137 = t1626*t168;
  t3147 = t1674*t81*t537;
  t3164 = t3137 + t3147;
  t3113 = t257*t3106;
  t3182 = t503*t3164;
  t3221 = t3113 + t3182;
  t3262 = t503*t3106;
  t3289 = -1.*t257*t3164;
  t3293 = t3262 + t3289;
  t3333 = t188*t108*t1674;
  t3336 = t9*t3221;
  t3356 = t3333 + t3336;
  t3332 = t1101*t3293;
  t3371 = t699*t3356;
  t3383 = t3332 + t3371;
  t3439 = t699*t3293;
  t3440 = -1.*t1101*t3356;
  t3442 = t3439 + t3440;
  t3438 = -1.*t713*t3383;
  t3448 = t998*t3442;
  t3462 = t3438 + t3448;
  t3526 = t998*t3383;
  t3534 = t713*t3442;
  t3537 = t3526 + t3534;
  t3479 = t735*t3462;
  t3542 = t838*t3537;
  t3546 = t3479 + t3542;
  t3551 = t838*t3462;
  t3587 = -1.*t735*t3537;
  t3632 = t3551 + t3587;
  t2894 = 1.e-6*t664;
  t2908 = -0.000099*t2284;
  t2911 = 0.000287*t1605;
  t2972 = t2894 + t2908 + t2911;
  t3549 = -1.*t760*t3546;
  t3637 = t788*t3632;
  t3646 = t3549 + t3637;
  t3662 = t788*t3546;
  t3675 = t760*t3632;
  t3709 = t3662 + t3675;
  t3906 = t108*t168*t257;
  t3911 = t503*t108*t537;
  t3915 = t3906 + t3911;
  t3997 = t503*t108*t168;
  t4004 = -1.*t108*t257*t537;
  t4018 = t3997 + t4004;
  t4046 = -1.*t188*t81;
  t4168 = t9*t3915;
  t4171 = t4046 + t4168;
  t4039 = t1101*t4018;
  t4175 = t699*t4171;
  t4176 = t4039 + t4175;
  t4201 = t699*t4018;
  t4204 = -1.*t1101*t4171;
  t4262 = t4201 + t4204;
  t4200 = -1.*t713*t4176;
  t4287 = t998*t4262;
  t4342 = t4200 + t4287;
  t4380 = t998*t4176;
  t4397 = t713*t4262;
  t4421 = t4380 + t4397;
  t4351 = t735*t4342;
  t4423 = t838*t4421;
  t4447 = t4351 + t4423;
  t4472 = t838*t4342;
  t4480 = -1.*t735*t4421;
  t4490 = t4472 + t4480;
  t4450 = -1.*t760*t4447;
  t4522 = t788*t4490;
  t4576 = t4450 + t4522;
  t4593 = t788*t4447;
  t4603 = t760*t4490;
  t4611 = t4593 + t4603;
  t1639 = t1626*t108*t9;
  t1786 = -1.*t188*t1783;
  t1795 = t1639 + t1786;
  t4767 = t168*t1545;
  t4785 = -1.*t1479*t537;
  t4823 = 0. + t4767 + t4785;
  t2780 = t807*t2777;
  t2862 = t759*t2855;
  t2863 = t2780 + t2862;
  t4711 = t527*t168;
  t4730 = -1.*t396*t537;
  t4737 = 0. + t4711 + t4730;
  t4921 = t168*t2204;
  t4951 = -1.*t2187*t537;
  t4982 = 0. + t4921 + t4951;
  t2987 = -1.*t759*t2777;
  t2999 = t807*t2855;
  t3008 = t2987 + t2999;
  t4756 = 0.000449*t4737;
  t4837 = 1.e-6*t4823;
  t4861 = t4756 + t4837;
  t3054 = t108*t9*t1674;
  t3227 = -1.*t188*t3221;
  t3242 = t3054 + t3227;
  t5073 = 0.000171*t4982;
  t5137 = -0.000099*t4823;
  t5159 = t5073 + t5137;
  t3655 = t807*t3646;
  t3761 = t759*t3709;
  t3765 = t3655 + t3761;
  t5259 = 1.e-6*t4737;
  t5261 = -0.000099*t4982;
  t5307 = 0.000287*t4823;
  t5317 = t5259 + t5261 + t5307;
  t3773 = -1.*t759*t3646;
  t3774 = t807*t3709;
  t3817 = t3773 + t3774;
  t3892 = -1.*t9*t81;
  t3938 = -1.*t188*t3915;
  t3976 = t3892 + t3938;
  t4584 = t807*t4576;
  t4616 = t759*t4611;
  t4619 = t4584 + t4616;
  t4623 = -1.*t759*t4576;
  t4637 = t807*t4611;
  t4683 = t4623 + t4637;
  t5502 = 0.000449*t15;
  t5513 = 1.e-6*t1281;
  t5541 = t5502 + t5513;
  t5558 = 0.000171*t2040;
  t5563 = -0.000099*t1281;
  t5623 = t5558 + t5563;
  t5630 = 1.e-6*t15;
  t5635 = -0.000099*t2040;
  t5640 = 0.000287*t1281;
  t5642 = t5630 + t5635 + t5640;
  t5550 = t5541*t1795;
  t5624 = t5623*t2863;
  t5662 = t5642*t3008;
  t5672 = t5550 + t5624 + t5662;
  t5683 = t5541*t3242;
  t5705 = t5623*t3765;
  t5707 = t5642*t3817;
  t5711 = t5683 + t5705 + t5707;
  t5739 = t5541*t3976;
  t5783 = t5623*t4619;
  t5795 = t5642*t4683;
  t5807 = t5739 + t5783 + t5795;
  t5834 = 0.000171*t2096;
  t5844 = -0.000099*t1378;
  t5899 = t5834 + t5844;
  t5974 = -0.000099*t2096;
  t5975 = 0.000287*t1378;
  t5999 = t5974 + t5975;
  t6302 = 0.000449*t1795;
  t6303 = 1.e-6*t3008;
  t6307 = t6302 + t6303;
  t6327 = 0.000449*t3242;
  t6353 = 1.e-6*t3817;
  t6354 = t6327 + t6353;
  t6368 = 0.000449*t3976;
  t6391 = 1.e-6*t4683;
  t6412 = t6368 + t6391;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=t1618*t1795 + t2349*t2863 + t2972*t3008;
  p_output1[10]=t1618*t3242 + t2349*t3765 + t2972*t3817;
  p_output1[11]=t1618*t3976 + t2349*t4619 + t2972*t4683;
  p_output1[12]=t1795*t4861 + t2863*t5159 + t3008*t5317;
  p_output1[13]=t3242*t4861 + t3765*t5159 + t3817*t5317;
  p_output1[14]=t3976*t4861 + t4619*t5159 + t4683*t5317;
  p_output1[15]=t5672;
  p_output1[16]=t5711;
  p_output1[17]=t5807;
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
  p_output1[39]=t5672;
  p_output1[40]=t5711;
  p_output1[41]=t5807;
  p_output1[42]=1.e-6*t1378*t1795 + t2863*t5899 + t3008*t5999;
  p_output1[43]=1.e-6*t1378*t3242 + t3765*t5899 + t3817*t5999;
  p_output1[44]=1.e-6*t1378*t3976 + t4619*t5899 + t4683*t5999;
  p_output1[45]=t6307;
  p_output1[46]=t6354;
  p_output1[47]=t6412;
  p_output1[48]=t6307;
  p_output1[49]=t6354;
  p_output1[50]=t6412;
  p_output1[51]=t6307;
  p_output1[52]=t6354;
  p_output1[53]=t6412;
  p_output1[54]=t6307;
  p_output1[55]=t6354;
  p_output1[56]=t6412;
  p_output1[57]=t6307;
  p_output1[58]=t6354;
  p_output1[59]=t6412;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jdq_AMWorld_RightToe_mex.hh"

namespace SymExpression
{

void Jdq_AMWorld_RightToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
