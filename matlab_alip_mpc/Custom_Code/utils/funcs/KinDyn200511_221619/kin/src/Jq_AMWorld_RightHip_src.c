/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:15 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMWorld_RightHip_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t296;
  double t1728;
  double t872;
  double t1071;
  double t1731;
  double t288;
  double t2458;
  double t2111;
  double t662;
  double t828;
  double t5;
  double t2862;
  double t2899;
  double t2811;
  double t2834;
  double t1664;
  double t1884;
  double t1885;
  double t2115;
  double t2188;
  double t2337;
  double t2530;
  double t2808;
  double t2850;
  double t2959;
  double t2996;
  double t3084;
  double t3191;
  double t3217;
  double t3222;
  double t3383;
  double t3476;
  double t3525;
  double t3631;
  double t3647;
  double t4048;
  double t4201;
  double t4220;
  double t4226;
  double t4230;
  double t4269;
  double t4282;
  double t4461;
  double t4531;
  double t4561;
  double t4568;
  double t4717;
  double t2095;
  double t2369;
  double t2438;
  double t4886;
  double t4916;
  double t4944;
  double t4905;
  double t4906;
  double t3893;
  double t4738;
  double t4762;
  double t5149;
  double t5197;
  double t5210;
  double t5237;
  double t5270;
  double t5271;
  double t4857;
  double t4863;
  double t4871;
  double t5233;
  double t5285;
  double t5286;
  double t4896;
  double t4900;
  double t4914;
  double t4949;
  double t4950;
  double t4952;
  double t4979;
  double t4982;
  double t4985;
  double t4990;
  double t4993;
  double t5002;
  double t5022;
  double t5033;
  double t5046;
  double t5090;
  double t5341;
  double t5350;
  double t5374;
  double t5439;
  double t5445;
  double t5468;
  double t5120;
  double t5293;
  double t5298;
  double t5386;
  double t5390;
  double t5404;
  double t5541;
  double t5548;
  double t5562;
  double t5428;
  double t5469;
  double t5473;
  double t5478;
  double t5496;
  double t5499;
  double t5673;
  double t5674;
  double t5676;
  double t5685;
  double t5690;
  double t5700;
  double t5515;
  double t5519;
  double t5520;
  double t5772;
  double t5775;
  double t5781;
  double t5875;
  double t5887;
  double t5888;
  double t6003;
  double t6014;
  double t6016;
  double t6089;
  double t6106;
  double t6110;
  double t6178;
  double t6180;
  double t6184;
  double t6187;
  double t6189;
  double t6191;
  double t6201;
  double t6216;
  double t6217;
  double t6218;
  double t6225;
  double t6228;
  double t6234;
  double t6244;
  double t6323;
  double t6329;
  double t6331;
  double t6320;
  double t6343;
  double t6355;
  double t5682;
  double t5704;
  double t5726;
  double t6206;
  double t6245;
  double t6253;
  double t6261;
  double t6265;
  double t6267;
  double t5767;
  double t5782;
  double t5790;
  double t6274;
  double t6275;
  double t6276;
  double t6291;
  double t6299;
  double t6314;
  double t6317;
  double t5812;
  double t5815;
  double t5850;
  double t4798;
  double t6444;
  double t6445;
  double t5996;
  double t6017;
  double t6020;
  double t6024;
  double t6034;
  double t6035;
  double t6038;
  double t6070;
  double t6071;
  double t6493;
  double t6510;
  double t6516;
  double t6580;
  double t6592;
  double t6593;
  double t6594;
  double t6598;
  double t6609;
  double t6616;
  double t6623;
  double t6638;
  double t6711;
  double t6717;
  double t6642;
  double t6644;
  double t6661;
  double t6665;
  double t6667;
  double t6672;
  double t6673;
  double t6678;
  double t6679;
  double t6701;
  double t6702;
  double t6703;
  double t6704;
  double t6768;
  double t6769;
  double t6521;
  double t6537;
  double t6561;
  double t6801;
  double t6802;
  double t6805;
  double t6812;
  double t6825;
  double t6851;
  double t6853;
  double t6856;
  double t6858;
  double t6865;
  double t6877;
  double t6889;
  double t6890;
  double t6894;
  double t6900;
  double t6902;
  double t6907;
  double t6916;
  double t6932;
  double t6939;
  double t6943;
  double t488;
  t296 = Sin(var1[3]);
  t1728 = Cos(var1[3]);
  t872 = Cos(var1[5]);
  t1071 = Sin(var1[4]);
  t1731 = Sin(var1[5]);
  t288 = Sin(var1[14]);
  t2458 = 0. + t288;
  t2111 = Cos(var1[13]);
  t662 = Cos(var1[14]);
  t828 = Sin(var1[13]);
  t5 = Cos(var1[4]);
  t2862 = -1.*t662*t828;
  t2899 = 0. + t2862;
  t2811 = -1.*t2111*t662;
  t2834 = 0. + t2811;
  t1664 = -1.*t872*t296*t1071;
  t1884 = t1728*t1731;
  t1885 = t1664 + t1884;
  t2115 = -1.*t1728*t872;
  t2188 = -1.*t296*t1071*t1731;
  t2337 = t2115 + t2188;
  t2530 = var2[13]*t2458;
  t2808 = var2[5]*t2458;
  t2850 = t2834*t872;
  t2959 = -1.*t2899*t1731;
  t2996 = 0. + t2850 + t2959;
  t3084 = var2[4]*t2996;
  t3191 = -1.*t2458*t1071;
  t3217 = t872*t2899;
  t3222 = t2834*t1731;
  t3383 = 0. + t3217 + t3222;
  t3476 = t5*t3383;
  t3525 = 0. + t3191 + t3476;
  t3631 = var2[3]*t3525;
  t3647 = 0. + t2530 + t2808 + t3084 + t3631;
  t4048 = -1.*var2[14];
  t4201 = t872*t828;
  t4220 = t2111*t1731;
  t4226 = 0. + t4201 + t4220;
  t4230 = var2[4]*t4226;
  t4269 = -1.*t2111*t872;
  t4282 = t828*t1731;
  t4461 = 0. + t4269 + t4282;
  t4531 = t5*t4461;
  t4561 = 0. + t4531;
  t4568 = var2[3]*t4561;
  t4717 = 0. + t4048 + t4230 + t4568;
  t2095 = t828*t1885;
  t2369 = t2111*t2337;
  t2438 = t2095 + t2369;
  t4886 = 0. + t662;
  t4916 = t828*t288;
  t4944 = 0. + t4916;
  t4905 = t2111*t288;
  t4906 = 0. + t4905;
  t3893 = 0.00644*t3647;
  t4738 = -1.e-6*t4717;
  t4762 = 0. + t3893 + t4738;
  t5149 = t1728*t872*t1071;
  t5197 = t296*t1731;
  t5210 = t5149 + t5197;
  t5237 = -1.*t872*t296;
  t5270 = t1728*t1071*t1731;
  t5271 = t5237 + t5270;
  t4857 = -1.e-6*t3647;
  t4863 = 0.000842*t4717;
  t4871 = 0. + t4857 + t4863;
  t5233 = t828*t5210;
  t5285 = t2111*t5271;
  t5286 = t5233 + t5285;
  t4896 = var2[13]*t4886;
  t4900 = var2[5]*t4886;
  t4914 = t872*t4906;
  t4949 = -1.*t4944*t1731;
  t4950 = 0. + t4914 + t4949;
  t4952 = var2[4]*t4950;
  t4979 = -1.*t4886*t1071;
  t4982 = t872*t4944;
  t4985 = t4906*t1731;
  t4990 = 0. + t4982 + t4985;
  t4993 = t5*t4990;
  t5002 = 0. + t4979 + t4993;
  t5022 = var2[3]*t5002;
  t5033 = 0. + t4896 + t4900 + t4952 + t5022;
  t5046 = 0.00608*t5033;
  t5090 = 0. + t5046;
  t5341 = -1.*t2111*t5210;
  t5350 = t828*t5271;
  t5374 = t5341 + t5350;
  t5439 = -1.*t5*t2458;
  t5445 = -1.*t1071*t3383;
  t5468 = t5439 + t5445;
  t5120 = t1728*t5*t288;
  t5293 = -1.*t662*t5286;
  t5298 = t5120 + t5293;
  t5386 = t662*t1728*t5;
  t5390 = t288*t5286;
  t5404 = t5386 + t5390;
  t5541 = t1728*t5*t872*t828;
  t5548 = t2111*t1728*t5*t1731;
  t5562 = t5541 + t5548;
  t5428 = -0.000842*var2[3]*t1071*t4461;
  t5469 = -1.e-6*var2[3]*t5468;
  t5473 = t5428 + t5469;
  t5478 = 1.e-6*var2[3]*t1071*t4461;
  t5496 = 0.00644*var2[3]*t5468;
  t5499 = t5478 + t5496;
  t5673 = t872*t296*t1071;
  t5674 = -1.*t1728*t1731;
  t5676 = t5673 + t5674;
  t5685 = t1728*t872;
  t5690 = t296*t1071*t1731;
  t5700 = t5685 + t5690;
  t5515 = -1.*t4886*t5;
  t5519 = -1.*t1071*t4990;
  t5520 = t5515 + t5519;
  t5772 = t828*t5676;
  t5775 = t2111*t5700;
  t5781 = t5772 + t5775;
  t5875 = t5*t872*t828*t296;
  t5887 = t2111*t5*t296*t1731;
  t5888 = t5875 + t5887;
  t6003 = t5*t872*t828;
  t6014 = t2111*t5*t1731;
  t6016 = t6003 + t6014;
  t6089 = -1.*t872*t828*t1071;
  t6106 = -1.*t2111*t1071*t1731;
  t6110 = t6089 + t6106;
  t6178 = t4201 + t4220;
  t6180 = var2[3]*t5*t6178;
  t6184 = t2111*t872;
  t6187 = -1.*t828*t1731;
  t6189 = t6184 + t6187;
  t6191 = var2[4]*t6189;
  t6201 = t6180 + t6191;
  t6216 = -1.*t872*t2899;
  t6217 = -1.*t2834*t1731;
  t6218 = t6216 + t6217;
  t6225 = var2[4]*t6218;
  t6228 = t2850 + t2959;
  t6234 = var2[3]*t5*t6228;
  t6244 = t6225 + t6234;
  t6323 = t872*t296;
  t6329 = -1.*t1728*t1071*t1731;
  t6331 = t6323 + t6329;
  t6320 = t2111*t5210;
  t6343 = t828*t6331;
  t6355 = t6320 + t6343;
  t5682 = -1.*t2111*t5676;
  t5704 = t828*t5700;
  t5726 = t5682 + t5704;
  t6206 = 0.000842*t6201;
  t6245 = -1.e-6*t6244;
  t6253 = t6206 + t6245;
  t6261 = -1.e-6*t6201;
  t6265 = 0.00644*t6244;
  t6267 = t6261 + t6265;
  t5767 = t5*t288*t296;
  t5782 = -1.*t662*t5781;
  t5790 = t5767 + t5782;
  t6274 = -1.*t872*t4944;
  t6275 = -1.*t4906*t1731;
  t6276 = t6274 + t6275;
  t6291 = var2[4]*t6276;
  t6299 = t4914 + t4949;
  t6314 = var2[3]*t5*t6299;
  t6317 = t6291 + t6314;
  t5812 = t662*t5*t296;
  t5815 = t288*t5781;
  t5850 = t5812 + t5815;
  t4798 = t828*t2337;
  t6444 = t2111*t5676;
  t6445 = t6444 + t4798;
  t5996 = -1.*t662*t1071;
  t6017 = t288*t6016;
  t6020 = t5996 + t6017;
  t6024 = -1.*t2111*t5*t872;
  t6034 = t5*t828*t1731;
  t6035 = t6024 + t6034;
  t6038 = -1.*t288*t1071;
  t6070 = -1.*t662*t6016;
  t6071 = t6038 + t6070;
  t6493 = t2111*t5*t872;
  t6510 = -1.*t5*t828*t1731;
  t6516 = t6493 + t6510;
  t6580 = t662*t872*t828;
  t6592 = t2111*t662*t1731;
  t6593 = t6580 + t6592;
  t6594 = var2[4]*t6593;
  t6598 = -1.*t2111*t662*t872;
  t6609 = t662*t828*t1731;
  t6616 = t6598 + t6609;
  t6623 = var2[3]*t5*t6616;
  t6638 = t6594 + t6623;
  t6711 = -1.*t828*t5271;
  t6717 = t6320 + t6711;
  t6642 = -1.e-6*t6638;
  t6644 = t6206 + t6642;
  t6661 = 0.00644*t6638;
  t6665 = t6261 + t6661;
  t6667 = -1.*t872*t828*t288;
  t6672 = -1.*t2111*t288*t1731;
  t6673 = t6667 + t6672;
  t6678 = var2[4]*t6673;
  t6679 = t2111*t872*t288;
  t6701 = -1.*t828*t288*t1731;
  t6702 = t6679 + t6701;
  t6703 = var2[3]*t5*t6702;
  t6704 = t6678 + t6703;
  t6768 = -1.*t828*t5700;
  t6769 = t6444 + t6768;
  t6521 = -1.*t662*t6516*t4762;
  t6537 = t6016*t4871;
  t6561 = t288*t6516*t5090;
  t6801 = var2[13]*t662;
  t6802 = var2[5]*t662;
  t6805 = var2[4]*t6702;
  t6812 = t872*t828*t288;
  t6825 = t2111*t288*t1731;
  t6851 = t6812 + t6825;
  t6853 = t5*t6851;
  t6856 = t5996 + t6853;
  t6858 = var2[3]*t6856;
  t6865 = t6801 + t6802 + t6805 + t6858;
  t6877 = -1.*var2[13]*t288;
  t6889 = -1.*var2[5]*t288;
  t6890 = t2111*t662*t872;
  t6894 = -1.*t662*t828*t1731;
  t6900 = t6890 + t6894;
  t6902 = var2[4]*t6900;
  t6907 = t288*t1071;
  t6916 = t5*t6593;
  t6932 = t6907 + t6916;
  t6939 = var2[3]*t6932;
  t6943 = t6877 + t6889 + t6902 + t6939;
  t488 = -1.*t5*t288*t296;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t1885*t2111 + t4798)*t4871 + t4762*(t488 - 1.*t2438*t662) + t5090*(t2438*t288 - 1.*t296*t5*t662);
  p_output1[10]=t4762*t5298 + t4871*t5374 + t5090*t5404;
  p_output1[11]=0;
  p_output1[12]=t5374*t5473 + t5298*t5499 + t5090*(t288*t5562 - 1.*t1071*t1728*t662) + t4762*(-1.*t1071*t1728*t288 - 1.*t5562*t662) + t4871*(t1728*t1731*t5*t828 - 1.*t1728*t2111*t5*t872) + 0.00608*t5404*t5520*var2[3];
  p_output1[13]=t5473*t5726 + t5499*t5790 + t5090*(t288*t5888 - 1.*t1071*t296*t662) + t4762*(-1.*t1071*t288*t296 - 1.*t5888*t662) + t4871*(t1731*t296*t5*t828 - 1.*t2111*t296*t5*t872) + 0.00608*t5520*t5850*var2[3];
  p_output1[14]=t5473*t6035 + t5499*t6071 + t5090*(t288*t6110 - 1.*t5*t662) + t4762*(-1.*t288*t5 - 1.*t6110*t662) + t4871*(-1.*t1071*t1731*t828 + t1071*t2111*t872) + 0.00608*t5520*t6020*var2[3];
  p_output1[15]=t5374*t6253 + t5298*t6267 + 0.00608*t5404*t6317 + t4871*(t5233 - 1.*t2111*t6331) + t288*t5090*t6355 - 1.*t4762*t6355*t662;
  p_output1[16]=t4871*(-1.*t2111*t2337 + t5772) + t5726*t6253 + t5790*t6267 + 0.00608*t5850*t6317 + t288*t5090*t6445 - 1.*t4762*t6445*t662;
  p_output1[17]=t6035*t6253 + t6071*t6267 + 0.00608*t6020*t6317 + t6521 + t6537 + t6561;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t4871*t5286 + t5374*t6644 + t5298*t6665 + 0.00608*t5404*t6704 + t288*t5090*t6717 - 1.*t4762*t662*t6717;
  p_output1[40]=t4871*t5781 + t5726*t6644 + t5790*t6665 + 0.00608*t5850*t6704 + t288*t5090*t6769 - 1.*t4762*t662*t6769;
  p_output1[41]=t6521 + t6537 + t6561 + t6035*t6644 + t6071*t6665 + 0.00608*t6020*t6704;
  p_output1[42]=t4762*t5404 + t5090*(-1.*t1728*t288*t5 + t5286*t662) + 0.00644*t5298*t6865 - 1.e-6*t5374*t6865 + 0.00608*t5404*t6943;
  p_output1[43]=t4762*t5850 + t5090*(t488 + t5781*t662) - 1.e-6*t5726*t6865 + 0.00644*t5790*t6865 + 0.00608*t5850*t6943;
  p_output1[44]=t4762*t6020 - 1.e-6*t6035*t6865 + 0.00644*t6071*t6865 + t5090*(t6016*t662 + t6907) + 0.00608*t6020*t6943;
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
}



void Jq_AMWorld_RightHip_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
