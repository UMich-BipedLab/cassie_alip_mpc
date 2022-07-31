/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:14 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "AMWorld_LeftToe_src.h"

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
  double t940;
  double t2529;
  double t3103;
  double t2574;
  double t3116;
  double t1878;
  double t3682;
  double t4084;
  double t4104;
  double t2956;
  double t3164;
  double t3202;
  double t4186;
  double t852;
  double t4860;
  double t5022;
  double t5205;
  double t1080;
  double t1160;
  double t1698;
  double t3520;
  double t4187;
  double t4223;
  double t4550;
  double t4661;
  double t4793;
  double t5300;
  double t6237;
  double t4811;
  double t5333;
  double t5788;
  double t839;
  double t6390;
  double t6657;
  double t6668;
  double t7216;
  double t6086;
  double t6988;
  double t7060;
  double t459;
  double t7245;
  double t7291;
  double t7388;
  double t7642;
  double t7195;
  double t7608;
  double t7615;
  double t209;
  double t7662;
  double t7822;
  double t7896;
  double t8758;
  double t177;
  double t8964;
  double t9034;
  double t9082;
  double t9115;
  double t9133;
  double t9141;
  double t9096;
  double t9199;
  double t9201;
  double t9204;
  double t9206;
  double t9208;
  double t9218;
  double t9220;
  double t9224;
  double t9203;
  double t9212;
  double t9213;
  double t9236;
  double t9241;
  double t9247;
  double t9248;
  double t9252;
  double t9217;
  double t9229;
  double t9230;
  double t9261;
  double t9262;
  double t9260;
  double t9266;
  double t9270;
  double t9277;
  double t9280;
  double t9282;
  double t9343;
  double t9345;
  double t9349;
  double t9342;
  double t9350;
  double t9367;
  double t9375;
  double t9376;
  double t9383;
  double t9385;
  double t9389;
  double t9368;
  double t9379;
  double t9380;
  double t9414;
  double t9418;
  double t9419;
  double t9420;
  double t9421;
  double t9382;
  double t9399;
  double t9402;
  double t9434;
  double t9437;
  double t9431;
  double t9439;
  double t9440;
  double t9447;
  double t9452;
  double t9461;
  double t9533;
  double t9542;
  double t9591;
  double t9549;
  double t9553;
  double t9559;
  double t9567;
  double t9404;
  double t9425;
  double t9426;
  double t9444;
  double t9462;
  double t9467;
  double t9470;
  double t9476;
  double t9483;
  double t9484;
  double t9485;
  double t9487;
  double t9488;
  double t9497;
  double t9498;
  double t7620;
  double t8597;
  double t8718;
  double t8792;
  double t8910;
  double t8951;
  double t9556;
  double t9570;
  double t9585;
  double t9590;
  double t9593;
  double t9595;
  double t9596;
  double t9603;
  double t9606;
  double t9611;
  double t9616;
  double t9617;
  double t9622;
  double t9623;
  double t9233;
  double t9254;
  double t9258;
  double t9272;
  double t9290;
  double t9295;
  double t9296;
  double t9298;
  double t9305;
  double t9310;
  double t9314;
  double t9317;
  double t9319;
  double t9323;
  double t9328;
  double t9678;
  double t9679;
  double t9691;
  double t9665;
  double t9667;
  double t9670;
  double t9709;
  double t9711;
  double t9716;
  double t9663;
  double t9671;
  double t9694;
  double t9697;
  double t9698;
  double t9702;
  double t9706;
  double t9718;
  double t9719;
  double t9722;
  double t9723;
  double t9725;
  double t9721;
  double t9726;
  double t9727;
  double t9732;
  double t9734;
  double t9736;
  double t9730;
  double t9737;
  double t9739;
  double t9742;
  double t9745;
  double t9746;
  double t9336;
  double t9511;
  double t9512;
  double t9624;
  double t9630;
  double t9638;
  double t9740;
  double t9747;
  double t9749;
  double t9753;
  double t9754;
  double t9756;
  double t9648;
  double t9649;
  double t9655;
  double t9656;
  double t9788;
  double t9789;
  double t9790;
  double t9776;
  double t9777;
  double t9780;
  double t9781;
  double t9783;
  double t9784;
  double t9787;
  double t9794;
  double t9795;
  double t9797;
  double t9799;
  double t9800;
  double t9796;
  double t9801;
  double t9805;
  double t9809;
  double t9810;
  double t9811;
  double t9807;
  double t9813;
  double t9814;
  double t9816;
  double t9817;
  double t9818;
  double t9815;
  double t9819;
  double t9820;
  double t9822;
  double t9823;
  double t9824;
  t940 = Cos(var1[3]);
  t2529 = Cos(var1[5]);
  t3103 = Sin(var1[4]);
  t2574 = Sin(var1[3]);
  t3116 = Sin(var1[5]);
  t1878 = Cos(var1[6]);
  t3682 = t940*t2529*t3103;
  t4084 = t2574*t3116;
  t4104 = t3682 + t4084;
  t2956 = -1.*t2529*t2574;
  t3164 = t940*t3103*t3116;
  t3202 = t2956 + t3164;
  t4186 = Sin(var1[6]);
  t852 = Cos(var1[8]);
  t4860 = t1878*t4104;
  t5022 = -1.*t3202*t4186;
  t5205 = t4860 + t5022;
  t1080 = Cos(var1[4]);
  t1160 = Cos(var1[7]);
  t1698 = t940*t1080*t1160;
  t3520 = t1878*t3202;
  t4187 = t4104*t4186;
  t4223 = t3520 + t4187;
  t4550 = Sin(var1[7]);
  t4661 = t4223*t4550;
  t4793 = t1698 + t4661;
  t5300 = Sin(var1[8]);
  t6237 = Cos(var1[9]);
  t4811 = t852*t4793;
  t5333 = t5205*t5300;
  t5788 = t4811 + t5333;
  t839 = Sin(var1[9]);
  t6390 = t852*t5205;
  t6657 = -1.*t4793*t5300;
  t6668 = t6390 + t6657;
  t7216 = Cos(var1[10]);
  t6086 = -1.*t839*t5788;
  t6988 = t6237*t6668;
  t7060 = t6086 + t6988;
  t459 = Sin(var1[10]);
  t7245 = t6237*t5788;
  t7291 = t839*t6668;
  t7388 = t7245 + t7291;
  t7642 = Cos(var1[11]);
  t7195 = t459*t7060;
  t7608 = t7216*t7388;
  t7615 = t7195 + t7608;
  t209 = Sin(var1[11]);
  t7662 = t7216*t7060;
  t7822 = -1.*t459*t7388;
  t7896 = t7662 + t7822;
  t8758 = Cos(var1[12]);
  t177 = Sin(var1[12]);
  t8964 = t8758*t209;
  t9034 = t7642*t177;
  t9082 = 0. + t8964 + t9034;
  t9115 = t7642*t8758;
  t9133 = -1.*t209*t177;
  t9141 = 0. + t9115 + t9133;
  t9096 = -1.*t459*t9082;
  t9199 = t7216*t9141;
  t9201 = 0. + t9096 + t9199;
  t9204 = t7216*t9082;
  t9206 = t459*t9141;
  t9208 = 0. + t9204 + t9206;
  t9218 = t6237*t9201;
  t9220 = -1.*t839*t9208;
  t9224 = 0. + t9218 + t9220;
  t9203 = t839*t9201;
  t9212 = t6237*t9208;
  t9213 = 0. + t9203 + t9212;
  t9236 = t852*t9224;
  t9241 = -1.*t9213*t5300;
  t9247 = 0. + t9236 + t9241;
  t9248 = t1160*t9247;
  t9252 = 0. + t9248;
  t9217 = t852*t9213;
  t9229 = t9224*t5300;
  t9230 = 0. + t9217 + t9229;
  t9261 = t4550*t9247;
  t9262 = 0. + t9261;
  t9260 = -1.*t4186*t9230;
  t9266 = t1878*t9262;
  t9270 = 0. + t9260 + t9266;
  t9277 = t1878*t9230;
  t9280 = t4186*t9262;
  t9282 = 0. + t9277 + t9280;
  t9343 = -1.*t7642*t8758;
  t9345 = t209*t177;
  t9349 = 0. + t9343 + t9345;
  t9342 = t459*t9082;
  t9350 = t7216*t9349;
  t9367 = 0. + t9342 + t9350;
  t9375 = -1.*t459*t9349;
  t9376 = 0. + t9204 + t9375;
  t9383 = -1.*t839*t9367;
  t9385 = t6237*t9376;
  t9389 = 0. + t9383 + t9385;
  t9368 = t6237*t9367;
  t9379 = t839*t9376;
  t9380 = 0. + t9368 + t9379;
  t9414 = t852*t9389;
  t9418 = -1.*t9380*t5300;
  t9419 = 0. + t9414 + t9418;
  t9420 = t1160*t9419;
  t9421 = 0. + t9420;
  t9382 = t852*t9380;
  t9399 = t9389*t5300;
  t9402 = 0. + t9382 + t9399;
  t9434 = t4550*t9419;
  t9437 = 0. + t9434;
  t9431 = -1.*t4186*t9402;
  t9439 = t1878*t9437;
  t9440 = 0. + t9431 + t9439;
  t9447 = t1878*t9402;
  t9452 = t4186*t9437;
  t9461 = 0. + t9447 + t9452;
  t9533 = -1.*t1160;
  t9542 = 0. + t9533;
  t9591 = 0. + t4550;
  t9549 = t1878*t9542;
  t9553 = 0. + t9549;
  t9559 = t9542*t4186;
  t9567 = 0. + t9559;
  t9404 = var2[7]*t9402;
  t9425 = var2[5]*t9421;
  t9426 = var2[6]*t9421;
  t9444 = t2529*t9440;
  t9462 = -1.*t3116*t9461;
  t9467 = 0. + t9444 + t9462;
  t9470 = var2[4]*t9467;
  t9476 = -1.*t3103*t9421;
  t9483 = t3116*t9440;
  t9484 = t2529*t9461;
  t9485 = 0. + t9483 + t9484;
  t9487 = t1080*t9485;
  t9488 = 0. + t9476 + t9487;
  t9497 = var2[3]*t9488;
  t9498 = 0. + t9404 + t9425 + t9426 + t9470 + t9497;
  t7620 = -1.*t209*t7615;
  t8597 = t7642*t7896;
  t8718 = t7620 + t8597;
  t8792 = t7642*t7615;
  t8910 = t209*t7896;
  t8951 = t8792 + t8910;
  t9556 = t2529*t9553;
  t9570 = -1.*t3116*t9567;
  t9585 = 0. + t9556 + t9570;
  t9590 = var2[4]*t9585;
  t9593 = var2[5]*t9591;
  t9595 = var2[6]*t9591;
  t9596 = t9553*t3116;
  t9603 = t2529*t9567;
  t9606 = 0. + t9596 + t9603;
  t9611 = t1080*t9606;
  t9616 = -1.*t3103*t9591;
  t9617 = 0. + t9611 + t9616;
  t9622 = var2[3]*t9617;
  t9623 = 0. + var2[9] + var2[10] + var2[11] + var2[12] + var2[8] + t9590 + t9593 + t9595 + t9622;
  t9233 = var2[7]*t9230;
  t9254 = var2[5]*t9252;
  t9258 = var2[6]*t9252;
  t9272 = t2529*t9270;
  t9290 = -1.*t3116*t9282;
  t9295 = 0. + t9272 + t9290;
  t9296 = var2[4]*t9295;
  t9298 = -1.*t3103*t9252;
  t9305 = t3116*t9270;
  t9310 = t2529*t9282;
  t9314 = 0. + t9305 + t9310;
  t9317 = t1080*t9314;
  t9319 = 0. + t9298 + t9317;
  t9323 = var2[3]*t9319;
  t9328 = 0. + t9233 + t9254 + t9258 + t9296 + t9323;
  t9678 = t2529*t2574*t3103;
  t9679 = -1.*t940*t3116;
  t9691 = t9678 + t9679;
  t9665 = t940*t2529;
  t9667 = t2574*t3103*t3116;
  t9670 = t9665 + t9667;
  t9709 = t1878*t9691;
  t9711 = -1.*t9670*t4186;
  t9716 = t9709 + t9711;
  t9663 = t1080*t1160*t2574;
  t9671 = t1878*t9670;
  t9694 = t9691*t4186;
  t9697 = t9671 + t9694;
  t9698 = t9697*t4550;
  t9702 = t9663 + t9698;
  t9706 = t852*t9702;
  t9718 = t9716*t5300;
  t9719 = t9706 + t9718;
  t9722 = t852*t9716;
  t9723 = -1.*t9702*t5300;
  t9725 = t9722 + t9723;
  t9721 = -1.*t839*t9719;
  t9726 = t6237*t9725;
  t9727 = t9721 + t9726;
  t9732 = t6237*t9719;
  t9734 = t839*t9725;
  t9736 = t9732 + t9734;
  t9730 = t459*t9727;
  t9737 = t7216*t9736;
  t9739 = t9730 + t9737;
  t9742 = t7216*t9727;
  t9745 = -1.*t459*t9736;
  t9746 = t9742 + t9745;
  t9336 = 0.000171*t9328;
  t9511 = -0.000099*t9498;
  t9512 = 0. + t9336 + t9511;
  t9624 = 0.000449*t9623;
  t9630 = -1.e-6*t9498;
  t9638 = 0. + t9624 + t9630;
  t9740 = -1.*t209*t9739;
  t9747 = t7642*t9746;
  t9749 = t9740 + t9747;
  t9753 = t7642*t9739;
  t9754 = t209*t9746;
  t9756 = t9753 + t9754;
  t9648 = -1.e-6*t9623;
  t9649 = -0.000099*t9328;
  t9655 = 0.000287*t9498;
  t9656 = t9648 + t9649 + t9655;
  t9788 = t1080*t2529*t1878;
  t9789 = -1.*t1080*t3116*t4186;
  t9790 = t9788 + t9789;
  t9776 = -1.*t1160*t3103;
  t9777 = t1080*t1878*t3116;
  t9780 = t1080*t2529*t4186;
  t9781 = t9777 + t9780;
  t9783 = t9781*t4550;
  t9784 = t9776 + t9783;
  t9787 = t852*t9784;
  t9794 = t9790*t5300;
  t9795 = t9787 + t9794;
  t9797 = t852*t9790;
  t9799 = -1.*t9784*t5300;
  t9800 = t9797 + t9799;
  t9796 = -1.*t839*t9795;
  t9801 = t6237*t9800;
  t9805 = t9796 + t9801;
  t9809 = t6237*t9795;
  t9810 = t839*t9800;
  t9811 = t9809 + t9810;
  t9807 = t459*t9805;
  t9813 = t7216*t9811;
  t9814 = t9807 + t9813;
  t9816 = t7216*t9805;
  t9817 = -1.*t459*t9811;
  t9818 = t9816 + t9817;
  t9815 = -1.*t209*t9814;
  t9819 = t7642*t9818;
  t9820 = t9815 + t9819;
  t9822 = t7642*t9814;
  t9823 = t209*t9818;
  t9824 = t9822 + t9823;
  p_output1[0]=(t177*t8718 + t8758*t8951)*t9512 + (-1.*t1160*t4223 + t1080*t4550*t940)*t9638 + (-1.*t8718*t8758 + t177*t8951)*t9656;
  p_output1[1]=t9638*(t1080*t2574*t4550 - 1.*t1160*t9697) + t9656*(-1.*t8758*t9749 + t177*t9756) + t9512*(t177*t9749 + t8758*t9756);
  p_output1[2]=t9638*(-1.*t3103*t4550 - 1.*t1160*t9781) + t9656*(-1.*t8758*t9820 + t177*t9824) + t9512*(t177*t9820 + t8758*t9824);
}



void AMWorld_LeftToe_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
