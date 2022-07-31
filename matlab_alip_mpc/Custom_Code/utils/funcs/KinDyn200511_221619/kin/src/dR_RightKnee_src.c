/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:09 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dR_RightKnee_src.h"

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
  double t190;
  double t202;
  double t220;
  double t491;
  double t150;
  double t632;
  double t882;
  double t343;
  double t717;
  double t840;
  double t39;
  double t1078;
  double t1280;
  double t1631;
  double t1662;
  double t1677;
  double t1847;
  double t1962;
  double t1997;
  double t2030;
  double t8;
  double t3295;
  double t3010;
  double t3419;
  double t3432;
  double t3606;
  double t3608;
  double t3611;
  double t2205;
  double t3493;
  double t3684;
  double t3962;
  double t4098;
  double t4137;
  double t4142;
  double t4389;
  double t4419;
  double t4436;
  double t4442;
  double t4449;
  double t4470;
  double t4499;
  double t4517;
  double t4519;
  double t4637;
  double t4638;
  double t4646;
  double t4685;
  double t4918;
  double t4960;
  double t4991;
  double t5000;
  double t5004;
  double t5012;
  double t5016;
  double t5104;
  double t5130;
  double t5134;
  double t5148;
  double t5170;
  double t5209;
  double t5135;
  double t5211;
  double t5229;
  double t5250;
  double t5251;
  double t5260;
  double t5266;
  double t5267;
  double t5315;
  double t5365;
  double t5366;
  double t5373;
  double t5385;
  double t5387;
  double t5390;
  double t5391;
  double t5394;
  double t5397;
  double t5431;
  double t5432;
  double t5433;
  double t5435;
  double t5437;
  double t5462;
  double t5465;
  double t5470;
  double t5503;
  double t5509;
  double t5522;
  double t5524;
  double t5529;
  double t5530;
  double t5532;
  double t5534;
  double t5536;
  double t5570;
  double t5571;
  double t5578;
  double t5579;
  double t5079;
  double t5081;
  double t5086;
  double t5629;
  double t5650;
  double t5653;
  double t5670;
  double t5674;
  double t5677;
  double t5681;
  double t5712;
  double t5716;
  double t5722;
  double t5723;
  double t5727;
  double t5728;
  double t5745;
  double t5746;
  double t5747;
  double t5766;
  double t5773;
  double t5775;
  double t5754;
  double t5776;
  double t5781;
  double t5782;
  double t5786;
  double t5797;
  double t5803;
  double t5804;
  double t5805;
  double t5811;
  double t5813;
  double t5816;
  double t5833;
  double t5839;
  double t5847;
  double t5858;
  double t5896;
  double t5897;
  double t5899;
  double t5904;
  double t5906;
  double t5907;
  double t5908;
  double t5938;
  double t5964;
  double t841;
  double t2135;
  double t2145;
  double t2239;
  double t2270;
  double t2380;
  double t4073;
  double t4147;
  double t4179;
  double t4313;
  double t4317;
  double t4321;
  double t4644;
  double t4704;
  double t4706;
  double t4791;
  double t4807;
  double t4809;
  double t4917;
  double t4992;
  double t4998;
  double t6112;
  double t5246;
  double t5328;
  double t5336;
  double t5340;
  double t5344;
  double t5349;
  double t5382;
  double t5399;
  double t5406;
  double t5415;
  double t5425;
  double t5426;
  double t5461;
  double t5474;
  double t5475;
  double t5485;
  double t5488;
  double t5492;
  double t5575;
  double t5581;
  double t5583;
  double t5603;
  double t5606;
  double t5607;
  double t5090;
  double t5091;
  double t5628;
  double t5656;
  double t5666;
  double t5688;
  double t5691;
  double t5692;
  double t6222;
  double t6254;
  double t6257;
  double t6259;
  double t5810;
  double t5819;
  double t5821;
  double t5872;
  double t5876;
  double t5878;
  double t6270;
  double t5901;
  double t5968;
  double t5972;
  double t5981;
  double t5982;
  double t5984;
  t190 = Cos(var1[3]);
  t202 = Cos(var1[4]);
  t220 = Cos(var1[5]);
  t491 = Sin(var1[13]);
  t150 = Cos(var1[13]);
  t632 = Sin(var1[5]);
  t882 = Cos(var1[15]);
  t343 = t150*t190*t202*t220;
  t717 = -1.*t190*t202*t491*t632;
  t840 = t343 + t717;
  t39 = Sin(var1[15]);
  t1078 = Cos(var1[14]);
  t1280 = Sin(var1[4]);
  t1631 = -1.*t1078*t190*t1280;
  t1662 = Sin(var1[14]);
  t1677 = t190*t202*t220*t491;
  t1847 = t150*t190*t202*t632;
  t1962 = t1677 + t1847;
  t1997 = t1662*t1962;
  t2030 = t1631 + t1997;
  t8 = Sin(var1[16]);
  t3295 = Sin(var1[3]);
  t3010 = t190*t220*t1280;
  t3419 = t3295*t632;
  t3432 = t3010 + t3419;
  t3606 = t220*t3295;
  t3608 = -1.*t190*t1280*t632;
  t3611 = t3606 + t3608;
  t2205 = Cos(var1[16]);
  t3493 = -1.*t491*t3432;
  t3684 = t150*t3611;
  t3962 = t3493 + t3684;
  t4098 = t150*t3432;
  t4137 = t491*t3611;
  t4142 = t4098 + t4137;
  t4389 = -1.*t190*t202*t1662;
  t4419 = t491*t3432;
  t4436 = -1.*t220*t3295;
  t4442 = t190*t1280*t632;
  t4449 = t4436 + t4442;
  t4470 = t150*t4449;
  t4499 = t4419 + t4470;
  t4517 = t1078*t4499;
  t4519 = t4389 + t4517;
  t4637 = -1.*t150*t4449;
  t4638 = t3493 + t4637;
  t4646 = -1.*t491*t4449;
  t4685 = t4098 + t4646;
  t4918 = t1078*t190*t202;
  t4960 = t1662*t4499;
  t4991 = t4918 + t4960;
  t5000 = t882*t4685;
  t5004 = -1.*t39*t4991;
  t5012 = t5000 + t5004;
  t5016 = t8*t5012;
  t5104 = -1.*t220*t3295*t1280;
  t5130 = t190*t632;
  t5134 = t5104 + t5130;
  t5148 = -1.*t190*t220;
  t5170 = -1.*t3295*t1280*t632;
  t5209 = t5148 + t5170;
  t5135 = t150*t5134;
  t5211 = -1.*t491*t5209;
  t5229 = t5135 + t5211;
  t5250 = -1.*t1078*t202*t3295;
  t5251 = t491*t5134;
  t5260 = t150*t5209;
  t5266 = t5251 + t5260;
  t5267 = t1662*t5266;
  t5315 = t5250 + t5267;
  t5365 = t150*t202*t220*t3295;
  t5366 = -1.*t202*t491*t3295*t632;
  t5373 = t5365 + t5366;
  t5385 = -1.*t1078*t3295*t1280;
  t5387 = t202*t220*t491*t3295;
  t5390 = t150*t202*t3295*t632;
  t5391 = t5387 + t5390;
  t5394 = t1662*t5391;
  t5397 = t5385 + t5394;
  t5431 = t220*t3295*t1280;
  t5432 = -1.*t190*t632;
  t5433 = t5431 + t5432;
  t5435 = -1.*t491*t5433;
  t5437 = t5435 + t5260;
  t5462 = t150*t5433;
  t5465 = t491*t5209;
  t5470 = t5462 + t5465;
  t5503 = -1.*t202*t1662*t3295;
  t5509 = t491*t5433;
  t5522 = t190*t220;
  t5524 = t3295*t1280*t632;
  t5529 = t5522 + t5524;
  t5530 = t150*t5529;
  t5532 = t5509 + t5530;
  t5534 = t1078*t5532;
  t5536 = t5503 + t5534;
  t5570 = -1.*t150*t5529;
  t5571 = t5435 + t5570;
  t5578 = -1.*t491*t5529;
  t5579 = t5462 + t5578;
  t5079 = t39*t4685;
  t5081 = t882*t4991;
  t5086 = t5079 + t5081;
  t5629 = t1078*t202*t3295;
  t5650 = t1662*t5532;
  t5653 = t5629 + t5650;
  t5670 = t882*t5579;
  t5674 = -1.*t39*t5653;
  t5677 = t5670 + t5674;
  t5681 = t8*t5677;
  t5712 = t1662*t1280;
  t5716 = t202*t220*t491;
  t5722 = t150*t202*t632;
  t5723 = t5716 + t5722;
  t5727 = t1078*t5723;
  t5728 = t5712 + t5727;
  t5745 = -1.*t202*t220*t491;
  t5746 = -1.*t150*t202*t632;
  t5747 = t5745 + t5746;
  t5766 = t150*t202*t220;
  t5773 = -1.*t202*t491*t632;
  t5775 = t5766 + t5773;
  t5754 = t39*t5747;
  t5776 = t882*t1662*t5775;
  t5781 = t5754 + t5776;
  t5782 = t8*t5781;
  t5786 = t882*t5747;
  t5797 = -1.*t1662*t39*t5775;
  t5803 = t5786 + t5797;
  t5804 = -1.*t2205*t5803;
  t5805 = t5782 + t5804;
  t5811 = -1.*t1078*t1280;
  t5813 = t1662*t5723;
  t5816 = t5811 + t5813;
  t5833 = t882*t5775;
  t5839 = -1.*t39*t5816;
  t5847 = t5833 + t5839;
  t5858 = t8*t5847;
  t5896 = -1.*t150*t220*t1280;
  t5897 = t491*t1280*t632;
  t5899 = t5896 + t5897;
  t5904 = -1.*t1078*t202;
  t5906 = -1.*t220*t491*t1280;
  t5907 = -1.*t150*t1280*t632;
  t5908 = t5906 + t5907;
  t5938 = t1662*t5908;
  t5964 = t5904 + t5938;
  t841 = t39*t840;
  t2135 = t882*t2030;
  t2145 = t841 + t2135;
  t2239 = t882*t840;
  t2270 = -1.*t39*t2030;
  t2380 = t2239 + t2270;
  t4073 = t39*t3962;
  t4147 = t882*t1662*t4142;
  t4179 = t4073 + t4147;
  t4313 = t882*t3962;
  t4317 = -1.*t1662*t39*t4142;
  t4321 = t4313 + t4317;
  t4644 = t39*t4638;
  t4704 = t882*t1662*t4685;
  t4706 = t4644 + t4704;
  t4791 = t882*t4638;
  t4807 = -1.*t1662*t39*t4685;
  t4809 = t4791 + t4807;
  t4917 = -1.*t39*t4685;
  t4992 = -1.*t882*t4991;
  t4998 = t4917 + t4992;
  t6112 = t2205*t5012;
  t5246 = t39*t5229;
  t5328 = t882*t5315;
  t5336 = t5246 + t5328;
  t5340 = t882*t5229;
  t5344 = -1.*t39*t5315;
  t5349 = t5340 + t5344;
  t5382 = t39*t5373;
  t5399 = t882*t5397;
  t5406 = t5382 + t5399;
  t5415 = t882*t5373;
  t5425 = -1.*t39*t5397;
  t5426 = t5415 + t5425;
  t5461 = t39*t5437;
  t5474 = t882*t1662*t5470;
  t5475 = t5461 + t5474;
  t5485 = t882*t5437;
  t5488 = -1.*t1662*t39*t5470;
  t5492 = t5485 + t5488;
  t5575 = t39*t5571;
  t5581 = t882*t1662*t5579;
  t5583 = t5575 + t5581;
  t5603 = t882*t5571;
  t5606 = -1.*t1662*t39*t5579;
  t5607 = t5603 + t5606;
  t5090 = t2205*t5086;
  t5091 = t5090 + t5016;
  t5628 = -1.*t39*t5579;
  t5656 = -1.*t882*t5653;
  t5666 = t5628 + t5656;
  t5688 = t39*t5579;
  t5691 = t882*t5653;
  t5692 = t5688 + t5691;
  t6222 = t2205*t5677;
  t6254 = t2205*t5781;
  t6257 = t8*t5803;
  t6259 = t6254 + t6257;
  t5810 = -1.*t39*t5775;
  t5819 = -1.*t882*t5816;
  t5821 = t5810 + t5819;
  t5872 = t39*t5775;
  t5876 = t882*t5816;
  t5878 = t5872 + t5876;
  t6270 = t2205*t5847;
  t5901 = t39*t5899;
  t5968 = t882*t5964;
  t5972 = t5901 + t5968;
  t5981 = t882*t5899;
  t5982 = -1.*t39*t5964;
  t5984 = t5981 + t5982;
  p_output1[0]=(-1.*t2205*t5349 + t5336*t8)*var2[3] + (-1.*t2205*t2380 + t2145*t8)*var2[4] + (-1.*t2205*t4321 + t4179*t8)*var2[5] + (-1.*t2205*t4809 + t4706*t8)*var2[13] + (t2205*t39*t4519 + t4519*t8*t882)*var2[14] + (-1.*t2205*t4998 + t5016)*var2[15] + t5091*var2[16];
  p_output1[1]=(-1.*t2205*t5012 + t5086*t8)*var2[3] + (-1.*t2205*t5426 + t5406*t8)*var2[4] + (-1.*t2205*t5492 + t5475*t8)*var2[5] + (-1.*t2205*t5607 + t5583*t8)*var2[13] + (t2205*t39*t5536 + t5536*t8*t882)*var2[14] + (-1.*t2205*t5666 + t5681)*var2[15] + (t5681 + t2205*t5692)*var2[16];
  p_output1[2]=(-1.*t2205*t5984 + t5972*t8)*var2[4] + t5805*var2[5] + t5805*var2[13] + (t2205*t39*t5728 + t5728*t8*t882)*var2[14] + (-1.*t2205*t5821 + t5858)*var2[15] + (t5858 + t2205*t5878)*var2[16];
  p_output1[3]=(t2205*t5336 + t5349*t8)*var2[3] + (t2145*t2205 + t2380*t8)*var2[4] + (t2205*t4179 + t4321*t8)*var2[5] + (t2205*t4706 + t4809*t8)*var2[13] + (-1.*t39*t4519*t8 + t2205*t4519*t882)*var2[14] + (t6112 + t4998*t8)*var2[15] + (t6112 - 1.*t5086*t8)*var2[16];
  p_output1[4]=t5091*var2[3] + (t2205*t5406 + t5426*t8)*var2[4] + (t2205*t5475 + t5492*t8)*var2[5] + (t2205*t5583 + t5607*t8)*var2[13] + (-1.*t39*t5536*t8 + t2205*t5536*t882)*var2[14] + (t6222 + t5666*t8)*var2[15] + (t6222 - 1.*t5692*t8)*var2[16];
  p_output1[5]=(t2205*t5972 + t5984*t8)*var2[4] + t6259*var2[5] + t6259*var2[13] + (-1.*t39*t5728*t8 + t2205*t5728*t882)*var2[14] + (t6270 + t5821*t8)*var2[15] + (t6270 - 1.*t5878*t8)*var2[16];
  p_output1[6]=(-1.*t1078*t5266 + t5503)*var2[3] + (-1.*t1280*t1662*t190 - 1.*t1078*t1962)*var2[4] - 1.*t1078*t4142*var2[5] - 1.*t1078*t4685*var2[13] + t4991*var2[14];
  p_output1[7]=(t1662*t190*t202 - 1.*t1078*t4499)*var2[3] + (-1.*t1280*t1662*t3295 - 1.*t1078*t5391)*var2[4] - 1.*t1078*t5470*var2[5] - 1.*t1078*t5579*var2[13] + t5653*var2[14];
  p_output1[8]=(-1.*t1662*t202 - 1.*t1078*t5908)*var2[4] - 1.*t1078*t5775*var2[5] - 1.*t1078*t5775*var2[13] + t5816*var2[14];
}



void dR_RightKnee_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
