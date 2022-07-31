/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:26 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_RightPelvisRotation_src.h"

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
  double t271;
  double t116;
  double t195;
  double t408;
  double t577;
  double t629;
  double t646;
  double t340;
  double t923;
  double t925;
  double t942;
  double t1205;
  double t1249;
  double t1478;
  double t1607;
  double t1645;
  double t1766;
  double t597;
  double t688;
  double t818;
  double t1905;
  double t2674;
  double t2782;
  double t2829;
  double t3012;
  double t3430;
  double t3541;
  double t181;
  double t4117;
  double t4195;
  double t4385;
  double t2071;
  double t2101;
  double t4873;
  double t4893;
  double t4961;
  double t3595;
  double t3671;
  double t3717;
  double t5506;
  double t5520;
  double t5501;
  double t5546;
  double t5571;
  double t5584;
  double t5611;
  double t5618;
  double t5639;
  double t5643;
  double t5694;
  double t5696;
  double t5716;
  double t5717;
  double t5721;
  double t5776;
  double t5818;
  double t5749;
  double t5848;
  double t5854;
  double t5856;
  double t5819;
  double t5820;
  double t5835;
  double t5448;
  double t5451;
  double t5724;
  double t5912;
  double t5918;
  double t5922;
  double t6204;
  double t5925;
  double t5933;
  double t5975;
  double t5983;
  double t6168;
  double t6171;
  double t6193;
  double t6097;
  double t6104;
  double t6109;
  double t6124;
  double t6160;
  double t6852;
  double t6896;
  double t6798;
  double t6804;
  double t6817;
  double t6906;
  double t6918;
  double t6953;
  double t6386;
  double t6387;
  double t6478;
  double t6841;
  double t6899;
  double t6903;
  double t6485;
  double t6494;
  double t6523;
  double t6602;
  double t7146;
  double t7166;
  double t7219;
  double t7220;
  double t7249;
  double t7263;
  double t7273;
  double t7298;
  double t7310;
  double t8017;
  double t8037;
  double t8038;
  double t8076;
  double t8095;
  double t8117;
  double t8153;
  double t5310;
  double t5342;
  double t5343;
  double t5350;
  double t5362;
  double t5388;
  double t5409;
  double t5425;
  double t5446;
  double t6200;
  double t6480;
  double t9140;
  double t9142;
  double t9146;
  double t9115;
  double t6904;
  double t9164;
  double t9201;
  double t9207;
  double t9212;
  double t6984;
  t271 = Cos(var1[3]);
  t116 = Cos(var1[4]);
  t195 = Sin(var1[3]);
  t408 = Cos(var1[5]);
  t577 = Sin(var1[13]);
  t629 = Cos(var1[13]);
  t646 = Sin(var1[5]);
  t340 = Sin(var1[4]);
  t923 = -1.*t408*t577;
  t925 = -1.*t629*t646;
  t942 = t923 + t925;
  t1205 = -1.*t195*t942;
  t1249 = t629*t408;
  t1478 = -1.*t577*t646;
  t1607 = t1249 + t1478;
  t1645 = t271*t340*t1607;
  t1766 = t1205 + t1645;
  t597 = t408*t577;
  t688 = t629*t646;
  t818 = 0. + t597 + t688;
  t1905 = 0. + t1249 + t1478;
  t2674 = t271*t340*t942;
  t2782 = -1.*t629*t408;
  t2829 = t577*t646;
  t3012 = t2782 + t2829;
  t3430 = -1.*t195*t3012;
  t3541 = t2674 + t3430;
  t181 = 0. + t116;
  t4117 = t271*t942;
  t4195 = t195*t340*t1607;
  t4385 = t4117 + t4195;
  t2071 = t340*t818;
  t2101 = 0. + t2071;
  t4873 = t195*t340*t942;
  t4893 = t271*t3012;
  t4961 = t4873 + t4893;
  t3595 = 0. + t923 + t925;
  t3671 = t340*t1905;
  t3717 = 0. + t3671;
  t5506 = -1.*t629;
  t5520 = 1. + t5506;
  t5501 = 0.05485*t340;
  t5546 = 0.07996*t5520;
  t5571 = 0.09786*t629;
  t5584 = -0.00009999999999998899*t577;
  t5611 = 0. + t5546 + t5571 + t5584;
  t5618 = t408*t5611;
  t5639 = -0.135*t5520;
  t5643 = -0.1351*t629;
  t5694 = -0.0179*t577;
  t5696 = 0. + t5639 + t5643 + t5694;
  t5716 = t5696*t646;
  t5717 = 0. + t5618 + t5716;
  t5721 = t116*t5717;
  t5776 = t116*t818;
  t5818 = 0. + t5776;
  t5749 = 0. + t5501 + t5721;
  t5848 = -0.05485*t116;
  t5854 = t340*t5717;
  t5856 = 0. + t5848 + t5854;
  t5819 = 0.05485*t116;
  t5820 = -1.*t340*t5717;
  t5835 = t5819 + t5820;
  t5448 = t116*t1905;
  t5451 = 0. + t5448;
  t5724 = t5501 + t5721;
  t5912 = t408*t5696;
  t5918 = -1.*t5611*t646;
  t5922 = 0. + t5912 + t5918;
  t6204 = t5912 + t5918;
  t5925 = -1.*t5922*t1905;
  t5933 = -1.*t5818*t5749;
  t5975 = -1.*t2101*t5856;
  t5983 = t5925 + t5933 + t5975;
  t6168 = -1.*t408*t5611;
  t6171 = -1.*t5696*t646;
  t6193 = t6168 + t6171;
  t6097 = t3595*t5922;
  t6104 = t5749*t5451;
  t6109 = t5856*t3717;
  t6124 = t6097 + t6104 + t6109;
  t6160 = -1.*t942*t5922;
  t6852 = -0.00009999999999998899*t629;
  t6896 = t6852 + t5694;
  t6798 = -0.0179*t629;
  t6804 = 0.00009999999999998899*t577;
  t6817 = t6798 + t6804;
  t6906 = t408*t6896;
  t6918 = t6817*t646;
  t6953 = t6906 + t6918;
  t6386 = -1.*t116*t1607*t5749;
  t6387 = -1.*t340*t1607*t5856;
  t6478 = t116*t942*t5983;
  t6841 = t408*t6817;
  t6899 = -1.*t6896*t646;
  t6903 = t6841 + t6899;
  t6485 = t5922*t3012;
  t6494 = t116*t942*t5749;
  t6523 = t340*t942*t5856;
  t6602 = t116*t1607*t6124;
  t7146 = -1.*t340;
  t7166 = 0. + t7146;
  t7219 = t7166*t5749;
  t7220 = t181*t5856;
  t7249 = 0. + t7219 + t7220;
  t7263 = t116*t942*t7249;
  t7273 = -1.*t5922*t3012;
  t7298 = -1.*t116*t942*t5749;
  t7310 = -1.*t340*t942*t5856;
  t8017 = -1.*t7166*t5749;
  t8037 = -1.*t181*t5856;
  t8038 = 0. + t8017 + t8037;
  t8076 = t116*t1607*t8038;
  t8095 = t942*t5922;
  t8117 = t116*t1607*t5749;
  t8153 = t340*t1607*t5856;
  t5310 = -1.*var2[4]*t116;
  t5342 = -1.*var2[4]*t340*t818;
  t5343 = var2[13]*t116*t1607;
  t5350 = var2[5]*t116*t1607;
  t5362 = t5342 + t5343 + t5350;
  t5388 = var2[13]*t116*t942;
  t5409 = var2[5]*t116*t942;
  t5425 = -1.*var2[4]*t340*t1905;
  t5446 = t5388 + t5409 + t5425;
  t6200 = -1.*t6193*t1905;
  t6480 = t3595*t6193;
  t9140 = t5717*t1905;
  t9142 = 0. + t6097 + t9140;
  t9146 = t942*t9142;
  t9115 = -1.*t5717*t1607;
  t6904 = -1.*t6903*t1905;
  t9164 = -1.*t818*t5717;
  t9201 = 0. + t9164 + t5925;
  t9207 = t3012*t9201;
  t9212 = t942*t5717;
  t6984 = t3595*t6903;
  p_output1[0]=-1.*t181*t195*var2[3] - 1.*t271*t340*var2[4];
  p_output1[1]=(-1.*t195*t2101 - 1.*t1905*t271)*var2[3] + t116*t271*t818*var2[4] + t1766*var2[5] + t1766*var2[13];
  p_output1[2]=(-1.*t271*t3595 - 1.*t195*t3717)*var2[3] + t116*t1905*t271*var2[4] + t3541*var2[5] + t3541*var2[13];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t181*t271*var2[3] - 1.*t195*t340*var2[4];
  p_output1[7]=(-1.*t1905*t195 + t2101*t271)*var2[3] + t116*t195*t818*var2[4] + t4385*var2[5] + t4385*var2[13];
  p_output1[8]=(-1.*t195*t3595 + t271*t3717)*var2[3] + t116*t1905*t195*var2[4] + t4961*var2[5] + t4961*var2[13];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5310;
  p_output1[13]=t5362;
  p_output1[14]=t5446;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t5818*(t3717*t5724 - 1.*t1905*t340*t5749 + t5451*t5835 + t116*t1905*t5856) - 1.*t1905*t340*t5983 - 1.*t340*t6124*t818 + t5451*(-1.*t2101*t5724 - 1.*t5818*t5835 + t340*t5749*t818 - 1.*t116*t5856*t818))*var2[4] + (t5451*(t6160 + t6200 - 1.*t2101*t340*t6204 - 1.*t116*t5818*t6204 + t6386 + t6387) + t6478 + t5818*(t340*t3717*t6204 + t116*t5451*t6204 + t6480 + t6485 + t6494 + t6523) + t6602)*var2[5] + (t6478 + t6602 + t5451*(t6160 + t6386 + t6387 + t6904 - 1.*t2101*t340*t6953 - 1.*t116*t5818*t6953) + t5818*(t6485 + t6494 + t6523 + t340*t3717*t6953 + t116*t5451*t6953 + t6984))*var2[13];
  p_output1[19]=(-1.*t116*(-1.*t5451*t5749 - 1.*t3717*t5856 - 1.*t3595*t5922) + (-1.*t3717*t5724 + t1905*t340*t5749 - 1.*t5451*t5835 - 1.*t116*t1905*t5856)*t7166 + t5451*(t181*t5724 - 1.*t116*t5749 - 1.*t340*t5856 + t5835*t7166) - 1.*t1905*t340*t7249)*var2[4] + (t5451*(t181*t340*t6204 + t116*t6204*t7166) + t7263 + t7166*(-1.*t3595*t6193 - 1.*t340*t3717*t6204 - 1.*t116*t5451*t6204 + t7273 + t7298 + t7310))*var2[5] + (t5451*(t181*t340*t6953 + t116*t6953*t7166) + t7263 + t7166*(-1.*t3595*t6903 - 1.*t340*t3717*t6953 - 1.*t116*t5451*t6953 + t7273 + t7298 + t7310))*var2[13];
  p_output1[20]=(-1.*t116*(t5749*t5818 + t2101*t5856 + t1905*t5922) + t5818*(-1.*t181*t5724 + t116*t5749 + t340*t5856 - 1.*t5835*t7166) - 1.*t340*t8038*t818 + t7166*(t2101*t5724 + t5818*t5835 - 1.*t340*t5749*t818 + t116*t5856*t818))*var2[4] + (t5818*(-1.*t181*t340*t6204 - 1.*t116*t6204*t7166) + t8076 + t7166*(t1905*t6193 + t2101*t340*t6204 + t116*t5818*t6204 + t8095 + t8117 + t8153))*var2[5] + (t5818*(-1.*t181*t340*t6953 - 1.*t116*t6953*t7166) + t8076 + t7166*(t1905*t6903 + t2101*t340*t6953 + t116*t5818*t6953 + t8095 + t8117 + t8153))*var2[13];
  p_output1[21]=t5310;
  p_output1[22]=t5362;
  p_output1[23]=t5446;
  p_output1[24]=(t3595*(t6160 + t6200 - 1.*t6204*t818 + t9115) + t9146 + t9207 + t1905*(t1905*t6204 + t6480 + t6485 + t9212))*var2[5] + (t3595*(t6160 + t6904 - 1.*t6953*t818 + t9115) + t9146 + t9207 + t1905*(t6485 + t1905*t6953 + t6984 + t9212))*var2[13];
  p_output1[25]=-0.05485*t3012*var2[5] - 0.05485*t3012*var2[13];
  p_output1[26]=0.05485*t942*var2[5] + 0.05485*t942*var2[13];
  p_output1[27]=0;
  p_output1[28]=t942*var2[5] + t942*var2[13];
  p_output1[29]=t3012*var2[5] + t3012*var2[13];
  p_output1[30]=0;
  p_output1[31]=(t5611*t577 + t5696*t629 + t577*t6817 - 1.*t629*t6896)*var2[13];
  p_output1[32]=(-1.*t5696*t577 + t5611*t629 + t629*t6817 + t577*t6896)*var2[13];
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



void dJb_RightPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
