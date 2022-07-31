/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:41 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_LeftRotationJoint_src.h"

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
  double t805;
  double t34;
  double t108;
  double t179;
  double t807;
  double t1965;
  double t3213;
  double t3899;
  double t3956;
  double t385;
  double t809;
  double t1765;
  double t3979;
  double t4003;
  double t4004;
  double t4063;
  double t4067;
  double t4068;
  double t4070;
  double t4052;
  double t4053;
  double t4059;
  double t4087;
  double t3919;
  double t3962;
  double t3967;
  double t4007;
  double t4012;
  double t4013;
  double t4119;
  double t4122;
  double t4123;
  double t4126;
  double t4131;
  double t4133;
  double t4069;
  double t4073;
  double t4080;
  double t4089;
  double t4090;
  double t4091;
  double t4146;
  double t4148;
  double t4149;
  double t4183;
  double t4184;
  double t4185;
  double t4230;
  double t4232;
  double t4233;
  double t4267;
  double t4273;
  double t4278;
  double t4317;
  double t4324;
  double t4325;
  double t4136;
  double t4350;
  double t4352;
  double t4361;
  double t4364;
  double t4366;
  double t4377;
  double t4381;
  double t4386;
  double t4425;
  double t4426;
  double t4430;
  double t4336;
  double t4141;
  double t4142;
  double t4438;
  double t4443;
  double t4447;
  double t4448;
  double t4451;
  double t4476;
  double t4477;
  double t4478;
  double t4370;
  double t4489;
  double t4490;
  double t4415;
  double t4417;
  double t4420;
  double t4422;
  double t4432;
  double t4434;
  double t4435;
  double t4153;
  double t4155;
  double t4156;
  double t4502;
  double t4503;
  double t4504;
  double t4506;
  double t4507;
  double t4519;
  double t4521;
  double t4523;
  double t4106;
  double t4539;
  double t4543;
  double t4544;
  t805 = Cos(var1[3]);
  t34 = Cos(var1[5]);
  t108 = Sin(var1[3]);
  t179 = Sin(var1[4]);
  t807 = Sin(var1[5]);
  t1965 = Cos(var1[6]);
  t3213 = -1.*t1965;
  t3899 = 1. + t3213;
  t3956 = Sin(var1[6]);
  t385 = -1.*t34*t108*t179;
  t809 = t805*t807;
  t1765 = t385 + t809;
  t3979 = -1.*t805*t34;
  t4003 = -1.*t108*t179*t807;
  t4004 = t3979 + t4003;
  t4063 = Cos(var1[7]);
  t4067 = -1.*t4063;
  t4068 = 1. + t4067;
  t4070 = Sin(var1[7]);
  t4052 = t1965*t4004;
  t4053 = t1765*t3956;
  t4059 = t4052 + t4053;
  t4087 = Cos(var1[4]);
  t3919 = 0.07996*t3899;
  t3962 = -0.135*t3956;
  t3967 = 0. + t3919 + t3962;
  t4007 = 0.135*t3899;
  t4012 = 0.07996*t3956;
  t4013 = 0. + t4007 + t4012;
  t4119 = t805*t34*t179;
  t4122 = t108*t807;
  t4123 = t4119 + t4122;
  t4126 = -1.*t34*t108;
  t4131 = t805*t179*t807;
  t4133 = t4126 + t4131;
  t4069 = 0.135*t4068;
  t4073 = 0.08055*t4070;
  t4080 = 0. + t4069 + t4073;
  t4089 = -0.08055*t4068;
  t4090 = 0.135*t4070;
  t4091 = 0. + t4089 + t4090;
  t4146 = t1965*t4133;
  t4148 = t4123*t3956;
  t4149 = t4146 + t4148;
  t4183 = t805*t4087*t1965*t807;
  t4184 = t805*t4087*t34*t3956;
  t4185 = t4183 + t4184;
  t4230 = t4087*t1965*t108*t807;
  t4232 = t4087*t34*t108*t3956;
  t4233 = t4230 + t4232;
  t4267 = -1.*t1965*t179*t807;
  t4273 = -1.*t34*t179*t3956;
  t4278 = t4267 + t4273;
  t4317 = t34*t108;
  t4324 = -1.*t805*t179*t807;
  t4325 = t4317 + t4324;
  t4136 = t1965*t4123;
  t4350 = t4325*t3956;
  t4352 = t4136 + t4350;
  t4361 = t34*t108*t179;
  t4364 = -1.*t805*t807;
  t4366 = t4361 + t4364;
  t4377 = t1965*t4366;
  t4381 = t4004*t3956;
  t4386 = t4377 + t4381;
  t4425 = t4087*t34*t1965;
  t4426 = -1.*t4087*t807*t3956;
  t4430 = t4425 + t4426;
  t4336 = -1.*t4123*t3956;
  t4141 = -1.*t4133*t3956;
  t4142 = t4136 + t4141;
  t4438 = -0.135*t1965;
  t4443 = t4438 + t4012;
  t4447 = 0.07996*t1965;
  t4448 = 0.135*t3956;
  t4451 = t4447 + t4448;
  t4476 = t805*t34;
  t4477 = t108*t179*t807;
  t4478 = t4476 + t4477;
  t4370 = -1.*t4366*t3956;
  t4489 = -1.*t4478*t3956;
  t4490 = t4377 + t4489;
  t4415 = -1.*t4087*t1965*t807;
  t4417 = -1.*t4087*t34*t3956;
  t4420 = t4415 + t4417;
  t4422 = -0.01004*t4420;
  t4432 = 0.135*t4063*t4430;
  t4434 = t4430*t4080;
  t4435 = -0.08055*t4430*t4070;
  t4153 = t4063*t4149;
  t4155 = -1.*t805*t4087*t4070;
  t4156 = t4153 + t4155;
  t4502 = 0.135*t4063;
  t4503 = -0.08055*t4070;
  t4504 = t4502 + t4503;
  t4506 = 0.08055*t4063;
  t4507 = t4506 + t4090;
  t4519 = t1965*t4478;
  t4521 = t4366*t3956;
  t4523 = t4519 + t4521;
  t4106 = -1.*t4087*t4063*t108;
  t4539 = t4087*t1965*t807;
  t4543 = t4087*t34*t3956;
  t4544 = t4539 + t4543;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t1765*t3967 - 0.01004*(t1765*t1965 - 1.*t3956*t4004) + t4004*t4013 + t4059*t4080 + 0.135*(t4059*t4063 + t108*t4070*t4087) - 1.*t108*t4087*t4091 - 0.08055*(t4059*t4070 + t4106);
  p_output1[10]=t3967*t4123 + t4013*t4133 - 0.01004*t4142 + t4080*t4149 + 0.135*t4156 + t4087*t4091*t805 - 0.08055*(t4070*t4149 + t4063*t4087*t805);
  p_output1[11]=0;
  p_output1[12]=t4080*t4185 + t34*t3967*t4087*t805 - 1.*t179*t4091*t805 - 0.08055*(t4070*t4185 - 1.*t179*t4063*t805) + 0.135*(t4063*t4185 + t179*t4070*t805) + t4013*t4087*t805*t807 - 0.01004*(t1965*t34*t4087*t805 - 1.*t3956*t4087*t805*t807);
  p_output1[13]=t108*t34*t3967*t4087 - 1.*t108*t179*t4091 + t4080*t4233 + 0.135*(t108*t179*t4070 + t4063*t4233) - 0.08055*(-1.*t108*t179*t4063 + t4070*t4233) + t108*t4013*t4087*t807 - 0.01004*(t108*t1965*t34*t4087 - 1.*t108*t3956*t4087*t807);
  p_output1[14]=-1.*t179*t34*t3967 - 1.*t4087*t4091 + t4080*t4278 + 0.135*(t4070*t4087 + t4063*t4278) - 0.08055*(-1.*t4063*t4087 + t4070*t4278) - 1.*t179*t4013*t807 - 0.01004*(-1.*t179*t1965*t34 + t179*t3956*t807);
  p_output1[15]=t4013*t4123 + t3967*t4325 - 0.01004*(t1965*t4325 + t4336) + 0.135*t4063*t4352 - 0.08055*t4070*t4352 + t4080*t4352;
  p_output1[16]=t3967*t4004 + t4013*t4366 - 0.01004*(t4052 + t4370) + 0.135*t4063*t4386 - 0.08055*t4070*t4386 + t4080*t4386;
  p_output1[17]=t34*t4013*t4087 + t4422 + t4432 + t4434 + t4435 - 1.*t3967*t4087*t807;
  p_output1[18]=0.135*t4063*t4142 - 0.08055*t4070*t4142 + t4080*t4142 - 0.01004*(-1.*t1965*t4133 + t4336) + t4123*t4443 + t4133*t4451;
  p_output1[19]=t4366*t4443 + t4451*t4478 - 0.01004*(t4370 - 1.*t1965*t4478) + 0.135*t4063*t4490 - 0.08055*t4070*t4490 + t4080*t4490;
  p_output1[20]=t4422 + t4432 + t4434 + t4435 + t34*t4087*t4443 + t4087*t4451*t807;
  p_output1[21]=-0.08055*t4156 + t4149*t4507 + t4087*t4504*t805 + 0.135*(-1.*t4070*t4149 - 1.*t4063*t4087*t805);
  p_output1[22]=t108*t4087*t4504 + t4507*t4523 - 0.08055*(-1.*t108*t4070*t4087 + t4063*t4523) + 0.135*(t4106 - 1.*t4070*t4523);
  p_output1[23]=-1.*t179*t4504 + t4507*t4544 - 0.08055*(t179*t4070 + t4063*t4544) + 0.135*(t179*t4063 - 1.*t4070*t4544);
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



void Jp_LeftRotationJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
