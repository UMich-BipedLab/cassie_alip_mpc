/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:47 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_RightAbductionJoint_src.h"

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
  double t1483;
  double t99;
  double t260;
  double t273;
  double t694;
  double t745;
  double t244;
  double t2678;
  double t725;
  double t759;
  double t1479;
  double t3869;
  double t1916;
  double t2542;
  double t2549;
  double t2627;
  double t3880;
  double t3962;
  double t3983;
  double t4118;
  double t4193;
  double t4247;
  double t5078;
  double t5083;
  double t5086;
  double t5242;
  double t5292;
  double t5309;
  double t5672;
  double t6398;
  double t6408;
  double t6418;
  double t6050;
  double t8061;
  double t8064;
  double t8193;
  double t4409;
  double t4980;
  double t5024;
  double t5150;
  double t5209;
  double t5222;
  double t8279;
  double t8633;
  double t8638;
  double t8639;
  double t8338;
  double t6052;
  double t6121;
  double t7730;
  double t7738;
  double t7740;
  double t8889;
  double t8890;
  double t8926;
  double t8929;
  double t8930;
  double t1489;
  double t2158;
  double t2769;
  double t2960;
  double t3008;
  double t3101;
  double t3185;
  double t3233;
  double t3309;
  double t3662;
  double t3741;
  double t3786;
  double t3877;
  double t7412;
  double t7431;
  double t7598;
  double t7627;
  double t7684;
  double t7703;
  double t7717;
  double t7773;
  double t7776;
  double t9080;
  double t9088;
  double t9118;
  double t9123;
  double t9124;
  double t8747;
  double t9273;
  double t9274;
  double t9275;
  double t9276;
  double t9277;
  double t9278;
  double t9279;
  double t9280;
  double t8958;
  double t8971;
  double t8975;
  double t4072;
  double t4255;
  double t4274;
  double t4450;
  double t4567;
  double t4609;
  double t4646;
  double t4655;
  double t4668;
  double t8281;
  double t6397;
  double t6717;
  double t6834;
  double t6968;
  double t6996;
  double t7099;
  double t7112;
  double t7194;
  double t7248;
  double t9147;
  double t9151;
  double t9152;
  double t8208;
  double t8266;
  double t8282;
  double t8339;
  double t8398;
  double t8467;
  double t8483;
  double t9312;
  double t9313;
  double t9315;
  double t8797;
  double t8749;
  double t8759;
  double t8791;
  double t8798;
  double t8799;
  double t8833;
  double t9254;
  double t9256;
  double t9257;
  double t9258;
  double t9261;
  double t9262;
  double t9263;
  double t9264;
  double t9266;
  double t9267;
  double t9285;
  double t9286;
  double t9287;
  double t8859;
  double t8885;
  double t8953;
  double t9296;
  double t9297;
  double t9299;
  double t9300;
  double t9303;
  double t9304;
  double t9305;
  double t8688;
  double t8690;
  double t5131;
  double t5507;
  double t5765;
  double t5831;
  double t5932;
  double t6167;
  double t6173;
  double t9039;
  double t9054;
  double t9125;
  double t8617;
  double t8681;
  double t8696;
  double t8698;
  double t8727;
  double t8737;
  double t8741;
  double t9316;
  double t9317;
  double t9318;
  double t9319;
  double t9320;
  double t9322;
  double t9323;
  double t9324;
  double t9325;
  double t9342;
  double t9347;
  double t9348;
  double t9333;
  double t9334;
  double t9335;
  double t9270;
  double t9272;
  double t9282;
  t1483 = Sin(var1[3]);
  t99 = Cos(var1[4]);
  t260 = Cos(var1[13]);
  t273 = -1.*t260;
  t694 = 1. + t273;
  t745 = Sin(var1[13]);
  t244 = Cos(var1[5]);
  t2678 = Sin(var1[5]);
  t725 = 0.07996*t694;
  t759 = 0.135*t745;
  t1479 = 0. + t725 + t759;
  t3869 = Cos(var1[3]);
  t1916 = Sin(var1[4]);
  t2542 = -0.135*t694;
  t2549 = 0.07996*t745;
  t2627 = 0. + t2542 + t2549;
  t3880 = -1.*t3869*t244*t1916;
  t3962 = -1.*t1483*t2678;
  t3983 = t3880 + t3962;
  t4118 = t244*t1483;
  t4193 = -1.*t3869*t1916*t2678;
  t4247 = t4118 + t4193;
  t5078 = -1.*t244*t1483*t1916;
  t5083 = t3869*t2678;
  t5086 = t5078 + t5083;
  t5242 = -1.*t3869*t244;
  t5292 = -1.*t1483*t1916*t2678;
  t5309 = t5242 + t5292;
  t5672 = -1.*t745*t5086;
  t6398 = t3869*t244;
  t6408 = t1483*t1916*t2678;
  t6418 = t6398 + t6408;
  t6050 = t260*t5086;
  t8061 = t3869*t244*t1916;
  t8064 = t1483*t2678;
  t8193 = t8061 + t8064;
  t4409 = t260*t4247;
  t4980 = 0.135*t260;
  t5024 = t4980 + t2549;
  t5150 = 0.07996*t260;
  t5209 = -0.135*t745;
  t5222 = t5150 + t5209;
  t8279 = -1.*t745*t8193;
  t8633 = -1.*t244*t1483;
  t8638 = t3869*t1916*t2678;
  t8639 = t8633 + t8638;
  t8338 = t260*t8193;
  t6052 = -1.*t745*t5309;
  t6121 = t6050 + t6052;
  t7730 = t260*t3869*t99*t244;
  t7738 = -1.*t3869*t99*t745*t2678;
  t7740 = t7730 + t7738;
  t8889 = -1.*t3869*t99*t244*t745;
  t8890 = -1.*t260*t3869*t99*t2678;
  t8926 = t8889 + t8890;
  t8929 = 0.07996*t8926;
  t8930 = -0.135*t7740;
  t1489 = -1.*t99*t244*t1479*t1483;
  t2158 = -0.08055*t1483*t1916;
  t2769 = -1.*t99*t2627*t1483*t2678;
  t2960 = -1.*t99*t244*t745*t1483;
  t3008 = -1.*t260*t99*t1483*t2678;
  t3101 = t2960 + t3008;
  t3185 = -0.135*t3101;
  t3233 = -1.*t260*t99*t244*t1483;
  t3309 = t99*t745*t1483*t2678;
  t3662 = t3233 + t3309;
  t3741 = 0.07996*t3662;
  t3786 = t1489 + t2158 + t2769 + t3185 + t3741;
  t3877 = 0.08055*t3869*t99;
  t7412 = t3869*t99*t244*t1479;
  t7431 = 0.08055*t3869*t1916;
  t7598 = t3869*t99*t2627*t2678;
  t7627 = t3869*t99*t244*t745;
  t7684 = t260*t3869*t99*t2678;
  t7703 = t7627 + t7684;
  t7717 = -0.135*t7703;
  t7773 = 0.07996*t7740;
  t7776 = t7412 + t7431 + t7598 + t7717 + t7773;
  t9080 = 0.07996*t3101;
  t9088 = t260*t99*t244*t1483;
  t9118 = -1.*t99*t745*t1483*t2678;
  t9123 = t9088 + t9118;
  t9124 = -0.135*t9123;
  t8747 = 0.08055*t99*t1483;
  t9273 = t244*t745*t1916;
  t9274 = t260*t1916*t2678;
  t9275 = t9273 + t9274;
  t9276 = 0.07996*t9275;
  t9277 = -1.*t260*t244*t1916;
  t9278 = t745*t1916*t2678;
  t9279 = t9277 + t9278;
  t9280 = -0.135*t9279;
  t8958 = t3869*t99*t244*t2627;
  t8971 = -1.*t3869*t99*t1479*t2678;
  t8975 = t8958 + t8971 + t8929 + t8930;
  t4072 = t1479*t3983;
  t4255 = t2627*t4247;
  t4274 = t745*t3983;
  t4450 = t4274 + t4409;
  t4567 = -0.135*t4450;
  t4609 = t260*t3983;
  t4646 = -1.*t745*t4247;
  t4655 = t4609 + t4646;
  t4668 = 0.07996*t4655;
  t8281 = t8279 + t4409;
  t6397 = t2627*t5086;
  t6717 = t1479*t6418;
  t6834 = t260*t6418;
  t6968 = t5672 + t6834;
  t6996 = 0.07996*t6968;
  t7099 = t745*t6418;
  t7112 = t6050 + t7099;
  t7194 = -0.135*t7112;
  t7248 = t6397 + t6717 + t6996 + t7194;
  t9147 = t99*t244*t2627*t1483;
  t9151 = -1.*t99*t1479*t1483*t2678;
  t9152 = t9147 + t9151 + t9080 + t9124;
  t8208 = t2627*t8193;
  t8266 = t1479*t4247;
  t8282 = 0.07996*t8281;
  t8339 = t745*t4247;
  t8398 = t8338 + t8339;
  t8467 = -0.135*t8398;
  t8483 = t8208 + t8266 + t8282 + t8467;
  t9312 = t244*t1483*t1916;
  t9313 = -1.*t3869*t2678;
  t9315 = t9312 + t9313;
  t8797 = t260*t5309;
  t8749 = t1479*t5086;
  t8759 = t2627*t5309;
  t8791 = t745*t5086;
  t8798 = t8791 + t8797;
  t8799 = -0.135*t8798;
  t8833 = 0.07996*t6121;
  t9254 = -1.*t99*t244*t1479;
  t9256 = -1.*t99*t2627*t2678;
  t9257 = -1.*t99*t244*t745;
  t9258 = -1.*t260*t99*t2678;
  t9261 = t9257 + t9258;
  t9262 = -0.135*t9261;
  t9263 = -1.*t260*t99*t244;
  t9264 = t99*t745*t2678;
  t9266 = t9263 + t9264;
  t9267 = 0.07996*t9266;
  t9285 = -1.*t244*t2627*t1916;
  t9286 = t1479*t1916*t2678;
  t9287 = t9285 + t9286 + t9276 + t9280;
  t8859 = t3869*t99*t244*t5024;
  t8885 = t3869*t99*t5222*t2678;
  t8953 = t8859 + t8885 + t8929 + t8930;
  t9296 = t5222*t8193;
  t9297 = t5024*t4247;
  t9299 = -0.135*t8281;
  t9300 = -1.*t260*t8193;
  t9303 = t9300 + t4646;
  t9304 = 0.07996*t9303;
  t9305 = t9296 + t9297 + t9299 + t9304;
  t8688 = -1.*t260*t8639;
  t8690 = t8279 + t8688;
  t5131 = t5024*t5086;
  t5507 = t5222*t5309;
  t5765 = -1.*t260*t5309;
  t5831 = t5672 + t5765;
  t5932 = 0.07996*t5831;
  t6167 = -0.135*t6121;
  t6173 = t5131 + t5507 + t5932 + t6167;
  t9039 = t99*t244*t5024*t1483;
  t9054 = t99*t5222*t1483*t2678;
  t9125 = t9039 + t9054 + t9080 + t9124;
  t8617 = t5024*t8193;
  t8681 = t5222*t8639;
  t8696 = 0.07996*t8690;
  t8698 = -1.*t745*t8639;
  t8727 = t8338 + t8698;
  t8737 = -0.135*t8727;
  t8741 = t8617 + t8681 + t8696 + t8737;
  t9316 = t5222*t9315;
  t9317 = t5024*t5309;
  t9318 = -1.*t745*t9315;
  t9319 = t9318 + t8797;
  t9320 = -0.135*t9319;
  t9322 = -1.*t260*t9315;
  t9323 = t9322 + t6052;
  t9324 = 0.07996*t9323;
  t9325 = t9316 + t9317 + t9320 + t9324;
  t9342 = -0.135*t260;
  t9347 = -0.07996*t745;
  t9348 = t9342 + t9347;
  t9333 = t99*t244*t5222;
  t9334 = -1.*t99*t5024*t2678;
  t9335 = t9333 + t9334 + t9262 + t9267;
  t9270 = -1.*t244*t5024*t1916;
  t9272 = -1.*t5222*t1916*t2678;
  t9282 = t9270 + t9272 + t9276 + t9280;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t3877 + t4072 + t4255 + t4567 + t4668)*var2[3] + t3786*var2[4] + t7248*var2[5] + t6173*var2[13];
  p_output1[10]=(t8747 + t8749 + t8759 + t8799 + t8833)*var2[3] + t7776*var2[4] + t8483*var2[5] + t8741*var2[13];
  p_output1[11]=0;
  p_output1[12]=t3786*var2[3] + (-1.*t1479*t1916*t244*t3869 - 1.*t1916*t2627*t2678*t3869 + t3877 - 0.135*(-1.*t1916*t260*t2678*t3869 - 1.*t1916*t244*t3869*t745) + 0.07996*(-1.*t1916*t244*t260*t3869 + t1916*t2678*t3869*t745))*var2[4] + t8975*var2[5] + t8953*var2[13];
  p_output1[13]=t7776*var2[3] + (-1.*t1479*t1483*t1916*t244 - 1.*t1483*t1916*t2627*t2678 - 0.135*(-1.*t1483*t1916*t260*t2678 - 1.*t1483*t1916*t244*t745) + 0.07996*(-1.*t1483*t1916*t244*t260 + t1483*t1916*t2678*t745) + t8747)*var2[4] + t9152*var2[5] + t9125*var2[13];
  p_output1[14]=(-0.08055*t1916 + t9254 + t9256 + t9262 + t9267)*var2[4] + t9287*var2[5] + t9282*var2[13];
  p_output1[15]=t7248*var2[3] + t8975*var2[4] + (t4072 + t4255 + t4567 + t4668)*var2[5] + t9305*var2[13];
  p_output1[16]=t8483*var2[3] + t9152*var2[4] + (t8749 + t8759 + t8799 + t8833)*var2[5] + t9325*var2[13];
  p_output1[17]=t9287*var2[4] + (t9254 + t9256 + t9262 + t9267)*var2[5] + t9335*var2[13];
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
  p_output1[39]=t6173*var2[3] + t8953*var2[4] + t9305*var2[5] + (-0.135*t8690 + t9296 + 0.07996*(t745*t8639 + t9300) + t8639*t9348)*var2[13];
  p_output1[40]=t8741*var2[3] + t9125*var2[4] + t9325*var2[5] + (t9316 - 0.135*(-1.*t260*t6418 + t9318) + 0.07996*(t7099 + t9322) + t6418*t9348)*var2[13];
  p_output1[41]=t9282*var2[4] + t9335*var2[5] + (t9262 + t9267 + t9333 + t2678*t9348*t99)*var2[13];
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



void dJp_RightAbductionJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
