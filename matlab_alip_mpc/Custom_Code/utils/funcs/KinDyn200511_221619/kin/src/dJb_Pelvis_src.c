/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJb_Pelvis_src.h"

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
  double t274;
  double t109;
  double t370;
  double t217;
  double t1030;
  double t1191;
  double t1197;
  double t1316;
  double t1328;
  double t1990;
  double t2404;
  double t2426;
  double t4376;
  double t4440;
  double t4498;
  double t4515;
  double t4516;
  double t4573;
  double t4615;
  double t4756;
  double t4757;
  double t4803;
  double t4825;
  double t4963;
  double t5890;
  double t5895;
  double t5900;
  double t5978;
  double t6010;
  double t6018;
  double t6030;
  double t6031;
  double t6067;
  double t6100;
  double t6350;
  double t6989;
  double t7460;
  double t7874;
  double t7946;
  double t7950;
  double t7448;
  double t7454;
  double t7458;
  double t8143;
  double t8239;
  double t8290;
  double t8712;
  double t8716;
  double t8719;
  double t7332;
  double t4275;
  double t4286;
  double t4289;
  double t4294;
  double t4301;
  double t4327;
  double t4332;
  double t7338;
  t274 = Cos(var1[3]);
  t109 = Cos(var1[4]);
  t370 = Sin(var1[4]);
  t217 = Sin(var1[3]);
  t1030 = Sin(var1[5]);
  t1191 = Cos(var1[5]);
  t1197 = t274*t1191*t370;
  t1316 = t217*t1030;
  t1328 = t1197 + t1316;
  t1990 = -1.*t274*t1191;
  t2404 = -1.*t217*t370*t1030;
  t2426 = t1990 + t2404;
  t4376 = 0.10836*t1191;
  t4440 = 0. + t4376;
  t4498 = t109*t4440;
  t4515 = -0.01915*t370;
  t4516 = t4498 + t4515;
  t4573 = 0. + t4498 + t4515;
  t4615 = -0.01915*t109;
  t4756 = -1.*t4440*t370;
  t4757 = t4615 + t4756;
  t4803 = 0.01915*t109;
  t4825 = t4440*t370;
  t4963 = 0. + t4803 + t4825;
  t5890 = -0.10836*t1030;
  t5895 = 0. + t5890;
  t5900 = -1.*t1191*t5895;
  t5978 = -1.*t109*t4573*t1030;
  t6010 = -1.*t370*t4963*t1030;
  t6018 = t5900 + t5978 + t6010;
  t6030 = t109*t1191*t4573;
  t6031 = t1191*t370*t4963;
  t6067 = -1.*t5895*t1030;
  t6100 = t6030 + t6031 + t6067;
  t6350 = Power(t109,2);
  t6989 = Power(t370,2);
  t7460 = Power(t1030,2);
  t7874 = -1.*t4573*t370;
  t7946 = t109*t4963;
  t7950 = t7874 + t7946;
  t7448 = -1.*t109*t1191*t4573;
  t7454 = -1.*t1191*t370*t4963;
  t7458 = t5895*t1030;
  t8143 = t1191*t5895;
  t8239 = t109*t4573*t1030;
  t8290 = t370*t4963*t1030;
  t8712 = t4573*t370;
  t8716 = -1.*t109*t4963;
  t8719 = t8712 + t8716;
  t7332 = Power(t1191,2);
  t4275 = -1.*var2[4]*t109;
  t4286 = var2[5]*t109*t1191;
  t4289 = -1.*var2[4]*t370*t1030;
  t4294 = t4286 + t4289;
  t4301 = -1.*var2[4]*t1191*t370;
  t4327 = -1.*var2[5]*t109*t1030;
  t4332 = t4301 + t4327;
  t7338 = 0.10836*t7332;
  p_output1[0]=-1.*t109*t217*var2[3] - 1.*t274*t370*var2[4];
  p_output1[1]=t2426*var2[3] + t1030*t109*t274*var2[4] + t1328*var2[5];
  p_output1[2]=(t1030*t274 - 1.*t1191*t217*t370)*var2[3] + t109*t1191*t274*var2[4] + (t1191*t217 - 1.*t1030*t274*t370)*var2[5];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t109*t274*var2[3] - 1.*t217*t370*var2[4];
  p_output1[7]=(-1.*t1191*t217 + t1030*t274*t370)*var2[3] + t1030*t109*t217*var2[4] + (-1.*t1030*t274 + t1191*t217*t370)*var2[5];
  p_output1[8]=t1328*var2[3] + t109*t1191*t217*var2[4] + t2426*var2[5];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4275;
  p_output1[13]=t4294;
  p_output1[14]=t4332;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t109*t1191*(-1.*t1030*t370*t4516 + t1030*t370*t4573 - 1.*t1030*t109*t4757 - 1.*t1030*t109*t4963) + t1030*t109*(t1191*t370*t4516 - 1.*t1191*t370*t4573 + t109*t1191*t4757 + t109*t1191*t4963) - 1.*t1191*t370*t6018 - 1.*t1030*t370*t6100)*var2[4] + (-1.*t1030*t109*t6018 + t109*t1191*t6100 + t1030*t109*(0.10836*t1030*t1191 + t5900 + t5978 + t6010 - 0.10836*t1030*t1191*t6350 - 0.10836*t1030*t1191*t6989) + t109*t1191*(t7338 + t7448 + t7454 + t7458 + 0.10836*t6350*t7460 + 0.10836*t6989*t7460))*var2[5];
  p_output1[19]=(-1.*t370*(-1.*t1191*t370*t4516 + t1191*t370*t4573 - 1.*t109*t1191*t4757 - 1.*t109*t1191*t4963) + t109*t1191*(t109*t4516 - 1.*t109*t4573 - 1.*t370*t4757 - 1.*t370*t4963) - 1.*t109*(t7448 + t7454 + t7458) - 1.*t1191*t370*t7950)*var2[4] + (0. - 1.*t1030*t109*t7950 - 1.*t370*(-0.10836*t1030*t1191 + 0.10836*t1030*t1191*t6350 + 0.10836*t1030*t1191*t6989 + t8143 + t8239 + t8290))*var2[5];
  p_output1[20]=(-1.*t370*(t1030*t370*t4516 - 1.*t1030*t370*t4573 + t1030*t109*t4757 + t1030*t109*t4963) + t1030*t109*(-1.*t109*t4516 + t109*t4573 + t370*t4757 + t370*t4963) - 1.*t109*(t8143 + t8239 + t8290) - 1.*t1030*t370*t8719)*var2[4] + (0. - 1.*t370*(t6030 + t6031 + t6067 - 0.10836*t7332 - 0.10836*t6350*t7460 - 0.10836*t6989*t7460) + t109*t1191*t8719)*var2[5];
  p_output1[21]=t4275;
  p_output1[22]=t4294;
  p_output1[23]=t4332;
  p_output1[24]=(-1.*t1030*(0. + t1191*t4440 + t6067) - 1.*t1030*(-1.*t1191*t4440 + t7338 + t7458 + 0.10836*t7460))*var2[5];
  p_output1[25]=-0.01915*t1191*var2[5];
  p_output1[26]=0.01915*t1030*var2[5];
  p_output1[27]=0;
  p_output1[28]=-1.*t1030*var2[5];
  p_output1[29]=-1.*t1191*var2[5];
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



void dJb_Pelvis_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
