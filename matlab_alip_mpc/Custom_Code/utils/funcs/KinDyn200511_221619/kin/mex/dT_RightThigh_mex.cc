/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:32 GMT-04:00
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
  double t149;
  double t160;
  double t653;
  double t979;
  double t127;
  double t1054;
  double t104;
  double t1507;
  double t2044;
  double t1589;
  double t1472;
  double t2036;
  double t2092;
  double t2097;
  double t2187;
  double t2217;
  double t2219;
  double t1483;
  double t2112;
  double t2479;
  double t2493;
  double t2495;
  double t2352;
  double t2633;
  double t2639;
  double t2474;
  double t2504;
  double t2508;
  double t2832;
  double t2853;
  double t2855;
  double t3013;
  double t3019;
  double t3038;
  double t3111;
  double t3367;
  double t3370;
  double t3379;
  double t3389;
  double t3493;
  double t3499;
  double t3500;
  double t3410;
  double t2742;
  double t2767;
  double t2780;
  double t3578;
  double t3582;
  double t3491;
  double t3511;
  double t3513;
  double t3742;
  double t3750;
  double t3770;
  double t3771;
  double t3785;
  double t3796;
  double t3802;
  double t3803;
  double t3808;
  double t3720;
  double t3723;
  double t3726;
  double t862;
  double t1176;
  double t1322;
  double t1588;
  double t1632;
  double t1635;
  double t1649;
  double t1673;
  double t1706;
  double t2248;
  double t2327;
  double t2361;
  double t2419;
  double t2468;
  double t2514;
  double t2515;
  double t2576;
  double t2598;
  double t2997;
  double t3057;
  double t3066;
  double t3071;
  double t3107;
  double t3114;
  double t3132;
  double t3156;
  double t3213;
  double t3236;
  double t3258;
  double t3290;
  double t3334;
  double t3341;
  double t3344;
  double t3346;
  double t3348;
  double t3400;
  double t3424;
  double t3434;
  double t3484;
  double t3517;
  double t3531;
  double t3542;
  double t3562;
  double t2708;
  double t2793;
  double t2813;
  double t3627;
  double t3642;
  double t3652;
  double t3685;
  double t3728;
  double t3732;
  double t4430;
  double t4455;
  double t4456;
  double t3834;
  double t3845;
  double t3850;
  double t3870;
  double t3878;
  double t3913;
  double t3925;
  double t3942;
  double t3948;
  double t3958;
  double t3960;
  double t3971;
  double t4921;
  double t4926;
  double t4970;
  double t4971;
  double t5071;
  double t5075;
  double t4039;
  double t4051;
  double t4060;
  double t5015;
  double t5026;
  double t5030;
  double t4928;
  double t4961;
  double t4962;
  double t5078;
  double t5082;
  double t5087;
  double t5048;
  double t5055;
  double t5059;
  double t5110;
  double t5111;
  double t5119;
  double t4072;
  double t4073;
  double t4076;
  double t4984;
  double t4095;
  double t4114;
  double t4121;
  double t4127;
  double t4142;
  double t4156;
  double t4977;
  double t4993;
  double t4172;
  double t4176;
  double t4192;
  double t4238;
  double t4246;
  double t4250;
  double t4267;
  double t4269;
  double t4284;
  double t5298;
  double t5301;
  double t5306;
  double t5328;
  double t5332;
  double t5511;
  double t5520;
  double t5533;
  double t5560;
  double t5580;
  double t4308;
  double t4326;
  double t4339;
  double t5658;
  double t5661;
  double t5699;
  double t5701;
  double t5703;
  double t4402;
  double t4408;
  double t4410;
  double t6534;
  double t6542;
  double t6544;
  double t6545;
  double t6556;
  double t6557;
  double t6560;
  double t6566;
  double t6571;
  double t4466;
  double t4485;
  double t4513;
  double t4516;
  double t4524;
  double t4525;
  t149 = Cos(var1[3]);
  t160 = Cos(var1[4]);
  t653 = Cos(var1[5]);
  t979 = Sin(var1[13]);
  t127 = Cos(var1[13]);
  t1054 = Sin(var1[5]);
  t104 = Cos(var1[15]);
  t1507 = Sin(var1[4]);
  t2044 = Sin(var1[3]);
  t1589 = Sin(var1[14]);
  t1472 = Sin(var1[15]);
  t2036 = t149*t653*t1507;
  t2092 = t2044*t1054;
  t2097 = t2036 + t2092;
  t2187 = t653*t2044;
  t2217 = -1.*t149*t1507*t1054;
  t2219 = t2187 + t2217;
  t1483 = Cos(var1[14]);
  t2112 = -1.*t979*t2097;
  t2479 = -1.*t653*t2044;
  t2493 = t149*t1507*t1054;
  t2495 = t2479 + t2493;
  t2352 = t127*t2097;
  t2633 = -1.*t979*t2495;
  t2639 = t2352 + t2633;
  t2474 = t979*t2097;
  t2504 = t127*t2495;
  t2508 = t2474 + t2504;
  t2832 = -1.*t653*t2044*t1507;
  t2853 = t149*t1054;
  t2855 = t2832 + t2853;
  t3013 = -1.*t149*t653;
  t3019 = -1.*t2044*t1507*t1054;
  t3038 = t3013 + t3019;
  t3111 = t127*t3038;
  t3367 = t653*t2044*t1507;
  t3370 = -1.*t149*t1054;
  t3379 = t3367 + t3370;
  t3389 = -1.*t979*t3379;
  t3493 = t149*t653;
  t3499 = t2044*t1507*t1054;
  t3500 = t3493 + t3499;
  t3410 = t127*t3379;
  t2742 = t1483*t149*t160;
  t2767 = t1589*t2508;
  t2780 = t2742 + t2767;
  t3578 = -1.*t979*t3500;
  t3582 = t3410 + t3578;
  t3491 = t979*t3379;
  t3511 = t127*t3500;
  t3513 = t3491 + t3511;
  t3742 = -1.*t160*t653*t979;
  t3750 = -1.*t127*t160*t1054;
  t3770 = t3742 + t3750;
  t3771 = -1.*t104*t3770;
  t3785 = t127*t160*t653;
  t3796 = -1.*t160*t979*t1054;
  t3802 = t3785 + t3796;
  t3803 = t1589*t1472*t3802;
  t3808 = t3771 + t3803;
  t3720 = t160*t653*t979;
  t3723 = t127*t160*t1054;
  t3726 = t3720 + t3723;
  t862 = t127*t149*t160*t653;
  t1176 = -1.*t149*t160*t979*t1054;
  t1322 = t862 + t1176;
  t1588 = -1.*t1483*t149*t1507;
  t1632 = t149*t160*t653*t979;
  t1635 = t127*t149*t160*t1054;
  t1649 = t1632 + t1635;
  t1673 = t1589*t1649;
  t1706 = t1588 + t1673;
  t2248 = t127*t2219;
  t2327 = t2112 + t2248;
  t2361 = t979*t2219;
  t2419 = t2352 + t2361;
  t2468 = -1.*t149*t160*t1589;
  t2514 = t1483*t2508;
  t2515 = t2468 + t2514;
  t2576 = -1.*t127*t2495;
  t2598 = t2112 + t2576;
  t2997 = t127*t2855;
  t3057 = -1.*t979*t3038;
  t3066 = t2997 + t3057;
  t3071 = -1.*t1483*t160*t2044;
  t3107 = t979*t2855;
  t3114 = t3107 + t3111;
  t3132 = t1589*t3114;
  t3156 = t3071 + t3132;
  t3213 = t127*t160*t653*t2044;
  t3236 = -1.*t160*t979*t2044*t1054;
  t3258 = t3213 + t3236;
  t3290 = -1.*t1483*t2044*t1507;
  t3334 = t160*t653*t979*t2044;
  t3341 = t127*t160*t2044*t1054;
  t3344 = t3334 + t3341;
  t3346 = t1589*t3344;
  t3348 = t3290 + t3346;
  t3400 = t3389 + t3111;
  t3424 = t979*t3038;
  t3434 = t3410 + t3424;
  t3484 = -1.*t160*t1589*t2044;
  t3517 = t1483*t3513;
  t3531 = t3484 + t3517;
  t3542 = -1.*t127*t3500;
  t3562 = t3389 + t3542;
  t2708 = t1472*t2639;
  t2793 = t104*t2780;
  t2813 = t2708 + t2793;
  t3627 = t1483*t160*t2044;
  t3642 = t1589*t3513;
  t3652 = t3627 + t3642;
  t3685 = t1589*t1507;
  t3728 = t1483*t3726;
  t3732 = t3685 + t3728;
  t4430 = t1472*t3770;
  t4455 = t104*t1589*t3802;
  t4456 = t4430 + t4455;
  t3834 = -1.*t1483*t1507;
  t3845 = t1589*t3726;
  t3850 = t3834 + t3845;
  t3870 = -1.*t127*t653*t1507;
  t3878 = t979*t1507*t1054;
  t3913 = t3870 + t3878;
  t3925 = -1.*t1483*t160;
  t3942 = -1.*t653*t979*t1507;
  t3948 = -1.*t127*t1507*t1054;
  t3958 = t3942 + t3948;
  t3960 = t1589*t3958;
  t3971 = t3925 + t3960;
  t4921 = -1.*t127;
  t4926 = 1. + t4921;
  t4970 = -1.*t1483;
  t4971 = 1. + t4970;
  t5071 = -1.*t104;
  t5075 = 1. + t5071;
  t4039 = t1472*t1322;
  t4051 = t104*t1706;
  t4060 = t4039 + t4051;
  t5015 = -0.135*t4926;
  t5026 = 0.07996*t979;
  t5030 = 0. + t5015 + t5026;
  t4928 = 0.07996*t4926;
  t4961 = 0.135*t979;
  t4962 = 0. + t4928 + t4961;
  t5078 = -0.01004*t5075;
  t5082 = 0.08055*t1472;
  t5087 = 0. + t5078 + t5082;
  t5048 = -0.135*t4971;
  t5055 = 0.08055*t1589;
  t5059 = 0. + t5048 + t5055;
  t5110 = -0.08055*t5075;
  t5111 = -0.01004*t1472;
  t5119 = 0. + t5110 + t5111;
  t4072 = t1472*t2327;
  t4073 = t104*t1589*t2419;
  t4076 = t4072 + t4073;
  t4984 = -0.135*t1589;
  t4095 = t1472*t2598;
  t4114 = t104*t1589*t2639;
  t4121 = t4095 + t4114;
  t4127 = t104*t2639;
  t4142 = -1.*t1472*t2780;
  t4156 = t4127 + t4142;
  t4977 = -0.08055*t4971;
  t4993 = 0. + t4977 + t4984;
  t4172 = t1472*t3066;
  t4176 = t104*t3156;
  t4192 = t4172 + t4176;
  t4238 = t1472*t3258;
  t4246 = t104*t3348;
  t4250 = t4238 + t4246;
  t4267 = t1472*t3400;
  t4269 = t104*t1589*t3434;
  t4284 = t4267 + t4269;
  t5298 = -0.135*t1483;
  t5301 = -0.08055*t1589;
  t5306 = t5298 + t5301;
  t5328 = 0.08055*t1483;
  t5332 = t5328 + t4984;
  t5511 = 0.135*t127;
  t5520 = t5511 + t5026;
  t5533 = 0.07996*t127;
  t5560 = -0.135*t979;
  t5580 = t5533 + t5560;
  t4308 = t1472*t3562;
  t4326 = t104*t1589*t3582;
  t4339 = t4308 + t4326;
  t5658 = 0.08055*t104;
  t5661 = t5658 + t5111;
  t5699 = -0.01004*t104;
  t5701 = -0.08055*t1472;
  t5703 = t5699 + t5701;
  t4402 = t104*t3582;
  t4408 = -1.*t1472*t3652;
  t4410 = t4402 + t4408;
  t6534 = t5087*t3770;
  t6542 = -0.1708*t1483*t3802;
  t6544 = t5059*t3802;
  t6545 = t1589*t5119*t3802;
  t6556 = -0.08045*t4456;
  t6557 = t104*t3770;
  t6560 = -1.*t1589*t1472*t3802;
  t6566 = t6557 + t6560;
  t6571 = -0.06984*t6566;
  t4466 = t104*t3802;
  t4485 = -1.*t1472*t3850;
  t4513 = t4466 + t4485;
  t4516 = t1472*t3913;
  t4524 = t104*t3971;
  t4525 = t4516 + t4524;
  p_output1[0]=(-1.*t104*t3066 + t1472*t3156)*var2[3] + (-1.*t104*t1322 + t1472*t1706)*var2[4] + (-1.*t104*t2327 + t1472*t1589*t2419)*var2[5] + (-1.*t104*t2598 + t1472*t1589*t2639)*var2[13] + t1472*t2515*var2[14] + t2813*var2[15];
  p_output1[1]=(-1.*t104*t2639 + t1472*t2780)*var2[3] + (-1.*t104*t3258 + t1472*t3348)*var2[4] + (-1.*t104*t3400 + t1472*t1589*t3434)*var2[5] + (-1.*t104*t3562 + t1472*t1589*t3582)*var2[13] + t1472*t3531*var2[14] + (t1472*t3582 + t104*t3652)*var2[15];
  p_output1[2]=(-1.*t104*t3913 + t1472*t3971)*var2[4] + t3808*var2[5] + t3808*var2[13] + t1472*t3732*var2[14] + (t1472*t3802 + t104*t3850)*var2[15];
  p_output1[3]=0;
  p_output1[4]=t4192*var2[3] + t4060*var2[4] + t4076*var2[5] + t4121*var2[13] + t104*t2515*var2[14] + t4156*var2[15];
  p_output1[5]=t2813*var2[3] + t4250*var2[4] + t4284*var2[5] + t4339*var2[13] + t104*t3531*var2[14] + t4410*var2[15];
  p_output1[6]=t4525*var2[4] + t4456*var2[5] + t4456*var2[13] + t104*t3732*var2[14] + t4513*var2[15];
  p_output1[7]=0;
  p_output1[8]=(-1.*t1483*t3114 + t3484)*var2[3] + (-1.*t149*t1507*t1589 - 1.*t1483*t1649)*var2[4] - 1.*t1483*t2419*var2[5] - 1.*t1483*t2639*var2[13] + t2780*var2[14];
  p_output1[9]=(t149*t1589*t160 - 1.*t1483*t2508)*var2[3] + (-1.*t1507*t1589*t2044 - 1.*t1483*t3344)*var2[4] - 1.*t1483*t3434*var2[5] - 1.*t1483*t3582*var2[13] + t3652*var2[14];
  p_output1[10]=(-1.*t1589*t160 - 1.*t1483*t3958)*var2[4] - 1.*t1483*t3802*var2[5] - 1.*t1483*t3802*var2[13] + t3850*var2[14];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.1708*(t1589*t160*t2044 + t1483*t3114) - 0.06984*(t104*t3066 - 1.*t1472*t3156) - 0.08045*t4192 + t2855*t4962 - 1.*t160*t2044*t4993 + t3038*t5030 + t3114*t5059 + t3066*t5087 + t3156*t5119)*var2[3] + (-0.1708*(t149*t1507*t1589 + t1483*t1649) - 0.06984*(t104*t1322 - 1.*t1472*t1706) - 0.08045*t4060 - 1.*t149*t1507*t4993 + t1054*t149*t160*t5030 + t1649*t5059 + t1322*t5087 + t1706*t5119 + t149*t160*t4962*t653)*var2[4] + (-0.1708*t1483*t2419 - 0.06984*(t104*t2327 - 1.*t1472*t1589*t2419) - 0.08045*t4076 + t2219*t4962 + t2097*t5030 + t2419*t5059 + t2327*t5087 + t1589*t2419*t5119)*var2[5] + (-0.1708*t1483*t2639 - 0.06984*(t104*t2598 - 1.*t1472*t1589*t2639) - 0.08045*t4121 + t2639*t5059 + t2598*t5087 + t1589*t2639*t5119 + t2097*t5520 + t2495*t5580)*var2[13] + (-0.1708*(-1.*t1483*t149*t160 - 1.*t1589*t2508) - 0.08045*t104*t2515 + 0.06984*t1472*t2515 + t2515*t5119 + t149*t160*t5306 + t2508*t5332)*var2[14] + (-0.06984*(-1.*t1472*t2639 - 1.*t104*t2780) - 0.08045*t4156 + t2639*t5661 + t2780*t5703)*var2[15];
  p_output1[13]=var2[1] + (-0.1708*t2515 - 0.08045*t2813 - 0.06984*t4156 + t2097*t4962 + t149*t160*t4993 + t2495*t5030 + t2508*t5059 + t2639*t5087 + t2780*t5119)*var2[3] + (-0.1708*(t1507*t1589*t2044 + t1483*t3344) - 0.06984*(t104*t3258 - 1.*t1472*t3348) - 0.08045*t4250 - 1.*t1507*t2044*t4993 + t1054*t160*t2044*t5030 + t3344*t5059 + t3258*t5087 + t3348*t5119 + t160*t2044*t4962*t653)*var2[4] + (-0.1708*t1483*t3434 - 0.06984*(t104*t3400 - 1.*t1472*t1589*t3434) - 0.08045*t4284 + t3038*t4962 + t3379*t5030 + t3434*t5059 + t3400*t5087 + t1589*t3434*t5119)*var2[5] + (-0.1708*t1483*t3582 - 0.06984*(t104*t3562 - 1.*t1472*t1589*t3582) - 0.08045*t4339 + t3582*t5059 + t3562*t5087 + t1589*t3582*t5119 + t3379*t5520 + t3500*t5580)*var2[13] + (-0.1708*(t3071 - 1.*t1589*t3513) - 0.08045*t104*t3531 + 0.06984*t1472*t3531 + t3531*t5119 + t160*t2044*t5306 + t3513*t5332)*var2[14] + (-0.06984*(-1.*t1472*t3582 - 1.*t104*t3652) - 0.08045*t4410 + t3582*t5661 + t3652*t5703)*var2[15];
  p_output1[14]=var2[2] + (-0.1708*(t1589*t160 + t1483*t3958) - 0.06984*(t104*t3913 - 1.*t1472*t3971) - 0.08045*t4525 - 1.*t160*t4993 - 1.*t1054*t1507*t5030 + t3958*t5059 + t3913*t5087 + t3971*t5119 - 1.*t1507*t4962*t653)*var2[4] + (-1.*t1054*t160*t4962 + t160*t5030*t653 + t6534 + t6542 + t6544 + t6545 + t6556 + t6571)*var2[5] + (t1054*t160*t5580 + t160*t5520*t653 + t6534 + t6542 + t6544 + t6545 + t6556 + t6571)*var2[13] + (-0.1708*(t1483*t1507 - 1.*t1589*t3726) - 0.08045*t104*t3732 + 0.06984*t1472*t3732 + t3732*t5119 - 1.*t1507*t5306 + t3726*t5332)*var2[14] + (-0.06984*(-1.*t1472*t3802 - 1.*t104*t3850) - 0.08045*t4513 + t3802*t5661 + t3850*t5703)*var2[15];
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

#include "dT_RightThigh_mex.hh"

namespace SymExpression
{

void dT_RightThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
