/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:37 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJp_LeftPelvisRotation_src.h"

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
  double t858;
  double t1725;
  double t1842;
  double t1843;
  double t2174;
  double t2309;
  double t2858;
  double t1754;
  double t4240;
  double t1570;
  double t2176;
  double t2551;
  double t2561;
  double t2967;
  double t3109;
  double t3129;
  double t4759;
  double t4799;
  double t4802;
  double t4533;
  double t4701;
  double t4746;
  double t6864;
  double t7024;
  double t7414;
  double t6265;
  double t6317;
  double t6411;
  double t8756;
  double t8759;
  double t8791;
  double t8068;
  double t8526;
  double t4977;
  double t9040;
  double t9051;
  double t9056;
  double t6457;
  double t6532;
  double t7817;
  double t7917;
  double t7970;
  double t9134;
  double t9135;
  double t9136;
  double t9061;
  double t9066;
  double t8555;
  double t8576;
  double t8984;
  double t9004;
  double t9008;
  double t9191;
  double t9192;
  double t9193;
  double t9194;
  double t9197;
  double t1699;
  double t2766;
  double t3155;
  double t3216;
  double t3380;
  double t3383;
  double t3521;
  double t3663;
  double t3675;
  double t3681;
  double t3747;
  double t3987;
  double t4503;
  double t8910;
  double t8931;
  double t8948;
  double t8971;
  double t8976;
  double t8981;
  double t8983;
  double t9009;
  double t9011;
  double t9227;
  double t9229;
  double t9230;
  double t9231;
  double t9232;
  double t9163;
  double t9278;
  double t9280;
  double t9281;
  double t9282;
  double t9283;
  double t9285;
  double t9286;
  double t9287;
  double t9189;
  double t9190;
  double t9198;
  double t4754;
  double t4920;
  double t5152;
  double t5159;
  double t5292;
  double t5767;
  double t6243;
  double t6253;
  double t6254;
  double t9064;
  double t8800;
  double t8817;
  double t8820;
  double t8823;
  double t8827;
  double t8848;
  double t8852;
  double t8868;
  double t8869;
  double t9225;
  double t9226;
  double t9233;
  double t9039;
  double t9058;
  double t9065;
  double t9102;
  double t9108;
  double t9116;
  double t9120;
  double t9173;
  double t9320;
  double t9322;
  double t9323;
  double t9164;
  double t9169;
  double t9177;
  double t9179;
  double t9182;
  double t9183;
  double t9257;
  double t9258;
  double t9259;
  double t9260;
  double t9261;
  double t9262;
  double t9264;
  double t9270;
  double t9271;
  double t9273;
  double t9276;
  double t9277;
  double t9288;
  double t9200;
  double t9201;
  double t9202;
  double t9302;
  double t9304;
  double t9305;
  double t9306;
  double t9307;
  double t9308;
  double t9310;
  double t9141;
  double t9143;
  double t6762;
  double t7985;
  double t7988;
  double t8195;
  double t8291;
  double t8712;
  double t8740;
  double t9236;
  double t9237;
  double t9238;
  double t9131;
  double t9139;
  double t9149;
  double t9154;
  double t9157;
  double t9159;
  double t9160;
  double t9319;
  double t9324;
  double t9325;
  double t9326;
  double t9327;
  double t9328;
  double t9330;
  double t9331;
  double t9333;
  double t9350;
  double t9352;
  double t9353;
  double t9341;
  double t9340;
  double t9343;
  double t9292;
  double t9293;
  double t9294;
  t858 = Sin(var1[3]);
  t1725 = Cos(var1[4]);
  t1842 = Cos(var1[6]);
  t1843 = -1.*t1842;
  t2174 = 1. + t1843;
  t2309 = Sin(var1[6]);
  t2858 = Sin(var1[5]);
  t1754 = Cos(var1[5]);
  t4240 = Cos(var1[3]);
  t1570 = Sin(var1[4]);
  t2176 = 0.07996*t2174;
  t2551 = -0.135*t2309;
  t2561 = 0. + t2176 + t2551;
  t2967 = 0.135*t2174;
  t3109 = 0.07996*t2309;
  t3129 = 0. + t2967 + t3109;
  t4759 = t1754*t858;
  t4799 = -1.*t4240*t1570*t2858;
  t4802 = t4759 + t4799;
  t4533 = -1.*t4240*t1754*t1570;
  t4701 = -1.*t858*t2858;
  t4746 = t4533 + t4701;
  t6864 = -1.*t4240*t1754;
  t7024 = -1.*t858*t1570*t2858;
  t7414 = t6864 + t7024;
  t6265 = -1.*t1754*t858*t1570;
  t6317 = t4240*t2858;
  t6411 = t6265 + t6317;
  t8756 = t4240*t1754;
  t8759 = t858*t1570*t2858;
  t8791 = t8756 + t8759;
  t8068 = -1.*t6411*t2309;
  t8526 = t1842*t6411;
  t4977 = t1842*t4802;
  t9040 = t4240*t1754*t1570;
  t9051 = t858*t2858;
  t9056 = t9040 + t9051;
  t6457 = -0.135*t1842;
  t6532 = t6457 + t3109;
  t7817 = 0.07996*t1842;
  t7917 = 0.135*t2309;
  t7970 = t7817 + t7917;
  t9134 = -1.*t1754*t858;
  t9135 = t4240*t1570*t2858;
  t9136 = t9134 + t9135;
  t9061 = -1.*t9056*t2309;
  t9066 = t1842*t9056;
  t8555 = -1.*t7414*t2309;
  t8576 = t8526 + t8555;
  t8984 = t4240*t1725*t1754*t1842;
  t9004 = -1.*t4240*t1725*t2858*t2309;
  t9008 = t8984 + t9004;
  t9191 = -1.*t4240*t1725*t1842*t2858;
  t9192 = -1.*t4240*t1725*t1754*t2309;
  t9193 = t9191 + t9192;
  t9194 = 0.09786*t9193;
  t9197 = 0.1351*t9008;
  t1699 = -0.05485*t858*t1570;
  t2766 = -1.*t1725*t1754*t858*t2561;
  t3155 = -1.*t1725*t858*t2858*t3129;
  t3216 = -1.*t1725*t1842*t858*t2858;
  t3380 = -1.*t1725*t1754*t858*t2309;
  t3383 = t3216 + t3380;
  t3521 = 0.1351*t3383;
  t3663 = -1.*t1725*t1754*t1842*t858;
  t3675 = t1725*t858*t2858*t2309;
  t3681 = t3663 + t3675;
  t3747 = 0.09786*t3681;
  t3987 = t1699 + t2766 + t3155 + t3521 + t3747;
  t4503 = 0.05485*t4240*t1725;
  t8910 = 0.05485*t4240*t1570;
  t8931 = t4240*t1725*t1754*t2561;
  t8948 = t4240*t1725*t2858*t3129;
  t8971 = t4240*t1725*t1842*t2858;
  t8976 = t4240*t1725*t1754*t2309;
  t8981 = t8971 + t8976;
  t8983 = 0.1351*t8981;
  t9009 = 0.09786*t9008;
  t9011 = t8910 + t8931 + t8948 + t8983 + t9009;
  t9227 = 0.09786*t3383;
  t9229 = t1725*t1754*t1842*t858;
  t9230 = -1.*t1725*t858*t2858*t2309;
  t9231 = t9229 + t9230;
  t9232 = 0.1351*t9231;
  t9163 = 0.05485*t1725*t858;
  t9278 = t1842*t1570*t2858;
  t9280 = t1754*t1570*t2309;
  t9281 = t9278 + t9280;
  t9282 = 0.09786*t9281;
  t9283 = -1.*t1754*t1842*t1570;
  t9285 = t1570*t2858*t2309;
  t9286 = t9283 + t9285;
  t9287 = 0.1351*t9286;
  t9189 = -1.*t4240*t1725*t2858*t2561;
  t9190 = t4240*t1725*t1754*t3129;
  t9198 = t9189 + t9190 + t9194 + t9197;
  t4754 = t4746*t2561;
  t4920 = t4802*t3129;
  t5152 = t4746*t2309;
  t5159 = t4977 + t5152;
  t5292 = 0.1351*t5159;
  t5767 = t1842*t4746;
  t6243 = -1.*t4802*t2309;
  t6253 = t5767 + t6243;
  t6254 = 0.09786*t6253;
  t9064 = t4977 + t9061;
  t8800 = t8791*t2561;
  t8817 = t6411*t3129;
  t8820 = t1842*t8791;
  t8823 = t8820 + t8068;
  t8827 = 0.09786*t8823;
  t8848 = t8791*t2309;
  t8852 = t8526 + t8848;
  t8868 = 0.1351*t8852;
  t8869 = t8800 + t8817 + t8827 + t8868;
  t9225 = -1.*t1725*t858*t2858*t2561;
  t9226 = t1725*t1754*t858*t3129;
  t9233 = t9225 + t9226 + t9227 + t9232;
  t9039 = t4802*t2561;
  t9058 = t9056*t3129;
  t9065 = 0.09786*t9064;
  t9102 = t4802*t2309;
  t9108 = t9066 + t9102;
  t9116 = 0.1351*t9108;
  t9120 = t9039 + t9058 + t9065 + t9116;
  t9173 = t1842*t7414;
  t9320 = t1754*t858*t1570;
  t9322 = -1.*t4240*t2858;
  t9323 = t9320 + t9322;
  t9164 = t6411*t2561;
  t9169 = t7414*t3129;
  t9177 = t6411*t2309;
  t9179 = t9173 + t9177;
  t9182 = 0.1351*t9179;
  t9183 = 0.09786*t8576;
  t9257 = -1.*t1725*t1754*t2561;
  t9258 = -1.*t1725*t2858*t3129;
  t9259 = -1.*t1725*t1842*t2858;
  t9260 = -1.*t1725*t1754*t2309;
  t9261 = t9259 + t9260;
  t9262 = 0.1351*t9261;
  t9264 = -1.*t1725*t1754*t1842;
  t9270 = t1725*t2858*t2309;
  t9271 = t9264 + t9270;
  t9273 = 0.09786*t9271;
  t9276 = t1570*t2858*t2561;
  t9277 = -1.*t1754*t1570*t3129;
  t9288 = t9276 + t9277 + t9282 + t9287;
  t9200 = t4240*t1725*t1754*t6532;
  t9201 = t4240*t1725*t2858*t7970;
  t9202 = t9200 + t9201 + t9194 + t9197;
  t9302 = t4802*t6532;
  t9304 = t9056*t7970;
  t9305 = 0.1351*t9064;
  t9306 = -1.*t1842*t9056;
  t9307 = t9306 + t6243;
  t9308 = 0.09786*t9307;
  t9310 = t9302 + t9304 + t9305 + t9308;
  t9141 = -1.*t1842*t9136;
  t9143 = t9141 + t9061;
  t6762 = t6411*t6532;
  t7985 = t7414*t7970;
  t7988 = -1.*t1842*t7414;
  t8195 = t7988 + t8068;
  t8291 = 0.09786*t8195;
  t8712 = 0.1351*t8576;
  t8740 = t6762 + t7985 + t8291 + t8712;
  t9236 = t1725*t1754*t858*t6532;
  t9237 = t1725*t858*t2858*t7970;
  t9238 = t9236 + t9237 + t9227 + t9232;
  t9131 = t9056*t6532;
  t9139 = t9136*t7970;
  t9149 = 0.09786*t9143;
  t9154 = -1.*t9136*t2309;
  t9157 = t9066 + t9154;
  t9159 = 0.1351*t9157;
  t9160 = t9131 + t9139 + t9149 + t9159;
  t9319 = t7414*t6532;
  t9324 = t9323*t7970;
  t9325 = -1.*t9323*t2309;
  t9326 = t9173 + t9325;
  t9327 = 0.1351*t9326;
  t9328 = -1.*t1842*t9323;
  t9330 = t9328 + t8555;
  t9331 = 0.09786*t9330;
  t9333 = t9319 + t9324 + t9327 + t9331;
  t9350 = 0.135*t1842;
  t9352 = -0.07996*t2309;
  t9353 = t9350 + t9352;
  t9341 = t1725*t1754*t7970;
  t9340 = -1.*t1725*t2858*t6532;
  t9343 = t9340 + t9341 + t9262 + t9273;
  t9292 = -1.*t1754*t1570*t6532;
  t9293 = -1.*t1570*t2858*t7970;
  t9294 = t9292 + t9293 + t9282 + t9287;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t4503 + t4754 + t4920 + t5292 + t6254)*var2[3] + t3987*var2[4] + t8869*var2[5] + t8740*var2[6];
  p_output1[10]=(t9163 + t9164 + t9169 + t9182 + t9183)*var2[3] + t9011*var2[4] + t9120*var2[5] + t9160*var2[6];
  p_output1[11]=0;
  p_output1[12]=t3987*var2[3] + (-1.*t1570*t1754*t2561*t4240 - 1.*t1570*t2858*t3129*t4240 + 0.1351*(-1.*t1570*t1754*t2309*t4240 - 1.*t1570*t1842*t2858*t4240) + 0.09786*(-1.*t1570*t1754*t1842*t4240 + t1570*t2309*t2858*t4240) + t4503)*var2[4] + t9198*var2[5] + t9202*var2[6];
  p_output1[13]=t9011*var2[3] + (-1.*t1570*t1754*t2561*t858 - 1.*t1570*t2858*t3129*t858 + 0.1351*(-1.*t1570*t1754*t2309*t858 - 1.*t1570*t1842*t2858*t858) + 0.09786*(-1.*t1570*t1754*t1842*t858 + t1570*t2309*t2858*t858) + t9163)*var2[4] + t9233*var2[5] + t9238*var2[6];
  p_output1[14]=(-0.05485*t1570 + t9257 + t9258 + t9262 + t9273)*var2[4] + t9288*var2[5] + t9294*var2[6];
  p_output1[15]=t8869*var2[3] + t9198*var2[4] + (t4754 + t4920 + t5292 + t6254)*var2[5] + t9310*var2[6];
  p_output1[16]=t9120*var2[3] + t9233*var2[4] + (t9164 + t9169 + t9182 + t9183)*var2[5] + t9333*var2[6];
  p_output1[17]=t9288*var2[4] + (t9257 + t9258 + t9262 + t9273)*var2[5] + t9343*var2[6];
  p_output1[18]=t8740*var2[3] + t9202*var2[4] + t9310*var2[5] + (0.1351*t9143 + t9304 + 0.09786*(t2309*t9136 + t9306) + t9136*t9353)*var2[6];
  p_output1[19]=t9160*var2[3] + t9238*var2[4] + t9333*var2[5] + (t9324 + 0.1351*(-1.*t1842*t8791 + t9325) + 0.09786*(t8848 + t9328) + t8791*t9353)*var2[6];
  p_output1[20]=t9294*var2[4] + t9343*var2[5] + (t9262 + t9273 + t9341 + t1725*t2858*t9353)*var2[6];
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
}



void dJp_LeftPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
