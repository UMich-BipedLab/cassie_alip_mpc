/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:40 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_LeftPelvisRotation_src.h"

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
  double t332;
  double t94;
  double t268;
  double t1220;
  double t1380;
  double t1733;
  double t1793;
  double t359;
  double t1833;
  double t1840;
  double t1939;
  double t1940;
  double t1948;
  double t2164;
  double t2170;
  double t2171;
  double t2332;
  double t1616;
  double t1795;
  double t1803;
  double t2591;
  double t3298;
  double t3339;
  double t3360;
  double t3361;
  double t3431;
  double t3628;
  double t187;
  double t5137;
  double t5152;
  double t5159;
  double t2849;
  double t2937;
  double t5658;
  double t5661;
  double t5678;
  double t3792;
  double t3936;
  double t3988;
  double t7443;
  double t7526;
  double t7585;
  double t7587;
  double t7917;
  double t7920;
  double t7962;
  double t7973;
  double t8035;
  double t8072;
  double t8181;
  double t8185;
  double t8200;
  double t7441;
  double t8216;
  double t8223;
  double t8759;
  double t8800;
  double t8526;
  double t8576;
  double t8606;
  double t8734;
  double t8740;
  double t8756;
  double t7194;
  double t7209;
  double t8823;
  double t8869;
  double t8909;
  double t8910;
  double t8948;
  double t8962;
  double t8980;
  double t8981;
  double t9177;
  double t9179;
  double t9194;
  double t9197;
  double t9198;
  double t9202;
  double t9204;
  double t9207;
  double t9064;
  double t9066;
  double t9108;
  double t9116;
  double t9193;
  double t9199;
  double t9200;
  double t9149;
  double t9163;
  double t9169;
  double t9173;
  double t9281;
  double t9224;
  double t9226;
  double t9229;
  double t9256;
  double t9261;
  double t9262;
  double t9234;
  double t9310;
  double t9312;
  double t9313;
  double t9314;
  double t9317;
  double t9357;
  double t9363;
  double t9365;
  double t9367;
  double t9390;
  double t9391;
  double t9392;
  double t9417;
  double t9426;
  double t9427;
  double t9428;
  double t6762;
  double t6776;
  double t6848;
  double t7087;
  double t7118;
  double t7119;
  double t7122;
  double t7126;
  double t7129;
  double t9201;
  double t9233;
  double t9458;
  double t9270;
  double t9461;
  double t9462;
  double t9464;
  double t9466;
  double t9467;
  double t9468;
  double t9470;
  double t9295;
  t332 = Cos(var1[3]);
  t94 = Cos(var1[4]);
  t268 = Sin(var1[3]);
  t1220 = Cos(var1[6]);
  t1380 = Sin(var1[5]);
  t1733 = Cos(var1[5]);
  t1793 = Sin(var1[6]);
  t359 = Sin(var1[4]);
  t1833 = -1.*t1220*t1380;
  t1840 = -1.*t1733*t1793;
  t1939 = t1833 + t1840;
  t1940 = -1.*t268*t1939;
  t1948 = t1733*t1220;
  t2164 = -1.*t1380*t1793;
  t2170 = t1948 + t2164;
  t2171 = t332*t359*t2170;
  t2332 = t1940 + t2171;
  t1616 = t1220*t1380;
  t1795 = t1733*t1793;
  t1803 = 0. + t1616 + t1795;
  t2591 = 0. + t1948 + t2164;
  t3298 = t332*t359*t1939;
  t3339 = -1.*t1733*t1220;
  t3360 = t1380*t1793;
  t3361 = t3339 + t3360;
  t3431 = -1.*t268*t3361;
  t3628 = t3298 + t3431;
  t187 = 0. + t94;
  t5137 = t332*t1939;
  t5152 = t268*t359*t2170;
  t5159 = t5137 + t5152;
  t2849 = t359*t1803;
  t2937 = 0. + t2849;
  t5658 = t268*t359*t1939;
  t5661 = t332*t3361;
  t5678 = t5658 + t5661;
  t3792 = 0. + t1833 + t1840;
  t3936 = t359*t2591;
  t3988 = 0. + t3936;
  t7443 = -1.*t1220;
  t7526 = 1. + t7443;
  t7585 = 0.135*t7526;
  t7587 = 0.1351*t1220;
  t7917 = -0.0179*t1793;
  t7920 = 0. + t7585 + t7587 + t7917;
  t7962 = t1380*t7920;
  t7973 = 0.07996*t7526;
  t8035 = 0.09786*t1220;
  t8072 = 0.00009999999999998899*t1793;
  t8181 = 0. + t7973 + t8035 + t8072;
  t8185 = t1733*t8181;
  t8200 = 0. + t7962 + t8185;
  t7441 = 0.05485*t359;
  t8216 = t94*t8200;
  t8223 = 0. + t7441 + t8216;
  t8759 = t94*t1803;
  t8800 = 0. + t8759;
  t8526 = -0.05485*t94;
  t8576 = t359*t8200;
  t8606 = 0. + t8526 + t8576;
  t8734 = 0.05485*t94;
  t8740 = -1.*t359*t8200;
  t8756 = t8734 + t8740;
  t7194 = t94*t2591;
  t7209 = 0. + t7194;
  t8823 = t7441 + t8216;
  t8869 = t1733*t7920;
  t8909 = -1.*t1380*t8181;
  t8910 = 0. + t8869 + t8909;
  t8948 = -1.*t8910*t2591;
  t8962 = -1.*t8223*t8800;
  t8980 = -1.*t8606*t2937;
  t8981 = t8948 + t8962 + t8980;
  t9177 = 0.00009999999999998899*t1220;
  t9179 = t9177 + t7917;
  t9194 = -0.0179*t1220;
  t9197 = -0.00009999999999998899*t1793;
  t9198 = t9194 + t9197;
  t9202 = t1733*t9179;
  t9204 = t1380*t9198;
  t9207 = t9202 + t9204;
  t9064 = t8910*t3792;
  t9066 = t8223*t7209;
  t9108 = t8606*t3988;
  t9116 = t9064 + t9066 + t9108;
  t9193 = -1.*t1380*t9179;
  t9199 = t1733*t9198;
  t9200 = t9193 + t9199;
  t9149 = t94*t1939*t8981;
  t9163 = -1.*t8910*t1939;
  t9169 = -1.*t94*t8223*t2170;
  t9173 = -1.*t359*t8606*t2170;
  t9281 = t8869 + t8909;
  t9224 = t94*t2170*t9116;
  t9226 = t94*t8223*t1939;
  t9229 = t359*t8606*t1939;
  t9256 = -1.*t1380*t7920;
  t9261 = -1.*t1733*t8181;
  t9262 = t9256 + t9261;
  t9234 = t8910*t3361;
  t9310 = -1.*t359;
  t9312 = 0. + t9310;
  t9313 = t9312*t8223;
  t9314 = t187*t8606;
  t9317 = 0. + t9313 + t9314;
  t9357 = t94*t9317*t1939;
  t9363 = -1.*t94*t8223*t1939;
  t9365 = -1.*t359*t8606*t1939;
  t9367 = -1.*t8910*t3361;
  t9390 = -1.*t9312*t8223;
  t9391 = -1.*t187*t8606;
  t9392 = 0. + t9390 + t9391;
  t9417 = t94*t9392*t2170;
  t9426 = t8910*t1939;
  t9427 = t94*t8223*t2170;
  t9428 = t359*t8606*t2170;
  t6762 = -1.*var2[4]*t94;
  t6776 = -1.*var2[4]*t359*t1803;
  t6848 = var2[5]*t94*t2170;
  t7087 = var2[6]*t94*t2170;
  t7118 = t6776 + t6848 + t7087;
  t7119 = var2[5]*t94*t1939;
  t7122 = var2[6]*t94*t1939;
  t7126 = -1.*var2[4]*t359*t2591;
  t7129 = t7119 + t7122 + t7126;
  t9201 = -1.*t9200*t2591;
  t9233 = t9200*t3792;
  t9458 = -1.*t8200*t2170;
  t9270 = -1.*t9262*t2591;
  t9461 = t8200*t2591;
  t9462 = 0. + t9064 + t9461;
  t9464 = t1939*t9462;
  t9466 = -1.*t8200*t1803;
  t9467 = 0. + t9466 + t8948;
  t9468 = t3361*t9467;
  t9470 = t8200*t1939;
  t9295 = t9262*t3792;
  p_output1[0]=-1.*t187*t268*var2[3] - 1.*t332*t359*var2[4];
  p_output1[1]=(-1.*t268*t2937 - 1.*t2591*t332)*var2[3] + t1803*t332*t94*var2[4] + t2332*var2[5] + t2332*var2[6];
  p_output1[2]=(-1.*t332*t3792 - 1.*t268*t3988)*var2[3] + t2591*t332*t94*var2[4] + t3628*var2[5] + t3628*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t187*t332*var2[3] - 1.*t268*t359*var2[4];
  p_output1[7]=(-1.*t2591*t268 + t2937*t332)*var2[3] + t1803*t268*t94*var2[4] + t5159*var2[5] + t5159*var2[6];
  p_output1[8]=(-1.*t268*t3792 + t332*t3988)*var2[3] + t2591*t268*t94*var2[4] + t5678*var2[5] + t5678*var2[6];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t6762;
  p_output1[13]=t7118;
  p_output1[14]=t7129;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(-1.*t2591*t359*t8981 - 1.*t1803*t359*t9116 + t7209*(t1803*t359*t8223 - 1.*t8756*t8800 - 1.*t2937*t8823 - 1.*t1803*t8606*t94) + t8800*(-1.*t2591*t359*t8223 + t7209*t8756 + t3988*t8823 + t2591*t8606*t94))*var2[4] + (t9149 + t9224 + t8800*(t9226 + t9229 + t9234 + t359*t3988*t9281 + t9295 + t7209*t9281*t94) + t7209*(t9163 + t9169 + t9173 + t9270 - 1.*t2937*t359*t9281 - 1.*t8800*t9281*t94))*var2[5] + (t9149 + t9224 + t8800*(t359*t3988*t9207 + t9226 + t9229 + t9233 + t9234 + t7209*t9207*t94) + t7209*(t9163 + t9169 + t9173 + t9201 - 1.*t2937*t359*t9207 - 1.*t8800*t9207*t94))*var2[6];
  p_output1[19]=(-1.*t2591*t359*t9317 - 1.*(-1.*t7209*t8223 - 1.*t3988*t8606 - 1.*t3792*t8910)*t94 + t7209*(-1.*t359*t8606 + t187*t8823 + t8756*t9312 - 1.*t8223*t94) + t9312*(t2591*t359*t8223 - 1.*t7209*t8756 - 1.*t3988*t8823 - 1.*t2591*t8606*t94))*var2[4] + (t9357 + t9312*(-1.*t3792*t9262 - 1.*t359*t3988*t9281 + t9363 + t9365 + t9367 - 1.*t7209*t9281*t94) + t7209*(t187*t359*t9281 + t9281*t9312*t94))*var2[5] + (t9357 + t9312*(-1.*t3792*t9200 - 1.*t359*t3988*t9207 + t9363 + t9365 + t9367 - 1.*t7209*t9207*t94) + t7209*(t187*t359*t9207 + t9207*t9312*t94))*var2[6];
  p_output1[20]=(-1.*t1803*t359*t9392 - 1.*(t2937*t8606 + t8223*t8800 + t2591*t8910)*t94 + t8800*(t359*t8606 - 1.*t187*t8823 - 1.*t8756*t9312 + t8223*t94) + t9312*(-1.*t1803*t359*t8223 + t8756*t8800 + t2937*t8823 + t1803*t8606*t94))*var2[4] + (t8800*(-1.*t187*t359*t9281 - 1.*t9281*t9312*t94) + t9417 + t9312*(t2591*t9262 + t2937*t359*t9281 + t8800*t9281*t94 + t9426 + t9427 + t9428))*var2[5] + (t8800*(-1.*t187*t359*t9207 - 1.*t9207*t9312*t94) + t9417 + t9312*(t2591*t9200 + t2937*t359*t9207 + t8800*t9207*t94 + t9426 + t9427 + t9428))*var2[6];
  p_output1[21]=t6762;
  p_output1[22]=t7118;
  p_output1[23]=t7129;
  p_output1[24]=(t3792*(t9163 + t9270 - 1.*t1803*t9281 + t9458) + t9464 + t9468 + t2591*(t9234 + t2591*t9281 + t9295 + t9470))*var2[5] + (t3792*(t9163 + t9201 - 1.*t1803*t9207 + t9458) + t9464 + t9468 + t2591*(t2591*t9207 + t9233 + t9234 + t9470))*var2[6];
  p_output1[25]=-0.05485*t3361*var2[5] - 0.05485*t3361*var2[6];
  p_output1[26]=0.05485*t1939*var2[5] + 0.05485*t1939*var2[6];
  p_output1[27]=0;
  p_output1[28]=t1939*var2[5] + t1939*var2[6];
  p_output1[29]=t3361*var2[5] + t3361*var2[6];
  p_output1[30]=0;
  p_output1[31]=(t1220*t7920 + t1793*t8181 - 1.*t1220*t9179 + t1793*t9198)*var2[6];
  p_output1[32]=(-1.*t1793*t7920 + t1220*t8181 + t1793*t9179 + t1220*t9198)*var2[6];
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



void dJb_LeftPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
