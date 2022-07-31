/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:03 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_RightRotationJoint_src.h"

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
  double t753;
  double t951;
  double t1400;
  double t2022;
  double t2387;
  double t3561;
  double t2831;
  double t3197;
  double t4297;
  double t218;
  double t314;
  double t360;
  double t608;
  double t3311;
  double t4477;
  double t4508;
  double t5791;
  double t5807;
  double t5810;
  double t213;
  double t7144;
  double t7231;
  double t7389;
  double t477;
  double t611;
  double t678;
  double t2372;
  double t2517;
  double t2698;
  double t5590;
  double t5606;
  double t5610;
  double t6524;
  double t6740;
  double t6809;
  double t9341;
  double t9361;
  double t9398;
  double t9402;
  double t9416;
  double t9429;
  double t9435;
  double t9437;
  double t9438;
  double t9497;
  double t9505;
  double t9506;
  double t9528;
  double t9529;
  double t9530;
  double t9553;
  double t9554;
  double t9555;
  double t9576;
  double t9577;
  double t9578;
  double t9443;
  double t9587;
  double t9588;
  double t9593;
  double t9594;
  double t9595;
  double t9609;
  double t9610;
  double t9611;
  double t9622;
  double t9623;
  double t9624;
  double t9582;
  double t9448;
  double t9452;
  double t9633;
  double t9634;
  double t9636;
  double t9637;
  double t9638;
  double t9602;
  double t9653;
  double t9654;
  double t9656;
  double t9661;
  double t9663;
  double t9618;
  double t9619;
  double t9620;
  double t9621;
  double t9627;
  double t9628;
  double t9629;
  double t9456;
  double t9463;
  double t9464;
  double t9671;
  double t9672;
  double t9673;
  double t9676;
  double t9677;
  double t9686;
  double t9687;
  double t9688;
  double t8137;
  double t9703;
  double t9704;
  double t9705;
  t753 = Sin(var1[3]);
  t951 = Cos(var1[13]);
  t1400 = -1.*t951;
  t2022 = 1. + t1400;
  t2387 = Sin(var1[13]);
  t3561 = Cos(var1[3]);
  t2831 = Cos(var1[5]);
  t3197 = Sin(var1[4]);
  t4297 = Sin(var1[5]);
  t218 = Cos(var1[14]);
  t314 = -1.*t218;
  t360 = 1. + t314;
  t608 = Sin(var1[14]);
  t3311 = -1.*t2831*t753*t3197;
  t4477 = t3561*t4297;
  t4508 = t3311 + t4477;
  t5791 = -1.*t3561*t2831;
  t5807 = -1.*t753*t3197*t4297;
  t5810 = t5791 + t5807;
  t213 = Cos(var1[4]);
  t7144 = t2387*t4508;
  t7231 = t951*t5810;
  t7389 = t7144 + t7231;
  t477 = -0.08055*t360;
  t611 = -0.135*t608;
  t678 = 0. + t477 + t611;
  t2372 = 0.07996*t2022;
  t2517 = 0.135*t2387;
  t2698 = 0. + t2372 + t2517;
  t5590 = -0.135*t2022;
  t5606 = 0.07996*t2387;
  t5610 = 0. + t5590 + t5606;
  t6524 = -0.135*t360;
  t6740 = 0.08055*t608;
  t6809 = 0. + t6524 + t6740;
  t9341 = t3561*t2831*t3197;
  t9361 = t753*t4297;
  t9398 = t9341 + t9361;
  t9402 = -1.*t2831*t753;
  t9416 = t3561*t3197*t4297;
  t9429 = t9402 + t9416;
  t9435 = t2387*t9398;
  t9437 = t951*t9429;
  t9438 = t9435 + t9437;
  t9497 = t3561*t213*t2831*t2387;
  t9505 = t951*t3561*t213*t4297;
  t9506 = t9497 + t9505;
  t9528 = t213*t2831*t2387*t753;
  t9529 = t951*t213*t753*t4297;
  t9530 = t9528 + t9529;
  t9553 = -1.*t2831*t2387*t3197;
  t9554 = -1.*t951*t3197*t4297;
  t9555 = t9553 + t9554;
  t9576 = t2831*t753;
  t9577 = -1.*t3561*t3197*t4297;
  t9578 = t9576 + t9577;
  t9443 = t951*t9398;
  t9587 = t2387*t9578;
  t9588 = t9443 + t9587;
  t9593 = t2831*t753*t3197;
  t9594 = -1.*t3561*t4297;
  t9595 = t9593 + t9594;
  t9609 = t951*t9595;
  t9610 = t2387*t5810;
  t9611 = t9609 + t9610;
  t9622 = t951*t213*t2831;
  t9623 = -1.*t213*t2387*t4297;
  t9624 = t9622 + t9623;
  t9582 = -1.*t2387*t9398;
  t9448 = -1.*t2387*t9429;
  t9452 = t9443 + t9448;
  t9633 = 0.135*t951;
  t9634 = t9633 + t5606;
  t9636 = 0.07996*t951;
  t9637 = -0.135*t2387;
  t9638 = t9636 + t9637;
  t9602 = -1.*t2387*t9595;
  t9653 = t3561*t2831;
  t9654 = t753*t3197*t4297;
  t9656 = t9653 + t9654;
  t9661 = -1.*t2387*t9656;
  t9663 = t9609 + t9661;
  t9618 = -1.*t213*t2831*t2387;
  t9619 = -1.*t951*t213*t4297;
  t9620 = t9618 + t9619;
  t9621 = -0.01004*t9620;
  t9627 = -0.135*t218*t9624;
  t9628 = t6809*t9624;
  t9629 = -0.08055*t608*t9624;
  t9456 = -1.*t3561*t213*t608;
  t9463 = t218*t9438;
  t9464 = t9456 + t9463;
  t9671 = -0.135*t218;
  t9672 = -0.08055*t608;
  t9673 = t9671 + t9672;
  t9676 = 0.08055*t218;
  t9677 = t9676 + t611;
  t9686 = t2387*t9595;
  t9687 = t951*t9656;
  t9688 = t9686 + t9687;
  t8137 = -1.*t218*t213*t753;
  t9703 = t213*t2831*t2387;
  t9704 = t951*t213*t4297;
  t9705 = t9703 + t9704;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2698*t4508 + t5610*t5810 + t6809*t7389 - 1.*t213*t678*t753 - 0.135*(t218*t7389 + t213*t608*t753) - 0.08055*(t608*t7389 + t8137) - 0.01004*(-1.*t2387*t5810 + t4508*t951);
  p_output1[10]=t213*t3561*t678 + t2698*t9398 + t5610*t9429 + t6809*t9438 - 0.08055*(t213*t218*t3561 + t608*t9438) - 0.01004*t9452 - 0.135*t9464;
  p_output1[11]=0;
  p_output1[12]=t213*t2698*t2831*t3561 + t213*t3561*t4297*t5610 - 1.*t3197*t3561*t678 + t6809*t9506 - 0.135*(t3197*t3561*t608 + t218*t9506) - 0.08055*(-1.*t218*t3197*t3561 + t608*t9506) - 0.01004*(-1.*t213*t2387*t3561*t4297 + t213*t2831*t3561*t951);
  p_output1[13]=t213*t2698*t2831*t753 + t213*t4297*t5610*t753 - 1.*t3197*t678*t753 - 0.01004*(-1.*t213*t2387*t4297*t753 + t213*t2831*t753*t951) + t6809*t9530 - 0.135*(t3197*t608*t753 + t218*t9530) - 0.08055*(-1.*t218*t3197*t753 + t608*t9530);
  p_output1[14]=-1.*t2698*t2831*t3197 - 1.*t3197*t4297*t5610 - 1.*t213*t678 - 0.01004*(t2387*t3197*t4297 - 1.*t2831*t3197*t951) + t6809*t9555 - 0.135*(t213*t608 + t218*t9555) - 0.08055*(-1.*t213*t218 + t608*t9555);
  p_output1[15]=t5610*t9398 + t2698*t9578 - 0.01004*(t951*t9578 + t9582) - 0.135*t218*t9588 - 0.08055*t608*t9588 + t6809*t9588;
  p_output1[16]=t2698*t5810 + t5610*t9595 - 0.01004*(t7231 + t9602) - 0.135*t218*t9611 - 0.08055*t608*t9611 + t6809*t9611;
  p_output1[17]=-1.*t213*t2698*t4297 + t213*t2831*t5610 + t9621 + t9627 + t9628 + t9629;
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
  p_output1[39]=-0.135*t218*t9452 - 0.08055*t608*t9452 + t6809*t9452 - 0.01004*(-1.*t9429*t951 + t9582) + t9398*t9634 + t9429*t9638;
  p_output1[40]=t9595*t9634 + t9638*t9656 - 0.01004*(t9602 - 1.*t951*t9656) - 0.135*t218*t9663 - 0.08055*t608*t9663 + t6809*t9663;
  p_output1[41]=t9621 + t9627 + t9628 + t9629 + t213*t2831*t9634 + t213*t4297*t9638;
  p_output1[42]=-0.135*(-1.*t213*t218*t3561 - 1.*t608*t9438) - 0.08055*t9464 + t213*t3561*t9673 + t9438*t9677;
  p_output1[43]=t213*t753*t9673 + t9677*t9688 - 0.08055*(-1.*t213*t608*t753 + t218*t9688) - 0.135*(t8137 - 1.*t608*t9688);
  p_output1[44]=-1.*t3197*t9673 + t9677*t9705 - 0.08055*(t3197*t608 + t218*t9705) - 0.135*(t218*t3197 - 1.*t608*t9705);
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



void Jp_RightRotationJoint_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
