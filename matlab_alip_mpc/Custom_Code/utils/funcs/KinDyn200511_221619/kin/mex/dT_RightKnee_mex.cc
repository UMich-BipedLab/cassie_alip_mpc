/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:04 GMT-04:00
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
  double t650;
  double t682;
  double t751;
  double t980;
  double t622;
  double t996;
  double t1190;
  double t786;
  double t1061;
  double t1145;
  double t463;
  double t1197;
  double t1217;
  double t1225;
  double t1274;
  double t1293;
  double t1338;
  double t1371;
  double t1382;
  double t1402;
  double t95;
  double t1569;
  double t1554;
  double t1586;
  double t1604;
  double t1635;
  double t1645;
  double t1665;
  double t1475;
  double t1613;
  double t1673;
  double t1688;
  double t1724;
  double t1740;
  double t1778;
  double t2027;
  double t2029;
  double t2072;
  double t2118;
  double t2154;
  double t2178;
  double t2228;
  double t2230;
  double t2232;
  double t2287;
  double t2306;
  double t2374;
  double t2382;
  double t2516;
  double t2552;
  double t2579;
  double t2595;
  double t2599;
  double t2621;
  double t2642;
  double t2719;
  double t2774;
  double t2775;
  double t2795;
  double t2807;
  double t2817;
  double t2792;
  double t2818;
  double t2839;
  double t2845;
  double t2846;
  double t2851;
  double t2852;
  double t2860;
  double t2892;
  double t2967;
  double t2972;
  double t2975;
  double t2985;
  double t2989;
  double t2992;
  double t2993;
  double t2997;
  double t3007;
  double t3088;
  double t3093;
  double t3097;
  double t3102;
  double t3109;
  double t3119;
  double t3128;
  double t3136;
  double t3180;
  double t3182;
  double t3194;
  double t3203;
  double t3204;
  double t3209;
  double t3214;
  double t3217;
  double t3226;
  double t3240;
  double t3243;
  double t3249;
  double t3256;
  double t2680;
  double t2681;
  double t2685;
  double t3344;
  double t3355;
  double t3358;
  double t3387;
  double t3397;
  double t3406;
  double t3410;
  double t3489;
  double t3509;
  double t3512;
  double t3530;
  double t3533;
  double t3534;
  double t3583;
  double t3589;
  double t3593;
  double t3607;
  double t3609;
  double t3612;
  double t3602;
  double t3616;
  double t3619;
  double t3627;
  double t3633;
  double t3641;
  double t3644;
  double t3650;
  double t3651;
  double t3658;
  double t3664;
  double t3667;
  double t3685;
  double t3686;
  double t3700;
  double t3701;
  double t3744;
  double t3747;
  double t3753;
  double t3758;
  double t3762;
  double t3763;
  double t3767;
  double t3769;
  double t3776;
  double t1147;
  double t1415;
  double t1431;
  double t1479;
  double t1537;
  double t1539;
  double t1723;
  double t1812;
  double t1819;
  double t1887;
  double t1888;
  double t1891;
  double t2340;
  double t2384;
  double t2385;
  double t2403;
  double t2409;
  double t2434;
  double t2514;
  double t2583;
  double t2584;
  double t3987;
  double t2843;
  double t2905;
  double t2906;
  double t2912;
  double t2930;
  double t2935;
  double t2979;
  double t3021;
  double t3027;
  double t3044;
  double t3053;
  double t3068;
  double t3113;
  double t3138;
  double t3144;
  double t3152;
  double t3153;
  double t3157;
  double t3248;
  double t3269;
  double t3287;
  double t3289;
  double t3298;
  double t3299;
  double t2692;
  double t2706;
  double t3341;
  double t3361;
  double t3367;
  double t3425;
  double t3429;
  double t3439;
  double t4152;
  double t4196;
  double t4200;
  double t4201;
  double t3655;
  double t3668;
  double t3675;
  double t3723;
  double t3724;
  double t3727;
  double t4237;
  double t3754;
  double t3784;
  double t3787;
  double t3793;
  double t3807;
  double t3819;
  double t4477;
  double t4481;
  double t4494;
  double t4496;
  double t4525;
  double t4532;
  double t4578;
  double t4581;
  double t3865;
  double t3867;
  double t3869;
  double t4504;
  double t4505;
  double t4506;
  double t4482;
  double t4490;
  double t4491;
  double t4533;
  double t4539;
  double t4541;
  double t4509;
  double t4512;
  double t4519;
  double t4563;
  double t4571;
  double t4575;
  double t4583;
  double t4584;
  double t4585;
  double t4591;
  double t4595;
  double t4596;
  double t3892;
  double t3896;
  double t3901;
  double t4499;
  double t3925;
  double t3931;
  double t3955;
  double t3961;
  double t3966;
  double t3975;
  double t3985;
  double t3999;
  double t4004;
  double t4005;
  double t5001;
  double t4497;
  double t4500;
  double t4031;
  double t4032;
  double t4034;
  double t4044;
  double t4046;
  double t4051;
  double t4062;
  double t4064;
  double t4067;
  double t4698;
  double t4704;
  double t4705;
  double t4721;
  double t4727;
  double t4083;
  double t4100;
  double t4103;
  double t4812;
  double t4813;
  double t4818;
  double t4835;
  double t4836;
  double t4108;
  double t4110;
  double t4128;
  double t4947;
  double t4953;
  double t4956;
  double t4957;
  double t4960;
  double t4150;
  double t4157;
  double t5028;
  double t5031;
  double t5036;
  double t5042;
  double t5044;
  double t4166;
  double t4167;
  double t5513;
  double t4174;
  double t4183;
  double t4185;
  double t5631;
  double t5632;
  double t5635;
  double t5638;
  double t5641;
  double t5645;
  double t5648;
  double t5650;
  double t5656;
  double t5659;
  double t5664;
  double t4233;
  double t4239;
  double t4249;
  double t4253;
  double t5698;
  double t4269;
  double t4270;
  double t4288;
  t650 = Cos(var1[3]);
  t682 = Cos(var1[4]);
  t751 = Cos(var1[5]);
  t980 = Sin(var1[13]);
  t622 = Cos(var1[13]);
  t996 = Sin(var1[5]);
  t1190 = Cos(var1[15]);
  t786 = t622*t650*t682*t751;
  t1061 = -1.*t650*t682*t980*t996;
  t1145 = t786 + t1061;
  t463 = Sin(var1[15]);
  t1197 = Cos(var1[14]);
  t1217 = Sin(var1[4]);
  t1225 = -1.*t1197*t650*t1217;
  t1274 = Sin(var1[14]);
  t1293 = t650*t682*t751*t980;
  t1338 = t622*t650*t682*t996;
  t1371 = t1293 + t1338;
  t1382 = t1274*t1371;
  t1402 = t1225 + t1382;
  t95 = Sin(var1[16]);
  t1569 = Sin(var1[3]);
  t1554 = t650*t751*t1217;
  t1586 = t1569*t996;
  t1604 = t1554 + t1586;
  t1635 = t751*t1569;
  t1645 = -1.*t650*t1217*t996;
  t1665 = t1635 + t1645;
  t1475 = Cos(var1[16]);
  t1613 = -1.*t980*t1604;
  t1673 = t622*t1665;
  t1688 = t1613 + t1673;
  t1724 = t622*t1604;
  t1740 = t980*t1665;
  t1778 = t1724 + t1740;
  t2027 = -1.*t650*t682*t1274;
  t2029 = t980*t1604;
  t2072 = -1.*t751*t1569;
  t2118 = t650*t1217*t996;
  t2154 = t2072 + t2118;
  t2178 = t622*t2154;
  t2228 = t2029 + t2178;
  t2230 = t1197*t2228;
  t2232 = t2027 + t2230;
  t2287 = -1.*t622*t2154;
  t2306 = t1613 + t2287;
  t2374 = -1.*t980*t2154;
  t2382 = t1724 + t2374;
  t2516 = t1197*t650*t682;
  t2552 = t1274*t2228;
  t2579 = t2516 + t2552;
  t2595 = t1190*t2382;
  t2599 = -1.*t463*t2579;
  t2621 = t2595 + t2599;
  t2642 = t95*t2621;
  t2719 = -1.*t751*t1569*t1217;
  t2774 = t650*t996;
  t2775 = t2719 + t2774;
  t2795 = -1.*t650*t751;
  t2807 = -1.*t1569*t1217*t996;
  t2817 = t2795 + t2807;
  t2792 = t622*t2775;
  t2818 = -1.*t980*t2817;
  t2839 = t2792 + t2818;
  t2845 = -1.*t1197*t682*t1569;
  t2846 = t980*t2775;
  t2851 = t622*t2817;
  t2852 = t2846 + t2851;
  t2860 = t1274*t2852;
  t2892 = t2845 + t2860;
  t2967 = t622*t682*t751*t1569;
  t2972 = -1.*t682*t980*t1569*t996;
  t2975 = t2967 + t2972;
  t2985 = -1.*t1197*t1569*t1217;
  t2989 = t682*t751*t980*t1569;
  t2992 = t622*t682*t1569*t996;
  t2993 = t2989 + t2992;
  t2997 = t1274*t2993;
  t3007 = t2985 + t2997;
  t3088 = t751*t1569*t1217;
  t3093 = -1.*t650*t996;
  t3097 = t3088 + t3093;
  t3102 = -1.*t980*t3097;
  t3109 = t3102 + t2851;
  t3119 = t622*t3097;
  t3128 = t980*t2817;
  t3136 = t3119 + t3128;
  t3180 = -1.*t682*t1274*t1569;
  t3182 = t980*t3097;
  t3194 = t650*t751;
  t3203 = t1569*t1217*t996;
  t3204 = t3194 + t3203;
  t3209 = t622*t3204;
  t3214 = t3182 + t3209;
  t3217 = t1197*t3214;
  t3226 = t3180 + t3217;
  t3240 = -1.*t622*t3204;
  t3243 = t3102 + t3240;
  t3249 = -1.*t980*t3204;
  t3256 = t3119 + t3249;
  t2680 = t463*t2382;
  t2681 = t1190*t2579;
  t2685 = t2680 + t2681;
  t3344 = t1197*t682*t1569;
  t3355 = t1274*t3214;
  t3358 = t3344 + t3355;
  t3387 = t1190*t3256;
  t3397 = -1.*t463*t3358;
  t3406 = t3387 + t3397;
  t3410 = t95*t3406;
  t3489 = t1274*t1217;
  t3509 = t682*t751*t980;
  t3512 = t622*t682*t996;
  t3530 = t3509 + t3512;
  t3533 = t1197*t3530;
  t3534 = t3489 + t3533;
  t3583 = -1.*t682*t751*t980;
  t3589 = -1.*t622*t682*t996;
  t3593 = t3583 + t3589;
  t3607 = t622*t682*t751;
  t3609 = -1.*t682*t980*t996;
  t3612 = t3607 + t3609;
  t3602 = t463*t3593;
  t3616 = t1190*t1274*t3612;
  t3619 = t3602 + t3616;
  t3627 = t95*t3619;
  t3633 = t1190*t3593;
  t3641 = -1.*t1274*t463*t3612;
  t3644 = t3633 + t3641;
  t3650 = -1.*t1475*t3644;
  t3651 = t3627 + t3650;
  t3658 = -1.*t1197*t1217;
  t3664 = t1274*t3530;
  t3667 = t3658 + t3664;
  t3685 = t1190*t3612;
  t3686 = -1.*t463*t3667;
  t3700 = t3685 + t3686;
  t3701 = t95*t3700;
  t3744 = -1.*t622*t751*t1217;
  t3747 = t980*t1217*t996;
  t3753 = t3744 + t3747;
  t3758 = -1.*t1197*t682;
  t3762 = -1.*t751*t980*t1217;
  t3763 = -1.*t622*t1217*t996;
  t3767 = t3762 + t3763;
  t3769 = t1274*t3767;
  t3776 = t3758 + t3769;
  t1147 = t463*t1145;
  t1415 = t1190*t1402;
  t1431 = t1147 + t1415;
  t1479 = t1190*t1145;
  t1537 = -1.*t463*t1402;
  t1539 = t1479 + t1537;
  t1723 = t463*t1688;
  t1812 = t1190*t1274*t1778;
  t1819 = t1723 + t1812;
  t1887 = t1190*t1688;
  t1888 = -1.*t1274*t463*t1778;
  t1891 = t1887 + t1888;
  t2340 = t463*t2306;
  t2384 = t1190*t1274*t2382;
  t2385 = t2340 + t2384;
  t2403 = t1190*t2306;
  t2409 = -1.*t1274*t463*t2382;
  t2434 = t2403 + t2409;
  t2514 = -1.*t463*t2382;
  t2583 = -1.*t1190*t2579;
  t2584 = t2514 + t2583;
  t3987 = t1475*t2621;
  t2843 = t463*t2839;
  t2905 = t1190*t2892;
  t2906 = t2843 + t2905;
  t2912 = t1190*t2839;
  t2930 = -1.*t463*t2892;
  t2935 = t2912 + t2930;
  t2979 = t463*t2975;
  t3021 = t1190*t3007;
  t3027 = t2979 + t3021;
  t3044 = t1190*t2975;
  t3053 = -1.*t463*t3007;
  t3068 = t3044 + t3053;
  t3113 = t463*t3109;
  t3138 = t1190*t1274*t3136;
  t3144 = t3113 + t3138;
  t3152 = t1190*t3109;
  t3153 = -1.*t1274*t463*t3136;
  t3157 = t3152 + t3153;
  t3248 = t463*t3243;
  t3269 = t1190*t1274*t3256;
  t3287 = t3248 + t3269;
  t3289 = t1190*t3243;
  t3298 = -1.*t1274*t463*t3256;
  t3299 = t3289 + t3298;
  t2692 = t1475*t2685;
  t2706 = t2692 + t2642;
  t3341 = -1.*t463*t3256;
  t3361 = -1.*t1190*t3358;
  t3367 = t3341 + t3361;
  t3425 = t463*t3256;
  t3429 = t1190*t3358;
  t3439 = t3425 + t3429;
  t4152 = t1475*t3406;
  t4196 = t1475*t3619;
  t4200 = t95*t3644;
  t4201 = t4196 + t4200;
  t3655 = -1.*t463*t3612;
  t3668 = -1.*t1190*t3667;
  t3675 = t3655 + t3668;
  t3723 = t463*t3612;
  t3724 = t1190*t3667;
  t3727 = t3723 + t3724;
  t4237 = t1475*t3700;
  t3754 = t463*t3753;
  t3784 = t1190*t3776;
  t3787 = t3754 + t3784;
  t3793 = t1190*t3753;
  t3807 = -1.*t463*t3776;
  t3819 = t3793 + t3807;
  t4477 = -1.*t622;
  t4481 = 1. + t4477;
  t4494 = -1.*t1197;
  t4496 = 1. + t4494;
  t4525 = -1.*t1190;
  t4532 = 1. + t4525;
  t4578 = -1.*t1475;
  t4581 = 1. + t4578;
  t3865 = t1475*t1431;
  t3867 = t95*t1539;
  t3869 = t3865 + t3867;
  t4504 = -0.135*t4481;
  t4505 = 0.07996*t980;
  t4506 = 0. + t4504 + t4505;
  t4482 = 0.07996*t4481;
  t4490 = 0.135*t980;
  t4491 = 0. + t4482 + t4490;
  t4533 = -0.01004*t4532;
  t4539 = 0.08055*t463;
  t4541 = 0. + t4533 + t4539;
  t4509 = -0.135*t4496;
  t4512 = 0.08055*t1274;
  t4519 = 0. + t4509 + t4512;
  t4563 = -0.08055*t4532;
  t4571 = -0.01004*t463;
  t4575 = 0. + t4563 + t4571;
  t4583 = -0.08055*t4581;
  t4584 = -0.13004*t95;
  t4585 = 0. + t4583 + t4584;
  t4591 = -0.13004*t4581;
  t4595 = 0.08055*t95;
  t4596 = 0. + t4591 + t4595;
  t3892 = t1475*t1819;
  t3896 = t95*t1891;
  t3901 = t3892 + t3896;
  t4499 = -0.135*t1274;
  t3925 = t1190*t1475*t2232;
  t3931 = -1.*t463*t95*t2232;
  t3955 = t3925 + t3931;
  t3961 = t1475*t2385;
  t3966 = t95*t2434;
  t3975 = t3961 + t3966;
  t3985 = t95*t2584;
  t3999 = t3985 + t3987;
  t4004 = -1.*t95*t2685;
  t4005 = t4004 + t3987;
  t5001 = -1.*t95*t2621;
  t4497 = -0.08055*t4496;
  t4500 = 0. + t4497 + t4499;
  t4031 = t1475*t2906;
  t4032 = t95*t2935;
  t4034 = t4031 + t4032;
  t4044 = t1475*t3027;
  t4046 = t95*t3068;
  t4051 = t4044 + t4046;
  t4062 = t1475*t3144;
  t4064 = t95*t3157;
  t4067 = t4062 + t4064;
  t4698 = -0.135*t1197;
  t4704 = -0.08055*t1274;
  t4705 = t4698 + t4704;
  t4721 = 0.08055*t1197;
  t4727 = t4721 + t4499;
  t4083 = t1190*t1475*t3226;
  t4100 = -1.*t463*t95*t3226;
  t4103 = t4083 + t4100;
  t4812 = 0.135*t622;
  t4813 = t4812 + t4505;
  t4818 = 0.07996*t622;
  t4835 = -0.135*t980;
  t4836 = t4818 + t4835;
  t4108 = t1475*t3287;
  t4110 = t95*t3299;
  t4128 = t4108 + t4110;
  t4947 = 0.08055*t1190;
  t4953 = t4947 + t4571;
  t4956 = -0.01004*t1190;
  t4957 = -0.08055*t463;
  t4960 = t4956 + t4957;
  t4150 = t95*t3367;
  t4157 = t4150 + t4152;
  t5028 = -0.13004*t1475;
  t5031 = -0.08055*t95;
  t5036 = t5028 + t5031;
  t5042 = 0.08055*t1475;
  t5044 = t5042 + t4584;
  t4166 = -1.*t95*t3439;
  t4167 = t4166 + t4152;
  t5513 = -1.*t95*t3406;
  t4174 = t1190*t1475*t3534;
  t4183 = -1.*t463*t95*t3534;
  t4185 = t4174 + t4183;
  t5631 = t4541*t3593;
  t5632 = -0.1327*t1197*t3612;
  t5635 = t4519*t3612;
  t5638 = t1274*t4575*t3612;
  t5641 = t4585*t3619;
  t5645 = t4596*t3644;
  t5648 = -1.*t95*t3619;
  t5650 = t1475*t3644;
  t5656 = t5648 + t5650;
  t5659 = -0.15304*t5656;
  t5664 = -0.04845*t4201;
  t4233 = t95*t3675;
  t4239 = t4233 + t4237;
  t4249 = -1.*t95*t3727;
  t4253 = t4249 + t4237;
  t5698 = -1.*t95*t3700;
  t4269 = t1475*t3787;
  t4270 = t95*t3819;
  t4288 = t4269 + t4270;
  p_output1[0]=(-1.*t1475*t2935 + t2906*t95)*var2[3] + (-1.*t1475*t1539 + t1431*t95)*var2[4] + (-1.*t1475*t1891 + t1819*t95)*var2[5] + (-1.*t1475*t2434 + t2385*t95)*var2[13] + (t1475*t2232*t463 + t1190*t2232*t95)*var2[14] + (-1.*t1475*t2584 + t2642)*var2[15] + t2706*var2[16];
  p_output1[1]=(-1.*t1475*t2621 + t2685*t95)*var2[3] + (-1.*t1475*t3068 + t3027*t95)*var2[4] + (-1.*t1475*t3157 + t3144*t95)*var2[5] + (-1.*t1475*t3299 + t3287*t95)*var2[13] + (t1475*t3226*t463 + t1190*t3226*t95)*var2[14] + (-1.*t1475*t3367 + t3410)*var2[15] + (t3410 + t1475*t3439)*var2[16];
  p_output1[2]=(-1.*t1475*t3819 + t3787*t95)*var2[4] + t3651*var2[5] + t3651*var2[13] + (t1475*t3534*t463 + t1190*t3534*t95)*var2[14] + (-1.*t1475*t3675 + t3701)*var2[15] + (t3701 + t1475*t3727)*var2[16];
  p_output1[3]=0;
  p_output1[4]=t4034*var2[3] + t3869*var2[4] + t3901*var2[5] + t3975*var2[13] + t3955*var2[14] + t3999*var2[15] + t4005*var2[16];
  p_output1[5]=t2706*var2[3] + t4051*var2[4] + t4067*var2[5] + t4128*var2[13] + t4103*var2[14] + t4157*var2[15] + t4167*var2[16];
  p_output1[6]=t4288*var2[4] + t4201*var2[5] + t4201*var2[13] + t4185*var2[14] + t4239*var2[15] + t4253*var2[16];
  p_output1[7]=0;
  p_output1[8]=(-1.*t1197*t2852 + t3180)*var2[3] + (-1.*t1197*t1371 - 1.*t1217*t1274*t650)*var2[4] - 1.*t1197*t1778*var2[5] - 1.*t1197*t2382*var2[13] + t2579*var2[14];
  p_output1[9]=(-1.*t1197*t2228 + t1274*t650*t682)*var2[3] + (-1.*t1217*t1274*t1569 - 1.*t1197*t2993)*var2[4] - 1.*t1197*t3136*var2[5] - 1.*t1197*t3256*var2[13] + t3358*var2[14];
  p_output1[10]=(-1.*t1197*t3767 - 1.*t1274*t682)*var2[4] - 1.*t1197*t3612*var2[5] - 1.*t1197*t3612*var2[13] + t3667*var2[14];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.04845*t4034 + t2775*t4491 + t2817*t4506 + t2852*t4519 + t2839*t4541 + t2892*t4575 + t2906*t4585 + t2935*t4596 - 1.*t1569*t4500*t682 - 0.1327*(t1197*t2852 + t1274*t1569*t682) - 0.15304*(t1475*t2935 - 1.*t2906*t95))*var2[3] + (-0.04845*t3869 + t1371*t4519 + t1145*t4541 + t1402*t4575 + t1431*t4585 + t1539*t4596 - 1.*t1217*t4500*t650 - 0.1327*(t1197*t1371 + t1217*t1274*t650) + t4491*t650*t682*t751 - 0.15304*(t1475*t1539 - 1.*t1431*t95) + t4506*t650*t682*t996)*var2[4] + (-0.1327*t1197*t1778 - 0.04845*t3901 + t1665*t4491 + t1604*t4506 + t1778*t4519 + t1688*t4541 + t1274*t1778*t4575 + t1819*t4585 + t1891*t4596 - 0.15304*(t1475*t1891 - 1.*t1819*t95))*var2[5] + (-0.1327*t1197*t2382 - 0.04845*t3975 + t2382*t4519 + t2306*t4541 + t1274*t2382*t4575 + t2385*t4585 + t2434*t4596 + t1604*t4813 + t2154*t4836 - 0.15304*(t1475*t2434 - 1.*t2385*t95))*var2[13] + (-0.04845*t3955 + t2232*t4575 + t1190*t2232*t4585 - 1.*t2232*t4596*t463 + t2228*t4727 + t4705*t650*t682 - 0.1327*(-1.*t1274*t2228 - 1.*t1197*t650*t682) - 0.15304*(-1.*t1475*t2232*t463 - 1.*t1190*t2232*t95))*var2[14] + (-0.04845*t3999 + t2621*t4585 + t2584*t4596 + t2382*t4953 + t2579*t4960 - 0.15304*(t1475*t2584 + t5001))*var2[15] + (-0.04845*t4005 - 0.15304*(-1.*t1475*t2685 + t5001) + t2685*t5036 + t2621*t5044)*var2[16];
  p_output1[13]=var2[1] + (-0.1327*t2232 - 0.04845*t2706 - 0.15304*t4005 + t1604*t4491 + t2154*t4506 + t2228*t4519 + t2382*t4541 + t2579*t4575 + t2685*t4585 + t2621*t4596 + t4500*t650*t682)*var2[3] + (-0.1327*(t1217*t1274*t1569 + t1197*t2993) - 0.04845*t4051 - 1.*t1217*t1569*t4500 + t2993*t4519 + t2975*t4541 + t3007*t4575 + t3027*t4585 + t3068*t4596 + t1569*t4491*t682*t751 - 0.15304*(t1475*t3068 - 1.*t3027*t95) + t1569*t4506*t682*t996)*var2[4] + (-0.1327*t1197*t3136 - 0.04845*t4067 + t2817*t4491 + t3097*t4506 + t3136*t4519 + t3109*t4541 + t1274*t3136*t4575 + t3144*t4585 + t3157*t4596 - 0.15304*(t1475*t3157 - 1.*t3144*t95))*var2[5] + (-0.1327*t1197*t3256 - 0.04845*t4128 + t3256*t4519 + t3243*t4541 + t1274*t3256*t4575 + t3287*t4585 + t3299*t4596 + t3097*t4813 + t3204*t4836 - 0.15304*(t1475*t3299 - 1.*t3287*t95))*var2[13] + (-0.1327*(t2845 - 1.*t1274*t3214) - 0.04845*t4103 + t3226*t4575 + t1190*t3226*t4585 - 1.*t3226*t4596*t463 + t3214*t4727 + t1569*t4705*t682 - 0.15304*(-1.*t1475*t3226*t463 - 1.*t1190*t3226*t95))*var2[14] + (-0.04845*t4157 + t3406*t4585 + t3367*t4596 + t3256*t4953 + t3358*t4960 - 0.15304*(t1475*t3367 + t5513))*var2[15] + (-0.04845*t4167 + t3439*t5036 + t3406*t5044 - 0.15304*(-1.*t1475*t3439 + t5513))*var2[16];
  p_output1[14]=var2[2] + (-0.04845*t4288 + t3767*t4519 + t3753*t4541 + t3776*t4575 + t3787*t4585 + t3819*t4596 - 1.*t4500*t682 - 0.1327*(t1197*t3767 + t1274*t682) - 1.*t1217*t4491*t751 - 0.15304*(t1475*t3819 - 1.*t3787*t95) - 1.*t1217*t4506*t996)*var2[4] + (t5631 + t5632 + t5635 + t5638 + t5641 + t5645 + t5659 + t5664 + t4506*t682*t751 - 1.*t4491*t682*t996)*var2[5] + (t5631 + t5632 + t5635 + t5638 + t5641 + t5645 + t5659 + t5664 + t4813*t682*t751 + t4836*t682*t996)*var2[13] + (-0.1327*(t1197*t1217 - 1.*t1274*t3530) - 0.04845*t4185 + t3534*t4575 + t1190*t3534*t4585 - 1.*t3534*t4596*t463 - 1.*t1217*t4705 + t3530*t4727 - 0.15304*(-1.*t1475*t3534*t463 - 1.*t1190*t3534*t95))*var2[14] + (-0.04845*t4239 + t3700*t4585 + t3675*t4596 + t3612*t4953 + t3667*t4960 - 0.15304*(t1475*t3675 + t5698))*var2[15] + (-0.04845*t4253 + t3727*t5036 + t3700*t5044 - 0.15304*(-1.*t1475*t3727 + t5698))*var2[16];
  p_output1[15]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dT_RightKnee_mex.hh"

namespace SymExpression
{

void dT_RightKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
