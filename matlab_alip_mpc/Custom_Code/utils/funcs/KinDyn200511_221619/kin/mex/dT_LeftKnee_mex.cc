/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:14 GMT-04:00
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
  double t816;
  double t540;
  double t886;
  double t624;
  double t909;
  double t307;
  double t482;
  double t787;
  double t944;
  double t992;
  double t1077;
  double t1140;
  double t1141;
  double t1157;
  double t1245;
  double t1256;
  double t1278;
  double t1298;
  double t1338;
  double t1365;
  double t1375;
  double t1427;
  double t299;
  double t12;
  double t1603;
  double t1607;
  double t1637;
  double t1467;
  double t1464;
  double t1755;
  double t1784;
  double t1790;
  double t1554;
  double t1715;
  double t1727;
  double t2098;
  double t2117;
  double t2006;
  double t2050;
  double t2313;
  double t2326;
  double t2330;
  double t2259;
  double t2276;
  double t2293;
  double t2295;
  double t2298;
  double t2301;
  double t2564;
  double t2568;
  double t2615;
  double t2533;
  double t2535;
  double t2546;
  double t2665;
  double t2672;
  double t2682;
  double t2516;
  double t2555;
  double t2619;
  double t2630;
  double t2658;
  double t2662;
  double t2737;
  double t2738;
  double t2740;
  double t2779;
  double t2782;
  double t2787;
  double t2802;
  double t2895;
  double t2899;
  double t2902;
  double t2916;
  double t2928;
  double t2949;
  double t2964;
  double t2968;
  double t2974;
  double t2976;
  double t2984;
  double t2986;
  double t3054;
  double t3058;
  double t3025;
  double t3028;
  double t3040;
  double t3200;
  double t3203;
  double t3146;
  double t3178;
  double t3344;
  double t3367;
  double t3415;
  double t3282;
  double t3289;
  double t3297;
  double t3298;
  double t3319;
  double t3334;
  double t3529;
  double t3541;
  double t3549;
  double t3586;
  double t3587;
  double t3588;
  double t3599;
  double t2809;
  double t2817;
  double t2825;
  double t3686;
  double t3690;
  double t3694;
  double t3714;
  double t3715;
  double t3722;
  double t3783;
  double t3785;
  double t3793;
  double t3754;
  double t3766;
  double t3767;
  double t3772;
  double t3815;
  double t3839;
  double t3842;
  double t3847;
  double t3848;
  double t3863;
  double t3880;
  double t3881;
  double t3900;
  double t3901;
  double t3915;
  double t3941;
  double t3942;
  double t3955;
  double t3970;
  double t4139;
  double t4159;
  double t4175;
  double t4066;
  double t4076;
  double t4106;
  double t4108;
  double t4110;
  double t4127;
  double t1752;
  double t1798;
  double t1806;
  double t1865;
  double t1889;
  double t1923;
  double t2086;
  double t2132;
  double t2140;
  double t2159;
  double t2181;
  double t2184;
  double t2307;
  double t2382;
  double t2410;
  double t2439;
  double t2444;
  double t2451;
  double t2663;
  double t2683;
  double t2684;
  double t2705;
  double t2710;
  double t2713;
  double t2747;
  double t2759;
  double t2761;
  double t4467;
  double t3046;
  double t3060;
  double t3068;
  double t3082;
  double t3087;
  double t3104;
  double t3191;
  double t3238;
  double t3260;
  double t3262;
  double t3263;
  double t3270;
  double t3342;
  double t3419;
  double t3427;
  double t3469;
  double t3472;
  double t3494;
  double t3555;
  double t3558;
  double t3574;
  double t3613;
  double t3617;
  double t3624;
  double t4674;
  double t2855;
  double t2866;
  double t4740;
  double t4746;
  double t4758;
  double t3929;
  double t3932;
  double t3933;
  double t3998;
  double t4000;
  double t4011;
  double t4792;
  double t4130;
  double t4179;
  double t4188;
  double t4202;
  double t4203;
  double t4214;
  double t5221;
  double t5225;
  double t4243;
  double t4244;
  double t4262;
  double t5408;
  double t5423;
  double t5290;
  double t5294;
  double t5308;
  double t5309;
  double t5320;
  double t5229;
  double t5234;
  double t5241;
  double t5328;
  double t5360;
  double t5362;
  double t4292;
  double t4293;
  double t4349;
  double t5450;
  double t5487;
  double t5494;
  double t5496;
  double t5504;
  double t5520;
  double t5537;
  double t5545;
  double t5587;
  double t4371;
  double t4394;
  double t4413;
  double t5424;
  double t5425;
  double t5426;
  double t5437;
  double t5452;
  double t5194;
  double t4434;
  double t4435;
  double t4436;
  double t5843;
  double t5857;
  double t4443;
  double t4448;
  double t4451;
  double t4462;
  double t4468;
  double t4498;
  double t4501;
  double t6178;
  double t5127;
  double t5135;
  double t5161;
  double t5190;
  double t5205;
  double t4526;
  double t4530;
  double t4532;
  double t4538;
  double t4545;
  double t4546;
  double t5669;
  double t5670;
  double t5678;
  double t5688;
  double t5689;
  double t4557;
  double t4577;
  double t4582;
  double t4613;
  double t4650;
  double t4651;
  double t6091;
  double t6097;
  double t6099;
  double t6107;
  double t6121;
  double t4673;
  double t4675;
  double t6184;
  double t6185;
  double t6198;
  double t6201;
  double t6218;
  double t4699;
  double t4703;
  double t6816;
  double t4720;
  double t4731;
  double t4738;
  double t7030;
  double t7036;
  double t7045;
  double t7046;
  double t7049;
  double t7058;
  double t7060;
  double t7062;
  double t7063;
  double t7068;
  double t7071;
  double t4788;
  double t4793;
  double t4846;
  double t4864;
  double t7120;
  double t4871;
  double t4873;
  double t4875;
  t816 = Cos(var1[3]);
  t540 = Cos(var1[5]);
  t886 = Sin(var1[4]);
  t624 = Sin(var1[3]);
  t909 = Sin(var1[5]);
  t307 = Cos(var1[7]);
  t482 = Cos(var1[6]);
  t787 = -1.*t540*t624;
  t944 = t816*t886*t909;
  t992 = t787 + t944;
  t1077 = t482*t992;
  t1140 = t816*t540*t886;
  t1141 = t624*t909;
  t1157 = t1140 + t1141;
  t1245 = Sin(var1[6]);
  t1256 = t1157*t1245;
  t1278 = t1077 + t1256;
  t1298 = t307*t1278;
  t1338 = Cos(var1[4]);
  t1365 = Sin(var1[7]);
  t1375 = -1.*t816*t1338*t1365;
  t1427 = t1298 + t1375;
  t299 = Sin(var1[9]);
  t12 = Cos(var1[8]);
  t1603 = t540*t624;
  t1607 = -1.*t816*t886*t909;
  t1637 = t1603 + t1607;
  t1467 = Sin(var1[8]);
  t1464 = Cos(var1[9]);
  t1755 = t482*t1637;
  t1784 = -1.*t1157*t1245;
  t1790 = t1755 + t1784;
  t1554 = t482*t1157;
  t1715 = t1637*t1245;
  t1727 = t1554 + t1715;
  t2098 = -1.*t482*t992;
  t2117 = t2098 + t1784;
  t2006 = -1.*t992*t1245;
  t2050 = t1554 + t2006;
  t2313 = t816*t1338*t540*t482;
  t2326 = -1.*t816*t1338*t909*t1245;
  t2330 = t2313 + t2326;
  t2259 = -1.*t816*t307*t886;
  t2276 = t816*t1338*t482*t909;
  t2293 = t816*t1338*t540*t1245;
  t2295 = t2276 + t2293;
  t2298 = t2295*t1365;
  t2301 = t2259 + t2298;
  t2564 = -1.*t540*t624*t886;
  t2568 = t816*t909;
  t2615 = t2564 + t2568;
  t2533 = -1.*t816*t540;
  t2535 = -1.*t624*t886*t909;
  t2546 = t2533 + t2535;
  t2665 = t482*t2615;
  t2672 = -1.*t2546*t1245;
  t2682 = t2665 + t2672;
  t2516 = -1.*t1338*t307*t624;
  t2555 = t482*t2546;
  t2619 = t2615*t1245;
  t2630 = t2555 + t2619;
  t2658 = t2630*t1365;
  t2662 = t2516 + t2658;
  t2737 = t816*t1338*t307;
  t2738 = t1278*t1365;
  t2740 = t2737 + t2738;
  t2779 = t12*t2050;
  t2782 = -1.*t2740*t1467;
  t2787 = t2779 + t2782;
  t2802 = t299*t2787;
  t2895 = t816*t540;
  t2899 = t624*t886*t909;
  t2902 = t2895 + t2899;
  t2916 = t482*t2902;
  t2928 = t540*t624*t886;
  t2949 = -1.*t816*t909;
  t2964 = t2928 + t2949;
  t2968 = t2964*t1245;
  t2974 = t2916 + t2968;
  t2976 = t307*t2974;
  t2984 = -1.*t1338*t624*t1365;
  t2986 = t2976 + t2984;
  t3054 = -1.*t2964*t1245;
  t3058 = t2555 + t3054;
  t3025 = t482*t2964;
  t3028 = t2546*t1245;
  t3040 = t3025 + t3028;
  t3200 = -1.*t482*t2902;
  t3203 = t3200 + t3054;
  t3146 = -1.*t2902*t1245;
  t3178 = t3025 + t3146;
  t3344 = t1338*t540*t482*t624;
  t3367 = -1.*t1338*t624*t909*t1245;
  t3415 = t3344 + t3367;
  t3282 = -1.*t307*t624*t886;
  t3289 = t1338*t482*t624*t909;
  t3297 = t1338*t540*t624*t1245;
  t3298 = t3289 + t3297;
  t3319 = t3298*t1365;
  t3334 = t3282 + t3319;
  t3529 = t1338*t307*t624;
  t3541 = t2974*t1365;
  t3549 = t3529 + t3541;
  t3586 = t12*t3178;
  t3587 = -1.*t3549*t1467;
  t3588 = t3586 + t3587;
  t3599 = t299*t3588;
  t2809 = t12*t2740;
  t2817 = t2050*t1467;
  t2825 = t2809 + t2817;
  t3686 = t1338*t482*t909;
  t3690 = t1338*t540*t1245;
  t3694 = t3686 + t3690;
  t3714 = t307*t3694;
  t3715 = t886*t1365;
  t3722 = t3714 + t3715;
  t3783 = -1.*t1338*t482*t909;
  t3785 = -1.*t1338*t540*t1245;
  t3793 = t3783 + t3785;
  t3754 = t1338*t540*t482;
  t3766 = -1.*t1338*t909*t1245;
  t3767 = t3754 + t3766;
  t3772 = t12*t3767*t1365;
  t3815 = t3793*t1467;
  t3839 = t3772 + t3815;
  t3842 = t299*t3839;
  t3847 = t12*t3793;
  t3848 = -1.*t3767*t1365*t1467;
  t3863 = t3847 + t3848;
  t3880 = -1.*t1464*t3863;
  t3881 = t3842 + t3880;
  t3900 = -1.*t307*t886;
  t3901 = t3694*t1365;
  t3915 = t3900 + t3901;
  t3941 = t12*t3767;
  t3942 = -1.*t3915*t1467;
  t3955 = t3941 + t3942;
  t3970 = t299*t3955;
  t4139 = -1.*t540*t482*t886;
  t4159 = t886*t909*t1245;
  t4175 = t4139 + t4159;
  t4066 = -1.*t1338*t307;
  t4076 = -1.*t482*t886*t909;
  t4106 = -1.*t540*t886*t1245;
  t4108 = t4076 + t4106;
  t4110 = t4108*t1365;
  t4127 = t4066 + t4110;
  t1752 = t12*t1727*t1365;
  t1798 = t1790*t1467;
  t1806 = t1752 + t1798;
  t1865 = t12*t1790;
  t1889 = -1.*t1727*t1365*t1467;
  t1923 = t1865 + t1889;
  t2086 = t12*t2050*t1365;
  t2132 = t2117*t1467;
  t2140 = t2086 + t2132;
  t2159 = t12*t2117;
  t2181 = -1.*t2050*t1365*t1467;
  t2184 = t2159 + t2181;
  t2307 = t12*t2301;
  t2382 = t2330*t1467;
  t2410 = t2307 + t2382;
  t2439 = t12*t2330;
  t2444 = -1.*t2301*t1467;
  t2451 = t2439 + t2444;
  t2663 = t12*t2662;
  t2683 = t2682*t1467;
  t2684 = t2663 + t2683;
  t2705 = t12*t2682;
  t2710 = -1.*t2662*t1467;
  t2713 = t2705 + t2710;
  t2747 = -1.*t12*t2740;
  t2759 = -1.*t2050*t1467;
  t2761 = t2747 + t2759;
  t4467 = t1464*t2787;
  t3046 = t12*t3040*t1365;
  t3060 = t3058*t1467;
  t3068 = t3046 + t3060;
  t3082 = t12*t3058;
  t3087 = -1.*t3040*t1365*t1467;
  t3104 = t3082 + t3087;
  t3191 = t12*t3178*t1365;
  t3238 = t3203*t1467;
  t3260 = t3191 + t3238;
  t3262 = t12*t3203;
  t3263 = -1.*t3178*t1365*t1467;
  t3270 = t3262 + t3263;
  t3342 = t12*t3334;
  t3419 = t3415*t1467;
  t3427 = t3342 + t3419;
  t3469 = t12*t3415;
  t3472 = -1.*t3334*t1467;
  t3494 = t3469 + t3472;
  t3555 = -1.*t12*t3549;
  t3558 = -1.*t3178*t1467;
  t3574 = t3555 + t3558;
  t3613 = t12*t3549;
  t3617 = t3178*t1467;
  t3624 = t3613 + t3617;
  t4674 = t1464*t3588;
  t2855 = t1464*t2825;
  t2866 = t2855 + t2802;
  t4740 = t1464*t3839;
  t4746 = t299*t3863;
  t4758 = t4740 + t4746;
  t3929 = -1.*t12*t3915;
  t3932 = -1.*t3767*t1467;
  t3933 = t3929 + t3932;
  t3998 = t12*t3915;
  t4000 = t3767*t1467;
  t4011 = t3998 + t4000;
  t4792 = t1464*t3955;
  t4130 = t12*t4127;
  t4179 = t4175*t1467;
  t4188 = t4130 + t4179;
  t4202 = t12*t4175;
  t4203 = -1.*t4127*t1467;
  t4214 = t4202 + t4203;
  t5221 = -1.*t1464;
  t5225 = 1. + t5221;
  t4243 = t1464*t12*t1427;
  t4244 = -1.*t299*t1427*t1467;
  t4262 = t4243 + t4244;
  t5408 = -1.*t482;
  t5423 = 1. + t5408;
  t5290 = -1.*t12;
  t5294 = 1. + t5290;
  t5308 = -0.08055*t5294;
  t5309 = -0.01004*t1467;
  t5320 = 0. + t5308 + t5309;
  t5229 = -0.08055*t5225;
  t5234 = -0.13004*t299;
  t5241 = 0. + t5229 + t5234;
  t5328 = -0.13004*t5225;
  t5360 = 0.08055*t299;
  t5362 = 0. + t5328 + t5360;
  t4292 = t1464*t1806;
  t4293 = t299*t1923;
  t4349 = t4292 + t4293;
  t5450 = 0.07996*t1245;
  t5487 = -1.*t307;
  t5494 = 1. + t5487;
  t5496 = 0.135*t5494;
  t5504 = 0.08055*t1365;
  t5520 = 0. + t5496 + t5504;
  t5537 = -0.01004*t5294;
  t5545 = 0.08055*t1467;
  t5587 = 0. + t5537 + t5545;
  t4371 = t1464*t2140;
  t4394 = t299*t2184;
  t4413 = t4371 + t4394;
  t5424 = 0.07996*t5423;
  t5425 = -0.135*t1245;
  t5426 = 0. + t5424 + t5425;
  t5437 = 0.135*t5423;
  t5452 = 0. + t5437 + t5450;
  t5194 = 0.135*t1365;
  t4434 = t1464*t2410;
  t4435 = t299*t2451;
  t4436 = t4434 + t4435;
  t5843 = -0.08055*t5494;
  t5857 = 0. + t5843 + t5194;
  t4443 = t1464*t2684;
  t4448 = t299*t2713;
  t4451 = t4443 + t4448;
  t4462 = t299*t2761;
  t4468 = t4462 + t4467;
  t4498 = -1.*t299*t2825;
  t4501 = t4498 + t4467;
  t6178 = -1.*t299*t2787;
  t5127 = 0.135*t307;
  t5135 = -0.08055*t1365;
  t5161 = t5127 + t5135;
  t5190 = 0.08055*t307;
  t5205 = t5190 + t5194;
  t4526 = t1464*t12*t2986;
  t4530 = -1.*t299*t2986*t1467;
  t4532 = t4526 + t4530;
  t4538 = t1464*t3068;
  t4545 = t299*t3104;
  t4546 = t4538 + t4545;
  t5669 = -0.135*t482;
  t5670 = t5669 + t5450;
  t5678 = 0.07996*t482;
  t5688 = 0.135*t1245;
  t5689 = t5678 + t5688;
  t4557 = t1464*t3260;
  t4577 = t299*t3270;
  t4582 = t4557 + t4577;
  t4613 = t1464*t3427;
  t4650 = t299*t3494;
  t4651 = t4613 + t4650;
  t6091 = -0.01004*t12;
  t6097 = -0.08055*t1467;
  t6099 = t6091 + t6097;
  t6107 = 0.08055*t12;
  t6121 = t6107 + t5309;
  t4673 = t299*t3574;
  t4675 = t4673 + t4674;
  t6184 = -0.13004*t1464;
  t6185 = -0.08055*t299;
  t6198 = t6184 + t6185;
  t6201 = 0.08055*t1464;
  t6218 = t6201 + t5234;
  t4699 = -1.*t299*t3624;
  t4703 = t4699 + t4674;
  t6816 = -1.*t299*t3588;
  t4720 = t1464*t12*t3722;
  t4731 = -1.*t299*t3722*t1467;
  t4738 = t4720 + t4731;
  t7030 = 0.1327*t307*t3767;
  t7036 = t3767*t5520;
  t7045 = t3767*t1365*t5320;
  t7046 = t3793*t5587;
  t7049 = t5241*t3839;
  t7058 = t5362*t3863;
  t7060 = -1.*t299*t3839;
  t7062 = t1464*t3863;
  t7063 = t7060 + t7062;
  t7068 = -0.15304*t7063;
  t7071 = -0.04845*t4758;
  t4788 = t299*t3933;
  t4793 = t4788 + t4792;
  t4846 = -1.*t299*t4011;
  t4864 = t4846 + t4792;
  t7120 = -1.*t299*t3955;
  t4871 = t1464*t4188;
  t4873 = t299*t4214;
  t4875 = t4871 + t4873;
  p_output1[0]=(-1.*t1464*t2713 + t2684*t299)*var2[3] + (-1.*t1464*t2451 + t2410*t299)*var2[4] + (-1.*t1464*t1923 + t1806*t299)*var2[5] + (-1.*t1464*t2184 + t2140*t299)*var2[6] + (t1427*t1464*t1467 + t12*t1427*t299)*var2[7] + (-1.*t1464*t2761 + t2802)*var2[8] + t2866*var2[9];
  p_output1[1]=(-1.*t1464*t2787 + t2825*t299)*var2[3] + (t299*t3427 - 1.*t1464*t3494)*var2[4] + (t299*t3068 - 1.*t1464*t3104)*var2[5] + (t299*t3260 - 1.*t1464*t3270)*var2[6] + (t1464*t1467*t2986 + t12*t2986*t299)*var2[7] + (-1.*t1464*t3574 + t3599)*var2[8] + (t3599 + t1464*t3624)*var2[9];
  p_output1[2]=(t299*t4188 - 1.*t1464*t4214)*var2[4] + t3881*var2[5] + t3881*var2[6] + (t1464*t1467*t3722 + t12*t299*t3722)*var2[7] + (-1.*t1464*t3933 + t3970)*var2[8] + (t3970 + t1464*t4011)*var2[9];
  p_output1[3]=0;
  p_output1[4]=t4451*var2[3] + t4436*var2[4] + t4349*var2[5] + t4413*var2[6] + t4262*var2[7] + t4468*var2[8] + t4501*var2[9];
  p_output1[5]=t2866*var2[3] + t4651*var2[4] + t4546*var2[5] + t4582*var2[6] + t4532*var2[7] + t4675*var2[8] + t4703*var2[9];
  p_output1[6]=t4875*var2[4] + t4758*var2[5] + t4758*var2[6] + t4738*var2[7] + t4793*var2[8] + t4864*var2[9];
  p_output1[7]=0;
  p_output1[8]=(t2984 - 1.*t2630*t307)*var2[3] + (-1.*t2295*t307 - 1.*t1365*t816*t886)*var2[4] - 1.*t1727*t307*var2[5] - 1.*t2050*t307*var2[6] + t2740*var2[7];
  p_output1[9]=(-1.*t1278*t307 + t1338*t1365*t816)*var2[3] + (-1.*t307*t3298 - 1.*t1365*t624*t886)*var2[4] - 1.*t3040*t307*var2[5] - 1.*t307*t3178*var2[6] + t3549*var2[7];
  p_output1[10]=(-1.*t1338*t1365 - 1.*t307*t4108)*var2[4] - 1.*t307*t3767*var2[5] - 1.*t307*t3767*var2[6] + t3915*var2[7];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.15304*(t1464*t2713 - 1.*t2684*t299) - 0.04845*t4451 + t2684*t5241 + t2662*t5320 + t2713*t5362 + t2615*t5426 + t2546*t5452 + t2630*t5520 + t2682*t5587 - 1.*t1338*t5857*t624 + 0.1327*(t2630*t307 + t1338*t1365*t624))*var2[3] + (-0.15304*(t1464*t2451 - 1.*t2410*t299) - 0.04845*t4436 + t2410*t5241 + t2301*t5320 + t2451*t5362 + t2295*t5520 + t2330*t5587 + t1338*t540*t5426*t816 - 1.*t5857*t816*t886 + 0.1327*(t2295*t307 + t1365*t816*t886) + t1338*t5452*t816*t909)*var2[4] + (-0.15304*(t1464*t1923 - 1.*t1806*t299) + 0.1327*t1727*t307 - 0.04845*t4349 + t1806*t5241 + t1365*t1727*t5320 + t1923*t5362 + t1637*t5426 + t1157*t5452 + t1727*t5520 + t1790*t5587)*var2[5] + (-0.15304*(t1464*t2184 - 1.*t2140*t299) + 0.1327*t2050*t307 - 0.04845*t4413 + t2140*t5241 + t1365*t2050*t5320 + t2184*t5362 + t2050*t5520 + t2117*t5587 + t1157*t5670 + t5689*t992)*var2[6] + (-0.15304*(-1.*t1427*t1464*t1467 - 1.*t12*t1427*t299) - 0.04845*t4262 + t1278*t5205 + t12*t1427*t5241 + t1427*t5320 - 1.*t1427*t1467*t5362 + t1338*t5161*t816 + 0.1327*(-1.*t1278*t1365 - 1.*t1338*t307*t816))*var2[7] + (-0.04845*t4468 + t2787*t5241 + t2761*t5362 + t2740*t6099 + t2050*t6121 - 0.15304*(t1464*t2761 + t6178))*var2[8] + (-0.04845*t4501 - 0.15304*(-1.*t1464*t2825 + t6178) + t2825*t6198 + t2787*t6218)*var2[9];
  p_output1[13]=var2[1] + (0.1327*t1427 - 0.04845*t2866 - 0.15304*t4501 + t2825*t5241 + t2740*t5320 + t2787*t5362 + t1157*t5426 + t1278*t5520 + t2050*t5587 + t1338*t5857*t816 + t5452*t992)*var2[3] + (-0.15304*(-1.*t299*t3427 + t1464*t3494) - 0.04845*t4651 + t3427*t5241 + t3334*t5320 + t3494*t5362 + t3298*t5520 + t3415*t5587 + t1338*t540*t5426*t624 - 1.*t5857*t624*t886 + 0.1327*(t307*t3298 + t1365*t624*t886) + t1338*t5452*t624*t909)*var2[4] + (0.1327*t3040*t307 - 0.15304*(-1.*t299*t3068 + t1464*t3104) - 0.04845*t4546 + t3068*t5241 + t1365*t3040*t5320 + t3104*t5362 + t2546*t5426 + t2964*t5452 + t3040*t5520 + t3058*t5587)*var2[5] + (0.1327*t307*t3178 - 0.15304*(-1.*t299*t3260 + t1464*t3270) - 0.04845*t4582 + t3260*t5241 + t1365*t3178*t5320 + t3270*t5362 + t3178*t5520 + t3203*t5587 + t2964*t5670 + t2902*t5689)*var2[6] + (0.1327*(t2516 - 1.*t1365*t2974) - 0.15304*(-1.*t1464*t1467*t2986 - 1.*t12*t2986*t299) - 0.04845*t4532 + t2974*t5205 + t12*t2986*t5241 + t2986*t5320 - 1.*t1467*t2986*t5362 + t1338*t5161*t624)*var2[7] + (-0.04845*t4675 + t3588*t5241 + t3574*t5362 + t3549*t6099 + t3178*t6121 - 0.15304*(t1464*t3574 + t6816))*var2[8] + (-0.04845*t4703 + t3624*t6198 + t3588*t6218 - 0.15304*(-1.*t1464*t3624 + t6816))*var2[9];
  p_output1[14]=var2[2] + (0.1327*(t1338*t1365 + t307*t4108) - 0.15304*(-1.*t299*t4188 + t1464*t4214) - 0.04845*t4875 + t4188*t5241 + t4127*t5320 + t4214*t5362 + t4108*t5520 + t4175*t5587 - 1.*t1338*t5857 - 1.*t540*t5426*t886 - 1.*t5452*t886*t909)*var2[4] + (t1338*t540*t5452 + t7030 + t7036 + t7045 + t7046 + t7049 + t7058 + t7068 + t7071 - 1.*t1338*t5426*t909)*var2[5] + (t1338*t540*t5670 + t7030 + t7036 + t7045 + t7046 + t7049 + t7058 + t7068 + t7071 + t1338*t5689*t909)*var2[6] + (-0.15304*(-1.*t1464*t1467*t3722 - 1.*t12*t299*t3722) - 0.04845*t4738 + t3694*t5205 + t12*t3722*t5241 + t3722*t5320 - 1.*t1467*t3722*t5362 - 1.*t5161*t886 + 0.1327*(-1.*t1365*t3694 + t307*t886))*var2[7] + (-0.04845*t4793 + t3955*t5241 + t3933*t5362 + t3915*t6099 + t3767*t6121 - 0.15304*(t1464*t3933 + t7120))*var2[8] + (-0.04845*t4864 + t4011*t6198 + t3955*t6218 - 0.15304*(-1.*t1464*t4011 + t7120))*var2[9];
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

#include "dT_LeftKnee_mex.hh"

namespace SymExpression
{

void dT_LeftKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
