/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:17 GMT-04:00
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
  double t3540;
  double t3557;
  double t3574;
  double t3884;
  double t3507;
  double t3917;
  double t4130;
  double t3682;
  double t3928;
  double t3932;
  double t3468;
  double t4131;
  double t4133;
  double t4136;
  double t4144;
  double t4149;
  double t4158;
  double t4159;
  double t4169;
  double t4170;
  double t4249;
  double t4093;
  double t4179;
  double t4209;
  double t1788;
  double t4255;
  double t4269;
  double t4270;
  double t4302;
  double t4245;
  double t4282;
  double t4283;
  double t1236;
  double t4306;
  double t4307;
  double t4308;
  double t204;
  double t4428;
  double t4417;
  double t4456;
  double t4463;
  double t4473;
  double t4485;
  double t4493;
  double t4467;
  double t4494;
  double t4504;
  double t4521;
  double t4523;
  double t4525;
  double t4517;
  double t4536;
  double t4552;
  double t4562;
  double t4590;
  double t4601;
  double t4359;
  double t4557;
  double t4609;
  double t4626;
  double t4632;
  double t4643;
  double t4644;
  double t4703;
  double t4705;
  double t4707;
  double t4708;
  double t4723;
  double t4726;
  double t4745;
  double t4768;
  double t4772;
  double t4776;
  double t4802;
  double t4819;
  double t4840;
  double t4849;
  double t4855;
  double t4902;
  double t4904;
  double t4923;
  double t4925;
  double t4908;
  double t4926;
  double t4938;
  double t4954;
  double t4956;
  double t4957;
  double t4941;
  double t4972;
  double t4983;
  double t4989;
  double t4998;
  double t5000;
  double t5076;
  double t5080;
  double t5081;
  double t5074;
  double t5084;
  double t5086;
  double t5101;
  double t5103;
  double t5108;
  double t5098;
  double t5109;
  double t5114;
  double t5123;
  double t5127;
  double t5136;
  double t5171;
  double t5180;
  double t5181;
  double t5182;
  double t5183;
  double t5190;
  double t5194;
  double t5189;
  double t5208;
  double t5232;
  double t5233;
  double t5236;
  double t5247;
  double t5252;
  double t5256;
  double t5297;
  double t5305;
  double t5323;
  double t5326;
  double t5327;
  double t5334;
  double t5324;
  double t5337;
  double t5339;
  double t5341;
  double t5347;
  double t5348;
  double t5357;
  double t5367;
  double t5381;
  double t5340;
  double t5389;
  double t5390;
  double t5395;
  double t5397;
  double t5399;
  double t5391;
  double t5403;
  double t5408;
  double t5426;
  double t5431;
  double t5438;
  double t5490;
  double t5492;
  double t5494;
  double t5506;
  double t5508;
  double t5511;
  double t5515;
  double t5517;
  double t5519;
  double t5501;
  double t5521;
  double t5526;
  double t5535;
  double t5542;
  double t5543;
  double t5534;
  double t5548;
  double t5551;
  double t5572;
  double t5580;
  double t5581;
  double t5598;
  double t5605;
  double t5608;
  double t5610;
  double t5613;
  double t5615;
  double t5616;
  double t5618;
  double t5614;
  double t5622;
  double t5625;
  double t5631;
  double t5644;
  double t5646;
  double t5627;
  double t5650;
  double t5651;
  double t5654;
  double t5656;
  double t5657;
  double t5700;
  double t5706;
  double t5713;
  double t5718;
  double t5722;
  double t5723;
  double t5725;
  double t5727;
  double t5730;
  double t5731;
  double t5734;
  double t5735;
  double t5740;
  double t5741;
  double t5744;
  double t5794;
  double t5796;
  double t5798;
  double t5799;
  double t5797;
  double t5808;
  double t5821;
  double t5825;
  double t5826;
  double t5830;
  double t5823;
  double t5831;
  double t5833;
  double t5841;
  double t5846;
  double t5848;
  double t5267;
  double t5268;
  double t5275;
  double t5911;
  double t5912;
  double t5914;
  double t5908;
  double t5915;
  double t5920;
  double t5927;
  double t5928;
  double t5935;
  double t5922;
  double t5936;
  double t5938;
  double t5942;
  double t5945;
  double t5946;
  double t5984;
  double t5990;
  double t5992;
  double t5994;
  double t6000;
  double t6003;
  double t6004;
  double t6001;
  double t6018;
  double t6041;
  double t6052;
  double t6071;
  double t6099;
  double t6100;
  double t6114;
  double t6147;
  double t6148;
  double t6155;
  double t6158;
  double t6161;
  double t6162;
  double t6168;
  double t6169;
  double t6171;
  double t6179;
  double t6180;
  double t6183;
  double t6205;
  double t6206;
  double t6212;
  double t6217;
  double t6223;
  double t6224;
  double t6215;
  double t6226;
  double t6227;
  double t6234;
  double t6236;
  double t6238;
  double t6230;
  double t6241;
  double t6242;
  double t6250;
  double t6251;
  double t6252;
  double t6248;
  double t6259;
  double t6261;
  double t6264;
  double t6266;
  double t6267;
  double t6272;
  double t6275;
  double t6278;
  double t6297;
  double t6301;
  double t6308;
  double t6292;
  double t6310;
  double t6325;
  double t6332;
  double t6333;
  double t6339;
  double t6330;
  double t6341;
  double t6343;
  double t6352;
  double t6358;
  double t6360;
  double t6429;
  double t6433;
  double t6456;
  double t6459;
  double t6463;
  double t6466;
  double t6476;
  double t6464;
  double t6493;
  double t6511;
  double t6514;
  double t6515;
  double t6525;
  double t6532;
  double t6533;
  double t6564;
  double t6566;
  double t6571;
  double t6582;
  double t6583;
  double t6585;
  double t6586;
  double t6588;
  double t6590;
  double t6578;
  double t6591;
  double t6600;
  double t6604;
  double t6609;
  double t6612;
  double t6603;
  double t6617;
  double t6618;
  double t6635;
  double t6641;
  double t6642;
  double t4300;
  double t4343;
  double t4345;
  double t4371;
  double t4378;
  double t4379;
  double t4627;
  double t4651;
  double t4659;
  double t4686;
  double t4687;
  double t4689;
  double t4825;
  double t4857;
  double t4858;
  double t4875;
  double t4876;
  double t4879;
  double t4984;
  double t5006;
  double t5007;
  double t5024;
  double t5026;
  double t5029;
  double t5121;
  double t5145;
  double t5146;
  double t5149;
  double t5151;
  double t5152;
  double t5197;
  double t5198;
  double t5213;
  double t5217;
  double t5237;
  double t5238;
  double t6774;
  double t5417;
  double t5439;
  double t5440;
  double t5449;
  double t5468;
  double t5469;
  double t5556;
  double t5582;
  double t5584;
  double t5587;
  double t5588;
  double t5589;
  double t5653;
  double t5659;
  double t5667;
  double t5677;
  double t5679;
  double t5680;
  double t5738;
  double t5745;
  double t5747;
  double t5756;
  double t5757;
  double t5761;
  double t5835;
  double t5849;
  double t5862;
  double t5870;
  double t5873;
  double t5878;
  double t5282;
  double t5283;
  double t5941;
  double t5950;
  double t5955;
  double t5958;
  double t5959;
  double t5962;
  double t6009;
  double t6013;
  double t6019;
  double t6026;
  double t6083;
  double t6085;
  double t6121;
  double t6122;
  double t6123;
  double t6958;
  double t6178;
  double t6185;
  double t6191;
  double t6194;
  double t6196;
  double t6197;
  double t6985;
  double t6987;
  double t6995;
  double t6348;
  double t6365;
  double t6369;
  double t6377;
  double t6388;
  double t6390;
  double t6479;
  double t6481;
  double t6496;
  double t6498;
  double t6517;
  double t6523;
  double t6549;
  double t6550;
  double t6551;
  double t7031;
  double t6632;
  double t6649;
  double t6651;
  double t6658;
  double t6664;
  double t6665;
  t3540 = Cos(var1[3]);
  t3557 = Cos(var1[4]);
  t3574 = Cos(var1[5]);
  t3884 = Sin(var1[13]);
  t3507 = Cos(var1[13]);
  t3917 = Sin(var1[5]);
  t4130 = Cos(var1[15]);
  t3682 = t3507*t3540*t3557*t3574;
  t3928 = -1.*t3540*t3557*t3884*t3917;
  t3932 = t3682 + t3928;
  t3468 = Sin(var1[15]);
  t4131 = Cos(var1[14]);
  t4133 = Sin(var1[4]);
  t4136 = -1.*t4131*t3540*t4133;
  t4144 = Sin(var1[14]);
  t4149 = t3540*t3557*t3574*t3884;
  t4158 = t3507*t3540*t3557*t3917;
  t4159 = t4149 + t4158;
  t4169 = t4144*t4159;
  t4170 = t4136 + t4169;
  t4249 = Cos(var1[16]);
  t4093 = t3468*t3932;
  t4179 = t4130*t4170;
  t4209 = t4093 + t4179;
  t1788 = Sin(var1[16]);
  t4255 = t4130*t3932;
  t4269 = -1.*t3468*t4170;
  t4270 = t4255 + t4269;
  t4302 = Cos(var1[17]);
  t4245 = -1.*t1788*t4209;
  t4282 = t4249*t4270;
  t4283 = t4245 + t4282;
  t1236 = Sin(var1[17]);
  t4306 = t4249*t4209;
  t4307 = t1788*t4270;
  t4308 = t4306 + t4307;
  t204 = Sin(var1[18]);
  t4428 = Sin(var1[3]);
  t4417 = t3540*t3574*t4133;
  t4456 = t4428*t3917;
  t4463 = t4417 + t4456;
  t4473 = t3574*t4428;
  t4485 = -1.*t3540*t4133*t3917;
  t4493 = t4473 + t4485;
  t4467 = -1.*t3884*t4463;
  t4494 = t3507*t4493;
  t4504 = t4467 + t4494;
  t4521 = t3507*t4463;
  t4523 = t3884*t4493;
  t4525 = t4521 + t4523;
  t4517 = t3468*t4504;
  t4536 = t4130*t4144*t4525;
  t4552 = t4517 + t4536;
  t4562 = t4130*t4504;
  t4590 = -1.*t4144*t3468*t4525;
  t4601 = t4562 + t4590;
  t4359 = Cos(var1[18]);
  t4557 = -1.*t1788*t4552;
  t4609 = t4249*t4601;
  t4626 = t4557 + t4609;
  t4632 = t4249*t4552;
  t4643 = t1788*t4601;
  t4644 = t4632 + t4643;
  t4703 = -1.*t3540*t3557*t4144;
  t4705 = t3884*t4463;
  t4707 = -1.*t3574*t4428;
  t4708 = t3540*t4133*t3917;
  t4723 = t4707 + t4708;
  t4726 = t3507*t4723;
  t4745 = t4705 + t4726;
  t4768 = t4131*t4745;
  t4772 = t4703 + t4768;
  t4776 = -1.*t4249*t3468*t4772;
  t4802 = -1.*t4130*t1788*t4772;
  t4819 = t4776 + t4802;
  t4840 = t4130*t4249*t4772;
  t4849 = -1.*t3468*t1788*t4772;
  t4855 = t4840 + t4849;
  t4902 = -1.*t3507*t4723;
  t4904 = t4467 + t4902;
  t4923 = -1.*t3884*t4723;
  t4925 = t4521 + t4923;
  t4908 = t3468*t4904;
  t4926 = t4130*t4144*t4925;
  t4938 = t4908 + t4926;
  t4954 = t4130*t4904;
  t4956 = -1.*t4144*t3468*t4925;
  t4957 = t4954 + t4956;
  t4941 = -1.*t1788*t4938;
  t4972 = t4249*t4957;
  t4983 = t4941 + t4972;
  t4989 = t4249*t4938;
  t4998 = t1788*t4957;
  t5000 = t4989 + t4998;
  t5076 = t4131*t3540*t3557;
  t5080 = t4144*t4745;
  t5081 = t5076 + t5080;
  t5074 = -1.*t3468*t4925;
  t5084 = -1.*t4130*t5081;
  t5086 = t5074 + t5084;
  t5101 = t4130*t4925;
  t5103 = -1.*t3468*t5081;
  t5108 = t5101 + t5103;
  t5098 = t1788*t5086;
  t5109 = t4249*t5108;
  t5114 = t5098 + t5109;
  t5123 = t4249*t5086;
  t5127 = -1.*t1788*t5108;
  t5136 = t5123 + t5127;
  t5171 = t3468*t4925;
  t5180 = t4130*t5081;
  t5181 = t5171 + t5180;
  t5182 = -1.*t1788*t5181;
  t5183 = t5182 + t5109;
  t5190 = -1.*t4249*t5181;
  t5194 = t5190 + t5127;
  t5189 = -1.*t1236*t5183;
  t5208 = t4302*t5183;
  t5232 = t4249*t5181;
  t5233 = t1788*t5108;
  t5236 = t5232 + t5233;
  t5247 = -1.*t1236*t5236;
  t5252 = t5208 + t5247;
  t5256 = t204*t5252;
  t5297 = -1.*t3574*t4428*t4133;
  t5305 = t3540*t3917;
  t5323 = t5297 + t5305;
  t5326 = -1.*t3540*t3574;
  t5327 = -1.*t4428*t4133*t3917;
  t5334 = t5326 + t5327;
  t5324 = t3507*t5323;
  t5337 = -1.*t3884*t5334;
  t5339 = t5324 + t5337;
  t5341 = -1.*t4131*t3557*t4428;
  t5347 = t3884*t5323;
  t5348 = t3507*t5334;
  t5357 = t5347 + t5348;
  t5367 = t4144*t5357;
  t5381 = t5341 + t5367;
  t5340 = t3468*t5339;
  t5389 = t4130*t5381;
  t5390 = t5340 + t5389;
  t5395 = t4130*t5339;
  t5397 = -1.*t3468*t5381;
  t5399 = t5395 + t5397;
  t5391 = -1.*t1788*t5390;
  t5403 = t4249*t5399;
  t5408 = t5391 + t5403;
  t5426 = t4249*t5390;
  t5431 = t1788*t5399;
  t5438 = t5426 + t5431;
  t5490 = t3507*t3557*t3574*t4428;
  t5492 = -1.*t3557*t3884*t4428*t3917;
  t5494 = t5490 + t5492;
  t5506 = -1.*t4131*t4428*t4133;
  t5508 = t3557*t3574*t3884*t4428;
  t5511 = t3507*t3557*t4428*t3917;
  t5515 = t5508 + t5511;
  t5517 = t4144*t5515;
  t5519 = t5506 + t5517;
  t5501 = t3468*t5494;
  t5521 = t4130*t5519;
  t5526 = t5501 + t5521;
  t5535 = t4130*t5494;
  t5542 = -1.*t3468*t5519;
  t5543 = t5535 + t5542;
  t5534 = -1.*t1788*t5526;
  t5548 = t4249*t5543;
  t5551 = t5534 + t5548;
  t5572 = t4249*t5526;
  t5580 = t1788*t5543;
  t5581 = t5572 + t5580;
  t5598 = t3574*t4428*t4133;
  t5605 = -1.*t3540*t3917;
  t5608 = t5598 + t5605;
  t5610 = -1.*t3884*t5608;
  t5613 = t5610 + t5348;
  t5615 = t3507*t5608;
  t5616 = t3884*t5334;
  t5618 = t5615 + t5616;
  t5614 = t3468*t5613;
  t5622 = t4130*t4144*t5618;
  t5625 = t5614 + t5622;
  t5631 = t4130*t5613;
  t5644 = -1.*t4144*t3468*t5618;
  t5646 = t5631 + t5644;
  t5627 = -1.*t1788*t5625;
  t5650 = t4249*t5646;
  t5651 = t5627 + t5650;
  t5654 = t4249*t5625;
  t5656 = t1788*t5646;
  t5657 = t5654 + t5656;
  t5700 = -1.*t3557*t4144*t4428;
  t5706 = t3884*t5608;
  t5713 = t3540*t3574;
  t5718 = t4428*t4133*t3917;
  t5722 = t5713 + t5718;
  t5723 = t3507*t5722;
  t5725 = t5706 + t5723;
  t5727 = t4131*t5725;
  t5730 = t5700 + t5727;
  t5731 = -1.*t4249*t3468*t5730;
  t5734 = -1.*t4130*t1788*t5730;
  t5735 = t5731 + t5734;
  t5740 = t4130*t4249*t5730;
  t5741 = -1.*t3468*t1788*t5730;
  t5744 = t5740 + t5741;
  t5794 = -1.*t3507*t5722;
  t5796 = t5610 + t5794;
  t5798 = -1.*t3884*t5722;
  t5799 = t5615 + t5798;
  t5797 = t3468*t5796;
  t5808 = t4130*t4144*t5799;
  t5821 = t5797 + t5808;
  t5825 = t4130*t5796;
  t5826 = -1.*t4144*t3468*t5799;
  t5830 = t5825 + t5826;
  t5823 = -1.*t1788*t5821;
  t5831 = t4249*t5830;
  t5833 = t5823 + t5831;
  t5841 = t4249*t5821;
  t5846 = t1788*t5830;
  t5848 = t5841 + t5846;
  t5267 = t1236*t5183;
  t5268 = t4302*t5236;
  t5275 = t5267 + t5268;
  t5911 = t4131*t3557*t4428;
  t5912 = t4144*t5725;
  t5914 = t5911 + t5912;
  t5908 = -1.*t3468*t5799;
  t5915 = -1.*t4130*t5914;
  t5920 = t5908 + t5915;
  t5927 = t4130*t5799;
  t5928 = -1.*t3468*t5914;
  t5935 = t5927 + t5928;
  t5922 = t1788*t5920;
  t5936 = t4249*t5935;
  t5938 = t5922 + t5936;
  t5942 = t4249*t5920;
  t5945 = -1.*t1788*t5935;
  t5946 = t5942 + t5945;
  t5984 = t3468*t5799;
  t5990 = t4130*t5914;
  t5992 = t5984 + t5990;
  t5994 = -1.*t1788*t5992;
  t6000 = t5994 + t5936;
  t6003 = -1.*t4249*t5992;
  t6004 = t6003 + t5945;
  t6001 = -1.*t1236*t6000;
  t6018 = t4302*t6000;
  t6041 = t4249*t5992;
  t6052 = t1788*t5935;
  t6071 = t6041 + t6052;
  t6099 = -1.*t1236*t6071;
  t6100 = t6018 + t6099;
  t6114 = t204*t6100;
  t6147 = t4144*t4133;
  t6148 = t3557*t3574*t3884;
  t6155 = t3507*t3557*t3917;
  t6158 = t6148 + t6155;
  t6161 = t4131*t6158;
  t6162 = t6147 + t6161;
  t6168 = -1.*t4249*t3468*t6162;
  t6169 = -1.*t4130*t1788*t6162;
  t6171 = t6168 + t6169;
  t6179 = t4130*t4249*t6162;
  t6180 = -1.*t3468*t1788*t6162;
  t6183 = t6179 + t6180;
  t6205 = -1.*t3557*t3574*t3884;
  t6206 = -1.*t3507*t3557*t3917;
  t6212 = t6205 + t6206;
  t6217 = t3507*t3557*t3574;
  t6223 = -1.*t3557*t3884*t3917;
  t6224 = t6217 + t6223;
  t6215 = t3468*t6212;
  t6226 = t4130*t4144*t6224;
  t6227 = t6215 + t6226;
  t6234 = t4130*t6212;
  t6236 = -1.*t4144*t3468*t6224;
  t6238 = t6234 + t6236;
  t6230 = -1.*t1788*t6227;
  t6241 = t4249*t6238;
  t6242 = t6230 + t6241;
  t6250 = t4249*t6227;
  t6251 = t1788*t6238;
  t6252 = t6250 + t6251;
  t6248 = t1236*t6242;
  t6259 = t4302*t6252;
  t6261 = t6248 + t6259;
  t6264 = t204*t6261;
  t6266 = t4302*t6242;
  t6267 = -1.*t1236*t6252;
  t6272 = t6266 + t6267;
  t6275 = -1.*t4359*t6272;
  t6278 = t6264 + t6275;
  t6297 = -1.*t4131*t4133;
  t6301 = t4144*t6158;
  t6308 = t6297 + t6301;
  t6292 = -1.*t3468*t6224;
  t6310 = -1.*t4130*t6308;
  t6325 = t6292 + t6310;
  t6332 = t4130*t6224;
  t6333 = -1.*t3468*t6308;
  t6339 = t6332 + t6333;
  t6330 = t1788*t6325;
  t6341 = t4249*t6339;
  t6343 = t6330 + t6341;
  t6352 = t4249*t6325;
  t6358 = -1.*t1788*t6339;
  t6360 = t6352 + t6358;
  t6429 = t3468*t6224;
  t6433 = t4130*t6308;
  t6456 = t6429 + t6433;
  t6459 = -1.*t1788*t6456;
  t6463 = t6459 + t6341;
  t6466 = -1.*t4249*t6456;
  t6476 = t6466 + t6358;
  t6464 = -1.*t1236*t6463;
  t6493 = t4302*t6463;
  t6511 = t4249*t6456;
  t6514 = t1788*t6339;
  t6515 = t6511 + t6514;
  t6525 = -1.*t1236*t6515;
  t6532 = t6493 + t6525;
  t6533 = t204*t6532;
  t6564 = -1.*t3507*t3574*t4133;
  t6566 = t3884*t4133*t3917;
  t6571 = t6564 + t6566;
  t6582 = -1.*t4131*t3557;
  t6583 = -1.*t3574*t3884*t4133;
  t6585 = -1.*t3507*t4133*t3917;
  t6586 = t6583 + t6585;
  t6588 = t4144*t6586;
  t6590 = t6582 + t6588;
  t6578 = t3468*t6571;
  t6591 = t4130*t6590;
  t6600 = t6578 + t6591;
  t6604 = t4130*t6571;
  t6609 = -1.*t3468*t6590;
  t6612 = t6604 + t6609;
  t6603 = -1.*t1788*t6600;
  t6617 = t4249*t6612;
  t6618 = t6603 + t6617;
  t6635 = t4249*t6600;
  t6641 = t1788*t6612;
  t6642 = t6635 + t6641;
  t4300 = t1236*t4283;
  t4343 = t4302*t4308;
  t4345 = t4300 + t4343;
  t4371 = t4302*t4283;
  t4378 = -1.*t1236*t4308;
  t4379 = t4371 + t4378;
  t4627 = t1236*t4626;
  t4651 = t4302*t4644;
  t4659 = t4627 + t4651;
  t4686 = t4302*t4626;
  t4687 = -1.*t1236*t4644;
  t4689 = t4686 + t4687;
  t4825 = t1236*t4819;
  t4857 = t4302*t4855;
  t4858 = t4825 + t4857;
  t4875 = t4302*t4819;
  t4876 = -1.*t1236*t4855;
  t4879 = t4875 + t4876;
  t4984 = t1236*t4983;
  t5006 = t4302*t5000;
  t5007 = t4984 + t5006;
  t5024 = t4302*t4983;
  t5026 = -1.*t1236*t5000;
  t5029 = t5024 + t5026;
  t5121 = -1.*t1236*t5114;
  t5145 = t4302*t5136;
  t5146 = t5121 + t5145;
  t5149 = t4302*t5114;
  t5151 = t1236*t5136;
  t5152 = t5149 + t5151;
  t5197 = t4302*t5194;
  t5198 = t5189 + t5197;
  t5213 = t1236*t5194;
  t5217 = t5208 + t5213;
  t5237 = -1.*t4302*t5236;
  t5238 = t5189 + t5237;
  t6774 = t4359*t5252;
  t5417 = t1236*t5408;
  t5439 = t4302*t5438;
  t5440 = t5417 + t5439;
  t5449 = t4302*t5408;
  t5468 = -1.*t1236*t5438;
  t5469 = t5449 + t5468;
  t5556 = t1236*t5551;
  t5582 = t4302*t5581;
  t5584 = t5556 + t5582;
  t5587 = t4302*t5551;
  t5588 = -1.*t1236*t5581;
  t5589 = t5587 + t5588;
  t5653 = t1236*t5651;
  t5659 = t4302*t5657;
  t5667 = t5653 + t5659;
  t5677 = t4302*t5651;
  t5679 = -1.*t1236*t5657;
  t5680 = t5677 + t5679;
  t5738 = t1236*t5735;
  t5745 = t4302*t5744;
  t5747 = t5738 + t5745;
  t5756 = t4302*t5735;
  t5757 = -1.*t1236*t5744;
  t5761 = t5756 + t5757;
  t5835 = t1236*t5833;
  t5849 = t4302*t5848;
  t5862 = t5835 + t5849;
  t5870 = t4302*t5833;
  t5873 = -1.*t1236*t5848;
  t5878 = t5870 + t5873;
  t5282 = t4359*t5275;
  t5283 = t5282 + t5256;
  t5941 = -1.*t1236*t5938;
  t5950 = t4302*t5946;
  t5955 = t5941 + t5950;
  t5958 = t4302*t5938;
  t5959 = t1236*t5946;
  t5962 = t5958 + t5959;
  t6009 = t4302*t6004;
  t6013 = t6001 + t6009;
  t6019 = t1236*t6004;
  t6026 = t6018 + t6019;
  t6083 = -1.*t4302*t6071;
  t6085 = t6001 + t6083;
  t6121 = t1236*t6000;
  t6122 = t4302*t6071;
  t6123 = t6121 + t6122;
  t6958 = t4359*t6100;
  t6178 = t1236*t6171;
  t6185 = t4302*t6183;
  t6191 = t6178 + t6185;
  t6194 = t4302*t6171;
  t6196 = -1.*t1236*t6183;
  t6197 = t6194 + t6196;
  t6985 = t4359*t6261;
  t6987 = t204*t6272;
  t6995 = t6985 + t6987;
  t6348 = -1.*t1236*t6343;
  t6365 = t4302*t6360;
  t6369 = t6348 + t6365;
  t6377 = t4302*t6343;
  t6388 = t1236*t6360;
  t6390 = t6377 + t6388;
  t6479 = t4302*t6476;
  t6481 = t6464 + t6479;
  t6496 = t1236*t6476;
  t6498 = t6493 + t6496;
  t6517 = -1.*t4302*t6515;
  t6523 = t6464 + t6517;
  t6549 = t1236*t6463;
  t6550 = t4302*t6515;
  t6551 = t6549 + t6550;
  t7031 = t4359*t6532;
  t6632 = t1236*t6618;
  t6649 = t4302*t6642;
  t6651 = t6632 + t6649;
  t6658 = t4302*t6618;
  t6664 = -1.*t1236*t6642;
  t6665 = t6658 + t6664;
  p_output1[0]=(t204*t5440 - 1.*t4359*t5469)*var2[3] + (t204*t4345 - 1.*t4359*t4379)*var2[4] + (t204*t4659 - 1.*t4359*t4689)*var2[5] + (t204*t5007 - 1.*t4359*t5029)*var2[13] + (t204*t4858 - 1.*t4359*t4879)*var2[14] + (-1.*t4359*t5146 + t204*t5152)*var2[15] + (-1.*t4359*t5198 + t204*t5217)*var2[16] + (-1.*t4359*t5238 + t5256)*var2[17] + t5283*var2[18];
  p_output1[1]=(-1.*t4359*t5252 + t204*t5275)*var2[3] + (t204*t5584 - 1.*t4359*t5589)*var2[4] + (t204*t5667 - 1.*t4359*t5680)*var2[5] + (t204*t5862 - 1.*t4359*t5878)*var2[13] + (t204*t5747 - 1.*t4359*t5761)*var2[14] + (-1.*t4359*t5955 + t204*t5962)*var2[15] + (-1.*t4359*t6013 + t204*t6026)*var2[16] + (-1.*t4359*t6085 + t6114)*var2[17] + (t6114 + t4359*t6123)*var2[18];
  p_output1[2]=(t204*t6651 - 1.*t4359*t6665)*var2[4] + t6278*var2[5] + t6278*var2[13] + (t204*t6191 - 1.*t4359*t6197)*var2[14] + (-1.*t4359*t6369 + t204*t6390)*var2[15] + (-1.*t4359*t6481 + t204*t6498)*var2[16] + (-1.*t4359*t6523 + t6533)*var2[17] + (t6533 + t4359*t6551)*var2[18];
  p_output1[3]=(t4359*t5440 + t204*t5469)*var2[3] + (t4345*t4359 + t204*t4379)*var2[4] + (t4359*t4659 + t204*t4689)*var2[5] + (t4359*t5007 + t204*t5029)*var2[13] + (t4359*t4858 + t204*t4879)*var2[14] + (t204*t5146 + t4359*t5152)*var2[15] + (t204*t5198 + t4359*t5217)*var2[16] + (t204*t5238 + t6774)*var2[17] + (-1.*t204*t5275 + t6774)*var2[18];
  p_output1[4]=t5283*var2[3] + (t4359*t5584 + t204*t5589)*var2[4] + (t4359*t5667 + t204*t5680)*var2[5] + (t4359*t5862 + t204*t5878)*var2[13] + (t4359*t5747 + t204*t5761)*var2[14] + (t204*t5955 + t4359*t5962)*var2[15] + (t204*t6013 + t4359*t6026)*var2[16] + (t204*t6085 + t6958)*var2[17] + (-1.*t204*t6123 + t6958)*var2[18];
  p_output1[5]=(t4359*t6651 + t204*t6665)*var2[4] + t6995*var2[5] + t6995*var2[13] + (t4359*t6191 + t204*t6197)*var2[14] + (t204*t6369 + t4359*t6390)*var2[15] + (t204*t6481 + t4359*t6498)*var2[16] + (t204*t6523 + t7031)*var2[17] + (-1.*t204*t6551 + t7031)*var2[18];
  p_output1[6]=(-1.*t4131*t5357 + t5700)*var2[3] + (-1.*t3540*t4133*t4144 - 1.*t4131*t4159)*var2[4] - 1.*t4131*t4525*var2[5] - 1.*t4131*t4925*var2[13] + t5081*var2[14];
  p_output1[7]=(t3540*t3557*t4144 - 1.*t4131*t4745)*var2[3] + (-1.*t4133*t4144*t4428 - 1.*t4131*t5515)*var2[4] - 1.*t4131*t5618*var2[5] - 1.*t4131*t5799*var2[13] + t5914*var2[14];
  p_output1[8]=(-1.*t3557*t4144 - 1.*t4131*t6586)*var2[4] - 1.*t4131*t6224*var2[5] - 1.*t4131*t6224*var2[13] + t6308*var2[14];
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

#include "dR_RightTarsus_mex.hh"

namespace SymExpression
{

void dR_RightTarsus_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
