/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:29 GMT-04:00
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
  double t203;
  double t345;
  double t1066;
  double t1136;
  double t1102;
  double t1208;
  double t1246;
  double t1247;
  double t2208;
  double t2278;
  double t1313;
  double t1351;
  double t1355;
  double t1377;
  double t2356;
  double t2394;
  double t2416;
  double t2523;
  double t2543;
  double t2588;
  double t1578;
  double t1599;
  double t1604;
  double t1645;
  double t1689;
  double t1706;
  double t1716;
  double t1750;
  double t1965;
  double t1969;
  double t2098;
  double t2104;
  double t2126;
  double t2187;
  double t2199;
  double t3148;
  double t2894;
  double t2918;
  double t2919;
  double t3188;
  double t3181;
  double t3198;
  double t3201;
  double t3322;
  double t3342;
  double t2771;
  double t2806;
  double t2811;
  double t3346;
  double t3347;
  double t3351;
  double t3361;
  double t3370;
  double t3393;
  double t2503;
  double t2514;
  double t2518;
  double t3442;
  double t3469;
  double t3478;
  double t3416;
  double t3419;
  double t3428;
  double t3438;
  double t3236;
  double t3247;
  double t3257;
  double t3566;
  double t3568;
  double t3597;
  double t3602;
  double t3605;
  double t2431;
  double t2444;
  double t2460;
  double t3535;
  double t3491;
  double t3633;
  double t3639;
  double t3640;
  double t3642;
  double t3643;
  double t3665;
  double t3673;
  double t3708;
  double t3710;
  double t3713;
  double t3977;
  double t3987;
  double t3997;
  double t4075;
  double t4084;
  double t4088;
  double t4126;
  double t4128;
  double t4130;
  double t4137;
  double t4320;
  double t4379;
  double t3965;
  double t3968;
  double t3971;
  double t3354;
  double t3396;
  double t4093;
  double t4096;
  double t4102;
  double t4615;
  double t3770;
  double t4324;
  double t4325;
  double t4692;
  double t4736;
  double t4759;
  double t4760;
  double t4841;
  double t3537;
  double t3542;
  double t4437;
  double t4455;
  double t4267;
  double t4268;
  double t4290;
  double t5264;
  double t5289;
  double t5357;
  double t5378;
  double t5291;
  double t5298;
  double t5299;
  double t4240;
  double t4242;
  double t4243;
  double t5380;
  double t5381;
  double t5385;
  double t5396;
  double t5404;
  double t5407;
  double t3483;
  double t3504;
  double t3742;
  double t3761;
  double t5392;
  double t5408;
  double t5413;
  double t4410;
  double t4414;
  double t5433;
  double t5434;
  double t5438;
  double t3790;
  double t3792;
  double t3836;
  double t3842;
  double t5319;
  double t5321;
  double t5325;
  double t5331;
  double t5337;
  double t5346;
  double t3896;
  double t3921;
  double t3927;
  double t4106;
  double t4114;
  double t4116;
  double t3953;
  double t3956;
  double t4005;
  double t4006;
  double t4587;
  double t4599;
  double t4601;
  double t5628;
  double t5630;
  double t5647;
  double t5417;
  double t5419;
  double t5423;
  double t5882;
  double t5891;
  double t5898;
  double t5908;
  double t5912;
  double t5509;
  double t3681;
  double t3682;
  double t5607;
  double t5660;
  double t3574;
  double t3608;
  double t4329;
  double t4333;
  double t4388;
  double t4393;
  double t6176;
  double t6180;
  double t6185;
  double t4064;
  double t4067;
  double t4169;
  double t4171;
  double t5801;
  double t5841;
  double t5844;
  double t6291;
  double t6294;
  double t6295;
  double t4507;
  double t4509;
  double t6262;
  double t6300;
  double t4464;
  double t4468;
  double t3530;
  double t4247;
  double t4258;
  double t5950;
  double t5951;
  double t5967;
  double t6623;
  double t4623;
  double t4630;
  double t5728;
  double t5729;
  double t5735;
  double t5443;
  double t5461;
  double t4790;
  double t4791;
  double t6318;
  double t6333;
  double t6334;
  double t6912;
  double t4855;
  double t4856;
  double t4910;
  double t4911;
  double t6947;
  double t6954;
  double t6967;
  double t5102;
  double t5116;
  double t6638;
  double t6639;
  double t6697;
  double t6732;
  double t6751;
  double t5988;
  double t5990;
  double t6982;
  double t6985;
  double t5002;
  double t5014;
  double t4955;
  double t4968;
  double t6593;
  double t6596;
  double t6614;
  double t6140;
  double t6158;
  double t6164;
  t203 = Cos(var1[3]);
  t345 = Sin(var1[3]);
  t1066 = Cos(var1[4]);
  t1136 = Sin(var1[4]);
  t1102 = -1.*var2[2]*t1066*t345;
  t1208 = -1.*var2[1]*t1136;
  t1246 = -1.*var1[1]*t1066;
  t1247 = var1[2]*t345*t1136;
  t2208 = Cos(var1[5]);
  t2278 = Sin(var1[5]);
  t1313 = var2[2]*t203*t1066;
  t1351 = var2[0]*t1136;
  t1355 = var1[0]*t1066;
  t1377 = -1.*var1[2]*t203*t1136;
  t2356 = t203*t2208*t1136;
  t2394 = t345*t2278;
  t2416 = t2356 + t2394;
  t2523 = -1.*t203*t2208;
  t2543 = -1.*t345*t1136*t2278;
  t2588 = t2523 + t2543;
  t1578 = -1.*var2[1]*t203*t1066;
  t1599 = var2[0]*t1066*t345;
  t1604 = var1[0]*t203*t1066;
  t1645 = var1[1]*t1066*t345;
  t1689 = t1604 + t1645;
  t1706 = var2[3]*t1689;
  t1716 = var1[1]*t203*t1136;
  t1750 = -1.*var1[0]*t345*t1136;
  t1965 = -1.*var2[3]*t1066*t345;
  t1969 = -1.*var2[4]*t203*t1136;
  t2098 = t1965 + t1969;
  t2104 = var2[3]*t203*t1066;
  t2126 = -1.*var2[4]*t345*t1136;
  t2187 = t2104 + t2126;
  t2199 = -1.*var2[4]*t1066;
  t3148 = Cos(var1[13]);
  t2894 = t2208*t345*t1136;
  t2918 = -1.*t203*t2278;
  t2919 = t2894 + t2918;
  t3188 = Sin(var1[13]);
  t3181 = t3148*t1066*t2208;
  t3198 = -1.*t1066*t3188*t2278;
  t3201 = t3181 + t3198;
  t3322 = -1.*t3148;
  t3342 = 1. + t3322;
  t2771 = -1.*t2208*t345;
  t2806 = t203*t1136*t2278;
  t2811 = t2771 + t2806;
  t3346 = 0.07996*t3342;
  t3347 = 0.135*t3188;
  t3351 = 0. + t3346 + t3347;
  t3361 = -0.135*t3342;
  t3370 = 0.07996*t3188;
  t3393 = 0. + t3361 + t3370;
  t2503 = -1.*t2208*t345*t1136;
  t2514 = t203*t2278;
  t2518 = t2503 + t2514;
  t3442 = t3148*t2416;
  t3469 = -1.*t3188*t2811;
  t3478 = t3442 + t3469;
  t3416 = -1.*var1[2];
  t3419 = -1.*t1066*t2208*t3351;
  t3428 = -1.*t1066*t3393*t2278;
  t3438 = 0. + t3416 + t3419 + t3428;
  t3236 = t203*t2208;
  t3247 = t345*t1136*t2278;
  t3257 = t3236 + t3247;
  t3566 = 0.135*t3148;
  t3568 = t3566 + t3370;
  t3597 = 0.07996*t3148;
  t3602 = -0.135*t3188;
  t3605 = t3597 + t3602;
  t2431 = t2208*t345;
  t2444 = -1.*t203*t1136*t2278;
  t2460 = t2431 + t2444;
  t3535 = -1.*t3188*t2919;
  t3491 = t3148*t2588;
  t3633 = -1.*t1066*t2208*t3188;
  t3639 = -1.*t3148*t1066*t2278;
  t3640 = t3633 + t3639;
  t3642 = t3351*t2919;
  t3643 = t3393*t3257;
  t3665 = 0. + var1[1] + t3642 + t3643;
  t3673 = t3640*t3665;
  t3708 = t3148*t2919;
  t3710 = -1.*t3188*t3257;
  t3713 = t3708 + t3710;
  t3977 = -1.*t3148*t2208*t1136;
  t3987 = t3188*t1136*t2278;
  t3997 = t3977 + t3987;
  t4075 = t1066*t2208*t3351;
  t4084 = t1066*t3393*t2278;
  t4088 = 0. + var1[2] + t4075 + t4084;
  t4126 = -1.*var1[0];
  t4128 = -1.*t3351*t2416;
  t4130 = -1.*t3393*t2811;
  t4137 = 0. + t4126 + t4128 + t4130;
  t4320 = -1.*t3188*t2416;
  t4379 = t3640*t4137;
  t3965 = t3148*t1066*t2208*t345;
  t3968 = -1.*t1066*t3188*t345*t2278;
  t3971 = t3965 + t3968;
  t3354 = t3351*t2416;
  t3396 = t3393*t2811;
  t4093 = t3148*t203*t1066*t2208;
  t4096 = -1.*t203*t1066*t3188*t2278;
  t4102 = t4093 + t4096;
  t4615 = 0. + var1[0] + t3354 + t3396;
  t3770 = t3535 + t3491;
  t4324 = t3148*t2460;
  t4325 = t4320 + t4324;
  t4692 = -1.*var1[1];
  t4736 = -1.*t3351*t2919;
  t4759 = -1.*t3393*t3257;
  t4760 = 0. + t4692 + t4736 + t4759;
  t4841 = 0.08055*t3201;
  t3537 = -1.*t3148*t3257;
  t3542 = t3535 + t3537;
  t4437 = -1.*t3148*t2811;
  t4455 = t4320 + t4437;
  t4267 = t3148*t2518;
  t4268 = -1.*t3188*t2588;
  t4290 = t4267 + t4268;
  t5264 = Sin(var1[14]);
  t5289 = Cos(var1[14]);
  t5357 = -1.*t5289;
  t5378 = 1. + t5357;
  t5291 = t1066*t2208*t3188;
  t5298 = t3148*t1066*t2278;
  t5299 = t5291 + t5298;
  t4240 = t3188*t2416;
  t4242 = t3148*t2811;
  t4243 = t4240 + t4242;
  t5380 = -0.08055*t5378;
  t5381 = -0.135*t5264;
  t5385 = 0. + t5380 + t5381;
  t5396 = -0.135*t5378;
  t5404 = 0.08055*t5264;
  t5407 = 0. + t5396 + t5404;
  t3483 = t3188*t2518;
  t3504 = t3483 + t3491;
  t3742 = t3188*t2460;
  t3761 = t3442 + t3742;
  t5392 = t5385*t1136;
  t5408 = -1.*t5407*t5299;
  t5413 = 0. + t3416 + t3419 + t5392 + t3428 + t5408;
  t4410 = t3188*t2588;
  t4414 = t3708 + t4410;
  t5433 = t5264*t1136;
  t5434 = t5289*t5299;
  t5438 = t5433 + t5434;
  t3790 = t3393*t2919;
  t3792 = t3351*t2588;
  t3836 = -1.*t1066*t2208*t3393;
  t3842 = t1066*t3351*t2278;
  t5319 = -1.*t1066*t5264*t345;
  t5321 = t3188*t2919;
  t5325 = t3148*t3257;
  t5331 = t5321 + t5325;
  t5337 = t5289*t5331;
  t5346 = t5319 + t5337;
  t3896 = t203*t1066*t2208*t3188;
  t3921 = t3148*t203*t1066*t2278;
  t3927 = t3896 + t3921;
  t4106 = t1066*t2208*t3188*t345;
  t4114 = t3148*t1066*t345*t2278;
  t4116 = t4106 + t4114;
  t3953 = t1066*t2208*t3351*t345;
  t3956 = t1066*t3393*t345*t2278;
  t4005 = t2208*t3351*t1136;
  t4006 = t3393*t1136*t2278;
  t4587 = -1.*t2208*t3188*t1136;
  t4599 = -1.*t3148*t1136*t2278;
  t4601 = t4587 + t4599;
  t5628 = t1066*t5385*t345;
  t5630 = t5407*t5331;
  t5647 = 0. + var1[1] + t5628 + t3642 + t3643 + t5630;
  t5417 = -1.*t203*t1066*t5264;
  t5419 = t5289*t4243;
  t5423 = t5417 + t5419;
  t5882 = -0.135*t5289;
  t5891 = -0.08055*t5264;
  t5898 = t5882 + t5891;
  t5908 = 0.08055*t5289;
  t5912 = t5908 + t5381;
  t5509 = -1.*t5289*t1066*t345;
  t3681 = -1.*t1066*t2208*t3568;
  t3682 = -1.*t1066*t3605*t2278;
  t5607 = -1.*t5407*t3201;
  t5660 = -1.*t5289*t3201*t5647;
  t3574 = t3568*t2919;
  t3608 = t3605*t3257;
  t4329 = -1.*t3393*t2416;
  t4333 = -1.*t3351*t2460;
  t4388 = t1066*t2208*t3393;
  t4393 = -1.*t1066*t3351*t2278;
  t6176 = -1.*t5385*t1136;
  t6180 = t5407*t5299;
  t6185 = 0. + var1[2] + t4075 + t6176 + t4084 + t6180;
  t4064 = -1.*t203*t1066*t2208*t3351;
  t4067 = -1.*t203*t1066*t3393*t2278;
  t4169 = -1.*t2208*t3351*t1136;
  t4171 = -1.*t3393*t1136*t2278;
  t5801 = t1066*t5264;
  t5841 = t5289*t4601;
  t5844 = t5801 + t5841;
  t6291 = -1.*t203*t1066*t5385;
  t6294 = -1.*t5407*t4243;
  t6295 = 0. + t4126 + t6291 + t4128 + t4130 + t6294;
  t4507 = t1066*t2208*t3568;
  t4509 = t1066*t3605*t2278;
  t6262 = t5407*t3201;
  t6300 = -1.*t5289*t3201*t6295;
  t4464 = -1.*t3568*t2416;
  t4468 = -1.*t3605*t2811;
  t3530 = 0.08055*t3478;
  t4247 = -1.*t3351*t2518;
  t4258 = -1.*t3393*t2588;
  t5950 = t5289*t1136;
  t5951 = -1.*t5264*t5299;
  t5967 = t5950 + t5951;
  t6623 = t1066*t5264*t345;
  t4623 = -1.*t1066*t2208*t3351*t345;
  t4630 = -1.*t1066*t3393*t345*t2278;
  t5728 = t5264*t345*t1136;
  t5729 = t5289*t4116;
  t5735 = t5728 + t5729;
  t5443 = t203*t1066*t5385;
  t5461 = t5407*t4243;
  t4790 = t203*t1066*t2208*t3351;
  t4791 = t203*t1066*t3393*t2278;
  t6318 = t203*t5264*t1136;
  t6333 = t5289*t3927;
  t6334 = t6318 + t6333;
  t6912 = 0. + var1[0] + t5443 + t3354 + t3396 + t5461;
  t4855 = -1.*t3393*t2919;
  t4856 = -1.*t3351*t2588;
  t4910 = t3393*t2416;
  t4911 = t3351*t2460;
  t6947 = -1.*t1066*t5385*t345;
  t6954 = -1.*t5407*t5331;
  t6967 = 0. + t4692 + t6947 + t4736 + t4759 + t6954;
  t5102 = t3351*t2518;
  t5116 = t3393*t2588;
  t6638 = t5289*t3504;
  t6639 = t6623 + t6638;
  t6697 = -1.*t5289*t203*t1066;
  t6732 = -1.*t5264*t4243;
  t6751 = t6697 + t6732;
  t5988 = -1.*t5264*t5331;
  t5990 = t5509 + t5988;
  t6982 = 0.08055*t3640;
  t6985 = -0.01004*t5264*t3201;
  t5002 = t3568*t2416;
  t5014 = t3605*t2811;
  t4955 = -1.*t3568*t2919;
  t4968 = -1.*t3605*t3257;
  t6593 = t5289*t203*t1066;
  t6596 = t5264*t4243;
  t6614 = t6593 + t6596;
  t6140 = t203*t1066*t5264;
  t6158 = -1.*t5289*t4243;
  t6164 = t6140 + t6158;
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
  p_output1[24]=-1.*t203*var2[2] + t345*var1[2]*var2[3];
  p_output1[25]=-1.*t345*var2[2] - 1.*t203*var1[2]*var2[3];
  p_output1[26]=t203*var2[0] + t345*var2[1] + (-1.*t345*var1[0] + t203*var1[1])*var2[3];
  p_output1[27]=-1.*t203*var2[3];
  p_output1[28]=-1.*t345*var2[3];
  p_output1[29]=0;
  p_output1[30]=t1102 + t1208 - 1.*t1066*t203*var1[2]*var2[3] + (t1246 + t1247)*var2[4];
  p_output1[31]=t1313 + t1351 - 1.*t1066*t345*var1[2]*var2[3] + (t1355 + t1377)*var2[4];
  p_output1[32]=t1578 + t1599 + t1706 + (t1716 + t1750)*var2[4];
  p_output1[33]=t2098;
  p_output1[34]=t2187;
  p_output1[35]=t2199;
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
  p_output1[78]=t1102 + t1208 + (0.135*t2518 + 0.07996*t2588 - 1.*t1066*t203*var1[2])*var2[3] + (t1246 + t1247 + 0.135*t1066*t203*t2208 + 0.07996*t1066*t203*t2278)*var2[4] + (0.07996*t2416 + 0.135*t2460)*var2[5];
  p_output1[79]=t1313 + t1351 + (0.135*t2416 + 0.07996*t2811 - 1.*t1066*t345*var1[2])*var2[3] + (t1355 + t1377 + 0.135*t1066*t2208*t345 + 0.07996*t1066*t2278*t345)*var2[4] + (0.135*t2588 + 0.07996*t2919)*var2[5];
  p_output1[80]=t1578 + t1599 + t1706 + (t1716 + t1750 - 0.135*t1136*t2208 - 0.07996*t1136*t2278)*var2[4] + (0.07996*t1066*t2208 - 0.135*t1066*t2278)*var2[5];
  p_output1[81]=t2098;
  p_output1[82]=t2187;
  p_output1[83]=t2199;
  p_output1[84]=t3201*var2[1] + (-1.*t2919*t3148 + t3188*t3257)*var2[2] + (t3201*(t3354 + t3396) + 0.135*t1066*t345 + t3438*t3478 + 0.08055*t3504)*var2[3] + (0.135*t1136*t203 + 0.08055*t3927 + t3201*(t3953 + t3956) + t3438*t3971 + t3665*t3997 + t3713*(t4005 + t4006))*var2[4] + (t3673 + 0.08055*t3761 + t3438*t3770 + t3201*(t3790 + t3792) + t3713*(t3836 + t3842))*var2[5] + (t3530 + t3438*t3542 + t3201*(t3574 + t3608) + t3673 + (t3681 + t3682)*t3713)*var2[13];
  p_output1[85]=(-1.*t1066*t2208*t3148 + t1066*t2278*t3188)*var2[0] + t3478*var2[2] + (-0.135*t1066*t203 + 0.08055*t4243 + t3201*(t4247 + t4258) + t4088*t4290)*var2[3] + (0.135*t1136*t345 + t3201*(t4064 + t4067) + t4088*t4102 + 0.08055*t4116 + t3997*t4137 + t3478*(t4169 + t4171))*var2[4] + (t4088*t4325 + t3201*(t4329 + t4333) + t4379 + t3478*(t4388 + t4393) + 0.08055*t4414)*var2[5] + (0.08055*t3713 + t4379 + t4088*t4455 + t3201*(t4464 + t4468) + t3478*(t4507 + t4509))*var2[13];
  p_output1[86]=t3713*var2[0] + (-1.*t2416*t3148 + t2811*t3188)*var2[1] + (t3478*(t4128 + t4130) + t3478*t4615 + t4290*t4760 + t3713*(t5102 + t5116))*var2[3] + (0.135*t1066 + 0.08055*t4601 + t3971*t4615 + t3478*(t4623 + t4630) + t4102*t4760 + t3713*(t4790 + t4791))*var2[4] + (t3770*t4615 + t4325*t4760 + t4841 + t3478*(t4855 + t4856) + t3713*(t4910 + t4911))*var2[5] + (t3542*t4615 + t4455*t4760 + t4841 + t3478*(t4955 + t4968) + t3713*(t5002 + t5014))*var2[13];
  p_output1[87]=t4290*var2[3] + t4102*var2[4] + t4325*var2[5] + t4455*var2[13];
  p_output1[88]=t3478*var2[3] + t3971*var2[4] + t3770*var2[5] + t3542*var2[13];
  p_output1[89]=t3997*var2[4] + t3640*var2[5] + t3640*var2[13];
  p_output1[90]=(-1.*t1136*t5264 - 1.*t5289*t5299)*var2[1] + t5346*var2[2] + (0.08055*t4290 - 1.*t5413*t5423 - 1.*t5438*(t3354 + t3396 + t5443 + t5461) - 0.01004*(t3504*t5264 + t5509))*var2[3] + (0.08055*t4102 - 0.01004*(t3927*t5264 - 1.*t1136*t203*t5289) - 1.*t5346*(t4005 + t4006 + t1066*t5385 - 1.*t4601*t5407) - 1.*(t3953 + t3956 - 1.*t1136*t345*t5385 + t4116*t5407)*t5438 - 1.*t5413*t5735 - 1.*t5647*t5844)*var2[4] + (0.08055*t4325 - 0.01004*t3761*t5264 - 1.*t4414*t5289*t5413 - 1.*(t3790 + t3792 + t4414*t5407)*t5438 - 1.*t5346*(t3836 + t3842 + t5607) + t5660)*var2[5] + (0.08055*t4455 - 0.01004*t3478*t5264 - 1.*t3713*t5289*t5413 - 1.*(t3574 + t3608 + t3713*t5407)*t5438 - 1.*t5346*(t3681 + t3682 + t5607) + t5660)*var2[13] + (-0.01004*t5423 - 1.*t5346*(t1136*t5898 - 1.*t5299*t5912) - 1.*t5438*(t1066*t345*t5898 + t5331*t5912) - 1.*t5647*t5967 - 1.*t5413*t5990)*var2[14];
  p_output1[91]=t5438*var2[0] + t6164*var2[2] + (t3530 - 1.*t5438*(t4247 + t4258 - 1.*t3504*t5407 + t5628) - 0.01004*t6614 - 1.*t6185*t6639)*var2[3] + (0.08055*t3971 - 0.01004*(t4116*t5264 - 1.*t1136*t345*t5289) - 1.*(t4169 + t4171 - 1.*t1066*t5385 + t4601*t5407)*t5423 - 1.*(t4064 + t4067 + t1136*t203*t5385 - 1.*t3927*t5407)*t5438 - 1.*t5844*t6295 - 1.*t6185*t6334)*var2[4] + (0.08055*t3770 - 0.01004*t4414*t5264 - 1.*(t4329 + t4333 - 1.*t3761*t5407)*t5438 - 1.*t3761*t5289*t6185 - 1.*t5423*(t4388 + t4393 + t6262) + t6300)*var2[5] + (0.08055*t3542 - 0.01004*t3713*t5264 - 1.*(t4464 + t4468 - 1.*t3478*t5407)*t5438 - 1.*t3478*t5289*t6185 - 1.*t5423*(t4507 + t4509 + t6262) + t6300)*var2[13] + (-0.01004*t5346 - 1.*t5438*(-1.*t1066*t203*t5898 - 1.*t4243*t5912) - 1.*t5423*(-1.*t1136*t5898 + t5299*t5912) - 1.*t5967*t6295 - 1.*t6185*t6751)*var2[14];
  p_output1[92]=(-1.*t5289*t5331 + t6623)*var2[0] + t5423*var2[1] + (-1.*t5423*(t4128 + t4130 + t6291 + t6294) - 1.*t5423*t6912 - 1.*t5346*(t5102 + t5116 + t3504*t5407 + t6947) - 1.*t6639*t6967)*var2[3] + (0.08055*t3997 - 0.01004*(t4601*t5264 - 1.*t1066*t5289) - 1.*t5346*(t4790 + t4791 - 1.*t1136*t203*t5385 + t3927*t5407) - 1.*(t4623 + t4630 + t1136*t345*t5385 - 1.*t4116*t5407)*t5423 - 1.*t5735*t6912 - 1.*t6334*t6967)*var2[4] + (-1.*t5346*(t4910 + t4911 + t3761*t5407) - 1.*(t4855 + t4856 - 1.*t4414*t5407)*t5423 - 1.*t4414*t5289*t6912 - 1.*t3761*t5289*t6967 + t6982 + t6985)*var2[5] + (-1.*t5346*(t5002 + t5014 + t3478*t5407) - 1.*(t4955 + t4968 - 1.*t3713*t5407)*t5423 - 1.*t3713*t5289*t6912 - 1.*t3478*t5289*t6967 + t6982 + t6985)*var2[13] + (-0.01004*t5438 - 1.*t5346*(t1066*t203*t5898 + t4243*t5912) - 1.*t5423*(-1.*t1066*t345*t5898 - 1.*t5331*t5912) - 1.*t5990*t6912 - 1.*t6751*t6967)*var2[14];
  p_output1[93]=(-1.*t3504*t5289 + t5319)*var2[3] + (-1.*t1136*t203*t5264 - 1.*t3927*t5289)*var2[4] - 1.*t3761*t5289*var2[5] - 1.*t3478*t5289*var2[13] + t6614*var2[14];
  p_output1[94]=t6164*var2[3] + (-1.*t1136*t345*t5264 - 1.*t4116*t5289)*var2[4] - 1.*t4414*t5289*var2[5] - 1.*t3713*t5289*var2[13] + (t1066*t345*t5289 + t5264*t5331)*var2[14];
  p_output1[95]=(-1.*t1066*t5264 - 1.*t4601*t5289)*var2[4] - 1.*t3201*t5289*var2[5] - 1.*t3201*t5289*var2[13] + (-1.*t1136*t5289 + t5264*t5299)*var2[14];
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

#include "dJs_RightThigh_mex.hh"

namespace SymExpression
{

void dJs_RightThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
