/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:40 GMT-04:00
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
  double t112;
  double t261;
  double t895;
  double t990;
  double t979;
  double t1003;
  double t1036;
  double t1049;
  double t1802;
  double t1883;
  double t1201;
  double t1254;
  double t1259;
  double t1270;
  double t1964;
  double t1976;
  double t1988;
  double t2164;
  double t2165;
  double t2170;
  double t1316;
  double t1317;
  double t1318;
  double t1426;
  double t1445;
  double t1462;
  double t1469;
  double t1485;
  double t1605;
  double t1636;
  double t1663;
  double t1669;
  double t1676;
  double t1734;
  double t1780;
  double t2666;
  double t2435;
  double t2447;
  double t2462;
  double t2699;
  double t2317;
  double t2361;
  double t2369;
  double t2822;
  double t2826;
  double t2698;
  double t2702;
  double t2706;
  double t2096;
  double t2135;
  double t2143;
  double t2828;
  double t2833;
  double t2874;
  double t2909;
  double t2913;
  double t2914;
  double t2751;
  double t2771;
  double t2772;
  double t2992;
  double t3004;
  double t3011;
  double t3032;
  double t2965;
  double t3043;
  double t2027;
  double t2041;
  double t2049;
  double t3098;
  double t3111;
  double t3116;
  double t3229;
  double t3230;
  double t3232;
  double t3121;
  double t3123;
  double t3127;
  double t3133;
  double t3165;
  double t3049;
  double t3062;
  double t3381;
  double t3383;
  double t3408;
  double t3410;
  double t3413;
  double t3333;
  double t3334;
  double t3338;
  double t3671;
  double t3690;
  double t3699;
  double t3731;
  double t3740;
  double t3741;
  double t3744;
  double t3961;
  double t4012;
  double t3700;
  double t3704;
  double t3727;
  double t2875;
  double t2921;
  double t3316;
  double t3320;
  double t3329;
  double t4460;
  double t3166;
  double t4406;
  double t4429;
  double t4434;
  double t4439;
  double t4003;
  double t4014;
  double t3879;
  double t3880;
  double t3888;
  double t4547;
  double t3431;
  double t3434;
  double t4097;
  double t4112;
  double t5084;
  double t5103;
  double t5086;
  double t5087;
  double t5095;
  double t5213;
  double t5216;
  double t4052;
  double t4058;
  double t5120;
  double t5124;
  double t5133;
  double t5222;
  double t5230;
  double t5237;
  double t5263;
  double t5268;
  double t5273;
  double t3183;
  double t3186;
  double t3220;
  double t3222;
  double t5101;
  double t5108;
  double t5114;
  double t3140;
  double t3141;
  double t5239;
  double t5275;
  double t5276;
  double t5280;
  double t5313;
  double t5315;
  double t5346;
  double t3472;
  double t3485;
  double t5359;
  double t3386;
  double t3423;
  double t5407;
  double t5409;
  double t5410;
  double t4346;
  double t4354;
  double t4369;
  double t3353;
  double t3356;
  double t3304;
  double t3312;
  double t3601;
  double t3603;
  double t3611;
  double t3257;
  double t3282;
  double t3287;
  double t3831;
  double t3833;
  double t3862;
  double t5739;
  double t5755;
  double t5767;
  double t5800;
  double t5810;
  double t5711;
  double t5714;
  double t5727;
  double t5881;
  double t2967;
  double t2972;
  double t4018;
  double t4031;
  double t3963;
  double t3977;
  double t6056;
  double t6060;
  double t6062;
  double t6065;
  double t6066;
  double t6067;
  double t6076;
  double t4186;
  double t4187;
  double t6103;
  double t4077;
  double t4092;
  double t5566;
  double t5573;
  double t5575;
  double t3750;
  double t3751;
  double t3626;
  double t3646;
  double t5842;
  double t5852;
  double t5853;
  double t3464;
  double t3803;
  double t3805;
  double t6446;
  double t5936;
  double t5937;
  double t4595;
  double t4607;
  double t4660;
  double t4661;
  double t6546;
  double t6559;
  double t6569;
  double t6574;
  double t6575;
  double t6587;
  double t4788;
  double t4809;
  double t4823;
  double t4824;
  double t4761;
  double t4766;
  double t6445;
  double t6470;
  double t4466;
  double t4485;
  double t4507;
  double t4510;
  double t6275;
  double t6285;
  double t6295;
  double t5634;
  double t5642;
  double t5645;
  double t5882;
  double t5904;
  double t6414;
  double t6415;
  double t6416;
  double t6495;
  double t6502;
  double t6504;
  double t6019;
  double t6021;
  double t6026;
  t112 = Cos(var1[3]);
  t261 = Sin(var1[3]);
  t895 = Cos(var1[4]);
  t990 = Sin(var1[4]);
  t979 = -1.*var2[2]*t895*t261;
  t1003 = -1.*var2[1]*t990;
  t1036 = -1.*var1[1]*t895;
  t1049 = var1[2]*t261*t990;
  t1802 = Cos(var1[5]);
  t1883 = Sin(var1[5]);
  t1201 = var2[2]*t112*t895;
  t1254 = var2[0]*t990;
  t1259 = var1[0]*t895;
  t1270 = -1.*var1[2]*t112*t990;
  t1964 = t112*t1802*t990;
  t1976 = t261*t1883;
  t1988 = t1964 + t1976;
  t2164 = -1.*t112*t1802;
  t2165 = -1.*t261*t990*t1883;
  t2170 = t2164 + t2165;
  t1316 = -1.*var2[1]*t112*t895;
  t1317 = var2[0]*t895*t261;
  t1318 = var1[0]*t112*t895;
  t1426 = var1[1]*t895*t261;
  t1445 = t1318 + t1426;
  t1462 = var2[3]*t1445;
  t1469 = var1[1]*t112*t990;
  t1485 = -1.*var1[0]*t261*t990;
  t1605 = -1.*var2[3]*t895*t261;
  t1636 = -1.*var2[4]*t112*t990;
  t1663 = t1605 + t1636;
  t1669 = var2[3]*t112*t895;
  t1676 = -1.*var2[4]*t261*t990;
  t1734 = t1669 + t1676;
  t1780 = -1.*var2[4]*t895;
  t2666 = Cos(var1[6]);
  t2435 = t1802*t261*t990;
  t2447 = -1.*t112*t1883;
  t2462 = t2435 + t2447;
  t2699 = Sin(var1[6]);
  t2317 = -1.*t1802*t261;
  t2361 = t112*t990*t1883;
  t2369 = t2317 + t2361;
  t2822 = -1.*t2666;
  t2826 = 1. + t2822;
  t2698 = t895*t1802*t2666;
  t2702 = -1.*t895*t1883*t2699;
  t2706 = t2698 + t2702;
  t2096 = -1.*t1802*t261*t990;
  t2135 = t112*t1883;
  t2143 = t2096 + t2135;
  t2828 = 0.07996*t2826;
  t2833 = -0.135*t2699;
  t2874 = 0. + t2828 + t2833;
  t2909 = 0.135*t2826;
  t2913 = 0.07996*t2699;
  t2914 = 0. + t2909 + t2913;
  t2751 = t112*t1802;
  t2771 = t261*t990*t1883;
  t2772 = t2751 + t2771;
  t2992 = -1.*var1[2];
  t3004 = -1.*t895*t1802*t2874;
  t3011 = -1.*t895*t1883*t2914;
  t3032 = 0. + t2992 + t3004 + t3011;
  t2965 = t2666*t2170;
  t3043 = t2666*t1988;
  t2027 = t1802*t261;
  t2041 = -1.*t112*t990*t1883;
  t2049 = t2027 + t2041;
  t3098 = t2462*t2874;
  t3111 = t2772*t2914;
  t3116 = 0. + var1[1] + t3098 + t3111;
  t3229 = t2666*t2462;
  t3230 = -1.*t2772*t2699;
  t3232 = t3229 + t3230;
  t3121 = -1.*t895*t2666*t1883;
  t3123 = -1.*t895*t1802*t2699;
  t3127 = t3121 + t3123;
  t3133 = t3116*t3127;
  t3165 = -1.*t2462*t2699;
  t3049 = -1.*t2369*t2699;
  t3062 = t3043 + t3049;
  t3381 = -0.135*t2666;
  t3383 = t3381 + t2913;
  t3408 = 0.07996*t2666;
  t3410 = 0.135*t2699;
  t3413 = t3408 + t3410;
  t3333 = -1.*t1802*t2666*t990;
  t3334 = t990*t1883*t2699;
  t3338 = t3333 + t3334;
  t3671 = t895*t1802*t2874;
  t3690 = t895*t1883*t2914;
  t3699 = 0. + var1[2] + t3671 + t3690;
  t3731 = -1.*var1[0];
  t3740 = -1.*t1988*t2874;
  t3741 = -1.*t2369*t2914;
  t3744 = 0. + t3731 + t3740 + t3741;
  t3961 = t3744*t3127;
  t4012 = -1.*t1988*t2699;
  t3700 = t112*t895*t1802*t2666;
  t3704 = -1.*t112*t895*t1883*t2699;
  t3727 = t3700 + t3704;
  t2875 = t1988*t2874;
  t2921 = t2369*t2914;
  t3316 = t895*t1802*t2666*t261;
  t3320 = -1.*t895*t261*t1883*t2699;
  t3329 = t3316 + t3320;
  t4460 = 0. + var1[0] + t2875 + t2921;
  t3166 = t2965 + t3165;
  t4406 = -1.*var1[1];
  t4429 = -1.*t2462*t2874;
  t4434 = -1.*t2772*t2914;
  t4439 = 0. + t4406 + t4429 + t4434;
  t4003 = t2666*t2049;
  t4014 = t4003 + t4012;
  t3879 = t2666*t2143;
  t3880 = -1.*t2170*t2699;
  t3888 = t3879 + t3880;
  t4547 = 0.08055*t2706;
  t3431 = -1.*t2666*t2772;
  t3434 = t3431 + t3165;
  t4097 = -1.*t2666*t2369;
  t4112 = t4097 + t4012;
  t5084 = Cos(var1[7]);
  t5103 = Sin(var1[7]);
  t5086 = t2666*t2772;
  t5087 = t2462*t2699;
  t5095 = t5086 + t5087;
  t5213 = -1.*t5084;
  t5216 = 1. + t5213;
  t4052 = t2170*t2699;
  t4058 = t3229 + t4052;
  t5120 = t895*t2666*t1883;
  t5124 = t895*t1802*t2699;
  t5133 = t5120 + t5124;
  t5222 = 0.135*t5216;
  t5230 = 0.08055*t5103;
  t5237 = 0. + t5222 + t5230;
  t5263 = -0.08055*t5216;
  t5268 = 0.135*t5103;
  t5273 = 0. + t5263 + t5268;
  t3183 = t2049*t2699;
  t3186 = t3043 + t3183;
  t3220 = t895*t1883*t2874;
  t3222 = -1.*t895*t1802*t2914;
  t5101 = t5084*t5095;
  t5108 = -1.*t895*t261*t5103;
  t5114 = t5101 + t5108;
  t3140 = t2170*t2874;
  t3141 = t2462*t2914;
  t5239 = t5095*t5237;
  t5275 = t895*t261*t5273;
  t5276 = 0. + var1[1] + t3098 + t3111 + t5239 + t5275;
  t5280 = -1.*t5084*t2706*t5276;
  t5313 = -1.*t5133*t5237;
  t5315 = t990*t5273;
  t5346 = 0. + t2992 + t3004 + t3011 + t5313 + t5315;
  t3472 = -1.*t895*t1802*t3383;
  t3485 = -1.*t895*t1883*t3413;
  t5359 = -1.*t2706*t5237;
  t3386 = t2462*t3383;
  t3423 = t2772*t3413;
  t5407 = t5084*t5133;
  t5409 = t990*t5103;
  t5410 = t5407 + t5409;
  t4346 = -1.*t2666*t990*t1883;
  t4354 = -1.*t1802*t990*t2699;
  t4369 = t4346 + t4354;
  t3353 = t1802*t990*t2874;
  t3356 = t990*t1883*t2914;
  t3304 = t895*t1802*t261*t2874;
  t3312 = t895*t261*t1883*t2914;
  t3601 = t895*t2666*t261*t1883;
  t3603 = t895*t1802*t261*t2699;
  t3611 = t3601 + t3603;
  t3257 = t112*t895*t2666*t1883;
  t3282 = t112*t895*t1802*t2699;
  t3287 = t3257 + t3282;
  t3831 = t2666*t2369;
  t3833 = t1988*t2699;
  t3862 = t3831 + t3833;
  t5739 = 0.135*t5084;
  t5755 = -0.08055*t5103;
  t5767 = t5739 + t5755;
  t5800 = 0.08055*t5084;
  t5810 = t5800 + t5268;
  t5711 = t5084*t3862;
  t5714 = -1.*t112*t895*t5103;
  t5727 = t5711 + t5714;
  t5881 = -1.*t895*t5084*t261;
  t2967 = t2143*t2699;
  t2972 = t2965 + t2967;
  t4018 = -1.*t895*t1883*t2874;
  t4031 = t895*t1802*t2914;
  t3963 = -1.*t2049*t2874;
  t3977 = -1.*t1988*t2914;
  t6056 = -1.*t3862*t5237;
  t6060 = -1.*t112*t895*t5273;
  t6062 = 0. + t3731 + t3740 + t3741 + t6056 + t6060;
  t6065 = -1.*t5084*t2706*t6062;
  t6066 = t5133*t5237;
  t6067 = -1.*t990*t5273;
  t6076 = 0. + var1[2] + t3671 + t3690 + t6066 + t6067;
  t4186 = t895*t1802*t3383;
  t4187 = t895*t1883*t3413;
  t6103 = t2706*t5237;
  t4077 = -1.*t1988*t3383;
  t4092 = -1.*t2369*t3413;
  t5566 = t5084*t4369;
  t5573 = t895*t5103;
  t5575 = t5566 + t5573;
  t3750 = -1.*t1802*t990*t2874;
  t3751 = -1.*t990*t1883*t2914;
  t3626 = -1.*t112*t895*t1802*t2874;
  t3646 = -1.*t112*t895*t1883*t2914;
  t5842 = t5084*t990;
  t5852 = -1.*t5133*t5103;
  t5853 = t5842 + t5852;
  t3464 = 0.08055*t3062;
  t3803 = -1.*t2143*t2874;
  t3805 = -1.*t2170*t2914;
  t6446 = t895*t261*t5103;
  t5936 = t3862*t5237;
  t5937 = t112*t895*t5273;
  t4595 = -1.*t2170*t2874;
  t4607 = -1.*t2462*t2914;
  t4660 = t2049*t2874;
  t4661 = t1988*t2914;
  t6546 = 0.08055*t3127;
  t6559 = 0. + var1[0] + t2875 + t2921 + t5936 + t5937;
  t6569 = -1.*t5095*t5237;
  t6574 = -1.*t895*t261*t5273;
  t6575 = 0. + t4406 + t4429 + t4434 + t6569 + t6574;
  t6587 = -0.01004*t2706*t5103;
  t4788 = -1.*t2462*t3383;
  t4809 = -1.*t2772*t3413;
  t4823 = t1988*t3383;
  t4824 = t2369*t3413;
  t4761 = t2143*t2874;
  t4766 = t2170*t2914;
  t6445 = t5084*t2972;
  t6470 = t6445 + t6446;
  t4466 = -1.*t895*t1802*t261*t2874;
  t4485 = -1.*t895*t261*t1883*t2914;
  t4507 = t112*t895*t1802*t2874;
  t4510 = t112*t895*t1883*t2914;
  t6275 = t5084*t3287;
  t6285 = t112*t990*t5103;
  t6295 = t6275 + t6285;
  t5634 = t5084*t3611;
  t5642 = t261*t990*t5103;
  t5645 = t5634 + t5642;
  t5882 = -1.*t5095*t5103;
  t5904 = t5881 + t5882;
  t6414 = -1.*t112*t895*t5084;
  t6415 = -1.*t3862*t5103;
  t6416 = t6414 + t6415;
  t6495 = t112*t895*t5084;
  t6502 = t3862*t5103;
  t6504 = t6495 + t6502;
  t6019 = -1.*t5084*t3862;
  t6021 = t112*t895*t5103;
  t6026 = t6019 + t6021;
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
  p_output1[24]=-1.*t112*var2[2] + t261*var1[2]*var2[3];
  p_output1[25]=-1.*t261*var2[2] - 1.*t112*var1[2]*var2[3];
  p_output1[26]=t112*var2[0] + t261*var2[1] + (-1.*t261*var1[0] + t112*var1[1])*var2[3];
  p_output1[27]=-1.*t112*var2[3];
  p_output1[28]=-1.*t261*var2[3];
  p_output1[29]=0;
  p_output1[30]=t1003 + t979 - 1.*t112*t895*var1[2]*var2[3] + (t1036 + t1049)*var2[4];
  p_output1[31]=t1201 + t1254 - 1.*t261*t895*var1[2]*var2[3] + (t1259 + t1270)*var2[4];
  p_output1[32]=t1316 + t1317 + t1462 + (t1469 + t1485)*var2[4];
  p_output1[33]=t1663;
  p_output1[34]=t1734;
  p_output1[35]=t1780;
  p_output1[36]=t1003 + t979 + (-0.135*t2143 + 0.07996*t2170 - 1.*t112*t895*var1[2])*var2[3] + (t1036 + t1049 - 0.135*t112*t1802*t895 + 0.07996*t112*t1883*t895)*var2[4] + (0.07996*t1988 - 0.135*t2049)*var2[5];
  p_output1[37]=t1201 + t1254 + (-0.135*t1988 + 0.07996*t2369 - 1.*t261*t895*var1[2])*var2[3] + (t1259 + t1270 - 0.135*t1802*t261*t895 + 0.07996*t1883*t261*t895)*var2[4] + (-0.135*t2170 + 0.07996*t2462)*var2[5];
  p_output1[38]=t1316 + t1317 + t1462 + (t1469 + t1485 + 0.135*t1802*t990 - 0.07996*t1883*t990)*var2[4] + (0.07996*t1802*t895 + 0.135*t1883*t895)*var2[5];
  p_output1[39]=t1663;
  p_output1[40]=t1734;
  p_output1[41]=t1780;
  p_output1[42]=t2706*var2[1] + (-1.*t2462*t2666 + t2699*t2772)*var2[2] + (t2706*(t2875 + t2921) + 0.08055*t2972 + t3032*t3062 - 0.135*t261*t895)*var2[3] + (0.08055*t3287 + t2706*(t3304 + t3312) + t3032*t3329 + t3116*t3338 + t3232*(t3353 + t3356) - 0.135*t112*t990)*var2[4] + (t3133 + t2706*(t3140 + t3141) + t3032*t3166 + 0.08055*t3186 + (t3220 + t3222)*t3232)*var2[5] + (t3133 + t2706*(t3386 + t3423) + t3032*t3434 + t3464 + t3232*(t3472 + t3485))*var2[6];
  p_output1[43]=(-1.*t1802*t2666*t895 + t1883*t2699*t895)*var2[0] + t3062*var2[2] + (t2706*(t3803 + t3805) + 0.08055*t3862 + t3699*t3888 + 0.135*t112*t895)*var2[3] + (0.08055*t3611 + t2706*(t3626 + t3646) + t3699*t3727 + t3338*t3744 + t3062*(t3750 + t3751) - 0.135*t261*t990)*var2[4] + (t3961 + t2706*(t3963 + t3977) + t3699*t4014 + t3062*(t4018 + t4031) + 0.08055*t4058)*var2[5] + (0.08055*t3232 + t3961 + t2706*(t4077 + t4092) + t3699*t4112 + t3062*(t4186 + t4187))*var2[6];
  p_output1[44]=t3232*var2[0] + (-1.*t1988*t2666 + t2369*t2699)*var2[1] + (t3062*(t3740 + t3741) + t3888*t4439 + t3062*t4460 + t3232*(t4761 + t4766))*var2[3] + (0.08055*t4369 + t3727*t4439 + t3329*t4460 + t3062*(t4466 + t4485) + t3232*(t4507 + t4510) - 0.135*t895)*var2[4] + (t4014*t4439 + t3166*t4460 + t4547 + t3062*(t4595 + t4607) + t3232*(t4660 + t4661))*var2[5] + (t4112*t4439 + t3434*t4460 + t4547 + t3062*(t4788 + t4809) + t3232*(t4823 + t4824))*var2[6];
  p_output1[45]=t3888*var2[3] + t3727*var2[4] + t4014*var2[5] + t4112*var2[6];
  p_output1[46]=t3062*var2[3] + t3329*var2[4] + t3166*var2[5] + t3434*var2[6];
  p_output1[47]=t3338*var2[4] + t3127*var2[5] + t3127*var2[6];
  p_output1[48]=(-1.*t5084*t5133 - 1.*t5103*t990)*var2[1] + t5114*var2[2] + (0.08055*t3888 - 1.*t5346*t5727 - 0.01004*(t2972*t5103 + t5881) - 1.*t5410*(t2875 + t2921 + t5936 + t5937))*var2[3] + (0.08055*t3727 - 1.*t5276*t5575 - 1.*t5346*t5645 - 1.*t5114*(t3353 + t3356 - 1.*t4369*t5237 + t5273*t895) - 0.01004*(t3287*t5103 - 1.*t112*t5084*t990) - 1.*t5410*(t3304 + t3312 + t3611*t5237 - 1.*t261*t5273*t990))*var2[4] + (0.08055*t4014 - 0.01004*t3186*t5103 + t5280 - 1.*t4058*t5084*t5346 - 1.*t5114*(t3220 + t3222 + t5359) - 1.*(t3140 + t3141 + t4058*t5237)*t5410)*var2[5] + (0.08055*t4112 - 0.01004*t3062*t5103 + t5280 - 1.*t3232*t5084*t5346 - 1.*t5114*(t3472 + t3485 + t5359) - 1.*(t3386 + t3423 + t3232*t5237)*t5410)*var2[6] + (-0.01004*t5727 - 1.*t5276*t5853 - 1.*t5346*t5904 - 1.*t5410*(t5095*t5810 + t261*t5767*t895) - 1.*t5114*(-1.*t5133*t5810 + t5767*t990))*var2[7];
  p_output1[49]=t5410*var2[0] + t6026*var2[2] + (t3464 - 1.*(t3803 + t3805 - 1.*t2972*t5237 + t5275)*t5410 - 1.*t6076*t6470 - 0.01004*t6504)*var2[3] + (0.08055*t3329 - 1.*t5575*t6062 - 1.*t6076*t6295 - 1.*t5727*(t3750 + t3751 + t4369*t5237 - 1.*t5273*t895) - 0.01004*(t3611*t5103 - 1.*t261*t5084*t990) - 1.*t5410*(t3626 + t3646 - 1.*t3287*t5237 + t112*t5273*t990))*var2[4] + (0.08055*t3166 - 0.01004*t4058*t5103 - 1.*(t3963 + t3977 - 1.*t3186*t5237)*t5410 + t6065 - 1.*t3186*t5084*t6076 - 1.*t5727*(t4018 + t4031 + t6103))*var2[5] + (0.08055*t3434 - 0.01004*t3232*t5103 - 1.*(t4077 + t4092 - 1.*t3062*t5237)*t5410 + t6065 - 1.*t3062*t5084*t6076 - 1.*t5727*(t4186 + t4187 + t6103))*var2[6] + (-0.01004*t5114 - 1.*t5853*t6062 - 1.*t6076*t6416 - 1.*t5410*(-1.*t3862*t5810 - 1.*t112*t5767*t895) - 1.*t5727*(t5133*t5810 - 1.*t5767*t990))*var2[7];
  p_output1[50]=(-1.*t5084*t5095 + t6446)*var2[0] + t5727*var2[1] + (-1.*t5727*(t3740 + t3741 + t6056 + t6060) - 1.*t5727*t6559 - 1.*t5114*(t4761 + t4766 + t2972*t5237 + t6574) - 1.*t6470*t6575)*var2[3] + (0.08055*t3338 - 1.*t5645*t6559 - 1.*t6295*t6575 - 0.01004*(t4369*t5103 - 1.*t5084*t895) - 1.*t5114*(t4507 + t4510 + t3287*t5237 - 1.*t112*t5273*t990) - 1.*t5727*(t4466 + t4485 - 1.*t3611*t5237 + t261*t5273*t990))*var2[4] + (-1.*t5114*(t4660 + t4661 + t3186*t5237) - 1.*(t4595 + t4607 - 1.*t4058*t5237)*t5727 + t6546 - 1.*t4058*t5084*t6559 - 1.*t3186*t5084*t6575 + t6587)*var2[5] + (-1.*t5114*(t4823 + t4824 + t3062*t5237) - 1.*(t4788 + t4809 - 1.*t3232*t5237)*t5727 + t6546 - 1.*t3232*t5084*t6559 - 1.*t3062*t5084*t6575 + t6587)*var2[6] + (-0.01004*t5410 - 1.*t5904*t6559 - 1.*t6416*t6575 - 1.*t5114*(t3862*t5810 + t112*t5767*t895) - 1.*t5727*(-1.*t5095*t5810 - 1.*t261*t5767*t895))*var2[7];
  p_output1[51]=(-1.*t2972*t5084 + t5108)*var2[3] + (-1.*t3287*t5084 - 1.*t112*t5103*t990)*var2[4] - 1.*t3186*t5084*var2[5] - 1.*t3062*t5084*var2[6] + t6504*var2[7];
  p_output1[52]=t6026*var2[3] + (-1.*t3611*t5084 - 1.*t261*t5103*t990)*var2[4] - 1.*t4058*t5084*var2[5] - 1.*t3232*t5084*var2[6] + (t5095*t5103 + t261*t5084*t895)*var2[7];
  p_output1[53]=(-1.*t4369*t5084 - 1.*t5103*t895)*var2[4] - 1.*t2706*t5084*var2[5] - 1.*t2706*t5084*var2[6] + (t5103*t5133 - 1.*t5084*t990)*var2[7];
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

#include "dJs_LeftThigh_mex.hh"

namespace SymExpression
{

void dJs_LeftThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
