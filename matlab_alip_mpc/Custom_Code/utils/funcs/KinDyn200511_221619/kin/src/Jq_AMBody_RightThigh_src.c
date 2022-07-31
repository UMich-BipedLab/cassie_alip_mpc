/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:42 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_RightThigh_src.h"

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
  double t1579;
  double t355;
  double t1346;
  double t1368;
  double t1582;
  double t3032;
  double t450;
  double t2227;
  double t4100;
  double t4390;
  double t4839;
  double t5004;
  double t2604;
  double t6668;
  double t6671;
  double t6885;
  double t6906;
  double t498;
  double t1289;
  double t1741;
  double t1979;
  double t2063;
  double t2272;
  double t2502;
  double t2618;
  double t2671;
  double t2695;
  double t2716;
  double t3098;
  double t3649;
  double t3869;
  double t4625;
  double t5042;
  double t5064;
  double t5092;
  double t5295;
  double t5631;
  double t5827;
  double t5915;
  double t6078;
  double t6135;
  double t6364;
  double t6548;
  double t6558;
  double t6640;
  double t6837;
  double t6925;
  double t6948;
  double t6973;
  double t6981;
  double t6992;
  double t6999;
  double t7000;
  double t7007;
  double t7009;
  double t7014;
  double t7091;
  double t7092;
  double t7095;
  double t7097;
  double t7098;
  double t7105;
  double t7125;
  double t7128;
  double t7132;
  double t7162;
  double t7167;
  double t7168;
  double t7172;
  double t7175;
  double t7176;
  double t7181;
  double t7184;
  double t7196;
  double t7199;
  double t7200;
  double t7204;
  double t7205;
  double t7208;
  double t7209;
  double t7218;
  double t7219;
  double t7220;
  double t7294;
  double t7296;
  double t7300;
  double t7287;
  double t7345;
  double t7335;
  double t7341;
  double t7342;
  double t7236;
  double t7241;
  double t7242;
  double t7252;
  double t7265;
  double t7269;
  double t7272;
  double t7277;
  double t7282;
  double t7288;
  double t7312;
  double t7313;
  double t7315;
  double t7318;
  double t7320;
  double t7324;
  double t7325;
  double t7327;
  double t7343;
  double t7346;
  double t7357;
  double t7365;
  double t7378;
  double t7382;
  double t7384;
  double t7391;
  double t7394;
  double t7435;
  double t7444;
  double t7446;
  double t7452;
  double t7454;
  double t7455;
  double t7456;
  double t7457;
  double t7458;
  double t7463;
  double t7468;
  double t7471;
  double t7475;
  double t7478;
  double t7487;
  double t7491;
  double t7494;
  double t7496;
  double t7499;
  double t7500;
  double t7501;
  double t7504;
  double t7505;
  double t7506;
  double t7509;
  double t7510;
  double t7514;
  double t7519;
  double t7529;
  double t7530;
  double t7532;
  double t7535;
  double t7539;
  double t7541;
  double t7546;
  double t7549;
  double t7550;
  double t7551;
  double t7552;
  double t7553;
  double t7562;
  double t7573;
  double t7669;
  double t7670;
  double t7671;
  double t7651;
  double t7660;
  double t7662;
  double t7726;
  double t7727;
  double t7728;
  double t7710;
  double t7714;
  double t7719;
  double t7620;
  double t7639;
  double t7640;
  double t7666;
  double t7672;
  double t7676;
  double t7677;
  double t7681;
  double t7686;
  double t7687;
  double t7689;
  double t7690;
  double t7694;
  double t7696;
  double t7698;
  double t7702;
  double t7703;
  double t7707;
  double t7722;
  double t7730;
  double t7731;
  double t7732;
  double t7740;
  double t7741;
  double t7747;
  double t7748;
  double t7749;
  double t7753;
  double t7754;
  double t7756;
  t1579 = Cos(var1[14]);
  t355 = Cos(var1[4]);
  t1346 = Sin(var1[4]);
  t1368 = Cos(var1[5]);
  t1582 = Sin(var1[13]);
  t3032 = Cos(var1[15]);
  t450 = Sin(var1[14]);
  t2227 = Cos(var1[13]);
  t4100 = t3032*t450;
  t4390 = 0. + t4100;
  t4839 = Sin(var1[15]);
  t5004 = 0. + t4839;
  t2604 = Sin(var1[5]);
  t6668 = -1.*t3032;
  t6671 = 0. + t6668;
  t6885 = t450*t4839;
  t6906 = 0. + t6885;
  t498 = 0. + t450;
  t1289 = -1.*t355*t498;
  t1741 = -1.*t1579*t1582;
  t1979 = 0. + t1741;
  t2063 = t1368*t1979;
  t2272 = -1.*t2227*t1579;
  t2502 = 0. + t2272;
  t2618 = t2502*t2604;
  t2671 = 0. + t2063 + t2618;
  t2695 = -1.*t1346*t2671;
  t2716 = t1289 + t2695;
  t3098 = t1579*t3032;
  t3649 = 0. + t3098;
  t3869 = -1.*t3649*t355;
  t4625 = t1582*t4390;
  t5042 = t2227*t5004;
  t5064 = 0. + t4625 + t5042;
  t5092 = t1368*t5064;
  t5295 = t2227*t4390;
  t5631 = -1.*t1582*t5004;
  t5827 = 0. + t5295 + t5631;
  t5915 = t5827*t2604;
  t6078 = 0. + t5092 + t5915;
  t6135 = -1.*t1346*t6078;
  t6364 = t3869 + t6135;
  t6548 = t1579*t4839;
  t6558 = 0. + t6548;
  t6640 = -1.*t355*t6558;
  t6837 = t2227*t6671;
  t6925 = t1582*t6906;
  t6948 = 0. + t6837 + t6925;
  t6973 = t1368*t6948;
  t6981 = -1.*t6671*t1582;
  t6992 = t2227*t6906;
  t6999 = 0. + t6981 + t6992;
  t7000 = t6999*t2604;
  t7007 = 0. + t6973 + t7000;
  t7009 = -1.*t1346*t7007;
  t7014 = t6640 + t7009;
  t7091 = -1.*t1368*t1979;
  t7092 = -1.*t2502*t2604;
  t7095 = t7091 + t7092;
  t7097 = var2[4]*t7095;
  t7098 = t2502*t1368;
  t7105 = -1.*t1979*t2604;
  t7125 = t7098 + t7105;
  t7128 = var2[3]*t355*t7125;
  t7132 = t7097 + t7128;
  t7162 = t1368*t5827;
  t7167 = -1.*t5064*t2604;
  t7168 = t7162 + t7167;
  t7172 = var2[3]*t355*t7168;
  t7175 = -1.*t1368*t5064;
  t7176 = -1.*t5827*t2604;
  t7181 = t7175 + t7176;
  t7184 = var2[4]*t7181;
  t7196 = t7172 + t7184;
  t7199 = -1.*t1368*t6948;
  t7200 = -1.*t6999*t2604;
  t7204 = t7199 + t7200;
  t7205 = var2[4]*t7204;
  t7208 = t1368*t6999;
  t7209 = -1.*t6948*t2604;
  t7218 = t7208 + t7209;
  t7219 = var2[3]*t355*t7218;
  t7220 = t7205 + t7219;
  t7294 = -1.*t1582*t4390;
  t7296 = -1.*t2227*t5004;
  t7300 = t7294 + t7296;
  t7287 = t5295 + t5631;
  t7345 = t6981 + t6992;
  t7335 = -1.*t2227*t6671;
  t7341 = -1.*t1582*t6906;
  t7342 = t7335 + t7341;
  t7236 = t1579*t1368*t1582;
  t7241 = t2227*t1579*t2604;
  t7242 = t7236 + t7241;
  t7252 = var2[4]*t7242;
  t7265 = -1.*t2227*t1579*t1368;
  t7269 = t1579*t1582*t2604;
  t7272 = t7265 + t7269;
  t7277 = var2[3]*t355*t7272;
  t7282 = t7252 + t7277;
  t7288 = t1368*t7287;
  t7312 = t7300*t2604;
  t7313 = t7288 + t7312;
  t7315 = var2[3]*t355*t7313;
  t7318 = t1368*t7300;
  t7320 = -1.*t7287*t2604;
  t7324 = t7318 + t7320;
  t7325 = var2[4]*t7324;
  t7327 = t7315 + t7325;
  t7343 = t1368*t7342;
  t7346 = -1.*t7345*t2604;
  t7357 = t7343 + t7346;
  t7365 = var2[4]*t7357;
  t7378 = t1368*t7345;
  t7382 = t7342*t2604;
  t7384 = t7378 + t7382;
  t7391 = var2[3]*t355*t7384;
  t7394 = t7365 + t7391;
  t7435 = -1.*var2[13]*t3032*t450;
  t7444 = -1.*var2[5]*t3032*t450;
  t7446 = t2227*t1579*t3032*t1368;
  t7452 = -1.*t1579*t3032*t1582*t2604;
  t7454 = t7446 + t7452;
  t7455 = var2[4]*t7454;
  t7456 = t3032*t450*t1346;
  t7457 = t1579*t3032*t1368*t1582;
  t7458 = t2227*t1579*t3032*t2604;
  t7463 = t7457 + t7458;
  t7468 = t355*t7463;
  t7471 = t7456 + t7468;
  t7475 = var2[3]*t7471;
  t7478 = t7435 + t7444 + t7455 + t7475;
  t7487 = var2[13]*t1579;
  t7491 = var2[5]*t1579;
  t7494 = t2227*t1368*t450;
  t7496 = -1.*t1582*t450*t2604;
  t7499 = t7494 + t7496;
  t7500 = var2[4]*t7499;
  t7501 = -1.*t1579*t1346;
  t7504 = t1368*t1582*t450;
  t7505 = t2227*t450*t2604;
  t7506 = t7504 + t7505;
  t7509 = t355*t7506;
  t7510 = t7501 + t7509;
  t7514 = var2[3]*t7510;
  t7519 = t7487 + t7491 + t7500 + t7514;
  t7529 = -1.*var2[13]*t450*t4839;
  t7530 = -1.*var2[5]*t450*t4839;
  t7532 = t2227*t1579*t1368*t4839;
  t7535 = -1.*t1579*t1582*t4839*t2604;
  t7539 = t7532 + t7535;
  t7541 = var2[4]*t7539;
  t7546 = t450*t4839*t1346;
  t7549 = t1579*t1368*t1582*t4839;
  t7550 = t2227*t1579*t4839*t2604;
  t7551 = t7549 + t7550;
  t7552 = t355*t7551;
  t7553 = t7546 + t7552;
  t7562 = var2[3]*t7553;
  t7573 = t7529 + t7530 + t7541 + t7562;
  t7669 = t3032*t1582*t450;
  t7670 = t2227*t4839;
  t7671 = t7669 + t7670;
  t7651 = t2227*t3032*t450;
  t7660 = -1.*t1582*t4839;
  t7662 = t7651 + t7660;
  t7726 = t2227*t3032;
  t7727 = -1.*t1582*t450*t4839;
  t7728 = t7726 + t7727;
  t7710 = -1.*t3032*t1582;
  t7714 = -1.*t2227*t450*t4839;
  t7719 = t7710 + t7714;
  t7620 = var2[13]*t1579*t3032;
  t7639 = var2[5]*t1579*t3032;
  t7640 = var2[14]*t4839;
  t7666 = t1368*t7662;
  t7672 = -1.*t7671*t2604;
  t7676 = t7666 + t7672;
  t7677 = var2[4]*t7676;
  t7681 = -1.*t1579*t3032*t1346;
  t7686 = t1368*t7671;
  t7687 = t7662*t2604;
  t7689 = t7686 + t7687;
  t7690 = t355*t7689;
  t7694 = t7681 + t7690;
  t7696 = var2[3]*t7694;
  t7698 = t7620 + t7639 + t7640 + t7677 + t7696;
  t7702 = var2[14]*t3032;
  t7703 = -1.*var2[13]*t1579*t4839;
  t7707 = -1.*var2[5]*t1579*t4839;
  t7722 = t1368*t7719;
  t7730 = -1.*t7728*t2604;
  t7731 = t7722 + t7730;
  t7732 = var2[4]*t7731;
  t7740 = t1579*t4839*t1346;
  t7741 = t1368*t7728;
  t7747 = t7719*t2604;
  t7748 = t7741 + t7747;
  t7749 = t355*t7748;
  t7753 = t7740 + t7749;
  t7754 = var2[3]*t7753;
  t7756 = t7702 + t7703 + t7707 + t7732 + t7754;
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
  p_output1[12]=0.0117*t2716*var2[3] + 0.000284*t6364*var2[3] + 0.018*t7014*var2[3];
  p_output1[13]=0.000019*t2716*var2[3] + 0.0563*t6364*var2[3] + 0.000284*t7014*var2[3];
  p_output1[14]=0.0498*t2716*var2[3] + 0.000019*t6364*var2[3] + 0.0117*t7014*var2[3];
  p_output1[15]=0.0117*t7132 + 0.000284*t7196 + 0.018*t7220;
  p_output1[16]=0.000019*t7132 + 0.0563*t7196 + 0.000284*t7220;
  p_output1[17]=0.0498*t7132 + 0.000019*t7196 + 0.0117*t7220;
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
  p_output1[39]=0.0117*t7282 + 0.000284*t7327 + 0.018*t7394;
  p_output1[40]=0.000019*t7282 + 0.0563*t7327 + 0.000284*t7394;
  p_output1[41]=0.0498*t7282 + 0.000019*t7327 + 0.0117*t7394;
  p_output1[42]=0.000284*t7478 + 0.0117*t7519 + 0.018*t7573;
  p_output1[43]=0.0563*t7478 + 0.000019*t7519 + 0.000284*t7573;
  p_output1[44]=0.000019*t7478 + 0.0498*t7519 + 0.0117*t7573;
  p_output1[45]=0.018*t7698 + 0.000284*t7756;
  p_output1[46]=0.000284*t7698 + 0.0563*t7756;
  p_output1[47]=0.0117*t7698 + 0.000019*t7756;
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



void Jq_AMBody_RightThigh_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
