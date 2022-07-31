/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:49 GMT-04:00
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
  double t706;
  double t741;
  double t853;
  double t642;
  double t972;
  double t1080;
  double t842;
  double t983;
  double t1019;
  double t542;
  double t1095;
  double t1096;
  double t1119;
  double t1153;
  double t1156;
  double t1160;
  double t1189;
  double t1202;
  double t1243;
  double t66;
  double t1480;
  double t1476;
  double t1488;
  double t1543;
  double t1605;
  double t1619;
  double t1651;
  double t1386;
  double t1561;
  double t1655;
  double t1674;
  double t1748;
  double t1776;
  double t1801;
  double t1937;
  double t1940;
  double t1948;
  double t1949;
  double t1956;
  double t1962;
  double t1979;
  double t1994;
  double t1995;
  double t2025;
  double t2065;
  double t2077;
  double t2081;
  double t2234;
  double t2235;
  double t2248;
  double t2297;
  double t2305;
  double t2341;
  double t2345;
  double t2446;
  double t2459;
  double t2467;
  double t2482;
  double t2483;
  double t2486;
  double t2473;
  double t2506;
  double t2509;
  double t2534;
  double t2543;
  double t2551;
  double t2557;
  double t2568;
  double t2569;
  double t2700;
  double t2708;
  double t2726;
  double t2733;
  double t2743;
  double t2751;
  double t2753;
  double t2755;
  double t2773;
  double t2836;
  double t2865;
  double t2867;
  double t2882;
  double t2892;
  double t2917;
  double t2923;
  double t2931;
  double t3039;
  double t3052;
  double t3060;
  double t3063;
  double t3086;
  double t3087;
  double t3104;
  double t3113;
  double t3118;
  double t3147;
  double t3167;
  double t3185;
  double t3194;
  double t2395;
  double t2398;
  double t2404;
  double t3285;
  double t3291;
  double t3294;
  double t3314;
  double t3318;
  double t3339;
  double t3340;
  double t3454;
  double t3464;
  double t3489;
  double t3494;
  double t3495;
  double t3497;
  double t3510;
  double t3512;
  double t3524;
  double t3542;
  double t3545;
  double t3570;
  double t3537;
  double t3575;
  double t3582;
  double t3584;
  double t3600;
  double t3606;
  double t3617;
  double t3625;
  double t3663;
  double t3679;
  double t3685;
  double t3698;
  double t3725;
  double t3732;
  double t3738;
  double t3739;
  double t3794;
  double t3800;
  double t3812;
  double t3820;
  double t3828;
  double t3830;
  double t3831;
  double t3833;
  double t3834;
  double t1064;
  double t1253;
  double t1336;
  double t1412;
  double t1434;
  double t1437;
  double t1706;
  double t1816;
  double t1817;
  double t1844;
  double t1863;
  double t1865;
  double t2072;
  double t2085;
  double t2093;
  double t2114;
  double t2146;
  double t2161;
  double t2225;
  double t2254;
  double t2282;
  double t4091;
  double t2516;
  double t2571;
  double t2573;
  double t2597;
  double t2618;
  double t2663;
  double t2731;
  double t2775;
  double t2786;
  double t2793;
  double t2798;
  double t2817;
  double t2916;
  double t2934;
  double t2941;
  double t2950;
  double t2953;
  double t2957;
  double t3168;
  double t3198;
  double t3213;
  double t3220;
  double t3227;
  double t3244;
  double t2421;
  double t2443;
  double t3281;
  double t3297;
  double t3302;
  double t3357;
  double t3370;
  double t3374;
  double t4257;
  double t4315;
  double t4318;
  double t4321;
  double t3678;
  double t3703;
  double t3706;
  double t3749;
  double t3762;
  double t3772;
  double t4333;
  double t3813;
  double t3838;
  double t3843;
  double t3855;
  double t3860;
  double t3875;
  double t4579;
  double t4583;
  double t4626;
  double t4631;
  double t4715;
  double t4722;
  double t4779;
  double t4787;
  double t3909;
  double t3933;
  double t3949;
  double t4659;
  double t4678;
  double t4690;
  double t4590;
  double t4591;
  double t4598;
  double t4731;
  double t4734;
  double t4738;
  double t4699;
  double t4703;
  double t4710;
  double t4759;
  double t4763;
  double t4768;
  double t4788;
  double t4790;
  double t4791;
  double t4797;
  double t4798;
  double t4802;
  double t3972;
  double t3982;
  double t4007;
  double t4636;
  double t4029;
  double t4041;
  double t4048;
  double t4053;
  double t4068;
  double t4071;
  double t4089;
  double t4102;
  double t4111;
  double t4122;
  double t5332;
  double t4634;
  double t4654;
  double t4139;
  double t4141;
  double t4151;
  double t4175;
  double t4177;
  double t4184;
  double t4193;
  double t4194;
  double t4195;
  double t4979;
  double t4980;
  double t4996;
  double t5007;
  double t5013;
  double t4198;
  double t4221;
  double t4233;
  double t5089;
  double t5094;
  double t5106;
  double t5107;
  double t5108;
  double t4240;
  double t4244;
  double t4251;
  double t5258;
  double t5259;
  double t5271;
  double t5273;
  double t5296;
  double t4255;
  double t4263;
  double t5376;
  double t5379;
  double t5385;
  double t5396;
  double t5402;
  double t4272;
  double t4281;
  double t6337;
  double t4296;
  double t4299;
  double t4304;
  double t6674;
  double t6687;
  double t6694;
  double t6695;
  double t6703;
  double t6704;
  double t6718;
  double t6733;
  double t6734;
  double t6738;
  double t6742;
  double t4331;
  double t4342;
  double t4354;
  double t4365;
  double t6891;
  double t4375;
  double t4387;
  double t4389;
  t677 = Cos(var1[3]);
  t706 = Cos(var1[4]);
  t741 = Cos(var1[5]);
  t853 = Sin(var1[13]);
  t642 = Cos(var1[13]);
  t972 = Sin(var1[5]);
  t1080 = Cos(var1[15]);
  t842 = t642*t677*t706*t741;
  t983 = -1.*t677*t706*t853*t972;
  t1019 = t842 + t983;
  t542 = Sin(var1[15]);
  t1095 = Cos(var1[14]);
  t1096 = Sin(var1[4]);
  t1119 = -1.*t1095*t677*t1096;
  t1153 = Sin(var1[14]);
  t1156 = t677*t706*t741*t853;
  t1160 = t642*t677*t706*t972;
  t1189 = t1156 + t1160;
  t1202 = t1153*t1189;
  t1243 = t1119 + t1202;
  t66 = Sin(var1[16]);
  t1480 = Sin(var1[3]);
  t1476 = t677*t741*t1096;
  t1488 = t1480*t972;
  t1543 = t1476 + t1488;
  t1605 = t741*t1480;
  t1619 = -1.*t677*t1096*t972;
  t1651 = t1605 + t1619;
  t1386 = Cos(var1[16]);
  t1561 = -1.*t853*t1543;
  t1655 = t642*t1651;
  t1674 = t1561 + t1655;
  t1748 = t642*t1543;
  t1776 = t853*t1651;
  t1801 = t1748 + t1776;
  t1937 = -1.*t677*t706*t1153;
  t1940 = t853*t1543;
  t1948 = -1.*t741*t1480;
  t1949 = t677*t1096*t972;
  t1956 = t1948 + t1949;
  t1962 = t642*t1956;
  t1979 = t1940 + t1962;
  t1994 = t1095*t1979;
  t1995 = t1937 + t1994;
  t2025 = -1.*t642*t1956;
  t2065 = t1561 + t2025;
  t2077 = -1.*t853*t1956;
  t2081 = t1748 + t2077;
  t2234 = t1095*t677*t706;
  t2235 = t1153*t1979;
  t2248 = t2234 + t2235;
  t2297 = t1080*t2081;
  t2305 = -1.*t542*t2248;
  t2341 = t2297 + t2305;
  t2345 = t66*t2341;
  t2446 = -1.*t741*t1480*t1096;
  t2459 = t677*t972;
  t2467 = t2446 + t2459;
  t2482 = -1.*t677*t741;
  t2483 = -1.*t1480*t1096*t972;
  t2486 = t2482 + t2483;
  t2473 = t642*t2467;
  t2506 = -1.*t853*t2486;
  t2509 = t2473 + t2506;
  t2534 = -1.*t1095*t706*t1480;
  t2543 = t853*t2467;
  t2551 = t642*t2486;
  t2557 = t2543 + t2551;
  t2568 = t1153*t2557;
  t2569 = t2534 + t2568;
  t2700 = t642*t706*t741*t1480;
  t2708 = -1.*t706*t853*t1480*t972;
  t2726 = t2700 + t2708;
  t2733 = -1.*t1095*t1480*t1096;
  t2743 = t706*t741*t853*t1480;
  t2751 = t642*t706*t1480*t972;
  t2753 = t2743 + t2751;
  t2755 = t1153*t2753;
  t2773 = t2733 + t2755;
  t2836 = t741*t1480*t1096;
  t2865 = -1.*t677*t972;
  t2867 = t2836 + t2865;
  t2882 = -1.*t853*t2867;
  t2892 = t2882 + t2551;
  t2917 = t642*t2867;
  t2923 = t853*t2486;
  t2931 = t2917 + t2923;
  t3039 = -1.*t706*t1153*t1480;
  t3052 = t853*t2867;
  t3060 = t677*t741;
  t3063 = t1480*t1096*t972;
  t3086 = t3060 + t3063;
  t3087 = t642*t3086;
  t3104 = t3052 + t3087;
  t3113 = t1095*t3104;
  t3118 = t3039 + t3113;
  t3147 = -1.*t642*t3086;
  t3167 = t2882 + t3147;
  t3185 = -1.*t853*t3086;
  t3194 = t2917 + t3185;
  t2395 = t542*t2081;
  t2398 = t1080*t2248;
  t2404 = t2395 + t2398;
  t3285 = t1095*t706*t1480;
  t3291 = t1153*t3104;
  t3294 = t3285 + t3291;
  t3314 = t1080*t3194;
  t3318 = -1.*t542*t3294;
  t3339 = t3314 + t3318;
  t3340 = t66*t3339;
  t3454 = t1153*t1096;
  t3464 = t706*t741*t853;
  t3489 = t642*t706*t972;
  t3494 = t3464 + t3489;
  t3495 = t1095*t3494;
  t3497 = t3454 + t3495;
  t3510 = -1.*t706*t741*t853;
  t3512 = -1.*t642*t706*t972;
  t3524 = t3510 + t3512;
  t3542 = t642*t706*t741;
  t3545 = -1.*t706*t853*t972;
  t3570 = t3542 + t3545;
  t3537 = t542*t3524;
  t3575 = t1080*t1153*t3570;
  t3582 = t3537 + t3575;
  t3584 = t66*t3582;
  t3600 = t1080*t3524;
  t3606 = -1.*t1153*t542*t3570;
  t3617 = t3600 + t3606;
  t3625 = -1.*t1386*t3617;
  t3663 = t3584 + t3625;
  t3679 = -1.*t1095*t1096;
  t3685 = t1153*t3494;
  t3698 = t3679 + t3685;
  t3725 = t1080*t3570;
  t3732 = -1.*t542*t3698;
  t3738 = t3725 + t3732;
  t3739 = t66*t3738;
  t3794 = -1.*t642*t741*t1096;
  t3800 = t853*t1096*t972;
  t3812 = t3794 + t3800;
  t3820 = -1.*t1095*t706;
  t3828 = -1.*t741*t853*t1096;
  t3830 = -1.*t642*t1096*t972;
  t3831 = t3828 + t3830;
  t3833 = t1153*t3831;
  t3834 = t3820 + t3833;
  t1064 = t542*t1019;
  t1253 = t1080*t1243;
  t1336 = t1064 + t1253;
  t1412 = t1080*t1019;
  t1434 = -1.*t542*t1243;
  t1437 = t1412 + t1434;
  t1706 = t542*t1674;
  t1816 = t1080*t1153*t1801;
  t1817 = t1706 + t1816;
  t1844 = t1080*t1674;
  t1863 = -1.*t1153*t542*t1801;
  t1865 = t1844 + t1863;
  t2072 = t542*t2065;
  t2085 = t1080*t1153*t2081;
  t2093 = t2072 + t2085;
  t2114 = t1080*t2065;
  t2146 = -1.*t1153*t542*t2081;
  t2161 = t2114 + t2146;
  t2225 = -1.*t542*t2081;
  t2254 = -1.*t1080*t2248;
  t2282 = t2225 + t2254;
  t4091 = t1386*t2341;
  t2516 = t542*t2509;
  t2571 = t1080*t2569;
  t2573 = t2516 + t2571;
  t2597 = t1080*t2509;
  t2618 = -1.*t542*t2569;
  t2663 = t2597 + t2618;
  t2731 = t542*t2726;
  t2775 = t1080*t2773;
  t2786 = t2731 + t2775;
  t2793 = t1080*t2726;
  t2798 = -1.*t542*t2773;
  t2817 = t2793 + t2798;
  t2916 = t542*t2892;
  t2934 = t1080*t1153*t2931;
  t2941 = t2916 + t2934;
  t2950 = t1080*t2892;
  t2953 = -1.*t1153*t542*t2931;
  t2957 = t2950 + t2953;
  t3168 = t542*t3167;
  t3198 = t1080*t1153*t3194;
  t3213 = t3168 + t3198;
  t3220 = t1080*t3167;
  t3227 = -1.*t1153*t542*t3194;
  t3244 = t3220 + t3227;
  t2421 = t1386*t2404;
  t2443 = t2421 + t2345;
  t3281 = -1.*t542*t3194;
  t3297 = -1.*t1080*t3294;
  t3302 = t3281 + t3297;
  t3357 = t542*t3194;
  t3370 = t1080*t3294;
  t3374 = t3357 + t3370;
  t4257 = t1386*t3339;
  t4315 = t1386*t3582;
  t4318 = t66*t3617;
  t4321 = t4315 + t4318;
  t3678 = -1.*t542*t3570;
  t3703 = -1.*t1080*t3698;
  t3706 = t3678 + t3703;
  t3749 = t542*t3570;
  t3762 = t1080*t3698;
  t3772 = t3749 + t3762;
  t4333 = t1386*t3738;
  t3813 = t542*t3812;
  t3838 = t1080*t3834;
  t3843 = t3813 + t3838;
  t3855 = t1080*t3812;
  t3860 = -1.*t542*t3834;
  t3875 = t3855 + t3860;
  t4579 = -1.*t642;
  t4583 = 1. + t4579;
  t4626 = -1.*t1095;
  t4631 = 1. + t4626;
  t4715 = -1.*t1080;
  t4722 = 1. + t4715;
  t4779 = -1.*t1386;
  t4787 = 1. + t4779;
  t3909 = t1386*t1336;
  t3933 = t66*t1437;
  t3949 = t3909 + t3933;
  t4659 = -0.135*t4583;
  t4678 = 0.07996*t853;
  t4690 = 0. + t4659 + t4678;
  t4590 = 0.07996*t4583;
  t4591 = 0.135*t853;
  t4598 = 0. + t4590 + t4591;
  t4731 = -0.01004*t4722;
  t4734 = 0.08055*t542;
  t4738 = 0. + t4731 + t4734;
  t4699 = -0.135*t4631;
  t4703 = 0.08055*t1153;
  t4710 = 0. + t4699 + t4703;
  t4759 = -0.08055*t4722;
  t4763 = -0.01004*t542;
  t4768 = 0. + t4759 + t4763;
  t4788 = -0.08055*t4787;
  t4790 = -0.13004*t66;
  t4791 = 0. + t4788 + t4790;
  t4797 = -0.13004*t4787;
  t4798 = 0.08055*t66;
  t4802 = 0. + t4797 + t4798;
  t3972 = t1386*t1817;
  t3982 = t66*t1865;
  t4007 = t3972 + t3982;
  t4636 = -0.135*t1153;
  t4029 = t1080*t1386*t1995;
  t4041 = -1.*t542*t66*t1995;
  t4048 = t4029 + t4041;
  t4053 = t1386*t2093;
  t4068 = t66*t2161;
  t4071 = t4053 + t4068;
  t4089 = t66*t2282;
  t4102 = t4089 + t4091;
  t4111 = -1.*t66*t2404;
  t4122 = t4111 + t4091;
  t5332 = -1.*t66*t2341;
  t4634 = -0.08055*t4631;
  t4654 = 0. + t4634 + t4636;
  t4139 = t1386*t2573;
  t4141 = t66*t2663;
  t4151 = t4139 + t4141;
  t4175 = t1386*t2786;
  t4177 = t66*t2817;
  t4184 = t4175 + t4177;
  t4193 = t1386*t2941;
  t4194 = t66*t2957;
  t4195 = t4193 + t4194;
  t4979 = -0.135*t1095;
  t4980 = -0.08055*t1153;
  t4996 = t4979 + t4980;
  t5007 = 0.08055*t1095;
  t5013 = t5007 + t4636;
  t4198 = t1080*t1386*t3118;
  t4221 = -1.*t542*t66*t3118;
  t4233 = t4198 + t4221;
  t5089 = 0.135*t642;
  t5094 = t5089 + t4678;
  t5106 = 0.07996*t642;
  t5107 = -0.135*t853;
  t5108 = t5106 + t5107;
  t4240 = t1386*t3213;
  t4244 = t66*t3244;
  t4251 = t4240 + t4244;
  t5258 = 0.08055*t1080;
  t5259 = t5258 + t4763;
  t5271 = -0.01004*t1080;
  t5273 = -0.08055*t542;
  t5296 = t5271 + t5273;
  t4255 = t66*t3302;
  t4263 = t4255 + t4257;
  t5376 = -0.13004*t1386;
  t5379 = -0.08055*t66;
  t5385 = t5376 + t5379;
  t5396 = 0.08055*t1386;
  t5402 = t5396 + t4790;
  t4272 = -1.*t66*t3374;
  t4281 = t4272 + t4257;
  t6337 = -1.*t66*t3339;
  t4296 = t1080*t1386*t3497;
  t4299 = -1.*t542*t66*t3497;
  t4304 = t4296 + t4299;
  t6674 = t4738*t3524;
  t6687 = -0.1305*t1095*t3570;
  t6694 = t4710*t3570;
  t6695 = t1153*t4768*t3570;
  t6703 = t4791*t3582;
  t6704 = t4802*t3617;
  t6718 = -1.*t66*t3582;
  t6733 = t1386*t3617;
  t6734 = t6718 + t6733;
  t6738 = -0.13004*t6734;
  t6742 = -0.08055*t4321;
  t4331 = t66*t3706;
  t4342 = t4331 + t4333;
  t4354 = -1.*t66*t3772;
  t4365 = t4354 + t4333;
  t6891 = -1.*t66*t3738;
  t4375 = t1386*t3843;
  t4387 = t66*t3875;
  t4389 = t4375 + t4387;
  p_output1[0]=(-1.*t1386*t2663 + t2573*t66)*var2[3] + (-1.*t1386*t1437 + t1336*t66)*var2[4] + (-1.*t1386*t1865 + t1817*t66)*var2[5] + (-1.*t1386*t2161 + t2093*t66)*var2[13] + (t1386*t1995*t542 + t1080*t1995*t66)*var2[14] + (-1.*t1386*t2282 + t2345)*var2[15] + t2443*var2[16];
  p_output1[1]=(-1.*t1386*t2341 + t2404*t66)*var2[3] + (-1.*t1386*t2817 + t2786*t66)*var2[4] + (-1.*t1386*t2957 + t2941*t66)*var2[5] + (-1.*t1386*t3244 + t3213*t66)*var2[13] + (t1386*t3118*t542 + t1080*t3118*t66)*var2[14] + (-1.*t1386*t3302 + t3340)*var2[15] + (t3340 + t1386*t3374)*var2[16];
  p_output1[2]=(-1.*t1386*t3875 + t3843*t66)*var2[4] + t3663*var2[5] + t3663*var2[13] + (t1386*t3497*t542 + t1080*t3497*t66)*var2[14] + (-1.*t1386*t3706 + t3739)*var2[15] + (t3739 + t1386*t3772)*var2[16];
  p_output1[3]=0;
  p_output1[4]=t4151*var2[3] + t3949*var2[4] + t4007*var2[5] + t4071*var2[13] + t4048*var2[14] + t4102*var2[15] + t4122*var2[16];
  p_output1[5]=t2443*var2[3] + t4184*var2[4] + t4195*var2[5] + t4251*var2[13] + t4233*var2[14] + t4263*var2[15] + t4281*var2[16];
  p_output1[6]=t4389*var2[4] + t4321*var2[5] + t4321*var2[13] + t4304*var2[14] + t4342*var2[15] + t4365*var2[16];
  p_output1[7]=0;
  p_output1[8]=(-1.*t1095*t2557 + t3039)*var2[3] + (-1.*t1095*t1189 - 1.*t1096*t1153*t677)*var2[4] - 1.*t1095*t1801*var2[5] - 1.*t1095*t2081*var2[13] + t2248*var2[14];
  p_output1[9]=(-1.*t1095*t1979 + t1153*t677*t706)*var2[3] + (-1.*t1096*t1153*t1480 - 1.*t1095*t2753)*var2[4] - 1.*t1095*t2931*var2[5] - 1.*t1095*t3194*var2[13] + t3294*var2[14];
  p_output1[10]=(-1.*t1095*t3831 - 1.*t1153*t706)*var2[4] - 1.*t1095*t3570*var2[5] - 1.*t1095*t3570*var2[13] + t3698*var2[14];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.08055*t4151 + t2467*t4598 + t2486*t4690 + t2557*t4710 + t2509*t4738 + t2569*t4768 + t2573*t4791 + t2663*t4802 - 0.13004*(t1386*t2663 - 1.*t2573*t66) - 1.*t1480*t4654*t706 - 0.1305*(t1095*t2557 + t1153*t1480*t706))*var2[3] + (-0.08055*t3949 + t1189*t4710 + t1019*t4738 + t1243*t4768 + t1336*t4791 + t1437*t4802 - 0.13004*(t1386*t1437 - 1.*t1336*t66) - 1.*t1096*t4654*t677 - 0.1305*(t1095*t1189 + t1096*t1153*t677) + t4598*t677*t706*t741 + t4690*t677*t706*t972)*var2[4] + (-0.1305*t1095*t1801 - 0.08055*t4007 + t1651*t4598 + t1543*t4690 + t1801*t4710 + t1674*t4738 + t1153*t1801*t4768 + t1817*t4791 + t1865*t4802 - 0.13004*(t1386*t1865 - 1.*t1817*t66))*var2[5] + (-0.1305*t1095*t2081 - 0.08055*t4071 + t2081*t4710 + t2065*t4738 + t1153*t2081*t4768 + t2093*t4791 + t2161*t4802 + t1543*t5094 + t1956*t5108 - 0.13004*(t1386*t2161 - 1.*t2093*t66))*var2[13] + (-0.08055*t4048 + t1995*t4768 + t1080*t1995*t4791 + t1979*t5013 - 1.*t1995*t4802*t542 - 0.13004*(-1.*t1386*t1995*t542 - 1.*t1080*t1995*t66) + t4996*t677*t706 - 0.1305*(-1.*t1153*t1979 - 1.*t1095*t677*t706))*var2[14] + (-0.08055*t4102 + t2341*t4791 + t2282*t4802 + t2081*t5259 + t2248*t5296 - 0.13004*(t1386*t2282 + t5332))*var2[15] + (-0.08055*t4122 - 0.13004*(-1.*t1386*t2404 + t5332) + t2404*t5385 + t2341*t5402)*var2[16];
  p_output1[13]=var2[1] + (-0.1305*t1995 - 0.08055*t2443 - 0.13004*t4122 + t1543*t4598 + t1956*t4690 + t1979*t4710 + t2081*t4738 + t2248*t4768 + t2404*t4791 + t2341*t4802 + t4654*t677*t706)*var2[3] + (-0.1305*(t1096*t1153*t1480 + t1095*t2753) - 0.08055*t4184 - 1.*t1096*t1480*t4654 + t2753*t4710 + t2726*t4738 + t2773*t4768 + t2786*t4791 + t2817*t4802 - 0.13004*(t1386*t2817 - 1.*t2786*t66) + t1480*t4598*t706*t741 + t1480*t4690*t706*t972)*var2[4] + (-0.1305*t1095*t2931 - 0.08055*t4195 + t2486*t4598 + t2867*t4690 + t2931*t4710 + t2892*t4738 + t1153*t2931*t4768 + t2941*t4791 + t2957*t4802 - 0.13004*(t1386*t2957 - 1.*t2941*t66))*var2[5] + (-0.1305*t1095*t3194 - 0.08055*t4251 + t3194*t4710 + t3167*t4738 + t1153*t3194*t4768 + t3213*t4791 + t3244*t4802 + t2867*t5094 + t3086*t5108 - 0.13004*(t1386*t3244 - 1.*t3213*t66))*var2[13] + (-0.1305*(t2534 - 1.*t1153*t3104) - 0.08055*t4233 + t3118*t4768 + t1080*t3118*t4791 + t3104*t5013 - 1.*t3118*t4802*t542 - 0.13004*(-1.*t1386*t3118*t542 - 1.*t1080*t3118*t66) + t1480*t4996*t706)*var2[14] + (-0.08055*t4263 + t3339*t4791 + t3302*t4802 + t3194*t5259 + t3294*t5296 - 0.13004*(t1386*t3302 + t6337))*var2[15] + (-0.08055*t4281 + t3374*t5385 + t3339*t5402 - 0.13004*(-1.*t1386*t3374 + t6337))*var2[16];
  p_output1[14]=var2[2] + (-0.08055*t4389 + t3831*t4710 + t3812*t4738 + t3834*t4768 + t3843*t4791 + t3875*t4802 - 0.13004*(t1386*t3875 - 1.*t3843*t66) - 1.*t4654*t706 - 0.1305*(t1095*t3831 + t1153*t706) - 1.*t1096*t4598*t741 - 1.*t1096*t4690*t972)*var2[4] + (t6674 + t6687 + t6694 + t6695 + t6703 + t6704 + t6738 + t6742 + t4690*t706*t741 - 1.*t4598*t706*t972)*var2[5] + (t6674 + t6687 + t6694 + t6695 + t6703 + t6704 + t6738 + t6742 + t5094*t706*t741 + t5108*t706*t972)*var2[13] + (-0.1305*(t1095*t1096 - 1.*t1153*t3494) - 0.08055*t4304 + t3497*t4768 + t1080*t3497*t4791 - 1.*t1096*t4996 + t3494*t5013 - 1.*t3497*t4802*t542 - 0.13004*(-1.*t1386*t3497*t542 - 1.*t1080*t3497*t66))*var2[14] + (-0.08055*t4342 + t3738*t4791 + t3706*t4802 + t3570*t5259 + t3698*t5296 - 0.13004*(t1386*t3706 + t6891))*var2[15] + (-0.08055*t4365 + t3772*t5385 + t3738*t5402 - 0.13004*(-1.*t1386*t3772 + t6891))*var2[16];
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

#include "dT_RightKneeJoint_mex.hh"

namespace SymExpression
{

void dT_RightKneeJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
