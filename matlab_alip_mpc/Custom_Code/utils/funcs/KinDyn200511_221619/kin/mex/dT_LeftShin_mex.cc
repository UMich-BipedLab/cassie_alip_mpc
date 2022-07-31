/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:46 GMT-04:00
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
  double t677;
  double t632;
  double t695;
  double t650;
  double t734;
  double t441;
  double t557;
  double t661;
  double t804;
  double t818;
  double t826;
  double t861;
  double t870;
  double t906;
  double t950;
  double t956;
  double t968;
  double t991;
  double t1000;
  double t1014;
  double t1018;
  double t1021;
  double t1030;
  double t371;
  double t438;
  double t1071;
  double t285;
  double t1285;
  double t1289;
  double t1295;
  double t1353;
  double t1358;
  double t1387;
  double t1239;
  double t1299;
  double t1312;
  double t1126;
  double t1336;
  double t1391;
  double t1413;
  double t1445;
  double t1480;
  double t1495;
  double t1730;
  double t1753;
  double t1711;
  double t1720;
  double t1721;
  double t1768;
  double t1784;
  double t1798;
  double t1801;
  double t1806;
  double t2004;
  double t2011;
  double t2022;
  double t1935;
  double t1960;
  double t1962;
  double t1985;
  double t1990;
  double t1992;
  double t1998;
  double t2029;
  double t2044;
  double t2065;
  double t2072;
  double t2096;
  double t2259;
  double t2281;
  double t2288;
  double t2196;
  double t2220;
  double t2232;
  double t2352;
  double t2354;
  double t2355;
  double t2194;
  double t2247;
  double t2290;
  double t2302;
  double t2339;
  double t2342;
  double t2349;
  double t2356;
  double t2363;
  double t2372;
  double t2388;
  double t2393;
  double t2434;
  double t2435;
  double t2440;
  double t2445;
  double t2457;
  double t2459;
  double t2479;
  double t2487;
  double t2503;
  double t2509;
  double t2553;
  double t2554;
  double t2560;
  double t2527;
  double t2567;
  double t2568;
  double t2575;
  double t2646;
  double t2647;
  double t2664;
  double t2668;
  double t2676;
  double t2688;
  double t2697;
  double t2716;
  double t2723;
  double t2753;
  double t2760;
  double t2776;
  double t2872;
  double t2874;
  double t2844;
  double t2853;
  double t2858;
  double t2868;
  double t2876;
  double t2880;
  double t2901;
  double t2902;
  double t2904;
  double t2969;
  double t3001;
  double t2953;
  double t2959;
  double t2968;
  double t3002;
  double t3005;
  double t3016;
  double t3017;
  double t3025;
  double t3110;
  double t3112;
  double t3114;
  double t3086;
  double t3093;
  double t3094;
  double t3096;
  double t3097;
  double t3098;
  double t3100;
  double t3121;
  double t3123;
  double t3125;
  double t3129;
  double t3132;
  double t3189;
  double t3193;
  double t3197;
  double t3198;
  double t3201;
  double t3211;
  double t3216;
  double t3218;
  double t3226;
  double t3229;
  double t3256;
  double t3260;
  double t3268;
  double t3235;
  double t3269;
  double t3270;
  double t3271;
  double t2606;
  double t2608;
  double t2612;
  double t3339;
  double t3352;
  double t3355;
  double t3357;
  double t3359;
  double t3361;
  double t3412;
  double t3415;
  double t3418;
  double t3408;
  double t3409;
  double t3410;
  double t3411;
  double t3422;
  double t3431;
  double t3437;
  double t3441;
  double t3444;
  double t3434;
  double t3445;
  double t3446;
  double t3447;
  double t3454;
  double t3457;
  double t3464;
  double t3469;
  double t3478;
  double t3493;
  double t3501;
  double t3502;
  double t3503;
  double t3504;
  double t3507;
  double t3514;
  double t3521;
  double t3524;
  double t3527;
  double t3572;
  double t3573;
  double t3574;
  double t3541;
  double t3587;
  double t3598;
  double t3599;
  double t3681;
  double t3693;
  double t3695;
  double t3650;
  double t3651;
  double t3654;
  double t3656;
  double t3657;
  double t3667;
  double t3672;
  double t3707;
  double t3715;
  double t3719;
  double t3720;
  double t3721;
  double t1026;
  double t1083;
  double t1118;
  double t1171;
  double t1174;
  double t1189;
  double t1430;
  double t1508;
  double t1585;
  double t1610;
  double t1660;
  double t1691;
  double t1797;
  double t1820;
  double t1828;
  double t1869;
  double t1872;
  double t1902;
  double t2056;
  double t2097;
  double t2101;
  double t2155;
  double t2164;
  double t2167;
  double t2366;
  double t2398;
  double t2405;
  double t2412;
  double t2418;
  double t2419;
  double t2473;
  double t2515;
  double t2522;
  double t2529;
  double t2578;
  double t2583;
  double t3897;
  double t2782;
  double t2791;
  double t2801;
  double t2808;
  double t2819;
  double t2826;
  double t2898;
  double t2912;
  double t2918;
  double t2932;
  double t2934;
  double t2935;
  double t3008;
  double t3031;
  double t3035;
  double t3056;
  double t3059;
  double t3062;
  double t3124;
  double t3134;
  double t3138;
  double t3158;
  double t3160;
  double t3162;
  double t3212;
  double t3230;
  double t3233;
  double t3240;
  double t3272;
  double t3273;
  double t4087;
  double t3281;
  double t3282;
  double t3290;
  double t2616;
  double t2624;
  double t3362;
  double t3377;
  double t3389;
  double t3393;
  double t3394;
  double t3400;
  double t4131;
  double t4136;
  double t4137;
  double t3513;
  double t3528;
  double t3538;
  double t3552;
  double t3601;
  double t3604;
  double t4161;
  double t3614;
  double t3624;
  double t3635;
  double t3717;
  double t3723;
  double t3733;
  double t3743;
  double t3744;
  double t3745;
  double t4387;
  double t4391;
  double t4464;
  double t4468;
  double t3799;
  double t3801;
  double t3805;
  double t4548;
  double t4549;
  double t4436;
  double t4440;
  double t4441;
  double t4443;
  double t4446;
  double t4396;
  double t4401;
  double t4402;
  double t4454;
  double t4457;
  double t4458;
  double t4469;
  double t4470;
  double t4474;
  double t4481;
  double t4482;
  double t4495;
  double t3816;
  double t3826;
  double t3827;
  double t4581;
  double t4616;
  double t4632;
  double t4633;
  double t4640;
  double t4645;
  double t4653;
  double t4656;
  double t4670;
  double t3846;
  double t3853;
  double t3854;
  double t4554;
  double t4559;
  double t4563;
  double t4578;
  double t4584;
  double t4365;
  double t3857;
  double t3859;
  double t3861;
  double t4890;
  double t4896;
  double t3866;
  double t3869;
  double t3872;
  double t3878;
  double t3882;
  double t3890;
  double t3901;
  double t3903;
  double t5211;
  double t3930;
  double t3936;
  double t4342;
  double t4348;
  double t4350;
  double t4355;
  double t4368;
  double t3964;
  double t3969;
  double t3973;
  double t3977;
  double t3999;
  double t4006;
  double t4753;
  double t4769;
  double t4794;
  double t4797;
  double t4799;
  double t4019;
  double t4020;
  double t4030;
  double t4039;
  double t4044;
  double t4047;
  double t5070;
  double t5076;
  double t5078;
  double t5086;
  double t5093;
  double t4049;
  double t4062;
  double t4077;
  double t5141;
  double t5145;
  double t5154;
  double t5177;
  double t5178;
  double t4089;
  double t4092;
  double t5239;
  double t5241;
  double t5251;
  double t5254;
  double t5257;
  double t5769;
  double t4096;
  double t4097;
  double t4112;
  double t4115;
  double t4117;
  double t6052;
  double t6058;
  double t6067;
  double t6078;
  double t6079;
  double t6081;
  double t6082;
  double t6084;
  double t6090;
  double t6094;
  double t6101;
  double t6105;
  double t6117;
  double t4146;
  double t4149;
  double t4156;
  double t4164;
  double t4179;
  double t6216;
  double t4183;
  double t4187;
  double t4194;
  double t4199;
  double t4209;
  t677 = Cos(var1[3]);
  t632 = Cos(var1[5]);
  t695 = Sin(var1[4]);
  t650 = Sin(var1[3]);
  t734 = Sin(var1[5]);
  t441 = Cos(var1[7]);
  t557 = Cos(var1[6]);
  t661 = -1.*t632*t650;
  t804 = t677*t695*t734;
  t818 = t661 + t804;
  t826 = t557*t818;
  t861 = t677*t632*t695;
  t870 = t650*t734;
  t906 = t861 + t870;
  t950 = Sin(var1[6]);
  t956 = t906*t950;
  t968 = t826 + t956;
  t991 = t441*t968;
  t1000 = Cos(var1[4]);
  t1014 = Sin(var1[7]);
  t1018 = -1.*t677*t1000*t1014;
  t1021 = t991 + t1018;
  t1030 = Cos(var1[9]);
  t371 = Cos(var1[8]);
  t438 = Sin(var1[9]);
  t1071 = Sin(var1[8]);
  t285 = Cos(var1[10]);
  t1285 = t632*t650;
  t1289 = -1.*t677*t695*t734;
  t1295 = t1285 + t1289;
  t1353 = t557*t1295;
  t1358 = -1.*t906*t950;
  t1387 = t1353 + t1358;
  t1239 = t557*t906;
  t1299 = t1295*t950;
  t1312 = t1239 + t1299;
  t1126 = Sin(var1[10]);
  t1336 = t371*t1312*t1014;
  t1391 = t1387*t1071;
  t1413 = t1336 + t1391;
  t1445 = t371*t1387;
  t1480 = -1.*t1312*t1014*t1071;
  t1495 = t1445 + t1480;
  t1730 = -1.*t557*t818;
  t1753 = t1730 + t1358;
  t1711 = -1.*t818*t950;
  t1720 = t1239 + t1711;
  t1721 = t371*t1720*t1014;
  t1768 = t1753*t1071;
  t1784 = t1721 + t1768;
  t1798 = t371*t1753;
  t1801 = -1.*t1720*t1014*t1071;
  t1806 = t1798 + t1801;
  t2004 = t677*t1000*t632*t557;
  t2011 = -1.*t677*t1000*t734*t950;
  t2022 = t2004 + t2011;
  t1935 = -1.*t677*t441*t695;
  t1960 = t677*t1000*t557*t734;
  t1962 = t677*t1000*t632*t950;
  t1985 = t1960 + t1962;
  t1990 = t1985*t1014;
  t1992 = t1935 + t1990;
  t1998 = t371*t1992;
  t2029 = t2022*t1071;
  t2044 = t1998 + t2029;
  t2065 = t371*t2022;
  t2072 = -1.*t1992*t1071;
  t2096 = t2065 + t2072;
  t2259 = -1.*t632*t650*t695;
  t2281 = t677*t734;
  t2288 = t2259 + t2281;
  t2196 = -1.*t677*t632;
  t2220 = -1.*t650*t695*t734;
  t2232 = t2196 + t2220;
  t2352 = t557*t2288;
  t2354 = -1.*t2232*t950;
  t2355 = t2352 + t2354;
  t2194 = -1.*t1000*t441*t650;
  t2247 = t557*t2232;
  t2290 = t2288*t950;
  t2302 = t2247 + t2290;
  t2339 = t2302*t1014;
  t2342 = t2194 + t2339;
  t2349 = t371*t2342;
  t2356 = t2355*t1071;
  t2363 = t2349 + t2356;
  t2372 = t371*t2355;
  t2388 = -1.*t2342*t1071;
  t2393 = t2372 + t2388;
  t2434 = t677*t1000*t441;
  t2435 = t968*t1014;
  t2440 = t2434 + t2435;
  t2445 = -1.*t371*t2440;
  t2457 = -1.*t1720*t1071;
  t2459 = t2445 + t2457;
  t2479 = t371*t1720;
  t2487 = -1.*t2440*t1071;
  t2503 = t2479 + t2487;
  t2509 = t1030*t2503;
  t2553 = t371*t2440;
  t2554 = t1720*t1071;
  t2560 = t2553 + t2554;
  t2527 = -1.*t438*t2503;
  t2567 = -1.*t438*t2560;
  t2568 = t2567 + t2509;
  t2575 = t1126*t2568;
  t2646 = t677*t632;
  t2647 = t650*t695*t734;
  t2664 = t2646 + t2647;
  t2668 = t557*t2664;
  t2676 = t632*t650*t695;
  t2688 = -1.*t677*t734;
  t2697 = t2676 + t2688;
  t2716 = t2697*t950;
  t2723 = t2668 + t2716;
  t2753 = t441*t2723;
  t2760 = -1.*t1000*t650*t1014;
  t2776 = t2753 + t2760;
  t2872 = -1.*t2697*t950;
  t2874 = t2247 + t2872;
  t2844 = t557*t2697;
  t2853 = t2232*t950;
  t2858 = t2844 + t2853;
  t2868 = t371*t2858*t1014;
  t2876 = t2874*t1071;
  t2880 = t2868 + t2876;
  t2901 = t371*t2874;
  t2902 = -1.*t2858*t1014*t1071;
  t2904 = t2901 + t2902;
  t2969 = -1.*t557*t2664;
  t3001 = t2969 + t2872;
  t2953 = -1.*t2664*t950;
  t2959 = t2844 + t2953;
  t2968 = t371*t2959*t1014;
  t3002 = t3001*t1071;
  t3005 = t2968 + t3002;
  t3016 = t371*t3001;
  t3017 = -1.*t2959*t1014*t1071;
  t3025 = t3016 + t3017;
  t3110 = t1000*t632*t557*t650;
  t3112 = -1.*t1000*t650*t734*t950;
  t3114 = t3110 + t3112;
  t3086 = -1.*t441*t650*t695;
  t3093 = t1000*t557*t650*t734;
  t3094 = t1000*t632*t650*t950;
  t3096 = t3093 + t3094;
  t3097 = t3096*t1014;
  t3098 = t3086 + t3097;
  t3100 = t371*t3098;
  t3121 = t3114*t1071;
  t3123 = t3100 + t3121;
  t3125 = t371*t3114;
  t3129 = -1.*t3098*t1071;
  t3132 = t3125 + t3129;
  t3189 = t1000*t441*t650;
  t3193 = t2723*t1014;
  t3197 = t3189 + t3193;
  t3198 = -1.*t371*t3197;
  t3201 = -1.*t2959*t1071;
  t3211 = t3198 + t3201;
  t3216 = t371*t2959;
  t3218 = -1.*t3197*t1071;
  t3226 = t3216 + t3218;
  t3229 = t1030*t3226;
  t3256 = t371*t3197;
  t3260 = t2959*t1071;
  t3268 = t3256 + t3260;
  t3235 = -1.*t438*t3226;
  t3269 = -1.*t438*t3268;
  t3270 = t3269 + t3229;
  t3271 = t1126*t3270;
  t2606 = t1030*t2560;
  t2608 = t438*t2503;
  t2612 = t2606 + t2608;
  t3339 = t1000*t557*t734;
  t3352 = t1000*t632*t950;
  t3355 = t3339 + t3352;
  t3357 = t441*t3355;
  t3359 = t695*t1014;
  t3361 = t3357 + t3359;
  t3412 = -1.*t1000*t557*t734;
  t3415 = -1.*t1000*t632*t950;
  t3418 = t3412 + t3415;
  t3408 = t1000*t632*t557;
  t3409 = -1.*t1000*t734*t950;
  t3410 = t3408 + t3409;
  t3411 = t371*t3410*t1014;
  t3422 = t3418*t1071;
  t3431 = t3411 + t3422;
  t3437 = t371*t3418;
  t3441 = -1.*t3410*t1014*t1071;
  t3444 = t3437 + t3441;
  t3434 = -1.*t438*t3431;
  t3445 = t1030*t3444;
  t3446 = t3434 + t3445;
  t3447 = -1.*t285*t3446;
  t3454 = t1030*t3431;
  t3457 = t438*t3444;
  t3464 = t3454 + t3457;
  t3469 = t1126*t3464;
  t3478 = t3447 + t3469;
  t3493 = -1.*t441*t695;
  t3501 = t3355*t1014;
  t3502 = t3493 + t3501;
  t3503 = -1.*t371*t3502;
  t3504 = -1.*t3410*t1071;
  t3507 = t3503 + t3504;
  t3514 = t371*t3410;
  t3521 = -1.*t3502*t1071;
  t3524 = t3514 + t3521;
  t3527 = t1030*t3524;
  t3572 = t371*t3502;
  t3573 = t3410*t1071;
  t3574 = t3572 + t3573;
  t3541 = -1.*t438*t3524;
  t3587 = -1.*t438*t3574;
  t3598 = t3587 + t3527;
  t3599 = t1126*t3598;
  t3681 = -1.*t632*t557*t695;
  t3693 = t695*t734*t950;
  t3695 = t3681 + t3693;
  t3650 = -1.*t1000*t441;
  t3651 = -1.*t557*t695*t734;
  t3654 = -1.*t632*t695*t950;
  t3656 = t3651 + t3654;
  t3657 = t3656*t1014;
  t3667 = t3650 + t3657;
  t3672 = t371*t3667;
  t3707 = t3695*t1071;
  t3715 = t3672 + t3707;
  t3719 = t371*t3695;
  t3720 = -1.*t3667*t1071;
  t3721 = t3719 + t3720;
  t1026 = -1.*t371*t438*t1021;
  t1083 = -1.*t1030*t1021*t1071;
  t1118 = t1026 + t1083;
  t1171 = t1030*t371*t1021;
  t1174 = -1.*t438*t1021*t1071;
  t1189 = t1171 + t1174;
  t1430 = -1.*t438*t1413;
  t1508 = t1030*t1495;
  t1585 = t1430 + t1508;
  t1610 = t1030*t1413;
  t1660 = t438*t1495;
  t1691 = t1610 + t1660;
  t1797 = -1.*t438*t1784;
  t1820 = t1030*t1806;
  t1828 = t1797 + t1820;
  t1869 = t1030*t1784;
  t1872 = t438*t1806;
  t1902 = t1869 + t1872;
  t2056 = -1.*t438*t2044;
  t2097 = t1030*t2096;
  t2101 = t2056 + t2097;
  t2155 = t1030*t2044;
  t2164 = t438*t2096;
  t2167 = t2155 + t2164;
  t2366 = -1.*t438*t2363;
  t2398 = t1030*t2393;
  t2405 = t2366 + t2398;
  t2412 = t1030*t2363;
  t2418 = t438*t2393;
  t2419 = t2412 + t2418;
  t2473 = t438*t2459;
  t2515 = t2473 + t2509;
  t2522 = t1030*t2459;
  t2529 = t2522 + t2527;
  t2578 = -1.*t1030*t2560;
  t2583 = t2578 + t2527;
  t3897 = t285*t2568;
  t2782 = -1.*t371*t438*t2776;
  t2791 = -1.*t1030*t2776*t1071;
  t2801 = t2782 + t2791;
  t2808 = t1030*t371*t2776;
  t2819 = -1.*t438*t2776*t1071;
  t2826 = t2808 + t2819;
  t2898 = -1.*t438*t2880;
  t2912 = t1030*t2904;
  t2918 = t2898 + t2912;
  t2932 = t1030*t2880;
  t2934 = t438*t2904;
  t2935 = t2932 + t2934;
  t3008 = -1.*t438*t3005;
  t3031 = t1030*t3025;
  t3035 = t3008 + t3031;
  t3056 = t1030*t3005;
  t3059 = t438*t3025;
  t3062 = t3056 + t3059;
  t3124 = -1.*t438*t3123;
  t3134 = t1030*t3132;
  t3138 = t3124 + t3134;
  t3158 = t1030*t3123;
  t3160 = t438*t3132;
  t3162 = t3158 + t3160;
  t3212 = t438*t3211;
  t3230 = t3212 + t3229;
  t3233 = t1030*t3211;
  t3240 = t3233 + t3235;
  t3272 = -1.*t1030*t3268;
  t3273 = t3272 + t3235;
  t4087 = t285*t3270;
  t3281 = t1030*t3268;
  t3282 = t438*t3226;
  t3290 = t3281 + t3282;
  t2616 = t285*t2612;
  t2624 = t2575 + t2616;
  t3362 = -1.*t371*t438*t3361;
  t3377 = -1.*t1030*t3361*t1071;
  t3389 = t3362 + t3377;
  t3393 = t1030*t371*t3361;
  t3394 = -1.*t438*t3361*t1071;
  t3400 = t3393 + t3394;
  t4131 = t1126*t3446;
  t4136 = t285*t3464;
  t4137 = t4131 + t4136;
  t3513 = t438*t3507;
  t3528 = t3513 + t3527;
  t3538 = t1030*t3507;
  t3552 = t3538 + t3541;
  t3601 = -1.*t1030*t3574;
  t3604 = t3601 + t3541;
  t4161 = t285*t3598;
  t3614 = t1030*t3574;
  t3624 = t438*t3524;
  t3635 = t3614 + t3624;
  t3717 = -1.*t438*t3715;
  t3723 = t1030*t3721;
  t3733 = t3717 + t3723;
  t3743 = t1030*t3715;
  t3744 = t438*t3721;
  t3745 = t3743 + t3744;
  t4387 = -1.*t1030;
  t4391 = 1. + t4387;
  t4464 = -1.*t285;
  t4468 = 1. + t4464;
  t3799 = t1126*t1118;
  t3801 = t285*t1189;
  t3805 = t3799 + t3801;
  t4548 = -1.*t557;
  t4549 = 1. + t4548;
  t4436 = -1.*t371;
  t4440 = 1. + t4436;
  t4441 = -0.08055*t4440;
  t4443 = -0.01004*t1071;
  t4446 = 0. + t4441 + t4443;
  t4396 = -0.08055*t4391;
  t4401 = -0.13004*t438;
  t4402 = 0. + t4396 + t4401;
  t4454 = -0.13004*t4391;
  t4457 = 0.08055*t438;
  t4458 = 0. + t4454 + t4457;
  t4469 = -0.19074*t4468;
  t4470 = 0.03315*t1126;
  t4474 = 0. + t4469 + t4470;
  t4481 = -0.03315*t4468;
  t4482 = -0.19074*t1126;
  t4495 = 0. + t4481 + t4482;
  t3816 = t1126*t1585;
  t3826 = t285*t1691;
  t3827 = t3816 + t3826;
  t4581 = 0.07996*t950;
  t4616 = -1.*t441;
  t4632 = 1. + t4616;
  t4633 = 0.135*t4632;
  t4640 = 0.08055*t1014;
  t4645 = 0. + t4633 + t4640;
  t4653 = -0.01004*t4440;
  t4656 = 0.08055*t1071;
  t4670 = 0. + t4653 + t4656;
  t3846 = t1126*t1828;
  t3853 = t285*t1902;
  t3854 = t3846 + t3853;
  t4554 = 0.07996*t4549;
  t4559 = -0.135*t950;
  t4563 = 0. + t4554 + t4559;
  t4578 = 0.135*t4549;
  t4584 = 0. + t4578 + t4581;
  t4365 = 0.135*t1014;
  t3857 = t1126*t2101;
  t3859 = t285*t2167;
  t3861 = t3857 + t3859;
  t4890 = -0.08055*t4632;
  t4896 = 0. + t4890 + t4365;
  t3866 = t1126*t2405;
  t3869 = t285*t2419;
  t3872 = t3866 + t3869;
  t3878 = t285*t2515;
  t3882 = t1126*t2529;
  t3890 = t3878 + t3882;
  t3901 = t1126*t2583;
  t3903 = t3897 + t3901;
  t5211 = -1.*t1126*t2568;
  t3930 = -1.*t1126*t2612;
  t3936 = t3897 + t3930;
  t4342 = 0.135*t441;
  t4348 = -0.08055*t1014;
  t4350 = t4342 + t4348;
  t4355 = 0.08055*t441;
  t4368 = t4355 + t4365;
  t3964 = t1126*t2801;
  t3969 = t285*t2826;
  t3973 = t3964 + t3969;
  t3977 = t1126*t2918;
  t3999 = t285*t2935;
  t4006 = t3977 + t3999;
  t4753 = -0.135*t557;
  t4769 = t4753 + t4581;
  t4794 = 0.07996*t557;
  t4797 = 0.135*t950;
  t4799 = t4794 + t4797;
  t4019 = t1126*t3035;
  t4020 = t285*t3062;
  t4030 = t4019 + t4020;
  t4039 = t1126*t3138;
  t4044 = t285*t3162;
  t4047 = t4039 + t4044;
  t5070 = -0.01004*t371;
  t5076 = -0.08055*t1071;
  t5078 = t5070 + t5076;
  t5086 = 0.08055*t371;
  t5093 = t5086 + t4443;
  t4049 = t285*t3230;
  t4062 = t1126*t3240;
  t4077 = t4049 + t4062;
  t5141 = -0.13004*t1030;
  t5145 = -0.08055*t438;
  t5154 = t5141 + t5145;
  t5177 = 0.08055*t1030;
  t5178 = t5177 + t4401;
  t4089 = t1126*t3273;
  t4092 = t4087 + t4089;
  t5239 = 0.03315*t285;
  t5241 = t5239 + t4482;
  t5251 = -0.19074*t285;
  t5254 = -0.03315*t1126;
  t5257 = t5251 + t5254;
  t5769 = -1.*t1126*t3270;
  t4096 = -1.*t1126*t3290;
  t4097 = t4087 + t4096;
  t4112 = t1126*t3389;
  t4115 = t285*t3400;
  t4117 = t4112 + t4115;
  t6052 = 0.1303*t441*t3410;
  t6058 = t3410*t4645;
  t6067 = t3410*t1014*t4446;
  t6078 = t3418*t4670;
  t6079 = t4402*t3431;
  t6081 = t4458*t3444;
  t6082 = t4474*t3446;
  t6084 = t4495*t3464;
  t6090 = -0.03195*t4137;
  t6094 = t285*t3446;
  t6101 = -1.*t1126*t3464;
  t6105 = t6094 + t6101;
  t6117 = -0.37414*t6105;
  t4146 = t285*t3528;
  t4149 = t1126*t3552;
  t4156 = t4146 + t4149;
  t4164 = t1126*t3604;
  t4179 = t4161 + t4164;
  t6216 = -1.*t1126*t3598;
  t4183 = -1.*t1126*t3635;
  t4187 = t4161 + t4183;
  t4194 = t1126*t3733;
  t4199 = t285*t3745;
  t4209 = t4194 + t4199;
  p_output1[0]=(t1126*t2419 - 1.*t2405*t285)*var2[3] + (t1126*t2167 - 1.*t2101*t285)*var2[4] + (t1126*t1691 - 1.*t1585*t285)*var2[5] + (t1126*t1902 - 1.*t1828*t285)*var2[6] + (t1126*t1189 - 1.*t1118*t285)*var2[7] + (t1126*t2515 - 1.*t2529*t285)*var2[8] + (t2575 - 1.*t2583*t285)*var2[9] + t2624*var2[10];
  p_output1[1]=(t1126*t2612 - 1.*t2568*t285)*var2[3] + (-1.*t285*t3138 + t1126*t3162)*var2[4] + (-1.*t285*t2918 + t1126*t2935)*var2[5] + (-1.*t285*t3035 + t1126*t3062)*var2[6] + (t1126*t2826 - 1.*t2801*t285)*var2[7] + (t1126*t3230 - 1.*t285*t3240)*var2[8] + (t3271 - 1.*t285*t3273)*var2[9] + (t3271 + t285*t3290)*var2[10];
  p_output1[2]=(-1.*t285*t3733 + t1126*t3745)*var2[4] + t3478*var2[5] + t3478*var2[6] + (-1.*t285*t3389 + t1126*t3400)*var2[7] + (t1126*t3528 - 1.*t285*t3552)*var2[8] + (t3599 - 1.*t285*t3604)*var2[9] + (t3599 + t285*t3635)*var2[10];
  p_output1[3]=0;
  p_output1[4]=t3872*var2[3] + t3861*var2[4] + t3827*var2[5] + t3854*var2[6] + t3805*var2[7] + t3890*var2[8] + t3903*var2[9] + t3936*var2[10];
  p_output1[5]=t2624*var2[3] + t4047*var2[4] + t4006*var2[5] + t4030*var2[6] + t3973*var2[7] + t4077*var2[8] + t4092*var2[9] + t4097*var2[10];
  p_output1[6]=t4209*var2[4] + t4137*var2[5] + t4137*var2[6] + t4117*var2[7] + t4156*var2[8] + t4179*var2[9] + t4187*var2[10];
  p_output1[7]=0;
  p_output1[8]=(t2760 - 1.*t2302*t441)*var2[3] + (-1.*t1985*t441 - 1.*t1014*t677*t695)*var2[4] - 1.*t1312*t441*var2[5] - 1.*t1720*t441*var2[6] + t2440*var2[7];
  p_output1[9]=(t1000*t1014*t677 - 1.*t441*t968)*var2[3] + (-1.*t3096*t441 - 1.*t1014*t650*t695)*var2[4] - 1.*t2858*t441*var2[5] - 1.*t2959*t441*var2[6] + t3197*var2[7];
  p_output1[10]=(-1.*t1000*t1014 - 1.*t3656*t441)*var2[4] - 1.*t3410*t441*var2[5] - 1.*t3410*t441*var2[6] + t3502*var2[7];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.37414*(-1.*t1126*t2419 + t2405*t285) - 0.03195*t3872 + t2363*t4402 + t2342*t4446 + t2393*t4458 + t2405*t4474 + t2419*t4495 + t2288*t4563 + t2232*t4584 + t2302*t4645 + t2355*t4670 - 1.*t1000*t4896*t650 + 0.1303*(t2302*t441 + t1000*t1014*t650))*var2[3] + (-0.37414*(-1.*t1126*t2167 + t2101*t285) - 0.03195*t3861 + t2044*t4402 + t1992*t4446 + t2096*t4458 + t2101*t4474 + t2167*t4495 + t1985*t4645 + t2022*t4670 + t1000*t4563*t632*t677 - 1.*t4896*t677*t695 + 0.1303*(t1985*t441 + t1014*t677*t695) + t1000*t4584*t677*t734)*var2[4] + (-0.37414*(-1.*t1126*t1691 + t1585*t285) - 0.03195*t3827 + t1413*t4402 + 0.1303*t1312*t441 + t1014*t1312*t4446 + t1495*t4458 + t1585*t4474 + t1691*t4495 + t1295*t4563 + t1312*t4645 + t1387*t4670 + t4584*t906)*var2[5] + (-0.37414*(-1.*t1126*t1902 + t1828*t285) - 0.03195*t3854 + t1784*t4402 + 0.1303*t1720*t441 + t1014*t1720*t4446 + t1806*t4458 + t1828*t4474 + t1902*t4495 + t1720*t4645 + t1753*t4670 + t4799*t818 + t4769*t906)*var2[6] + (-0.37414*(-1.*t1126*t1189 + t1118*t285) - 0.03195*t3805 + t1021*t371*t4402 + t1021*t4446 - 1.*t1021*t1071*t4458 + t1118*t4474 + t1189*t4495 + t1000*t4350*t677 + t4368*t968 + 0.1303*(-1.*t1000*t441*t677 - 1.*t1014*t968))*var2[7] + (-0.37414*(-1.*t1126*t2515 + t2529*t285) - 0.03195*t3890 + t2503*t4402 + t2459*t4458 + t2529*t4474 + t2515*t4495 + t2440*t5078 + t1720*t5093)*var2[8] + (-0.03195*t3903 + t2583*t4474 + t2568*t4495 + t2560*t5154 + t2503*t5178 - 0.37414*(t2583*t285 + t5211))*var2[9] + (-0.03195*t3936 - 0.37414*(-1.*t2612*t285 + t5211) + t2568*t5241 + t2612*t5257)*var2[10];
  p_output1[13]=var2[1] + (0.1303*t1021 - 0.03195*t2624 - 0.37414*t3936 + t2560*t4402 + t2440*t4446 + t2503*t4458 + t2568*t4474 + t2612*t4495 + t1720*t4670 + t1000*t4896*t677 + t4584*t818 + t4563*t906 + t4645*t968)*var2[3] + (-0.37414*(t285*t3138 - 1.*t1126*t3162) - 0.03195*t4047 + t3123*t4402 + t3098*t4446 + t3132*t4458 + t3138*t4474 + t3162*t4495 + t3096*t4645 + t3114*t4670 + t1000*t4563*t632*t650 - 1.*t4896*t650*t695 + 0.1303*(t3096*t441 + t1014*t650*t695) + t1000*t4584*t650*t734)*var2[4] + (-0.37414*(t285*t2918 - 1.*t1126*t2935) - 0.03195*t4006 + t2880*t4402 + 0.1303*t2858*t441 + t1014*t2858*t4446 + t2904*t4458 + t2918*t4474 + t2935*t4495 + t2232*t4563 + t2697*t4584 + t2858*t4645 + t2874*t4670)*var2[5] + (-0.37414*(t285*t3035 - 1.*t1126*t3062) - 0.03195*t4030 + t3005*t4402 + 0.1303*t2959*t441 + t1014*t2959*t4446 + t3025*t4458 + t3035*t4474 + t3062*t4495 + t2959*t4645 + t3001*t4670 + t2697*t4769 + t2664*t4799)*var2[6] + (0.1303*(t2194 - 1.*t1014*t2723) - 0.37414*(-1.*t1126*t2826 + t2801*t285) - 0.03195*t3973 + t2723*t4368 + t2776*t371*t4402 + t2776*t4446 - 1.*t1071*t2776*t4458 + t2801*t4474 + t2826*t4495 + t1000*t4350*t650)*var2[7] + (-0.37414*(-1.*t1126*t3230 + t285*t3240) - 0.03195*t4077 + t3226*t4402 + t3211*t4458 + t3240*t4474 + t3230*t4495 + t3197*t5078 + t2959*t5093)*var2[8] + (-0.03195*t4092 + t3273*t4474 + t3270*t4495 + t3268*t5154 + t3226*t5178 - 0.37414*(t285*t3273 + t5769))*var2[9] + (-0.03195*t4097 + t3270*t5241 + t3290*t5257 - 0.37414*(-1.*t285*t3290 + t5769))*var2[10];
  p_output1[14]=var2[2] + (-0.37414*(t285*t3733 - 1.*t1126*t3745) - 0.03195*t4209 + t3715*t4402 + 0.1303*(t1000*t1014 + t3656*t441) + t3667*t4446 + t3721*t4458 + t3733*t4474 + t3745*t4495 + t3656*t4645 + t3695*t4670 - 1.*t1000*t4896 - 1.*t4563*t632*t695 - 1.*t4584*t695*t734)*var2[4] + (t6052 + t6058 + t6067 + t6078 + t6079 + t6081 + t6082 + t6084 + t6090 + t6117 + t1000*t4584*t632 - 1.*t1000*t4563*t734)*var2[5] + (t6052 + t6058 + t6067 + t6078 + t6079 + t6081 + t6082 + t6084 + t6090 + t6117 + t1000*t4769*t632 + t1000*t4799*t734)*var2[6] + (-0.37414*(t285*t3389 - 1.*t1126*t3400) - 0.03195*t4117 + t3355*t4368 + t3361*t371*t4402 + t3361*t4446 - 1.*t1071*t3361*t4458 + t3389*t4474 + t3400*t4495 - 1.*t4350*t695 + 0.1303*(-1.*t1014*t3355 + t441*t695))*var2[7] + (-0.37414*(-1.*t1126*t3528 + t285*t3552) - 0.03195*t4156 + t3524*t4402 + t3507*t4458 + t3552*t4474 + t3528*t4495 + t3502*t5078 + t3410*t5093)*var2[8] + (-0.03195*t4179 + t3604*t4474 + t3598*t4495 + t3574*t5154 + t3524*t5178 - 0.37414*(t285*t3604 + t6216))*var2[9] + (-0.03195*t4187 + t3598*t5241 + t3635*t5257 - 0.37414*(-1.*t285*t3635 + t6216))*var2[10];
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

#include "dT_LeftShin_mex.hh"

namespace SymExpression
{

void dT_LeftShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
