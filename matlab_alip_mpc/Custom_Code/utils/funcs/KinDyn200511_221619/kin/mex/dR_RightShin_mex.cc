/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:41 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
#include<math.h>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;

inline double Sec(double x) { return 1/cos(x); }
inline double Csc(double x) { return 1/sin(x); }

#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t911;
  double t1838;
  double t2014;
  double t2505;
  double t862;
  double t2510;
  double t3421;
  double t2212;
  double t2812;
  double t3181;
  double t653;
  double t3678;
  double t3731;
  double t3805;
  double t3806;
  double t3826;
  double t4059;
  double t4095;
  double t4128;
  double t4142;
  double t4434;
  double t3415;
  double t4335;
  double t4405;
  double t177;
  double t4444;
  double t4458;
  double t4462;
  double t98;
  double t4553;
  double t4544;
  double t4568;
  double t4582;
  double t4589;
  double t4590;
  double t4604;
  double t4583;
  double t4606;
  double t4615;
  double t4626;
  double t4633;
  double t4634;
  double t4486;
  double t4624;
  double t4647;
  double t4655;
  double t4661;
  double t4670;
  double t4676;
  double t4767;
  double t4775;
  double t4796;
  double t4798;
  double t4800;
  double t4808;
  double t4823;
  double t4828;
  double t4833;
  double t4929;
  double t4948;
  double t4955;
  double t4957;
  double t4952;
  double t4961;
  double t4972;
  double t4979;
  double t4983;
  double t4991;
  double t5043;
  double t5044;
  double t5053;
  double t5037;
  double t5054;
  double t5055;
  double t5063;
  double t5066;
  double t5067;
  double t5082;
  double t5120;
  double t5123;
  double t5137;
  double t5099;
  double t5142;
  double t5150;
  double t5151;
  double t5185;
  double t5188;
  double t5193;
  double t5197;
  double t5201;
  double t5204;
  double t5194;
  double t5207;
  double t5216;
  double t5222;
  double t5223;
  double t5226;
  double t5227;
  double t5228;
  double t5230;
  double t5221;
  double t5235;
  double t5240;
  double t5244;
  double t5252;
  double t5260;
  double t5295;
  double t5298;
  double t5302;
  double t5304;
  double t5311;
  double t5312;
  double t5321;
  double t5335;
  double t5336;
  double t5303;
  double t5338;
  double t5341;
  double t5350;
  double t5351;
  double t5358;
  double t5398;
  double t5401;
  double t5403;
  double t5406;
  double t5417;
  double t5426;
  double t5429;
  double t5436;
  double t5419;
  double t5439;
  double t5440;
  double t5449;
  double t5450;
  double t5452;
  double t5485;
  double t5492;
  double t5493;
  double t5502;
  double t5503;
  double t5504;
  double t5505;
  double t5510;
  double t5513;
  double t5577;
  double t5582;
  double t5585;
  double t5599;
  double t5583;
  double t5604;
  double t5605;
  double t5623;
  double t5635;
  double t5638;
  double t5166;
  double t5167;
  double t5177;
  double t5688;
  double t5689;
  double t5691;
  double t5687;
  double t5704;
  double t5711;
  double t5718;
  double t5720;
  double t5721;
  double t5728;
  double t5779;
  double t5780;
  double t5786;
  double t5759;
  double t5798;
  double t5805;
  double t5806;
  double t5860;
  double t5864;
  double t5865;
  double t5869;
  double t5874;
  double t5876;
  double t5904;
  double t5908;
  double t5909;
  double t5913;
  double t5916;
  double t5919;
  double t5911;
  double t5922;
  double t5925;
  double t5936;
  double t5940;
  double t5941;
  double t5933;
  double t5943;
  double t5944;
  double t5949;
  double t5959;
  double t5973;
  double t5976;
  double t5978;
  double t5981;
  double t6002;
  double t6005;
  double t6011;
  double t5994;
  double t6026;
  double t6029;
  double t6038;
  double t6039;
  double t6040;
  double t6043;
  double t6059;
  double t6061;
  double t6066;
  double t6051;
  double t6070;
  double t6074;
  double t6077;
  double t6131;
  double t6133;
  double t6134;
  double t6137;
  double t6143;
  double t6146;
  double t6152;
  double t6153;
  double t6164;
  double t6136;
  double t6167;
  double t6169;
  double t6181;
  double t6190;
  double t6192;
  double t4409;
  double t4465;
  double t4481;
  double t4503;
  double t4505;
  double t4521;
  double t4656;
  double t4686;
  double t4687;
  double t4694;
  double t4699;
  double t4706;
  double t4835;
  double t4836;
  double t4862;
  double t4873;
  double t4882;
  double t4895;
  double t4978;
  double t4994;
  double t4998;
  double t5004;
  double t5012;
  double t5014;
  double t5061;
  double t5083;
  double t5091;
  double t5102;
  double t5153;
  double t5154;
  double t6276;
  double t5243;
  double t5264;
  double t5266;
  double t5269;
  double t5274;
  double t5275;
  double t5349;
  double t5367;
  double t5372;
  double t5378;
  double t5385;
  double t5388;
  double t5442;
  double t5454;
  double t5458;
  double t5465;
  double t5470;
  double t5473;
  double t5516;
  double t5518;
  double t5519;
  double t5530;
  double t5536;
  double t5557;
  double t5607;
  double t5641;
  double t5644;
  double t5655;
  double t5656;
  double t5658;
  double t5179;
  double t5181;
  double t5715;
  double t5731;
  double t5743;
  double t5771;
  double t5816;
  double t5819;
  double t6394;
  double t5832;
  double t5839;
  double t5850;
  double t5878;
  double t5881;
  double t5882;
  double t5884;
  double t5885;
  double t5888;
  double t6448;
  double t6454;
  double t6460;
  double t6034;
  double t6045;
  double t6048;
  double t6052;
  double t6078;
  double t6083;
  double t6513;
  double t6103;
  double t6105;
  double t6112;
  double t6177;
  double t6202;
  double t6204;
  double t6208;
  double t6213;
  double t6214;
  t911 = Cos(var1[3]);
  t1838 = Cos(var1[4]);
  t2014 = Cos(var1[5]);
  t2505 = Sin(var1[13]);
  t862 = Cos(var1[13]);
  t2510 = Sin(var1[5]);
  t3421 = Cos(var1[15]);
  t2212 = t862*t911*t1838*t2014;
  t2812 = -1.*t911*t1838*t2505*t2510;
  t3181 = t2212 + t2812;
  t653 = Sin(var1[15]);
  t3678 = Cos(var1[14]);
  t3731 = Sin(var1[4]);
  t3805 = -1.*t3678*t911*t3731;
  t3806 = Sin(var1[14]);
  t3826 = t911*t1838*t2014*t2505;
  t4059 = t862*t911*t1838*t2510;
  t4095 = t3826 + t4059;
  t4128 = t3806*t4095;
  t4142 = t3805 + t4128;
  t4434 = Cos(var1[16]);
  t3415 = t653*t3181;
  t4335 = t3421*t4142;
  t4405 = t3415 + t4335;
  t177 = Sin(var1[16]);
  t4444 = t3421*t3181;
  t4458 = -1.*t653*t4142;
  t4462 = t4444 + t4458;
  t98 = Cos(var1[17]);
  t4553 = Sin(var1[3]);
  t4544 = t911*t2014*t3731;
  t4568 = t4553*t2510;
  t4582 = t4544 + t4568;
  t4589 = t2014*t4553;
  t4590 = -1.*t911*t3731*t2510;
  t4604 = t4589 + t4590;
  t4583 = -1.*t2505*t4582;
  t4606 = t862*t4604;
  t4615 = t4583 + t4606;
  t4626 = t862*t4582;
  t4633 = t2505*t4604;
  t4634 = t4626 + t4633;
  t4486 = Sin(var1[17]);
  t4624 = t653*t4615;
  t4647 = t3421*t3806*t4634;
  t4655 = t4624 + t4647;
  t4661 = t3421*t4615;
  t4670 = -1.*t3806*t653*t4634;
  t4676 = t4661 + t4670;
  t4767 = -1.*t911*t1838*t3806;
  t4775 = t2505*t4582;
  t4796 = -1.*t2014*t4553;
  t4798 = t911*t3731*t2510;
  t4800 = t4796 + t4798;
  t4808 = t862*t4800;
  t4823 = t4775 + t4808;
  t4828 = t3678*t4823;
  t4833 = t4767 + t4828;
  t4929 = -1.*t862*t4800;
  t4948 = t4583 + t4929;
  t4955 = -1.*t2505*t4800;
  t4957 = t4626 + t4955;
  t4952 = t653*t4948;
  t4961 = t3421*t3806*t4957;
  t4972 = t4952 + t4961;
  t4979 = t3421*t4948;
  t4983 = -1.*t3806*t653*t4957;
  t4991 = t4979 + t4983;
  t5043 = t3678*t911*t1838;
  t5044 = t3806*t4823;
  t5053 = t5043 + t5044;
  t5037 = -1.*t653*t4957;
  t5054 = -1.*t3421*t5053;
  t5055 = t5037 + t5054;
  t5063 = t3421*t4957;
  t5066 = -1.*t653*t5053;
  t5067 = t5063 + t5066;
  t5082 = t4434*t5067;
  t5120 = t653*t4957;
  t5123 = t3421*t5053;
  t5137 = t5120 + t5123;
  t5099 = -1.*t177*t5067;
  t5142 = -1.*t177*t5137;
  t5150 = t5142 + t5082;
  t5151 = t4486*t5150;
  t5185 = -1.*t2014*t4553*t3731;
  t5188 = t911*t2510;
  t5193 = t5185 + t5188;
  t5197 = -1.*t911*t2014;
  t5201 = -1.*t4553*t3731*t2510;
  t5204 = t5197 + t5201;
  t5194 = t862*t5193;
  t5207 = -1.*t2505*t5204;
  t5216 = t5194 + t5207;
  t5222 = -1.*t3678*t1838*t4553;
  t5223 = t2505*t5193;
  t5226 = t862*t5204;
  t5227 = t5223 + t5226;
  t5228 = t3806*t5227;
  t5230 = t5222 + t5228;
  t5221 = t653*t5216;
  t5235 = t3421*t5230;
  t5240 = t5221 + t5235;
  t5244 = t3421*t5216;
  t5252 = -1.*t653*t5230;
  t5260 = t5244 + t5252;
  t5295 = t862*t1838*t2014*t4553;
  t5298 = -1.*t1838*t2505*t4553*t2510;
  t5302 = t5295 + t5298;
  t5304 = -1.*t3678*t4553*t3731;
  t5311 = t1838*t2014*t2505*t4553;
  t5312 = t862*t1838*t4553*t2510;
  t5321 = t5311 + t5312;
  t5335 = t3806*t5321;
  t5336 = t5304 + t5335;
  t5303 = t653*t5302;
  t5338 = t3421*t5336;
  t5341 = t5303 + t5338;
  t5350 = t3421*t5302;
  t5351 = -1.*t653*t5336;
  t5358 = t5350 + t5351;
  t5398 = t2014*t4553*t3731;
  t5401 = -1.*t911*t2510;
  t5403 = t5398 + t5401;
  t5406 = -1.*t2505*t5403;
  t5417 = t5406 + t5226;
  t5426 = t862*t5403;
  t5429 = t2505*t5204;
  t5436 = t5426 + t5429;
  t5419 = t653*t5417;
  t5439 = t3421*t3806*t5436;
  t5440 = t5419 + t5439;
  t5449 = t3421*t5417;
  t5450 = -1.*t3806*t653*t5436;
  t5452 = t5449 + t5450;
  t5485 = -1.*t1838*t3806*t4553;
  t5492 = t2505*t5403;
  t5493 = t911*t2014;
  t5502 = t4553*t3731*t2510;
  t5503 = t5493 + t5502;
  t5504 = t862*t5503;
  t5505 = t5492 + t5504;
  t5510 = t3678*t5505;
  t5513 = t5485 + t5510;
  t5577 = -1.*t862*t5503;
  t5582 = t5406 + t5577;
  t5585 = -1.*t2505*t5503;
  t5599 = t5426 + t5585;
  t5583 = t653*t5582;
  t5604 = t3421*t3806*t5599;
  t5605 = t5583 + t5604;
  t5623 = t3421*t5582;
  t5635 = -1.*t3806*t653*t5599;
  t5638 = t5623 + t5635;
  t5166 = t4434*t5137;
  t5167 = t177*t5067;
  t5177 = t5166 + t5167;
  t5688 = t3678*t1838*t4553;
  t5689 = t3806*t5505;
  t5691 = t5688 + t5689;
  t5687 = -1.*t653*t5599;
  t5704 = -1.*t3421*t5691;
  t5711 = t5687 + t5704;
  t5718 = t3421*t5599;
  t5720 = -1.*t653*t5691;
  t5721 = t5718 + t5720;
  t5728 = t4434*t5721;
  t5779 = t653*t5599;
  t5780 = t3421*t5691;
  t5786 = t5779 + t5780;
  t5759 = -1.*t177*t5721;
  t5798 = -1.*t177*t5786;
  t5805 = t5798 + t5728;
  t5806 = t4486*t5805;
  t5860 = t3806*t3731;
  t5864 = t1838*t2014*t2505;
  t5865 = t862*t1838*t2510;
  t5869 = t5864 + t5865;
  t5874 = t3678*t5869;
  t5876 = t5860 + t5874;
  t5904 = -1.*t1838*t2014*t2505;
  t5908 = -1.*t862*t1838*t2510;
  t5909 = t5904 + t5908;
  t5913 = t862*t1838*t2014;
  t5916 = -1.*t1838*t2505*t2510;
  t5919 = t5913 + t5916;
  t5911 = t653*t5909;
  t5922 = t3421*t3806*t5919;
  t5925 = t5911 + t5922;
  t5936 = t3421*t5909;
  t5940 = -1.*t3806*t653*t5919;
  t5941 = t5936 + t5940;
  t5933 = -1.*t177*t5925;
  t5943 = t4434*t5941;
  t5944 = t5933 + t5943;
  t5949 = -1.*t98*t5944;
  t5959 = t4434*t5925;
  t5973 = t177*t5941;
  t5976 = t5959 + t5973;
  t5978 = t4486*t5976;
  t5981 = t5949 + t5978;
  t6002 = -1.*t3678*t3731;
  t6005 = t3806*t5869;
  t6011 = t6002 + t6005;
  t5994 = -1.*t653*t5919;
  t6026 = -1.*t3421*t6011;
  t6029 = t5994 + t6026;
  t6038 = t3421*t5919;
  t6039 = -1.*t653*t6011;
  t6040 = t6038 + t6039;
  t6043 = t4434*t6040;
  t6059 = t653*t5919;
  t6061 = t3421*t6011;
  t6066 = t6059 + t6061;
  t6051 = -1.*t177*t6040;
  t6070 = -1.*t177*t6066;
  t6074 = t6070 + t6043;
  t6077 = t4486*t6074;
  t6131 = -1.*t862*t2014*t3731;
  t6133 = t2505*t3731*t2510;
  t6134 = t6131 + t6133;
  t6137 = -1.*t3678*t1838;
  t6143 = -1.*t2014*t2505*t3731;
  t6146 = -1.*t862*t3731*t2510;
  t6152 = t6143 + t6146;
  t6153 = t3806*t6152;
  t6164 = t6137 + t6153;
  t6136 = t653*t6134;
  t6167 = t3421*t6164;
  t6169 = t6136 + t6167;
  t6181 = t3421*t6134;
  t6190 = -1.*t653*t6164;
  t6192 = t6181 + t6190;
  t4409 = -1.*t177*t4405;
  t4465 = t4434*t4462;
  t4481 = t4409 + t4465;
  t4503 = t4434*t4405;
  t4505 = t177*t4462;
  t4521 = t4503 + t4505;
  t4656 = -1.*t177*t4655;
  t4686 = t4434*t4676;
  t4687 = t4656 + t4686;
  t4694 = t4434*t4655;
  t4699 = t177*t4676;
  t4706 = t4694 + t4699;
  t4835 = -1.*t4434*t653*t4833;
  t4836 = -1.*t3421*t177*t4833;
  t4862 = t4835 + t4836;
  t4873 = t3421*t4434*t4833;
  t4882 = -1.*t653*t177*t4833;
  t4895 = t4873 + t4882;
  t4978 = -1.*t177*t4972;
  t4994 = t4434*t4991;
  t4998 = t4978 + t4994;
  t5004 = t4434*t4972;
  t5012 = t177*t4991;
  t5014 = t5004 + t5012;
  t5061 = t177*t5055;
  t5083 = t5061 + t5082;
  t5091 = t4434*t5055;
  t5102 = t5091 + t5099;
  t5153 = -1.*t4434*t5137;
  t5154 = t5153 + t5099;
  t6276 = t98*t5150;
  t5243 = -1.*t177*t5240;
  t5264 = t4434*t5260;
  t5266 = t5243 + t5264;
  t5269 = t4434*t5240;
  t5274 = t177*t5260;
  t5275 = t5269 + t5274;
  t5349 = -1.*t177*t5341;
  t5367 = t4434*t5358;
  t5372 = t5349 + t5367;
  t5378 = t4434*t5341;
  t5385 = t177*t5358;
  t5388 = t5378 + t5385;
  t5442 = -1.*t177*t5440;
  t5454 = t4434*t5452;
  t5458 = t5442 + t5454;
  t5465 = t4434*t5440;
  t5470 = t177*t5452;
  t5473 = t5465 + t5470;
  t5516 = -1.*t4434*t653*t5513;
  t5518 = -1.*t3421*t177*t5513;
  t5519 = t5516 + t5518;
  t5530 = t3421*t4434*t5513;
  t5536 = -1.*t653*t177*t5513;
  t5557 = t5530 + t5536;
  t5607 = -1.*t177*t5605;
  t5641 = t4434*t5638;
  t5644 = t5607 + t5641;
  t5655 = t4434*t5605;
  t5656 = t177*t5638;
  t5658 = t5655 + t5656;
  t5179 = t98*t5177;
  t5181 = t5151 + t5179;
  t5715 = t177*t5711;
  t5731 = t5715 + t5728;
  t5743 = t4434*t5711;
  t5771 = t5743 + t5759;
  t5816 = -1.*t4434*t5786;
  t5819 = t5816 + t5759;
  t6394 = t98*t5805;
  t5832 = t4434*t5786;
  t5839 = t177*t5721;
  t5850 = t5832 + t5839;
  t5878 = -1.*t4434*t653*t5876;
  t5881 = -1.*t3421*t177*t5876;
  t5882 = t5878 + t5881;
  t5884 = t3421*t4434*t5876;
  t5885 = -1.*t653*t177*t5876;
  t5888 = t5884 + t5885;
  t6448 = t4486*t5944;
  t6454 = t98*t5976;
  t6460 = t6448 + t6454;
  t6034 = t177*t6029;
  t6045 = t6034 + t6043;
  t6048 = t4434*t6029;
  t6052 = t6048 + t6051;
  t6078 = -1.*t4434*t6066;
  t6083 = t6078 + t6051;
  t6513 = t98*t6074;
  t6103 = t4434*t6066;
  t6105 = t177*t6040;
  t6112 = t6103 + t6105;
  t6177 = -1.*t177*t6169;
  t6202 = t4434*t6192;
  t6204 = t6177 + t6202;
  t6208 = t4434*t6169;
  t6213 = t177*t6192;
  t6214 = t6208 + t6213;
  p_output1[0]=(t4486*t5275 - 1.*t5266*t98)*var2[3] + (t4486*t4521 - 1.*t4481*t98)*var2[4] + (t4486*t4706 - 1.*t4687*t98)*var2[5] + (t4486*t5014 - 1.*t4998*t98)*var2[13] + (t4486*t4895 - 1.*t4862*t98)*var2[14] + (t4486*t5083 - 1.*t5102*t98)*var2[15] + (t5151 - 1.*t5154*t98)*var2[16] + t5181*var2[17];
  p_output1[1]=(t4486*t5177 - 1.*t5150*t98)*var2[3] + (t4486*t5388 - 1.*t5372*t98)*var2[4] + (t4486*t5473 - 1.*t5458*t98)*var2[5] + (t4486*t5658 - 1.*t5644*t98)*var2[13] + (t4486*t5557 - 1.*t5519*t98)*var2[14] + (t4486*t5731 - 1.*t5771*t98)*var2[15] + (t5806 - 1.*t5819*t98)*var2[16] + (t5806 + t5850*t98)*var2[17];
  p_output1[2]=(t4486*t6214 - 1.*t6204*t98)*var2[4] + t5981*var2[5] + t5981*var2[13] + (t4486*t5888 - 1.*t5882*t98)*var2[14] + (t4486*t6045 - 1.*t6052*t98)*var2[15] + (t6077 - 1.*t6083*t98)*var2[16] + (t6077 + t6112*t98)*var2[17];
  p_output1[3]=(t4486*t5266 + t5275*t98)*var2[3] + (t4481*t4486 + t4521*t98)*var2[4] + (t4486*t4687 + t4706*t98)*var2[5] + (t4486*t4998 + t5014*t98)*var2[13] + (t4486*t4862 + t4895*t98)*var2[14] + (t4486*t5102 + t5083*t98)*var2[15] + (t4486*t5154 + t6276)*var2[16] + (-1.*t4486*t5177 + t6276)*var2[17];
  p_output1[4]=t5181*var2[3] + (t4486*t5372 + t5388*t98)*var2[4] + (t4486*t5458 + t5473*t98)*var2[5] + (t4486*t5644 + t5658*t98)*var2[13] + (t4486*t5519 + t5557*t98)*var2[14] + (t4486*t5771 + t5731*t98)*var2[15] + (t4486*t5819 + t6394)*var2[16] + (-1.*t4486*t5850 + t6394)*var2[17];
  p_output1[5]=(t4486*t6204 + t6214*t98)*var2[4] + t6460*var2[5] + t6460*var2[13] + (t4486*t5882 + t5888*t98)*var2[14] + (t4486*t6052 + t6045*t98)*var2[15] + (t4486*t6083 + t6513)*var2[16] + (-1.*t4486*t6112 + t6513)*var2[17];
  p_output1[6]=(-1.*t3678*t5227 + t5485)*var2[3] + (-1.*t3678*t4095 - 1.*t3731*t3806*t911)*var2[4] - 1.*t3678*t4634*var2[5] - 1.*t3678*t4957*var2[13] + t5053*var2[14];
  p_output1[7]=(-1.*t3678*t4823 + t1838*t3806*t911)*var2[3] + (-1.*t3731*t3806*t4553 - 1.*t3678*t5321)*var2[4] - 1.*t3678*t5436*var2[5] - 1.*t3678*t5599*var2[13] + t5691*var2[14];
  p_output1[8]=(-1.*t1838*t3806 - 1.*t3678*t6152)*var2[4] - 1.*t3678*t5919*var2[5] - 1.*t3678*t5919*var2[13] + t6011*var2[14];
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dR_RightShin_mex.hh"

namespace SymExpression
{

void dR_RightShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
