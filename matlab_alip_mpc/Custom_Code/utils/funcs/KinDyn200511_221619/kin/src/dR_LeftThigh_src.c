/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:48 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_LeftThigh_src.h"

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
  double t782;
  double t518;
  double t981;
  double t672;
  double t1708;
  double t3209;
  double t30;
  double t35;
  double t755;
  double t2352;
  double t2454;
  double t2537;
  double t2548;
  double t2592;
  double t2624;
  double t3021;
  double t3155;
  double t3160;
  double t3218;
  double t3307;
  double t3322;
  double t3461;
  double t3796;
  double t3801;
  double t3802;
  double t3930;
  double t3478;
  double t3503;
  double t4638;
  double t4640;
  double t4684;
  double t4497;
  double t4563;
  double t4617;
  double t4878;
  double t4883;
  double t4889;
  double t4898;
  double t4901;
  double t4936;
  double t4944;
  double t4946;
  double t4947;
  double t4822;
  double t5001;
  double t5044;
  double t5007;
  double t5038;
  double t3330;
  double t3332;
  double t3345;
  double t5262;
  double t5281;
  double t5299;
  double t5367;
  double t5378;
  double t5388;
  double t5414;
  double t5418;
  double t5433;
  double t5438;
  double t5445;
  double t5451;
  double t3205;
  double t3268;
  double t3306;
  double t4342;
  double t4348;
  double t4355;
  double t4378;
  double t4387;
  double t4391;
  double t4261;
  double t4279;
  double t4310;
  double t4006;
  double t4019;
  double t3927;
  double t3964;
  double t4131;
  double t4183;
  double t4812;
  double t4836;
  double t4839;
  double t4843;
  double t4844;
  double t4632;
  double t4693;
  double t4753;
  double t4956;
  double t4958;
  double t4968;
  double t5143;
  double t5147;
  double t5160;
  double t5168;
  double t5210;
  double t5211;
  double t5107;
  double t5124;
  double t5129;
  double t5058;
  double t5067;
  double t5048;
  double t5080;
  double t5083;
  double t3369;
  double t3720;
  double t3723;
  double t4974;
  double t4993;
  double t4995;
  double t5302;
  double t5304;
  double t5311;
  double t5766;
  double t5770;
  double t5771;
  double t5497;
  double t5502;
  double t5508;
  double t5531;
  double t5532;
  double t5533;
  double t5474;
  double t5478;
  double t5479;
  double t5336;
  double t5338;
  double t5349;
  t782 = Cos(var1[3]);
  t518 = Cos(var1[5]);
  t981 = Sin(var1[4]);
  t672 = Sin(var1[3]);
  t1708 = Sin(var1[5]);
  t3209 = Cos(var1[4]);
  t30 = Cos(var1[7]);
  t35 = Cos(var1[6]);
  t755 = -1.*t518*t672;
  t2352 = t782*t981*t1708;
  t2454 = t755 + t2352;
  t2537 = t35*t2454;
  t2548 = t782*t518*t981;
  t2592 = t672*t1708;
  t2624 = t2548 + t2592;
  t3021 = Sin(var1[6]);
  t3155 = t2624*t3021;
  t3160 = t2537 + t3155;
  t3218 = Sin(var1[7]);
  t3307 = Sin(var1[8]);
  t3322 = Cos(var1[8]);
  t3461 = t35*t2624;
  t3796 = t518*t672;
  t3801 = -1.*t782*t981*t1708;
  t3802 = t3796 + t3801;
  t3930 = -1.*t2624*t3021;
  t3478 = -1.*t2454*t3021;
  t3503 = t3461 + t3478;
  t4638 = -1.*t782*t518;
  t4640 = -1.*t672*t981*t1708;
  t4684 = t4638 + t4640;
  t4497 = -1.*t518*t672*t981;
  t4563 = t782*t1708;
  t4617 = t4497 + t4563;
  t4878 = t782*t518;
  t4883 = t672*t981*t1708;
  t4889 = t4878 + t4883;
  t4898 = t35*t4889;
  t4901 = t518*t672*t981;
  t4936 = -1.*t782*t1708;
  t4944 = t4901 + t4936;
  t4946 = t4944*t3021;
  t4947 = t4898 + t4946;
  t4822 = t35*t4684;
  t5001 = t35*t4944;
  t5044 = -1.*t4944*t3021;
  t5007 = -1.*t4889*t3021;
  t5038 = t5001 + t5007;
  t3330 = t782*t3209*t30;
  t3332 = t3160*t3218;
  t3345 = t3330 + t3332;
  t5262 = t3209*t35*t1708;
  t5281 = t3209*t518*t3021;
  t5299 = t5262 + t5281;
  t5367 = t3209*t518*t35;
  t5378 = -1.*t3209*t1708*t3021;
  t5388 = t5367 + t5378;
  t5414 = -1.*t3209*t35*t1708;
  t5418 = -1.*t3209*t518*t3021;
  t5433 = t5414 + t5418;
  t5438 = -1.*t3322*t5433;
  t5445 = t5388*t3218*t3307;
  t5451 = t5438 + t5445;
  t3205 = t30*t3160;
  t3268 = -1.*t782*t3209*t3218;
  t3306 = t3205 + t3268;
  t4342 = -1.*t782*t30*t981;
  t4348 = t782*t3209*t35*t1708;
  t4355 = t782*t3209*t518*t3021;
  t4378 = t4348 + t4355;
  t4387 = t4378*t3218;
  t4391 = t4342 + t4387;
  t4261 = t782*t3209*t518*t35;
  t4279 = -1.*t782*t3209*t1708*t3021;
  t4310 = t4261 + t4279;
  t4006 = t3802*t3021;
  t4019 = t3461 + t4006;
  t3927 = t35*t3802;
  t3964 = t3927 + t3930;
  t4131 = -1.*t35*t2454;
  t4183 = t4131 + t3930;
  t4812 = -1.*t3209*t30*t672;
  t4836 = t4617*t3021;
  t4839 = t4822 + t4836;
  t4843 = t4839*t3218;
  t4844 = t4812 + t4843;
  t4632 = t35*t4617;
  t4693 = -1.*t4684*t3021;
  t4753 = t4632 + t4693;
  t4956 = t30*t4947;
  t4958 = -1.*t3209*t672*t3218;
  t4968 = t4956 + t4958;
  t5143 = -1.*t30*t672*t981;
  t5147 = t3209*t35*t672*t1708;
  t5160 = t3209*t518*t672*t3021;
  t5168 = t5147 + t5160;
  t5210 = t5168*t3218;
  t5211 = t5143 + t5210;
  t5107 = t3209*t518*t35*t672;
  t5124 = -1.*t3209*t672*t1708*t3021;
  t5129 = t5107 + t5124;
  t5058 = t4684*t3021;
  t5067 = t5001 + t5058;
  t5048 = t4822 + t5044;
  t5080 = -1.*t35*t4889;
  t5083 = t5080 + t5044;
  t3369 = t3322*t3345;
  t3720 = t3503*t3307;
  t3723 = t3369 + t3720;
  t4974 = t3209*t30*t672;
  t4993 = t4947*t3218;
  t4995 = t4974 + t4993;
  t5302 = t30*t5299;
  t5304 = t981*t3218;
  t5311 = t5302 + t5304;
  t5766 = t3322*t5388*t3218;
  t5770 = t5433*t3307;
  t5771 = t5766 + t5770;
  t5497 = -1.*t3209*t30;
  t5502 = -1.*t35*t981*t1708;
  t5508 = -1.*t518*t981*t3021;
  t5531 = t5502 + t5508;
  t5532 = t5531*t3218;
  t5533 = t5497 + t5532;
  t5474 = -1.*t518*t35*t981;
  t5478 = t981*t1708*t3021;
  t5479 = t5474 + t5478;
  t5336 = -1.*t30*t981;
  t5338 = t5299*t3218;
  t5349 = t5336 + t5338;
  p_output1[0]=(-1.*t3322*t4753 + t3307*t4844)*var2[3] + (-1.*t3322*t4310 + t3307*t4391)*var2[4] + (-1.*t3322*t3964 + t3218*t3307*t4019)*var2[5] + (t3218*t3307*t3503 - 1.*t3322*t4183)*var2[6] + t3306*t3307*var2[7] + t3723*var2[8];
  p_output1[1]=(t3307*t3345 - 1.*t3322*t3503)*var2[3] + (-1.*t3322*t5129 + t3307*t5211)*var2[4] + (-1.*t3322*t5048 + t3218*t3307*t5067)*var2[5] + (t3218*t3307*t5038 - 1.*t3322*t5083)*var2[6] + t3307*t4968*var2[7] + (t3322*t4995 + t3307*t5038)*var2[8];
  p_output1[2]=(-1.*t3322*t5479 + t3307*t5533)*var2[4] + t5451*var2[5] + t5451*var2[6] + t3307*t5311*var2[7] + (t3322*t5349 + t3307*t5388)*var2[8];
  p_output1[3]=(t3307*t4753 + t3322*t4844)*var2[3] + (t3307*t4310 + t3322*t4391)*var2[4] + (t3307*t3964 + t3218*t3322*t4019)*var2[5] + (t3218*t3322*t3503 + t3307*t4183)*var2[6] + t3306*t3322*var2[7] + (-1.*t3307*t3345 + t3322*t3503)*var2[8];
  p_output1[4]=t3723*var2[3] + (t3307*t5129 + t3322*t5211)*var2[4] + (t3307*t5048 + t3218*t3322*t5067)*var2[5] + (t3218*t3322*t5038 + t3307*t5083)*var2[6] + t3322*t4968*var2[7] + (-1.*t3307*t4995 + t3322*t5038)*var2[8];
  p_output1[5]=(t3307*t5479 + t3322*t5533)*var2[4] + t5771*var2[5] + t5771*var2[6] + t3322*t5311*var2[7] + (-1.*t3307*t5349 + t3322*t5388)*var2[8];
  p_output1[6]=(-1.*t30*t4839 + t4958)*var2[3] + (-1.*t30*t4378 - 1.*t3218*t782*t981)*var2[4] - 1.*t30*t4019*var2[5] - 1.*t30*t3503*var2[6] + t3345*var2[7];
  p_output1[7]=(-1.*t30*t3160 + t3209*t3218*t782)*var2[3] + (-1.*t30*t5168 - 1.*t3218*t672*t981)*var2[4] - 1.*t30*t5067*var2[5] - 1.*t30*t5038*var2[6] + t4995*var2[7];
  p_output1[8]=(-1.*t3209*t3218 - 1.*t30*t5531)*var2[4] - 1.*t30*t5388*var2[5] - 1.*t30*t5388*var2[6] + t5349*var2[7];
}



void dR_LeftThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
