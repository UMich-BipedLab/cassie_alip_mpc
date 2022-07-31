/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:59 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMWorld_LeftPelvisRotation_src.h"

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
  double t238;
  double t1619;
  double t2625;
  double t1582;
  double t2836;
  double t2621;
  double t2905;
  double t3037;
  double t241;
  double t329;
  double t6207;
  double t572;
  double t730;
  double t908;
  double t1181;
  double t3220;
  double t3315;
  double t3630;
  double t3691;
  double t4058;
  double t4172;
  double t4206;
  double t4488;
  double t4644;
  double t4884;
  double t4925;
  double t4946;
  double t4986;
  double t5082;
  double t5414;
  double t5420;
  double t6505;
  double t6521;
  double t6552;
  double t6218;
  double t6219;
  double t6481;
  double t1250;
  double t4564;
  double t5431;
  double t5660;
  double t6740;
  double t6741;
  double t6909;
  double t6957;
  double t9162;
  double t9187;
  double t9221;
  double t8707;
  double t8723;
  double t8980;
  double t7652;
  double t7810;
  double t7825;
  double t8399;
  double t9335;
  double t9395;
  double t9398;
  double t9131;
  double t9294;
  double t9298;
  double t9404;
  double t9410;
  double t9414;
  double t9416;
  double t9491;
  double t9492;
  double t9494;
  double t9486;
  double t9487;
  double t9489;
  double t9423;
  double t9432;
  double t9434;
  double t9437;
  double t9446;
  double t9448;
  double t9453;
  double t9455;
  double t9556;
  double t9559;
  double t9560;
  double t9561;
  double t9563;
  double t9565;
  double t9566;
  double t9567;
  double t9568;
  double t9569;
  double t9570;
  double t9590;
  double t9591;
  double t9593;
  double t9564;
  double t9571;
  double t9572;
  double t9498;
  double t9499;
  double t9502;
  double t9579;
  double t9580;
  double t9581;
  double t9490;
  double t9495;
  double t9496;
  double t9585;
  double t9586;
  double t9587;
  double t6497;
  double t9533;
  double t9534;
  double t9535;
  double t9529;
  double t9530;
  double t9531;
  double t9576;
  double t9582;
  double t9589;
  double t9605;
  double t9613;
  double t9614;
  double t9617;
  double t9622;
  double t9629;
  double t9630;
  double t9631;
  double t9632;
  double t9633;
  double t9634;
  double t9635;
  double t9636;
  double t9637;
  t238 = Cos(var1[4]);
  t1619 = Cos(var1[6]);
  t2625 = Sin(var1[5]);
  t1582 = Cos(var1[5]);
  t2836 = Sin(var1[6]);
  t2621 = t1582*t1619;
  t2905 = -1.*t2625*t2836;
  t3037 = 0. + t2621 + t2905;
  t241 = Sin(var1[3]);
  t329 = Sin(var1[4]);
  t6207 = Cos(var1[3]);
  t572 = -1.*t329;
  t730 = 0. + t572;
  t908 = var2[3]*t730;
  t1181 = 0. + var2[5] + var2[6] + t908;
  t3220 = var2[4]*t3037;
  t3315 = t1619*t2625;
  t3630 = t1582*t2836;
  t3691 = 0. + t3315 + t3630;
  t4058 = t238*t3691;
  t4172 = 0. + t4058;
  t4206 = var2[3]*t4172;
  t4488 = 0. + t3220 + t4206;
  t4644 = -1.*t1619*t2625;
  t4884 = -1.*t1582*t2836;
  t4925 = 0. + t4644 + t4884;
  t4946 = var2[4]*t4925;
  t4986 = t238*t3037;
  t5082 = 0. + t4986;
  t5414 = var2[3]*t5082;
  t5420 = 0. + t4946 + t5414;
  t6505 = -1.*t1582*t241*t329;
  t6521 = t6207*t2625;
  t6552 = t6505 + t6521;
  t6218 = -1.*t6207*t1582;
  t6219 = -1.*t241*t329*t2625;
  t6481 = t6218 + t6219;
  t1250 = 0.00272*t1181;
  t4564 = 1.e-6*t4488;
  t5431 = 2.e-6*t5420;
  t5660 = t1250 + t4564 + t5431;
  t6740 = 1.e-6*t1181;
  t6741 = 0.00559*t4488;
  t6909 = 3.e-6*t5420;
  t6957 = t6740 + t6741 + t6909;
  t9162 = t6207*t1582*t329;
  t9187 = t241*t2625;
  t9221 = t9162 + t9187;
  t8707 = -1.*t1582*t241;
  t8723 = t6207*t329*t2625;
  t8980 = t8707 + t8723;
  t7652 = 2.e-6*t1181;
  t7810 = 3.e-6*t4488;
  t7825 = 0.00464*t5420;
  t8399 = t7652 + t7810 + t7825;
  t9335 = t1619*t9221;
  t9395 = -1.*t8980*t2836;
  t9398 = t9335 + t9395;
  t9131 = t1619*t8980;
  t9294 = t9221*t2836;
  t9298 = t9131 + t9294;
  t9404 = -2.e-6*var2[3]*t238;
  t9410 = -3.e-6*var2[3]*t329*t3691;
  t9414 = -0.00464*var2[3]*t329*t3037;
  t9416 = t9404 + t9410 + t9414;
  t9491 = t6207*t1582;
  t9492 = t241*t329*t2625;
  t9494 = t9491 + t9492;
  t9486 = t1582*t241*t329;
  t9487 = -1.*t6207*t2625;
  t9489 = t9486 + t9487;
  t9423 = -1.e-6*var2[3]*t238;
  t9432 = -0.00559*var2[3]*t329*t3691;
  t9434 = -3.e-6*var2[3]*t329*t3037;
  t9437 = t9423 + t9432 + t9434;
  t9446 = -0.00272*var2[3]*t238;
  t9448 = -1.e-6*var2[3]*t329*t3691;
  t9453 = -2.e-6*var2[3]*t329*t3037;
  t9455 = t9446 + t9448 + t9453;
  t9556 = t4644 + t4884;
  t9559 = var2[4]*t9556;
  t9560 = t2621 + t2905;
  t9561 = var2[3]*t238*t9560;
  t9563 = t9559 + t9561;
  t9565 = var2[3]*t238*t9556;
  t9566 = -1.*t1582*t1619;
  t9567 = t2625*t2836;
  t9568 = t9566 + t9567;
  t9569 = var2[4]*t9568;
  t9570 = t9565 + t9569;
  t9590 = t1582*t241;
  t9591 = -1.*t6207*t329*t2625;
  t9593 = t9590 + t9591;
  t9564 = 1.e-6*t9563;
  t9571 = 2.e-6*t9570;
  t9572 = t9564 + t9571;
  t9498 = t1619*t9494;
  t9499 = t9489*t2836;
  t9502 = t9498 + t9499;
  t9579 = 0.00559*t9563;
  t9580 = 3.e-6*t9570;
  t9581 = t9579 + t9580;
  t9490 = t1619*t9489;
  t9495 = -1.*t9494*t2836;
  t9496 = t9490 + t9495;
  t9585 = 3.e-6*t9563;
  t9586 = 0.00464*t9570;
  t9587 = t9585 + t9586;
  t6497 = t1619*t6481;
  t9533 = t238*t1619*t2625;
  t9534 = t238*t1582*t2836;
  t9535 = t9533 + t9534;
  t9529 = t238*t1582*t1619;
  t9530 = -1.*t238*t2625*t2836;
  t9531 = t9529 + t9530;
  t9576 = t6207*t238*t9572;
  t9582 = t9298*t9581;
  t9589 = t9398*t9587;
  t9605 = -1.*t9221*t2836;
  t9613 = t238*t241*t9572;
  t9614 = t9502*t9581;
  t9617 = t9496*t9587;
  t9622 = -1.*t9489*t2836;
  t9629 = -1.*t329*t9572;
  t9630 = t9535*t9581;
  t9631 = t9531*t9587;
  t9632 = t9531*t6957;
  t9633 = -1.*t238*t1619*t2625;
  t9634 = -1.*t238*t1582*t2836;
  t9635 = t9633 + t9634;
  t9636 = t9635*t8399;
  t9637 = t9629 + t9630 + t9631 + t9632 + t9636;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-1.*t238*t241*t5660 + (t6497 + t2836*t6552)*t6957 + (-1.*t2836*t6481 + t1619*t6552)*t8399;
  p_output1[10]=t238*t5660*t6207 + t6957*t9298 + t8399*t9398;
  p_output1[11]=0;
  p_output1[12]=-1.*t329*t5660*t6207 + (t1619*t238*t2625*t6207 + t1582*t238*t2836*t6207)*t6957 + (t1582*t1619*t238*t6207 - 1.*t238*t2625*t2836*t6207)*t8399 + t9398*t9416 + t9298*t9437 + t238*t6207*t9455;
  p_output1[13]=-1.*t241*t329*t5660 + (t1619*t238*t241*t2625 + t1582*t238*t241*t2836)*t6957 + (t1582*t1619*t238*t241 - 1.*t238*t241*t2625*t2836)*t8399 + t238*t241*t9455 + t9416*t9496 + t9437*t9502;
  p_output1[14]=-1.*t238*t5660 + (-1.*t1619*t2625*t329 - 1.*t1582*t2836*t329)*t6957 + (-1.*t1582*t1619*t329 + t2625*t2836*t329)*t8399 - 1.*t329*t9455 + t9416*t9531 + t9437*t9535;
  p_output1[15]=t9576 + t9582 + t9589 + t6957*(t9335 + t2836*t9593) + t8399*(t1619*t9593 + t9605);
  p_output1[16]=t6957*(t2836*t6481 + t9490) + t9613 + t9614 + t9617 + t8399*(t6497 + t9622);
  p_output1[17]=t9637;
  p_output1[18]=t6957*t9398 + t9576 + t9582 + t9589 + t8399*(-1.*t1619*t8980 + t9605);
  p_output1[19]=t6957*t9496 + t9613 + t9614 + t9617 + t8399*(-1.*t1619*t9494 + t9622);
  p_output1[20]=t9637;
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



void Jq_AMWorld_LeftPelvisRotation_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
