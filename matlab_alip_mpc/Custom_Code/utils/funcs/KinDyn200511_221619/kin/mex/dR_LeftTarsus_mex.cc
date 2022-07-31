/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:23 GMT-04:00
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
  double t3529;
  double t3493;
  double t3682;
  double t3501;
  double t3747;
  double t3194;
  double t3285;
  double t3528;
  double t3808;
  double t3810;
  double t3915;
  double t3985;
  double t4018;
  double t4032;
  double t4055;
  double t4073;
  double t4085;
  double t4087;
  double t4089;
  double t4094;
  double t4112;
  double t4117;
  double t4124;
  double t1911;
  double t2449;
  double t4148;
  double t4162;
  double t4118;
  double t4151;
  double t4154;
  double t1110;
  double t4174;
  double t4181;
  double t4185;
  double t441;
  double t4284;
  double t4288;
  double t4289;
  double t4300;
  double t4302;
  double t4303;
  double t4271;
  double t4291;
  double t4295;
  double t4298;
  double t4304;
  double t4310;
  double t4315;
  double t4317;
  double t4321;
  double t4203;
  double t4313;
  double t4325;
  double t4332;
  double t4351;
  double t4359;
  double t4367;
  double t4467;
  double t4475;
  double t4445;
  double t4447;
  double t4455;
  double t4476;
  double t4485;
  double t4494;
  double t4500;
  double t4501;
  double t4488;
  double t4502;
  double t4506;
  double t4510;
  double t4523;
  double t4527;
  double t4615;
  double t4617;
  double t4620;
  double t4597;
  double t4601;
  double t4606;
  double t4607;
  double t4611;
  double t4612;
  double t4613;
  double t4621;
  double t4627;
  double t4633;
  double t4637;
  double t4647;
  double t4631;
  double t4651;
  double t4653;
  double t4669;
  double t4670;
  double t4671;
  double t4764;
  double t4771;
  double t4772;
  double t4737;
  double t4740;
  double t4742;
  double t4791;
  double t4808;
  double t4809;
  double t4731;
  double t4760;
  double t4773;
  double t4777;
  double t4784;
  double t4785;
  double t4787;
  double t4812;
  double t4816;
  double t4830;
  double t4832;
  double t4842;
  double t4818;
  double t4843;
  double t4844;
  double t4850;
  double t4854;
  double t4855;
  double t4885;
  double t4888;
  double t4889;
  double t4891;
  double t4895;
  double t4898;
  double t4901;
  double t4902;
  double t4906;
  double t4899;
  double t4907;
  double t4910;
  double t4912;
  double t4917;
  double t4918;
  double t4967;
  double t4979;
  double t4983;
  double t4984;
  double t4985;
  double t4992;
  double t4993;
  double t4990;
  double t4997;
  double t5014;
  double t5017;
  double t5018;
  double t5039;
  double t5041;
  double t5046;
  double t5076;
  double t5081;
  double t5082;
  double t5083;
  double t5084;
  double t5090;
  double t5091;
  double t5092;
  double t5095;
  double t5097;
  double t5098;
  double t5103;
  double t5118;
  double t5120;
  double t5125;
  double t5131;
  double t5137;
  double t5138;
  double t5199;
  double t5202;
  double t5184;
  double t5193;
  double t5197;
  double t5198;
  double t5205;
  double t5206;
  double t5209;
  double t5210;
  double t5211;
  double t5208;
  double t5213;
  double t5214;
  double t5223;
  double t5224;
  double t5225;
  double t5270;
  double t5273;
  double t5259;
  double t5261;
  double t5266;
  double t5275;
  double t5276;
  double t5289;
  double t5290;
  double t5291;
  double t5278;
  double t5294;
  double t5297;
  double t5303;
  double t5304;
  double t5305;
  double t5365;
  double t5371;
  double t5372;
  double t5335;
  double t5346;
  double t5352;
  double t5356;
  double t5362;
  double t5363;
  double t5364;
  double t5377;
  double t5378;
  double t5380;
  double t5383;
  double t5385;
  double t5379;
  double t5386;
  double t5391;
  double t5404;
  double t5406;
  double t5410;
  double t5434;
  double t5436;
  double t5448;
  double t5458;
  double t5461;
  double t5464;
  double t5475;
  double t5479;
  double t5490;
  double t5468;
  double t5491;
  double t5493;
  double t5499;
  double t5504;
  double t5505;
  double t5528;
  double t5532;
  double t5533;
  double t5537;
  double t5544;
  double t5547;
  double t5548;
  double t5546;
  double t5558;
  double t5575;
  double t5576;
  double t5578;
  double t5591;
  double t5592;
  double t5594;
  double t5050;
  double t5052;
  double t5054;
  double t5631;
  double t5632;
  double t5638;
  double t5639;
  double t5641;
  double t5642;
  double t5646;
  double t5648;
  double t5654;
  double t5656;
  double t5657;
  double t5660;
  double t5691;
  double t5692;
  double t5699;
  double t5686;
  double t5687;
  double t5689;
  double t5690;
  double t5700;
  double t5701;
  double t5703;
  double t5706;
  double t5708;
  double t5702;
  double t5710;
  double t5712;
  double t5715;
  double t5716;
  double t5718;
  double t5714;
  double t5724;
  double t5725;
  double t5727;
  double t5730;
  double t5733;
  double t5734;
  double t5735;
  double t5737;
  double t5748;
  double t5751;
  double t5752;
  double t5754;
  double t5757;
  double t5760;
  double t5764;
  double t5765;
  double t5767;
  double t5763;
  double t5775;
  double t5776;
  double t5790;
  double t5793;
  double t5797;
  double t5823;
  double t5824;
  double t5825;
  double t5826;
  double t5827;
  double t5834;
  double t5837;
  double t5831;
  double t5854;
  double t5870;
  double t5873;
  double t5874;
  double t5882;
  double t5884;
  double t5886;
  double t5934;
  double t5937;
  double t5939;
  double t5903;
  double t5909;
  double t5912;
  double t5916;
  double t5918;
  double t5923;
  double t5931;
  double t5942;
  double t5948;
  double t5950;
  double t5957;
  double t5958;
  double t5949;
  double t5965;
  double t5969;
  double t5978;
  double t5980;
  double t5982;
  double t4159;
  double t4187;
  double t4189;
  double t4208;
  double t4239;
  double t4243;
  double t4350;
  double t4397;
  double t4413;
  double t4433;
  double t4435;
  double t4439;
  double t4509;
  double t4532;
  double t4533;
  double t4553;
  double t4555;
  double t4571;
  double t4661;
  double t4680;
  double t4681;
  double t4694;
  double t4695;
  double t4709;
  double t4849;
  double t4859;
  double t4861;
  double t4864;
  double t4865;
  double t4866;
  double t4911;
  double t4923;
  double t4931;
  double t4936;
  double t4947;
  double t4953;
  double t4994;
  double t4995;
  double t5002;
  double t5003;
  double t5021;
  double t5026;
  double t6104;
  double t5130;
  double t5145;
  double t5150;
  double t5154;
  double t5165;
  double t5172;
  double t5216;
  double t5228;
  double t5229;
  double t5232;
  double t5237;
  double t5241;
  double t5299;
  double t5307;
  double t5314;
  double t5324;
  double t5325;
  double t5326;
  double t5399;
  double t5415;
  double t5416;
  double t5418;
  double t5421;
  double t5425;
  double t5498;
  double t5509;
  double t5513;
  double t5515;
  double t5519;
  double t5521;
  double t5549;
  double t5553;
  double t5559;
  double t5565;
  double t5579;
  double t5581;
  double t5604;
  double t5605;
  double t5607;
  double t6230;
  double t5062;
  double t5063;
  double t5655;
  double t5662;
  double t5665;
  double t5669;
  double t5673;
  double t5674;
  double t6254;
  double t6256;
  double t6257;
  double t5780;
  double t5798;
  double t5799;
  double t5804;
  double t5805;
  double t5811;
  double t5843;
  double t5850;
  double t5856;
  double t5858;
  double t5876;
  double t5877;
  double t5893;
  double t5895;
  double t5897;
  double t6285;
  double t5974;
  double t5985;
  double t5986;
  double t5992;
  double t5996;
  double t5999;
  t3529 = Cos(var1[3]);
  t3493 = Cos(var1[5]);
  t3682 = Sin(var1[4]);
  t3501 = Sin(var1[3]);
  t3747 = Sin(var1[5]);
  t3194 = Cos(var1[7]);
  t3285 = Cos(var1[6]);
  t3528 = -1.*t3493*t3501;
  t3808 = t3529*t3682*t3747;
  t3810 = t3528 + t3808;
  t3915 = t3285*t3810;
  t3985 = t3529*t3493*t3682;
  t4018 = t3501*t3747;
  t4032 = t3985 + t4018;
  t4055 = Sin(var1[6]);
  t4073 = t4032*t4055;
  t4085 = t3915 + t4073;
  t4087 = t3194*t4085;
  t4089 = Cos(var1[4]);
  t4094 = Sin(var1[7]);
  t4112 = -1.*t3529*t4089*t4094;
  t4117 = t4087 + t4112;
  t4124 = Cos(var1[9]);
  t1911 = Cos(var1[8]);
  t2449 = Sin(var1[9]);
  t4148 = Sin(var1[8]);
  t4162 = Cos(var1[10]);
  t4118 = -1.*t1911*t2449*t4117;
  t4151 = -1.*t4124*t4117*t4148;
  t4154 = t4118 + t4151;
  t1110 = Sin(var1[10]);
  t4174 = t4124*t1911*t4117;
  t4181 = -1.*t2449*t4117*t4148;
  t4185 = t4174 + t4181;
  t441 = Sin(var1[11]);
  t4284 = t3493*t3501;
  t4288 = -1.*t3529*t3682*t3747;
  t4289 = t4284 + t4288;
  t4300 = t3285*t4289;
  t4302 = -1.*t4032*t4055;
  t4303 = t4300 + t4302;
  t4271 = t3285*t4032;
  t4291 = t4289*t4055;
  t4295 = t4271 + t4291;
  t4298 = t1911*t4295*t4094;
  t4304 = t4303*t4148;
  t4310 = t4298 + t4304;
  t4315 = t1911*t4303;
  t4317 = -1.*t4295*t4094*t4148;
  t4321 = t4315 + t4317;
  t4203 = Cos(var1[11]);
  t4313 = -1.*t2449*t4310;
  t4325 = t4124*t4321;
  t4332 = t4313 + t4325;
  t4351 = t4124*t4310;
  t4359 = t2449*t4321;
  t4367 = t4351 + t4359;
  t4467 = -1.*t3285*t3810;
  t4475 = t4467 + t4302;
  t4445 = -1.*t3810*t4055;
  t4447 = t4271 + t4445;
  t4455 = t1911*t4447*t4094;
  t4476 = t4475*t4148;
  t4485 = t4455 + t4476;
  t4494 = t1911*t4475;
  t4500 = -1.*t4447*t4094*t4148;
  t4501 = t4494 + t4500;
  t4488 = -1.*t2449*t4485;
  t4502 = t4124*t4501;
  t4506 = t4488 + t4502;
  t4510 = t4124*t4485;
  t4523 = t2449*t4501;
  t4527 = t4510 + t4523;
  t4615 = t3529*t4089*t3493*t3285;
  t4617 = -1.*t3529*t4089*t3747*t4055;
  t4620 = t4615 + t4617;
  t4597 = -1.*t3529*t3194*t3682;
  t4601 = t3529*t4089*t3285*t3747;
  t4606 = t3529*t4089*t3493*t4055;
  t4607 = t4601 + t4606;
  t4611 = t4607*t4094;
  t4612 = t4597 + t4611;
  t4613 = t1911*t4612;
  t4621 = t4620*t4148;
  t4627 = t4613 + t4621;
  t4633 = t1911*t4620;
  t4637 = -1.*t4612*t4148;
  t4647 = t4633 + t4637;
  t4631 = -1.*t2449*t4627;
  t4651 = t4124*t4647;
  t4653 = t4631 + t4651;
  t4669 = t4124*t4627;
  t4670 = t2449*t4647;
  t4671 = t4669 + t4670;
  t4764 = -1.*t3493*t3501*t3682;
  t4771 = t3529*t3747;
  t4772 = t4764 + t4771;
  t4737 = -1.*t3529*t3493;
  t4740 = -1.*t3501*t3682*t3747;
  t4742 = t4737 + t4740;
  t4791 = t3285*t4772;
  t4808 = -1.*t4742*t4055;
  t4809 = t4791 + t4808;
  t4731 = -1.*t4089*t3194*t3501;
  t4760 = t3285*t4742;
  t4773 = t4772*t4055;
  t4777 = t4760 + t4773;
  t4784 = t4777*t4094;
  t4785 = t4731 + t4784;
  t4787 = t1911*t4785;
  t4812 = t4809*t4148;
  t4816 = t4787 + t4812;
  t4830 = t1911*t4809;
  t4832 = -1.*t4785*t4148;
  t4842 = t4830 + t4832;
  t4818 = -1.*t2449*t4816;
  t4843 = t4124*t4842;
  t4844 = t4818 + t4843;
  t4850 = t4124*t4816;
  t4854 = t2449*t4842;
  t4855 = t4850 + t4854;
  t4885 = t3529*t4089*t3194;
  t4888 = t4085*t4094;
  t4889 = t4885 + t4888;
  t4891 = -1.*t1911*t4889;
  t4895 = -1.*t4447*t4148;
  t4898 = t4891 + t4895;
  t4901 = t1911*t4447;
  t4902 = -1.*t4889*t4148;
  t4906 = t4901 + t4902;
  t4899 = t2449*t4898;
  t4907 = t4124*t4906;
  t4910 = t4899 + t4907;
  t4912 = t4124*t4898;
  t4917 = -1.*t2449*t4906;
  t4918 = t4912 + t4917;
  t4967 = t1911*t4889;
  t4979 = t4447*t4148;
  t4983 = t4967 + t4979;
  t4984 = -1.*t2449*t4983;
  t4985 = t4984 + t4907;
  t4992 = -1.*t4124*t4983;
  t4993 = t4992 + t4917;
  t4990 = -1.*t1110*t4985;
  t4997 = t4162*t4985;
  t5014 = t4124*t4983;
  t5017 = t2449*t4906;
  t5018 = t5014 + t5017;
  t5039 = -1.*t1110*t5018;
  t5041 = t4997 + t5039;
  t5046 = t441*t5041;
  t5076 = t3529*t3493;
  t5081 = t3501*t3682*t3747;
  t5082 = t5076 + t5081;
  t5083 = t3285*t5082;
  t5084 = t3493*t3501*t3682;
  t5090 = -1.*t3529*t3747;
  t5091 = t5084 + t5090;
  t5092 = t5091*t4055;
  t5095 = t5083 + t5092;
  t5097 = t3194*t5095;
  t5098 = -1.*t4089*t3501*t4094;
  t5103 = t5097 + t5098;
  t5118 = -1.*t1911*t2449*t5103;
  t5120 = -1.*t4124*t5103*t4148;
  t5125 = t5118 + t5120;
  t5131 = t4124*t1911*t5103;
  t5137 = -1.*t2449*t5103*t4148;
  t5138 = t5131 + t5137;
  t5199 = -1.*t5091*t4055;
  t5202 = t4760 + t5199;
  t5184 = t3285*t5091;
  t5193 = t4742*t4055;
  t5197 = t5184 + t5193;
  t5198 = t1911*t5197*t4094;
  t5205 = t5202*t4148;
  t5206 = t5198 + t5205;
  t5209 = t1911*t5202;
  t5210 = -1.*t5197*t4094*t4148;
  t5211 = t5209 + t5210;
  t5208 = -1.*t2449*t5206;
  t5213 = t4124*t5211;
  t5214 = t5208 + t5213;
  t5223 = t4124*t5206;
  t5224 = t2449*t5211;
  t5225 = t5223 + t5224;
  t5270 = -1.*t3285*t5082;
  t5273 = t5270 + t5199;
  t5259 = -1.*t5082*t4055;
  t5261 = t5184 + t5259;
  t5266 = t1911*t5261*t4094;
  t5275 = t5273*t4148;
  t5276 = t5266 + t5275;
  t5289 = t1911*t5273;
  t5290 = -1.*t5261*t4094*t4148;
  t5291 = t5289 + t5290;
  t5278 = -1.*t2449*t5276;
  t5294 = t4124*t5291;
  t5297 = t5278 + t5294;
  t5303 = t4124*t5276;
  t5304 = t2449*t5291;
  t5305 = t5303 + t5304;
  t5365 = t4089*t3493*t3285*t3501;
  t5371 = -1.*t4089*t3501*t3747*t4055;
  t5372 = t5365 + t5371;
  t5335 = -1.*t3194*t3501*t3682;
  t5346 = t4089*t3285*t3501*t3747;
  t5352 = t4089*t3493*t3501*t4055;
  t5356 = t5346 + t5352;
  t5362 = t5356*t4094;
  t5363 = t5335 + t5362;
  t5364 = t1911*t5363;
  t5377 = t5372*t4148;
  t5378 = t5364 + t5377;
  t5380 = t1911*t5372;
  t5383 = -1.*t5363*t4148;
  t5385 = t5380 + t5383;
  t5379 = -1.*t2449*t5378;
  t5386 = t4124*t5385;
  t5391 = t5379 + t5386;
  t5404 = t4124*t5378;
  t5406 = t2449*t5385;
  t5410 = t5404 + t5406;
  t5434 = t4089*t3194*t3501;
  t5436 = t5095*t4094;
  t5448 = t5434 + t5436;
  t5458 = -1.*t1911*t5448;
  t5461 = -1.*t5261*t4148;
  t5464 = t5458 + t5461;
  t5475 = t1911*t5261;
  t5479 = -1.*t5448*t4148;
  t5490 = t5475 + t5479;
  t5468 = t2449*t5464;
  t5491 = t4124*t5490;
  t5493 = t5468 + t5491;
  t5499 = t4124*t5464;
  t5504 = -1.*t2449*t5490;
  t5505 = t5499 + t5504;
  t5528 = t1911*t5448;
  t5532 = t5261*t4148;
  t5533 = t5528 + t5532;
  t5537 = -1.*t2449*t5533;
  t5544 = t5537 + t5491;
  t5547 = -1.*t4124*t5533;
  t5548 = t5547 + t5504;
  t5546 = -1.*t1110*t5544;
  t5558 = t4162*t5544;
  t5575 = t4124*t5533;
  t5576 = t2449*t5490;
  t5578 = t5575 + t5576;
  t5591 = -1.*t1110*t5578;
  t5592 = t5558 + t5591;
  t5594 = t441*t5592;
  t5050 = t1110*t4985;
  t5052 = t4162*t5018;
  t5054 = t5050 + t5052;
  t5631 = t4089*t3285*t3747;
  t5632 = t4089*t3493*t4055;
  t5638 = t5631 + t5632;
  t5639 = t3194*t5638;
  t5641 = t3682*t4094;
  t5642 = t5639 + t5641;
  t5646 = -1.*t1911*t2449*t5642;
  t5648 = -1.*t4124*t5642*t4148;
  t5654 = t5646 + t5648;
  t5656 = t4124*t1911*t5642;
  t5657 = -1.*t2449*t5642*t4148;
  t5660 = t5656 + t5657;
  t5691 = -1.*t4089*t3285*t3747;
  t5692 = -1.*t4089*t3493*t4055;
  t5699 = t5691 + t5692;
  t5686 = t4089*t3493*t3285;
  t5687 = -1.*t4089*t3747*t4055;
  t5689 = t5686 + t5687;
  t5690 = t1911*t5689*t4094;
  t5700 = t5699*t4148;
  t5701 = t5690 + t5700;
  t5703 = t1911*t5699;
  t5706 = -1.*t5689*t4094*t4148;
  t5708 = t5703 + t5706;
  t5702 = -1.*t2449*t5701;
  t5710 = t4124*t5708;
  t5712 = t5702 + t5710;
  t5715 = t4124*t5701;
  t5716 = t2449*t5708;
  t5718 = t5715 + t5716;
  t5714 = t1110*t5712;
  t5724 = t4162*t5718;
  t5725 = t5714 + t5724;
  t5727 = t441*t5725;
  t5730 = t4162*t5712;
  t5733 = -1.*t1110*t5718;
  t5734 = t5730 + t5733;
  t5735 = -1.*t4203*t5734;
  t5737 = t5727 + t5735;
  t5748 = -1.*t3194*t3682;
  t5751 = t5638*t4094;
  t5752 = t5748 + t5751;
  t5754 = -1.*t1911*t5752;
  t5757 = -1.*t5689*t4148;
  t5760 = t5754 + t5757;
  t5764 = t1911*t5689;
  t5765 = -1.*t5752*t4148;
  t5767 = t5764 + t5765;
  t5763 = t2449*t5760;
  t5775 = t4124*t5767;
  t5776 = t5763 + t5775;
  t5790 = t4124*t5760;
  t5793 = -1.*t2449*t5767;
  t5797 = t5790 + t5793;
  t5823 = t1911*t5752;
  t5824 = t5689*t4148;
  t5825 = t5823 + t5824;
  t5826 = -1.*t2449*t5825;
  t5827 = t5826 + t5775;
  t5834 = -1.*t4124*t5825;
  t5837 = t5834 + t5793;
  t5831 = -1.*t1110*t5827;
  t5854 = t4162*t5827;
  t5870 = t4124*t5825;
  t5873 = t2449*t5767;
  t5874 = t5870 + t5873;
  t5882 = -1.*t1110*t5874;
  t5884 = t5854 + t5882;
  t5886 = t441*t5884;
  t5934 = -1.*t3493*t3285*t3682;
  t5937 = t3682*t3747*t4055;
  t5939 = t5934 + t5937;
  t5903 = -1.*t4089*t3194;
  t5909 = -1.*t3285*t3682*t3747;
  t5912 = -1.*t3493*t3682*t4055;
  t5916 = t5909 + t5912;
  t5918 = t5916*t4094;
  t5923 = t5903 + t5918;
  t5931 = t1911*t5923;
  t5942 = t5939*t4148;
  t5948 = t5931 + t5942;
  t5950 = t1911*t5939;
  t5957 = -1.*t5923*t4148;
  t5958 = t5950 + t5957;
  t5949 = -1.*t2449*t5948;
  t5965 = t4124*t5958;
  t5969 = t5949 + t5965;
  t5978 = t4124*t5948;
  t5980 = t2449*t5958;
  t5982 = t5978 + t5980;
  t4159 = t1110*t4154;
  t4187 = t4162*t4185;
  t4189 = t4159 + t4187;
  t4208 = t4162*t4154;
  t4239 = -1.*t1110*t4185;
  t4243 = t4208 + t4239;
  t4350 = t1110*t4332;
  t4397 = t4162*t4367;
  t4413 = t4350 + t4397;
  t4433 = t4162*t4332;
  t4435 = -1.*t1110*t4367;
  t4439 = t4433 + t4435;
  t4509 = t1110*t4506;
  t4532 = t4162*t4527;
  t4533 = t4509 + t4532;
  t4553 = t4162*t4506;
  t4555 = -1.*t1110*t4527;
  t4571 = t4553 + t4555;
  t4661 = t1110*t4653;
  t4680 = t4162*t4671;
  t4681 = t4661 + t4680;
  t4694 = t4162*t4653;
  t4695 = -1.*t1110*t4671;
  t4709 = t4694 + t4695;
  t4849 = t1110*t4844;
  t4859 = t4162*t4855;
  t4861 = t4849 + t4859;
  t4864 = t4162*t4844;
  t4865 = -1.*t1110*t4855;
  t4866 = t4864 + t4865;
  t4911 = -1.*t1110*t4910;
  t4923 = t4162*t4918;
  t4931 = t4911 + t4923;
  t4936 = t4162*t4910;
  t4947 = t1110*t4918;
  t4953 = t4936 + t4947;
  t4994 = t4162*t4993;
  t4995 = t4990 + t4994;
  t5002 = t1110*t4993;
  t5003 = t4997 + t5002;
  t5021 = -1.*t4162*t5018;
  t5026 = t4990 + t5021;
  t6104 = t4203*t5041;
  t5130 = t1110*t5125;
  t5145 = t4162*t5138;
  t5150 = t5130 + t5145;
  t5154 = t4162*t5125;
  t5165 = -1.*t1110*t5138;
  t5172 = t5154 + t5165;
  t5216 = t1110*t5214;
  t5228 = t4162*t5225;
  t5229 = t5216 + t5228;
  t5232 = t4162*t5214;
  t5237 = -1.*t1110*t5225;
  t5241 = t5232 + t5237;
  t5299 = t1110*t5297;
  t5307 = t4162*t5305;
  t5314 = t5299 + t5307;
  t5324 = t4162*t5297;
  t5325 = -1.*t1110*t5305;
  t5326 = t5324 + t5325;
  t5399 = t1110*t5391;
  t5415 = t4162*t5410;
  t5416 = t5399 + t5415;
  t5418 = t4162*t5391;
  t5421 = -1.*t1110*t5410;
  t5425 = t5418 + t5421;
  t5498 = -1.*t1110*t5493;
  t5509 = t4162*t5505;
  t5513 = t5498 + t5509;
  t5515 = t4162*t5493;
  t5519 = t1110*t5505;
  t5521 = t5515 + t5519;
  t5549 = t4162*t5548;
  t5553 = t5546 + t5549;
  t5559 = t1110*t5548;
  t5565 = t5558 + t5559;
  t5579 = -1.*t4162*t5578;
  t5581 = t5546 + t5579;
  t5604 = t1110*t5544;
  t5605 = t4162*t5578;
  t5607 = t5604 + t5605;
  t6230 = t4203*t5592;
  t5062 = t4203*t5054;
  t5063 = t5062 + t5046;
  t5655 = t1110*t5654;
  t5662 = t4162*t5660;
  t5665 = t5655 + t5662;
  t5669 = t4162*t5654;
  t5673 = -1.*t1110*t5660;
  t5674 = t5669 + t5673;
  t6254 = t4203*t5725;
  t6256 = t441*t5734;
  t6257 = t6254 + t6256;
  t5780 = -1.*t1110*t5776;
  t5798 = t4162*t5797;
  t5799 = t5780 + t5798;
  t5804 = t4162*t5776;
  t5805 = t1110*t5797;
  t5811 = t5804 + t5805;
  t5843 = t4162*t5837;
  t5850 = t5831 + t5843;
  t5856 = t1110*t5837;
  t5858 = t5854 + t5856;
  t5876 = -1.*t4162*t5874;
  t5877 = t5831 + t5876;
  t5893 = t1110*t5827;
  t5895 = t4162*t5874;
  t5897 = t5893 + t5895;
  t6285 = t4203*t5884;
  t5974 = t1110*t5969;
  t5985 = t4162*t5982;
  t5986 = t5974 + t5985;
  t5992 = t4162*t5969;
  t5996 = -1.*t1110*t5982;
  t5999 = t5992 + t5996;
  p_output1[0]=(t441*t4861 - 1.*t4203*t4866)*var2[3] + (t441*t4681 - 1.*t4203*t4709)*var2[4] + (t441*t4413 - 1.*t4203*t4439)*var2[5] + (t441*t4533 - 1.*t4203*t4571)*var2[6] + (-1.*t4203*t4243 + t4189*t441)*var2[7] + (-1.*t4203*t4931 + t441*t4953)*var2[8] + (-1.*t4203*t4995 + t441*t5003)*var2[9] + (-1.*t4203*t5026 + t5046)*var2[10] + t5063*var2[11];
  p_output1[1]=(-1.*t4203*t5041 + t441*t5054)*var2[3] + (t441*t5416 - 1.*t4203*t5425)*var2[4] + (t441*t5229 - 1.*t4203*t5241)*var2[5] + (t441*t5314 - 1.*t4203*t5326)*var2[6] + (t441*t5150 - 1.*t4203*t5172)*var2[7] + (-1.*t4203*t5513 + t441*t5521)*var2[8] + (-1.*t4203*t5553 + t441*t5565)*var2[9] + (-1.*t4203*t5581 + t5594)*var2[10] + (t5594 + t4203*t5607)*var2[11];
  p_output1[2]=(t441*t5986 - 1.*t4203*t5999)*var2[4] + t5737*var2[5] + t5737*var2[6] + (t441*t5665 - 1.*t4203*t5674)*var2[7] + (-1.*t4203*t5799 + t441*t5811)*var2[8] + (-1.*t4203*t5850 + t441*t5858)*var2[9] + (-1.*t4203*t5877 + t5886)*var2[10] + (t5886 + t4203*t5897)*var2[11];
  p_output1[3]=(t4203*t4861 + t441*t4866)*var2[3] + (t4203*t4681 + t441*t4709)*var2[4] + (t4203*t4413 + t441*t4439)*var2[5] + (t4203*t4533 + t441*t4571)*var2[6] + (t4189*t4203 + t4243*t441)*var2[7] + (t441*t4931 + t4203*t4953)*var2[8] + (t441*t4995 + t4203*t5003)*var2[9] + (t441*t5026 + t6104)*var2[10] + (-1.*t441*t5054 + t6104)*var2[11];
  p_output1[4]=t5063*var2[3] + (t4203*t5416 + t441*t5425)*var2[4] + (t4203*t5229 + t441*t5241)*var2[5] + (t4203*t5314 + t441*t5326)*var2[6] + (t4203*t5150 + t441*t5172)*var2[7] + (t441*t5513 + t4203*t5521)*var2[8] + (t441*t5553 + t4203*t5565)*var2[9] + (t441*t5581 + t6230)*var2[10] + (-1.*t441*t5607 + t6230)*var2[11];
  p_output1[5]=(t4203*t5986 + t441*t5999)*var2[4] + t6257*var2[5] + t6257*var2[6] + (t4203*t5665 + t441*t5674)*var2[7] + (t441*t5799 + t4203*t5811)*var2[8] + (t441*t5850 + t4203*t5858)*var2[9] + (t441*t5877 + t6285)*var2[10] + (-1.*t441*t5897 + t6285)*var2[11];
  p_output1[6]=(-1.*t3194*t4777 + t5098)*var2[3] + (-1.*t3529*t3682*t4094 - 1.*t3194*t4607)*var2[4] - 1.*t3194*t4295*var2[5] - 1.*t3194*t4447*var2[6] + t4889*var2[7];
  p_output1[7]=(-1.*t3194*t4085 + t3529*t4089*t4094)*var2[3] + (-1.*t3501*t3682*t4094 - 1.*t3194*t5356)*var2[4] - 1.*t3194*t5197*var2[5] - 1.*t3194*t5261*var2[6] + t5448*var2[7];
  p_output1[8]=(-1.*t4089*t4094 - 1.*t3194*t5916)*var2[4] - 1.*t3194*t5689*var2[5] - 1.*t3194*t5689*var2[6] + t5752*var2[7];
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

#include "dR_LeftTarsus_mex.hh"

namespace SymExpression
{

void dR_LeftTarsus_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
