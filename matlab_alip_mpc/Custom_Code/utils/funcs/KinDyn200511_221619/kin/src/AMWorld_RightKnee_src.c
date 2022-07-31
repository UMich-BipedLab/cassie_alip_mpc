/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:17 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_RightKnee_src.h"

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
  double t20;
  double t1875;
  double t2588;
  double t1903;
  double t2704;
  double t496;
  double t4531;
  double t3241;
  double t1351;
  double t4695;
  double t5528;
  double t1857;
  double t188;
  double t5883;
  double t6164;
  double t5548;
  double t5634;
  double t6634;
  double t6680;
  double t6629;
  double t6682;
  double t6765;
  double t6767;
  double t6786;
  double t6799;
  double t6803;
  double t6653;
  double t6698;
  double t6742;
  double t6828;
  double t6831;
  double t6854;
  double t6857;
  double t6864;
  double t6813;
  double t6835;
  double t6839;
  double t6929;
  double t6930;
  double t6937;
  double t6945;
  double t6950;
  double t6972;
  double t6975;
  double t7000;
  double t7001;
  double t7002;
  double t6965;
  double t6978;
  double t6986;
  double t4538;
  double t4582;
  double t5771;
  double t6197;
  double t6399;
  double t6490;
  double t6501;
  double t6510;
  double t6518;
  double t6530;
  double t6563;
  double t6590;
  double t6598;
  double t6608;
  double t6760;
  double t6810;
  double t6811;
  double t6852;
  double t6866;
  double t6871;
  double t6874;
  double t6877;
  double t6878;
  double t6879;
  double t6888;
  double t6897;
  double t6903;
  double t6905;
  double t6914;
  double t6924;
  double t6951;
  double t6962;
  double t6996;
  double t7010;
  double t7013;
  double t7014;
  double t7016;
  double t7019;
  double t7022;
  double t7023;
  double t7027;
  double t7028;
  double t7031;
  double t7033;
  double t1928;
  double t2837;
  double t3223;
  double t3541;
  double t3858;
  double t4116;
  double t3231;
  double t4170;
  double t4251;
  double t7072;
  double t7075;
  double t7077;
  double t7085;
  double t7087;
  double t7089;
  double t7082;
  double t7093;
  double t7095;
  double t7102;
  double t7108;
  double t7110;
  double t6611;
  double t6919;
  double t7034;
  double t7046;
  double t7055;
  double t7059;
  double t7064;
  double t7065;
  double t7158;
  double t7164;
  double t7166;
  double t7175;
  double t7176;
  double t7177;
  double t7171;
  double t7178;
  double t7180;
  double t7187;
  double t7188;
  double t7191;
  double t7195;
  double t7196;
  double t7206;
  double t7126;
  double t7129;
  double t7135;
  double t7136;
  double t7193;
  double t7207;
  double t7208;
  double t7217;
  double t7225;
  double t7226;
  double t7244;
  double t7245;
  double t7246;
  double t7254;
  double t7255;
  double t7256;
  double t7258;
  double t7259;
  double t7260;
  double t7257;
  double t7261;
  double t7262;
  double t7266;
  double t7268;
  double t7269;
  t20 = Cos(var1[3]);
  t1875 = Cos(var1[5]);
  t2588 = Sin(var1[3]);
  t1903 = Sin(var1[4]);
  t2704 = Sin(var1[5]);
  t496 = Sin(var1[14]);
  t4531 = 0. + t496;
  t3241 = Cos(var1[13]);
  t1351 = Cos(var1[14]);
  t4695 = -1.*t1351;
  t5528 = 0. + t4695;
  t1857 = Sin(var1[13]);
  t188 = Cos(var1[4]);
  t5883 = t5528*t1857;
  t6164 = 0. + t5883;
  t5548 = t3241*t5528;
  t5634 = 0. + t5548;
  t6634 = Cos(var1[16]);
  t6680 = Sin(var1[15]);
  t6629 = Cos(var1[15]);
  t6682 = Sin(var1[16]);
  t6765 = t6634*t6680;
  t6767 = t6629*t6682;
  t6786 = 0. + t6765 + t6767;
  t6799 = t1351*t6786;
  t6803 = 0. + t6799;
  t6653 = -1.*t6629*t6634;
  t6698 = t6680*t6682;
  t6742 = 0. + t6653 + t6698;
  t6828 = t496*t6786;
  t6831 = 0. + t6828;
  t6854 = t3241*t6742;
  t6857 = t1857*t6831;
  t6864 = 0. + t6854 + t6857;
  t6813 = -1.*t1857*t6742;
  t6835 = t3241*t6831;
  t6839 = 0. + t6813 + t6835;
  t6929 = t6629*t6634;
  t6930 = -1.*t6680*t6682;
  t6937 = 0. + t6929 + t6930;
  t6945 = t1351*t6937;
  t6950 = 0. + t6945;
  t6972 = t496*t6937;
  t6975 = 0. + t6972;
  t7000 = t3241*t6786;
  t7001 = t1857*t6975;
  t7002 = 0. + t7000 + t7001;
  t6965 = -1.*t1857*t6786;
  t6978 = t3241*t6975;
  t6986 = 0. + t6965 + t6978;
  t4538 = var2[13]*t4531;
  t4582 = var2[5]*t4531;
  t5771 = t5634*t1875;
  t6197 = -1.*t6164*t2704;
  t6399 = 0. + t5771 + t6197;
  t6490 = var2[4]*t6399;
  t6501 = -1.*t4531*t1903;
  t6510 = t1875*t6164;
  t6518 = t5634*t2704;
  t6530 = 0. + t6510 + t6518;
  t6563 = t188*t6530;
  t6590 = 0. + t6501 + t6563;
  t6598 = var2[3]*t6590;
  t6608 = 0. + var2[15] + var2[16] + t4538 + t4582 + t6490 + t6598;
  t6760 = var2[14]*t6742;
  t6810 = var2[13]*t6803;
  t6811 = var2[5]*t6803;
  t6852 = t1875*t6839;
  t6866 = -1.*t6864*t2704;
  t6871 = 0. + t6852 + t6866;
  t6874 = var2[4]*t6871;
  t6877 = -1.*t6803*t1903;
  t6878 = t1875*t6864;
  t6879 = t6839*t2704;
  t6888 = 0. + t6878 + t6879;
  t6897 = t188*t6888;
  t6903 = 0. + t6877 + t6897;
  t6905 = var2[3]*t6903;
  t6914 = 0. + t6760 + t6810 + t6811 + t6874 + t6905;
  t6924 = var2[14]*t6786;
  t6951 = var2[13]*t6950;
  t6962 = var2[5]*t6950;
  t6996 = t1875*t6986;
  t7010 = -1.*t7002*t2704;
  t7013 = 0. + t6996 + t7010;
  t7014 = var2[4]*t7013;
  t7016 = -1.*t6950*t1903;
  t7019 = t1875*t7002;
  t7022 = t6986*t2704;
  t7023 = 0. + t7019 + t7022;
  t7027 = t188*t7023;
  t7028 = 0. + t7016 + t7027;
  t7031 = var2[3]*t7028;
  t7033 = 0. + t6924 + t6951 + t6962 + t7014 + t7031;
  t1928 = t20*t1875*t1903;
  t2837 = t2588*t2704;
  t3223 = t1928 + t2837;
  t3541 = -1.*t1875*t2588;
  t3858 = t20*t1903*t2704;
  t4116 = t3541 + t3858;
  t3231 = t1857*t3223;
  t4170 = t3241*t4116;
  t4251 = t3231 + t4170;
  t7072 = t3241*t3223;
  t7075 = -1.*t1857*t4116;
  t7077 = t7072 + t7075;
  t7085 = t1351*t20*t188;
  t7087 = t496*t4251;
  t7089 = t7085 + t7087;
  t7082 = t6680*t7077;
  t7093 = t6629*t7089;
  t7095 = t7082 + t7093;
  t7102 = t6629*t7077;
  t7108 = -1.*t6680*t7089;
  t7110 = t7102 + t7108;
  t6611 = 0.00334*t6608;
  t6919 = -3.e-6*t6914;
  t7034 = -1.e-6*t7033;
  t7046 = t6611 + t6919 + t7034;
  t7055 = -3.e-6*t6608;
  t7059 = 0.00216*t6914;
  t7064 = 0.000956*t7033;
  t7065 = t7055 + t7059 + t7064;
  t7158 = t1875*t2588*t1903;
  t7164 = -1.*t20*t2704;
  t7166 = t7158 + t7164;
  t7175 = t20*t1875;
  t7176 = t2588*t1903*t2704;
  t7177 = t7175 + t7176;
  t7171 = t1857*t7166;
  t7178 = t3241*t7177;
  t7180 = t7171 + t7178;
  t7187 = t3241*t7166;
  t7188 = -1.*t1857*t7177;
  t7191 = t7187 + t7188;
  t7195 = t1351*t188*t2588;
  t7196 = t496*t7180;
  t7206 = t7195 + t7196;
  t7126 = -1.e-6*t6608;
  t7129 = 0.000956*t6914;
  t7135 = 0.00144*t7033;
  t7136 = t7126 + t7129 + t7135;
  t7193 = t6680*t7191;
  t7207 = t6629*t7206;
  t7208 = t7193 + t7207;
  t7217 = t6629*t7191;
  t7225 = -1.*t6680*t7206;
  t7226 = t7217 + t7225;
  t7244 = t188*t1875*t1857;
  t7245 = t3241*t188*t2704;
  t7246 = t7244 + t7245;
  t7254 = t3241*t188*t1875;
  t7255 = -1.*t188*t1857*t2704;
  t7256 = t7254 + t7255;
  t7258 = -1.*t1351*t1903;
  t7259 = t496*t7246;
  t7260 = t7258 + t7259;
  t7257 = t6680*t7256;
  t7261 = t6629*t7260;
  t7262 = t7257 + t7261;
  t7266 = t6629*t7256;
  t7268 = -1.*t6680*t7260;
  t7269 = t7266 + t7268;
  p_output1[0]=(-1.*t1351*t4251 + t188*t20*t496)*t7046 + t7065*(t6682*t7095 - 1.*t6634*t7110) + (t6634*t7095 + t6682*t7110)*t7136;
  p_output1[1]=t7046*(t188*t2588*t496 - 1.*t1351*t7180) + t7065*(t6682*t7208 - 1.*t6634*t7226) + t7136*(t6634*t7208 + t6682*t7226);
  p_output1[2]=t7046*(-1.*t1903*t496 - 1.*t1351*t7246) + t7065*(t6682*t7262 - 1.*t6634*t7269) + t7136*(t6634*t7262 + t6682*t7269);
}



void AMWorld_RightKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
