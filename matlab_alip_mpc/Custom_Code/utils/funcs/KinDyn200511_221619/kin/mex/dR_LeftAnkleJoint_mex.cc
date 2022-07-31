/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:13 GMT-04:00
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
  double t2412;
  double t1428;
  double t2685;
  double t1679;
  double t2692;
  double t1259;
  double t1266;
  double t1930;
  double t2851;
  double t3260;
  double t3264;
  double t3330;
  double t3339;
  double t3599;
  double t3652;
  double t3656;
  double t3875;
  double t3887;
  double t3888;
  double t3889;
  double t3899;
  double t3909;
  double t3918;
  double t440;
  double t848;
  double t3923;
  double t3948;
  double t3913;
  double t3925;
  double t3933;
  double t303;
  double t3961;
  double t3962;
  double t3978;
  double t28;
  double t4049;
  double t4061;
  double t4064;
  double t4086;
  double t4095;
  double t4101;
  double t4045;
  double t4079;
  double t4080;
  double t4085;
  double t4126;
  double t4129;
  double t4136;
  double t4138;
  double t4146;
  double t4003;
  double t4132;
  double t4161;
  double t4164;
  double t4181;
  double t4186;
  double t4192;
  double t4289;
  double t4293;
  double t4274;
  double t4281;
  double t4285;
  double t4294;
  double t4296;
  double t4304;
  double t4306;
  double t4316;
  double t4301;
  double t4319;
  double t4320;
  double t4331;
  double t4333;
  double t4339;
  double t4450;
  double t4463;
  double t4476;
  double t4409;
  double t4416;
  double t4427;
  double t4431;
  double t4432;
  double t4447;
  double t4449;
  double t4484;
  double t4486;
  double t4517;
  double t4518;
  double t4529;
  double t4487;
  double t4531;
  double t4539;
  double t4546;
  double t4549;
  double t4553;
  double t4659;
  double t4685;
  double t4688;
  double t4622;
  double t4637;
  double t4644;
  double t4726;
  double t4729;
  double t4731;
  double t4619;
  double t4646;
  double t4691;
  double t4694;
  double t4703;
  double t4716;
  double t4717;
  double t4736;
  double t4756;
  double t4760;
  double t4761;
  double t4764;
  double t4758;
  double t4769;
  double t4778;
  double t4785;
  double t4786;
  double t4787;
  double t4848;
  double t4853;
  double t4880;
  double t4891;
  double t4896;
  double t4899;
  double t4910;
  double t4914;
  double t4915;
  double t4907;
  double t4917;
  double t4919;
  double t4921;
  double t4927;
  double t4932;
  double t4970;
  double t4972;
  double t4974;
  double t4976;
  double t4977;
  double t4980;
  double t4981;
  double t4979;
  double t4992;
  double t5025;
  double t5026;
  double t5028;
  double t5037;
  double t5040;
  double t5045;
  double t5078;
  double t5079;
  double t5082;
  double t5088;
  double t5089;
  double t5090;
  double t5096;
  double t5112;
  double t5114;
  double t5117;
  double t5121;
  double t5124;
  double t5125;
  double t5133;
  double t5134;
  double t5142;
  double t5150;
  double t5151;
  double t5200;
  double t5204;
  double t5179;
  double t5180;
  double t5189;
  double t5195;
  double t5207;
  double t5208;
  double t5213;
  double t5214;
  double t5229;
  double t5209;
  double t5233;
  double t5235;
  double t5238;
  double t5239;
  double t5241;
  double t5294;
  double t5299;
  double t5275;
  double t5276;
  double t5285;
  double t5300;
  double t5302;
  double t5314;
  double t5318;
  double t5320;
  double t5310;
  double t5333;
  double t5334;
  double t5337;
  double t5339;
  double t5351;
  double t5414;
  double t5416;
  double t5424;
  double t5385;
  double t5393;
  double t5398;
  double t5399;
  double t5406;
  double t5411;
  double t5413;
  double t5427;
  double t5428;
  double t5431;
  double t5441;
  double t5445;
  double t5430;
  double t5446;
  double t5448;
  double t5474;
  double t5476;
  double t5477;
  double t5517;
  double t5518;
  double t5521;
  double t5525;
  double t5526;
  double t5531;
  double t5547;
  double t5549;
  double t5553;
  double t5532;
  double t5563;
  double t5570;
  double t5576;
  double t5581;
  double t5582;
  double t5640;
  double t5648;
  double t5649;
  double t5650;
  double t5656;
  double t5662;
  double t5669;
  double t5661;
  double t5692;
  double t5708;
  double t5718;
  double t5721;
  double t5736;
  double t5737;
  double t5738;
  double t5059;
  double t5061;
  double t5065;
  double t5779;
  double t5783;
  double t5785;
  double t5790;
  double t5791;
  double t5793;
  double t5796;
  double t5798;
  double t5802;
  double t5811;
  double t5813;
  double t5815;
  double t5858;
  double t5861;
  double t5863;
  double t5849;
  double t5850;
  double t5851;
  double t5856;
  double t5871;
  double t5872;
  double t5883;
  double t5885;
  double t5887;
  double t5878;
  double t5890;
  double t5892;
  double t5897;
  double t5901;
  double t5902;
  double t5894;
  double t5905;
  double t5906;
  double t5907;
  double t5909;
  double t5911;
  double t5913;
  double t5914;
  double t5915;
  double t5919;
  double t5930;
  double t5932;
  double t5934;
  double t5936;
  double t5937;
  double t5940;
  double t5941;
  double t5945;
  double t5938;
  double t5946;
  double t5947;
  double t5954;
  double t5958;
  double t5960;
  double t5990;
  double t5992;
  double t5994;
  double t5995;
  double t5999;
  double t6001;
  double t6002;
  double t6000;
  double t6010;
  double t6022;
  double t6023;
  double t6024;
  double t6031;
  double t6032;
  double t6036;
  double t6112;
  double t6113;
  double t6122;
  double t6086;
  double t6091;
  double t6096;
  double t6097;
  double t6101;
  double t6104;
  double t6105;
  double t6128;
  double t6132;
  double t6136;
  double t6139;
  double t6140;
  double t6135;
  double t6145;
  double t6146;
  double t6151;
  double t6152;
  double t6153;
  double t3940;
  double t3996;
  double t3997;
  double t4019;
  double t4029;
  double t4033;
  double t4168;
  double t4197;
  double t4199;
  double t4222;
  double t4236;
  double t4240;
  double t4321;
  double t4356;
  double t4361;
  double t4368;
  double t4381;
  double t4389;
  double t4545;
  double t4564;
  double t4580;
  double t4588;
  double t4596;
  double t4597;
  double t4784;
  double t4788;
  double t4793;
  double t4817;
  double t4821;
  double t4824;
  double t4920;
  double t4937;
  double t4940;
  double t4948;
  double t4953;
  double t4961;
  double t4982;
  double t4987;
  double t4995;
  double t5002;
  double t5029;
  double t5030;
  double t6252;
  double t5135;
  double t5155;
  double t5157;
  double t5168;
  double t5169;
  double t5171;
  double t5236;
  double t5247;
  double t5250;
  double t5254;
  double t5261;
  double t5262;
  double t5336;
  double t5355;
  double t5359;
  double t5366;
  double t5367;
  double t5371;
  double t5464;
  double t5484;
  double t5485;
  double t5494;
  double t5495;
  double t5497;
  double t5575;
  double t5586;
  double t5596;
  double t5614;
  double t5615;
  double t5618;
  double t5670;
  double t5674;
  double t5693;
  double t5695;
  double t5724;
  double t5730;
  double t5743;
  double t5751;
  double t5754;
  double t6325;
  double t5066;
  double t5068;
  double t5805;
  double t5821;
  double t5824;
  double t5835;
  double t5836;
  double t5838;
  double t6361;
  double t6362;
  double t6363;
  double t5948;
  double t5963;
  double t5965;
  double t5973;
  double t5974;
  double t5975;
  double t6003;
  double t6005;
  double t6012;
  double t6017;
  double t6027;
  double t6029;
  double t6064;
  double t6071;
  double t6074;
  double t6397;
  double t6147;
  double t6154;
  double t6155;
  double t6161;
  double t6162;
  double t6163;
  t2412 = Cos(var1[3]);
  t1428 = Cos(var1[5]);
  t2685 = Sin(var1[4]);
  t1679 = Sin(var1[3]);
  t2692 = Sin(var1[5]);
  t1259 = Cos(var1[7]);
  t1266 = Cos(var1[6]);
  t1930 = -1.*t1428*t1679;
  t2851 = t2412*t2685*t2692;
  t3260 = t1930 + t2851;
  t3264 = t1266*t3260;
  t3330 = t2412*t1428*t2685;
  t3339 = t1679*t2692;
  t3599 = t3330 + t3339;
  t3652 = Sin(var1[6]);
  t3656 = t3599*t3652;
  t3875 = t3264 + t3656;
  t3887 = t1259*t3875;
  t3888 = Cos(var1[4]);
  t3889 = Sin(var1[7]);
  t3899 = -1.*t2412*t3888*t3889;
  t3909 = t3887 + t3899;
  t3918 = Cos(var1[9]);
  t440 = Cos(var1[8]);
  t848 = Sin(var1[9]);
  t3923 = Sin(var1[8]);
  t3948 = Cos(var1[10]);
  t3913 = -1.*t440*t848*t3909;
  t3925 = -1.*t3918*t3909*t3923;
  t3933 = t3913 + t3925;
  t303 = Sin(var1[10]);
  t3961 = t3918*t440*t3909;
  t3962 = -1.*t848*t3909*t3923;
  t3978 = t3961 + t3962;
  t28 = Sin(var1[11]);
  t4049 = t1428*t1679;
  t4061 = -1.*t2412*t2685*t2692;
  t4064 = t4049 + t4061;
  t4086 = t1266*t4064;
  t4095 = -1.*t3599*t3652;
  t4101 = t4086 + t4095;
  t4045 = t1266*t3599;
  t4079 = t4064*t3652;
  t4080 = t4045 + t4079;
  t4085 = t440*t4080*t3889;
  t4126 = t4101*t3923;
  t4129 = t4085 + t4126;
  t4136 = t440*t4101;
  t4138 = -1.*t4080*t3889*t3923;
  t4146 = t4136 + t4138;
  t4003 = Cos(var1[11]);
  t4132 = -1.*t848*t4129;
  t4161 = t3918*t4146;
  t4164 = t4132 + t4161;
  t4181 = t3918*t4129;
  t4186 = t848*t4146;
  t4192 = t4181 + t4186;
  t4289 = -1.*t1266*t3260;
  t4293 = t4289 + t4095;
  t4274 = -1.*t3260*t3652;
  t4281 = t4045 + t4274;
  t4285 = t440*t4281*t3889;
  t4294 = t4293*t3923;
  t4296 = t4285 + t4294;
  t4304 = t440*t4293;
  t4306 = -1.*t4281*t3889*t3923;
  t4316 = t4304 + t4306;
  t4301 = -1.*t848*t4296;
  t4319 = t3918*t4316;
  t4320 = t4301 + t4319;
  t4331 = t3918*t4296;
  t4333 = t848*t4316;
  t4339 = t4331 + t4333;
  t4450 = t2412*t3888*t1428*t1266;
  t4463 = -1.*t2412*t3888*t2692*t3652;
  t4476 = t4450 + t4463;
  t4409 = -1.*t2412*t1259*t2685;
  t4416 = t2412*t3888*t1266*t2692;
  t4427 = t2412*t3888*t1428*t3652;
  t4431 = t4416 + t4427;
  t4432 = t4431*t3889;
  t4447 = t4409 + t4432;
  t4449 = t440*t4447;
  t4484 = t4476*t3923;
  t4486 = t4449 + t4484;
  t4517 = t440*t4476;
  t4518 = -1.*t4447*t3923;
  t4529 = t4517 + t4518;
  t4487 = -1.*t848*t4486;
  t4531 = t3918*t4529;
  t4539 = t4487 + t4531;
  t4546 = t3918*t4486;
  t4549 = t848*t4529;
  t4553 = t4546 + t4549;
  t4659 = -1.*t1428*t1679*t2685;
  t4685 = t2412*t2692;
  t4688 = t4659 + t4685;
  t4622 = -1.*t2412*t1428;
  t4637 = -1.*t1679*t2685*t2692;
  t4644 = t4622 + t4637;
  t4726 = t1266*t4688;
  t4729 = -1.*t4644*t3652;
  t4731 = t4726 + t4729;
  t4619 = -1.*t3888*t1259*t1679;
  t4646 = t1266*t4644;
  t4691 = t4688*t3652;
  t4694 = t4646 + t4691;
  t4703 = t4694*t3889;
  t4716 = t4619 + t4703;
  t4717 = t440*t4716;
  t4736 = t4731*t3923;
  t4756 = t4717 + t4736;
  t4760 = t440*t4731;
  t4761 = -1.*t4716*t3923;
  t4764 = t4760 + t4761;
  t4758 = -1.*t848*t4756;
  t4769 = t3918*t4764;
  t4778 = t4758 + t4769;
  t4785 = t3918*t4756;
  t4786 = t848*t4764;
  t4787 = t4785 + t4786;
  t4848 = t2412*t3888*t1259;
  t4853 = t3875*t3889;
  t4880 = t4848 + t4853;
  t4891 = -1.*t440*t4880;
  t4896 = -1.*t4281*t3923;
  t4899 = t4891 + t4896;
  t4910 = t440*t4281;
  t4914 = -1.*t4880*t3923;
  t4915 = t4910 + t4914;
  t4907 = t848*t4899;
  t4917 = t3918*t4915;
  t4919 = t4907 + t4917;
  t4921 = t3918*t4899;
  t4927 = -1.*t848*t4915;
  t4932 = t4921 + t4927;
  t4970 = t440*t4880;
  t4972 = t4281*t3923;
  t4974 = t4970 + t4972;
  t4976 = -1.*t848*t4974;
  t4977 = t4976 + t4917;
  t4980 = -1.*t3918*t4974;
  t4981 = t4980 + t4927;
  t4979 = -1.*t303*t4977;
  t4992 = t3948*t4977;
  t5025 = t3918*t4974;
  t5026 = t848*t4915;
  t5028 = t5025 + t5026;
  t5037 = -1.*t303*t5028;
  t5040 = t4992 + t5037;
  t5045 = t28*t5040;
  t5078 = t2412*t1428;
  t5079 = t1679*t2685*t2692;
  t5082 = t5078 + t5079;
  t5088 = t1266*t5082;
  t5089 = t1428*t1679*t2685;
  t5090 = -1.*t2412*t2692;
  t5096 = t5089 + t5090;
  t5112 = t5096*t3652;
  t5114 = t5088 + t5112;
  t5117 = t1259*t5114;
  t5121 = -1.*t3888*t1679*t3889;
  t5124 = t5117 + t5121;
  t5125 = -1.*t440*t848*t5124;
  t5133 = -1.*t3918*t5124*t3923;
  t5134 = t5125 + t5133;
  t5142 = t3918*t440*t5124;
  t5150 = -1.*t848*t5124*t3923;
  t5151 = t5142 + t5150;
  t5200 = -1.*t5096*t3652;
  t5204 = t4646 + t5200;
  t5179 = t1266*t5096;
  t5180 = t4644*t3652;
  t5189 = t5179 + t5180;
  t5195 = t440*t5189*t3889;
  t5207 = t5204*t3923;
  t5208 = t5195 + t5207;
  t5213 = t440*t5204;
  t5214 = -1.*t5189*t3889*t3923;
  t5229 = t5213 + t5214;
  t5209 = -1.*t848*t5208;
  t5233 = t3918*t5229;
  t5235 = t5209 + t5233;
  t5238 = t3918*t5208;
  t5239 = t848*t5229;
  t5241 = t5238 + t5239;
  t5294 = -1.*t1266*t5082;
  t5299 = t5294 + t5200;
  t5275 = -1.*t5082*t3652;
  t5276 = t5179 + t5275;
  t5285 = t440*t5276*t3889;
  t5300 = t5299*t3923;
  t5302 = t5285 + t5300;
  t5314 = t440*t5299;
  t5318 = -1.*t5276*t3889*t3923;
  t5320 = t5314 + t5318;
  t5310 = -1.*t848*t5302;
  t5333 = t3918*t5320;
  t5334 = t5310 + t5333;
  t5337 = t3918*t5302;
  t5339 = t848*t5320;
  t5351 = t5337 + t5339;
  t5414 = t3888*t1428*t1266*t1679;
  t5416 = -1.*t3888*t1679*t2692*t3652;
  t5424 = t5414 + t5416;
  t5385 = -1.*t1259*t1679*t2685;
  t5393 = t3888*t1266*t1679*t2692;
  t5398 = t3888*t1428*t1679*t3652;
  t5399 = t5393 + t5398;
  t5406 = t5399*t3889;
  t5411 = t5385 + t5406;
  t5413 = t440*t5411;
  t5427 = t5424*t3923;
  t5428 = t5413 + t5427;
  t5431 = t440*t5424;
  t5441 = -1.*t5411*t3923;
  t5445 = t5431 + t5441;
  t5430 = -1.*t848*t5428;
  t5446 = t3918*t5445;
  t5448 = t5430 + t5446;
  t5474 = t3918*t5428;
  t5476 = t848*t5445;
  t5477 = t5474 + t5476;
  t5517 = t3888*t1259*t1679;
  t5518 = t5114*t3889;
  t5521 = t5517 + t5518;
  t5525 = -1.*t440*t5521;
  t5526 = -1.*t5276*t3923;
  t5531 = t5525 + t5526;
  t5547 = t440*t5276;
  t5549 = -1.*t5521*t3923;
  t5553 = t5547 + t5549;
  t5532 = t848*t5531;
  t5563 = t3918*t5553;
  t5570 = t5532 + t5563;
  t5576 = t3918*t5531;
  t5581 = -1.*t848*t5553;
  t5582 = t5576 + t5581;
  t5640 = t440*t5521;
  t5648 = t5276*t3923;
  t5649 = t5640 + t5648;
  t5650 = -1.*t848*t5649;
  t5656 = t5650 + t5563;
  t5662 = -1.*t3918*t5649;
  t5669 = t5662 + t5581;
  t5661 = -1.*t303*t5656;
  t5692 = t3948*t5656;
  t5708 = t3918*t5649;
  t5718 = t848*t5553;
  t5721 = t5708 + t5718;
  t5736 = -1.*t303*t5721;
  t5737 = t5692 + t5736;
  t5738 = t28*t5737;
  t5059 = t303*t4977;
  t5061 = t3948*t5028;
  t5065 = t5059 + t5061;
  t5779 = t3888*t1266*t2692;
  t5783 = t3888*t1428*t3652;
  t5785 = t5779 + t5783;
  t5790 = t1259*t5785;
  t5791 = t2685*t3889;
  t5793 = t5790 + t5791;
  t5796 = -1.*t440*t848*t5793;
  t5798 = -1.*t3918*t5793*t3923;
  t5802 = t5796 + t5798;
  t5811 = t3918*t440*t5793;
  t5813 = -1.*t848*t5793*t3923;
  t5815 = t5811 + t5813;
  t5858 = -1.*t3888*t1266*t2692;
  t5861 = -1.*t3888*t1428*t3652;
  t5863 = t5858 + t5861;
  t5849 = t3888*t1428*t1266;
  t5850 = -1.*t3888*t2692*t3652;
  t5851 = t5849 + t5850;
  t5856 = t440*t5851*t3889;
  t5871 = t5863*t3923;
  t5872 = t5856 + t5871;
  t5883 = t440*t5863;
  t5885 = -1.*t5851*t3889*t3923;
  t5887 = t5883 + t5885;
  t5878 = -1.*t848*t5872;
  t5890 = t3918*t5887;
  t5892 = t5878 + t5890;
  t5897 = t3918*t5872;
  t5901 = t848*t5887;
  t5902 = t5897 + t5901;
  t5894 = t303*t5892;
  t5905 = t3948*t5902;
  t5906 = t5894 + t5905;
  t5907 = t28*t5906;
  t5909 = t3948*t5892;
  t5911 = -1.*t303*t5902;
  t5913 = t5909 + t5911;
  t5914 = -1.*t4003*t5913;
  t5915 = t5907 + t5914;
  t5919 = -1.*t1259*t2685;
  t5930 = t5785*t3889;
  t5932 = t5919 + t5930;
  t5934 = -1.*t440*t5932;
  t5936 = -1.*t5851*t3923;
  t5937 = t5934 + t5936;
  t5940 = t440*t5851;
  t5941 = -1.*t5932*t3923;
  t5945 = t5940 + t5941;
  t5938 = t848*t5937;
  t5946 = t3918*t5945;
  t5947 = t5938 + t5946;
  t5954 = t3918*t5937;
  t5958 = -1.*t848*t5945;
  t5960 = t5954 + t5958;
  t5990 = t440*t5932;
  t5992 = t5851*t3923;
  t5994 = t5990 + t5992;
  t5995 = -1.*t848*t5994;
  t5999 = t5995 + t5946;
  t6001 = -1.*t3918*t5994;
  t6002 = t6001 + t5958;
  t6000 = -1.*t303*t5999;
  t6010 = t3948*t5999;
  t6022 = t3918*t5994;
  t6023 = t848*t5945;
  t6024 = t6022 + t6023;
  t6031 = -1.*t303*t6024;
  t6032 = t6010 + t6031;
  t6036 = t28*t6032;
  t6112 = -1.*t1428*t1266*t2685;
  t6113 = t2685*t2692*t3652;
  t6122 = t6112 + t6113;
  t6086 = -1.*t3888*t1259;
  t6091 = -1.*t1266*t2685*t2692;
  t6096 = -1.*t1428*t2685*t3652;
  t6097 = t6091 + t6096;
  t6101 = t6097*t3889;
  t6104 = t6086 + t6101;
  t6105 = t440*t6104;
  t6128 = t6122*t3923;
  t6132 = t6105 + t6128;
  t6136 = t440*t6122;
  t6139 = -1.*t6104*t3923;
  t6140 = t6136 + t6139;
  t6135 = -1.*t848*t6132;
  t6145 = t3918*t6140;
  t6146 = t6135 + t6145;
  t6151 = t3918*t6132;
  t6152 = t848*t6140;
  t6153 = t6151 + t6152;
  t3940 = t303*t3933;
  t3996 = t3948*t3978;
  t3997 = t3940 + t3996;
  t4019 = t3948*t3933;
  t4029 = -1.*t303*t3978;
  t4033 = t4019 + t4029;
  t4168 = t303*t4164;
  t4197 = t3948*t4192;
  t4199 = t4168 + t4197;
  t4222 = t3948*t4164;
  t4236 = -1.*t303*t4192;
  t4240 = t4222 + t4236;
  t4321 = t303*t4320;
  t4356 = t3948*t4339;
  t4361 = t4321 + t4356;
  t4368 = t3948*t4320;
  t4381 = -1.*t303*t4339;
  t4389 = t4368 + t4381;
  t4545 = t303*t4539;
  t4564 = t3948*t4553;
  t4580 = t4545 + t4564;
  t4588 = t3948*t4539;
  t4596 = -1.*t303*t4553;
  t4597 = t4588 + t4596;
  t4784 = t303*t4778;
  t4788 = t3948*t4787;
  t4793 = t4784 + t4788;
  t4817 = t3948*t4778;
  t4821 = -1.*t303*t4787;
  t4824 = t4817 + t4821;
  t4920 = -1.*t303*t4919;
  t4937 = t3948*t4932;
  t4940 = t4920 + t4937;
  t4948 = t3948*t4919;
  t4953 = t303*t4932;
  t4961 = t4948 + t4953;
  t4982 = t3948*t4981;
  t4987 = t4979 + t4982;
  t4995 = t303*t4981;
  t5002 = t4992 + t4995;
  t5029 = -1.*t3948*t5028;
  t5030 = t4979 + t5029;
  t6252 = t4003*t5040;
  t5135 = t303*t5134;
  t5155 = t3948*t5151;
  t5157 = t5135 + t5155;
  t5168 = t3948*t5134;
  t5169 = -1.*t303*t5151;
  t5171 = t5168 + t5169;
  t5236 = t303*t5235;
  t5247 = t3948*t5241;
  t5250 = t5236 + t5247;
  t5254 = t3948*t5235;
  t5261 = -1.*t303*t5241;
  t5262 = t5254 + t5261;
  t5336 = t303*t5334;
  t5355 = t3948*t5351;
  t5359 = t5336 + t5355;
  t5366 = t3948*t5334;
  t5367 = -1.*t303*t5351;
  t5371 = t5366 + t5367;
  t5464 = t303*t5448;
  t5484 = t3948*t5477;
  t5485 = t5464 + t5484;
  t5494 = t3948*t5448;
  t5495 = -1.*t303*t5477;
  t5497 = t5494 + t5495;
  t5575 = -1.*t303*t5570;
  t5586 = t3948*t5582;
  t5596 = t5575 + t5586;
  t5614 = t3948*t5570;
  t5615 = t303*t5582;
  t5618 = t5614 + t5615;
  t5670 = t3948*t5669;
  t5674 = t5661 + t5670;
  t5693 = t303*t5669;
  t5695 = t5692 + t5693;
  t5724 = -1.*t3948*t5721;
  t5730 = t5661 + t5724;
  t5743 = t303*t5656;
  t5751 = t3948*t5721;
  t5754 = t5743 + t5751;
  t6325 = t4003*t5737;
  t5066 = t4003*t5065;
  t5068 = t5066 + t5045;
  t5805 = t303*t5802;
  t5821 = t3948*t5815;
  t5824 = t5805 + t5821;
  t5835 = t3948*t5802;
  t5836 = -1.*t303*t5815;
  t5838 = t5835 + t5836;
  t6361 = t4003*t5906;
  t6362 = t28*t5913;
  t6363 = t6361 + t6362;
  t5948 = -1.*t303*t5947;
  t5963 = t3948*t5960;
  t5965 = t5948 + t5963;
  t5973 = t3948*t5947;
  t5974 = t303*t5960;
  t5975 = t5973 + t5974;
  t6003 = t3948*t6002;
  t6005 = t6000 + t6003;
  t6012 = t303*t6002;
  t6017 = t6010 + t6012;
  t6027 = -1.*t3948*t6024;
  t6029 = t6000 + t6027;
  t6064 = t303*t5999;
  t6071 = t3948*t6024;
  t6074 = t6064 + t6071;
  t6397 = t4003*t6032;
  t6147 = t303*t6146;
  t6154 = t3948*t6153;
  t6155 = t6147 + t6154;
  t6161 = t3948*t6146;
  t6162 = -1.*t303*t6153;
  t6163 = t6161 + t6162;
  p_output1[0]=(t28*t4793 - 1.*t4003*t4824)*var2[3] + (t28*t4580 - 1.*t4003*t4597)*var2[4] + (t28*t4199 - 1.*t4003*t4240)*var2[5] + (t28*t4361 - 1.*t4003*t4389)*var2[6] + (t28*t3997 - 1.*t4003*t4033)*var2[7] + (-1.*t4003*t4940 + t28*t4961)*var2[8] + (-1.*t4003*t4987 + t28*t5002)*var2[9] + (-1.*t4003*t5030 + t5045)*var2[10] + t5068*var2[11];
  p_output1[1]=(-1.*t4003*t5040 + t28*t5065)*var2[3] + (t28*t5485 - 1.*t4003*t5497)*var2[4] + (t28*t5250 - 1.*t4003*t5262)*var2[5] + (t28*t5359 - 1.*t4003*t5371)*var2[6] + (t28*t5157 - 1.*t4003*t5171)*var2[7] + (-1.*t4003*t5596 + t28*t5618)*var2[8] + (-1.*t4003*t5674 + t28*t5695)*var2[9] + (-1.*t4003*t5730 + t5738)*var2[10] + (t5738 + t4003*t5754)*var2[11];
  p_output1[2]=(t28*t6155 - 1.*t4003*t6163)*var2[4] + t5915*var2[5] + t5915*var2[6] + (t28*t5824 - 1.*t4003*t5838)*var2[7] + (-1.*t4003*t5965 + t28*t5975)*var2[8] + (-1.*t4003*t6005 + t28*t6017)*var2[9] + (-1.*t4003*t6029 + t6036)*var2[10] + (t6036 + t4003*t6074)*var2[11];
  p_output1[3]=(t4003*t4793 + t28*t4824)*var2[3] + (t4003*t4580 + t28*t4597)*var2[4] + (t4003*t4199 + t28*t4240)*var2[5] + (t4003*t4361 + t28*t4389)*var2[6] + (t3997*t4003 + t28*t4033)*var2[7] + (t28*t4940 + t4003*t4961)*var2[8] + (t28*t4987 + t4003*t5002)*var2[9] + (t28*t5030 + t6252)*var2[10] + (-1.*t28*t5065 + t6252)*var2[11];
  p_output1[4]=t5068*var2[3] + (t4003*t5485 + t28*t5497)*var2[4] + (t4003*t5250 + t28*t5262)*var2[5] + (t4003*t5359 + t28*t5371)*var2[6] + (t4003*t5157 + t28*t5171)*var2[7] + (t28*t5596 + t4003*t5618)*var2[8] + (t28*t5674 + t4003*t5695)*var2[9] + (t28*t5730 + t6325)*var2[10] + (-1.*t28*t5754 + t6325)*var2[11];
  p_output1[5]=(t4003*t6155 + t28*t6163)*var2[4] + t6363*var2[5] + t6363*var2[6] + (t4003*t5824 + t28*t5838)*var2[7] + (t28*t5965 + t4003*t5975)*var2[8] + (t28*t6005 + t4003*t6017)*var2[9] + (t28*t6029 + t6397)*var2[10] + (-1.*t28*t6074 + t6397)*var2[11];
  p_output1[6]=(-1.*t1259*t4694 + t5121)*var2[3] + (-1.*t2412*t2685*t3889 - 1.*t1259*t4431)*var2[4] - 1.*t1259*t4080*var2[5] - 1.*t1259*t4281*var2[6] + t4880*var2[7];
  p_output1[7]=(-1.*t1259*t3875 + t2412*t3888*t3889)*var2[3] + (-1.*t1679*t2685*t3889 - 1.*t1259*t5399)*var2[4] - 1.*t1259*t5189*var2[5] - 1.*t1259*t5276*var2[6] + t5521*var2[7];
  p_output1[8]=(-1.*t3888*t3889 - 1.*t1259*t6097)*var2[4] - 1.*t1259*t5851*var2[5] - 1.*t1259*t5851*var2[6] + t5932*var2[7];
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

#include "dR_LeftAnkleJoint_mex.hh"

namespace SymExpression
{

void dR_LeftAnkleJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
