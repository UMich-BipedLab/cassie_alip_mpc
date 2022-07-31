/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:55 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_LeftShin_src.h"

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
  double t599;
  double t656;
  double t443;
  double t907;
  double t289;
  double t1142;
  double t1211;
  double t1220;
  double t654;
  double t940;
  double t951;
  double t1274;
  double t1105;
  double t1276;
  double t1308;
  double t1736;
  double t1634;
  double t1637;
  double t1654;
  double t1630;
  double t1805;
  double t1807;
  double t1826;
  double t33;
  double t110;
  double t1527;
  double t1538;
  double t2057;
  double t2111;
  double t2117;
  double t2141;
  double t2150;
  double t1949;
  double t2264;
  double t2272;
  double t2327;
  double t2425;
  double t2428;
  double t1346;
  double t1374;
  double t1503;
  double t1715;
  double t1871;
  double t1906;
  double t1915;
  double t1973;
  double t1974;
  double t1976;
  double t1993;
  double t2005;
  double t2041;
  double t2054;
  double t2185;
  double t2190;
  double t2261;
  double t2348;
  double t2442;
  double t2446;
  double t2463;
  double t2489;
  double t2491;
  double t2493;
  double t2540;
  double t2559;
  double t2579;
  double t2607;
  double t2733;
  double t2825;
  double t3623;
  double t3636;
  double t3641;
  double t3738;
  double t3757;
  double t3840;
  double t4094;
  double t4174;
  double t4309;
  double t4340;
  double t4475;
  double t4478;
  double t4492;
  double t4638;
  double t4728;
  double t4729;
  double t4750;
  double t4810;
  double t2867;
  double t2886;
  double t3108;
  double t3354;
  double t5992;
  double t6014;
  double t6036;
  double t6038;
  double t6508;
  double t6549;
  double t6553;
  double t6585;
  double t6012;
  double t6115;
  double t6145;
  double t6161;
  double t6299;
  double t6321;
  double t6332;
  double t6364;
  double t6369;
  double t6509;
  double t6586;
  double t6598;
  double t6600;
  double t6603;
  double t6644;
  double t6659;
  double t6668;
  double t6673;
  double t6814;
  double t6815;
  double t6817;
  double t6820;
  double t6822;
  double t6825;
  double t6826;
  double t6827;
  double t6847;
  double t6853;
  double t6887;
  double t6889;
  double t6909;
  double t6916;
  double t6920;
  double t6922;
  double t6936;
  double t6937;
  double t6941;
  double t6946;
  double t6947;
  double t6983;
  double t6986;
  double t6987;
  double t6990;
  double t6991;
  double t6995;
  double t6997;
  double t7050;
  double t7053;
  double t7056;
  double t7044;
  double t7069;
  double t7070;
  double t7071;
  double t7073;
  double t7077;
  double t7082;
  double t7111;
  double t7117;
  double t7129;
  double t7134;
  double t7136;
  double t7138;
  double t7140;
  double t7142;
  double t7143;
  double t7047;
  double t7066;
  double t7067;
  double t7072;
  double t7087;
  double t7088;
  double t7089;
  double t7090;
  double t7091;
  double t7093;
  double t7094;
  double t7098;
  double t7102;
  double t7103;
  double t7107;
  double t7126;
  double t7128;
  double t7130;
  double t7139;
  double t7145;
  double t7146;
  double t7148;
  double t7150;
  double t7151;
  double t7153;
  double t7158;
  double t7159;
  double t7161;
  double t7163;
  double t7167;
  double t7179;
  double t7187;
  double t7188;
  double t7174;
  double t7194;
  double t7195;
  double t7196;
  double t7178;
  double t7189;
  double t7190;
  double t7205;
  double t7206;
  double t7208;
  double t7212;
  double t7215;
  double t7218;
  double t7234;
  double t7235;
  double t7239;
  double t7245;
  double t7246;
  double t7247;
  double t7249;
  double t7250;
  double t7252;
  double t7255;
  double t7256;
  double t7257;
  double t7193;
  double t7203;
  double t7204;
  double t7210;
  double t7219;
  double t7220;
  double t7221;
  double t7223;
  double t7224;
  double t7226;
  double t7227;
  double t7229;
  double t7230;
  double t7231;
  double t7232;
  double t7240;
  double t7244;
  double t7248;
  double t7254;
  double t7259;
  double t7260;
  double t7262;
  double t7264;
  double t7265;
  double t7271;
  double t7272;
  double t7273;
  double t7274;
  double t7275;
  double t7276;
  double t7233;
  double t7278;
  double t7281;
  double t7283;
  double t7284;
  double t7285;
  t599 = Cos(var1[10]);
  t656 = Sin(var1[9]);
  t443 = Cos(var1[9]);
  t907 = Sin(var1[10]);
  t289 = Cos(var1[8]);
  t1142 = t599*t656;
  t1211 = t443*t907;
  t1220 = 0. + t1142 + t1211;
  t654 = t443*t599;
  t940 = -1.*t656*t907;
  t951 = 0. + t654 + t940;
  t1274 = Sin(var1[8]);
  t1105 = t289*t951;
  t1276 = -1.*t1220*t1274;
  t1308 = 0. + t1105 + t1276;
  t1736 = Cos(var1[6]);
  t1634 = t289*t1220;
  t1637 = t951*t1274;
  t1654 = 0. + t1634 + t1637;
  t1630 = Sin(var1[6]);
  t1805 = Sin(var1[7]);
  t1807 = t1805*t1308;
  t1826 = 0. + t1807;
  t33 = Cos(var1[4]);
  t110 = Cos(var1[7]);
  t1527 = Sin(var1[4]);
  t1538 = Sin(var1[5]);
  t2057 = -1.*t443*t599;
  t2111 = t656*t907;
  t2117 = 0. + t2057 + t2111;
  t2141 = -1.*t2117*t1274;
  t2150 = 0. + t1634 + t2141;
  t1949 = Cos(var1[5]);
  t2264 = t289*t2117;
  t2272 = t1220*t1274;
  t2327 = 0. + t2264 + t2272;
  t2425 = t1805*t2150;
  t2428 = 0. + t2425;
  t1346 = t110*t1308;
  t1374 = 0. + t1346;
  t1503 = -1.*t33*t1374;
  t1715 = -1.*t1630*t1654;
  t1871 = t1736*t1826;
  t1906 = 0. + t1715 + t1871;
  t1915 = t1538*t1906;
  t1973 = t1736*t1654;
  t1974 = t1630*t1826;
  t1976 = 0. + t1973 + t1974;
  t1993 = t1949*t1976;
  t2005 = 0. + t1915 + t1993;
  t2041 = -1.*t1527*t2005;
  t2054 = t1503 + t2041;
  t2185 = t110*t2150;
  t2190 = 0. + t2185;
  t2261 = -1.*t33*t2190;
  t2348 = -1.*t1630*t2327;
  t2442 = t1736*t2428;
  t2446 = 0. + t2348 + t2442;
  t2463 = t1538*t2446;
  t2489 = t1736*t2327;
  t2491 = t1630*t2428;
  t2493 = 0. + t2489 + t2491;
  t2540 = t1949*t2493;
  t2559 = 0. + t2463 + t2540;
  t2579 = -1.*t1527*t2559;
  t2607 = t2261 + t2579;
  t2733 = -1.*t110;
  t2825 = 0. + t2733;
  t3623 = -1.*t1538*t1906;
  t3636 = -1.*t1949*t1976;
  t3641 = t3623 + t3636;
  t3738 = var2[4]*t3641;
  t3757 = t1949*t1906;
  t3840 = -1.*t1538*t1976;
  t4094 = t3757 + t3840;
  t4174 = var2[3]*t33*t4094;
  t4309 = t3738 + t4174;
  t4340 = -1.*t1538*t2446;
  t4475 = -1.*t1949*t2493;
  t4478 = t4340 + t4475;
  t4492 = var2[4]*t4478;
  t4638 = t1949*t2446;
  t4728 = -1.*t1538*t2493;
  t4729 = t4638 + t4728;
  t4750 = var2[3]*t33*t4729;
  t4810 = t4492 + t4750;
  t2867 = t1736*t2825;
  t2886 = 0. + t2867;
  t3108 = t2825*t1630;
  t3354 = 0. + t3108;
  t5992 = t1715 + t1871;
  t6014 = -1.*t1736*t1654;
  t6036 = -1.*t1630*t1826;
  t6038 = t6014 + t6036;
  t6508 = t2348 + t2442;
  t6549 = -1.*t1736*t2327;
  t6553 = -1.*t1630*t2428;
  t6585 = t6549 + t6553;
  t6012 = -1.*t1538*t5992;
  t6115 = t1949*t6038;
  t6145 = t6012 + t6115;
  t6161 = var2[4]*t6145;
  t6299 = t1949*t5992;
  t6321 = t1538*t6038;
  t6332 = t6299 + t6321;
  t6364 = var2[3]*t33*t6332;
  t6369 = t6161 + t6364;
  t6509 = -1.*t1538*t6508;
  t6586 = t1949*t6585;
  t6598 = t6509 + t6586;
  t6600 = var2[4]*t6598;
  t6603 = t1949*t6508;
  t6644 = t1538*t6585;
  t6659 = t6603 + t6644;
  t6668 = var2[3]*t33*t6659;
  t6673 = t6600 + t6668;
  t6814 = -1.*var2[5]*t1805*t1308;
  t6815 = -1.*var2[6]*t1805*t1308;
  t6817 = t1949*t1736*t110*t1308;
  t6820 = -1.*t110*t1538*t1630*t1308;
  t6822 = t6817 + t6820;
  t6825 = var2[4]*t6822;
  t6826 = t1527*t1805*t1308;
  t6827 = t1736*t110*t1538*t1308;
  t6847 = t1949*t110*t1630*t1308;
  t6853 = t6827 + t6847;
  t6887 = t33*t6853;
  t6889 = t6826 + t6887;
  t6909 = var2[3]*t6889;
  t6916 = t6814 + t6815 + t6825 + t6909;
  t6920 = -1.*var2[5]*t1805*t2150;
  t6922 = -1.*var2[6]*t1805*t2150;
  t6936 = t1949*t1736*t110*t2150;
  t6937 = -1.*t110*t1538*t1630*t2150;
  t6941 = t6936 + t6937;
  t6946 = var2[4]*t6941;
  t6947 = t1527*t1805*t2150;
  t6983 = t1736*t110*t1538*t2150;
  t6986 = t1949*t110*t1630*t2150;
  t6987 = t6983 + t6986;
  t6990 = t33*t6987;
  t6991 = t6947 + t6990;
  t6995 = var2[3]*t6991;
  t6997 = t6920 + t6922 + t6946 + t6995;
  t7050 = -1.*t289*t1220;
  t7053 = -1.*t951*t1274;
  t7056 = t7050 + t7053;
  t7044 = t1105 + t1276;
  t7069 = -1.*t1630*t7044;
  t7070 = t1736*t1805*t7056;
  t7071 = t7069 + t7070;
  t7073 = t1736*t7044;
  t7077 = t1630*t1805*t7056;
  t7082 = t7073 + t7077;
  t7111 = -1.*t289*t2117;
  t7117 = t7111 + t1276;
  t7129 = t1634 + t2141;
  t7134 = t1630*t1805*t7117;
  t7136 = t1736*t7129;
  t7138 = t7134 + t7136;
  t7140 = t1736*t1805*t7117;
  t7142 = -1.*t1630*t7129;
  t7143 = t7140 + t7142;
  t7047 = var2[7]*t7044;
  t7066 = var2[5]*t110*t7056;
  t7067 = var2[6]*t110*t7056;
  t7072 = t1949*t7071;
  t7087 = -1.*t1538*t7082;
  t7088 = t7072 + t7087;
  t7089 = var2[4]*t7088;
  t7090 = -1.*t110*t1527*t7056;
  t7091 = t1538*t7071;
  t7093 = t1949*t7082;
  t7094 = t7091 + t7093;
  t7098 = t33*t7094;
  t7102 = t7090 + t7098;
  t7103 = var2[3]*t7102;
  t7107 = t7047 + t7066 + t7067 + t7089 + t7103;
  t7126 = var2[5]*t110*t7117;
  t7128 = var2[6]*t110*t7117;
  t7130 = var2[7]*t7129;
  t7139 = -1.*t1538*t7138;
  t7145 = t1949*t7143;
  t7146 = t7139 + t7145;
  t7148 = var2[4]*t7146;
  t7150 = -1.*t110*t1527*t7117;
  t7151 = t1949*t7138;
  t7153 = t1538*t7143;
  t7158 = t7151 + t7153;
  t7159 = t33*t7158;
  t7161 = t7150 + t7159;
  t7163 = var2[3]*t7161;
  t7167 = t7126 + t7128 + t7130 + t7148 + t7163;
  t7179 = -1.*t599*t656;
  t7187 = -1.*t443*t907;
  t7188 = t7179 + t7187;
  t7174 = t654 + t940;
  t7194 = t289*t7188;
  t7195 = -1.*t7174*t1274;
  t7196 = t7194 + t7195;
  t7178 = t289*t7174;
  t7189 = t7188*t1274;
  t7190 = t7178 + t7189;
  t7205 = -1.*t1630*t7190;
  t7206 = t1736*t1805*t7196;
  t7208 = t7205 + t7206;
  t7212 = t1736*t7190;
  t7215 = t1630*t1805*t7196;
  t7218 = t7212 + t7215;
  t7234 = t1142 + t1211;
  t7235 = -1.*t7234*t1274;
  t7239 = t7178 + t7235;
  t7245 = t289*t7234;
  t7246 = t7174*t1274;
  t7247 = t7245 + t7246;
  t7249 = t1630*t1805*t7239;
  t7250 = t1736*t7247;
  t7252 = t7249 + t7250;
  t7255 = t1736*t1805*t7239;
  t7256 = -1.*t1630*t7247;
  t7257 = t7255 + t7256;
  t7193 = var2[7]*t7190;
  t7203 = var2[5]*t110*t7196;
  t7204 = var2[6]*t110*t7196;
  t7210 = t1949*t7208;
  t7219 = -1.*t1538*t7218;
  t7220 = t7210 + t7219;
  t7221 = var2[4]*t7220;
  t7223 = -1.*t110*t1527*t7196;
  t7224 = t1538*t7208;
  t7226 = t1949*t7218;
  t7227 = t7224 + t7226;
  t7229 = t33*t7227;
  t7230 = t7223 + t7229;
  t7231 = var2[3]*t7230;
  t7232 = t7193 + t7203 + t7204 + t7221 + t7231;
  t7240 = var2[5]*t110*t7239;
  t7244 = var2[6]*t110*t7239;
  t7248 = var2[7]*t7247;
  t7254 = -1.*t1538*t7252;
  t7259 = t1949*t7257;
  t7260 = t7254 + t7259;
  t7262 = var2[4]*t7260;
  t7264 = -1.*t110*t1527*t7239;
  t7265 = t1949*t7252;
  t7271 = t1538*t7257;
  t7272 = t7265 + t7271;
  t7273 = t33*t7272;
  t7274 = t7264 + t7273;
  t7275 = var2[3]*t7274;
  t7276 = t7240 + t7244 + t7248 + t7262 + t7275;
  t7233 = 0.000334*t7232;
  t7278 = 0.00036*t7276;
  t7281 = t7233 + t7278;
  t7283 = 0.0341*t7232;
  t7284 = 0.000334*t7276;
  t7285 = t7283 + t7284;
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
  p_output1[12]=0.000334*t2054*var2[3] + 0.00036*t2607*var2[3];
  p_output1[13]=0.0341*t2054*var2[3] + 0.000334*t2607*var2[3];
  p_output1[14]=0.0341*(-1.*(0. + t1805)*t33 - 1.*t1527*(0. + t1538*t2886 + t1949*t3354))*var2[3];
  p_output1[15]=0.000334*t4309 + 0.00036*t4810;
  p_output1[16]=0.0341*t4309 + 0.000334*t4810;
  p_output1[17]=0.0341*(t33*(t1949*t2886 - 1.*t1538*t3354)*var2[3] + (-1.*t1538*t2886 - 1.*t1949*t3354)*var2[4]);
  p_output1[18]=0.000334*t6369 + 0.00036*t6673;
  p_output1[19]=0.0341*t6369 + 0.000334*t6673;
  p_output1[20]=0.0341*((-1.*t1538*t1630*t2825 + t1736*t1949*t2825)*t33*var2[3] + (-1.*t1538*t1736*t2825 - 1.*t1630*t1949*t2825)*var2[4]);
  p_output1[21]=0.000334*t6916 + 0.00036*t6997;
  p_output1[22]=0.0341*t6916 + 0.000334*t6997;
  p_output1[23]=0.0341*((-1.*t110*t1527 + (t1538*t1736*t1805 + t1630*t1805*t1949)*t33)*var2[3] + (-1.*t1538*t1630*t1805 + t1736*t1805*t1949)*var2[4] + t110*var2[5] + t110*var2[6]);
  p_output1[24]=0.000334*t7107 + 0.00036*t7167;
  p_output1[25]=0.0341*t7107 + 0.000334*t7167;
  p_output1[26]=0;
  p_output1[27]=t7281;
  p_output1[28]=t7285;
  p_output1[29]=0;
  p_output1[30]=t7281;
  p_output1[31]=t7285;
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



void Jq_AMBody_LeftShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
