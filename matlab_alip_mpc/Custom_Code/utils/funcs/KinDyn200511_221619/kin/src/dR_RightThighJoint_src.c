/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:35 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightThighJoint_src.h"

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
  double t342;
  double t375;
  double t502;
  double t783;
  double t146;
  double t823;
  double t69;
  double t1942;
  double t4026;
  double t2390;
  double t1854;
  double t3975;
  double t4164;
  double t4186;
  double t4269;
  double t4287;
  double t4288;
  double t1883;
  double t4188;
  double t4644;
  double t4655;
  double t4665;
  double t4382;
  double t4757;
  double t4773;
  double t4638;
  double t4668;
  double t4670;
  double t4941;
  double t4955;
  double t4968;
  double t4974;
  double t4988;
  double t4992;
  double t5092;
  double t5240;
  double t5241;
  double t5247;
  double t5249;
  double t5301;
  double t5302;
  double t5304;
  double t5278;
  double t4853;
  double t4901;
  double t4912;
  double t5324;
  double t5335;
  double t5299;
  double t5310;
  double t5311;
  double t5409;
  double t5414;
  double t5415;
  double t5418;
  double t5420;
  double t5425;
  double t5426;
  double t5427;
  double t5429;
  double t5395;
  double t5397;
  double t5400;
  double t602;
  double t1092;
  double t1122;
  double t2264;
  double t2525;
  double t2577;
  double t3010;
  double t3096;
  double t3404;
  double t4290;
  double t4338;
  double t4383;
  double t4394;
  double t4606;
  double t4689;
  double t4692;
  double t4711;
  double t4712;
  double t4969;
  double t4999;
  double t5014;
  double t5048;
  double t5071;
  double t5095;
  double t5102;
  double t5105;
  double t5201;
  double t5202;
  double t5204;
  double t5209;
  double t5212;
  double t5214;
  double t5223;
  double t5225;
  double t5226;
  double t5255;
  double t5280;
  double t5281;
  double t5292;
  double t5313;
  double t5315;
  double t5317;
  double t5318;
  double t4836;
  double t4936;
  double t4938;
  double t5366;
  double t5367;
  double t5380;
  double t5391;
  double t5406;
  double t5407;
  double t5764;
  double t5767;
  double t5768;
  double t5440;
  double t5444;
  double t5445;
  double t5468;
  double t5479;
  double t5480;
  double t5490;
  double t5494;
  double t5512;
  double t5532;
  double t5534;
  double t5535;
  t342 = Cos(var1[3]);
  t375 = Cos(var1[4]);
  t502 = Cos(var1[5]);
  t783 = Sin(var1[13]);
  t146 = Cos(var1[13]);
  t823 = Sin(var1[5]);
  t69 = Cos(var1[15]);
  t1942 = Sin(var1[4]);
  t4026 = Sin(var1[3]);
  t2390 = Sin(var1[14]);
  t1854 = Sin(var1[15]);
  t3975 = t342*t502*t1942;
  t4164 = t4026*t823;
  t4186 = t3975 + t4164;
  t4269 = t502*t4026;
  t4287 = -1.*t342*t1942*t823;
  t4288 = t4269 + t4287;
  t1883 = Cos(var1[14]);
  t4188 = -1.*t783*t4186;
  t4644 = -1.*t502*t4026;
  t4655 = t342*t1942*t823;
  t4665 = t4644 + t4655;
  t4382 = t146*t4186;
  t4757 = -1.*t783*t4665;
  t4773 = t4382 + t4757;
  t4638 = t783*t4186;
  t4668 = t146*t4665;
  t4670 = t4638 + t4668;
  t4941 = -1.*t502*t4026*t1942;
  t4955 = t342*t823;
  t4968 = t4941 + t4955;
  t4974 = -1.*t342*t502;
  t4988 = -1.*t4026*t1942*t823;
  t4992 = t4974 + t4988;
  t5092 = t146*t4992;
  t5240 = t502*t4026*t1942;
  t5241 = -1.*t342*t823;
  t5247 = t5240 + t5241;
  t5249 = -1.*t783*t5247;
  t5301 = t342*t502;
  t5302 = t4026*t1942*t823;
  t5304 = t5301 + t5302;
  t5278 = t146*t5247;
  t4853 = t1883*t342*t375;
  t4901 = t2390*t4670;
  t4912 = t4853 + t4901;
  t5324 = -1.*t783*t5304;
  t5335 = t5278 + t5324;
  t5299 = t783*t5247;
  t5310 = t146*t5304;
  t5311 = t5299 + t5310;
  t5409 = -1.*t375*t502*t783;
  t5414 = -1.*t146*t375*t823;
  t5415 = t5409 + t5414;
  t5418 = -1.*t69*t5415;
  t5420 = t146*t375*t502;
  t5425 = -1.*t375*t783*t823;
  t5426 = t5420 + t5425;
  t5427 = t2390*t1854*t5426;
  t5429 = t5418 + t5427;
  t5395 = t375*t502*t783;
  t5397 = t146*t375*t823;
  t5400 = t5395 + t5397;
  t602 = t146*t342*t375*t502;
  t1092 = -1.*t342*t375*t783*t823;
  t1122 = t602 + t1092;
  t2264 = -1.*t1883*t342*t1942;
  t2525 = t342*t375*t502*t783;
  t2577 = t146*t342*t375*t823;
  t3010 = t2525 + t2577;
  t3096 = t2390*t3010;
  t3404 = t2264 + t3096;
  t4290 = t146*t4288;
  t4338 = t4188 + t4290;
  t4383 = t783*t4288;
  t4394 = t4382 + t4383;
  t4606 = -1.*t342*t375*t2390;
  t4689 = t1883*t4670;
  t4692 = t4606 + t4689;
  t4711 = -1.*t146*t4665;
  t4712 = t4188 + t4711;
  t4969 = t146*t4968;
  t4999 = -1.*t783*t4992;
  t5014 = t4969 + t4999;
  t5048 = -1.*t1883*t375*t4026;
  t5071 = t783*t4968;
  t5095 = t5071 + t5092;
  t5102 = t2390*t5095;
  t5105 = t5048 + t5102;
  t5201 = t146*t375*t502*t4026;
  t5202 = -1.*t375*t783*t4026*t823;
  t5204 = t5201 + t5202;
  t5209 = -1.*t1883*t4026*t1942;
  t5212 = t375*t502*t783*t4026;
  t5214 = t146*t375*t4026*t823;
  t5223 = t5212 + t5214;
  t5225 = t2390*t5223;
  t5226 = t5209 + t5225;
  t5255 = t5249 + t5092;
  t5280 = t783*t4992;
  t5281 = t5278 + t5280;
  t5292 = -1.*t375*t2390*t4026;
  t5313 = t1883*t5311;
  t5315 = t5292 + t5313;
  t5317 = -1.*t146*t5304;
  t5318 = t5249 + t5317;
  t4836 = t1854*t4773;
  t4936 = t69*t4912;
  t4938 = t4836 + t4936;
  t5366 = t1883*t375*t4026;
  t5367 = t2390*t5311;
  t5380 = t5366 + t5367;
  t5391 = t2390*t1942;
  t5406 = t1883*t5400;
  t5407 = t5391 + t5406;
  t5764 = t1854*t5415;
  t5767 = t69*t2390*t5426;
  t5768 = t5764 + t5767;
  t5440 = -1.*t1883*t1942;
  t5444 = t2390*t5400;
  t5445 = t5440 + t5444;
  t5468 = -1.*t146*t502*t1942;
  t5479 = t783*t1942*t823;
  t5480 = t5468 + t5479;
  t5490 = -1.*t1883*t375;
  t5494 = -1.*t502*t783*t1942;
  t5512 = -1.*t146*t1942*t823;
  t5532 = t5494 + t5512;
  t5534 = t2390*t5532;
  t5535 = t5490 + t5534;
  p_output1[0]=(t1854*t5105 - 1.*t5014*t69)*var2[3] + (t1854*t3404 - 1.*t1122*t69)*var2[4] + (t1854*t2390*t4394 - 1.*t4338*t69)*var2[5] + (t1854*t2390*t4773 - 1.*t4712*t69)*var2[13] + t1854*t4692*var2[14] + t4938*var2[15];
  p_output1[1]=(t1854*t4912 - 1.*t4773*t69)*var2[3] + (t1854*t5226 - 1.*t5204*t69)*var2[4] + (t1854*t2390*t5281 - 1.*t5255*t69)*var2[5] + (t1854*t2390*t5335 - 1.*t5318*t69)*var2[13] + t1854*t5315*var2[14] + (t1854*t5335 + t5380*t69)*var2[15];
  p_output1[2]=(t1854*t5535 - 1.*t5480*t69)*var2[4] + t5429*var2[5] + t5429*var2[13] + t1854*t5407*var2[14] + (t1854*t5426 + t5445*t69)*var2[15];
  p_output1[3]=(t1854*t5014 + t5105*t69)*var2[3] + (t1122*t1854 + t3404*t69)*var2[4] + (t1854*t4338 + t2390*t4394*t69)*var2[5] + (t1854*t4712 + t2390*t4773*t69)*var2[13] + t4692*t69*var2[14] + (-1.*t1854*t4912 + t4773*t69)*var2[15];
  p_output1[4]=t4938*var2[3] + (t1854*t5204 + t5226*t69)*var2[4] + (t1854*t5255 + t2390*t5281*t69)*var2[5] + (t1854*t5318 + t2390*t5335*t69)*var2[13] + t5315*t69*var2[14] + (-1.*t1854*t5380 + t5335*t69)*var2[15];
  p_output1[5]=(t1854*t5480 + t5535*t69)*var2[4] + t5768*var2[5] + t5768*var2[13] + t5407*t69*var2[14] + (-1.*t1854*t5445 + t5426*t69)*var2[15];
  p_output1[6]=(-1.*t1883*t5095 + t5292)*var2[3] + (-1.*t1883*t3010 - 1.*t1942*t2390*t342)*var2[4] - 1.*t1883*t4394*var2[5] - 1.*t1883*t4773*var2[13] + t4912*var2[14];
  p_output1[7]=(t2390*t342*t375 - 1.*t1883*t4670)*var2[3] + (-1.*t1942*t2390*t4026 - 1.*t1883*t5223)*var2[4] - 1.*t1883*t5281*var2[5] - 1.*t1883*t5335*var2[13] + t5380*var2[14];
  p_output1[8]=(-1.*t2390*t375 - 1.*t1883*t5532)*var2[4] - 1.*t1883*t5426*var2[5] - 1.*t1883*t5426*var2[13] + t5445*var2[14];
}



void dR_RightThighJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
