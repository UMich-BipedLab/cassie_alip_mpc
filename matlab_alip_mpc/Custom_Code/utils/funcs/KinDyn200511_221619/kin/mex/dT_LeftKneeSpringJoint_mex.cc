/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:47 GMT-04:00
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
  double t688;
  double t597;
  double t722;
  double t615;
  double t750;
  double t317;
  double t488;
  double t641;
  double t801;
  double t802;
  double t880;
  double t893;
  double t967;
  double t992;
  double t1001;
  double t1010;
  double t1029;
  double t1030;
  double t1058;
  double t1091;
  double t1106;
  double t1109;
  double t1138;
  double t124;
  double t133;
  double t1144;
  double t51;
  double t1295;
  double t1309;
  double t1318;
  double t1355;
  double t1372;
  double t1376;
  double t1276;
  double t1320;
  double t1343;
  double t1206;
  double t1352;
  double t1414;
  double t1427;
  double t1461;
  double t1462;
  double t1488;
  double t1637;
  double t1652;
  double t1625;
  double t1630;
  double t1632;
  double t1656;
  double t1674;
  double t1686;
  double t1698;
  double t1699;
  double t1874;
  double t1875;
  double t1893;
  double t1805;
  double t1820;
  double t1822;
  double t1836;
  double t1841;
  double t1859;
  double t1864;
  double t1896;
  double t1901;
  double t1913;
  double t1918;
  double t1922;
  double t2111;
  double t2112;
  double t2151;
  double t2078;
  double t2084;
  double t2095;
  double t2199;
  double t2238;
  double t2292;
  double t2075;
  double t2105;
  double t2179;
  double t2182;
  double t2184;
  double t2193;
  double t2195;
  double t2293;
  double t2308;
  double t2327;
  double t2335;
  double t2344;
  double t2428;
  double t2436;
  double t2439;
  double t2444;
  double t2457;
  double t2467;
  double t2478;
  double t2485;
  double t2497;
  double t2502;
  double t2611;
  double t2631;
  double t2636;
  double t2541;
  double t2644;
  double t2647;
  double t2649;
  double t2764;
  double t2793;
  double t2799;
  double t2800;
  double t2802;
  double t2807;
  double t2810;
  double t2816;
  double t2834;
  double t2840;
  double t2842;
  double t2859;
  double t2972;
  double t2973;
  double t2934;
  double t2935;
  double t2938;
  double t2953;
  double t2974;
  double t2980;
  double t2986;
  double t2998;
  double t3007;
  double t3035;
  double t3039;
  double t3032;
  double t3033;
  double t3034;
  double t3044;
  double t3045;
  double t3055;
  double t3065;
  double t3068;
  double t3124;
  double t3126;
  double t3137;
  double t3109;
  double t3111;
  double t3116;
  double t3117;
  double t3120;
  double t3121;
  double t3123;
  double t3138;
  double t3145;
  double t3167;
  double t3171;
  double t3172;
  double t3236;
  double t3237;
  double t3248;
  double t3249;
  double t3256;
  double t3257;
  double t3266;
  double t3269;
  double t3270;
  double t3275;
  double t3308;
  double t3309;
  double t3317;
  double t3286;
  double t3323;
  double t3324;
  double t3332;
  double t2701;
  double t2728;
  double t2729;
  double t3414;
  double t3415;
  double t3416;
  double t3418;
  double t3419;
  double t3423;
  double t3494;
  double t3512;
  double t3528;
  double t3488;
  double t3490;
  double t3492;
  double t3493;
  double t3529;
  double t3532;
  double t3536;
  double t3538;
  double t3546;
  double t3535;
  double t3548;
  double t3550;
  double t3554;
  double t3556;
  double t3557;
  double t3563;
  double t3565;
  double t3575;
  double t3598;
  double t3629;
  double t3635;
  double t3646;
  double t3654;
  double t3658;
  double t3679;
  double t3682;
  double t3688;
  double t3698;
  double t3747;
  double t3763;
  double t3765;
  double t3708;
  double t3768;
  double t3773;
  double t3775;
  double t3866;
  double t3867;
  double t3868;
  double t3826;
  double t3830;
  double t3832;
  double t3836;
  double t3843;
  double t3860;
  double t3863;
  double t3871;
  double t3884;
  double t3889;
  double t3893;
  double t3899;
  double t1115;
  double t1149;
  double t1169;
  double t1216;
  double t1234;
  double t1235;
  double t1430;
  double t1505;
  double t1526;
  double t1551;
  double t1584;
  double t1594;
  double t1675;
  double t1700;
  double t1706;
  double t1743;
  double t1773;
  double t1787;
  double t1905;
  double t1948;
  double t1962;
  double t1974;
  double t1978;
  double t1988;
  double t2316;
  double t2361;
  double t2369;
  double t2383;
  double t2385;
  double t2388;
  double t2470;
  double t2518;
  double t2539;
  double t2550;
  double t2656;
  double t2666;
  double t4104;
  double t2871;
  double t2874;
  double t2883;
  double t2917;
  double t2921;
  double t2927;
  double t2984;
  double t3009;
  double t3015;
  double t3022;
  double t3024;
  double t3025;
  double t3049;
  double t3072;
  double t3076;
  double t3081;
  double t3082;
  double t3088;
  double t3159;
  double t3191;
  double t3196;
  double t3219;
  double t3220;
  double t3221;
  double t3260;
  double t3282;
  double t3285;
  double t3287;
  double t3340;
  double t3341;
  double t4298;
  double t3360;
  double t3373;
  double t3382;
  double t2733;
  double t2741;
  double t3428;
  double t3430;
  double t3434;
  double t3443;
  double t3450;
  double t3456;
  double t4366;
  double t4367;
  double t4368;
  double t3665;
  double t3699;
  double t3704;
  double t3717;
  double t3779;
  double t3780;
  double t4388;
  double t3794;
  double t3799;
  double t3801;
  double t3887;
  double t3905;
  double t3909;
  double t3924;
  double t3929;
  double t3933;
  double t4696;
  double t4698;
  double t4812;
  double t4814;
  double t3968;
  double t3973;
  double t3982;
  double t4923;
  double t4943;
  double t4752;
  double t4754;
  double t4755;
  double t4760;
  double t4761;
  double t4699;
  double t4714;
  double t4724;
  double t4766;
  double t4777;
  double t4794;
  double t4825;
  double t4830;
  double t4833;
  double t4847;
  double t4854;
  double t4856;
  double t3988;
  double t3993;
  double t4002;
  double t4983;
  double t5000;
  double t5004;
  double t5009;
  double t5014;
  double t5022;
  double t5030;
  double t5034;
  double t5038;
  double t4006;
  double t4017;
  double t4021;
  double t4946;
  double t4950;
  double t4960;
  double t4976;
  double t4986;
  double t4678;
  double t4031;
  double t4033;
  double t4037;
  double t5247;
  double t5253;
  double t4055;
  double t4057;
  double t4062;
  double t4076;
  double t4079;
  double t4091;
  double t4107;
  double t4112;
  double t5643;
  double t4140;
  double t4145;
  double t4655;
  double t4665;
  double t4667;
  double t4673;
  double t4688;
  double t4169;
  double t4176;
  double t4184;
  double t4195;
  double t4218;
  double t4220;
  double t5125;
  double t5135;
  double t5146;
  double t5147;
  double t5148;
  double t4230;
  double t4249;
  double t4250;
  double t4265;
  double t4269;
  double t4272;
  double t5499;
  double t5505;
  double t5507;
  double t5510;
  double t5516;
  double t4277;
  double t4278;
  double t4279;
  double t5592;
  double t5594;
  double t5600;
  double t5611;
  double t5612;
  double t4299;
  double t4302;
  double t5696;
  double t5697;
  double t5703;
  double t5708;
  double t5727;
  double t6266;
  double t4320;
  double t4322;
  double t4348;
  double t4350;
  double t4351;
  double t6470;
  double t6471;
  double t6473;
  double t6474;
  double t6491;
  double t6492;
  double t6494;
  double t6498;
  double t6506;
  double t6510;
  double t6516;
  double t6520;
  double t6525;
  double t4379;
  double t4380;
  double t4382;
  double t4396;
  double t4408;
  double t6623;
  double t4420;
  double t4429;
  double t4445;
  double t4455;
  double t4458;
  t688 = Cos(var1[3]);
  t597 = Cos(var1[5]);
  t722 = Sin(var1[4]);
  t615 = Sin(var1[3]);
  t750 = Sin(var1[5]);
  t317 = Cos(var1[7]);
  t488 = Cos(var1[6]);
  t641 = -1.*t597*t615;
  t801 = t688*t722*t750;
  t802 = t641 + t801;
  t880 = t488*t802;
  t893 = t688*t597*t722;
  t967 = t615*t750;
  t992 = t893 + t967;
  t1001 = Sin(var1[6]);
  t1010 = t992*t1001;
  t1029 = t880 + t1010;
  t1030 = t317*t1029;
  t1058 = Cos(var1[4]);
  t1091 = Sin(var1[7]);
  t1106 = -1.*t688*t1058*t1091;
  t1109 = t1030 + t1106;
  t1138 = Cos(var1[9]);
  t124 = Cos(var1[8]);
  t133 = Sin(var1[9]);
  t1144 = Sin(var1[8]);
  t51 = Cos(var1[10]);
  t1295 = t597*t615;
  t1309 = -1.*t688*t722*t750;
  t1318 = t1295 + t1309;
  t1355 = t488*t1318;
  t1372 = -1.*t992*t1001;
  t1376 = t1355 + t1372;
  t1276 = t488*t992;
  t1320 = t1318*t1001;
  t1343 = t1276 + t1320;
  t1206 = Sin(var1[10]);
  t1352 = t124*t1343*t1091;
  t1414 = t1376*t1144;
  t1427 = t1352 + t1414;
  t1461 = t124*t1376;
  t1462 = -1.*t1343*t1091*t1144;
  t1488 = t1461 + t1462;
  t1637 = -1.*t488*t802;
  t1652 = t1637 + t1372;
  t1625 = -1.*t802*t1001;
  t1630 = t1276 + t1625;
  t1632 = t124*t1630*t1091;
  t1656 = t1652*t1144;
  t1674 = t1632 + t1656;
  t1686 = t124*t1652;
  t1698 = -1.*t1630*t1091*t1144;
  t1699 = t1686 + t1698;
  t1874 = t688*t1058*t597*t488;
  t1875 = -1.*t688*t1058*t750*t1001;
  t1893 = t1874 + t1875;
  t1805 = -1.*t688*t317*t722;
  t1820 = t688*t1058*t488*t750;
  t1822 = t688*t1058*t597*t1001;
  t1836 = t1820 + t1822;
  t1841 = t1836*t1091;
  t1859 = t1805 + t1841;
  t1864 = t124*t1859;
  t1896 = t1893*t1144;
  t1901 = t1864 + t1896;
  t1913 = t124*t1893;
  t1918 = -1.*t1859*t1144;
  t1922 = t1913 + t1918;
  t2111 = -1.*t597*t615*t722;
  t2112 = t688*t750;
  t2151 = t2111 + t2112;
  t2078 = -1.*t688*t597;
  t2084 = -1.*t615*t722*t750;
  t2095 = t2078 + t2084;
  t2199 = t488*t2151;
  t2238 = -1.*t2095*t1001;
  t2292 = t2199 + t2238;
  t2075 = -1.*t1058*t317*t615;
  t2105 = t488*t2095;
  t2179 = t2151*t1001;
  t2182 = t2105 + t2179;
  t2184 = t2182*t1091;
  t2193 = t2075 + t2184;
  t2195 = t124*t2193;
  t2293 = t2292*t1144;
  t2308 = t2195 + t2293;
  t2327 = t124*t2292;
  t2335 = -1.*t2193*t1144;
  t2344 = t2327 + t2335;
  t2428 = t688*t1058*t317;
  t2436 = t1029*t1091;
  t2439 = t2428 + t2436;
  t2444 = -1.*t124*t2439;
  t2457 = -1.*t1630*t1144;
  t2467 = t2444 + t2457;
  t2478 = t124*t1630;
  t2485 = -1.*t2439*t1144;
  t2497 = t2478 + t2485;
  t2502 = t1138*t2497;
  t2611 = t124*t2439;
  t2631 = t1630*t1144;
  t2636 = t2611 + t2631;
  t2541 = -1.*t133*t2497;
  t2644 = -1.*t133*t2636;
  t2647 = t2644 + t2502;
  t2649 = t1206*t2647;
  t2764 = t688*t597;
  t2793 = t615*t722*t750;
  t2799 = t2764 + t2793;
  t2800 = t488*t2799;
  t2802 = t597*t615*t722;
  t2807 = -1.*t688*t750;
  t2810 = t2802 + t2807;
  t2816 = t2810*t1001;
  t2834 = t2800 + t2816;
  t2840 = t317*t2834;
  t2842 = -1.*t1058*t615*t1091;
  t2859 = t2840 + t2842;
  t2972 = -1.*t2810*t1001;
  t2973 = t2105 + t2972;
  t2934 = t488*t2810;
  t2935 = t2095*t1001;
  t2938 = t2934 + t2935;
  t2953 = t124*t2938*t1091;
  t2974 = t2973*t1144;
  t2980 = t2953 + t2974;
  t2986 = t124*t2973;
  t2998 = -1.*t2938*t1091*t1144;
  t3007 = t2986 + t2998;
  t3035 = -1.*t488*t2799;
  t3039 = t3035 + t2972;
  t3032 = -1.*t2799*t1001;
  t3033 = t2934 + t3032;
  t3034 = t124*t3033*t1091;
  t3044 = t3039*t1144;
  t3045 = t3034 + t3044;
  t3055 = t124*t3039;
  t3065 = -1.*t3033*t1091*t1144;
  t3068 = t3055 + t3065;
  t3124 = t1058*t597*t488*t615;
  t3126 = -1.*t1058*t615*t750*t1001;
  t3137 = t3124 + t3126;
  t3109 = -1.*t317*t615*t722;
  t3111 = t1058*t488*t615*t750;
  t3116 = t1058*t597*t615*t1001;
  t3117 = t3111 + t3116;
  t3120 = t3117*t1091;
  t3121 = t3109 + t3120;
  t3123 = t124*t3121;
  t3138 = t3137*t1144;
  t3145 = t3123 + t3138;
  t3167 = t124*t3137;
  t3171 = -1.*t3121*t1144;
  t3172 = t3167 + t3171;
  t3236 = t1058*t317*t615;
  t3237 = t2834*t1091;
  t3248 = t3236 + t3237;
  t3249 = -1.*t124*t3248;
  t3256 = -1.*t3033*t1144;
  t3257 = t3249 + t3256;
  t3266 = t124*t3033;
  t3269 = -1.*t3248*t1144;
  t3270 = t3266 + t3269;
  t3275 = t1138*t3270;
  t3308 = t124*t3248;
  t3309 = t3033*t1144;
  t3317 = t3308 + t3309;
  t3286 = -1.*t133*t3270;
  t3323 = -1.*t133*t3317;
  t3324 = t3323 + t3275;
  t3332 = t1206*t3324;
  t2701 = t1138*t2636;
  t2728 = t133*t2497;
  t2729 = t2701 + t2728;
  t3414 = t1058*t488*t750;
  t3415 = t1058*t597*t1001;
  t3416 = t3414 + t3415;
  t3418 = t317*t3416;
  t3419 = t722*t1091;
  t3423 = t3418 + t3419;
  t3494 = -1.*t1058*t488*t750;
  t3512 = -1.*t1058*t597*t1001;
  t3528 = t3494 + t3512;
  t3488 = t1058*t597*t488;
  t3490 = -1.*t1058*t750*t1001;
  t3492 = t3488 + t3490;
  t3493 = t124*t3492*t1091;
  t3529 = t3528*t1144;
  t3532 = t3493 + t3529;
  t3536 = t124*t3528;
  t3538 = -1.*t3492*t1091*t1144;
  t3546 = t3536 + t3538;
  t3535 = -1.*t133*t3532;
  t3548 = t1138*t3546;
  t3550 = t3535 + t3548;
  t3554 = -1.*t51*t3550;
  t3556 = t1138*t3532;
  t3557 = t133*t3546;
  t3563 = t3556 + t3557;
  t3565 = t1206*t3563;
  t3575 = t3554 + t3565;
  t3598 = -1.*t317*t722;
  t3629 = t3416*t1091;
  t3635 = t3598 + t3629;
  t3646 = -1.*t124*t3635;
  t3654 = -1.*t3492*t1144;
  t3658 = t3646 + t3654;
  t3679 = t124*t3492;
  t3682 = -1.*t3635*t1144;
  t3688 = t3679 + t3682;
  t3698 = t1138*t3688;
  t3747 = t124*t3635;
  t3763 = t3492*t1144;
  t3765 = t3747 + t3763;
  t3708 = -1.*t133*t3688;
  t3768 = -1.*t133*t3765;
  t3773 = t3768 + t3698;
  t3775 = t1206*t3773;
  t3866 = -1.*t597*t488*t722;
  t3867 = t722*t750*t1001;
  t3868 = t3866 + t3867;
  t3826 = -1.*t1058*t317;
  t3830 = -1.*t488*t722*t750;
  t3832 = -1.*t597*t722*t1001;
  t3836 = t3830 + t3832;
  t3843 = t3836*t1091;
  t3860 = t3826 + t3843;
  t3863 = t124*t3860;
  t3871 = t3868*t1144;
  t3884 = t3863 + t3871;
  t3889 = t124*t3868;
  t3893 = -1.*t3860*t1144;
  t3899 = t3889 + t3893;
  t1115 = -1.*t124*t133*t1109;
  t1149 = -1.*t1138*t1109*t1144;
  t1169 = t1115 + t1149;
  t1216 = t1138*t124*t1109;
  t1234 = -1.*t133*t1109*t1144;
  t1235 = t1216 + t1234;
  t1430 = -1.*t133*t1427;
  t1505 = t1138*t1488;
  t1526 = t1430 + t1505;
  t1551 = t1138*t1427;
  t1584 = t133*t1488;
  t1594 = t1551 + t1584;
  t1675 = -1.*t133*t1674;
  t1700 = t1138*t1699;
  t1706 = t1675 + t1700;
  t1743 = t1138*t1674;
  t1773 = t133*t1699;
  t1787 = t1743 + t1773;
  t1905 = -1.*t133*t1901;
  t1948 = t1138*t1922;
  t1962 = t1905 + t1948;
  t1974 = t1138*t1901;
  t1978 = t133*t1922;
  t1988 = t1974 + t1978;
  t2316 = -1.*t133*t2308;
  t2361 = t1138*t2344;
  t2369 = t2316 + t2361;
  t2383 = t1138*t2308;
  t2385 = t133*t2344;
  t2388 = t2383 + t2385;
  t2470 = t133*t2467;
  t2518 = t2470 + t2502;
  t2539 = t1138*t2467;
  t2550 = t2539 + t2541;
  t2656 = -1.*t1138*t2636;
  t2666 = t2656 + t2541;
  t4104 = t51*t2647;
  t2871 = -1.*t124*t133*t2859;
  t2874 = -1.*t1138*t2859*t1144;
  t2883 = t2871 + t2874;
  t2917 = t1138*t124*t2859;
  t2921 = -1.*t133*t2859*t1144;
  t2927 = t2917 + t2921;
  t2984 = -1.*t133*t2980;
  t3009 = t1138*t3007;
  t3015 = t2984 + t3009;
  t3022 = t1138*t2980;
  t3024 = t133*t3007;
  t3025 = t3022 + t3024;
  t3049 = -1.*t133*t3045;
  t3072 = t1138*t3068;
  t3076 = t3049 + t3072;
  t3081 = t1138*t3045;
  t3082 = t133*t3068;
  t3088 = t3081 + t3082;
  t3159 = -1.*t133*t3145;
  t3191 = t1138*t3172;
  t3196 = t3159 + t3191;
  t3219 = t1138*t3145;
  t3220 = t133*t3172;
  t3221 = t3219 + t3220;
  t3260 = t133*t3257;
  t3282 = t3260 + t3275;
  t3285 = t1138*t3257;
  t3287 = t3285 + t3286;
  t3340 = -1.*t1138*t3317;
  t3341 = t3340 + t3286;
  t4298 = t51*t3324;
  t3360 = t1138*t3317;
  t3373 = t133*t3270;
  t3382 = t3360 + t3373;
  t2733 = t51*t2729;
  t2741 = t2649 + t2733;
  t3428 = -1.*t124*t133*t3423;
  t3430 = -1.*t1138*t3423*t1144;
  t3434 = t3428 + t3430;
  t3443 = t1138*t124*t3423;
  t3450 = -1.*t133*t3423*t1144;
  t3456 = t3443 + t3450;
  t4366 = t1206*t3550;
  t4367 = t51*t3563;
  t4368 = t4366 + t4367;
  t3665 = t133*t3658;
  t3699 = t3665 + t3698;
  t3704 = t1138*t3658;
  t3717 = t3704 + t3708;
  t3779 = -1.*t1138*t3765;
  t3780 = t3779 + t3708;
  t4388 = t51*t3773;
  t3794 = t1138*t3765;
  t3799 = t133*t3688;
  t3801 = t3794 + t3799;
  t3887 = -1.*t133*t3884;
  t3905 = t1138*t3899;
  t3909 = t3887 + t3905;
  t3924 = t1138*t3884;
  t3929 = t133*t3899;
  t3933 = t3924 + t3929;
  t4696 = -1.*t1138;
  t4698 = 1. + t4696;
  t4812 = -1.*t51;
  t4814 = 1. + t4812;
  t3968 = t1206*t1169;
  t3973 = t51*t1235;
  t3982 = t3968 + t3973;
  t4923 = -1.*t488;
  t4943 = 1. + t4923;
  t4752 = -1.*t124;
  t4754 = 1. + t4752;
  t4755 = -0.08055*t4754;
  t4760 = -0.01004*t1144;
  t4761 = 0. + t4755 + t4760;
  t4699 = -0.08055*t4698;
  t4714 = -0.13004*t133;
  t4724 = 0. + t4699 + t4714;
  t4766 = -0.13004*t4698;
  t4777 = 0.08055*t133;
  t4794 = 0. + t4766 + t4777;
  t4825 = -0.19074*t4814;
  t4830 = 0.03315*t1206;
  t4833 = 0. + t4825 + t4830;
  t4847 = -0.03315*t4814;
  t4854 = -0.19074*t1206;
  t4856 = 0. + t4847 + t4854;
  t3988 = t1206*t1526;
  t3993 = t51*t1594;
  t4002 = t3988 + t3993;
  t4983 = 0.07996*t1001;
  t5000 = -1.*t317;
  t5004 = 1. + t5000;
  t5009 = 0.135*t5004;
  t5014 = 0.08055*t1091;
  t5022 = 0. + t5009 + t5014;
  t5030 = -0.01004*t4754;
  t5034 = 0.08055*t1144;
  t5038 = 0. + t5030 + t5034;
  t4006 = t1206*t1706;
  t4017 = t51*t1787;
  t4021 = t4006 + t4017;
  t4946 = 0.07996*t4943;
  t4950 = -0.135*t1001;
  t4960 = 0. + t4946 + t4950;
  t4976 = 0.135*t4943;
  t4986 = 0. + t4976 + t4983;
  t4678 = 0.135*t1091;
  t4031 = t1206*t1962;
  t4033 = t51*t1988;
  t4037 = t4031 + t4033;
  t5247 = -0.08055*t5004;
  t5253 = 0. + t5247 + t4678;
  t4055 = t1206*t2369;
  t4057 = t51*t2388;
  t4062 = t4055 + t4057;
  t4076 = t51*t2518;
  t4079 = t1206*t2550;
  t4091 = t4076 + t4079;
  t4107 = t1206*t2666;
  t4112 = t4104 + t4107;
  t5643 = -1.*t1206*t2647;
  t4140 = -1.*t1206*t2729;
  t4145 = t4104 + t4140;
  t4655 = 0.135*t317;
  t4665 = -0.08055*t1091;
  t4667 = t4655 + t4665;
  t4673 = 0.08055*t317;
  t4688 = t4673 + t4678;
  t4169 = t1206*t2883;
  t4176 = t51*t2927;
  t4184 = t4169 + t4176;
  t4195 = t1206*t3015;
  t4218 = t51*t3025;
  t4220 = t4195 + t4218;
  t5125 = -0.135*t488;
  t5135 = t5125 + t4983;
  t5146 = 0.07996*t488;
  t5147 = 0.135*t1001;
  t5148 = t5146 + t5147;
  t4230 = t1206*t3076;
  t4249 = t51*t3088;
  t4250 = t4230 + t4249;
  t4265 = t1206*t3196;
  t4269 = t51*t3221;
  t4272 = t4265 + t4269;
  t5499 = -0.01004*t124;
  t5505 = -0.08055*t1144;
  t5507 = t5499 + t5505;
  t5510 = 0.08055*t124;
  t5516 = t5510 + t4760;
  t4277 = t51*t3282;
  t4278 = t1206*t3287;
  t4279 = t4277 + t4278;
  t5592 = -0.13004*t1138;
  t5594 = -0.08055*t133;
  t5600 = t5592 + t5594;
  t5611 = 0.08055*t1138;
  t5612 = t5611 + t4714;
  t4299 = t1206*t3341;
  t4302 = t4298 + t4299;
  t5696 = 0.03315*t51;
  t5697 = t5696 + t4854;
  t5703 = -0.19074*t51;
  t5708 = -0.03315*t1206;
  t5727 = t5703 + t5708;
  t6266 = -1.*t1206*t3324;
  t4320 = -1.*t1206*t3382;
  t4322 = t4298 + t4320;
  t4348 = t1206*t3434;
  t4350 = t51*t3456;
  t4351 = t4348 + t4350;
  t6470 = 0.1305*t317*t3492;
  t6471 = t3492*t5022;
  t6473 = t3492*t1091*t4761;
  t6474 = t3528*t5038;
  t6491 = t4724*t3532;
  t6492 = t4794*t3546;
  t6494 = t4833*t3550;
  t6498 = t4856*t3563;
  t6506 = -0.03315*t4368;
  t6510 = t51*t3550;
  t6516 = -1.*t1206*t3563;
  t6520 = t6510 + t6516;
  t6525 = -0.19074*t6520;
  t4379 = t51*t3699;
  t4380 = t1206*t3717;
  t4382 = t4379 + t4380;
  t4396 = t1206*t3780;
  t4408 = t4388 + t4396;
  t6623 = -1.*t1206*t3773;
  t4420 = -1.*t1206*t3801;
  t4429 = t4388 + t4420;
  t4445 = t1206*t3909;
  t4455 = t51*t3933;
  t4458 = t4445 + t4455;
  p_output1[0]=(t1206*t2388 - 1.*t2369*t51)*var2[3] + (t1206*t1988 - 1.*t1962*t51)*var2[4] + (t1206*t1594 - 1.*t1526*t51)*var2[5] + (t1206*t1787 - 1.*t1706*t51)*var2[6] + (t1206*t1235 - 1.*t1169*t51)*var2[7] + (t1206*t2518 - 1.*t2550*t51)*var2[8] + (t2649 - 1.*t2666*t51)*var2[9] + t2741*var2[10];
  p_output1[1]=(t1206*t2729 - 1.*t2647*t51)*var2[3] + (t1206*t3221 - 1.*t3196*t51)*var2[4] + (t1206*t3025 - 1.*t3015*t51)*var2[5] + (t1206*t3088 - 1.*t3076*t51)*var2[6] + (t1206*t2927 - 1.*t2883*t51)*var2[7] + (t1206*t3282 - 1.*t3287*t51)*var2[8] + (t3332 - 1.*t3341*t51)*var2[9] + (t3332 + t3382*t51)*var2[10];
  p_output1[2]=(t1206*t3933 - 1.*t3909*t51)*var2[4] + t3575*var2[5] + t3575*var2[6] + (t1206*t3456 - 1.*t3434*t51)*var2[7] + (t1206*t3699 - 1.*t3717*t51)*var2[8] + (t3775 - 1.*t3780*t51)*var2[9] + (t3775 + t3801*t51)*var2[10];
  p_output1[3]=0;
  p_output1[4]=t4062*var2[3] + t4037*var2[4] + t4002*var2[5] + t4021*var2[6] + t3982*var2[7] + t4091*var2[8] + t4112*var2[9] + t4145*var2[10];
  p_output1[5]=t2741*var2[3] + t4272*var2[4] + t4220*var2[5] + t4250*var2[6] + t4184*var2[7] + t4279*var2[8] + t4302*var2[9] + t4322*var2[10];
  p_output1[6]=t4458*var2[4] + t4368*var2[5] + t4368*var2[6] + t4351*var2[7] + t4382*var2[8] + t4408*var2[9] + t4429*var2[10];
  p_output1[7]=0;
  p_output1[8]=(t2842 - 1.*t2182*t317)*var2[3] + (-1.*t1836*t317 - 1.*t1091*t688*t722)*var2[4] - 1.*t1343*t317*var2[5] - 1.*t1630*t317*var2[6] + t2439*var2[7];
  p_output1[9]=(-1.*t1029*t317 + t1058*t1091*t688)*var2[3] + (-1.*t3117*t317 - 1.*t1091*t615*t722)*var2[4] - 1.*t2938*t317*var2[5] - 1.*t3033*t317*var2[6] + t3248*var2[7];
  p_output1[10]=(-1.*t1058*t1091 - 1.*t317*t3836)*var2[4] - 1.*t317*t3492*var2[5] - 1.*t317*t3492*var2[6] + t3635*var2[7];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.03315*t4062 + t2308*t4724 + t2193*t4761 + t2344*t4794 + t2369*t4833 + t2388*t4856 + t2151*t4960 + t2095*t4986 + t2182*t5022 + t2292*t5038 - 0.19074*(-1.*t1206*t2388 + t2369*t51) - 1.*t1058*t5253*t615 + 0.1305*(t2182*t317 + t1058*t1091*t615))*var2[3] + (-0.03315*t4037 + t1901*t4724 + t1859*t4761 + t1922*t4794 + t1962*t4833 + t1988*t4856 + t1836*t5022 + t1893*t5038 - 0.19074*(-1.*t1206*t1988 + t1962*t51) + t1058*t4960*t597*t688 - 1.*t5253*t688*t722 + 0.1305*(t1836*t317 + t1091*t688*t722) + t1058*t4986*t688*t750)*var2[4] + (0.1305*t1343*t317 - 0.03315*t4002 + t1427*t4724 + t1091*t1343*t4761 + t1488*t4794 + t1526*t4833 + t1594*t4856 + t1318*t4960 + t1343*t5022 + t1376*t5038 - 0.19074*(-1.*t1206*t1594 + t1526*t51) + t4986*t992)*var2[5] + (0.1305*t1630*t317 - 0.03315*t4021 + t1674*t4724 + t1091*t1630*t4761 + t1699*t4794 + t1706*t4833 + t1787*t4856 + t1630*t5022 + t1652*t5038 - 0.19074*(-1.*t1206*t1787 + t1706*t51) + t5148*t802 + t5135*t992)*var2[6] + (-0.03315*t3982 + t1029*t4688 + t1109*t124*t4724 + t1109*t4761 - 1.*t1109*t1144*t4794 + t1169*t4833 + t1235*t4856 - 0.19074*(-1.*t1206*t1235 + t1169*t51) + t1058*t4667*t688 + 0.1305*(-1.*t1029*t1091 - 1.*t1058*t317*t688))*var2[7] + (-0.03315*t4091 + t2497*t4724 + t2467*t4794 + t2550*t4833 + t2518*t4856 - 0.19074*(-1.*t1206*t2518 + t2550*t51) + t2439*t5507 + t1630*t5516)*var2[8] + (-0.03315*t4112 + t2666*t4833 + t2647*t4856 + t2636*t5600 + t2497*t5612 - 0.19074*(t2666*t51 + t5643))*var2[9] + (-0.03315*t4145 - 0.19074*(-1.*t2729*t51 + t5643) + t2647*t5697 + t2729*t5727)*var2[10];
  p_output1[13]=var2[1] + (0.1305*t1109 - 0.03315*t2741 - 0.19074*t4145 + t2636*t4724 + t2439*t4761 + t2497*t4794 + t2647*t4833 + t2729*t4856 + t1029*t5022 + t1630*t5038 + t1058*t5253*t688 + t4986*t802 + t4960*t992)*var2[3] + (-0.03315*t4272 + t3145*t4724 + t3121*t4761 + t3172*t4794 + t3196*t4833 + t3221*t4856 + t3117*t5022 + t3137*t5038 - 0.19074*(-1.*t1206*t3221 + t3196*t51) + t1058*t4960*t597*t615 - 1.*t5253*t615*t722 + 0.1305*(t3117*t317 + t1091*t615*t722) + t1058*t4986*t615*t750)*var2[4] + (0.1305*t2938*t317 - 0.03315*t4220 + t2980*t4724 + t1091*t2938*t4761 + t3007*t4794 + t3015*t4833 + t3025*t4856 + t2095*t4960 + t2810*t4986 + t2938*t5022 + t2973*t5038 - 0.19074*(-1.*t1206*t3025 + t3015*t51))*var2[5] + (0.1305*t3033*t317 - 0.03315*t4250 + t3045*t4724 + t1091*t3033*t4761 + t3068*t4794 + t3076*t4833 + t3088*t4856 + t3033*t5022 + t3039*t5038 - 0.19074*(-1.*t1206*t3088 + t3076*t51) + t2810*t5135 + t2799*t5148)*var2[6] + (0.1305*(t2075 - 1.*t1091*t2834) - 0.03315*t4184 + t2834*t4688 + t124*t2859*t4724 + t2859*t4761 - 1.*t1144*t2859*t4794 + t2883*t4833 + t2927*t4856 - 0.19074*(-1.*t1206*t2927 + t2883*t51) + t1058*t4667*t615)*var2[7] + (-0.03315*t4279 + t3270*t4724 + t3257*t4794 + t3287*t4833 + t3282*t4856 - 0.19074*(-1.*t1206*t3282 + t3287*t51) + t3248*t5507 + t3033*t5516)*var2[8] + (-0.03315*t4302 + t3341*t4833 + t3324*t4856 + t3317*t5600 + t3270*t5612 - 0.19074*(t3341*t51 + t6266))*var2[9] + (-0.03315*t4322 + t3324*t5697 + t3382*t5727 - 0.19074*(-1.*t3382*t51 + t6266))*var2[10];
  p_output1[14]=var2[2] + (0.1305*(t1058*t1091 + t317*t3836) - 0.03315*t4458 + t3884*t4724 + t3860*t4761 + t3899*t4794 + t3909*t4833 + t3933*t4856 + t3836*t5022 + t3868*t5038 - 0.19074*(-1.*t1206*t3933 + t3909*t51) - 1.*t1058*t5253 - 1.*t4960*t597*t722 - 1.*t4986*t722*t750)*var2[4] + (t1058*t4986*t597 + t6470 + t6471 + t6473 + t6474 + t6491 + t6492 + t6494 + t6498 + t6506 + t6525 - 1.*t1058*t4960*t750)*var2[5] + (t1058*t5135*t597 + t6470 + t6471 + t6473 + t6474 + t6491 + t6492 + t6494 + t6498 + t6506 + t6525 + t1058*t5148*t750)*var2[6] + (-0.03315*t4351 + t3416*t4688 + t124*t3423*t4724 + t3423*t4761 - 1.*t1144*t3423*t4794 + t3434*t4833 + t3456*t4856 - 0.19074*(-1.*t1206*t3456 + t3434*t51) - 1.*t4667*t722 + 0.1305*(-1.*t1091*t3416 + t317*t722))*var2[7] + (-0.03315*t4382 + t3688*t4724 + t3658*t4794 + t3717*t4833 + t3699*t4856 - 0.19074*(-1.*t1206*t3699 + t3717*t51) + t3635*t5507 + t3492*t5516)*var2[8] + (-0.03315*t4408 + t3780*t4833 + t3773*t4856 + t3765*t5600 + t3688*t5612 - 0.19074*(t3780*t51 + t6623))*var2[9] + (-0.03315*t4429 + t3773*t5697 + t3801*t5727 - 0.19074*(-1.*t3801*t51 + t6623))*var2[10];
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

#include "dT_LeftKneeSpringJoint_mex.hh"

namespace SymExpression
{

void dT_LeftKneeSpringJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
