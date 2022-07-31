/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:37 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftThigh_src.h"

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
  double t957;
  double t568;
  double t796;
  double t878;
  double t904;
  double t962;
  double t972;
  double t1043;
  double t1073;
  double t1163;
  double t953;
  double t1097;
  double t1106;
  double t539;
  double t1165;
  double t1190;
  double t1218;
  double t103;
  double t2095;
  double t2115;
  double t2207;
  double t1402;
  double t1422;
  double t1443;
  double t1601;
  double t2147;
  double t2305;
  double t2307;
  double t2411;
  double t2419;
  double t2577;
  double t2885;
  double t2887;
  double t2918;
  double t2935;
  double t1142;
  double t1268;
  double t1299;
  double t1514;
  double t1557;
  double t1593;
  double t1697;
  double t1737;
  double t1739;
  double t1807;
  double t1860;
  double t2386;
  double t2604;
  double t2648;
  double t2775;
  double t2794;
  double t2803;
  double t2810;
  double t2811;
  double t2819;
  double t2842;
  double t2851;
  double t2917;
  double t2945;
  double t2963;
  double t3000;
  double t3062;
  double t3063;
  double t3064;
  double t3092;
  double t3094;
  double t3190;
  double t3951;
  double t3687;
  double t3705;
  double t3791;
  double t3845;
  double t3870;
  double t3894;
  double t3928;
  double t4014;
  double t4031;
  double t4037;
  double t4068;
  double t4077;
  double t4085;
  double t4143;
  double t4150;
  double t4186;
  double t4195;
  double t3744;
  double t3786;
  double t4096;
  double t4199;
  double t4212;
  double t4231;
  double t4236;
  double t4242;
  double t4247;
  double t4272;
  double t3641;
  double t3649;
  double t3672;
  double t4307;
  double t4309;
  double t4324;
  double t4358;
  double t4374;
  double t4395;
  double t4402;
  double t3579;
  double t3614;
  double t3638;
  double t4215;
  double t4283;
  double t4303;
  double t4429;
  double t4457;
  double t4470;
  double t4351;
  double t4403;
  double t4411;
  double t3476;
  double t3516;
  double t3561;
  double t4304;
  double t4533;
  double t4697;
  double t4819;
  double t4895;
  double t4977;
  double t5030;
  double t5097;
  double t5178;
  double t5218;
  double t5250;
  double t5373;
  t957 = Cos(var1[6]);
  t568 = Cos(var1[8]);
  t796 = -1.*t568;
  t878 = 0. + t796;
  t904 = Sin(var1[6]);
  t962 = Sin(var1[7]);
  t972 = Sin(var1[8]);
  t1043 = t962*t972;
  t1073 = 0. + t1043;
  t1163 = Sin(var1[5]);
  t953 = -1.*t878*t904;
  t1097 = t957*t1073;
  t1106 = 0. + t953 + t1097;
  t539 = Cos(var1[5]);
  t1165 = t957*t878;
  t1190 = t904*t1073;
  t1218 = 0. + t1165 + t1190;
  t103 = Sin(var1[3]);
  t2095 = t568*t962;
  t2115 = 0. + t2095;
  t2207 = 0. + t972;
  t1402 = Cos(var1[3]);
  t1422 = Cos(var1[4]);
  t1443 = Cos(var1[7]);
  t1601 = Sin(var1[4]);
  t2147 = t904*t2115;
  t2305 = t957*t2207;
  t2307 = 0. + t2147 + t2305;
  t2411 = t957*t2115;
  t2419 = -1.*t904*t2207;
  t2577 = 0. + t2411 + t2419;
  t2885 = -1.*t957*t1443;
  t2887 = 0. + t2885;
  t2918 = -1.*t1443*t904;
  t2935 = 0. + t2918;
  t1142 = t539*t1106;
  t1268 = -1.*t1163*t1218;
  t1299 = 0. + t1142 + t1268;
  t1514 = t1443*t972;
  t1557 = 0. + t1514;
  t1593 = t1422*t1557;
  t1697 = t1163*t1106;
  t1737 = t539*t1218;
  t1739 = 0. + t1697 + t1737;
  t1807 = t1601*t1739;
  t1860 = 0. + t1593 + t1807;
  t2386 = -1.*t1163*t2307;
  t2604 = t539*t2577;
  t2648 = 0. + t2386 + t2604;
  t2775 = t1443*t568;
  t2794 = 0. + t2775;
  t2803 = t1422*t2794;
  t2810 = t539*t2307;
  t2811 = t1163*t2577;
  t2819 = 0. + t2810 + t2811;
  t2842 = t1601*t2819;
  t2851 = 0. + t2803 + t2842;
  t2917 = t539*t2887;
  t2945 = -1.*t1163*t2935;
  t2963 = 0. + t2917 + t2945;
  t3000 = t2887*t1163;
  t3062 = t539*t2935;
  t3063 = 0. + t3000 + t3062;
  t3064 = t1601*t3063;
  t3092 = 0. + t962;
  t3094 = t1422*t3092;
  t3190 = 0. + t3064 + t3094;
  t3951 = 1. + t796;
  t3687 = -1.*t957;
  t3705 = 1. + t3687;
  t3791 = -1.*t1443;
  t3845 = 1. + t3791;
  t3870 = 0.135*t3845;
  t3894 = 0.1708*t1443;
  t3928 = 0.08055*t962;
  t4014 = -0.08055*t3951;
  t4031 = -0.08045*t568;
  t4037 = 0.0598*t972;
  t4068 = 0. + t4014 + t4031 + t4037;
  t4077 = t962*t4068;
  t4085 = 0. + t3870 + t3894 + t3928 + t4077;
  t4143 = -0.01004*t3951;
  t4150 = -0.06984*t568;
  t4186 = 0.00010000000000000286*t972;
  t4195 = 0. + t4143 + t4150 + t4186;
  t3744 = 0.07996*t3705;
  t3786 = -0.135*t904;
  t4096 = t904*t4085;
  t4199 = t957*t4195;
  t4212 = 0. + t3744 + t3786 + t4096 + t4199;
  t4231 = 0.135*t3705;
  t4236 = 0.07996*t904;
  t4242 = t957*t4085;
  t4247 = -1.*t904*t4195;
  t4272 = 0. + t4231 + t4236 + t4242 + t4247;
  t3641 = t1422*t3063;
  t3649 = -1.*t1601*t3092;
  t3672 = 0. + t3641 + t3649;
  t4307 = t539*t4212;
  t4309 = t1163*t4272;
  t4324 = 0. + t4307 + t4309;
  t4358 = -0.08055*t3845;
  t4374 = -0.0358*t962;
  t4395 = t1443*t4068;
  t4402 = 0. + t4358 + t4374 + t4395;
  t3579 = -1.*t2794*t1601;
  t3614 = t1422*t2819;
  t3638 = 0. + t3579 + t3614;
  t4215 = -1.*t1163*t4212;
  t4283 = t539*t4272;
  t4303 = 0. + t4215 + t4283;
  t4429 = t1422*t4324;
  t4457 = -1.*t1601*t4402;
  t4470 = 0. + t4429 + t4457;
  t4351 = t1601*t4324;
  t4403 = t1422*t4402;
  t4411 = 0. + t4351 + t4403;
  t3476 = -1.*t1601*t1557;
  t3516 = t1422*t1739;
  t3561 = 0. + t3476 + t3516;
  t4304 = t2963*t4303;
  t4533 = -1.*t4303*t2648;
  t4697 = -1.*t2963*t4303;
  t4819 = t4303*t1299;
  t4895 = t4303*t2648;
  t4977 = -1.*t4303*t1299;
  t5030 = t3092*t4402;
  t5097 = -1.*t2794*t4402;
  t5178 = -1.*t3092*t4402;
  t5218 = t4402*t1557;
  t5250 = t2794*t4402;
  t5373 = -1.*t4402*t1557;
  p_output1[0]=0. - 1.*t103*t1299 + t1402*t1860;
  p_output1[1]=0. - 1.*t103*t2648 + t1402*t2851;
  p_output1[2]=0. - 1.*t103*t2963 + t1402*t3190;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1299*t1402 + t103*t1860;
  p_output1[7]=0. + t1402*t2648 + t103*t2851;
  p_output1[8]=0. + t1402*t2963 + t103*t3190;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3561;
  p_output1[13]=t3638;
  p_output1[14]=t3672;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3638*(t4304 + t3190*t4411 + t3672*t4470) + t3672*(-1.*t2851*t4411 - 1.*t3638*t4470 + t4533);
  p_output1[19]=t3561*(-1.*t3190*t4411 - 1.*t3672*t4470 + t4697) + t3672*(t1860*t4411 + t3561*t4470 + t4819);
  p_output1[20]=t3561*(t2851*t4411 + t3638*t4470 + t4895) + t3638*(-1.*t1860*t4411 - 1.*t3561*t4470 + t4977);
  p_output1[21]=t3561;
  p_output1[22]=t3638;
  p_output1[23]=t3672;
  p_output1[24]=t2648*(t4304 + t3063*t4324 + t5030) + t2963*(-1.*t2819*t4324 + t4533 + t5097);
  p_output1[25]=t1299*(-1.*t3063*t4324 + t4697 + t5178) + t2963*(t1739*t4324 + t4819 + t5218);
  p_output1[26]=t1299*(t2819*t4324 + t4895 + t5250) + t2648*(-1.*t1739*t4324 + t4977 + t5373);
  p_output1[27]=t1299;
  p_output1[28]=t2648;
  p_output1[29]=t2963;
  p_output1[30]=t2794*(t2935*t4212 + t2887*t4272 + t5030) + t3092*(-1.*t2307*t4212 - 1.*t2577*t4272 + t5097);
  p_output1[31]=t1557*(-1.*t2935*t4212 - 1.*t2887*t4272 + t5178) + t3092*(t1218*t4212 + t1106*t4272 + t5218);
  p_output1[32]=t1557*(t2307*t4212 + t2577*t4272 + t5250) + t2794*(-1.*t1218*t4212 - 1.*t1106*t4272 + t5373);
  p_output1[33]=t1557;
  p_output1[34]=t2794;
  p_output1[35]=t3092;
  p_output1[36]=0.07996*t1073 - 0.135*t878 + (-1.*t2115*t4085 - 1.*t2207*t4195 + t5097)*t962 + t2794*(0. - 1.*t1443*t4085 + t4402*t962);
  p_output1[37]=0.07996*t2115 - 0.135*t2207 + (t1073*t4085 + t5218 + t4195*t878)*t962 + t1557*(0. + t1443*t4085 - 1.*t4402*t962);
  p_output1[38]=0. - 0.07996*t1443 + t1557*(t2115*t4085 + t2207*t4195 + t5250) + t2794*(-1.*t1073*t4085 + t5373 - 1.*t4195*t878);
  p_output1[39]=t1557;
  p_output1[40]=t2794;
  p_output1[41]=t3092;
  p_output1[42]=0. - 0.0358*t972;
  p_output1[43]=0. - 0.0358*t568;
  p_output1[44]=-0.08055 + t972*(0. + t4195*t568 - 1.*t4068*t972) - 1.*t568*(0. + t4068*t568 + t4195*t972);
  p_output1[45]=t878;
  p_output1[46]=t2207;
  p_output1[47]=0.;
  p_output1[48]=-0.00010000000000000286;
  p_output1[49]=0.0598;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
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



void Jb_LeftThigh_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
