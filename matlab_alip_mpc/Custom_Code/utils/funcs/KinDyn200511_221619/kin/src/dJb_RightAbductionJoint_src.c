/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:50 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_RightAbductionJoint_src.h"

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
  double t710;
  double t317;
  double t615;
  double t1058;
  double t1091;
  double t1136;
  double t1140;
  double t722;
  double t1433;
  double t1509;
  double t1573;
  double t1705;
  double t1722;
  double t1773;
  double t2260;
  double t2280;
  double t2415;
  double t1109;
  double t1243;
  double t1331;
  double t2645;
  double t3117;
  double t3248;
  double t3438;
  double t3550;
  double t3828;
  double t3995;
  double t433;
  double t4950;
  double t4980;
  double t5041;
  double t2935;
  double t2938;
  double t6228;
  double t6245;
  double t6310;
  double t4012;
  double t4044;
  double t4236;
  double t7186;
  double t7190;
  double t7248;
  double t7342;
  double t7431;
  double t7494;
  double t7707;
  double t7776;
  double t7873;
  double t7956;
  double t8036;
  double t7180;
  double t8064;
  double t8208;
  double t8483;
  double t8603;
  double t8282;
  double t8298;
  double t8338;
  double t8398;
  double t8404;
  double t8467;
  double t7173;
  double t7179;
  double t8617;
  double t8696;
  double t8727;
  double t8737;
  double t8741;
  double t8742;
  double t8749;
  double t8759;
  double t8885;
  double t8926;
  double t8927;
  double t8929;
  double t9003;
  double t9004;
  double t9032;
  double t9160;
  double t9065;
  double t9124;
  double t9125;
  double t9152;
  double t8975;
  double t8977;
  double t8992;
  double t9077;
  double t9273;
  double t9274;
  double t9275;
  double t9278;
  double t9279;
  double t9280;
  double t9287;
  double t9288;
  double t9304;
  double t9388;
  double t9390;
  double t9391;
  double t9392;
  double t9393;
  double t9394;
  double t9395;
  double t6654;
  double t6657;
  double t6693;
  double t6694;
  double t6965;
  double t7084;
  double t7099;
  double t7112;
  double t7172;
  double t9449;
  double t9156;
  double t9454;
  double t9456;
  double t9457;
  double t9458;
  double t9459;
  double t9460;
  double t9461;
  double t9199;
  t710 = Cos(var1[3]);
  t317 = Cos(var1[4]);
  t615 = Sin(var1[3]);
  t1058 = Cos(var1[5]);
  t1091 = Sin(var1[13]);
  t1136 = Cos(var1[13]);
  t1140 = Sin(var1[5]);
  t722 = Sin(var1[4]);
  t1433 = -1.*t1058*t1091;
  t1509 = -1.*t1136*t1140;
  t1573 = t1433 + t1509;
  t1705 = -1.*t615*t1573;
  t1722 = t1136*t1058;
  t1773 = -1.*t1091*t1140;
  t2260 = t1722 + t1773;
  t2280 = t710*t722*t2260;
  t2415 = t1705 + t2280;
  t1109 = t1058*t1091;
  t1243 = t1136*t1140;
  t1331 = 0. + t1109 + t1243;
  t2645 = 0. + t1722 + t1773;
  t3117 = t710*t722*t1573;
  t3248 = -1.*t1136*t1058;
  t3438 = t1091*t1140;
  t3550 = t3248 + t3438;
  t3828 = -1.*t615*t3550;
  t3995 = t3117 + t3828;
  t433 = 0. + t317;
  t4950 = t710*t1573;
  t4980 = t615*t722*t2260;
  t5041 = t4950 + t4980;
  t2935 = t722*t1331;
  t2938 = 0. + t2935;
  t6228 = t615*t722*t1573;
  t6245 = t710*t3550;
  t6310 = t6228 + t6245;
  t4012 = 0. + t1433 + t1509;
  t4044 = t722*t2645;
  t4236 = 0. + t4044;
  t7186 = -1.*t1136;
  t7190 = 1. + t7186;
  t7248 = 0.07996*t7190;
  t7342 = 0.07996*t1136;
  t7431 = 0. + t7248 + t7342;
  t7494 = t7431*t1058;
  t7707 = -0.135*t7190;
  t7776 = -0.135*t1136;
  t7873 = 0. + t7707 + t7776;
  t7956 = t7873*t1140;
  t8036 = 0. + t7494 + t7956;
  t7180 = 0.08055*t722;
  t8064 = t317*t8036;
  t8208 = 0. + t7180 + t8064;
  t8483 = t317*t1331;
  t8603 = 0. + t8483;
  t8282 = -0.08055*t317;
  t8298 = t722*t8036;
  t8338 = 0. + t8282 + t8298;
  t8398 = 0.08055*t317;
  t8404 = -1.*t722*t8036;
  t8467 = t8398 + t8404;
  t7173 = t317*t2645;
  t7179 = 0. + t7173;
  t8617 = t7180 + t8064;
  t8696 = t7873*t1058;
  t8727 = -1.*t7431*t1140;
  t8737 = 0. + t8696 + t8727;
  t8741 = -1.*t8737*t2645;
  t8742 = -1.*t8208*t8603;
  t8749 = -1.*t8338*t2938;
  t8759 = t8741 + t8742 + t8749;
  t8885 = t8737*t4012;
  t8926 = t8208*t7179;
  t8927 = t8338*t4236;
  t8929 = t8885 + t8926 + t8927;
  t9003 = -1.*t8737*t1573;
  t9004 = -1.*t317*t2260*t8208;
  t9032 = -1.*t722*t2260*t8338;
  t9160 = t8696 + t8727;
  t9065 = t317*t1573*t8759;
  t9124 = -1.*t7431*t1058;
  t9125 = -1.*t7873*t1140;
  t9152 = t9124 + t9125;
  t8975 = t8737*t3550;
  t8977 = t317*t1573*t8208;
  t8992 = t722*t1573*t8338;
  t9077 = t317*t2260*t8929;
  t9273 = -1.*t722;
  t9274 = 0. + t9273;
  t9275 = t9274*t8208;
  t9278 = t433*t8338;
  t9279 = 0. + t9275 + t9278;
  t9280 = t317*t1573*t9279;
  t9287 = -1.*t8737*t3550;
  t9288 = -1.*t317*t1573*t8208;
  t9304 = -1.*t722*t1573*t8338;
  t9388 = -1.*t9274*t8208;
  t9390 = -1.*t433*t8338;
  t9391 = 0. + t9388 + t9390;
  t9392 = t317*t2260*t9391;
  t9393 = t8737*t1573;
  t9394 = t317*t2260*t8208;
  t9395 = t722*t2260*t8338;
  t6654 = -1.*var2[4]*t317;
  t6657 = -1.*var2[4]*t722*t1331;
  t6693 = var2[13]*t317*t2260;
  t6694 = var2[5]*t317*t2260;
  t6965 = t6657 + t6693 + t6694;
  t7084 = var2[13]*t317*t1573;
  t7099 = var2[5]*t317*t1573;
  t7112 = -1.*var2[4]*t722*t2645;
  t7172 = t7084 + t7099 + t7112;
  t9449 = -1.*t8036*t2260;
  t9156 = -1.*t9152*t2645;
  t9454 = t8036*t2645;
  t9456 = 0. + t8885 + t9454;
  t9457 = t1573*t9456;
  t9458 = -1.*t8036*t1331;
  t9459 = 0. + t9458 + t8741;
  t9460 = t3550*t9459;
  t9461 = t8036*t1573;
  t9199 = t9152*t4012;
  p_output1[0]=-1.*t433*t615*var2[3] - 1.*t710*t722*var2[4];
  p_output1[1]=(-1.*t2938*t615 - 1.*t2645*t710)*var2[3] + t1331*t317*t710*var2[4] + t2415*var2[5] + t2415*var2[13];
  p_output1[2]=(-1.*t4236*t615 - 1.*t4012*t710)*var2[3] + t2645*t317*t710*var2[4] + t3995*var2[5] + t3995*var2[13];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t433*t710*var2[3] - 1.*t615*t722*var2[4];
  p_output1[7]=(-1.*t2645*t615 + t2938*t710)*var2[3] + t1331*t317*t615*var2[4] + t5041*var2[5] + t5041*var2[13];
  p_output1[8]=(-1.*t4012*t615 + t4236*t710)*var2[3] + t2645*t317*t615*var2[4] + t6310*var2[5] + t6310*var2[13];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t6654;
  p_output1[13]=t6965;
  p_output1[14]=t7172;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t7179*(t1331*t722*t8208 - 1.*t1331*t317*t8338 - 1.*t8467*t8603 - 1.*t2938*t8617) + t8603*(-1.*t2645*t722*t8208 + t2645*t317*t8338 + t7179*t8467 + t4236*t8617) - 1.*t2645*t722*t8759 - 1.*t1331*t722*t8929)*var2[4] + (t9065 + t9077 + t7179*(t9003 + t9004 + t9032 + t9156 - 1.*t2938*t722*t9160 - 1.*t317*t8603*t9160) + t8603*(t8975 + t8977 + t8992 + t317*t7179*t9160 + t4236*t722*t9160 + t9199))*var2[5] + (t8603*(0. + t8975 + t8977 + t8992) + t7179*(0. + t9003 + t9004 + t9032) + t9065 + t9077)*var2[13];
  p_output1[19]=(-1.*t317*(-1.*t7179*t8208 - 1.*t4236*t8338 - 1.*t4012*t8737) + (t2645*t722*t8208 - 1.*t2645*t317*t8338 - 1.*t7179*t8467 - 1.*t4236*t8617)*t9274 + t7179*(-1.*t317*t8208 - 1.*t722*t8338 + t433*t8617 + t8467*t9274) - 1.*t2645*t722*t9279)*var2[4] + (t7179*(t433*t722*t9160 + t317*t9160*t9274) + t9280 + t9274*(-1.*t4012*t9152 - 1.*t317*t7179*t9160 - 1.*t4236*t722*t9160 + t9287 + t9288 + t9304))*var2[5] + (0. + t9280 + t9274*(0. + t9287 + t9288 + t9304))*var2[13];
  p_output1[20]=(-1.*t317*(t2938*t8338 + t8208*t8603 + t2645*t8737) + (-1.*t1331*t722*t8208 + t1331*t317*t8338 + t8467*t8603 + t2938*t8617)*t9274 + t8603*(t317*t8208 + t722*t8338 - 1.*t433*t8617 - 1.*t8467*t9274) - 1.*t1331*t722*t9391)*var2[4] + (t8603*(-1.*t433*t722*t9160 - 1.*t317*t9160*t9274) + t9392 + t9274*(t2645*t9152 + t2938*t722*t9160 + t317*t8603*t9160 + t9393 + t9394 + t9395))*var2[5] + (0. + t9392 + t9274*(0. + t9393 + t9394 + t9395))*var2[13];
  p_output1[21]=t6654;
  p_output1[22]=t6965;
  p_output1[23]=t7172;
  p_output1[24]=(t4012*(t9003 + t9156 - 1.*t1331*t9160 + t9449) + t9457 + t9460 + t2645*(t8975 + t2645*t9160 + t9199 + t9461))*var2[5] + (t4012*(0. + t9003 + t9449) + t9457 + t9460 + t2645*(0. + t8975 + t9461))*var2[13];
  p_output1[25]=-0.08055*t3550*var2[5] - 0.08055*t3550*var2[13];
  p_output1[26]=0.08055*t1573*var2[5] + 0.08055*t1573*var2[13];
  p_output1[27]=0;
  p_output1[28]=t1573*var2[5] + t1573*var2[13];
  p_output1[29]=t3550*var2[5] + t3550*var2[13];
  p_output1[30]=0;
  p_output1[31]=(0. + t1091*t7431 + t1136*t7873)*var2[13];
  p_output1[32]=(0. + t1136*t7431 - 1.*t1091*t7873)*var2[13];
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



void dJb_RightAbductionJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
