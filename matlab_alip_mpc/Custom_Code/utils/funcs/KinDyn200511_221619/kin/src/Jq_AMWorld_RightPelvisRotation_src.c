/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:45 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMWorld_RightPelvisRotation_src.h"

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
  double t1107;
  double t812;
  double t868;
  double t1067;
  double t1215;
  double t1639;
  double t41;
  double t4519;
  double t4033;
  double t4095;
  double t4382;
  double t2625;
  double t2632;
  double t3191;
  double t3203;
  double t4456;
  double t4530;
  double t4570;
  double t4590;
  double t4892;
  double t5027;
  double t5160;
  double t5356;
  double t5620;
  double t6242;
  double t6244;
  double t6414;
  double t6517;
  double t6536;
  double t6542;
  double t6585;
  double t1070;
  double t1283;
  double t1436;
  double t2400;
  double t2464;
  double t2550;
  double t3684;
  double t5619;
  double t6588;
  double t6589;
  double t6643;
  double t6655;
  double t6738;
  double t6841;
  double t7135;
  double t7152;
  double t7159;
  double t7180;
  double t7181;
  double t7241;
  double t7049;
  double t7057;
  double t7058;
  double t7070;
  double t7176;
  double t7251;
  double t7265;
  double t7335;
  double t7337;
  double t7343;
  double t7367;
  double t7368;
  double t7372;
  double t7418;
  double t7463;
  double t7475;
  double t7490;
  double t7510;
  double t7519;
  double t7536;
  double t7537;
  double t7561;
  double t7719;
  double t7720;
  double t7730;
  double t7741;
  double t7749;
  double t7750;
  double t8224;
  double t8225;
  double t8228;
  double t8230;
  double t8245;
  double t8276;
  double t8296;
  double t8303;
  double t8304;
  double t8309;
  double t8316;
  double t8350;
  double t8352;
  double t8355;
  double t7740;
  double t7756;
  double t7762;
  double t8246;
  double t8319;
  double t8320;
  double t8322;
  double t8323;
  double t8326;
  double t7777;
  double t7786;
  double t7789;
  double t8334;
  double t8335;
  double t8336;
  double t2613;
  double t8101;
  double t8102;
  double t8111;
  double t7967;
  double t7969;
  double t7974;
  double t8321;
  double t8331;
  double t8338;
  double t8459;
  double t8591;
  double t8613;
  double t8617;
  double t8709;
  double t8742;
  double t8748;
  double t8759;
  double t8792;
  double t8798;
  double t8822;
  double t8838;
  double t8843;
  double t8852;
  t1107 = Cos(var1[3]);
  t812 = Cos(var1[5]);
  t868 = Sin(var1[3]);
  t1067 = Sin(var1[4]);
  t1215 = Sin(var1[5]);
  t1639 = Cos(var1[13]);
  t41 = Sin(var1[13]);
  t4519 = Cos(var1[4]);
  t4033 = t1639*t812;
  t4095 = -1.*t41*t1215;
  t4382 = 0. + t4033 + t4095;
  t2625 = -1.*t1067;
  t2632 = 0. + t2625;
  t3191 = var2[3]*t2632;
  t3203 = 0. + var2[13] + var2[5] + t3191;
  t4456 = var2[4]*t4382;
  t4530 = t812*t41;
  t4570 = t1639*t1215;
  t4590 = 0. + t4530 + t4570;
  t4892 = t4519*t4590;
  t5027 = 0. + t4892;
  t5160 = var2[3]*t5027;
  t5356 = 0. + t4456 + t5160;
  t5620 = -1.*t812*t41;
  t6242 = -1.*t1639*t1215;
  t6244 = 0. + t5620 + t6242;
  t6414 = var2[4]*t6244;
  t6517 = t4519*t4382;
  t6536 = 0. + t6517;
  t6542 = var2[3]*t6536;
  t6585 = 0. + t6414 + t6542;
  t1070 = -1.*t812*t868*t1067;
  t1283 = t1107*t1215;
  t1436 = t1070 + t1283;
  t2400 = -1.*t1107*t812;
  t2464 = -1.*t868*t1067*t1215;
  t2550 = t2400 + t2464;
  t3684 = -1.e-6*t3203;
  t5619 = 0.00559*t5356;
  t6588 = -3.e-6*t6585;
  t6589 = t3684 + t5619 + t6588;
  t6643 = 0.00272*t3203;
  t6655 = -1.e-6*t5356;
  t6738 = 2.e-6*t6585;
  t6841 = t6643 + t6655 + t6738;
  t7135 = t1107*t812*t1067;
  t7152 = t868*t1215;
  t7159 = t7135 + t7152;
  t7180 = -1.*t812*t868;
  t7181 = t1107*t1067*t1215;
  t7241 = t7180 + t7181;
  t7049 = 2.e-6*t3203;
  t7057 = -3.e-6*t5356;
  t7058 = 0.00464*t6585;
  t7070 = t7049 + t7057 + t7058;
  t7176 = t41*t7159;
  t7251 = t1639*t7241;
  t7265 = t7176 + t7251;
  t7335 = t1639*t7159;
  t7337 = -1.*t41*t7241;
  t7343 = t7335 + t7337;
  t7367 = -0.00272*var2[3]*t4519;
  t7368 = 1.e-6*var2[3]*t1067*t4590;
  t7372 = -2.e-6*var2[3]*t1067*t4382;
  t7418 = t7367 + t7368 + t7372;
  t7463 = 1.e-6*var2[3]*t4519;
  t7475 = -0.00559*var2[3]*t1067*t4590;
  t7490 = 3.e-6*var2[3]*t1067*t4382;
  t7510 = t7463 + t7475 + t7490;
  t7519 = -2.e-6*var2[3]*t4519;
  t7536 = 3.e-6*var2[3]*t1067*t4590;
  t7537 = -0.00464*var2[3]*t1067*t4382;
  t7561 = t7519 + t7536 + t7537;
  t7719 = t812*t868*t1067;
  t7720 = -1.*t1107*t1215;
  t7730 = t7719 + t7720;
  t7741 = t1107*t812;
  t7749 = t868*t1067*t1215;
  t7750 = t7741 + t7749;
  t8224 = t5620 + t6242;
  t8225 = var2[4]*t8224;
  t8228 = t4033 + t4095;
  t8230 = var2[3]*t4519*t8228;
  t8245 = t8225 + t8230;
  t8276 = var2[3]*t4519*t8224;
  t8296 = -1.*t1639*t812;
  t8303 = t41*t1215;
  t8304 = t8296 + t8303;
  t8309 = var2[4]*t8304;
  t8316 = t8276 + t8309;
  t8350 = t812*t868;
  t8352 = -1.*t1107*t1067*t1215;
  t8355 = t8350 + t8352;
  t7740 = t41*t7730;
  t7756 = t1639*t7750;
  t7762 = t7740 + t7756;
  t8246 = 0.00559*t8245;
  t8319 = -3.e-6*t8316;
  t8320 = t8246 + t8319;
  t8322 = -1.e-6*t8245;
  t8323 = 2.e-6*t8316;
  t8326 = t8322 + t8323;
  t7777 = t1639*t7730;
  t7786 = -1.*t41*t7750;
  t7789 = t7777 + t7786;
  t8334 = -3.e-6*t8245;
  t8335 = 0.00464*t8316;
  t8336 = t8334 + t8335;
  t2613 = t1639*t2550;
  t8101 = t4519*t812*t41;
  t8102 = t1639*t4519*t1215;
  t8111 = t8101 + t8102;
  t7967 = t1639*t4519*t812;
  t7969 = -1.*t4519*t41*t1215;
  t7974 = t7967 + t7969;
  t8321 = t7265*t8320;
  t8331 = t1107*t4519*t8326;
  t8338 = t7343*t8336;
  t8459 = -1.*t41*t7159;
  t8591 = t7762*t8320;
  t8613 = t4519*t868*t8326;
  t8617 = t7789*t8336;
  t8709 = -1.*t41*t7730;
  t8742 = t8111*t8320;
  t8748 = -1.*t1067*t8326;
  t8759 = t7974*t8336;
  t8792 = t7974*t6589;
  t8798 = -1.*t4519*t812*t41;
  t8822 = -1.*t1639*t4519*t1215;
  t8838 = t8798 + t8822;
  t8843 = t8838*t7070;
  t8852 = t8742 + t8748 + t8759 + t8792 + t8843;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t2613 + t1436*t41)*t6589 + (t1436*t1639 - 1.*t2550*t41)*t7070 - 1.*t4519*t6841*t868;
  p_output1[10]=t1107*t4519*t6841 + t6589*t7265 + t7070*t7343;
  p_output1[11]=0;
  p_output1[12]=-1.*t1067*t1107*t6841 + t1107*t4519*t7418 + t7265*t7510 + t7343*t7561 + t7070*(-1.*t1107*t1215*t41*t4519 + t1107*t1639*t4519*t812) + t6589*(t1107*t1215*t1639*t4519 + t1107*t41*t4519*t812);
  p_output1[13]=t7510*t7762 + t7561*t7789 - 1.*t1067*t6841*t868 + t4519*t7418*t868 + t7070*(-1.*t1215*t41*t4519*t868 + t1639*t4519*t812*t868) + t6589*(t1215*t1639*t4519*t868 + t41*t4519*t812*t868);
  p_output1[14]=-1.*t4519*t6841 - 1.*t1067*t7418 + t7561*t7974 + t7510*t8111 + t7070*(t1067*t1215*t41 - 1.*t1067*t1639*t812) + t6589*(-1.*t1067*t1215*t1639 - 1.*t1067*t41*t812);
  p_output1[15]=t8321 + t8331 + t8338 + t6589*(t7335 + t41*t8355) + t7070*(t1639*t8355 + t8459);
  p_output1[16]=t6589*(t2550*t41 + t7777) + t8591 + t8613 + t8617 + t7070*(t2613 + t8709);
  p_output1[17]=t8852;
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
  p_output1[39]=t6589*t7343 + t8321 + t8331 + t8338 + t7070*(-1.*t1639*t7241 + t8459);
  p_output1[40]=t6589*t7789 + t8591 + t8613 + t8617 + t7070*(-1.*t1639*t7750 + t8709);
  p_output1[41]=t8852;
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
}



void Jq_AMWorld_RightPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
