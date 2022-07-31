/*
 * Automatically Generated from Mathematica.
 * Tue 2 Jun 2020 15:03:39 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "LL_Left_src.h"

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
  double t1556;
  double t2236;
  double t1712;
  double t1814;
  double t2784;
  double t1150;
  double t2104;
  double t3156;
  double t3298;
  double t1271;
  double t3633;
  double t42;
  double t1524;
  double t3947;
  double t4204;
  double t4237;
  double t4533;
  double t4570;
  double t4636;
  double t4642;
  double t4693;
  double t4724;
  double t4864;
  double t4929;
  double t4965;
  double t4987;
  double t5026;
  double t5060;
  double t5071;
  double t5170;
  double t5174;
  double t5178;
  double t5186;
  double t5221;
  double t5233;
  double t5262;
  double t5294;
  double t5295;
  double t5297;
  double t5301;
  double t5307;
  double t5317;
  double t5321;
  double t5347;
  double t5351;
  double t5353;
  double t5383;
  double t5386;
  double t5393;
  double t5399;
  double t5401;
  double t5405;
  double t5421;
  double t5439;
  double t5440;
  double t5442;
  double t5461;
  double t5464;
  double t5465;
  double t5520;
  double t5529;
  double t5548;
  double t5550;
  double t5556;
  double t5536;
  double t5541;
  double t5542;
  double t5546;
  double t5558;
  double t5565;
  double t5522;
  double t5570;
  double t5574;
  double t5588;
  double t5590;
  double t5594;
  double t5597;
  double t5602;
  double t5603;
  double t4968;
  double t5000;
  double t5004;
  double t5102;
  double t5131;
  double t5145;
  double t5645;
  double t5647;
  double t5651;
  double t5185;
  double t5188;
  double t5193;
  double t5270;
  double t5278;
  double t5280;
  double t5320;
  double t5326;
  double t5342;
  double t5663;
  double t5666;
  double t5673;
  double t5676;
  double t5677;
  double t5678;
  double t5372;
  double t5379;
  double t5380;
  double t5408;
  double t5430;
  double t5438;
  double t5686;
  double t5700;
  double t5709;
  double t5713;
  double t5714;
  double t5722;
  double t5452;
  double t5454;
  double t5458;
  double t5726;
  double t5732;
  double t5738;
  double t5744;
  double t5747;
  double t5748;
  double t5802;
  double t5805;
  double t5808;
  double t5789;
  double t5791;
  double t5794;
  double t5799;
  double t5809;
  double t5810;
  double t5788;
  double t5812;
  double t5813;
  double t5815;
  double t5818;
  double t5819;
  double t5820;
  double t5821;
  double t5822;
  double t5835;
  double t5838;
  double t5840;
  double t5844;
  double t5848;
  double t5849;
  double t5856;
  double t5857;
  double t5861;
  double t5866;
  double t5871;
  double t5872;
  double t5876;
  double t5877;
  double t5878;
  double t5882;
  double t5883;
  double t5887;
  double t5895;
  double t5897;
  double t5900;
  double t4739;
  double t4761;
  double t4795;
  double t4817;
  double t4826;
  double t5006;
  double t5082;
  double t5159;
  double t5267;
  double t5300;
  double t5370;
  double t5398;
  double t5446;
  double t5468;
  double t5471;
  double t5476;
  double t5479;
  double t5480;
  double t5488;
  double t5492;
  double t5499;
  double t5500;
  double t5512;
  double t5607;
  double t5616;
  double t5617;
  double t5634;
  double t5639;
  double t5644;
  double t5653;
  double t5660;
  double t5674;
  double t5684;
  double t5710;
  double t5724;
  double t5741;
  double t5750;
  double t5751;
  double t5758;
  double t5761;
  double t5772;
  double t5776;
  double t5781;
  double t5782;
  double t5783;
  double t5784;
  double t5825;
  double t5826;
  double t5828;
  double t5830;
  double t5831;
  double t5834;
  double t5841;
  double t5843;
  double t5854;
  double t5864;
  double t5875;
  double t5879;
  double t5891;
  double t5902;
  double t5908;
  double t5909;
  double t5910;
  double t5915;
  double t5916;
  double t5918;
  double t5919;
  double t5921;
  double t5924;
  t1556 = Cos(var1[4]);
  t2236 = Cos(var1[5]);
  t1712 = Cos(var1[6]);
  t1814 = Sin(var1[5]);
  t2784 = Sin(var1[6]);
  t1150 = Cos(var1[7]);
  t2104 = t1556*t1712*t1814;
  t3156 = t1556*t2236*t2784;
  t3298 = t2104 + t3156;
  t1271 = Sin(var1[4]);
  t3633 = Sin(var1[7]);
  t42 = Cos(var1[8]);
  t1524 = -1.*t1150*t1271;
  t3947 = t3298*t3633;
  t4204 = t1524 + t3947;
  t4237 = t42*t4204;
  t4533 = t1556*t2236*t1712;
  t4570 = -1.*t1556*t1814*t2784;
  t4636 = t4533 + t4570;
  t4642 = Sin(var1[8]);
  t4693 = t4636*t4642;
  t4724 = t4237 + t4693;
  t4864 = Cos(var1[9]);
  t4929 = -1.*t4864;
  t4965 = 1. + t4929;
  t4987 = Sin(var1[9]);
  t5026 = t42*t4636;
  t5060 = -1.*t4204*t4642;
  t5071 = t5026 + t5060;
  t5170 = Cos(var1[10]);
  t5174 = -1.*t5170;
  t5178 = 1. + t5174;
  t5186 = Sin(var1[10]);
  t5221 = -1.*t4987*t4724;
  t5233 = t4864*t5071;
  t5262 = t5221 + t5233;
  t5294 = t4864*t4724;
  t5295 = t4987*t5071;
  t5297 = t5294 + t5295;
  t5301 = Cos(var1[11]);
  t5307 = -1.*t5301;
  t5317 = 1. + t5307;
  t5321 = Sin(var1[11]);
  t5347 = t5186*t5262;
  t5351 = t5170*t5297;
  t5353 = t5347 + t5351;
  t5383 = t5170*t5262;
  t5386 = -1.*t5186*t5297;
  t5393 = t5383 + t5386;
  t5399 = Cos(var1[12]);
  t5401 = -1.*t5399;
  t5405 = 1. + t5401;
  t5421 = Sin(var1[12]);
  t5439 = -1.*t5321*t5353;
  t5440 = t5301*t5393;
  t5442 = t5439 + t5440;
  t5461 = t5301*t5353;
  t5464 = t5321*t5393;
  t5465 = t5461 + t5464;
  t5520 = Sin(var1[3]);
  t5529 = Cos(var1[3]);
  t5548 = t2236*t5520*t1271;
  t5550 = -1.*t5529*t1814;
  t5556 = t5548 + t5550;
  t5536 = t5529*t2236;
  t5541 = t5520*t1271*t1814;
  t5542 = t5536 + t5541;
  t5546 = t1712*t5542;
  t5558 = t5556*t2784;
  t5565 = t5546 + t5558;
  t5522 = t1556*t1150*t5520;
  t5570 = t5565*t3633;
  t5574 = t5522 + t5570;
  t5588 = t42*t5574;
  t5590 = t1712*t5556;
  t5594 = -1.*t5542*t2784;
  t5597 = t5590 + t5594;
  t5602 = t5597*t4642;
  t5603 = t5588 + t5602;
  t4968 = -0.08055*t4965;
  t5000 = -0.13004*t4987;
  t5004 = 0. + t4968 + t5000;
  t5102 = -0.13004*t4965;
  t5131 = 0.08055*t4987;
  t5145 = 0. + t5102 + t5131;
  t5645 = t42*t5597;
  t5647 = -1.*t5574*t4642;
  t5651 = t5645 + t5647;
  t5185 = -0.19074*t5178;
  t5188 = 0.03315*t5186;
  t5193 = 0. + t5185 + t5188;
  t5270 = -0.03315*t5178;
  t5278 = -0.19074*t5186;
  t5280 = 0. + t5270 + t5278;
  t5320 = -0.01315*t5317;
  t5326 = -0.62554*t5321;
  t5342 = 0. + t5320 + t5326;
  t5663 = -1.*t4987*t5603;
  t5666 = t4864*t5651;
  t5673 = t5663 + t5666;
  t5676 = t4864*t5603;
  t5677 = t4987*t5651;
  t5678 = t5676 + t5677;
  t5372 = -0.62554*t5317;
  t5379 = 0.01315*t5321;
  t5380 = 0. + t5372 + t5379;
  t5408 = -1.03354*t5405;
  t5430 = 0.05315*t5421;
  t5438 = 0. + t5408 + t5430;
  t5686 = t5186*t5673;
  t5700 = t5170*t5678;
  t5709 = t5686 + t5700;
  t5713 = t5170*t5673;
  t5714 = -1.*t5186*t5678;
  t5722 = t5713 + t5714;
  t5452 = -0.05315*t5405;
  t5454 = -1.03354*t5421;
  t5458 = 0. + t5452 + t5454;
  t5726 = -1.*t5321*t5709;
  t5732 = t5301*t5722;
  t5738 = t5726 + t5732;
  t5744 = t5301*t5709;
  t5747 = t5321*t5722;
  t5748 = t5744 + t5747;
  t5802 = t5529*t2236*t1271;
  t5805 = t5520*t1814;
  t5808 = t5802 + t5805;
  t5789 = -1.*t2236*t5520;
  t5791 = t5529*t1271*t1814;
  t5794 = t5789 + t5791;
  t5799 = t1712*t5794;
  t5809 = t5808*t2784;
  t5810 = t5799 + t5809;
  t5788 = t5529*t1556*t1150;
  t5812 = t5810*t3633;
  t5813 = t5788 + t5812;
  t5815 = t42*t5813;
  t5818 = t1712*t5808;
  t5819 = -1.*t5794*t2784;
  t5820 = t5818 + t5819;
  t5821 = t5820*t4642;
  t5822 = t5815 + t5821;
  t5835 = t42*t5820;
  t5838 = -1.*t5813*t4642;
  t5840 = t5835 + t5838;
  t5844 = -1.*t4987*t5822;
  t5848 = t4864*t5840;
  t5849 = t5844 + t5848;
  t5856 = t4864*t5822;
  t5857 = t4987*t5840;
  t5861 = t5856 + t5857;
  t5866 = t5186*t5849;
  t5871 = t5170*t5861;
  t5872 = t5866 + t5871;
  t5876 = t5170*t5849;
  t5877 = -1.*t5186*t5861;
  t5878 = t5876 + t5877;
  t5882 = -1.*t5321*t5872;
  t5883 = t5301*t5878;
  t5887 = t5882 + t5883;
  t5895 = t5301*t5872;
  t5897 = t5321*t5878;
  t5900 = t5895 + t5897;
  t4739 = t1150*t3298;
  t4761 = t1271*t3633;
  t4795 = t4739 + t4761;
  t4817 = -0.004500000000000004*t4795;
  t4826 = 0.08055*t4724;
  t5006 = t5004*t4724;
  t5082 = 0.01004*t5071;
  t5159 = t5145*t5071;
  t5267 = t5193*t5262;
  t5300 = t5280*t5297;
  t5370 = t5342*t5353;
  t5398 = t5380*t5393;
  t5446 = t5438*t5442;
  t5468 = t5458*t5465;
  t5471 = t5421*t5442;
  t5476 = t5399*t5465;
  t5479 = t5471 + t5476;
  t5480 = -0.05315*t5479;
  t5488 = t5399*t5442;
  t5492 = -1.*t5421*t5465;
  t5499 = t5488 + t5492;
  t5500 = -1.03354*t5499;
  t5512 = 0. + t4817 + t4826 + t5006 + t5082 + t5159 + t5267 + t5300 + t5370 + t5398 + t5446 + t5468 + t5480 + t5500;
  t5607 = t1150*t5565;
  t5616 = -1.*t1556*t5520*t3633;
  t5617 = t5607 + t5616;
  t5634 = -0.004500000000000004*t5617;
  t5639 = 0.08055*t5603;
  t5644 = t5004*t5603;
  t5653 = 0.01004*t5651;
  t5660 = t5145*t5651;
  t5674 = t5193*t5673;
  t5684 = t5280*t5678;
  t5710 = t5342*t5709;
  t5724 = t5380*t5722;
  t5741 = t5438*t5738;
  t5750 = t5458*t5748;
  t5751 = t5421*t5738;
  t5758 = t5399*t5748;
  t5761 = t5751 + t5758;
  t5772 = -0.05315*t5761;
  t5776 = t5399*t5738;
  t5781 = -1.*t5421*t5748;
  t5782 = t5776 + t5781;
  t5783 = -1.03354*t5782;
  t5784 = 0. + t5634 + t5639 + t5644 + t5653 + t5660 + t5674 + t5684 + t5710 + t5724 + t5741 + t5750 + t5772 + t5783;
  t5825 = t1150*t5810;
  t5826 = -1.*t5529*t1556*t3633;
  t5828 = t5825 + t5826;
  t5830 = -0.004500000000000004*t5828;
  t5831 = 0.08055*t5822;
  t5834 = t5004*t5822;
  t5841 = 0.01004*t5840;
  t5843 = t5145*t5840;
  t5854 = t5193*t5849;
  t5864 = t5280*t5861;
  t5875 = t5342*t5872;
  t5879 = t5380*t5878;
  t5891 = t5438*t5887;
  t5902 = t5458*t5900;
  t5908 = t5421*t5887;
  t5909 = t5399*t5900;
  t5910 = t5908 + t5909;
  t5915 = -0.05315*t5910;
  t5916 = t5399*t5887;
  t5918 = -1.*t5421*t5900;
  t5919 = t5916 + t5918;
  t5921 = -1.03354*t5919;
  t5924 = 0. + t5830 + t5831 + t5834 + t5841 + t5843 + t5854 + t5864 + t5875 + t5879 + t5891 + t5902 + t5915 + t5921;
  p_output1[0]=Sqrt(Power((-1.*t42*t4636 + t4204*t4642)*t5512 + (t4642*t5574 - 1.*t42*t5597)*t5784 + (t4642*t5813 - 1.*t42*t5820)*t5924,2) + Power(t4724*t5512 + t5603*t5784 + t5822*t5924,2));
}



void LL_Left_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
