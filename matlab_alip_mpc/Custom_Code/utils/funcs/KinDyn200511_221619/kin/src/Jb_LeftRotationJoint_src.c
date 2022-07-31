/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:44 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jb_LeftRotationJoint_src.h"

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
  double t1081;
  double t454;
  double t890;
  double t1287;
  double t412;
  double t2894;
  double t1595;
  double t1656;
  double t2980;
  double t2983;
  double t3282;
  double t3283;
  double t3405;
  double t4189;
  double t4196;
  double t4246;
  double t4249;
  double t3368;
  double t997;
  double t1382;
  double t1391;
  double t1740;
  double t2268;
  double t2450;
  double t2469;
  double t2521;
  double t3188;
  double t3292;
  double t3294;
  double t3857;
  double t4028;
  double t4082;
  double t4109;
  double t4136;
  double t4150;
  double t4177;
  double t4210;
  double t4251;
  double t4255;
  double t4264;
  double t4270;
  double t4281;
  double t4327;
  double t4332;
  double t4348;
  double t4367;
  double t4572;
  double t4580;
  double t4586;
  double t4593;
  double t4603;
  double t4614;
  double t4627;
  double t4581;
  double t4633;
  double t4636;
  double t4638;
  double t4644;
  double t4650;
  double t4653;
  double t4655;
  double t4656;
  double t4669;
  double t4671;
  double t4672;
  double t4680;
  double t4681;
  double t4691;
  double t4536;
  double t4543;
  double t4570;
  double t4530;
  double t4531;
  double t4533;
  double t4640;
  double t4659;
  double t4663;
  double t4699;
  double t4703;
  double t4705;
  double t4675;
  double t4694;
  double t4696;
  double t4513;
  double t4517;
  double t4665;
  double t4719;
  double t4756;
  double t4770;
  double t4789;
  double t4797;
  double t4832;
  double t4837;
  t1081 = Cos(var1[5]);
  t454 = Cos(var1[6]);
  t890 = Sin(var1[5]);
  t1287 = Sin(var1[6]);
  t412 = Sin(var1[3]);
  t2894 = Sin(var1[7]);
  t1595 = Cos(var1[3]);
  t1656 = Sin(var1[4]);
  t2980 = t454*t2894;
  t2983 = 0. + t2980;
  t3282 = t1287*t2894;
  t3283 = 0. + t3282;
  t3405 = Cos(var1[7]);
  t4189 = -1.*t454*t3405;
  t4196 = 0. + t4189;
  t4246 = -1.*t3405*t1287;
  t4249 = 0. + t4246;
  t3368 = Cos(var1[4]);
  t997 = t454*t890;
  t1382 = t1081*t1287;
  t1391 = 0. + t997 + t1382;
  t1740 = -1.*t1081*t454;
  t2268 = t890*t1287;
  t2450 = 0. + t1740 + t2268;
  t2469 = t1656*t2450;
  t2521 = 0. + t2469;
  t3188 = t1081*t2983;
  t3292 = -1.*t890*t3283;
  t3294 = 0. + t3188 + t3292;
  t3857 = 0. + t3405;
  t4028 = t3368*t3857;
  t4082 = t890*t2983;
  t4109 = t1081*t3283;
  t4136 = 0. + t4082 + t4109;
  t4150 = t1656*t4136;
  t4177 = 0. + t4028 + t4150;
  t4210 = t1081*t4196;
  t4251 = -1.*t890*t4249;
  t4255 = 0. + t4210 + t4251;
  t4264 = t4196*t890;
  t4270 = t1081*t4249;
  t4281 = 0. + t4264 + t4270;
  t4327 = t1656*t4281;
  t4332 = 0. + t2894;
  t4348 = t3368*t4332;
  t4367 = 0. + t4327 + t4348;
  t4572 = -1.*t454;
  t4580 = 1. + t4572;
  t4586 = -1.*t3405;
  t4593 = 1. + t4586;
  t4603 = 0.135*t4593;
  t4614 = 0.135*t3405;
  t4627 = 0. + t4603 + t4614;
  t4581 = 0.135*t4580;
  t4633 = t454*t4627;
  t4636 = 0.09*t1287;
  t4638 = 0. + t4581 + t4633 + t4636;
  t4644 = 0.07996*t4580;
  t4650 = -0.01004*t454;
  t4653 = -0.135*t1287;
  t4655 = t4627*t1287;
  t4656 = 0. + t4644 + t4650 + t4653 + t4655;
  t4669 = -0.08055*t4593;
  t4671 = -0.08055*t3405;
  t4672 = 0. + t4669 + t4671;
  t4680 = t890*t4638;
  t4681 = t1081*t4656;
  t4691 = 0. + t4680 + t4681;
  t4536 = t3368*t4281;
  t4543 = -1.*t1656*t4332;
  t4570 = 0. + t4536 + t4543;
  t4530 = -1.*t3857*t1656;
  t4531 = t3368*t4136;
  t4533 = 0. + t4530 + t4531;
  t4640 = t1081*t4638;
  t4659 = -1.*t890*t4656;
  t4663 = 0. + t4640 + t4659;
  t4699 = -1.*t4672*t1656;
  t4703 = t3368*t4691;
  t4705 = 0. + t4699 + t4703;
  t4675 = t3368*t4672;
  t4694 = t1656*t4691;
  t4696 = 0. + t4675 + t4694;
  t4513 = t3368*t2450;
  t4517 = 0. + t4513;
  t4665 = t4663*t4255;
  t4719 = -1.*t4663*t3294;
  t4756 = t1391*t4663;
  t4770 = -1.*t4663*t4255;
  t4789 = -1.*t1391*t4663;
  t4797 = t4663*t3294;
  t4832 = t4672*t4332;
  t4837 = -1.*t4672*t3857;
  p_output1[0]=0. + t1595*t2521 - 1.*t1391*t412;
  p_output1[1]=0. - 1.*t3294*t412 + t1595*t4177;
  p_output1[2]=0. - 1.*t412*t4255 + t1595*t4367;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1391*t1595 + t2521*t412;
  p_output1[7]=0. + t1595*t3294 + t412*t4177;
  p_output1[8]=0. + t1595*t4255 + t412*t4367;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4517;
  p_output1[13]=t4533;
  p_output1[14]=t4570;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4533*(t4665 + t4367*t4696 + t4570*t4705) + t4570*(-1.*t4177*t4696 - 1.*t4533*t4705 + t4719);
  p_output1[19]=t4570*(t2521*t4696 + t4517*t4705 + t4756) + t4517*(-1.*t4367*t4696 - 1.*t4570*t4705 + t4770);
  p_output1[20]=t4533*(-1.*t2521*t4696 - 1.*t4517*t4705 + t4789) + t4517*(t4177*t4696 + t4533*t4705 + t4797);
  p_output1[21]=t4517;
  p_output1[22]=t4533;
  p_output1[23]=t4570;
  p_output1[24]=0. + t3294*(t4665 + t4281*t4691 + t4832) + t4255*(-1.*t4136*t4691 + t4719 + t4837);
  p_output1[25]=t4255*(0. + t2450*t4691 + t4756) + t1391*(-1.*t4332*t4672 - 1.*t4281*t4691 + t4770);
  p_output1[26]=t3294*(0. - 1.*t2450*t4691 + t4789) + t1391*(t3857*t4672 + t4136*t4691 + t4797);
  p_output1[27]=t1391;
  p_output1[28]=t3294;
  p_output1[29]=t4255;
  p_output1[30]=0. + t3857*(t4196*t4638 + t4249*t4656 + t4832) + t4332*(-1.*t2983*t4638 - 1.*t3283*t4656 + t4837);
  p_output1[31]=0. + t4332*(0. + t1287*t4638 - 1.*t454*t4656);
  p_output1[32]=0. + t3857*(0. - 1.*t1287*t4638 + t454*t4656);
  p_output1[33]=0.;
  p_output1[34]=t3857;
  p_output1[35]=t4332;
  p_output1[36]=0.135 + t3405*(0. - 1.*t3405*t4627 + t2894*t4672) + t2894*(0. - 1.*t2894*t4627 - 1.*t3405*t4672);
  p_output1[37]=0. + 0.09*t2894;
  p_output1[38]=0. - 0.09*t3405;
  p_output1[39]=0.;
  p_output1[40]=t3857;
  p_output1[41]=t4332;
  p_output1[42]=0.;
  p_output1[43]=0.;
  p_output1[44]=0.;
  p_output1[45]=-1.;
  p_output1[46]=0.;
  p_output1[47]=0.;
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



void Jb_LeftRotationJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
