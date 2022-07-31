/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:44 GMT-04:00
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
  double t214;
  double t383;
  double t1229;
  double t334;
  double t1317;
  double t1762;
  double t1958;
  double t2268;
  double t2303;
  double t2323;
  double t2469;
  double t2556;
  double t2638;
  double t2651;
  double t2668;
  double t2684;
  double t1223;
  double t1405;
  double t1681;
  double t3866;
  double t326;
  double t4264;
  double t4640;
  double t4653;
  double t4694;
  double t4708;
  double t4788;
  double t4792;
  double t4633;
  double t4669;
  double t4713;
  double t4724;
  double t4180;
  double t4195;
  double t4196;
  double t4899;
  double t4900;
  double t4908;
  double t4909;
  double t4927;
  double t4928;
  double t4935;
  double t4942;
  double t4943;
  double t4954;
  double t4513;
  double t4531;
  double t4536;
  double t5009;
  double t5010;
  double t5016;
  double t2980;
  double t3017;
  double t3188;
  double t4082;
  double t4092;
  double t4109;
  double t4258;
  double t4369;
  double t4373;
  double t4443;
  double t4476;
  double t4494;
  double t4636;
  double t4731;
  double t4748;
  double t4757;
  double t4758;
  double t4767;
  double t4794;
  double t4828;
  double t4834;
  double t4847;
  double t4861;
  double t4873;
  double t4875;
  double t4876;
  double t4903;
  double t4912;
  double t4915;
  double t4929;
  double t4947;
  double t4957;
  double t4958;
  double t4963;
  double t4965;
  double t4967;
  double t4968;
  double t4978;
  double t4981;
  double t4984;
  double t4987;
  double t4991;
  double t4994;
  double t5164;
  double t5165;
  double t5168;
  double t5169;
  double t5170;
  double t5173;
  double t5175;
  double t5166;
  double t5176;
  double t5179;
  double t5180;
  double t5183;
  double t5185;
  double t5188;
  double t5196;
  double t5200;
  double t5210;
  double t5212;
  double t5213;
  double t5215;
  double t5217;
  double t5219;
  double t5182;
  double t5201;
  double t5206;
  double t5226;
  double t5227;
  double t5228;
  double t5214;
  double t5220;
  double t5222;
  double t5234;
  double t5236;
  double t5239;
  double t5241;
  double t5242;
  double t5243;
  double t5252;
  double t5254;
  double t5255;
  double t5229;
  double t5237;
  double t5244;
  double t5246;
  double t5264;
  double t5208;
  double t5224;
  double t5230;
  double t5231;
  double t5301;
  double t5290;
  double t5291;
  double t5292;
  double t5277;
  double t5280;
  double t5281;
  double t5282;
  double t5149;
  double t5150;
  double t5152;
  double t5136;
  double t5139;
  double t5142;
  double t5329;
  double t5331;
  double t5333;
  double t5325;
  double t5119;
  double t5121;
  double t5128;
  double t5154;
  double t5156;
  double t5159;
  double t5380;
  double t5381;
  double t5379;
  double t5382;
  double t5385;
  double t5386;
  double t5389;
  double t5393;
  double t5394;
  double t5410;
  double t5411;
  double t5413;
  double t5414;
  double t5416;
  double t5481;
  double t5482;
  double t5483;
  double t5484;
  double t5500;
  double t5503;
  double t5504;
  double t5521;
  double t5522;
  double t5523;
  double t5524;
  double t5525;
  double t5111;
  double t5113;
  double t5114;
  double t5116;
  double t5132;
  double t5134;
  double t5135;
  double t5144;
  double t5145;
  double t5146;
  double t5148;
  double t5153;
  double t5160;
  double t5163;
  double t5233;
  double t5247;
  double t5266;
  double t5272;
  double t5585;
  double t5586;
  double t5587;
  double t5289;
  double t5294;
  double t5307;
  double t5313;
  double t5600;
  double t5601;
  double t5607;
  double t5355;
  double t5363;
  double t5388;
  double t5401;
  double t5403;
  double t5646;
  double t5647;
  double t5421;
  double t5653;
  double t5427;
  double t5428;
  double t5660;
  double t5661;
  double t5665;
  double t5666;
  double t5471;
  double t5486;
  double t5693;
  double t5694;
  double t5498;
  double t5508;
  double t5514;
  double t5532;
  double t5705;
  double t5539;
  double t5544;
  double t5712;
  double t5715;
  double t5719;
  double t5721;
  double t5630;
  double t5635;
  double t5686;
  double t5840;
  double t5841;
  t214 = Cos(var1[3]);
  t383 = Cos(var1[6]);
  t1229 = Sin(var1[5]);
  t334 = Cos(var1[5]);
  t1317 = Sin(var1[6]);
  t1762 = Sin(var1[4]);
  t1958 = t383*t1229;
  t2268 = t334*t1317;
  t2303 = t1958 + t2268;
  t2323 = t214*t1762*t2303;
  t2469 = Sin(var1[3]);
  t2556 = t334*t383;
  t2638 = -1.*t1229*t1317;
  t2651 = t2556 + t2638;
  t2668 = -1.*t2469*t2651;
  t2684 = t2323 + t2668;
  t1223 = -1.*t334*t383;
  t1405 = t1229*t1317;
  t1681 = 0. + t1223 + t1405;
  t3866 = Cos(var1[7]);
  t326 = Cos(var1[4]);
  t4264 = Sin(var1[7]);
  t4640 = t383*t4264;
  t4653 = 0. + t4640;
  t4694 = t1317*t4264;
  t4708 = 0. + t4694;
  t4788 = t334*t4653;
  t4792 = -1.*t1229*t4708;
  t4633 = 0. + t3866;
  t4669 = t1229*t4653;
  t4713 = t334*t4708;
  t4724 = 0. + t4669 + t4713;
  t4180 = t383*t3866*t1229;
  t4195 = t334*t3866*t1317;
  t4196 = t4180 + t4195;
  t4899 = -1.*t383*t3866;
  t4900 = 0. + t4899;
  t4908 = -1.*t3866*t1317;
  t4909 = 0. + t4908;
  t4927 = t334*t4900;
  t4928 = -1.*t1229*t4909;
  t4935 = t4900*t1229;
  t4942 = t334*t4909;
  t4943 = 0. + t4935 + t4942;
  t4954 = 0. + t4264;
  t4513 = t334*t383*t4264;
  t4531 = -1.*t1229*t1317*t4264;
  t4536 = t4513 + t4531;
  t5009 = t2469*t1762*t2303;
  t5010 = t214*t2651;
  t5016 = t5009 + t5010;
  t2980 = 0. + t1958 + t2268;
  t3017 = t1762*t1681;
  t3188 = 0. + t3017;
  t4082 = t334*t383*t3866;
  t4092 = -1.*t3866*t1229*t1317;
  t4109 = t4082 + t4092;
  t4258 = t1762*t4196;
  t4369 = -1.*t326*t4264;
  t4373 = t4258 + t4369;
  t4443 = -1.*t383*t1229*t4264;
  t4476 = -1.*t334*t1317*t4264;
  t4494 = t4443 + t4476;
  t4636 = -1.*t4633*t1762;
  t4731 = t326*t4724;
  t4748 = t4636 + t4731;
  t4757 = -1.*t1229*t4653;
  t4758 = -1.*t334*t4708;
  t4767 = t4757 + t4758;
  t4794 = t4788 + t4792;
  t4828 = 0. + t4788 + t4792;
  t4834 = t326*t4633;
  t4847 = t1762*t4724;
  t4861 = 0. + t4834 + t4847;
  t4873 = -1.*t334*t383*t3866;
  t4875 = t3866*t1229*t1317;
  t4876 = t4873 + t4875;
  t4903 = -1.*t4900*t1229;
  t4912 = -1.*t334*t4909;
  t4915 = t4903 + t4912;
  t4929 = t4927 + t4928;
  t4947 = t326*t4943;
  t4957 = -1.*t1762*t4954;
  t4958 = t4947 + t4957;
  t4963 = 0. + t4927 + t4928;
  t4965 = t1762*t4943;
  t4967 = t326*t4954;
  t4968 = 0. + t4965 + t4967;
  t4978 = t326*t3866;
  t4981 = t383*t1229*t4264;
  t4984 = t334*t1317*t4264;
  t4987 = t4981 + t4984;
  t4991 = t1762*t4987;
  t4994 = t4978 + t4991;
  t5164 = -1.*t383;
  t5165 = 1. + t5164;
  t5168 = -1.*t3866;
  t5169 = 1. + t5168;
  t5170 = 0.135*t5169;
  t5173 = 0.135*t3866;
  t5175 = 0. + t5170 + t5173;
  t5166 = 0.135*t5165;
  t5176 = t383*t5175;
  t5179 = 0.09*t1317;
  t5180 = 0. + t5166 + t5176 + t5179;
  t5183 = 0.07996*t5165;
  t5185 = -0.01004*t383;
  t5188 = -0.135*t1317;
  t5196 = t5175*t1317;
  t5200 = 0. + t5183 + t5185 + t5188 + t5196;
  t5210 = -0.08055*t5169;
  t5212 = -0.08055*t3866;
  t5213 = 0. + t5210 + t5212;
  t5215 = t1229*t5180;
  t5217 = t334*t5200;
  t5219 = 0. + t5215 + t5217;
  t5182 = t334*t5180;
  t5201 = -1.*t1229*t5200;
  t5206 = 0. + t5182 + t5201;
  t5226 = -1.*t5213*t1762;
  t5227 = t326*t5219;
  t5228 = 0. + t5226 + t5227;
  t5214 = t326*t5213;
  t5220 = t1762*t5219;
  t5222 = 0. + t5214 + t5220;
  t5234 = -0.135*t383;
  t5236 = t5234 + t5176 + t5179;
  t5239 = 0.09*t383;
  t5241 = 0.135*t1317;
  t5242 = -1.*t5175*t1317;
  t5243 = t5239 + t5241 + t5242;
  t5252 = t334*t5236;
  t5254 = t1229*t5243;
  t5255 = t5252 + t5254;
  t5229 = 0. + t4947 + t4957;
  t5237 = -1.*t1229*t5236;
  t5244 = t334*t5243;
  t5246 = t5237 + t5244;
  t5264 = 0. + t4636 + t4731;
  t5208 = t5206*t4963;
  t5224 = t5222*t4968;
  t5230 = t5228*t5229;
  t5231 = t5208 + t5224 + t5230;
  t5301 = t5182 + t5201;
  t5290 = -1.*t1229*t5180;
  t5291 = -1.*t334*t5200;
  t5292 = t5290 + t5291;
  t5277 = -1.*t5206*t4828;
  t5280 = -1.*t5228*t5264;
  t5281 = -1.*t5222*t4861;
  t5282 = t5277 + t5280 + t5281;
  t5149 = -1.*t1762*t4943;
  t5150 = -1.*t326*t4954;
  t5152 = t5149 + t5150;
  t5136 = -1.*t326*t4633;
  t5139 = -1.*t1762*t4724;
  t5142 = t5136 + t5139;
  t5329 = -1.*t326*t5213;
  t5331 = -1.*t1762*t5219;
  t5333 = t5329 + t5331;
  t5325 = t5226 + t5227;
  t5119 = t326*t4196;
  t5121 = t1762*t4264;
  t5128 = t5119 + t5121;
  t5154 = -1.*t3866*t1762;
  t5156 = t326*t4987;
  t5159 = t5154 + t5156;
  t5380 = t326*t1681;
  t5381 = 0. + t5380;
  t5379 = t2980*t5206;
  t5382 = t5381*t5228;
  t5385 = t3188*t5222;
  t5386 = t5379 + t5382 + t5385;
  t5389 = t2651*t5206;
  t5393 = t326*t2303*t5228;
  t5394 = t1762*t2303*t5222;
  t5410 = -1.*t5206*t4963;
  t5411 = -1.*t5222*t4968;
  t5413 = -1.*t5228*t5229;
  t5414 = t5410 + t5411 + t5413;
  t5416 = t326*t2303*t5414;
  t5481 = -1.*t2980*t5206;
  t5482 = -1.*t5381*t5228;
  t5483 = -1.*t3188*t5222;
  t5484 = t5481 + t5482 + t5483;
  t5500 = -1.*t2651*t5206;
  t5503 = -1.*t326*t2303*t5228;
  t5504 = -1.*t1762*t2303*t5222;
  t5521 = t5206*t4828;
  t5522 = t5228*t5264;
  t5523 = t5222*t4861;
  t5524 = t5521 + t5522 + t5523;
  t5525 = t326*t2303*t5524;
  t5111 = var2[5]*t326*t2303;
  t5113 = var2[6]*t326*t2303;
  t5114 = -1.*var2[4]*t1762*t1681;
  t5116 = t5111 + t5113 + t5114;
  t5132 = var2[7]*t5128;
  t5134 = var2[6]*t326*t4536;
  t5135 = var2[5]*t326*t4794;
  t5144 = var2[4]*t5142;
  t5145 = t5132 + t5134 + t5135 + t5144;
  t5146 = var2[6]*t326*t4876;
  t5148 = var2[5]*t326*t4929;
  t5153 = var2[4]*t5152;
  t5160 = var2[7]*t5159;
  t5163 = t5146 + t5148 + t5153 + t5160;
  t5233 = t4196*t5206;
  t5247 = t5246*t4963;
  t5266 = -1.*t5206*t4494;
  t5272 = -1.*t5246*t4828;
  t5585 = t5219*t4943;
  t5586 = t5213*t4954;
  t5587 = t5585 + t5208 + t5586;
  t5289 = t5206*t4915;
  t5294 = t5292*t4963;
  t5307 = -1.*t5206*t4767;
  t5313 = -1.*t5292*t4828;
  t5600 = -1.*t5213*t4633;
  t5601 = -1.*t5219*t4724;
  t5607 = t5600 + t5601 + t5277;
  t5355 = -1.*t4109*t5206;
  t5363 = t5206*t4536;
  t5388 = t2980*t5246;
  t5401 = -1.*t4196*t5206;
  t5403 = -1.*t5246*t4963;
  t5646 = t1681*t5219;
  t5647 = 0. + t5646 + t5379;
  t5421 = t2980*t5292;
  t5653 = t2303*t5219;
  t5427 = -1.*t5206*t4915;
  t5428 = -1.*t5292*t4963;
  t5660 = -1.*t5219*t4943;
  t5661 = -1.*t5213*t4954;
  t5665 = t5660 + t5410 + t5661;
  t5666 = t2651*t5665;
  t5471 = -1.*t5206*t4536;
  t5486 = t4109*t5206;
  t5693 = -1.*t1681*t5219;
  t5694 = 0. + t5693 + t5481;
  t5498 = -1.*t2980*t5246;
  t5508 = t5206*t4494;
  t5514 = t5246*t4828;
  t5532 = -1.*t2980*t5292;
  t5705 = -1.*t2303*t5219;
  t5539 = t5206*t4767;
  t5544 = t5292*t4828;
  t5712 = t5213*t4633;
  t5715 = t5219*t4724;
  t5719 = t5712 + t5715 + t5521;
  t5721 = t2651*t5719;
  t5630 = t5213*t4264;
  t5635 = t5213*t3866;
  t5686 = -1.*t5213*t3866;
  t5840 = -1.*var2[7]*t4264;
  t5841 = var2[7]*t3866;
  p_output1[0]=(-1.*t214*t2980 - 1.*t2469*t3188)*var2[3] + t1681*t214*t326*var2[4] + t2684*var2[5] + t2684*var2[6];
  p_output1[1]=(-1.*t214*t4828 - 1.*t2469*t4861)*var2[3] + t214*t4748*var2[4] + (-1.*t2469*t4767 + t1762*t214*t4794)*var2[5] + (-1.*t2469*t4494 + t1762*t214*t4536)*var2[6] + (-1.*t2469*t4109 + t214*t4373)*var2[7];
  p_output1[2]=(-1.*t214*t4963 - 1.*t2469*t4968)*var2[3] + t214*t4958*var2[4] + (-1.*t2469*t4915 + t1762*t214*t4929)*var2[5] + (-1.*t2469*t4196 + t1762*t214*t4876)*var2[6] + (-1.*t2469*t4536 + t214*t4994)*var2[7];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t2469*t2980 + t214*t3188)*var2[3] + t1681*t2469*t326*var2[4] + t5016*var2[5] + t5016*var2[6];
  p_output1[7]=(-1.*t2469*t4828 + t214*t4861)*var2[3] + t2469*t4748*var2[4] + (t214*t4767 + t1762*t2469*t4794)*var2[5] + (t214*t4494 + t1762*t2469*t4536)*var2[6] + (t214*t4109 + t2469*t4373)*var2[7];
  p_output1[8]=(-1.*t2469*t4963 + t214*t4968)*var2[3] + t2469*t4958*var2[4] + (t214*t4915 + t1762*t2469*t4929)*var2[5] + (t214*t4196 + t1762*t2469*t4876)*var2[6] + (t214*t4536 + t2469*t4994)*var2[7];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5116;
  p_output1[13]=t5145;
  p_output1[14]=t5163;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t5142*t5231 + t5152*t5282 + t5264*(t4958*t5222 + t5152*t5228 + t4968*t5325 + t5229*t5333) + t5229*(-1.*t4748*t5222 - 1.*t5142*t5228 - 1.*t4861*t5325 - 1.*t5264*t5333))*var2[4] + (t326*t4794*t5231 + t326*t4929*t5282 + t5264*(t1762*t4929*t5222 + t326*t4929*t5228 + t5289 + t5294 + t1762*t4968*t5301 + t326*t5229*t5301) + t5229*(-1.*t1762*t4794*t5222 - 1.*t326*t4794*t5228 - 1.*t1762*t4861*t5301 - 1.*t326*t5264*t5301 + t5307 + t5313))*var2[5] + (t326*t4536*t5231 + (t1762*t4876*t5222 + t326*t4876*t5228 + t5233 + t5247 + t1762*t4968*t5255 + t326*t5229*t5255)*t5264 + t5229*(-1.*t1762*t4536*t5222 - 1.*t326*t4536*t5228 - 1.*t1762*t4861*t5255 - 1.*t326*t5255*t5264 + t5266 + t5272) + t326*t4876*t5282)*var2[6] + (t5128*t5231 + t5159*t5282 + t5229*(0. - 1.*t4373*t5222 - 1.*t5128*t5228 + t5355) + t5264*(0. + t4994*t5222 + t5159*t5228 + t5363))*var2[7];
  p_output1[19]=((-1.*t4958*t5222 - 1.*t5152*t5228 - 1.*t4968*t5325 - 1.*t5229*t5333)*t5381 + t5229*(t1681*t326*t5222 - 1.*t1681*t1762*t5228 + t3188*t5325 + t5333*t5381) + t5152*t5386 - 1.*t1681*t1762*t5414)*var2[4] + (t326*t4929*t5386 + t5416 + t5229*(t1762*t3188*t5301 + t326*t5301*t5381 + t5389 + t5393 + t5394 + t5421) + t5381*(-1.*t1762*t4929*t5222 - 1.*t326*t4929*t5228 - 1.*t1762*t4968*t5301 - 1.*t326*t5229*t5301 + t5427 + t5428))*var2[5] + (t326*t4876*t5386 + t5229*(t1762*t3188*t5255 + t326*t5255*t5381 + t5388 + t5389 + t5393 + t5394) + t5381*(-1.*t1762*t4876*t5222 - 1.*t326*t4876*t5228 - 1.*t1762*t4968*t5255 - 1.*t326*t5229*t5255 + t5401 + t5403) + t5416)*var2[6] + (0. + t5159*t5386 + t5381*(0. - 1.*t4994*t5222 - 1.*t5159*t5228 + t5471))*var2[7];
  p_output1[20]=((t4748*t5222 + t5142*t5228 + t4861*t5325 + t5264*t5333)*t5381 + t5264*(-1.*t1681*t326*t5222 + t1681*t1762*t5228 - 1.*t3188*t5325 - 1.*t5333*t5381) + t5142*t5484 - 1.*t1681*t1762*t5524)*var2[4] + (t326*t4794*t5484 + t5525 + t5264*(-1.*t1762*t3188*t5301 - 1.*t326*t5301*t5381 + t5500 + t5503 + t5504 + t5532) + t5381*(t1762*t4794*t5222 + t326*t4794*t5228 + t1762*t4861*t5301 + t326*t5264*t5301 + t5539 + t5544))*var2[5] + (t326*t4536*t5484 + t5264*(-1.*t1762*t3188*t5255 - 1.*t326*t5255*t5381 + t5498 + t5500 + t5503 + t5504) + t5381*(t1762*t4536*t5222 + t326*t4536*t5228 + t1762*t4861*t5255 + t326*t5255*t5264 + t5508 + t5514) + t5525)*var2[6] + (0. + t5128*t5484 + t5381*(0. + t4373*t5222 + t5128*t5228 + t5486))*var2[7];
  p_output1[21]=t5116;
  p_output1[22]=t5145;
  p_output1[23]=t5163;
  p_output1[24]=(t4828*(t4929*t5219 + t5289 + t5294 + t4943*t5301) + t4963*(-1.*t4794*t5219 - 1.*t4724*t5301 + t5307 + t5313) + t4767*t5587 + t4915*t5607)*var2[5] + (t4828*(t4876*t5219 + t5233 + t5247 + t4943*t5255) + t4963*(-1.*t4536*t5219 - 1.*t4724*t5255 + t5266 + t5272) + t4494*t5587 + t4196*t5607)*var2[6] + (t4109*t5587 + t4536*t5607 + t4963*(0. - 1.*t4196*t5219 + t5355 + t5630) + t4828*(0. + t4987*t5219 + t5363 + t5635))*var2[7];
  p_output1[25]=(t2980*(-1.*t4929*t5219 - 1.*t4943*t5301 + t5427 + t5428) + t4915*t5647 + t4963*(t1681*t5301 + t5389 + t5421 + t5653) + t5666)*var2[5] + (t2980*(-1.*t4876*t5219 - 1.*t4943*t5255 + t5401 + t5403) + t4196*t5647 + t4963*(t1681*t5255 + t5388 + t5389 + t5653) + t5666)*var2[6] + (0. + t4536*t5647 + t2980*(0. - 1.*t4987*t5219 + t5471 + t5686))*var2[7];
  p_output1[26]=(t2980*(t4794*t5219 + t4724*t5301 + t5539 + t5544) + t4767*t5694 + t4828*(-1.*t1681*t5301 + t5500 + t5532 + t5705) + t5721)*var2[5] + (t2980*(t4536*t5219 + t4724*t5255 + t5508 + t5514) + t4494*t5694 + t4828*(-1.*t1681*t5255 + t5498 + t5500 + t5705) + t5721)*var2[6] + (0. + t2980*(0. - 1.*t4264*t5213 + t4196*t5219 + t5486) + t4109*t5694)*var2[7];
  p_output1[27]=t2651*var2[5] + t2651*var2[6];
  p_output1[28]=t4767*var2[5] + t4494*var2[6] + t4109*var2[7];
  p_output1[29]=t4915*var2[5] + t4196*var2[6] + t4536*var2[7];
  p_output1[30]=(t4954*(t1317*t4264*t5180 - 1.*t383*t4264*t5200 - 1.*t4708*t5236 - 1.*t4653*t5243) + t4633*(t1317*t3866*t5180 - 1.*t383*t3866*t5200 + t4909*t5236 + t4900*t5243))*var2[6] + (-1.*t4264*(t4900*t5180 + t4909*t5200 + t5586) + t3866*(-1.*t4653*t5180 - 1.*t4708*t5200 + t5600) + t4954*(0. - 1.*t383*t3866*t5180 - 1.*t1317*t3866*t5200 + t5630) + t4633*(0. + t383*t4264*t5180 + t1317*t4264*t5200 + t5635))*var2[7];
  p_output1[31]=t4954*(t383*t5180 + t1317*t5200 - 1.*t383*t5236 + t1317*t5243)*var2[6] + (0. + t3866*(0. + t1317*t5180 - 1.*t383*t5200))*var2[7];
  p_output1[32]=t4633*(-1.*t383*t5180 - 1.*t1317*t5200 + t383*t5236 - 1.*t1317*t5243)*var2[6] + (0. - 1.*t4264*(0. - 1.*t1317*t5180 + t383*t5200))*var2[7];
  p_output1[33]=0;
  p_output1[34]=t5840;
  p_output1[35]=t5841;
  p_output1[36]=(t3866*(0. + t4264*t5175 + t5635) + t3866*(0. - 1.*t4264*t5175 + t5686))*var2[7];
  p_output1[37]=0.09*t3866*var2[7];
  p_output1[38]=0.09*t4264*var2[7];
  p_output1[39]=0;
  p_output1[40]=t5840;
  p_output1[41]=t5841;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJb_LeftRotationJoint_mex.hh"

namespace SymExpression
{

void dJb_LeftRotationJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
