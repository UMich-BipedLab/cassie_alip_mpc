/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:53 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_LeftThigh_src.h"

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
  double t437;
  double t1274;
  double t357;
  double t976;
  double t978;
  double t1981;
  double t1277;
  double t395;
  double t769;
  double t2175;
  double t2338;
  double t2742;
  double t2749;
  double t4979;
  double t5239;
  double t5320;
  double t5321;
  double t530;
  double t719;
  double t970;
  double t1006;
  double t1065;
  double t1113;
  double t1136;
  double t1229;
  double t1549;
  double t1652;
  double t1732;
  double t1994;
  double t2057;
  double t2150;
  double t2609;
  double t2826;
  double t2897;
  double t3052;
  double t3259;
  double t3294;
  double t3469;
  double t3504;
  double t4040;
  double t4192;
  double t4379;
  double t4446;
  double t4597;
  double t4755;
  double t5252;
  double t5340;
  double t5379;
  double t5455;
  double t5463;
  double t5499;
  double t5569;
  double t5611;
  double t5685;
  double t5687;
  double t5708;
  double t5970;
  double t5975;
  double t5980;
  double t5992;
  double t6002;
  double t6005;
  double t6017;
  double t6022;
  double t6025;
  double t6044;
  double t6045;
  double t6047;
  double t6050;
  double t6081;
  double t6091;
  double t6098;
  double t6117;
  double t6118;
  double t6127;
  double t6134;
  double t6138;
  double t6139;
  double t6144;
  double t6152;
  double t6156;
  double t6157;
  double t6161;
  double t6282;
  double t6285;
  double t6306;
  double t6309;
  double t6377;
  double t6384;
  double t6385;
  double t6390;
  double t6242;
  double t6243;
  double t6247;
  double t6252;
  double t6257;
  double t6259;
  double t6261;
  double t6262;
  double t6275;
  double t6307;
  double t6311;
  double t6318;
  double t6335;
  double t6356;
  double t6359;
  double t6361;
  double t6362;
  double t6364;
  double t6380;
  double t6395;
  double t6397;
  double t6398;
  double t6406;
  double t6423;
  double t6428;
  double t6429;
  double t6433;
  double t6493;
  double t6498;
  double t6501;
  double t6502;
  double t6505;
  double t6506;
  double t6511;
  double t6521;
  double t6522;
  double t6529;
  double t6538;
  double t6549;
  double t6558;
  double t6560;
  double t6566;
  double t6568;
  double t6594;
  double t6597;
  double t6598;
  double t6600;
  double t6601;
  double t6604;
  double t6605;
  double t6611;
  double t6618;
  double t6620;
  double t6629;
  double t6631;
  double t6643;
  double t6647;
  double t6648;
  double t6659;
  double t6673;
  double t6678;
  double t6690;
  double t6692;
  double t6705;
  double t6731;
  double t6736;
  double t6737;
  double t6739;
  double t6751;
  double t6809;
  double t6810;
  double t6814;
  double t6827;
  double t6829;
  double t6834;
  double t6896;
  double t6898;
  double t6899;
  double t6918;
  double t6925;
  double t6935;
  double t6788;
  double t6791;
  double t6792;
  double t6822;
  double t6840;
  double t6844;
  double t6845;
  double t6848;
  double t6856;
  double t6860;
  double t6861;
  double t6864;
  double t6867;
  double t6869;
  double t6870;
  double t6874;
  double t6879;
  double t6891;
  double t6902;
  double t6947;
  double t6956;
  double t6960;
  double t6962;
  double t6965;
  double t6966;
  double t6969;
  double t6971;
  double t6973;
  double t6974;
  double t6979;
  t437 = Cos(var1[7]);
  t1274 = Cos(var1[4]);
  t357 = Sin(var1[4]);
  t976 = Cos(var1[5]);
  t978 = Sin(var1[6]);
  t1981 = Cos(var1[8]);
  t1277 = Sin(var1[7]);
  t395 = Cos(var1[6]);
  t769 = Sin(var1[5]);
  t2175 = t1981*t1277;
  t2338 = 0. + t2175;
  t2742 = Sin(var1[8]);
  t2749 = 0. + t2742;
  t4979 = -1.*t1981;
  t5239 = 0. + t4979;
  t5320 = t1277*t2742;
  t5321 = 0. + t5320;
  t530 = -1.*t395*t437;
  t719 = 0. + t530;
  t970 = t719*t769;
  t1006 = -1.*t437*t978;
  t1065 = 0. + t1006;
  t1113 = t976*t1065;
  t1136 = 0. + t970 + t1113;
  t1229 = -1.*t357*t1136;
  t1549 = 0. + t1277;
  t1652 = -1.*t1274*t1549;
  t1732 = t1229 + t1652;
  t1994 = t437*t1981;
  t2057 = 0. + t1994;
  t2150 = -1.*t1274*t2057;
  t2609 = t978*t2338;
  t2826 = t395*t2749;
  t2897 = 0. + t2609 + t2826;
  t3052 = t976*t2897;
  t3259 = t395*t2338;
  t3294 = -1.*t978*t2749;
  t3469 = 0. + t3259 + t3294;
  t3504 = t769*t3469;
  t4040 = 0. + t3052 + t3504;
  t4192 = -1.*t357*t4040;
  t4379 = t2150 + t4192;
  t4446 = t437*t2742;
  t4597 = 0. + t4446;
  t4755 = -1.*t1274*t4597;
  t5252 = -1.*t5239*t978;
  t5340 = t395*t5321;
  t5379 = 0. + t5252 + t5340;
  t5455 = t769*t5379;
  t5463 = t395*t5239;
  t5499 = t978*t5321;
  t5569 = 0. + t5463 + t5499;
  t5611 = t976*t5569;
  t5685 = 0. + t5455 + t5611;
  t5687 = -1.*t357*t5685;
  t5708 = t4755 + t5687;
  t5970 = -1.*t719*t769;
  t5975 = -1.*t976*t1065;
  t5980 = t5970 + t5975;
  t5992 = var2[4]*t5980;
  t6002 = t976*t719;
  t6005 = -1.*t769*t1065;
  t6017 = t6002 + t6005;
  t6022 = var2[3]*t1274*t6017;
  t6025 = t5992 + t6022;
  t6044 = -1.*t769*t2897;
  t6045 = t976*t3469;
  t6047 = t6044 + t6045;
  t6050 = var2[3]*t1274*t6047;
  t6081 = -1.*t976*t2897;
  t6091 = -1.*t769*t3469;
  t6098 = t6081 + t6091;
  t6117 = var2[4]*t6098;
  t6118 = t6050 + t6117;
  t6127 = -1.*t769*t5379;
  t6134 = -1.*t976*t5569;
  t6138 = t6127 + t6134;
  t6139 = var2[4]*t6138;
  t6144 = t976*t5379;
  t6152 = -1.*t769*t5569;
  t6156 = t6144 + t6152;
  t6157 = var2[3]*t1274*t6156;
  t6161 = t6139 + t6157;
  t6282 = -1.*t978*t2338;
  t6285 = -1.*t395*t2749;
  t6306 = t6282 + t6285;
  t6309 = t3259 + t3294;
  t6377 = t5252 + t5340;
  t6384 = -1.*t395*t5239;
  t6385 = -1.*t978*t5321;
  t6390 = t6384 + t6385;
  t6242 = t395*t437*t769;
  t6243 = t976*t437*t978;
  t6247 = t6242 + t6243;
  t6252 = var2[4]*t6247;
  t6257 = -1.*t976*t395*t437;
  t6259 = t437*t769*t978;
  t6261 = t6257 + t6259;
  t6262 = var2[3]*t1274*t6261;
  t6275 = t6252 + t6262;
  t6307 = t769*t6306;
  t6311 = t976*t6309;
  t6318 = t6307 + t6311;
  t6335 = var2[3]*t1274*t6318;
  t6356 = t976*t6306;
  t6359 = -1.*t769*t6309;
  t6361 = t6356 + t6359;
  t6362 = var2[4]*t6361;
  t6364 = t6335 + t6362;
  t6380 = -1.*t769*t6377;
  t6395 = t976*t6390;
  t6397 = t6380 + t6395;
  t6398 = var2[4]*t6397;
  t6406 = t976*t6377;
  t6423 = t769*t6390;
  t6428 = t6406 + t6423;
  t6429 = var2[3]*t1274*t6428;
  t6433 = t6398 + t6429;
  t6493 = t976*t395*t437*t1981;
  t6498 = -1.*t437*t1981*t769*t978;
  t6501 = t6493 + t6498;
  t6502 = var2[4]*t6501;
  t6505 = -1.*var2[5]*t1981*t1277;
  t6506 = -1.*var2[6]*t1981*t1277;
  t6511 = t395*t437*t1981*t769;
  t6521 = t976*t437*t1981*t978;
  t6522 = t6511 + t6521;
  t6529 = t1274*t6522;
  t6538 = t1981*t357*t1277;
  t6549 = t6529 + t6538;
  t6558 = var2[3]*t6549;
  t6560 = t6502 + t6505 + t6506 + t6558;
  t6566 = var2[5]*t437;
  t6568 = var2[6]*t437;
  t6594 = t976*t395*t1277;
  t6597 = -1.*t769*t978*t1277;
  t6598 = t6594 + t6597;
  t6600 = var2[4]*t6598;
  t6601 = -1.*t437*t357;
  t6604 = t395*t769*t1277;
  t6605 = t976*t978*t1277;
  t6611 = t6604 + t6605;
  t6618 = t1274*t6611;
  t6620 = t6601 + t6618;
  t6629 = var2[3]*t6620;
  t6631 = t6566 + t6568 + t6600 + t6629;
  t6643 = -1.*var2[5]*t1277*t2742;
  t6647 = -1.*var2[6]*t1277*t2742;
  t6648 = t976*t395*t437*t2742;
  t6659 = -1.*t437*t769*t978*t2742;
  t6673 = t6648 + t6659;
  t6678 = var2[4]*t6673;
  t6690 = t357*t1277*t2742;
  t6692 = t395*t437*t769*t2742;
  t6705 = t976*t437*t978*t2742;
  t6731 = t6692 + t6705;
  t6736 = t1274*t6731;
  t6737 = t6690 + t6736;
  t6739 = var2[3]*t6737;
  t6751 = t6643 + t6647 + t6678 + t6739;
  t6809 = t1981*t978*t1277;
  t6810 = t395*t2742;
  t6814 = t6809 + t6810;
  t6827 = t395*t1981*t1277;
  t6829 = -1.*t978*t2742;
  t6834 = t6827 + t6829;
  t6896 = -1.*t1981*t978;
  t6898 = -1.*t395*t1277*t2742;
  t6899 = t6896 + t6898;
  t6918 = t395*t1981;
  t6925 = -1.*t978*t1277*t2742;
  t6935 = t6918 + t6925;
  t6788 = var2[5]*t437*t1981;
  t6791 = var2[6]*t437*t1981;
  t6792 = var2[7]*t2742;
  t6822 = -1.*t769*t6814;
  t6840 = t976*t6834;
  t6844 = t6822 + t6840;
  t6845 = var2[4]*t6844;
  t6848 = -1.*t437*t1981*t357;
  t6856 = t976*t6814;
  t6860 = t769*t6834;
  t6861 = t6856 + t6860;
  t6864 = t1274*t6861;
  t6867 = t6848 + t6864;
  t6869 = var2[3]*t6867;
  t6870 = t6788 + t6791 + t6792 + t6845 + t6869;
  t6874 = var2[7]*t1981;
  t6879 = -1.*var2[5]*t437*t2742;
  t6891 = -1.*var2[6]*t437*t2742;
  t6902 = t976*t6899;
  t6947 = -1.*t769*t6935;
  t6956 = t6902 + t6947;
  t6960 = var2[4]*t6956;
  t6962 = t437*t357*t2742;
  t6965 = t769*t6899;
  t6966 = t976*t6935;
  t6969 = t6965 + t6966;
  t6971 = t1274*t6969;
  t6973 = t6962 + t6971;
  t6974 = var2[3]*t6973;
  t6979 = t6874 + t6879 + t6891 + t6960 + t6974;
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
  p_output1[12]=-0.0117*t1732*var2[3] + 0.000284*t4379*var2[3] + 0.018*t5708*var2[3];
  p_output1[13]=-0.000019*t1732*var2[3] + 0.0563*t4379*var2[3] + 0.000284*t5708*var2[3];
  p_output1[14]=0.0498*t1732*var2[3] - 0.000019*t4379*var2[3] - 0.0117*t5708*var2[3];
  p_output1[15]=-0.0117*t6025 + 0.000284*t6118 + 0.018*t6161;
  p_output1[16]=-0.000019*t6025 + 0.0563*t6118 + 0.000284*t6161;
  p_output1[17]=0.0498*t6025 - 0.000019*t6118 - 0.0117*t6161;
  p_output1[18]=-0.0117*t6275 + 0.000284*t6364 + 0.018*t6433;
  p_output1[19]=-0.000019*t6275 + 0.0563*t6364 + 0.000284*t6433;
  p_output1[20]=0.0498*t6275 - 0.000019*t6364 - 0.0117*t6433;
  p_output1[21]=0.000284*t6560 - 0.0117*t6631 + 0.018*t6751;
  p_output1[22]=0.0563*t6560 - 0.000019*t6631 + 0.000284*t6751;
  p_output1[23]=-0.000019*t6560 + 0.0498*t6631 - 0.0117*t6751;
  p_output1[24]=0.018*t6870 + 0.000284*t6979;
  p_output1[25]=0.000284*t6870 + 0.0563*t6979;
  p_output1[26]=-0.0117*t6870 - 0.000019*t6979;
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



void Jq_AMBody_LeftThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
