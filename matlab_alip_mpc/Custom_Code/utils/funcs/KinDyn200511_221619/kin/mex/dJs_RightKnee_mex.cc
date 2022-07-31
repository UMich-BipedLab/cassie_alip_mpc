/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:00 GMT-04:00
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
  double t240;
  double t384;
  double t940;
  double t973;
  double t967;
  double t994;
  double t1015;
  double t1031;
  double t1779;
  double t1796;
  double t1090;
  double t1105;
  double t1109;
  double t1116;
  double t1879;
  double t1885;
  double t1895;
  double t2179;
  double t2190;
  double t2191;
  double t1213;
  double t1276;
  double t1369;
  double t1382;
  double t1411;
  double t1455;
  double t1466;
  double t1467;
  double t1578;
  double t1597;
  double t1619;
  double t1660;
  double t1736;
  double t1744;
  double t1764;
  double t2733;
  double t2563;
  double t2601;
  double t2606;
  double t2760;
  double t2745;
  double t2765;
  double t2771;
  double t2875;
  double t2888;
  double t2438;
  double t2444;
  double t2474;
  double t2889;
  double t2894;
  double t2909;
  double t2939;
  double t2949;
  double t2951;
  double t2147;
  double t2154;
  double t2155;
  double t3000;
  double t3014;
  double t3023;
  double t2978;
  double t2980;
  double t2983;
  double t2993;
  double t2815;
  double t2816;
  double t2822;
  double t3079;
  double t3080;
  double t3093;
  double t3094;
  double t3095;
  double t1969;
  double t1987;
  double t2013;
  double t3060;
  double t3037;
  double t3123;
  double t3132;
  double t3133;
  double t3136;
  double t3137;
  double t3149;
  double t3153;
  double t3166;
  double t3168;
  double t3175;
  double t3291;
  double t3298;
  double t3308;
  double t3425;
  double t3429;
  double t3433;
  double t3474;
  double t3481;
  double t3482;
  double t3489;
  double t3621;
  double t3664;
  double t3269;
  double t3281;
  double t3284;
  double t2927;
  double t2954;
  double t3437;
  double t3451;
  double t3456;
  double t3819;
  double t3193;
  double t3622;
  double t3638;
  double t3839;
  double t3848;
  double t3849;
  double t3864;
  double t3903;
  double t3064;
  double t3073;
  double t3705;
  double t3712;
  double t3593;
  double t3598;
  double t3599;
  double t4175;
  double t4182;
  double t4286;
  double t4294;
  double t4183;
  double t4201;
  double t4217;
  double t3540;
  double t3547;
  double t3550;
  double t4298;
  double t4307;
  double t4315;
  double t4322;
  double t4337;
  double t4343;
  double t3033;
  double t3040;
  double t3185;
  double t3191;
  double t4317;
  double t4345;
  double t4350;
  double t3688;
  double t3690;
  double t4361;
  double t4364;
  double t4369;
  double t3196;
  double t3197;
  double t3207;
  double t3208;
  double t4245;
  double t4246;
  double t4253;
  double t4256;
  double t4259;
  double t4260;
  double t3229;
  double t3232;
  double t3239;
  double t3462;
  double t3465;
  double t3472;
  double t3250;
  double t3253;
  double t3321;
  double t3335;
  double t3799;
  double t3805;
  double t3811;
  double t4450;
  double t4452;
  double t4453;
  double t4351;
  double t4352;
  double t4353;
  double t4637;
  double t4639;
  double t4642;
  double t4660;
  double t4664;
  double t4406;
  double t3160;
  double t3161;
  double t4445;
  double t4458;
  double t3086;
  double t3101;
  double t3648;
  double t3649;
  double t3669;
  double t3673;
  double t4911;
  double t4912;
  double t4916;
  double t3416;
  double t3417;
  double t3491;
  double t3499;
  double t4602;
  double t4606;
  double t4608;
  double t5005;
  double t5007;
  double t5009;
  double t3726;
  double t3729;
  double t4965;
  double t5010;
  double t3718;
  double t3719;
  double t3056;
  double t3558;
  double t3559;
  double t4718;
  double t4742;
  double t4747;
  double t5314;
  double t3825;
  double t3828;
  double t4503;
  double t4504;
  double t4514;
  double t4373;
  double t4378;
  double t3872;
  double t3885;
  double t5098;
  double t5124;
  double t5125;
  double t5508;
  double t3909;
  double t3911;
  double t3941;
  double t3942;
  double t5565;
  double t5568;
  double t5569;
  double t4042;
  double t4043;
  double t5315;
  double t5324;
  double t5374;
  double t5376;
  double t5379;
  double t4772;
  double t4778;
  double t5599;
  double t5600;
  double t4006;
  double t4007;
  double t3988;
  double t3993;
  double t5286;
  double t5291;
  double t5293;
  double t4889;
  double t4892;
  double t4895;
  double t4178;
  double t4218;
  double t4227;
  double t4241;
  double t4269;
  double t6129;
  double t6134;
  double t6139;
  double t6158;
  double t6044;
  double t6061;
  double t6089;
  double t6144;
  double t6159;
  double t6168;
  double t6176;
  double t6178;
  double t6183;
  double t4407;
  double t4412;
  double t6385;
  double t6403;
  double t6422;
  double t6428;
  double t6433;
  double t6010;
  double t6012;
  double t6014;
  double t6174;
  double t6234;
  double t6238;
  double t4434;
  double t6603;
  double t6607;
  double t4827;
  double t6626;
  double t6627;
  double t6628;
  double t6629;
  double t4658;
  double t4674;
  double t4699;
  double t4700;
  double t4485;
  double t4488;
  double t4489;
  double t4540;
  double t4561;
  double t5149;
  double t5150;
  double t5171;
  double t4569;
  double t4570;
  double t5450;
  double t5456;
  double t5458;
  double t4871;
  double t4910;
  double t4946;
  double t7016;
  double t7019;
  double t7020;
  double t7057;
  double t7060;
  double t5244;
  double t7152;
  double t7159;
  double t7172;
  double t7176;
  double t5342;
  double t5348;
  double t5355;
  double t5357;
  double t5139;
  double t5140;
  double t5202;
  double t5204;
  double t6453;
  double t6455;
  double t6462;
  double t5329;
  double t5418;
  double t5420;
  double t5432;
  double t5440;
  double t5478;
  double t5482;
  double t5541;
  double t5546;
  double t6247;
  double t6263;
  double t5604;
  double t5612;
  double t7992;
  double t8002;
  double t8005;
  double t8050;
  double t8104;
  double t8106;
  double t8111;
  double t8113;
  double t8128;
  double t8129;
  double t8144;
  double t8146;
  double t5806;
  double t5832;
  double t5764;
  double t5770;
  double t5783;
  double t5784;
  double t5679;
  double t5866;
  double t5875;
  double t5884;
  double t5889;
  double t5890;
  double t5892;
  double t5901;
  double t5903;
  double t5904;
  double t5921;
  double t5924;
  double t5927;
  double t5929;
  double t5930;
  double t5933;
  double t5946;
  double t5951;
  double t6004;
  double t6017;
  double t6024;
  double t6032;
  double t6037;
  double t6092;
  double t6095;
  double t6101;
  double t6106;
  double t6111;
  double t6113;
  t240 = Cos(var1[3]);
  t384 = Sin(var1[3]);
  t940 = Cos(var1[4]);
  t973 = Sin(var1[4]);
  t967 = -1.*var2[2]*t940*t384;
  t994 = -1.*var2[1]*t973;
  t1015 = -1.*var1[1]*t940;
  t1031 = var1[2]*t384*t973;
  t1779 = Cos(var1[5]);
  t1796 = Sin(var1[5]);
  t1090 = var2[2]*t240*t940;
  t1105 = var2[0]*t973;
  t1109 = var1[0]*t940;
  t1116 = -1.*var1[2]*t240*t973;
  t1879 = t240*t1779*t973;
  t1885 = t384*t1796;
  t1895 = t1879 + t1885;
  t2179 = -1.*t240*t1779;
  t2190 = -1.*t384*t973*t1796;
  t2191 = t2179 + t2190;
  t1213 = -1.*var2[1]*t240*t940;
  t1276 = var2[0]*t940*t384;
  t1369 = var1[0]*t240*t940;
  t1382 = var1[1]*t940*t384;
  t1411 = t1369 + t1382;
  t1455 = var2[3]*t1411;
  t1466 = var1[1]*t240*t973;
  t1467 = -1.*var1[0]*t384*t973;
  t1578 = -1.*var2[3]*t940*t384;
  t1597 = -1.*var2[4]*t240*t973;
  t1619 = t1578 + t1597;
  t1660 = var2[3]*t240*t940;
  t1736 = -1.*var2[4]*t384*t973;
  t1744 = t1660 + t1736;
  t1764 = -1.*var2[4]*t940;
  t2733 = Cos(var1[13]);
  t2563 = t1779*t384*t973;
  t2601 = -1.*t240*t1796;
  t2606 = t2563 + t2601;
  t2760 = Sin(var1[13]);
  t2745 = t2733*t940*t1779;
  t2765 = -1.*t940*t2760*t1796;
  t2771 = t2745 + t2765;
  t2875 = -1.*t2733;
  t2888 = 1. + t2875;
  t2438 = -1.*t1779*t384;
  t2444 = t240*t973*t1796;
  t2474 = t2438 + t2444;
  t2889 = 0.07996*t2888;
  t2894 = 0.135*t2760;
  t2909 = 0. + t2889 + t2894;
  t2939 = -0.135*t2888;
  t2949 = 0.07996*t2760;
  t2951 = 0. + t2939 + t2949;
  t2147 = -1.*t1779*t384*t973;
  t2154 = t240*t1796;
  t2155 = t2147 + t2154;
  t3000 = t2733*t1895;
  t3014 = -1.*t2760*t2474;
  t3023 = t3000 + t3014;
  t2978 = -1.*var1[2];
  t2980 = -1.*t940*t1779*t2909;
  t2983 = -1.*t940*t2951*t1796;
  t2993 = 0. + t2978 + t2980 + t2983;
  t2815 = t240*t1779;
  t2816 = t384*t973*t1796;
  t2822 = t2815 + t2816;
  t3079 = 0.135*t2733;
  t3080 = t3079 + t2949;
  t3093 = 0.07996*t2733;
  t3094 = -0.135*t2760;
  t3095 = t3093 + t3094;
  t1969 = t1779*t384;
  t1987 = -1.*t240*t973*t1796;
  t2013 = t1969 + t1987;
  t3060 = -1.*t2760*t2606;
  t3037 = t2733*t2191;
  t3123 = -1.*t940*t1779*t2760;
  t3132 = -1.*t2733*t940*t1796;
  t3133 = t3123 + t3132;
  t3136 = t2909*t2606;
  t3137 = t2951*t2822;
  t3149 = 0. + var1[1] + t3136 + t3137;
  t3153 = t3133*t3149;
  t3166 = t2733*t2606;
  t3168 = -1.*t2760*t2822;
  t3175 = t3166 + t3168;
  t3291 = -1.*t2733*t1779*t973;
  t3298 = t2760*t973*t1796;
  t3308 = t3291 + t3298;
  t3425 = t940*t1779*t2909;
  t3429 = t940*t2951*t1796;
  t3433 = 0. + var1[2] + t3425 + t3429;
  t3474 = -1.*var1[0];
  t3481 = -1.*t2909*t1895;
  t3482 = -1.*t2951*t2474;
  t3489 = 0. + t3474 + t3481 + t3482;
  t3621 = -1.*t2760*t1895;
  t3664 = t3133*t3489;
  t3269 = t2733*t940*t1779*t384;
  t3281 = -1.*t940*t2760*t384*t1796;
  t3284 = t3269 + t3281;
  t2927 = t2909*t1895;
  t2954 = t2951*t2474;
  t3437 = t2733*t240*t940*t1779;
  t3451 = -1.*t240*t940*t2760*t1796;
  t3456 = t3437 + t3451;
  t3819 = 0. + var1[0] + t2927 + t2954;
  t3193 = t3060 + t3037;
  t3622 = t2733*t2013;
  t3638 = t3621 + t3622;
  t3839 = -1.*var1[1];
  t3848 = -1.*t2909*t2606;
  t3849 = -1.*t2951*t2822;
  t3864 = 0. + t3839 + t3848 + t3849;
  t3903 = 0.08055*t2771;
  t3064 = -1.*t2733*t2822;
  t3073 = t3060 + t3064;
  t3705 = -1.*t2733*t2474;
  t3712 = t3621 + t3705;
  t3593 = t2733*t2155;
  t3598 = -1.*t2760*t2191;
  t3599 = t3593 + t3598;
  t4175 = Sin(var1[14]);
  t4182 = Cos(var1[14]);
  t4286 = -1.*t4182;
  t4294 = 1. + t4286;
  t4183 = t940*t1779*t2760;
  t4201 = t2733*t940*t1796;
  t4217 = t4183 + t4201;
  t3540 = t2760*t1895;
  t3547 = t2733*t2474;
  t3550 = t3540 + t3547;
  t4298 = -0.08055*t4294;
  t4307 = -0.135*t4175;
  t4315 = 0. + t4298 + t4307;
  t4322 = -0.135*t4294;
  t4337 = 0.08055*t4175;
  t4343 = 0. + t4322 + t4337;
  t3033 = t2760*t2155;
  t3040 = t3033 + t3037;
  t3185 = t2760*t2013;
  t3191 = t3000 + t3185;
  t4317 = t4315*t973;
  t4345 = -1.*t4343*t4217;
  t4350 = 0. + t2978 + t2980 + t4317 + t2983 + t4345;
  t3688 = t2760*t2191;
  t3690 = t3166 + t3688;
  t4361 = t4175*t973;
  t4364 = t4182*t4217;
  t4369 = t4361 + t4364;
  t3196 = t2951*t2606;
  t3197 = t2909*t2191;
  t3207 = -1.*t940*t1779*t2951;
  t3208 = t940*t2909*t1796;
  t4245 = -1.*t940*t4175*t384;
  t4246 = t2760*t2606;
  t4253 = t2733*t2822;
  t4256 = t4246 + t4253;
  t4259 = t4182*t4256;
  t4260 = t4245 + t4259;
  t3229 = t240*t940*t1779*t2760;
  t3232 = t2733*t240*t940*t1796;
  t3239 = t3229 + t3232;
  t3462 = t940*t1779*t2760*t384;
  t3465 = t2733*t940*t384*t1796;
  t3472 = t3462 + t3465;
  t3250 = t940*t1779*t2909*t384;
  t3253 = t940*t2951*t384*t1796;
  t3321 = t1779*t2909*t973;
  t3335 = t2951*t973*t1796;
  t3799 = -1.*t1779*t2760*t973;
  t3805 = -1.*t2733*t973*t1796;
  t3811 = t3799 + t3805;
  t4450 = t940*t4315*t384;
  t4452 = t4343*t4256;
  t4453 = 0. + var1[1] + t4450 + t3136 + t3137 + t4452;
  t4351 = -1.*t240*t940*t4175;
  t4352 = t4182*t3550;
  t4353 = t4351 + t4352;
  t4637 = -0.135*t4182;
  t4639 = -0.08055*t4175;
  t4642 = t4637 + t4639;
  t4660 = 0.08055*t4182;
  t4664 = t4660 + t4307;
  t4406 = -1.*t4182*t940*t384;
  t3160 = -1.*t940*t1779*t3080;
  t3161 = -1.*t940*t3095*t1796;
  t4445 = -1.*t4343*t2771;
  t4458 = -1.*t4182*t2771*t4453;
  t3086 = t3080*t2606;
  t3101 = t3095*t2822;
  t3648 = -1.*t2951*t1895;
  t3649 = -1.*t2909*t2013;
  t3669 = t940*t1779*t2951;
  t3673 = -1.*t940*t2909*t1796;
  t4911 = -1.*t4315*t973;
  t4912 = t4343*t4217;
  t4916 = 0. + var1[2] + t3425 + t4911 + t3429 + t4912;
  t3416 = -1.*t240*t940*t1779*t2909;
  t3417 = -1.*t240*t940*t2951*t1796;
  t3491 = -1.*t1779*t2909*t973;
  t3499 = -1.*t2951*t973*t1796;
  t4602 = t940*t4175;
  t4606 = t4182*t3811;
  t4608 = t4602 + t4606;
  t5005 = -1.*t240*t940*t4315;
  t5007 = -1.*t4343*t3550;
  t5009 = 0. + t3474 + t5005 + t3481 + t3482 + t5007;
  t3726 = t940*t1779*t3080;
  t3729 = t940*t3095*t1796;
  t4965 = t4343*t2771;
  t5010 = -1.*t4182*t2771*t5009;
  t3718 = -1.*t3080*t1895;
  t3719 = -1.*t3095*t2474;
  t3056 = 0.08055*t3023;
  t3558 = -1.*t2909*t2155;
  t3559 = -1.*t2951*t2191;
  t4718 = t4182*t973;
  t4742 = -1.*t4175*t4217;
  t4747 = t4718 + t4742;
  t5314 = t940*t4175*t384;
  t3825 = -1.*t940*t1779*t2909*t384;
  t3828 = -1.*t940*t2951*t384*t1796;
  t4503 = t4175*t384*t973;
  t4504 = t4182*t3472;
  t4514 = t4503 + t4504;
  t4373 = t240*t940*t4315;
  t4378 = t4343*t3550;
  t3872 = t240*t940*t1779*t2909;
  t3885 = t240*t940*t2951*t1796;
  t5098 = t240*t4175*t973;
  t5124 = t4182*t3239;
  t5125 = t5098 + t5124;
  t5508 = 0. + var1[0] + t4373 + t2927 + t2954 + t4378;
  t3909 = -1.*t2951*t2606;
  t3911 = -1.*t2909*t2191;
  t3941 = t2951*t1895;
  t3942 = t2909*t2013;
  t5565 = -1.*t940*t4315*t384;
  t5568 = -1.*t4343*t4256;
  t5569 = 0. + t3839 + t5565 + t3848 + t3849 + t5568;
  t4042 = t2909*t2155;
  t4043 = t2951*t2191;
  t5315 = t4182*t3040;
  t5324 = t5314 + t5315;
  t5374 = -1.*t4182*t240*t940;
  t5376 = -1.*t4175*t3550;
  t5379 = t5374 + t5376;
  t4772 = -1.*t4175*t4256;
  t4778 = t4406 + t4772;
  t5599 = 0.08055*t3133;
  t5600 = -0.01004*t4175*t2771;
  t4006 = t3080*t1895;
  t4007 = t3095*t2474;
  t3988 = -1.*t3080*t2606;
  t3993 = -1.*t3095*t2822;
  t5286 = t4182*t240*t940;
  t5291 = t4175*t3550;
  t5293 = t5286 + t5291;
  t4889 = t240*t940*t4175;
  t4892 = -1.*t4182*t3550;
  t4895 = t4889 + t4892;
  t4178 = -1.*t4175*t973;
  t4218 = -1.*t4182*t4217;
  t4227 = t4178 + t4218;
  t4241 = var2[1]*t4227;
  t4269 = var2[2]*t4260;
  t6129 = Cos(var1[15]);
  t6134 = -1.*t6129;
  t6139 = 1. + t6134;
  t6158 = Sin(var1[15]);
  t6044 = -1.*t4182*t973;
  t6061 = t4175*t4217;
  t6089 = t6044 + t6061;
  t6144 = -0.01004*t6139;
  t6159 = 0.08055*t6158;
  t6168 = 0. + t6144 + t6159;
  t6176 = -0.08055*t6139;
  t6178 = -0.01004*t6158;
  t6183 = 0. + t6176 + t6178;
  t4407 = t4175*t3040;
  t4412 = t4406 + t4407;
  t6385 = 0.08055*t6129;
  t6403 = t6385 + t6178;
  t6422 = -0.01004*t6129;
  t6428 = -0.08055*t6158;
  t6433 = t6422 + t6428;
  t6010 = t4182*t940*t384;
  t6012 = t4175*t4256;
  t6014 = t6010 + t6012;
  t6174 = -1.*t6168*t2771;
  t6234 = -1.*t6183*t6089;
  t6238 = 0. + t2978 + t2980 + t4317 + t2983 + t4345 + t6174 + t6234;
  t4434 = t4343*t3690;
  t6603 = -1.*t6168*t3133;
  t6607 = -1.*t4175*t6183*t2771;
  t4827 = t4343*t3175;
  t6626 = t6168*t3175;
  t6627 = t6183*t6014;
  t6628 = 0. + var1[1] + t4450 + t3136 + t3137 + t4452 + t6626 + t6627;
  t6629 = -1.*t4182*t2771*t6628;
  t4658 = t4642*t973;
  t4674 = -1.*t4664*t4217;
  t4699 = t940*t4642*t384;
  t4700 = t4664*t4256;
  t4485 = -1.*t4182*t240*t973;
  t4488 = t4175*t3239;
  t4489 = t4485 + t4488;
  t4540 = -1.*t4315*t384*t973;
  t4561 = t4343*t3472;
  t5149 = -1.*t4182*t384*t973;
  t5150 = t4175*t3472;
  t5171 = t5149 + t5150;
  t4569 = t940*t4315;
  t4570 = -1.*t4343*t3811;
  t5450 = -1.*t4182*t940;
  t5456 = t4175*t3811;
  t5458 = t5450 + t5456;
  t4871 = var2[0]*t4369;
  t4910 = var2[2]*t4895;
  t4946 = -1.*t4343*t3191;
  t7016 = t6168*t2771;
  t7019 = t6183*t6089;
  t7020 = 0. + var1[2] + t3425 + t4911 + t3429 + t4912 + t7016 + t7019;
  t7057 = t6168*t3133;
  t7060 = t4175*t6183*t2771;
  t5244 = -1.*t4343*t3023;
  t7152 = -1.*t6168*t3023;
  t7159 = -1.*t6183*t5293;
  t7172 = 0. + t3474 + t5005 + t3481 + t3482 + t5007 + t7152 + t7159;
  t7176 = -1.*t4182*t2771*t7172;
  t5342 = -1.*t4642*t973;
  t5348 = t4664*t4217;
  t5355 = -1.*t240*t940*t4642;
  t5357 = -1.*t4664*t3550;
  t5139 = t240*t4315*t973;
  t5140 = -1.*t4343*t3239;
  t5202 = -1.*t940*t4315;
  t5204 = t4343*t3811;
  t6453 = t6129*t3023;
  t6455 = -1.*t6158*t5293;
  t6462 = t6453 + t6455;
  t5329 = -1.*t4343*t3040;
  t5418 = var2[1]*t4353;
  t5420 = -1.*t4182*t4256;
  t5432 = t5314 + t5420;
  t5440 = var2[0]*t5432;
  t5478 = t4315*t384*t973;
  t5482 = -1.*t4343*t3472;
  t5541 = -1.*t240*t4315*t973;
  t5546 = t4343*t3239;
  t6247 = t6168*t3023;
  t6263 = t6183*t5293;
  t5604 = -1.*t4343*t3690;
  t5612 = t4343*t3191;
  t7992 = 0. + var1[0] + t4373 + t2927 + t2954 + t4378 + t6247 + t6263;
  t8002 = -1.*t6168*t3175;
  t8005 = -1.*t6183*t6014;
  t8050 = 0. + t3839 + t5565 + t3848 + t3849 + t5568 + t8002 + t8005;
  t8104 = t6158*t3133;
  t8106 = t6129*t4175*t2771;
  t8111 = t8104 + t8106;
  t8113 = -0.13004*t8111;
  t8128 = t6129*t3133;
  t8129 = -1.*t4175*t6158*t2771;
  t8144 = t8128 + t8129;
  t8146 = 0.08055*t8144;
  t5806 = t4343*t3023;
  t5832 = -1.*t4343*t3175;
  t5764 = t240*t940*t4642;
  t5770 = t4664*t3550;
  t5783 = -1.*t940*t4642*t384;
  t5784 = -1.*t4664*t4256;
  t5679 = t4343*t3040;
  t5866 = -1.*t240*t4175*t973;
  t5875 = -1.*t4182*t3239;
  t5884 = t5866 + t5875;
  t5889 = var2[4]*t5884;
  t5890 = -1.*var2[5]*t4182*t3191;
  t5892 = -1.*var2[13]*t4182*t3023;
  t5901 = var2[14]*t5293;
  t5903 = -1.*t4182*t3040;
  t5904 = t4245 + t5903;
  t5921 = var2[3]*t5904;
  t5924 = t5889 + t5890 + t5892 + t5901 + t5921;
  t5927 = -1.*t4175*t384*t973;
  t5929 = -1.*t4182*t3472;
  t5930 = t5927 + t5929;
  t5933 = var2[4]*t5930;
  t5946 = -1.*var2[5]*t4182*t3690;
  t5951 = -1.*var2[13]*t4182*t3175;
  t6004 = var2[3]*t4895;
  t6017 = var2[14]*t6014;
  t6024 = t5933 + t5946 + t5951 + t6004 + t6017;
  t6032 = -1.*var2[13]*t4182*t2771;
  t6037 = -1.*var2[5]*t4182*t2771;
  t6092 = var2[14]*t6089;
  t6095 = -1.*t940*t4175;
  t6101 = -1.*t4182*t3811;
  t6106 = t6095 + t6101;
  t6111 = var2[4]*t6106;
  t6113 = t6032 + t6037 + t6092 + t6111;
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
  p_output1[24]=-1.*t240*var2[2] + t384*var1[2]*var2[3];
  p_output1[25]=-1.*t384*var2[2] - 1.*t240*var1[2]*var2[3];
  p_output1[26]=t240*var2[0] + t384*var2[1] + (-1.*t384*var1[0] + t240*var1[1])*var2[3];
  p_output1[27]=-1.*t240*var2[3];
  p_output1[28]=-1.*t384*var2[3];
  p_output1[29]=0;
  p_output1[30]=t967 + t994 - 1.*t240*t940*var1[2]*var2[3] + (t1015 + t1031)*var2[4];
  p_output1[31]=t1090 + t1105 - 1.*t384*t940*var1[2]*var2[3] + (t1109 + t1116)*var2[4];
  p_output1[32]=t1213 + t1276 + t1455 + (t1466 + t1467)*var2[4];
  p_output1[33]=t1619;
  p_output1[34]=t1744;
  p_output1[35]=t1764;
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
  p_output1[78]=t967 + t994 + (0.135*t2155 + 0.07996*t2191 - 1.*t240*t940*var1[2])*var2[3] + (t1015 + t1031 + 0.135*t1779*t240*t940 + 0.07996*t1796*t240*t940)*var2[4] + (0.07996*t1895 + 0.135*t2013)*var2[5];
  p_output1[79]=t1090 + t1105 + (0.135*t1895 + 0.07996*t2474 - 1.*t384*t940*var1[2])*var2[3] + (t1109 + t1116 + 0.135*t1779*t384*t940 + 0.07996*t1796*t384*t940)*var2[4] + (0.135*t2191 + 0.07996*t2606)*var2[5];
  p_output1[80]=t1213 + t1276 + t1455 + (t1466 + t1467 - 0.135*t1779*t973 - 0.07996*t1796*t973)*var2[4] + (0.07996*t1779*t940 - 0.135*t1796*t940)*var2[5];
  p_output1[81]=t1619;
  p_output1[82]=t1744;
  p_output1[83]=t1764;
  p_output1[84]=t2771*var2[1] + (-1.*t2606*t2733 + t2760*t2822)*var2[2] + (t2771*(t2927 + t2954) + t2993*t3023 + 0.08055*t3040 + 0.135*t384*t940)*var2[3] + (0.08055*t3239 + t2771*(t3250 + t3253) + t2993*t3284 + t3149*t3308 + t3175*(t3321 + t3335) + 0.135*t240*t973)*var2[4] + (t3153 + 0.08055*t3191 + t2993*t3193 + t2771*(t3196 + t3197) + t3175*(t3207 + t3208))*var2[5] + (t3056 + t2993*t3073 + t2771*(t3086 + t3101) + t3153 + (t3160 + t3161)*t3175)*var2[13];
  p_output1[85]=(-1.*t1779*t2733*t940 + t1796*t2760*t940)*var2[0] + t3023*var2[2] + (0.08055*t3550 + t2771*(t3558 + t3559) + t3433*t3599 - 0.135*t240*t940)*var2[3] + (t2771*(t3416 + t3417) + t3433*t3456 + 0.08055*t3472 + t3308*t3489 + t3023*(t3491 + t3499) + 0.135*t384*t973)*var2[4] + (t3433*t3638 + t2771*(t3648 + t3649) + t3664 + t3023*(t3669 + t3673) + 0.08055*t3690)*var2[5] + (0.08055*t3175 + t3664 + t3433*t3712 + t2771*(t3718 + t3719) + t3023*(t3726 + t3729))*var2[13];
  p_output1[86]=t3175*var2[0] + (-1.*t1895*t2733 + t2474*t2760)*var2[1] + (t3023*(t3481 + t3482) + t3023*t3819 + t3599*t3864 + t3175*(t4042 + t4043))*var2[3] + (0.08055*t3811 + t3284*t3819 + t3023*(t3825 + t3828) + t3456*t3864 + t3175*(t3872 + t3885) + 0.135*t940)*var2[4] + (t3193*t3819 + t3638*t3864 + t3903 + t3023*(t3909 + t3911) + t3175*(t3941 + t3942))*var2[5] + (t3073*t3819 + t3712*t3864 + t3903 + t3023*(t3988 + t3993) + t3175*(t4006 + t4007))*var2[13];
  p_output1[87]=t3599*var2[3] + t3456*var2[4] + t3638*var2[5] + t3712*var2[13];
  p_output1[88]=t3023*var2[3] + t3284*var2[4] + t3193*var2[5] + t3073*var2[13];
  p_output1[89]=t3308*var2[4] + t3133*var2[5] + t3133*var2[13];
  p_output1[90]=t4241 + t4269 + (0.08055*t3599 - 1.*t4350*t4353 - 1.*t4369*(t2927 + t2954 + t4373 + t4378) - 0.01004*t4412)*var2[3] + (0.08055*t3456 - 0.01004*t4489 - 1.*t4350*t4514 - 1.*t4369*(t3250 + t3253 + t4540 + t4561) - 1.*t4260*(t3321 + t3335 + t4569 + t4570) - 1.*t4453*t4608)*var2[4] + (0.08055*t3638 - 0.01004*t3191*t4175 - 1.*t3690*t4182*t4350 - 1.*t4369*(t3196 + t3197 + t4434) - 1.*t4260*(t3207 + t3208 + t4445) + t4458)*var2[5] + (0.08055*t3712 - 0.01004*t3023*t4175 - 1.*t3175*t4182*t4350 - 1.*t4260*(t3160 + t3161 + t4445) + t4458 - 1.*t4369*(t3086 + t3101 + t4827))*var2[13] + (-0.01004*t4353 - 1.*t4260*(t4658 + t4674) - 1.*t4369*(t4699 + t4700) - 1.*t4453*t4747 - 1.*t4350*t4778)*var2[14];
  p_output1[91]=t4871 + t4910 + (t3056 - 0.01004*t5293 - 1.*t4916*t5324 - 1.*t4369*(t3558 + t3559 + t4450 + t5329))*var2[3] + (0.08055*t3284 - 1.*t4608*t5009 - 1.*t4916*t5125 - 1.*t4369*(t3416 + t3417 + t5139 + t5140) - 0.01004*t5171 - 1.*t4353*(t3491 + t3499 + t5202 + t5204))*var2[4] + (0.08055*t3193 - 0.01004*t3690*t4175 - 1.*t3191*t4182*t4916 - 1.*t4369*(t3648 + t3649 + t4946) - 1.*t4353*(t3669 + t3673 + t4965) + t5010)*var2[5] + (0.08055*t3073 - 0.01004*t3175*t4175 - 1.*t3023*t4182*t4916 - 1.*t4353*(t3726 + t3729 + t4965) + t5010 - 1.*t4369*(t3718 + t3719 + t5244))*var2[13] + (-0.01004*t4260 - 1.*t4747*t5009 - 1.*t4353*(t5342 + t5348) - 1.*t4369*(t5355 + t5357) - 1.*t4916*t5379)*var2[14];
  p_output1[92]=t5418 + t5440 + (-1.*t4353*(t3481 + t3482 + t5005 + t5007) - 1.*t4353*t5508 - 1.*t5324*t5569 - 1.*t4260*(t4042 + t4043 + t5565 + t5679))*var2[3] + (0.08055*t3308 - 0.01004*t5458 - 1.*t4353*(t3825 + t3828 + t5478 + t5482) - 1.*t4514*t5508 - 1.*t4260*(t3872 + t3885 + t5541 + t5546) - 1.*t5125*t5569)*var2[4] + (-1.*t3690*t4182*t5508 - 1.*t3191*t4182*t5569 + t5599 + t5600 - 1.*t4353*(t3909 + t3911 + t5604) - 1.*t4260*(t3941 + t3942 + t5612))*var2[5] + (-1.*t3175*t4182*t5508 - 1.*t3023*t4182*t5569 + t5599 + t5600 - 1.*t4260*(t4006 + t4007 + t5806) - 1.*t4353*(t3988 + t3993 + t5832))*var2[13] + (-0.01004*t4369 - 1.*t4778*t5508 - 1.*t5379*t5569 - 1.*t4260*(t5764 + t5770) - 1.*t4353*(t5783 + t5784))*var2[14];
  p_output1[93]=t5924;
  p_output1[94]=t6024;
  p_output1[95]=t6113;
  p_output1[96]=t4241 + t4269 + (-0.13004*(t4412*t6129 + t3599*t6158) + 0.08055*(t3599*t6129 - 1.*t4412*t6158) - 1.*t4353*t6238 - 1.*t4369*(t2927 + t2954 + t4373 + t4378 + t6247 + t6263))*var2[3] + (-0.13004*(t4489*t6129 + t3456*t6158) + 0.08055*(t3456*t6129 - 1.*t4489*t6158) - 1.*t4369*(t3250 + t3253 + t4540 + t4561 + t3284*t6168 + t5171*t6183) - 1.*t4260*(t3321 + t3335 + t4569 + t4570 - 1.*t3308*t6168 - 1.*t5458*t6183) - 1.*t4514*t6238 - 1.*t4608*t6628)*var2[4] + (-0.13004*(t3191*t4175*t6129 + t3638*t6158) + 0.08055*(t3638*t6129 - 1.*t3191*t4175*t6158) - 1.*t4369*(t3196 + t3197 + t4434 + t3193*t6168 + t3690*t4175*t6183) - 1.*t3690*t4182*t6238 - 1.*t4260*(t3207 + t3208 + t4445 + t6603 + t6607) + t6629)*var2[5] + (-0.13004*(t3023*t4175*t6129 + t3712*t6158) + 0.08055*(t3712*t6129 - 1.*t3023*t4175*t6158) - 1.*t4369*(t3086 + t3101 + t4827 + t3073*t6168 + t3175*t4175*t6183) - 1.*t3175*t4182*t6238 - 1.*t4260*(t3160 + t3161 + t4445 + t6603 + t6607) + t6629)*var2[13] + (-0.13004*t4353*t6129 - 0.08055*t4353*t6158 - 1.*t4369*(t4699 + t4700 + t4260*t6183) - 1.*t4260*(t4658 + t4674 - 1.*t4369*t6183) - 1.*t4778*t6238 - 1.*t4747*t6628)*var2[14] + (0.08055*(-1.*t5293*t6129 - 1.*t3023*t6158) - 1.*t4369*(t3175*t6403 + t6014*t6433) - 1.*t4260*(-1.*t2771*t6403 - 1.*t6089*t6433) - 0.13004*t6462)*var2[15];
  p_output1[97]=t4871 + t4910 + (-0.13004*(t5293*t6129 + t3023*t6158) - 1.*t4369*(t3558 + t3559 + t4450 + t5329 - 1.*t3599*t6168 - 1.*t4412*t6183) + 0.08055*t6462 - 1.*t5324*t7020)*var2[3] + (-0.13004*(t5171*t6129 + t3284*t6158) + 0.08055*(t3284*t6129 - 1.*t5171*t6158) - 1.*t4369*(t3416 + t3417 + t5139 + t5140 - 1.*t3456*t6168 - 1.*t4489*t6183) - 1.*t4353*(t3491 + t3499 + t5202 + t5204 + t3308*t6168 + t5458*t6183) - 1.*t5125*t7020 - 1.*t4608*t7172)*var2[4] + (-0.13004*(t3690*t4175*t6129 + t3193*t6158) + 0.08055*(t3193*t6129 - 1.*t3690*t4175*t6158) - 1.*t4369*(t3648 + t3649 + t4946 - 1.*t3638*t6168 - 1.*t3191*t4175*t6183) - 1.*t3191*t4182*t7020 - 1.*t4353*(t3669 + t3673 + t4965 + t7057 + t7060) + t7176)*var2[5] + (-0.13004*(t3175*t4175*t6129 + t3073*t6158) + 0.08055*(t3073*t6129 - 1.*t3175*t4175*t6158) - 1.*t4369*(t3718 + t3719 + t5244 - 1.*t3712*t6168 - 1.*t3023*t4175*t6183) - 1.*t3023*t4182*t7020 - 1.*t4353*(t3726 + t3729 + t4965 + t7057 + t7060) + t7176)*var2[13] + (-0.13004*t4260*t6129 - 0.08055*t4260*t6158 - 1.*t4369*(t5355 + t5357 - 1.*t4353*t6183) - 1.*t4353*(t5342 + t5348 + t4369*t6183) - 1.*t5379*t7020 - 1.*t4747*t7172)*var2[14] + (0.08055*(-1.*t6014*t6129 - 1.*t3175*t6158) - 0.13004*(t3175*t6129 - 1.*t6014*t6158) - 1.*t4369*(-1.*t3023*t6403 - 1.*t5293*t6433) - 1.*t4353*(t2771*t6403 + t6089*t6433))*var2[15];
  p_output1[98]=t5418 + t5440 + (-1.*t4260*(t4042 + t4043 + t5565 + t5679 + t3599*t6168 + t4412*t6183) - 1.*t4353*(t3481 + t3482 + t5005 + t5007 + t7152 + t7159) - 1.*t4353*t7992 - 1.*t5324*t8050)*var2[3] + (-0.13004*(t5458*t6129 + t3308*t6158) + 0.08055*(t3308*t6129 - 1.*t5458*t6158) - 1.*t4260*(t3872 + t3885 + t5541 + t5546 + t3456*t6168 + t4489*t6183) - 1.*t4353*(t3825 + t3828 + t5478 + t5482 - 1.*t3284*t6168 - 1.*t5171*t6183) - 1.*t4514*t7992 - 1.*t5125*t8050)*var2[4] + (-1.*t4260*(t3941 + t3942 + t5612 + t3638*t6168 + t3191*t4175*t6183) - 1.*t4353*(t3909 + t3911 + t5604 - 1.*t3193*t6168 - 1.*t3690*t4175*t6183) - 1.*t3690*t4182*t7992 - 1.*t3191*t4182*t8050 + t8113 + t8146)*var2[5] + (-1.*t4260*(t4006 + t4007 + t5806 + t3712*t6168 + t3023*t4175*t6183) - 1.*t4353*(t3988 + t3993 + t5832 - 1.*t3073*t6168 - 1.*t3175*t4175*t6183) - 1.*t3175*t4182*t7992 - 1.*t3023*t4182*t8050 + t8113 + t8146)*var2[13] + (-0.13004*t4369*t6129 - 0.08055*t4369*t6158 - 1.*t4353*(t5783 + t5784 - 1.*t4260*t6183) - 1.*t4260*(t5764 + t5770 + t4353*t6183) - 1.*t4778*t7992 - 1.*t5379*t8050)*var2[14] + (0.08055*(-1.*t6089*t6129 - 1.*t2771*t6158) - 0.13004*(t2771*t6129 - 1.*t6089*t6158) - 1.*t4260*(t3023*t6403 + t5293*t6433) - 1.*t4353*(-1.*t3175*t6403 - 1.*t6014*t6433))*var2[15];
  p_output1[99]=t5924;
  p_output1[100]=t6024;
  p_output1[101]=t6113;
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

#include "dJs_RightKnee_mex.hh"

namespace SymExpression
{

void dJs_RightKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
