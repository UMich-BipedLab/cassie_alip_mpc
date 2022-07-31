/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:46 GMT-04:00
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
  double t99;
  double t220;
  double t828;
  double t930;
  double t918;
  double t948;
  double t963;
  double t968;
  double t1590;
  double t1609;
  double t1062;
  double t1137;
  double t1142;
  double t1144;
  double t1696;
  double t1701;
  double t1716;
  double t1978;
  double t1980;
  double t1987;
  double t1199;
  double t1243;
  double t1247;
  double t1276;
  double t1300;
  double t1329;
  double t1336;
  double t1352;
  double t1461;
  double t1473;
  double t1488;
  double t1489;
  double t1502;
  double t1561;
  double t1564;
  double t2652;
  double t2254;
  double t2268;
  double t2316;
  double t2688;
  double t2681;
  double t2722;
  double t2725;
  double t2799;
  double t2812;
  double t2167;
  double t2178;
  double t2221;
  double t2817;
  double t2828;
  double t2844;
  double t2895;
  double t2902;
  double t2910;
  double t1932;
  double t1940;
  double t1941;
  double t2957;
  double t2962;
  double t2990;
  double t2924;
  double t2930;
  double t2943;
  double t2945;
  double t2751;
  double t2757;
  double t2767;
  double t3118;
  double t3130;
  double t3149;
  double t3151;
  double t3158;
  double t1769;
  double t1802;
  double t1834;
  double t3097;
  double t3073;
  double t3183;
  double t3186;
  double t3188;
  double t3190;
  double t3198;
  double t3199;
  double t3211;
  double t3261;
  double t3263;
  double t3273;
  double t3522;
  double t3545;
  double t3546;
  double t3678;
  double t3682;
  double t3698;
  double t3759;
  double t3760;
  double t3767;
  double t3772;
  double t3967;
  double t4051;
  double t3452;
  double t3461;
  double t3487;
  double t2863;
  double t2915;
  double t3703;
  double t3708;
  double t3711;
  double t4349;
  double t3284;
  double t3971;
  double t4000;
  double t4391;
  double t4393;
  double t4401;
  double t4410;
  double t4477;
  double t3102;
  double t3111;
  double t4121;
  double t4123;
  double t3908;
  double t3919;
  double t3945;
  double t4792;
  double t4817;
  double t4949;
  double t4950;
  double t4843;
  double t4844;
  double t4864;
  double t3838;
  double t3846;
  double t3847;
  double t4954;
  double t4957;
  double t4963;
  double t5028;
  double t5031;
  double t5045;
  double t3052;
  double t3075;
  double t3279;
  double t3280;
  double t4993;
  double t5047;
  double t5058;
  double t4103;
  double t4105;
  double t5123;
  double t5133;
  double t5134;
  double t3317;
  double t3320;
  double t3349;
  double t3350;
  double t4891;
  double t4892;
  double t4898;
  double t4906;
  double t4908;
  double t4921;
  double t3374;
  double t3385;
  double t3395;
  double t3726;
  double t3727;
  double t3744;
  double t3412;
  double t3435;
  double t3559;
  double t3562;
  double t4335;
  double t4345;
  double t4346;
  double t5268;
  double t5273;
  double t5276;
  double t5078;
  double t5103;
  double t5111;
  double t5443;
  double t5449;
  double t5455;
  double t5466;
  double t5477;
  double t5195;
  double t3240;
  double t3243;
  double t5260;
  double t5277;
  double t3143;
  double t3166;
  double t4017;
  double t4019;
  double t4056;
  double t4066;
  double t5729;
  double t5753;
  double t5762;
  double t3640;
  double t3648;
  double t3778;
  double t3823;
  double t5402;
  double t5405;
  double t5412;
  double t5829;
  double t5838;
  double t5839;
  double t4187;
  double t4192;
  double t5816;
  double t5847;
  double t4143;
  double t4159;
  double t3092;
  double t3854;
  double t3864;
  double t5541;
  double t5551;
  double t5552;
  double t6057;
  double t4355;
  double t4361;
  double t5331;
  double t5332;
  double t5337;
  double t5162;
  double t5168;
  double t4425;
  double t4426;
  double t5858;
  double t5860;
  double t5867;
  double t6214;
  double t4487;
  double t4516;
  double t4531;
  double t4533;
  double t6256;
  double t6274;
  double t6275;
  double t4663;
  double t4696;
  double t6061;
  double t6075;
  double t6132;
  double t6136;
  double t6142;
  double t5558;
  double t5566;
  double t6297;
  double t6298;
  double t4596;
  double t4614;
  double t4574;
  double t4575;
  double t5992;
  double t6007;
  double t6023;
  double t5703;
  double t5715;
  double t5719;
  double t4796;
  double t4877;
  double t4879;
  double t4888;
  double t4929;
  double t6802;
  double t6804;
  double t6807;
  double t6811;
  double t6731;
  double t6733;
  double t6737;
  double t6810;
  double t6812;
  double t6814;
  double t6821;
  double t6835;
  double t6855;
  double t5205;
  double t5206;
  double t6948;
  double t6949;
  double t6952;
  double t6954;
  double t6956;
  double t6709;
  double t6718;
  double t6719;
  double t6820;
  double t6861;
  double t6863;
  double t5239;
  double t7125;
  double t7136;
  double t5632;
  double t7157;
  double t7173;
  double t7175;
  double t7176;
  double t5464;
  double t5481;
  double t5521;
  double t5522;
  double t5320;
  double t5321;
  double t5326;
  double t5363;
  double t5365;
  double t5895;
  double t5898;
  double t5899;
  double t5383;
  double t5384;
  double t6200;
  double t6201;
  double t6206;
  double t5702;
  double t5721;
  double t5795;
  double t7420;
  double t7422;
  double t7427;
  double t7445;
  double t7448;
  double t5954;
  double t7474;
  double t7475;
  double t7481;
  double t7486;
  double t6097;
  double t6108;
  double t6116;
  double t6120;
  double t5880;
  double t5883;
  double t5902;
  double t5908;
  double t7029;
  double t7032;
  double t7034;
  double t6083;
  double t6172;
  double t6173;
  double t6178;
  double t6180;
  double t6208;
  double t6210;
  double t6225;
  double t6234;
  double t6870;
  double t6876;
  double t6314;
  double t6333;
  double t7966;
  double t7978;
  double t7979;
  double t7982;
  double t8009;
  double t8013;
  double t8014;
  double t8016;
  double t8018;
  double t8019;
  double t8025;
  double t8026;
  double t6555;
  double t6582;
  double t6427;
  double t6430;
  double t6454;
  double t6457;
  double t6376;
  double t6616;
  double t6618;
  double t6639;
  double t6641;
  double t6645;
  double t6647;
  double t6657;
  double t6665;
  double t6668;
  double t6669;
  double t6677;
  double t6683;
  double t6684;
  double t6688;
  double t6697;
  double t6699;
  double t6702;
  double t6704;
  double t6721;
  double t6728;
  double t6729;
  double t6730;
  double t6742;
  double t6747;
  double t6781;
  double t6786;
  double t6791;
  double t6798;
  t99 = Cos(var1[3]);
  t220 = Sin(var1[3]);
  t828 = Cos(var1[4]);
  t930 = Sin(var1[4]);
  t918 = -1.*var2[2]*t828*t220;
  t948 = -1.*var2[1]*t930;
  t963 = -1.*var1[1]*t828;
  t968 = var1[2]*t220*t930;
  t1590 = Cos(var1[5]);
  t1609 = Sin(var1[5]);
  t1062 = var2[2]*t99*t828;
  t1137 = var2[0]*t930;
  t1142 = var1[0]*t828;
  t1144 = -1.*var1[2]*t99*t930;
  t1696 = t99*t1590*t930;
  t1701 = t220*t1609;
  t1716 = t1696 + t1701;
  t1978 = -1.*t99*t1590;
  t1980 = -1.*t220*t930*t1609;
  t1987 = t1978 + t1980;
  t1199 = -1.*var2[1]*t99*t828;
  t1243 = var2[0]*t828*t220;
  t1247 = var1[0]*t99*t828;
  t1276 = var1[1]*t828*t220;
  t1300 = t1247 + t1276;
  t1329 = var2[3]*t1300;
  t1336 = var1[1]*t99*t930;
  t1352 = -1.*var1[0]*t220*t930;
  t1461 = -1.*var2[3]*t828*t220;
  t1473 = -1.*var2[4]*t99*t930;
  t1488 = t1461 + t1473;
  t1489 = var2[3]*t99*t828;
  t1502 = -1.*var2[4]*t220*t930;
  t1561 = t1489 + t1502;
  t1564 = -1.*var2[4]*t828;
  t2652 = Cos(var1[13]);
  t2254 = t1590*t220*t930;
  t2268 = -1.*t99*t1609;
  t2316 = t2254 + t2268;
  t2688 = Sin(var1[13]);
  t2681 = t2652*t828*t1590;
  t2722 = -1.*t828*t2688*t1609;
  t2725 = t2681 + t2722;
  t2799 = -1.*t2652;
  t2812 = 1. + t2799;
  t2167 = -1.*t1590*t220;
  t2178 = t99*t930*t1609;
  t2221 = t2167 + t2178;
  t2817 = 0.07996*t2812;
  t2828 = 0.135*t2688;
  t2844 = 0. + t2817 + t2828;
  t2895 = -0.135*t2812;
  t2902 = 0.07996*t2688;
  t2910 = 0. + t2895 + t2902;
  t1932 = -1.*t1590*t220*t930;
  t1940 = t99*t1609;
  t1941 = t1932 + t1940;
  t2957 = t2652*t1716;
  t2962 = -1.*t2688*t2221;
  t2990 = t2957 + t2962;
  t2924 = -1.*var1[2];
  t2930 = -1.*t828*t1590*t2844;
  t2943 = -1.*t828*t2910*t1609;
  t2945 = 0. + t2924 + t2930 + t2943;
  t2751 = t99*t1590;
  t2757 = t220*t930*t1609;
  t2767 = t2751 + t2757;
  t3118 = 0.135*t2652;
  t3130 = t3118 + t2902;
  t3149 = 0.07996*t2652;
  t3151 = -0.135*t2688;
  t3158 = t3149 + t3151;
  t1769 = t1590*t220;
  t1802 = -1.*t99*t930*t1609;
  t1834 = t1769 + t1802;
  t3097 = -1.*t2688*t2316;
  t3073 = t2652*t1987;
  t3183 = -1.*t828*t1590*t2688;
  t3186 = -1.*t2652*t828*t1609;
  t3188 = t3183 + t3186;
  t3190 = t2844*t2316;
  t3198 = t2910*t2767;
  t3199 = 0. + var1[1] + t3190 + t3198;
  t3211 = t3188*t3199;
  t3261 = t2652*t2316;
  t3263 = -1.*t2688*t2767;
  t3273 = t3261 + t3263;
  t3522 = -1.*t2652*t1590*t930;
  t3545 = t2688*t930*t1609;
  t3546 = t3522 + t3545;
  t3678 = t828*t1590*t2844;
  t3682 = t828*t2910*t1609;
  t3698 = 0. + var1[2] + t3678 + t3682;
  t3759 = -1.*var1[0];
  t3760 = -1.*t2844*t1716;
  t3767 = -1.*t2910*t2221;
  t3772 = 0. + t3759 + t3760 + t3767;
  t3967 = -1.*t2688*t1716;
  t4051 = t3188*t3772;
  t3452 = t2652*t828*t1590*t220;
  t3461 = -1.*t828*t2688*t220*t1609;
  t3487 = t3452 + t3461;
  t2863 = t2844*t1716;
  t2915 = t2910*t2221;
  t3703 = t2652*t99*t828*t1590;
  t3708 = -1.*t99*t828*t2688*t1609;
  t3711 = t3703 + t3708;
  t4349 = 0. + var1[0] + t2863 + t2915;
  t3284 = t3097 + t3073;
  t3971 = t2652*t1834;
  t4000 = t3967 + t3971;
  t4391 = -1.*var1[1];
  t4393 = -1.*t2844*t2316;
  t4401 = -1.*t2910*t2767;
  t4410 = 0. + t4391 + t4393 + t4401;
  t4477 = 0.08055*t2725;
  t3102 = -1.*t2652*t2767;
  t3111 = t3097 + t3102;
  t4121 = -1.*t2652*t2221;
  t4123 = t3967 + t4121;
  t3908 = t2652*t1941;
  t3919 = -1.*t2688*t1987;
  t3945 = t3908 + t3919;
  t4792 = Sin(var1[14]);
  t4817 = Cos(var1[14]);
  t4949 = -1.*t4817;
  t4950 = 1. + t4949;
  t4843 = t828*t1590*t2688;
  t4844 = t2652*t828*t1609;
  t4864 = t4843 + t4844;
  t3838 = t2688*t1716;
  t3846 = t2652*t2221;
  t3847 = t3838 + t3846;
  t4954 = -0.08055*t4950;
  t4957 = -0.135*t4792;
  t4963 = 0. + t4954 + t4957;
  t5028 = -0.135*t4950;
  t5031 = 0.08055*t4792;
  t5045 = 0. + t5028 + t5031;
  t3052 = t2688*t1941;
  t3075 = t3052 + t3073;
  t3279 = t2688*t1834;
  t3280 = t2957 + t3279;
  t4993 = t4963*t930;
  t5047 = -1.*t5045*t4864;
  t5058 = 0. + t2924 + t2930 + t4993 + t2943 + t5047;
  t4103 = t2688*t1987;
  t4105 = t3261 + t4103;
  t5123 = t4792*t930;
  t5133 = t4817*t4864;
  t5134 = t5123 + t5133;
  t3317 = t2910*t2316;
  t3320 = t2844*t1987;
  t3349 = -1.*t828*t1590*t2910;
  t3350 = t828*t2844*t1609;
  t4891 = -1.*t828*t4792*t220;
  t4892 = t2688*t2316;
  t4898 = t2652*t2767;
  t4906 = t4892 + t4898;
  t4908 = t4817*t4906;
  t4921 = t4891 + t4908;
  t3374 = t99*t828*t1590*t2688;
  t3385 = t2652*t99*t828*t1609;
  t3395 = t3374 + t3385;
  t3726 = t828*t1590*t2688*t220;
  t3727 = t2652*t828*t220*t1609;
  t3744 = t3726 + t3727;
  t3412 = t828*t1590*t2844*t220;
  t3435 = t828*t2910*t220*t1609;
  t3559 = t1590*t2844*t930;
  t3562 = t2910*t930*t1609;
  t4335 = -1.*t1590*t2688*t930;
  t4345 = -1.*t2652*t930*t1609;
  t4346 = t4335 + t4345;
  t5268 = t828*t4963*t220;
  t5273 = t5045*t4906;
  t5276 = 0. + var1[1] + t5268 + t3190 + t3198 + t5273;
  t5078 = -1.*t99*t828*t4792;
  t5103 = t4817*t3847;
  t5111 = t5078 + t5103;
  t5443 = -0.135*t4817;
  t5449 = -0.08055*t4792;
  t5455 = t5443 + t5449;
  t5466 = 0.08055*t4817;
  t5477 = t5466 + t4957;
  t5195 = -1.*t4817*t828*t220;
  t3240 = -1.*t828*t1590*t3130;
  t3243 = -1.*t828*t3158*t1609;
  t5260 = -1.*t5045*t2725;
  t5277 = -1.*t4817*t2725*t5276;
  t3143 = t3130*t2316;
  t3166 = t3158*t2767;
  t4017 = -1.*t2910*t1716;
  t4019 = -1.*t2844*t1834;
  t4056 = t828*t1590*t2910;
  t4066 = -1.*t828*t2844*t1609;
  t5729 = -1.*t4963*t930;
  t5753 = t5045*t4864;
  t5762 = 0. + var1[2] + t3678 + t5729 + t3682 + t5753;
  t3640 = -1.*t99*t828*t1590*t2844;
  t3648 = -1.*t99*t828*t2910*t1609;
  t3778 = -1.*t1590*t2844*t930;
  t3823 = -1.*t2910*t930*t1609;
  t5402 = t828*t4792;
  t5405 = t4817*t4346;
  t5412 = t5402 + t5405;
  t5829 = -1.*t99*t828*t4963;
  t5838 = -1.*t5045*t3847;
  t5839 = 0. + t3759 + t5829 + t3760 + t3767 + t5838;
  t4187 = t828*t1590*t3130;
  t4192 = t828*t3158*t1609;
  t5816 = t5045*t2725;
  t5847 = -1.*t4817*t2725*t5839;
  t4143 = -1.*t3130*t1716;
  t4159 = -1.*t3158*t2221;
  t3092 = 0.08055*t2990;
  t3854 = -1.*t2844*t1941;
  t3864 = -1.*t2910*t1987;
  t5541 = t4817*t930;
  t5551 = -1.*t4792*t4864;
  t5552 = t5541 + t5551;
  t6057 = t828*t4792*t220;
  t4355 = -1.*t828*t1590*t2844*t220;
  t4361 = -1.*t828*t2910*t220*t1609;
  t5331 = t4792*t220*t930;
  t5332 = t4817*t3744;
  t5337 = t5331 + t5332;
  t5162 = t99*t828*t4963;
  t5168 = t5045*t3847;
  t4425 = t99*t828*t1590*t2844;
  t4426 = t99*t828*t2910*t1609;
  t5858 = t99*t4792*t930;
  t5860 = t4817*t3395;
  t5867 = t5858 + t5860;
  t6214 = 0. + var1[0] + t5162 + t2863 + t2915 + t5168;
  t4487 = -1.*t2910*t2316;
  t4516 = -1.*t2844*t1987;
  t4531 = t2910*t1716;
  t4533 = t2844*t1834;
  t6256 = -1.*t828*t4963*t220;
  t6274 = -1.*t5045*t4906;
  t6275 = 0. + t4391 + t6256 + t4393 + t4401 + t6274;
  t4663 = t2844*t1941;
  t4696 = t2910*t1987;
  t6061 = t4817*t3075;
  t6075 = t6057 + t6061;
  t6132 = -1.*t4817*t99*t828;
  t6136 = -1.*t4792*t3847;
  t6142 = t6132 + t6136;
  t5558 = -1.*t4792*t4906;
  t5566 = t5195 + t5558;
  t6297 = 0.08055*t3188;
  t6298 = -0.01004*t4792*t2725;
  t4596 = t3130*t1716;
  t4614 = t3158*t2221;
  t4574 = -1.*t3130*t2316;
  t4575 = -1.*t3158*t2767;
  t5992 = t4817*t99*t828;
  t6007 = t4792*t3847;
  t6023 = t5992 + t6007;
  t5703 = t99*t828*t4792;
  t5715 = -1.*t4817*t3847;
  t5719 = t5703 + t5715;
  t4796 = -1.*t4792*t930;
  t4877 = -1.*t4817*t4864;
  t4879 = t4796 + t4877;
  t4888 = var2[1]*t4879;
  t4929 = var2[2]*t4921;
  t6802 = Cos(var1[15]);
  t6804 = -1.*t6802;
  t6807 = 1. + t6804;
  t6811 = Sin(var1[15]);
  t6731 = -1.*t4817*t930;
  t6733 = t4792*t4864;
  t6737 = t6731 + t6733;
  t6810 = -0.01004*t6807;
  t6812 = 0.08055*t6811;
  t6814 = 0. + t6810 + t6812;
  t6821 = -0.08055*t6807;
  t6835 = -0.01004*t6811;
  t6855 = 0. + t6821 + t6835;
  t5205 = t4792*t3075;
  t5206 = t5195 + t5205;
  t6948 = 0.08055*t6802;
  t6949 = t6948 + t6835;
  t6952 = -0.01004*t6802;
  t6954 = -0.08055*t6811;
  t6956 = t6952 + t6954;
  t6709 = t4817*t828*t220;
  t6718 = t4792*t4906;
  t6719 = t6709 + t6718;
  t6820 = -1.*t6814*t2725;
  t6861 = -1.*t6855*t6737;
  t6863 = 0. + t2924 + t2930 + t4993 + t2943 + t5047 + t6820 + t6861;
  t5239 = t5045*t4105;
  t7125 = -1.*t6814*t3188;
  t7136 = -1.*t4792*t6855*t2725;
  t5632 = t5045*t3273;
  t7157 = t6814*t3273;
  t7173 = t6855*t6719;
  t7175 = 0. + var1[1] + t5268 + t3190 + t3198 + t5273 + t7157 + t7173;
  t7176 = -1.*t4817*t2725*t7175;
  t5464 = t5455*t930;
  t5481 = -1.*t5477*t4864;
  t5521 = t828*t5455*t220;
  t5522 = t5477*t4906;
  t5320 = -1.*t4817*t99*t930;
  t5321 = t4792*t3395;
  t5326 = t5320 + t5321;
  t5363 = -1.*t4963*t220*t930;
  t5365 = t5045*t3744;
  t5895 = -1.*t4817*t220*t930;
  t5898 = t4792*t3744;
  t5899 = t5895 + t5898;
  t5383 = t828*t4963;
  t5384 = -1.*t5045*t4346;
  t6200 = -1.*t4817*t828;
  t6201 = t4792*t4346;
  t6206 = t6200 + t6201;
  t5702 = var2[0]*t5134;
  t5721 = var2[2]*t5719;
  t5795 = -1.*t5045*t3280;
  t7420 = t6814*t2725;
  t7422 = t6855*t6737;
  t7427 = 0. + var1[2] + t3678 + t5729 + t3682 + t5753 + t7420 + t7422;
  t7445 = t6814*t3188;
  t7448 = t4792*t6855*t2725;
  t5954 = -1.*t5045*t2990;
  t7474 = -1.*t6814*t2990;
  t7475 = -1.*t6855*t6023;
  t7481 = 0. + t3759 + t5829 + t3760 + t3767 + t5838 + t7474 + t7475;
  t7486 = -1.*t4817*t2725*t7481;
  t6097 = -1.*t5455*t930;
  t6108 = t5477*t4864;
  t6116 = -1.*t99*t828*t5455;
  t6120 = -1.*t5477*t3847;
  t5880 = t99*t4963*t930;
  t5883 = -1.*t5045*t3395;
  t5902 = -1.*t828*t4963;
  t5908 = t5045*t4346;
  t7029 = t6802*t2990;
  t7032 = -1.*t6811*t6023;
  t7034 = t7029 + t7032;
  t6083 = -1.*t5045*t3075;
  t6172 = var2[1]*t5111;
  t6173 = -1.*t4817*t4906;
  t6178 = t6057 + t6173;
  t6180 = var2[0]*t6178;
  t6208 = t4963*t220*t930;
  t6210 = -1.*t5045*t3744;
  t6225 = -1.*t99*t4963*t930;
  t6234 = t5045*t3395;
  t6870 = t6814*t2990;
  t6876 = t6855*t6023;
  t6314 = -1.*t5045*t4105;
  t6333 = t5045*t3280;
  t7966 = 0. + var1[0] + t5162 + t2863 + t2915 + t5168 + t6870 + t6876;
  t7978 = -1.*t6814*t3273;
  t7979 = -1.*t6855*t6719;
  t7982 = 0. + t4391 + t6256 + t4393 + t4401 + t6274 + t7978 + t7979;
  t8009 = t6811*t3188;
  t8013 = t6802*t4792*t2725;
  t8014 = t8009 + t8013;
  t8016 = -0.13004*t8014;
  t8018 = t6802*t3188;
  t8019 = -1.*t4792*t6811*t2725;
  t8025 = t8018 + t8019;
  t8026 = 0.08055*t8025;
  t6555 = t5045*t2990;
  t6582 = -1.*t5045*t3273;
  t6427 = t99*t828*t5455;
  t6430 = t5477*t3847;
  t6454 = -1.*t828*t5455*t220;
  t6457 = -1.*t5477*t4906;
  t6376 = t5045*t3075;
  t6616 = -1.*t99*t4792*t930;
  t6618 = -1.*t4817*t3395;
  t6639 = t6616 + t6618;
  t6641 = var2[4]*t6639;
  t6645 = -1.*var2[5]*t4817*t3280;
  t6647 = -1.*var2[13]*t4817*t2990;
  t6657 = var2[14]*t6023;
  t6665 = -1.*t4817*t3075;
  t6668 = t4891 + t6665;
  t6669 = var2[3]*t6668;
  t6677 = t6641 + t6645 + t6647 + t6657 + t6669;
  t6683 = -1.*t4792*t220*t930;
  t6684 = -1.*t4817*t3744;
  t6688 = t6683 + t6684;
  t6697 = var2[4]*t6688;
  t6699 = -1.*var2[5]*t4817*t4105;
  t6702 = -1.*var2[13]*t4817*t3273;
  t6704 = var2[3]*t5719;
  t6721 = var2[14]*t6719;
  t6728 = t6697 + t6699 + t6702 + t6704 + t6721;
  t6729 = -1.*var2[13]*t4817*t2725;
  t6730 = -1.*var2[5]*t4817*t2725;
  t6742 = var2[14]*t6737;
  t6747 = -1.*t828*t4792;
  t6781 = -1.*t4817*t4346;
  t6786 = t6747 + t6781;
  t6791 = var2[4]*t6786;
  t6798 = t6729 + t6730 + t6742 + t6791;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t99*var2[2] + t220*var1[2]*var2[3];
  p_output1[25]=-1.*t220*var2[2] - 1.*t99*var1[2]*var2[3];
  p_output1[26]=t99*var2[0] + t220*var2[1] + (-1.*t220*var1[0] + t99*var1[1])*var2[3];
  p_output1[27]=-1.*t99*var2[3];
  p_output1[28]=-1.*t220*var2[3];
  p_output1[29]=0;
  p_output1[30]=t918 + t948 - 1.*t828*t99*var1[2]*var2[3] + (t963 + t968)*var2[4];
  p_output1[31]=t1062 + t1137 - 1.*t220*t828*var1[2]*var2[3] + (t1142 + t1144)*var2[4];
  p_output1[32]=t1199 + t1243 + t1329 + (t1336 + t1352)*var2[4];
  p_output1[33]=t1488;
  p_output1[34]=t1561;
  p_output1[35]=t1564;
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
  p_output1[78]=t918 + t948 + (0.135*t1941 + 0.07996*t1987 - 1.*t828*t99*var1[2])*var2[3] + (t963 + t968 + 0.135*t1590*t828*t99 + 0.07996*t1609*t828*t99)*var2[4] + (0.07996*t1716 + 0.135*t1834)*var2[5];
  p_output1[79]=t1062 + t1137 + (0.135*t1716 + 0.07996*t2221 - 1.*t220*t828*var1[2])*var2[3] + (t1142 + t1144 + 0.135*t1590*t220*t828 + 0.07996*t1609*t220*t828)*var2[4] + (0.135*t1987 + 0.07996*t2316)*var2[5];
  p_output1[80]=t1199 + t1243 + t1329 + (t1336 + t1352 - 0.135*t1590*t930 - 0.07996*t1609*t930)*var2[4] + (0.07996*t1590*t828 - 0.135*t1609*t828)*var2[5];
  p_output1[81]=t1488;
  p_output1[82]=t1561;
  p_output1[83]=t1564;
  p_output1[84]=t2725*var2[1] + (-1.*t2316*t2652 + t2688*t2767)*var2[2] + (t2725*(t2863 + t2915) + t2945*t2990 + 0.08055*t3075 + 0.135*t220*t828)*var2[3] + (0.08055*t3395 + t2725*(t3412 + t3435) + t2945*t3487 + t3199*t3546 + t3273*(t3559 + t3562) + 0.135*t930*t99)*var2[4] + (t3211 + 0.08055*t3280 + t2945*t3284 + t2725*(t3317 + t3320) + t3273*(t3349 + t3350))*var2[5] + (t3092 + t2945*t3111 + t2725*(t3143 + t3166) + t3211 + (t3240 + t3243)*t3273)*var2[13];
  p_output1[85]=(-1.*t1590*t2652*t828 + t1609*t2688*t828)*var2[0] + t2990*var2[2] + (0.08055*t3847 + t2725*(t3854 + t3864) + t3698*t3945 - 0.135*t828*t99)*var2[3] + (t2725*(t3640 + t3648) + t3698*t3711 + 0.08055*t3744 + t3546*t3772 + t2990*(t3778 + t3823) + 0.135*t220*t930)*var2[4] + (t3698*t4000 + t2725*(t4017 + t4019) + t4051 + t2990*(t4056 + t4066) + 0.08055*t4105)*var2[5] + (0.08055*t3273 + t4051 + t3698*t4123 + t2725*(t4143 + t4159) + t2990*(t4187 + t4192))*var2[13];
  p_output1[86]=t3273*var2[0] + (-1.*t1716*t2652 + t2221*t2688)*var2[1] + (t2990*(t3760 + t3767) + t2990*t4349 + t3945*t4410 + t3273*(t4663 + t4696))*var2[3] + (0.08055*t4346 + t3487*t4349 + t2990*(t4355 + t4361) + t3711*t4410 + t3273*(t4425 + t4426) + 0.135*t828)*var2[4] + (t3284*t4349 + t4000*t4410 + t4477 + t2990*(t4487 + t4516) + t3273*(t4531 + t4533))*var2[5] + (t3111*t4349 + t4123*t4410 + t4477 + t2990*(t4574 + t4575) + t3273*(t4596 + t4614))*var2[13];
  p_output1[87]=t3945*var2[3] + t3711*var2[4] + t4000*var2[5] + t4123*var2[13];
  p_output1[88]=t2990*var2[3] + t3487*var2[4] + t3284*var2[5] + t3111*var2[13];
  p_output1[89]=t3546*var2[4] + t3188*var2[5] + t3188*var2[13];
  p_output1[90]=t4888 + t4929 + (0.08055*t3945 - 1.*t5058*t5111 - 1.*t5134*(t2863 + t2915 + t5162 + t5168) - 0.01004*t5206)*var2[3] + (0.08055*t3711 - 0.01004*t5326 - 1.*t5058*t5337 - 1.*t5134*(t3412 + t3435 + t5363 + t5365) - 1.*t4921*(t3559 + t3562 + t5383 + t5384) - 1.*t5276*t5412)*var2[4] + (0.08055*t4000 - 0.01004*t3280*t4792 - 1.*t4105*t4817*t5058 - 1.*t5134*(t3317 + t3320 + t5239) - 1.*t4921*(t3349 + t3350 + t5260) + t5277)*var2[5] + (0.08055*t4123 - 0.01004*t2990*t4792 - 1.*t3273*t4817*t5058 - 1.*t4921*(t3240 + t3243 + t5260) + t5277 - 1.*t5134*(t3143 + t3166 + t5632))*var2[13] + (-0.01004*t5111 - 1.*t4921*(t5464 + t5481) - 1.*t5134*(t5521 + t5522) - 1.*t5276*t5552 - 1.*t5058*t5566)*var2[14];
  p_output1[91]=t5702 + t5721 + (t3092 - 0.01004*t6023 - 1.*t5762*t6075 - 1.*t5134*(t3854 + t3864 + t5268 + t6083))*var2[3] + (0.08055*t3487 - 1.*t5412*t5839 - 1.*t5762*t5867 - 1.*t5134*(t3640 + t3648 + t5880 + t5883) - 0.01004*t5899 - 1.*t5111*(t3778 + t3823 + t5902 + t5908))*var2[4] + (0.08055*t3284 - 0.01004*t4105*t4792 - 1.*t3280*t4817*t5762 - 1.*t5134*(t4017 + t4019 + t5795) - 1.*t5111*(t4056 + t4066 + t5816) + t5847)*var2[5] + (0.08055*t3111 - 0.01004*t3273*t4792 - 1.*t2990*t4817*t5762 - 1.*t5111*(t4187 + t4192 + t5816) + t5847 - 1.*t5134*(t4143 + t4159 + t5954))*var2[13] + (-0.01004*t4921 - 1.*t5552*t5839 - 1.*t5111*(t6097 + t6108) - 1.*t5134*(t6116 + t6120) - 1.*t5762*t6142)*var2[14];
  p_output1[92]=t6172 + t6180 + (-1.*t5111*(t3760 + t3767 + t5829 + t5838) - 1.*t5111*t6214 - 1.*t6075*t6275 - 1.*t4921*(t4663 + t4696 + t6256 + t6376))*var2[3] + (0.08055*t3546 - 0.01004*t6206 - 1.*t5111*(t4355 + t4361 + t6208 + t6210) - 1.*t5337*t6214 - 1.*t4921*(t4425 + t4426 + t6225 + t6234) - 1.*t5867*t6275)*var2[4] + (-1.*t4105*t4817*t6214 - 1.*t3280*t4817*t6275 + t6297 + t6298 - 1.*t5111*(t4487 + t4516 + t6314) - 1.*t4921*(t4531 + t4533 + t6333))*var2[5] + (-1.*t3273*t4817*t6214 - 1.*t2990*t4817*t6275 + t6297 + t6298 - 1.*t4921*(t4596 + t4614 + t6555) - 1.*t5111*(t4574 + t4575 + t6582))*var2[13] + (-0.01004*t5134 - 1.*t5566*t6214 - 1.*t6142*t6275 - 1.*t4921*(t6427 + t6430) - 1.*t5111*(t6454 + t6457))*var2[14];
  p_output1[93]=t6677;
  p_output1[94]=t6728;
  p_output1[95]=t6798;
  p_output1[96]=t4888 + t4929 + (-0.13004*(t5206*t6802 + t3945*t6811) + 0.08055*(t3945*t6802 - 1.*t5206*t6811) - 1.*t5111*t6863 - 1.*t5134*(t2863 + t2915 + t5162 + t5168 + t6870 + t6876))*var2[3] + (-0.13004*(t5326*t6802 + t3711*t6811) + 0.08055*(t3711*t6802 - 1.*t5326*t6811) - 1.*t5134*(t3412 + t3435 + t5363 + t5365 + t3487*t6814 + t5899*t6855) - 1.*t4921*(t3559 + t3562 + t5383 + t5384 - 1.*t3546*t6814 - 1.*t6206*t6855) - 1.*t5337*t6863 - 1.*t5412*t7175)*var2[4] + (-0.13004*(t3280*t4792*t6802 + t4000*t6811) + 0.08055*(t4000*t6802 - 1.*t3280*t4792*t6811) - 1.*t5134*(t3317 + t3320 + t5239 + t3284*t6814 + t4105*t4792*t6855) - 1.*t4105*t4817*t6863 - 1.*t4921*(t3349 + t3350 + t5260 + t7125 + t7136) + t7176)*var2[5] + (-0.13004*(t2990*t4792*t6802 + t4123*t6811) + 0.08055*(t4123*t6802 - 1.*t2990*t4792*t6811) - 1.*t5134*(t3143 + t3166 + t5632 + t3111*t6814 + t3273*t4792*t6855) - 1.*t3273*t4817*t6863 - 1.*t4921*(t3240 + t3243 + t5260 + t7125 + t7136) + t7176)*var2[13] + (-0.13004*t5111*t6802 - 0.08055*t5111*t6811 - 1.*t5134*(t5521 + t5522 + t4921*t6855) - 1.*t4921*(t5464 + t5481 - 1.*t5134*t6855) - 1.*t5566*t6863 - 1.*t5552*t7175)*var2[14] + (0.08055*(-1.*t6023*t6802 - 1.*t2990*t6811) - 1.*t5134*(t3273*t6949 + t6719*t6956) - 1.*t4921*(-1.*t2725*t6949 - 1.*t6737*t6956) - 0.13004*t7034)*var2[15];
  p_output1[97]=t5702 + t5721 + (-0.13004*(t6023*t6802 + t2990*t6811) - 1.*t5134*(t3854 + t3864 + t5268 + t6083 - 1.*t3945*t6814 - 1.*t5206*t6855) + 0.08055*t7034 - 1.*t6075*t7427)*var2[3] + (-0.13004*(t5899*t6802 + t3487*t6811) + 0.08055*(t3487*t6802 - 1.*t5899*t6811) - 1.*t5134*(t3640 + t3648 + t5880 + t5883 - 1.*t3711*t6814 - 1.*t5326*t6855) - 1.*t5111*(t3778 + t3823 + t5902 + t5908 + t3546*t6814 + t6206*t6855) - 1.*t5867*t7427 - 1.*t5412*t7481)*var2[4] + (-0.13004*(t4105*t4792*t6802 + t3284*t6811) + 0.08055*(t3284*t6802 - 1.*t4105*t4792*t6811) - 1.*t5134*(t4017 + t4019 + t5795 - 1.*t4000*t6814 - 1.*t3280*t4792*t6855) - 1.*t3280*t4817*t7427 - 1.*t5111*(t4056 + t4066 + t5816 + t7445 + t7448) + t7486)*var2[5] + (-0.13004*(t3273*t4792*t6802 + t3111*t6811) + 0.08055*(t3111*t6802 - 1.*t3273*t4792*t6811) - 1.*t5134*(t4143 + t4159 + t5954 - 1.*t4123*t6814 - 1.*t2990*t4792*t6855) - 1.*t2990*t4817*t7427 - 1.*t5111*(t4187 + t4192 + t5816 + t7445 + t7448) + t7486)*var2[13] + (-0.13004*t4921*t6802 - 0.08055*t4921*t6811 - 1.*t5134*(t6116 + t6120 - 1.*t5111*t6855) - 1.*t5111*(t6097 + t6108 + t5134*t6855) - 1.*t6142*t7427 - 1.*t5552*t7481)*var2[14] + (0.08055*(-1.*t6719*t6802 - 1.*t3273*t6811) - 0.13004*(t3273*t6802 - 1.*t6719*t6811) - 1.*t5134*(-1.*t2990*t6949 - 1.*t6023*t6956) - 1.*t5111*(t2725*t6949 + t6737*t6956))*var2[15];
  p_output1[98]=t6172 + t6180 + (-1.*t4921*(t4663 + t4696 + t6256 + t6376 + t3945*t6814 + t5206*t6855) - 1.*t5111*(t3760 + t3767 + t5829 + t5838 + t7474 + t7475) - 1.*t5111*t7966 - 1.*t6075*t7982)*var2[3] + (-0.13004*(t6206*t6802 + t3546*t6811) + 0.08055*(t3546*t6802 - 1.*t6206*t6811) - 1.*t4921*(t4425 + t4426 + t6225 + t6234 + t3711*t6814 + t5326*t6855) - 1.*t5111*(t4355 + t4361 + t6208 + t6210 - 1.*t3487*t6814 - 1.*t5899*t6855) - 1.*t5337*t7966 - 1.*t5867*t7982)*var2[4] + (-1.*t4921*(t4531 + t4533 + t6333 + t4000*t6814 + t3280*t4792*t6855) - 1.*t5111*(t4487 + t4516 + t6314 - 1.*t3284*t6814 - 1.*t4105*t4792*t6855) - 1.*t4105*t4817*t7966 - 1.*t3280*t4817*t7982 + t8016 + t8026)*var2[5] + (-1.*t4921*(t4596 + t4614 + t6555 + t4123*t6814 + t2990*t4792*t6855) - 1.*t5111*(t4574 + t4575 + t6582 - 1.*t3111*t6814 - 1.*t3273*t4792*t6855) - 1.*t3273*t4817*t7966 - 1.*t2990*t4817*t7982 + t8016 + t8026)*var2[13] + (-0.13004*t5134*t6802 - 0.08055*t5134*t6811 - 1.*t5111*(t6454 + t6457 - 1.*t4921*t6855) - 1.*t4921*(t6427 + t6430 + t5111*t6855) - 1.*t5566*t7966 - 1.*t6142*t7982)*var2[14] + (0.08055*(-1.*t6737*t6802 - 1.*t2725*t6811) - 0.13004*(t2725*t6802 - 1.*t6737*t6811) - 1.*t4921*(t2990*t6949 + t6023*t6956) - 1.*t5111*(-1.*t3273*t6949 - 1.*t6719*t6956))*var2[15];
  p_output1[99]=t6677;
  p_output1[100]=t6728;
  p_output1[101]=t6798;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJs_RightKneeJoint_mex.hh"

namespace SymExpression
{

void dJs_RightKneeJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
