/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:33 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftThigh_src.h"

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
static void output1(double *p_output1,const double *var1)
{
  double t1475;
  double t702;
  double t725;
  double t727;
  double t1675;
  double t2141;
  double t2363;
  double t2580;
  double t2649;
  double t3535;
  double t3566;
  double t3721;
  double t1016;
  double t1832;
  double t2139;
  double t4558;
  double t4668;
  double t4698;
  double t4879;
  double t4402;
  double t4403;
  double t4508;
  double t5244;
  double t5764;
  double t5884;
  double t5901;
  double t5954;
  double t5709;
  double t5713;
  double t5715;
  double t6017;
  double t6023;
  double t6042;
  double t2599;
  double t3430;
  double t3513;
  double t3874;
  double t3896;
  double t3897;
  double t6182;
  double t6190;
  double t6191;
  double t6133;
  double t6155;
  double t6177;
  double t4700;
  double t4940;
  double t5102;
  double t5284;
  double t5291;
  double t5364;
  double t6212;
  double t6216;
  double t6217;
  double t5931;
  double t5966;
  double t5985;
  double t6057;
  double t6059;
  double t6064;
  double t6289;
  double t6293;
  double t6297;
  double t6358;
  double t6376;
  double t6381;
  double t6482;
  double t6485;
  double t6486;
  double t6531;
  double t6537;
  double t6539;
  double t6551;
  double t6555;
  double t6557;
  double t6623;
  double t6628;
  double t6634;
  double t6654;
  double t6666;
  double t6674;
  double t6704;
  double t6705;
  double t6706;
  double t6804;
  double t6813;
  double t6815;
  double t6860;
  double t6874;
  double t6877;
  double t6883;
  double t6884;
  double t6886;
  double t6908;
  double t6910;
  double t6913;
  double t6923;
  double t6924;
  double t6928;
  double t6931;
  double t6932;
  double t7003;
  double t7011;
  double t7019;
  double t7023;
  double t7026;
  double t7027;
  double t7039;
  double t7040;
  double t7090;
  double t7092;
  double t7100;
  double t7125;
  double t7126;
  double t7128;
  double t7210;
  double t7211;
  double t7162;
  double t7167;
  double t7180;
  double t7185;
  double t7186;
  double t7264;
  double t7266;
  double t7267;
  double t7275;
  double t7279;
  double t7284;
  double t7285;
  double t7107;
  double t7109;
  double t7113;
  double t7137;
  double t7144;
  double t7148;
  double t7150;
  double t7154;
  double t7155;
  double t7156;
  double t7157;
  double t7158;
  double t6266;
  double t6268;
  double t6270;
  double t7325;
  double t7326;
  double t7327;
  double t7330;
  double t7331;
  double t7359;
  double t7360;
  double t7380;
  double t7385;
  double t7386;
  double t7387;
  double t7409;
  double t7411;
  double t7413;
  double t7423;
  double t7428;
  double t7432;
  double t6417;
  double t6419;
  double t6423;
  double t7457;
  double t7459;
  double t7463;
  double t7465;
  double t7469;
  double t7485;
  double t7487;
  double t7489;
  double t7525;
  double t7526;
  double t7528;
  t1475 = Cos(var1[3]);
  t702 = Cos(var1[5]);
  t725 = Sin(var1[3]);
  t727 = Sin(var1[4]);
  t1675 = Sin(var1[5]);
  t2141 = Cos(var1[6]);
  t2363 = -1.*t2141;
  t2580 = 1. + t2363;
  t2649 = Sin(var1[6]);
  t3535 = -1.*t1475*t702;
  t3566 = -1.*t725*t727*t1675;
  t3721 = t3535 + t3566;
  t1016 = -1.*t702*t725*t727;
  t1832 = t1475*t1675;
  t2139 = t1016 + t1832;
  t4558 = Cos(var1[7]);
  t4668 = -1.*t4558;
  t4698 = 1. + t4668;
  t4879 = Sin(var1[7]);
  t4402 = t2141*t3721;
  t4403 = t2139*t2649;
  t4508 = t4402 + t4403;
  t5244 = Cos(var1[4]);
  t5764 = Cos(var1[8]);
  t5884 = -1.*t5764;
  t5901 = 1. + t5884;
  t5954 = Sin(var1[8]);
  t5709 = -1.*t5244*t4558*t725;
  t5713 = t4508*t4879;
  t5715 = t5709 + t5713;
  t6017 = t2141*t2139;
  t6023 = -1.*t3721*t2649;
  t6042 = t6017 + t6023;
  t2599 = 0.07996*t2580;
  t3430 = -0.135*t2649;
  t3513 = 0. + t2599 + t3430;
  t3874 = 0.135*t2580;
  t3896 = 0.07996*t2649;
  t3897 = 0. + t3874 + t3896;
  t6182 = -1.*t702*t725;
  t6190 = t1475*t727*t1675;
  t6191 = t6182 + t6190;
  t6133 = t1475*t702*t727;
  t6155 = t725*t1675;
  t6177 = t6133 + t6155;
  t4700 = 0.135*t4698;
  t4940 = 0.08055*t4879;
  t5102 = 0. + t4700 + t4940;
  t5284 = -0.08055*t4698;
  t5291 = 0.135*t4879;
  t5364 = 0. + t5284 + t5291;
  t6212 = t2141*t6191;
  t6216 = t6177*t2649;
  t6217 = t6212 + t6216;
  t5931 = -0.08055*t5901;
  t5966 = -0.01004*t5954;
  t5985 = 0. + t5931 + t5966;
  t6057 = -0.01004*t5901;
  t6059 = 0.08055*t5954;
  t6064 = 0. + t6057 + t6059;
  t6289 = t1475*t5244*t4558;
  t6293 = t6217*t4879;
  t6297 = t6289 + t6293;
  t6358 = t2141*t6177;
  t6376 = -1.*t6191*t2649;
  t6381 = t6358 + t6376;
  t6482 = t1475*t5244*t2141*t1675;
  t6485 = t1475*t5244*t702*t2649;
  t6486 = t6482 + t6485;
  t6531 = -1.*t1475*t4558*t727;
  t6537 = t6486*t4879;
  t6539 = t6531 + t6537;
  t6551 = t1475*t5244*t702*t2141;
  t6555 = -1.*t1475*t5244*t1675*t2649;
  t6557 = t6551 + t6555;
  t6623 = t5244*t2141*t725*t1675;
  t6628 = t5244*t702*t725*t2649;
  t6634 = t6623 + t6628;
  t6654 = -1.*t4558*t725*t727;
  t6666 = t6634*t4879;
  t6674 = t6654 + t6666;
  t6704 = t5244*t702*t2141*t725;
  t6705 = -1.*t5244*t725*t1675*t2649;
  t6706 = t6704 + t6705;
  t6804 = -1.*t2141*t727*t1675;
  t6813 = -1.*t702*t727*t2649;
  t6815 = t6804 + t6813;
  t6860 = -1.*t5244*t4558;
  t6874 = t6815*t4879;
  t6877 = t6860 + t6874;
  t6883 = -1.*t702*t2141*t727;
  t6884 = t727*t1675*t2649;
  t6886 = t6883 + t6884;
  t6908 = t702*t725;
  t6910 = -1.*t1475*t727*t1675;
  t6913 = t6908 + t6910;
  t6923 = t6913*t2649;
  t6924 = t6358 + t6923;
  t6928 = t2141*t6913;
  t6931 = -1.*t6177*t2649;
  t6932 = t6928 + t6931;
  t7003 = t702*t725*t727;
  t7011 = -1.*t1475*t1675;
  t7019 = t7003 + t7011;
  t7023 = t2141*t7019;
  t7026 = t3721*t2649;
  t7027 = t7023 + t7026;
  t7039 = -1.*t7019*t2649;
  t7040 = t4402 + t7039;
  t7090 = t5244*t702*t2141;
  t7092 = -1.*t5244*t1675*t2649;
  t7100 = t7090 + t7092;
  t7125 = -1.*t5244*t2141*t1675;
  t7126 = -1.*t5244*t702*t2649;
  t7128 = t7125 + t7126;
  t7210 = -1.*t2141*t6191;
  t7211 = t7210 + t6931;
  t7162 = -0.135*t2141;
  t7167 = t7162 + t3896;
  t7180 = 0.07996*t2141;
  t7185 = 0.135*t2649;
  t7186 = t7180 + t7185;
  t7264 = t1475*t702;
  t7266 = t725*t727*t1675;
  t7267 = t7264 + t7266;
  t7275 = -1.*t7267*t2649;
  t7279 = t7023 + t7275;
  t7284 = -1.*t2141*t7267;
  t7285 = t7284 + t7039;
  t7107 = 0.1708*t4558*t7100;
  t7109 = t7100*t5102;
  t7113 = t7100*t4879*t5985;
  t7137 = t7128*t6064;
  t7144 = t5764*t7100*t4879;
  t7148 = t7128*t5954;
  t7150 = t7144 + t7148;
  t7154 = -0.08045*t7150;
  t7155 = t5764*t7128;
  t7156 = -1.*t7100*t4879*t5954;
  t7157 = t7155 + t7156;
  t7158 = -0.06984*t7157;
  t6266 = t4558*t6217;
  t6268 = -1.*t1475*t5244*t4879;
  t6270 = t6266 + t6268;
  t7325 = 0.135*t4558;
  t7326 = -0.08055*t4879;
  t7327 = t7325 + t7326;
  t7330 = 0.08055*t4558;
  t7331 = t7330 + t5291;
  t7359 = t2141*t7267;
  t7360 = t7019*t2649;
  t7380 = t7359 + t7360;
  t7385 = t4558*t7380;
  t7386 = -1.*t5244*t725*t4879;
  t7387 = t7385 + t7386;
  t7409 = t5244*t2141*t1675;
  t7411 = t5244*t702*t2649;
  t7413 = t7409 + t7411;
  t7423 = t4558*t7413;
  t7428 = t727*t4879;
  t7432 = t7423 + t7428;
  t6417 = t5764*t6381;
  t6419 = -1.*t6297*t5954;
  t6423 = t6417 + t6419;
  t7457 = -0.01004*t5764;
  t7459 = -0.08055*t5954;
  t7463 = t7457 + t7459;
  t7465 = 0.08055*t5764;
  t7469 = t7465 + t5966;
  t7485 = t5244*t4558*t725;
  t7487 = t7380*t4879;
  t7489 = t7485 + t7487;
  t7525 = -1.*t4558*t727;
  t7526 = t7413*t4879;
  t7528 = t7525 + t7526;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2139*t3513 + t3721*t3897 + t4508*t5102 + t5715*t5985 - 0.06984*(-1.*t5715*t5954 + t5764*t6042) - 0.08045*(t5715*t5764 + t5954*t6042) + t6042*t6064 - 1.*t5244*t5364*t725 + 0.1708*(t4508*t4558 + t4879*t5244*t725);
  p_output1[10]=t1475*t5244*t5364 + t3513*t6177 + t3897*t6191 + t5102*t6217 + 0.1708*t6270 + t5985*t6297 + t6064*t6381 - 0.08045*(t5764*t6297 + t5954*t6381) - 0.06984*t6423;
  p_output1[11]=0;
  p_output1[12]=t1475*t1675*t3897*t5244 + t5102*t6486 + t5985*t6539 + t6064*t6557 - 0.06984*(-1.*t5954*t6539 + t5764*t6557) - 0.08045*(t5764*t6539 + t5954*t6557) + t1475*t3513*t5244*t702 - 1.*t1475*t5364*t727 + 0.1708*(t4558*t6486 + t1475*t4879*t727);
  p_output1[13]=t5102*t6634 + t5985*t6674 + t6064*t6706 - 0.06984*(-1.*t5954*t6674 + t5764*t6706) - 0.08045*(t5764*t6674 + t5954*t6706) + t1675*t3897*t5244*t725 + t3513*t5244*t702*t725 - 1.*t5364*t725*t727 + 0.1708*(t4558*t6634 + t4879*t725*t727);
  p_output1[14]=-1.*t5244*t5364 + t5102*t6815 + 0.1708*(t4879*t5244 + t4558*t6815) + t5985*t6877 + t6064*t6886 - 0.06984*(-1.*t5954*t6877 + t5764*t6886) - 0.08045*(t5764*t6877 + t5954*t6886) - 1.*t1675*t3897*t727 - 1.*t3513*t702*t727;
  p_output1[15]=t3897*t6177 + t3513*t6913 + 0.1708*t4558*t6924 + t5102*t6924 + t4879*t5985*t6924 + t6064*t6932 - 0.06984*(-1.*t4879*t5954*t6924 + t5764*t6932) - 0.08045*(t4879*t5764*t6924 + t5954*t6932);
  p_output1[16]=t3513*t3721 + t3897*t7019 + 0.1708*t4558*t7027 + t5102*t7027 + t4879*t5985*t7027 + t6064*t7040 - 0.06984*(-1.*t4879*t5954*t7027 + t5764*t7040) - 0.08045*(t4879*t5764*t7027 + t5954*t7040);
  p_output1[17]=-1.*t1675*t3513*t5244 + t3897*t5244*t702 + t7107 + t7109 + t7113 + t7137 + t7154 + t7158;
  p_output1[18]=0.1708*t4558*t6381 + t5102*t6381 + t4879*t5985*t6381 + t6177*t7167 + t6191*t7186 + t6064*t7211 - 0.06984*(-1.*t4879*t5954*t6381 + t5764*t7211) - 0.08045*(t4879*t5764*t6381 + t5954*t7211);
  p_output1[19]=t7019*t7167 + t7186*t7267 + 0.1708*t4558*t7279 + t5102*t7279 + t4879*t5985*t7279 + t6064*t7285 - 0.06984*(-1.*t4879*t5954*t7279 + t5764*t7285) - 0.08045*(t4879*t5764*t7279 + t5954*t7285);
  p_output1[20]=t7107 + t7109 + t7113 + t7137 + t7154 + t7158 + t5244*t702*t7167 + t1675*t5244*t7186;
  p_output1[21]=0.1708*(-1.*t1475*t4558*t5244 - 1.*t4879*t6217) - 0.08045*t5764*t6270 + 0.06984*t5954*t6270 + t5985*t6270 + t1475*t5244*t7327 + t6217*t7331;
  p_output1[22]=t5244*t725*t7327 + t7331*t7380 + 0.1708*(t5709 - 1.*t4879*t7380) - 0.08045*t5764*t7387 + 0.06984*t5954*t7387 + t5985*t7387;
  p_output1[23]=-1.*t727*t7327 + t7331*t7413 + 0.1708*(t4558*t727 - 1.*t4879*t7413) - 0.08045*t5764*t7432 + 0.06984*t5954*t7432 + t5985*t7432;
  p_output1[24]=-0.06984*(-1.*t5764*t6297 - 1.*t5954*t6381) - 0.08045*t6423 + t6297*t7463 + t6381*t7469;
  p_output1[25]=t7279*t7469 + t7463*t7489 - 0.06984*(-1.*t5954*t7279 - 1.*t5764*t7489) - 0.08045*(t5764*t7279 - 1.*t5954*t7489);
  p_output1[26]=t7100*t7469 + t7463*t7528 - 0.06984*(-1.*t5954*t7100 - 1.*t5764*t7528) - 0.08045*(t5764*t7100 - 1.*t5954*t7528);
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



void Jp_LeftThigh_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
