/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:11 GMT-04:00
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
  double t295;
  double t347;
  double t1115;
  double t1184;
  double t1152;
  double t1185;
  double t1266;
  double t1294;
  double t2051;
  double t2115;
  double t1442;
  double t1459;
  double t1505;
  double t1516;
  double t2233;
  double t2243;
  double t2261;
  double t2556;
  double t2571;
  double t2578;
  double t1686;
  double t1740;
  double t1747;
  double t1755;
  double t1758;
  double t1798;
  double t1806;
  double t1810;
  double t1874;
  double t1894;
  double t2006;
  double t2018;
  double t2028;
  double t2041;
  double t2044;
  double t3196;
  double t2944;
  double t2982;
  double t3003;
  double t3207;
  double t2824;
  double t2837;
  double t2890;
  double t3310;
  double t3312;
  double t3203;
  double t3228;
  double t3234;
  double t2505;
  double t2513;
  double t2532;
  double t3319;
  double t3326;
  double t3329;
  double t3344;
  double t3361;
  double t3366;
  double t3261;
  double t3263;
  double t3269;
  double t3433;
  double t3440;
  double t3447;
  double t3451;
  double t3418;
  double t3454;
  double t2383;
  double t2415;
  double t2436;
  double t3494;
  double t3495;
  double t3498;
  double t3575;
  double t3576;
  double t3578;
  double t3507;
  double t3511;
  double t3525;
  double t3531;
  double t3548;
  double t3458;
  double t3467;
  double t3746;
  double t3761;
  double t3780;
  double t3783;
  double t3786;
  double t3664;
  double t3665;
  double t3673;
  double t3937;
  double t3941;
  double t3942;
  double t3973;
  double t3987;
  double t3996;
  double t3998;
  double t4162;
  double t4215;
  double t3955;
  double t3960;
  double t3969;
  double t3335;
  double t3374;
  double t3652;
  double t3655;
  double t3657;
  double t4556;
  double t3550;
  double t4514;
  double t4515;
  double t4520;
  double t4532;
  double t4214;
  double t4222;
  double t4110;
  double t4111;
  double t4114;
  double t4656;
  double t3798;
  double t3808;
  double t4398;
  double t4404;
  double t5042;
  double t5074;
  double t5054;
  double t5059;
  double t5062;
  double t5165;
  double t5169;
  double t4249;
  double t4251;
  double t5091;
  double t5099;
  double t5102;
  double t5180;
  double t5194;
  double t5202;
  double t5235;
  double t5250;
  double t5255;
  double t3556;
  double t3557;
  double t3564;
  double t3570;
  double t5072;
  double t5079;
  double t5085;
  double t3532;
  double t3537;
  double t5229;
  double t5261;
  double t5269;
  double t5276;
  double t5279;
  double t5280;
  double t5282;
  double t3821;
  double t3823;
  double t5298;
  double t3774;
  double t3787;
  double t5350;
  double t5351;
  double t5354;
  double t4483;
  double t4493;
  double t4495;
  double t3710;
  double t3718;
  double t3632;
  double t3647;
  double t3886;
  double t3892;
  double t3896;
  double t3601;
  double t3617;
  double t3618;
  double t4076;
  double t4082;
  double t4102;
  double t5547;
  double t5559;
  double t5560;
  double t5565;
  double t5577;
  double t5523;
  double t5529;
  double t5530;
  double t5632;
  double t3419;
  double t3421;
  double t4232;
  double t4236;
  double t4165;
  double t4169;
  double t5723;
  double t5725;
  double t5730;
  double t5740;
  double t5746;
  double t5748;
  double t5758;
  double t4416;
  double t4421;
  double t5802;
  double t4309;
  double t4361;
  double t5426;
  double t5430;
  double t5434;
  double t4007;
  double t4024;
  double t3904;
  double t3909;
  double t5619;
  double t5623;
  double t5625;
  double t3816;
  double t4045;
  double t4049;
  double t6033;
  double t5659;
  double t5668;
  double t4678;
  double t4682;
  double t4709;
  double t4710;
  double t6125;
  double t6128;
  double t6135;
  double t6138;
  double t6141;
  double t6153;
  double t4858;
  double t4859;
  double t4902;
  double t4911;
  double t4795;
  double t4801;
  double t6032;
  double t6039;
  double t4564;
  double t4566;
  double t4583;
  double t4589;
  double t5912;
  double t5914;
  double t5919;
  double t5493;
  double t5494;
  double t5503;
  double t5636;
  double t5640;
  double t6015;
  double t6020;
  double t6021;
  double t6070;
  double t6075;
  double t6077;
  double t5691;
  double t5693;
  double t5698;
  double t5086;
  double t5104;
  double t5125;
  double t5127;
  double t5132;
  double t5600;
  double t5608;
  double t6666;
  double t5564;
  double t5586;
  double t6670;
  double t6674;
  double t6675;
  double t6688;
  double t6699;
  double t6706;
  double t6636;
  double t6641;
  double t6647;
  double t6576;
  double t6580;
  double t6582;
  double t6746;
  double t6748;
  double t6754;
  double t6741;
  double t6757;
  double t6759;
  double t5323;
  double t6764;
  double t6770;
  double t6779;
  double t6792;
  double t6807;
  double t5395;
  double t6871;
  double t5471;
  double t5472;
  double t5924;
  double t5928;
  double t5931;
  double t5459;
  double t5460;
  double t6324;
  double t6346;
  double t6347;
  double t5506;
  double t5511;
  double t5513;
  double t5674;
  double t5677;
  double t7219;
  double t7221;
  double t7225;
  double t7233;
  double t7236;
  double t5702;
  double t5716;
  double t5979;
  double t6006;
  double t5959;
  double t5961;
  double t7433;
  double t7435;
  double t7445;
  double t5812;
  double t7451;
  double t7452;
  double t7462;
  double t7475;
  double t7484;
  double t5860;
  double t7510;
  double t5897;
  double t5898;
  double t5882;
  double t5886;
  double t6051;
  double t7319;
  double t7320;
  double t7329;
  double t6104;
  double t6106;
  double t6119;
  double t6124;
  double t7147;
  double t7148;
  double t6264;
  double t6414;
  double t6415;
  double t6361;
  double t6382;
  double t8148;
  double t8234;
  double t8242;
  double t8253;
  double t6162;
  double t6176;
  double t6200;
  double t6210;
  double t8552;
  double t8555;
  double t8556;
  double t8565;
  double t8582;
  double t8583;
  double t8588;
  double t8593;
  double t6296;
  double t6306;
  double t6287;
  double t6289;
  double t6463;
  double t6465;
  double t6472;
  double t6473;
  double t6474;
  double t6486;
  double t6498;
  double t6508;
  double t6511;
  double t6514;
  double t6523;
  double t6550;
  double t6551;
  double t6555;
  double t6556;
  double t6562;
  double t6567;
  double t6571;
  double t6584;
  double t6593;
  double t6596;
  double t6609;
  double t6619;
  double t6627;
  double t6628;
  double t6634;
  double t6651;
  double t6664;
  t295 = Cos(var1[3]);
  t347 = Sin(var1[3]);
  t1115 = Cos(var1[4]);
  t1184 = Sin(var1[4]);
  t1152 = -1.*var2[2]*t1115*t347;
  t1185 = -1.*var2[1]*t1184;
  t1266 = -1.*var1[1]*t1115;
  t1294 = var1[2]*t347*t1184;
  t2051 = Cos(var1[5]);
  t2115 = Sin(var1[5]);
  t1442 = var2[2]*t295*t1115;
  t1459 = var2[0]*t1184;
  t1505 = var1[0]*t1115;
  t1516 = -1.*var1[2]*t295*t1184;
  t2233 = t295*t2051*t1184;
  t2243 = t347*t2115;
  t2261 = t2233 + t2243;
  t2556 = -1.*t295*t2051;
  t2571 = -1.*t347*t1184*t2115;
  t2578 = t2556 + t2571;
  t1686 = -1.*var2[1]*t295*t1115;
  t1740 = var2[0]*t1115*t347;
  t1747 = var1[0]*t295*t1115;
  t1755 = var1[1]*t1115*t347;
  t1758 = t1747 + t1755;
  t1798 = var2[3]*t1758;
  t1806 = var1[1]*t295*t1184;
  t1810 = -1.*var1[0]*t347*t1184;
  t1874 = -1.*var2[3]*t1115*t347;
  t1894 = -1.*var2[4]*t295*t1184;
  t2006 = t1874 + t1894;
  t2018 = var2[3]*t295*t1115;
  t2028 = -1.*var2[4]*t347*t1184;
  t2041 = t2018 + t2028;
  t2044 = -1.*var2[4]*t1115;
  t3196 = Cos(var1[6]);
  t2944 = t2051*t347*t1184;
  t2982 = -1.*t295*t2115;
  t3003 = t2944 + t2982;
  t3207 = Sin(var1[6]);
  t2824 = -1.*t2051*t347;
  t2837 = t295*t1184*t2115;
  t2890 = t2824 + t2837;
  t3310 = -1.*t3196;
  t3312 = 1. + t3310;
  t3203 = t1115*t2051*t3196;
  t3228 = -1.*t1115*t2115*t3207;
  t3234 = t3203 + t3228;
  t2505 = -1.*t2051*t347*t1184;
  t2513 = t295*t2115;
  t2532 = t2505 + t2513;
  t3319 = 0.07996*t3312;
  t3326 = -0.135*t3207;
  t3329 = 0. + t3319 + t3326;
  t3344 = 0.135*t3312;
  t3361 = 0.07996*t3207;
  t3366 = 0. + t3344 + t3361;
  t3261 = t295*t2051;
  t3263 = t347*t1184*t2115;
  t3269 = t3261 + t3263;
  t3433 = -1.*var1[2];
  t3440 = -1.*t1115*t2051*t3329;
  t3447 = -1.*t1115*t2115*t3366;
  t3451 = 0. + t3433 + t3440 + t3447;
  t3418 = t3196*t2578;
  t3454 = t3196*t2261;
  t2383 = t2051*t347;
  t2415 = -1.*t295*t1184*t2115;
  t2436 = t2383 + t2415;
  t3494 = t3003*t3329;
  t3495 = t3269*t3366;
  t3498 = 0. + var1[1] + t3494 + t3495;
  t3575 = t3196*t3003;
  t3576 = -1.*t3269*t3207;
  t3578 = t3575 + t3576;
  t3507 = -1.*t1115*t3196*t2115;
  t3511 = -1.*t1115*t2051*t3207;
  t3525 = t3507 + t3511;
  t3531 = t3498*t3525;
  t3548 = -1.*t3003*t3207;
  t3458 = -1.*t2890*t3207;
  t3467 = t3454 + t3458;
  t3746 = -0.135*t3196;
  t3761 = t3746 + t3361;
  t3780 = 0.07996*t3196;
  t3783 = 0.135*t3207;
  t3786 = t3780 + t3783;
  t3664 = -1.*t2051*t3196*t1184;
  t3665 = t1184*t2115*t3207;
  t3673 = t3664 + t3665;
  t3937 = t1115*t2051*t3329;
  t3941 = t1115*t2115*t3366;
  t3942 = 0. + var1[2] + t3937 + t3941;
  t3973 = -1.*var1[0];
  t3987 = -1.*t2261*t3329;
  t3996 = -1.*t2890*t3366;
  t3998 = 0. + t3973 + t3987 + t3996;
  t4162 = t3998*t3525;
  t4215 = -1.*t2261*t3207;
  t3955 = t295*t1115*t2051*t3196;
  t3960 = -1.*t295*t1115*t2115*t3207;
  t3969 = t3955 + t3960;
  t3335 = t2261*t3329;
  t3374 = t2890*t3366;
  t3652 = t1115*t2051*t3196*t347;
  t3655 = -1.*t1115*t347*t2115*t3207;
  t3657 = t3652 + t3655;
  t4556 = 0. + var1[0] + t3335 + t3374;
  t3550 = t3418 + t3548;
  t4514 = -1.*var1[1];
  t4515 = -1.*t3003*t3329;
  t4520 = -1.*t3269*t3366;
  t4532 = 0. + t4514 + t4515 + t4520;
  t4214 = t3196*t2436;
  t4222 = t4214 + t4215;
  t4110 = t3196*t2532;
  t4111 = -1.*t2578*t3207;
  t4114 = t4110 + t4111;
  t4656 = 0.08055*t3234;
  t3798 = -1.*t3196*t3269;
  t3808 = t3798 + t3548;
  t4398 = -1.*t3196*t2890;
  t4404 = t4398 + t4215;
  t5042 = Cos(var1[7]);
  t5074 = Sin(var1[7]);
  t5054 = t3196*t3269;
  t5059 = t3003*t3207;
  t5062 = t5054 + t5059;
  t5165 = -1.*t5042;
  t5169 = 1. + t5165;
  t4249 = t2578*t3207;
  t4251 = t3575 + t4249;
  t5091 = t1115*t3196*t2115;
  t5099 = t1115*t2051*t3207;
  t5102 = t5091 + t5099;
  t5180 = 0.135*t5169;
  t5194 = 0.08055*t5074;
  t5202 = 0. + t5180 + t5194;
  t5235 = -0.08055*t5169;
  t5250 = 0.135*t5074;
  t5255 = 0. + t5235 + t5250;
  t3556 = t2436*t3207;
  t3557 = t3454 + t3556;
  t3564 = t1115*t2115*t3329;
  t3570 = -1.*t1115*t2051*t3366;
  t5072 = t5042*t5062;
  t5079 = -1.*t1115*t347*t5074;
  t5085 = t5072 + t5079;
  t3532 = t2578*t3329;
  t3537 = t3003*t3366;
  t5229 = t5062*t5202;
  t5261 = t1115*t347*t5255;
  t5269 = 0. + var1[1] + t3494 + t3495 + t5229 + t5261;
  t5276 = -1.*t5042*t3234*t5269;
  t5279 = -1.*t5102*t5202;
  t5280 = t1184*t5255;
  t5282 = 0. + t3433 + t3440 + t3447 + t5279 + t5280;
  t3821 = -1.*t1115*t2051*t3761;
  t3823 = -1.*t1115*t2115*t3786;
  t5298 = -1.*t3234*t5202;
  t3774 = t3003*t3761;
  t3787 = t3269*t3786;
  t5350 = t5042*t5102;
  t5351 = t1184*t5074;
  t5354 = t5350 + t5351;
  t4483 = -1.*t3196*t1184*t2115;
  t4493 = -1.*t2051*t1184*t3207;
  t4495 = t4483 + t4493;
  t3710 = t2051*t1184*t3329;
  t3718 = t1184*t2115*t3366;
  t3632 = t1115*t2051*t347*t3329;
  t3647 = t1115*t347*t2115*t3366;
  t3886 = t1115*t3196*t347*t2115;
  t3892 = t1115*t2051*t347*t3207;
  t3896 = t3886 + t3892;
  t3601 = t295*t1115*t3196*t2115;
  t3617 = t295*t1115*t2051*t3207;
  t3618 = t3601 + t3617;
  t4076 = t3196*t2890;
  t4082 = t2261*t3207;
  t4102 = t4076 + t4082;
  t5547 = 0.135*t5042;
  t5559 = -0.08055*t5074;
  t5560 = t5547 + t5559;
  t5565 = 0.08055*t5042;
  t5577 = t5565 + t5250;
  t5523 = t5042*t4102;
  t5529 = -1.*t295*t1115*t5074;
  t5530 = t5523 + t5529;
  t5632 = -1.*t1115*t5042*t347;
  t3419 = t2532*t3207;
  t3421 = t3418 + t3419;
  t4232 = -1.*t1115*t2115*t3329;
  t4236 = t1115*t2051*t3366;
  t4165 = -1.*t2436*t3329;
  t4169 = -1.*t2261*t3366;
  t5723 = -1.*t4102*t5202;
  t5725 = -1.*t295*t1115*t5255;
  t5730 = 0. + t3973 + t3987 + t3996 + t5723 + t5725;
  t5740 = -1.*t5042*t3234*t5730;
  t5746 = t5102*t5202;
  t5748 = -1.*t1184*t5255;
  t5758 = 0. + var1[2] + t3937 + t3941 + t5746 + t5748;
  t4416 = t1115*t2051*t3761;
  t4421 = t1115*t2115*t3786;
  t5802 = t3234*t5202;
  t4309 = -1.*t2261*t3761;
  t4361 = -1.*t2890*t3786;
  t5426 = t5042*t4495;
  t5430 = t1115*t5074;
  t5434 = t5426 + t5430;
  t4007 = -1.*t2051*t1184*t3329;
  t4024 = -1.*t1184*t2115*t3366;
  t3904 = -1.*t295*t1115*t2051*t3329;
  t3909 = -1.*t295*t1115*t2115*t3366;
  t5619 = t5042*t1184;
  t5623 = -1.*t5102*t5074;
  t5625 = t5619 + t5623;
  t3816 = 0.08055*t3467;
  t4045 = -1.*t2532*t3329;
  t4049 = -1.*t2578*t3366;
  t6033 = t1115*t347*t5074;
  t5659 = t4102*t5202;
  t5668 = t295*t1115*t5255;
  t4678 = -1.*t2578*t3329;
  t4682 = -1.*t3003*t3366;
  t4709 = t2436*t3329;
  t4710 = t2261*t3366;
  t6125 = 0.08055*t3525;
  t6128 = 0. + var1[0] + t3335 + t3374 + t5659 + t5668;
  t6135 = -1.*t5062*t5202;
  t6138 = -1.*t1115*t347*t5255;
  t6141 = 0. + t4514 + t4515 + t4520 + t6135 + t6138;
  t6153 = -0.01004*t3234*t5074;
  t4858 = -1.*t3003*t3761;
  t4859 = -1.*t3269*t3786;
  t4902 = t2261*t3761;
  t4911 = t2890*t3786;
  t4795 = t2532*t3329;
  t4801 = t2578*t3366;
  t6032 = t5042*t3421;
  t6039 = t6032 + t6033;
  t4564 = -1.*t1115*t2051*t347*t3329;
  t4566 = -1.*t1115*t347*t2115*t3366;
  t4583 = t295*t1115*t2051*t3329;
  t4589 = t295*t1115*t2115*t3366;
  t5912 = t5042*t3618;
  t5914 = t295*t1184*t5074;
  t5919 = t5912 + t5914;
  t5493 = t5042*t3896;
  t5494 = t347*t1184*t5074;
  t5503 = t5493 + t5494;
  t5636 = -1.*t5062*t5074;
  t5640 = t5632 + t5636;
  t6015 = -1.*t295*t1115*t5042;
  t6020 = -1.*t4102*t5074;
  t6021 = t6015 + t6020;
  t6070 = t295*t1115*t5042;
  t6075 = t4102*t5074;
  t6077 = t6070 + t6075;
  t5691 = -1.*t5042*t4102;
  t5693 = t295*t1115*t5074;
  t5698 = t5691 + t5693;
  t5086 = var2[2]*t5085;
  t5104 = -1.*t5042*t5102;
  t5125 = -1.*t1184*t5074;
  t5127 = t5104 + t5125;
  t5132 = var2[1]*t5127;
  t5600 = t1115*t347*t5560;
  t5608 = t5062*t5577;
  t6666 = Cos(var1[8]);
  t5564 = t1184*t5560;
  t5586 = -1.*t5102*t5577;
  t6670 = -1.*t6666;
  t6674 = 1. + t6670;
  t6675 = -0.08055*t6674;
  t6688 = Sin(var1[8]);
  t6699 = -0.01004*t6688;
  t6706 = 0. + t6675 + t6699;
  t6636 = -1.*t5042*t1184;
  t6641 = t5102*t5074;
  t6647 = t6636 + t6641;
  t6576 = t1115*t5042*t347;
  t6580 = t5062*t5074;
  t6582 = t6576 + t6580;
  t6746 = -0.01004*t6674;
  t6748 = 0.08055*t6688;
  t6754 = 0. + t6746 + t6748;
  t6741 = -1.*t6647*t6706;
  t6757 = -1.*t3234*t6754;
  t6759 = 0. + t3433 + t3440 + t3447 + t5279 + t5280 + t6741 + t6757;
  t5323 = t4251*t5202;
  t6764 = t6582*t6706;
  t6770 = t3578*t6754;
  t6779 = 0. + var1[1] + t3494 + t3495 + t5229 + t5261 + t6764 + t6770;
  t6792 = -1.*t3234*t5074*t6706;
  t6807 = -1.*t3525*t6754;
  t5395 = t3578*t5202;
  t6871 = -1.*t5042*t3234*t6779;
  t5471 = t3896*t5202;
  t5472 = -1.*t347*t1184*t5255;
  t5924 = -1.*t5042*t347*t1184;
  t5928 = t3896*t5074;
  t5931 = t5924 + t5928;
  t5459 = -1.*t4495*t5202;
  t5460 = t1115*t5255;
  t6324 = -1.*t1115*t5042;
  t6346 = t4495*t5074;
  t6347 = t6324 + t6346;
  t5506 = -1.*t295*t5042*t1184;
  t5511 = t3618*t5074;
  t5513 = t5506 + t5511;
  t5674 = t3421*t5074;
  t5677 = t5632 + t5674;
  t7219 = -0.01004*t6666;
  t7221 = -0.08055*t6688;
  t7225 = t7219 + t7221;
  t7233 = 0.08055*t6666;
  t7236 = t7233 + t6699;
  t5702 = var2[2]*t5698;
  t5716 = var2[0]*t5354;
  t5979 = -1.*t295*t1115*t5560;
  t6006 = -1.*t4102*t5577;
  t5959 = -1.*t1184*t5560;
  t5961 = t5102*t5577;
  t7433 = t6647*t6706;
  t7435 = t3234*t6754;
  t7445 = 0. + var1[2] + t3937 + t3941 + t5746 + t5748 + t7433 + t7435;
  t5812 = -1.*t3557*t5202;
  t7451 = -1.*t6077*t6706;
  t7452 = -1.*t3467*t6754;
  t7462 = 0. + t3973 + t3987 + t3996 + t5723 + t5725 + t7451 + t7452;
  t7475 = t3234*t5074*t6706;
  t7484 = t3525*t6754;
  t5860 = -1.*t3467*t5202;
  t7510 = -1.*t5042*t3234*t7462;
  t5897 = -1.*t3618*t5202;
  t5898 = t295*t1184*t5255;
  t5882 = t4495*t5202;
  t5886 = -1.*t1115*t5255;
  t6051 = -1.*t3421*t5202;
  t7319 = t6666*t3467;
  t7320 = -1.*t6077*t6688;
  t7329 = t7319 + t7320;
  t6104 = var2[1]*t5530;
  t6106 = -1.*t5042*t5062;
  t6119 = t6106 + t6033;
  t6124 = var2[0]*t6119;
  t7147 = t6077*t6706;
  t7148 = t3467*t6754;
  t6264 = t3421*t5202;
  t6414 = t295*t1115*t5560;
  t6415 = t4102*t5577;
  t6361 = -1.*t1115*t347*t5560;
  t6382 = -1.*t5062*t5577;
  t8148 = 0. + var1[0] + t3335 + t3374 + t5659 + t5668 + t7147 + t7148;
  t8234 = -1.*t6582*t6706;
  t8242 = -1.*t3578*t6754;
  t8253 = 0. + t4514 + t4515 + t4520 + t6135 + t6138 + t8234 + t8242;
  t6162 = -1.*t4251*t5202;
  t6176 = t3557*t5202;
  t6200 = -1.*t3578*t5202;
  t6210 = t3467*t5202;
  t8552 = t6666*t3234*t5074;
  t8555 = t3525*t6688;
  t8556 = t8552 + t8555;
  t8565 = -0.13004*t8556;
  t8582 = t6666*t3525;
  t8583 = -1.*t3234*t5074*t6688;
  t8588 = t8582 + t8583;
  t8593 = 0.08055*t8588;
  t6296 = t3618*t5202;
  t6306 = -1.*t295*t1184*t5255;
  t6287 = -1.*t3896*t5202;
  t6289 = t347*t1184*t5255;
  t6463 = -1.*var2[5]*t5042*t3557;
  t6465 = -1.*var2[6]*t5042*t3467;
  t6472 = -1.*t5042*t3421;
  t6473 = t6472 + t5079;
  t6474 = var2[3]*t6473;
  t6486 = -1.*t5042*t3618;
  t6498 = -1.*t295*t1184*t5074;
  t6508 = t6486 + t6498;
  t6511 = var2[4]*t6508;
  t6514 = var2[7]*t6077;
  t6523 = t6463 + t6465 + t6474 + t6511 + t6514;
  t6550 = -1.*var2[5]*t5042*t4251;
  t6551 = -1.*var2[6]*t5042*t3578;
  t6555 = var2[3]*t5698;
  t6556 = -1.*t5042*t3896;
  t6562 = -1.*t347*t1184*t5074;
  t6567 = t6556 + t6562;
  t6571 = var2[4]*t6567;
  t6584 = var2[7]*t6582;
  t6593 = t6550 + t6551 + t6555 + t6571 + t6584;
  t6596 = -1.*var2[5]*t5042*t3234;
  t6609 = -1.*var2[6]*t5042*t3234;
  t6619 = -1.*t5042*t4495;
  t6627 = -1.*t1115*t5074;
  t6628 = t6619 + t6627;
  t6634 = var2[4]*t6628;
  t6651 = var2[7]*t6647;
  t6664 = t6596 + t6609 + t6634 + t6651;
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
  p_output1[24]=-1.*t295*var2[2] + t347*var1[2]*var2[3];
  p_output1[25]=-1.*t347*var2[2] - 1.*t295*var1[2]*var2[3];
  p_output1[26]=t295*var2[0] + t347*var2[1] + (-1.*t347*var1[0] + t295*var1[1])*var2[3];
  p_output1[27]=-1.*t295*var2[3];
  p_output1[28]=-1.*t347*var2[3];
  p_output1[29]=0;
  p_output1[30]=t1152 + t1185 - 1.*t1115*t295*var1[2]*var2[3] + (t1266 + t1294)*var2[4];
  p_output1[31]=t1442 + t1459 - 1.*t1115*t347*var1[2]*var2[3] + (t1505 + t1516)*var2[4];
  p_output1[32]=t1686 + t1740 + t1798 + (t1806 + t1810)*var2[4];
  p_output1[33]=t2006;
  p_output1[34]=t2041;
  p_output1[35]=t2044;
  p_output1[36]=t1152 + t1185 + (-0.135*t2532 + 0.07996*t2578 - 1.*t1115*t295*var1[2])*var2[3] + (t1266 + t1294 - 0.135*t1115*t2051*t295 + 0.07996*t1115*t2115*t295)*var2[4] + (0.07996*t2261 - 0.135*t2436)*var2[5];
  p_output1[37]=t1442 + t1459 + (-0.135*t2261 + 0.07996*t2890 - 1.*t1115*t347*var1[2])*var2[3] + (t1505 + t1516 - 0.135*t1115*t2051*t347 + 0.07996*t1115*t2115*t347)*var2[4] + (-0.135*t2578 + 0.07996*t3003)*var2[5];
  p_output1[38]=t1686 + t1740 + t1798 + (t1806 + t1810 + 0.135*t1184*t2051 - 0.07996*t1184*t2115)*var2[4] + (0.07996*t1115*t2051 + 0.135*t1115*t2115)*var2[5];
  p_output1[39]=t2006;
  p_output1[40]=t2041;
  p_output1[41]=t2044;
  p_output1[42]=t3234*var2[1] + (-1.*t3003*t3196 + t3207*t3269)*var2[2] + (t3234*(t3335 + t3374) + 0.08055*t3421 + t3451*t3467 - 0.135*t1115*t347)*var2[3] + (-0.135*t1184*t295 + 0.08055*t3618 + t3234*(t3632 + t3647) + t3451*t3657 + t3498*t3673 + t3578*(t3710 + t3718))*var2[4] + (t3531 + t3234*(t3532 + t3537) + t3451*t3550 + 0.08055*t3557 + (t3564 + t3570)*t3578)*var2[5] + (t3531 + t3234*(t3774 + t3787) + t3451*t3808 + t3816 + t3578*(t3821 + t3823))*var2[6];
  p_output1[43]=(-1.*t1115*t2051*t3196 + t1115*t2115*t3207)*var2[0] + t3467*var2[2] + (0.135*t1115*t295 + t3234*(t4045 + t4049) + 0.08055*t4102 + t3942*t4114)*var2[3] + (-0.135*t1184*t347 + 0.08055*t3896 + t3234*(t3904 + t3909) + t3942*t3969 + t3673*t3998 + t3467*(t4007 + t4024))*var2[4] + (t4162 + t3234*(t4165 + t4169) + t3942*t4222 + t3467*(t4232 + t4236) + 0.08055*t4251)*var2[5] + (0.08055*t3578 + t4162 + t3234*(t4309 + t4361) + t3942*t4404 + t3467*(t4416 + t4421))*var2[6];
  p_output1[44]=t3578*var2[0] + (-1.*t2261*t3196 + t2890*t3207)*var2[1] + (t3467*(t3987 + t3996) + t4114*t4532 + t3467*t4556 + t3578*(t4795 + t4801))*var2[3] + (-0.135*t1115 + 0.08055*t4495 + t3969*t4532 + t3657*t4556 + t3467*(t4564 + t4566) + t3578*(t4583 + t4589))*var2[4] + (t4222*t4532 + t3550*t4556 + t4656 + t3467*(t4678 + t4682) + t3578*(t4709 + t4710))*var2[5] + (t4404*t4532 + t3808*t4556 + t4656 + t3467*(t4858 + t4859) + t3578*(t4902 + t4911))*var2[6];
  p_output1[45]=t4114*var2[3] + t3969*var2[4] + t4222*var2[5] + t4404*var2[6];
  p_output1[46]=t3467*var2[3] + t3657*var2[4] + t3550*var2[5] + t3808*var2[6];
  p_output1[47]=t3673*var2[4] + t3525*var2[5] + t3525*var2[6];
  p_output1[48]=t5086 + t5132 + (0.08055*t4114 - 1.*t5282*t5530 - 1.*t5354*(t3335 + t3374 + t5659 + t5668) - 0.01004*t5677)*var2[3] + (0.08055*t3969 - 1.*t5269*t5434 - 1.*t5085*(t3710 + t3718 + t5459 + t5460) - 1.*t5354*(t3632 + t3647 + t5471 + t5472) - 1.*t5282*t5503 - 0.01004*t5513)*var2[4] + (0.08055*t4222 - 0.01004*t3557*t5074 + t5276 - 1.*t4251*t5042*t5282 - 1.*t5085*(t3564 + t3570 + t5298) - 1.*(t3532 + t3537 + t5323)*t5354)*var2[5] + (0.08055*t4404 - 0.01004*t3467*t5074 + t5276 - 1.*t3578*t5042*t5282 - 1.*t5085*(t3821 + t3823 + t5298) - 1.*t5354*(t3774 + t3787 + t5395))*var2[6] + (-0.01004*t5530 - 1.*t5085*(t5564 + t5586) - 1.*t5354*(t5600 + t5608) - 1.*t5269*t5625 - 1.*t5282*t5640)*var2[7];
  p_output1[49]=t5702 + t5716 + (t3816 - 1.*t5758*t6039 - 1.*t5354*(t4045 + t4049 + t5261 + t6051) - 0.01004*t6077)*var2[3] + (0.08055*t3657 - 1.*t5434*t5730 - 1.*t5530*(t4007 + t4024 + t5882 + t5886) - 1.*t5354*(t3904 + t3909 + t5897 + t5898) - 1.*t5758*t5919 - 0.01004*t5931)*var2[4] + (0.08055*t3550 - 0.01004*t4251*t5074 + t5740 - 1.*t3557*t5042*t5758 - 1.*t5530*(t4232 + t4236 + t5802) - 1.*t5354*(t4165 + t4169 + t5812))*var2[5] + (0.08055*t3808 - 0.01004*t3578*t5074 + t5740 - 1.*t3467*t5042*t5758 - 1.*t5530*(t4416 + t4421 + t5802) - 1.*t5354*(t4309 + t4361 + t5860))*var2[6] + (-0.01004*t5085 - 1.*t5625*t5730 - 1.*t5530*(t5959 + t5961) - 1.*t5354*(t5979 + t6006) - 1.*t5758*t6021)*var2[7];
  p_output1[50]=t6104 + t6124 + (-1.*t5530*(t3987 + t3996 + t5723 + t5725) - 1.*t5530*t6128 - 1.*t6039*t6141 - 1.*t5085*(t4795 + t4801 + t6138 + t6264))*var2[3] + (0.08055*t3673 - 1.*t5503*t6128 - 1.*t5919*t6141 - 1.*t5530*(t4564 + t4566 + t6287 + t6289) - 1.*t5085*(t4583 + t4589 + t6296 + t6306) - 0.01004*t6347)*var2[4] + (t6125 - 1.*t4251*t5042*t6128 - 1.*t3557*t5042*t6141 + t6153 - 1.*t5530*(t4678 + t4682 + t6162) - 1.*t5085*(t4709 + t4710 + t6176))*var2[5] + (t6125 - 1.*t3578*t5042*t6128 - 1.*t3467*t5042*t6141 + t6153 - 1.*t5530*(t4858 + t4859 + t6200) - 1.*t5085*(t4902 + t4911 + t6210))*var2[6] + (-0.01004*t5354 - 1.*t5640*t6128 - 1.*t6021*t6141 - 1.*t5530*(t6361 + t6382) - 1.*t5085*(t6414 + t6415))*var2[7];
  p_output1[51]=t6523;
  p_output1[52]=t6593;
  p_output1[53]=t6664;
  p_output1[54]=t5086 + t5132 + (-0.13004*(t5677*t6666 + t4114*t6688) + 0.08055*(t4114*t6666 - 1.*t5677*t6688) - 1.*t5530*t6759 - 1.*t5354*(t3335 + t3374 + t5659 + t5668 + t7147 + t7148))*var2[3] + (-0.13004*(t5513*t6666 + t3969*t6688) + 0.08055*(t3969*t6666 - 1.*t5513*t6688) - 1.*t5354*(t3632 + t3647 + t5471 + t5472 + t5931*t6706 + t3657*t6754) - 1.*t5085*(t3710 + t3718 + t5459 + t5460 - 1.*t6347*t6706 - 1.*t3673*t6754) - 1.*t5503*t6759 - 1.*t5434*t6779)*var2[4] + (-0.13004*(t3557*t5074*t6666 + t4222*t6688) + 0.08055*(t4222*t6666 - 1.*t3557*t5074*t6688) - 1.*t5354*(t3532 + t3537 + t5323 + t4251*t5074*t6706 + t3550*t6754) - 1.*t4251*t5042*t6759 - 1.*t5085*(t3564 + t3570 + t5298 + t6792 + t6807) + t6871)*var2[5] + (-0.13004*(t3467*t5074*t6666 + t4404*t6688) + 0.08055*(t4404*t6666 - 1.*t3467*t5074*t6688) - 1.*t5354*(t3774 + t3787 + t5395 + t3578*t5074*t6706 + t3808*t6754) - 1.*t3578*t5042*t6759 - 1.*t5085*(t3821 + t3823 + t5298 + t6792 + t6807) + t6871)*var2[6] + (-0.13004*t5530*t6666 - 0.08055*t5530*t6688 - 1.*t5354*(t5600 + t5608 + t5085*t6706) - 1.*t5085*(t5564 + t5586 - 1.*t5354*t6706) - 1.*t5640*t6759 - 1.*t5625*t6779)*var2[7] + (0.08055*(-1.*t6077*t6666 - 1.*t3467*t6688) - 1.*t5085*(-1.*t6647*t7225 - 1.*t3234*t7236) - 1.*t5354*(t6582*t7225 + t3578*t7236) - 0.13004*t7329)*var2[8];
  p_output1[55]=t5702 + t5716 + (-0.13004*(t6077*t6666 + t3467*t6688) - 1.*t5354*(t4045 + t4049 + t5261 + t6051 - 1.*t5677*t6706 - 1.*t4114*t6754) + 0.08055*t7329 - 1.*t6039*t7445)*var2[3] + (-0.13004*(t5931*t6666 + t3657*t6688) + 0.08055*(t3657*t6666 - 1.*t5931*t6688) - 1.*t5530*(t4007 + t4024 + t5882 + t5886 + t6347*t6706 + t3673*t6754) - 1.*t5354*(t3904 + t3909 + t5897 + t5898 - 1.*t5513*t6706 - 1.*t3969*t6754) - 1.*t5919*t7445 - 1.*t5434*t7462)*var2[4] + (-0.13004*(t4251*t5074*t6666 + t3550*t6688) + 0.08055*(t3550*t6666 - 1.*t4251*t5074*t6688) - 1.*t5354*(t4165 + t4169 + t5812 - 1.*t3557*t5074*t6706 - 1.*t4222*t6754) - 1.*t3557*t5042*t7445 - 1.*t5530*(t4232 + t4236 + t5802 + t7475 + t7484) + t7510)*var2[5] + (-0.13004*(t3578*t5074*t6666 + t3808*t6688) + 0.08055*(t3808*t6666 - 1.*t3578*t5074*t6688) - 1.*t5354*(t4309 + t4361 + t5860 - 1.*t3467*t5074*t6706 - 1.*t4404*t6754) - 1.*t3467*t5042*t7445 - 1.*t5530*(t4416 + t4421 + t5802 + t7475 + t7484) + t7510)*var2[6] + (-0.13004*t5085*t6666 - 0.08055*t5085*t6688 - 1.*t5530*(t5959 + t5961 + t5354*t6706) - 1.*t5354*(t5979 + t6006 - 1.*t5530*t6706) - 1.*t6021*t7445 - 1.*t5625*t7462)*var2[7] + (0.08055*(-1.*t6582*t6666 - 1.*t3578*t6688) - 0.13004*(t3578*t6666 - 1.*t6582*t6688) - 1.*t5530*(t6647*t7225 + t3234*t7236) - 1.*t5354*(-1.*t6077*t7225 - 1.*t3467*t7236))*var2[8];
  p_output1[56]=t6104 + t6124 + (-1.*t5085*(t4795 + t4801 + t6138 + t6264 + t5677*t6706 + t4114*t6754) - 1.*t5530*(t3987 + t3996 + t5723 + t5725 + t7451 + t7452) - 1.*t5530*t8148 - 1.*t6039*t8253)*var2[3] + (-0.13004*(t6347*t6666 + t3673*t6688) + 0.08055*(t3673*t6666 - 1.*t6347*t6688) - 1.*t5530*(t4564 + t4566 + t6287 + t6289 - 1.*t5931*t6706 - 1.*t3657*t6754) - 1.*t5085*(t4583 + t4589 + t6296 + t6306 + t5513*t6706 + t3969*t6754) - 1.*t5503*t8148 - 1.*t5919*t8253)*var2[4] + (-1.*t5530*(t4678 + t4682 + t6162 - 1.*t4251*t5074*t6706 - 1.*t3550*t6754) - 1.*t5085*(t4709 + t4710 + t6176 + t3557*t5074*t6706 + t4222*t6754) - 1.*t4251*t5042*t8148 - 1.*t3557*t5042*t8253 + t8565 + t8593)*var2[5] + (-1.*t5530*(t4858 + t4859 + t6200 - 1.*t3578*t5074*t6706 - 1.*t3808*t6754) - 1.*t5085*(t4902 + t4911 + t6210 + t3467*t5074*t6706 + t4404*t6754) - 1.*t3578*t5042*t8148 - 1.*t3467*t5042*t8253 + t8565 + t8593)*var2[6] + (-0.13004*t5354*t6666 - 0.08055*t5354*t6688 - 1.*t5530*(t6361 + t6382 - 1.*t5085*t6706) - 1.*t5085*(t6414 + t6415 + t5530*t6706) - 1.*t5640*t8148 - 1.*t6021*t8253)*var2[7] + (0.08055*(-1.*t6647*t6666 - 1.*t3234*t6688) - 0.13004*(t3234*t6666 - 1.*t6647*t6688) - 1.*t5085*(t6077*t7225 + t3467*t7236) - 1.*t5530*(-1.*t6582*t7225 - 1.*t3578*t7236))*var2[8];
  p_output1[57]=t6523;
  p_output1[58]=t6593;
  p_output1[59]=t6664;
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
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
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

#include "dJs_LeftKnee_mex.hh"

namespace SymExpression
{

void dJs_LeftKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
