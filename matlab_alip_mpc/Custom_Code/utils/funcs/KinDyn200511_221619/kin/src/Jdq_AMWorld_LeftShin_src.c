/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:01 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jdq_AMWorld_LeftShin_src.h"

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
  double t842;
  double t516;
  double t899;
  double t688;
  double t970;
  double t1462;
  double t395;
  double t37;
  double t1517;
  double t1567;
  double t1357;
  double t1482;
  double t774;
  double t1023;
  double t1138;
  double t1225;
  double t1240;
  double t1329;
  double t1339;
  double t1418;
  double t1434;
  double t2203;
  double t2495;
  double t2539;
  double t2613;
  double t2266;
  double t2267;
  double t2312;
  double t2620;
  double t2728;
  double t2445;
  double t2653;
  double t2699;
  double t2121;
  double t2747;
  double t2828;
  double t2843;
  double t2941;
  double t2112;
  double t3270;
  double t3302;
  double t3350;
  double t3168;
  double t3169;
  double t3199;
  double t3239;
  double t3356;
  double t3392;
  double t3788;
  double t3800;
  double t3983;
  double t3996;
  double t4071;
  double t4274;
  double t4291;
  double t4301;
  double t4327;
  double t4407;
  double t4587;
  double t4592;
  double t4607;
  double t4622;
  double t4678;
  double t2727;
  double t2865;
  double t2907;
  double t2971;
  double t3011;
  double t3032;
  double t3429;
  double t3555;
  double t3575;
  double t3987;
  double t4100;
  double t4140;
  double t4158;
  double t4171;
  double t4203;
  double t4223;
  double t4224;
  double t4226;
  double t4249;
  double t4256;
  double t4422;
  double t4519;
  double t4539;
  double t4614;
  double t4682;
  double t4718;
  double t4760;
  double t4795;
  double t4801;
  double t4833;
  double t4860;
  double t4893;
  double t5004;
  double t5040;
  double t1572;
  double t1598;
  double t1646;
  double t1722;
  double t1731;
  double t1792;
  double t1849;
  double t1884;
  double t1964;
  double t1967;
  double t2033;
  double t5723;
  double t5725;
  double t5762;
  double t5836;
  double t5837;
  double t5853;
  double t5924;
  double t5928;
  double t5958;
  double t6083;
  double t6138;
  double t6141;
  double t6059;
  double t6061;
  double t6070;
  double t6074;
  double t6162;
  double t6176;
  double t6195;
  double t6204;
  double t6229;
  double t4257;
  double t5167;
  double t5181;
  double t6193;
  double t6241;
  double t6264;
  double t6276;
  double t6366;
  double t6494;
  double t5357;
  double t5473;
  double t5562;
  double t6891;
  double t6924;
  double t7001;
  double t7078;
  double t7079;
  double t7083;
  double t7029;
  double t7031;
  double t7051;
  double t7072;
  double t7124;
  double t7137;
  double t7154;
  double t7162;
  double t7165;
  double t7141;
  double t7173;
  double t7199;
  double t7216;
  double t7226;
  double t7229;
  double t1452;
  double t1499;
  double t1512;
  double t2914;
  double t3052;
  double t3073;
  double t5294;
  double t5327;
  double t5350;
  double t7358;
  double t7364;
  double t7367;
  double t7379;
  double t7386;
  double t7388;
  double t7332;
  double t7338;
  double t7344;
  double t5966;
  double t5970;
  double t5997;
  double t6267;
  double t6504;
  double t6648;
  double t7371;
  double t7402;
  double t7405;
  double t6709;
  double t6771;
  double t6774;
  double t7421;
  double t7422;
  double t7424;
  double t7014;
  double t7018;
  double t7024;
  double t7208;
  double t7248;
  double t7261;
  double t7276;
  double t7278;
  double t7285;
  double t7471;
  double t7486;
  double t7487;
  double t7501;
  double t7504;
  double t7507;
  double t7465;
  double t7495;
  double t7509;
  double t7511;
  double t7513;
  double t7514;
  double t7517;
  double t7518;
  double t7523;
  double t7531;
  double t7540;
  double t7542;
  double t7552;
  double t7563;
  double t7570;
  double t7579;
  double t7585;
  double t7589;
  double t7637;
  double t7644;
  double t7645;
  t842 = Cos(var1[3]);
  t516 = Cos(var1[5]);
  t899 = Sin(var1[4]);
  t688 = Sin(var1[3]);
  t970 = Sin(var1[5]);
  t1462 = Cos(var1[4]);
  t395 = Cos(var1[6]);
  t37 = Cos(var1[7]);
  t1517 = -1.*t37;
  t1567 = 0. + t1517;
  t1357 = Sin(var1[6]);
  t1482 = Sin(var1[7]);
  t774 = -1.*t516*t688;
  t1023 = t842*t899*t970;
  t1138 = t774 + t1023;
  t1225 = t395*t1138;
  t1240 = t842*t516*t899;
  t1329 = t688*t970;
  t1339 = t1240 + t1329;
  t1418 = t1339*t1357;
  t1434 = t1225 + t1418;
  t2203 = Cos(var1[8]);
  t2495 = t395*t1339;
  t2539 = -1.*t1138*t1357;
  t2613 = t2495 + t2539;
  t2266 = t842*t1462*t37;
  t2267 = t1434*t1482;
  t2312 = t2266 + t2267;
  t2620 = Sin(var1[8]);
  t2728 = Cos(var1[9]);
  t2445 = t2203*t2312;
  t2653 = t2613*t2620;
  t2699 = t2445 + t2653;
  t2121 = Sin(var1[9]);
  t2747 = t2203*t2613;
  t2828 = -1.*t2312*t2620;
  t2843 = t2747 + t2828;
  t2941 = Cos(var1[10]);
  t2112 = Sin(var1[10]);
  t3270 = t2941*t2121;
  t3302 = t2728*t2112;
  t3350 = 0. + t3270 + t3302;
  t3168 = t2728*t2941;
  t3169 = -1.*t2121*t2112;
  t3199 = 0. + t3168 + t3169;
  t3239 = t2203*t3199;
  t3356 = -1.*t3350*t2620;
  t3392 = 0. + t3239 + t3356;
  t3788 = t2203*t3350;
  t3800 = t3199*t2620;
  t3983 = 0. + t3788 + t3800;
  t3996 = t1482*t3392;
  t4071 = 0. + t3996;
  t4274 = -1.*t2728*t2941;
  t4291 = t2121*t2112;
  t4301 = 0. + t4274 + t4291;
  t4327 = -1.*t4301*t2620;
  t4407 = 0. + t3788 + t4327;
  t4587 = t2203*t4301;
  t4592 = t3350*t2620;
  t4607 = 0. + t4587 + t4592;
  t4622 = t1482*t4407;
  t4678 = 0. + t4622;
  t2727 = -1.*t2121*t2699;
  t2865 = t2728*t2843;
  t2907 = t2727 + t2865;
  t2971 = t2728*t2699;
  t3011 = t2121*t2843;
  t3032 = t2971 + t3011;
  t3429 = t37*t3392;
  t3555 = 0. + t3429;
  t3575 = -1.*t899*t3555;
  t3987 = -1.*t1357*t3983;
  t4100 = t395*t4071;
  t4140 = 0. + t3987 + t4100;
  t4158 = t970*t4140;
  t4171 = t395*t3983;
  t4203 = t1357*t4071;
  t4223 = 0. + t4171 + t4203;
  t4224 = t516*t4223;
  t4226 = 0. + t4158 + t4224;
  t4249 = t1462*t4226;
  t4256 = 0. + t3575 + t4249;
  t4422 = t37*t4407;
  t4519 = 0. + t4422;
  t4539 = -1.*t899*t4519;
  t4614 = -1.*t1357*t4607;
  t4682 = t395*t4678;
  t4718 = 0. + t4614 + t4682;
  t4760 = t970*t4718;
  t4795 = t395*t4607;
  t4801 = t1357*t4678;
  t4833 = 0. + t4795 + t4801;
  t4860 = t516*t4833;
  t4893 = 0. + t4760 + t4860;
  t5004 = t1462*t4893;
  t5040 = 0. + t4539 + t5004;
  t1572 = t395*t1567;
  t1598 = 0. + t1572;
  t1646 = t1598*t970;
  t1722 = t1567*t1357;
  t1731 = 0. + t1722;
  t1792 = t516*t1731;
  t1849 = 0. + t1646 + t1792;
  t1884 = t1462*t1849;
  t1964 = 0. + t1482;
  t1967 = -1.*t899*t1964;
  t2033 = 0. + t1884 + t1967;
  t5723 = t842*t516;
  t5725 = t688*t899*t970;
  t5762 = t5723 + t5725;
  t5836 = t395*t5762;
  t5837 = t516*t688*t899;
  t5853 = -1.*t842*t970;
  t5924 = t5837 + t5853;
  t5928 = t5924*t1357;
  t5958 = t5836 + t5928;
  t6083 = t395*t5924;
  t6138 = -1.*t5762*t1357;
  t6141 = t6083 + t6138;
  t6059 = t1462*t37*t688;
  t6061 = t5958*t1482;
  t6070 = t6059 + t6061;
  t6074 = t2203*t6070;
  t6162 = t6141*t2620;
  t6176 = t6074 + t6162;
  t6195 = t2203*t6141;
  t6204 = -1.*t6070*t2620;
  t6229 = t6195 + t6204;
  t4257 = 0.0341*t4256;
  t5167 = 0.000334*t5040;
  t5181 = t4257 + t5167;
  t6193 = -1.*t2121*t6176;
  t6241 = t2728*t6229;
  t6264 = t6193 + t6241;
  t6276 = t2728*t6176;
  t6366 = t2121*t6229;
  t6494 = t6276 + t6366;
  t5357 = 0.000334*t4256;
  t5473 = 0.00036*t5040;
  t5562 = t5357 + t5473;
  t6891 = t1462*t395*t970;
  t6924 = t1462*t516*t1357;
  t7001 = t6891 + t6924;
  t7078 = t1462*t516*t395;
  t7079 = -1.*t1462*t970*t1357;
  t7083 = t7078 + t7079;
  t7029 = -1.*t37*t899;
  t7031 = t7001*t1482;
  t7051 = t7029 + t7031;
  t7072 = t2203*t7051;
  t7124 = t7083*t2620;
  t7137 = t7072 + t7124;
  t7154 = t2203*t7083;
  t7162 = -1.*t7051*t2620;
  t7165 = t7154 + t7162;
  t7141 = -1.*t2121*t7137;
  t7173 = t2728*t7165;
  t7199 = t7141 + t7173;
  t7216 = t2728*t7137;
  t7226 = t2121*t7165;
  t7229 = t7216 + t7226;
  t1452 = -1.*t37*t1434;
  t1499 = t842*t1462*t1482;
  t1512 = t1452 + t1499;
  t2914 = t2112*t2907;
  t3052 = t2941*t3032;
  t3073 = t2914 + t3052;
  t5294 = -1.*t2941*t2907;
  t5327 = t2112*t3032;
  t5350 = t5294 + t5327;
  t7358 = t516*t4140;
  t7364 = -1.*t970*t4223;
  t7367 = 0. + t7358 + t7364;
  t7379 = t516*t4718;
  t7386 = -1.*t970*t4833;
  t7388 = 0. + t7379 + t7386;
  t7332 = t516*t1598;
  t7338 = -1.*t970*t1731;
  t7344 = 0. + t7332 + t7338;
  t5966 = -1.*t37*t5958;
  t5970 = t1462*t688*t1482;
  t5997 = t5966 + t5970;
  t6267 = t2112*t6264;
  t6504 = t2941*t6494;
  t6648 = t6267 + t6504;
  t7371 = 0.0341*t7367;
  t7402 = 0.000334*t7388;
  t7405 = t7371 + t7402;
  t6709 = -1.*t2941*t6264;
  t6771 = t2112*t6494;
  t6774 = t6709 + t6771;
  t7421 = 0.000334*t7367;
  t7422 = 0.00036*t7388;
  t7424 = t7421 + t7422;
  t7014 = -1.*t37*t7001;
  t7018 = -1.*t899*t1482;
  t7024 = t7014 + t7018;
  t7208 = t2112*t7199;
  t7248 = t2941*t7229;
  t7261 = t7208 + t7248;
  t7276 = -1.*t2941*t7199;
  t7278 = t2112*t7229;
  t7285 = t7276 + t7278;
  t7471 = 0.0341*t3555;
  t7486 = 0.000334*t4519;
  t7487 = t7471 + t7486;
  t7501 = 0.000334*t3555;
  t7504 = 0.00036*t4519;
  t7507 = t7501 + t7504;
  t7465 = 0.0341*t1964*t1512;
  t7495 = t7487*t3073;
  t7509 = t7507*t5350;
  t7511 = t7465 + t7495 + t7509;
  t7513 = 0.0341*t1964*t5997;
  t7514 = t7487*t6648;
  t7517 = t7507*t6774;
  t7518 = t7513 + t7514 + t7517;
  t7523 = 0.0341*t1964*t7024;
  t7531 = t7487*t7261;
  t7540 = t7507*t7285;
  t7542 = t7523 + t7531 + t7540;
  t7552 = 0.000334*t4607;
  t7563 = 0.0341*t3983;
  t7570 = t7552 + t7563;
  t7579 = 0.00036*t4607;
  t7585 = 0.000334*t3983;
  t7589 = t7579 + t7585;
  t7637 = 0.0341*t1512;
  t7644 = 0.0341*t5997;
  t7645 = 0.0341*t7024;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.0341*t1512*t2033 + t3073*t5181 + t5350*t5562;
  p_output1[10]=0.0341*t2033*t5997 + t5181*t6648 + t5562*t6774;
  p_output1[11]=0.0341*t2033*t7024 + t5181*t7261 + t5562*t7285;
  p_output1[12]=0.0341*t1512*t7344 + t3073*t7405 + t5350*t7424;
  p_output1[13]=0.0341*t5997*t7344 + t6648*t7405 + t6774*t7424;
  p_output1[14]=0.0341*t7024*t7344 + t7261*t7405 + t7285*t7424;
  p_output1[15]=t7511;
  p_output1[16]=t7518;
  p_output1[17]=t7542;
  p_output1[18]=t7511;
  p_output1[19]=t7518;
  p_output1[20]=t7542;
  p_output1[21]=t3073*t7570 + t5350*t7589;
  p_output1[22]=t6648*t7570 + t6774*t7589;
  p_output1[23]=t7261*t7570 + t7285*t7589;
  p_output1[24]=t7637;
  p_output1[25]=t7644;
  p_output1[26]=t7645;
  p_output1[27]=t7637;
  p_output1[28]=t7644;
  p_output1[29]=t7645;
  p_output1[30]=t7637;
  p_output1[31]=t7644;
  p_output1[32]=t7645;
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



void Jdq_AMWorld_LeftShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
