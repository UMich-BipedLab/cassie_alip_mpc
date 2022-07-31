/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:41 GMT-04:00
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
  double t1373;
  double t146;
  double t234;
  double t1008;
  double t1545;
  double t3249;
  double t3272;
  double t3962;
  double t4007;
  double t4021;
  double t1298;
  double t2034;
  double t3163;
  double t4090;
  double t4100;
  double t4109;
  double t4089;
  double t4131;
  double t4158;
  double t4160;
  double t3293;
  double t4152;
  double t4153;
  double t4156;
  double t4073;
  double t4198;
  double t4200;
  double t4117;
  double t4119;
  double t4122;
  double t4134;
  double t4136;
  double t4164;
  double t4169;
  double t4170;
  double t4212;
  double t4180;
  double t4181;
  double t4232;
  double t4236;
  double t4239;
  double t4249;
  double t4296;
  double t4297;
  double t4304;
  double t4360;
  double t4361;
  double t4367;
  double t4376;
  double t4377;
  double t4381;
  double t4246;
  double t4250;
  double t4407;
  double t4420;
  double t4425;
  double t4477;
  double t4481;
  double t4482;
  double t4494;
  double t4495;
  double t4499;
  double t3250;
  double t3502;
  double t4051;
  double t4052;
  double t4059;
  double t4516;
  double t4517;
  double t4518;
  double t4488;
  double t4527;
  double t4530;
  double t4552;
  double t4553;
  double t4557;
  double t4317;
  double t4325;
  double t4327;
  double t4280;
  double t4281;
  double t4294;
  double t4305;
  double t4308;
  double t4611;
  double t4614;
  double t4617;
  double t4451;
  double t4545;
  double t4546;
  double t4549;
  double t4647;
  double t4648;
  double t4649;
  double t4650;
  double t4651;
  double t4652;
  double t4653;
  double t4562;
  double t4565;
  double t4568;
  double t4213;
  double t4214;
  double t4219;
  double t4220;
  double t4221;
  double t4230;
  double t4241;
  double t4251;
  double t4252;
  double t4254;
  double t4255;
  double t4256;
  double t4258;
  double t4263;
  double t4264;
  double t4265;
  double t4266;
  double t4438;
  double t4682;
  double t4684;
  double t4687;
  double t4446;
  double t4709;
  double t4712;
  double t4713;
  double t4708;
  double t4715;
  double t4717;
  double t4719;
  double t4539;
  double t4543;
  double t4551;
  double t4559;
  double t4561;
  double t4570;
  double t4571;
  double t4572;
  double t4573;
  double t4574;
  double t4575;
  double t4744;
  double t4746;
  double t4747;
  double t4593;
  double t4782;
  double t4784;
  double t4787;
  double t4600;
  double t4819;
  double t4822;
  double t4823;
  double t4808;
  double t4813;
  double t4814;
  double t4815;
  double t4828;
  double t4832;
  double t4833;
  double t4856;
  double t4857;
  double t4860;
  double t4881;
  double t4882;
  double t4887;
  double t4641;
  double t4644;
  double t4654;
  double t4373;
  double t4386;
  double t4387;
  double t4388;
  double t4401;
  double t4403;
  double t4430;
  double t4490;
  double t4177;
  double t4183;
  double t4188;
  double t4189;
  double t4190;
  double t4202;
  double t4206;
  double t4207;
  double t4209;
  double t4706;
  double t4707;
  double t4720;
  double t4950;
  double t4951;
  double t4952;
  double t4955;
  double t4957;
  double t4580;
  double t4581;
  double t4586;
  double t4588;
  double t4476;
  double t4483;
  double t4493;
  double t4502;
  double t4505;
  double t4509;
  double t4511;
  double t4975;
  double t4978;
  double t4980;
  double t4845;
  double t4847;
  double t4848;
  double t4851;
  double t4852;
  double t4853;
  double t4861;
  double t4990;
  double t4991;
  double t5001;
  double t5002;
  double t5003;
  double t4804;
  double t4806;
  double t4834;
  double t4656;
  double t4658;
  double t4659;
  double t4913;
  double t4915;
  double t4918;
  double t4921;
  double t4922;
  double t4925;
  double t4926;
  double t4927;
  double t4928;
  double t4521;
  double t4524;
  double t3557;
  double t4061;
  double t4069;
  double t4080;
  double t4082;
  double t4112;
  double t4142;
  double t4144;
  double t4148;
  double t4724;
  double t4729;
  double t4730;
  double t4949;
  double t4954;
  double t4958;
  double t4959;
  double t4961;
  double t4963;
  double t4964;
  double t4965;
  double t4967;
  double t5018;
  double t5020;
  double t5021;
  double t5057;
  double t5058;
  double t4513;
  double t4519;
  double t4525;
  double t4531;
  double t4532;
  double t4533;
  double t4534;
  double t5069;
  double t5070;
  double t4997;
  double t4996;
  double t4999;
  double t5006;
  double t5007;
  double t5010;
  double t5011;
  double t5012;
  double t4838;
  double t4840;
  double t4842;
  double t4931;
  double t4933;
  double t4934;
  double t4935;
  double t5039;
  double t5040;
  double t5043;
  double t5044;
  double t4662;
  double t4663;
  double t4664;
  double t4665;
  double t4667;
  double t4669;
  double t4670;
  double t4671;
  double t4295;
  double t4313;
  double t4332;
  double t4334;
  double t4347;
  double t4348;
  double t4350;
  double t4352;
  double t4630;
  double t4633;
  double t4982;
  double t4983;
  double t4984;
  double t4986;
  double t5072;
  double t5073;
  double t5075;
  double t5076;
  double t4739;
  double t4748;
  double t4751;
  double t4754;
  double t4757;
  double t4758;
  double t4766;
  double t4767;
  double t4769;
  double t4770;
  double t5096;
  double t5098;
  double t5099;
  double t5126;
  double t5127;
  double t4610;
  double t4619;
  double t4620;
  double t4625;
  double t4627;
  double t4628;
  double t4636;
  double t4637;
  double t5149;
  double t5150;
  double t5151;
  double t4867;
  double t4870;
  double t4879;
  double t4888;
  double t4890;
  double t4891;
  double t4893;
  double t4894;
  double t4895;
  double t4896;
  double t4897;
  double t4898;
  double t4899;
  t1373 = Cos(var1[3]);
  t146 = Cos(var1[5]);
  t234 = Sin(var1[3]);
  t1008 = Sin(var1[4]);
  t1545 = Sin(var1[5]);
  t3249 = Cos(var1[6]);
  t3272 = Sin(var1[6]);
  t3962 = -1.*t1373*t146;
  t4007 = -1.*t234*t1008*t1545;
  t4021 = t3962 + t4007;
  t1298 = -1.*t146*t234*t1008;
  t2034 = t1373*t1545;
  t3163 = t1298 + t2034;
  t4090 = t3249*t3163;
  t4100 = -1.*t4021*t3272;
  t4109 = t4090 + t4100;
  t4089 = Cos(var1[7]);
  t4131 = Sin(var1[7]);
  t4158 = -1.*t3249;
  t4160 = 1. + t4158;
  t3293 = 0.07996*t3272;
  t4152 = t1373*t146;
  t4153 = t234*t1008*t1545;
  t4156 = t4152 + t4153;
  t4073 = -1.*t3163*t3272;
  t4198 = t4156*t3272;
  t4200 = t4090 + t4198;
  t4117 = -1.*t4089;
  t4119 = 1. + t4117;
  t4122 = 0.135*t4119;
  t4134 = 0.08055*t4131;
  t4136 = 0. + t4122 + t4134;
  t4164 = 0.07996*t4160;
  t4169 = -0.135*t3272;
  t4170 = 0. + t4164 + t4169;
  t4212 = Cos(var1[4]);
  t4180 = 0.135*t4160;
  t4181 = 0. + t4180 + t3293;
  t4232 = -1.*t4212*t3249*t234*t1545;
  t4236 = -1.*t4212*t146*t234*t3272;
  t4239 = t4232 + t4236;
  t4249 = 0.135*t4131;
  t4296 = t3249*t4021;
  t4297 = t3163*t3272;
  t4304 = t4296 + t4297;
  t4360 = -1.*t1373*t146*t1008;
  t4361 = -1.*t234*t1545;
  t4367 = t4360 + t4361;
  t4376 = t146*t234;
  t4377 = -1.*t1373*t1008*t1545;
  t4381 = t4376 + t4377;
  t4246 = -0.08055*t4119;
  t4250 = 0. + t4246 + t4249;
  t4407 = t3249*t4381;
  t4420 = t4367*t3272;
  t4425 = t4407 + t4420;
  t4477 = t1373*t146*t1008;
  t4481 = t234*t1545;
  t4482 = t4477 + t4481;
  t4494 = t3249*t4482;
  t4495 = t4381*t3272;
  t4499 = t4494 + t4495;
  t3250 = -0.135*t3249;
  t3502 = t3250 + t3293;
  t4051 = 0.07996*t3249;
  t4052 = 0.135*t3272;
  t4059 = t4051 + t4052;
  t4516 = -1.*t146*t234;
  t4517 = t1373*t1008*t1545;
  t4518 = t4516 + t4517;
  t4488 = -1.*t4482*t3272;
  t4527 = -1.*t4518*t3272;
  t4530 = t4494 + t4527;
  t4552 = t1373*t4212*t3249*t1545;
  t4553 = t1373*t4212*t146*t3272;
  t4557 = t4552 + t4553;
  t4317 = t4089*t4304;
  t4325 = t4212*t234*t4131;
  t4327 = t4317 + t4325;
  t4280 = 0.135*t4089;
  t4281 = -0.08055*t4131;
  t4294 = t4280 + t4281;
  t4305 = 0.08055*t4089;
  t4308 = t4305 + t4249;
  t4611 = t3249*t4518;
  t4614 = t4482*t3272;
  t4617 = t4611 + t4614;
  t4451 = -1.*t1373*t4212*t4089;
  t4545 = t1373*t4212*t146*t3249;
  t4546 = -1.*t1373*t4212*t1545*t3272;
  t4549 = t4545 + t4546;
  t4647 = -1.*t1373*t4212*t3249*t1545;
  t4648 = -1.*t1373*t4212*t146*t3272;
  t4649 = t4647 + t4648;
  t4650 = -0.01004*t4649;
  t4651 = 0.135*t4089*t4549;
  t4652 = t4549*t4136;
  t4653 = -0.08055*t4549*t4131;
  t4562 = t4089*t4557;
  t4565 = t1373*t1008*t4131;
  t4568 = t4562 + t4565;
  t4213 = -1.*t4212*t146*t234*t4170;
  t4214 = -1.*t4212*t234*t1545*t4181;
  t4219 = -1.*t4212*t146*t3249*t234;
  t4220 = t4212*t234*t1545*t3272;
  t4221 = t4219 + t4220;
  t4230 = -0.01004*t4221;
  t4241 = t4239*t4136;
  t4251 = t234*t1008*t4250;
  t4252 = t4089*t4239;
  t4254 = -1.*t234*t1008*t4131;
  t4255 = t4252 + t4254;
  t4256 = 0.135*t4255;
  t4258 = t4089*t234*t1008;
  t4263 = t4239*t4131;
  t4264 = t4258 + t4263;
  t4265 = -0.08055*t4264;
  t4266 = t4213 + t4214 + t4230 + t4241 + t4251 + t4256 + t4265;
  t4438 = -1.*t1373*t4212*t4250;
  t4682 = -1.*t1373*t3249*t1008*t1545;
  t4684 = -1.*t1373*t146*t1008*t3272;
  t4687 = t4682 + t4684;
  t4446 = t1373*t4212*t4131;
  t4709 = t4212*t146*t3249*t234;
  t4712 = -1.*t4212*t234*t1545*t3272;
  t4713 = t4709 + t4712;
  t4708 = -0.01004*t4239;
  t4715 = 0.135*t4089*t4713;
  t4717 = t4713*t4136;
  t4719 = -0.08055*t4713*t4131;
  t4539 = t1373*t4212*t146*t4170;
  t4543 = t1373*t4212*t1545*t4181;
  t4551 = -0.01004*t4549;
  t4559 = t4557*t4136;
  t4561 = -1.*t1373*t1008*t4250;
  t4570 = 0.135*t4568;
  t4571 = -1.*t1373*t4089*t1008;
  t4572 = t4557*t4131;
  t4573 = t4571 + t4572;
  t4574 = -0.08055*t4573;
  t4575 = t4539 + t4543 + t4551 + t4559 + t4561 + t4570 + t4574;
  t4744 = t4212*t3249*t234*t1545;
  t4746 = t4212*t146*t234*t3272;
  t4747 = t4744 + t4746;
  t4593 = -1.*t4212*t234*t4250;
  t4782 = -1.*t3249*t234*t1008*t1545;
  t4784 = -1.*t146*t234*t1008*t3272;
  t4787 = t4782 + t4784;
  t4600 = -1.*t4212*t4089*t234;
  t4819 = -1.*t146*t3249*t1008;
  t4822 = t1008*t1545*t3272;
  t4823 = t4819 + t4822;
  t4808 = t3249*t1008*t1545;
  t4813 = t146*t1008*t3272;
  t4814 = t4808 + t4813;
  t4815 = -0.01004*t4814;
  t4828 = 0.135*t4089*t4823;
  t4832 = t4823*t4136;
  t4833 = -0.08055*t4823*t4131;
  t4856 = -1.*t4212*t3249*t1545;
  t4857 = -1.*t4212*t146*t3272;
  t4860 = t4856 + t4857;
  t4881 = -1.*t3249*t1008*t1545;
  t4882 = -1.*t146*t1008*t3272;
  t4887 = t4881 + t4882;
  t4641 = -1.*t1373*t4212*t1545*t4170;
  t4644 = t1373*t4212*t146*t4181;
  t4654 = t4641 + t4644 + t4650 + t4651 + t4652 + t4653;
  t4373 = t4367*t4170;
  t4386 = t4381*t4181;
  t4387 = t3249*t4367;
  t4388 = -1.*t4381*t3272;
  t4401 = t4387 + t4388;
  t4403 = -0.01004*t4401;
  t4430 = t4425*t4136;
  t4490 = t4407 + t4488;
  t4177 = t4156*t4170;
  t4183 = t3163*t4181;
  t4188 = t3249*t4156;
  t4189 = t4188 + t4073;
  t4190 = -0.01004*t4189;
  t4202 = 0.135*t4089*t4200;
  t4206 = t4200*t4136;
  t4207 = -0.08055*t4200*t4131;
  t4209 = t4177 + t4183 + t4190 + t4202 + t4206 + t4207;
  t4706 = -1.*t4212*t234*t1545*t4170;
  t4707 = t4212*t146*t234*t4181;
  t4720 = t4706 + t4707 + t4708 + t4715 + t4717 + t4719;
  t4950 = t146*t234*t1008;
  t4951 = -1.*t1373*t1545;
  t4952 = t4950 + t4951;
  t4955 = -1.*t4952*t3272;
  t4957 = t4296 + t4955;
  t4580 = t3163*t4170;
  t4581 = t4021*t4181;
  t4586 = -0.01004*t4109;
  t4588 = t4304*t4136;
  t4476 = t4381*t4170;
  t4483 = t4482*t4181;
  t4493 = -0.01004*t4490;
  t4502 = 0.135*t4089*t4499;
  t4505 = t4499*t4136;
  t4509 = -0.08055*t4499*t4131;
  t4511 = t4476 + t4483 + t4493 + t4502 + t4505 + t4509;
  t4975 = t3249*t4952;
  t4978 = t4021*t3272;
  t4980 = t4975 + t4978;
  t4845 = -1.*t4212*t146*t4170;
  t4847 = -1.*t4212*t1545*t4181;
  t4848 = -1.*t4212*t146*t3249;
  t4851 = t4212*t1545*t3272;
  t4852 = t4848 + t4851;
  t4853 = -0.01004*t4852;
  t4861 = t4860*t4136;
  t4990 = 0.135*t4089*t4860;
  t4991 = -0.08055*t4860*t4131;
  t5001 = t4212*t146*t3249;
  t5002 = -1.*t4212*t1545*t3272;
  t5003 = t5001 + t5002;
  t4804 = t1008*t1545*t4170;
  t4806 = -1.*t146*t1008*t4181;
  t4834 = t4804 + t4806 + t4815 + t4828 + t4832 + t4833;
  t4656 = t1373*t4212*t146*t3502;
  t4658 = t1373*t4212*t1545*t4059;
  t4659 = t4656 + t4658 + t4650 + t4651 + t4652 + t4653;
  t4913 = t4381*t3502;
  t4915 = t4482*t4059;
  t4918 = 0.135*t4089*t4490;
  t4921 = -1.*t3249*t4482;
  t4922 = t4921 + t4388;
  t4925 = -0.01004*t4922;
  t4926 = t4490*t4136;
  t4927 = -0.08055*t4490*t4131;
  t4928 = t4913 + t4915 + t4918 + t4925 + t4926 + t4927;
  t4521 = -1.*t3249*t4518;
  t4524 = t4521 + t4488;
  t3557 = t3163*t3502;
  t4061 = t4021*t4059;
  t4069 = -1.*t3249*t4021;
  t4080 = t4069 + t4073;
  t4082 = -0.01004*t4080;
  t4112 = 0.135*t4089*t4109;
  t4142 = t4109*t4136;
  t4144 = -0.08055*t4109*t4131;
  t4148 = t3557 + t4061 + t4082 + t4112 + t4142 + t4144;
  t4724 = t4212*t146*t234*t3502;
  t4729 = t4212*t234*t1545*t4059;
  t4730 = t4724 + t4729 + t4708 + t4715 + t4717 + t4719;
  t4949 = t4021*t3502;
  t4954 = t4952*t4059;
  t4958 = 0.135*t4089*t4957;
  t4959 = -1.*t3249*t4952;
  t4961 = t4959 + t4100;
  t4963 = -0.01004*t4961;
  t4964 = t4957*t4136;
  t4965 = -0.08055*t4957*t4131;
  t4967 = t4949 + t4954 + t4958 + t4963 + t4964 + t4965;
  t5018 = 0.135*t3249;
  t5020 = -0.07996*t3272;
  t5021 = t5018 + t5020;
  t5057 = -1.*t3249*t4156;
  t5058 = t5057 + t4955;
  t4513 = t4482*t3502;
  t4519 = t4518*t4059;
  t4525 = -0.01004*t4524;
  t4531 = 0.135*t4089*t4530;
  t4532 = t4530*t4136;
  t4533 = -0.08055*t4530*t4131;
  t4534 = t4513 + t4519 + t4525 + t4531 + t4532 + t4533;
  t5069 = -1.*t4156*t3272;
  t5070 = t4975 + t5069;
  t4997 = t4212*t146*t4059;
  t4996 = -1.*t4212*t1545*t3502;
  t4999 = t4996 + t4997 + t4990 + t4853 + t4861 + t4991;
  t5006 = -0.08055*t4089*t5003;
  t5007 = t5003*t4308;
  t5010 = -0.135*t5003*t4131;
  t5011 = t5006 + t5007 + t5010;
  t5012 = var2[7]*t5011;
  t4838 = -1.*t146*t1008*t3502;
  t4840 = -1.*t1008*t1545*t4059;
  t4842 = t4838 + t4840 + t4815 + t4828 + t4832 + t4833;
  t4931 = -0.08055*t4089*t4499;
  t4933 = t4499*t4308;
  t4934 = -0.135*t4499*t4131;
  t4935 = t4931 + t4933 + t4934;
  t5039 = -0.08055*t4089*t4530;
  t5040 = t4530*t4308;
  t5043 = -0.135*t4530*t4131;
  t5044 = t5039 + t5040 + t5043;
  t4662 = -1.*t1373*t1008*t4294;
  t4663 = t4557*t4308;
  t4664 = -0.08055*t4568;
  t4665 = t1373*t4089*t1008;
  t4667 = -1.*t4557*t4131;
  t4669 = t4665 + t4667;
  t4670 = 0.135*t4669;
  t4671 = t4662 + t4663 + t4664 + t4670;
  t4295 = -1.*t4212*t234*t4294;
  t4313 = t4304*t4308;
  t4332 = -0.08055*t4327;
  t4334 = t4212*t4089*t234;
  t4347 = -1.*t4304*t4131;
  t4348 = t4334 + t4347;
  t4350 = 0.135*t4348;
  t4352 = t4295 + t4313 + t4332 + t4350;
  t4630 = -1.*t4617*t4131;
  t4633 = t4451 + t4630;
  t4982 = -0.08055*t4089*t4980;
  t4983 = t4980*t4308;
  t4984 = -0.135*t4980*t4131;
  t4986 = t4982 + t4983 + t4984;
  t5072 = -0.08055*t4089*t5070;
  t5073 = t5070*t4308;
  t5075 = -0.135*t5070*t4131;
  t5076 = t5072 + t5073 + t5075;
  t4739 = -1.*t234*t1008*t4294;
  t4748 = t4747*t4308;
  t4751 = t4089*t4747;
  t4754 = t234*t1008*t4131;
  t4757 = t4751 + t4754;
  t4758 = -0.08055*t4757;
  t4766 = -1.*t4747*t4131;
  t4767 = t4258 + t4766;
  t4769 = 0.135*t4767;
  t4770 = t4739 + t4748 + t4758 + t4769;
  t5096 = -0.08055*t4089;
  t5098 = -0.135*t4131;
  t5099 = t5096 + t5098;
  t5126 = t4952*t3272;
  t5127 = t4188 + t5126;
  t4610 = t1373*t4212*t4294;
  t4619 = t4617*t4308;
  t4620 = t4089*t4617;
  t4625 = -1.*t1373*t4212*t4131;
  t4627 = t4620 + t4625;
  t4628 = -0.08055*t4627;
  t4636 = 0.135*t4633;
  t4637 = t4610 + t4619 + t4628 + t4636;
  t5149 = t4212*t3249*t1545;
  t5150 = t4212*t146*t3272;
  t5151 = t5149 + t5150;
  t4867 = -1.*t1008*t4131;
  t4870 = t4089*t1008;
  t4879 = -1.*t4212*t4294;
  t4888 = t4887*t4308;
  t4890 = t4089*t4887;
  t4891 = t4212*t4131;
  t4893 = t4890 + t4891;
  t4894 = -0.08055*t4893;
  t4895 = t4212*t4089;
  t4896 = -1.*t4887*t4131;
  t4897 = t4895 + t4896;
  t4898 = 0.135*t4897;
  t4899 = t4879 + t4888 + t4894 + t4898;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t4373 + t4386 + t4403 + t4430 + t4438 + 0.135*(t4089*t4425 + t4446) - 0.08055*(t4131*t4425 + t4451))*var2[3] + t4266*var2[4] + t4209*var2[5] + t4148*var2[6] + t4352*var2[7];
  p_output1[10]=(0.135*t4327 + t4580 + t4581 + t4586 + t4588 + t4593 - 0.08055*(t4131*t4304 + t4600))*var2[3] + t4575*var2[4] + t4511*var2[5] + t4534*var2[6] + t4637*var2[7];
  p_output1[11]=0;
  p_output1[12]=t4266*var2[3] + (-0.01004*(-1.*t1008*t1373*t146*t3249 + t1008*t1373*t1545*t3272) - 1.*t1008*t1373*t146*t4170 - 1.*t1008*t1373*t1545*t4181 + t4438 + t4136*t4687 + 0.135*(t4446 + t4089*t4687) - 0.08055*(t4451 + t4131*t4687))*var2[4] + t4654*var2[5] + t4659*var2[6] + t4671*var2[7];
  p_output1[13]=t4575*var2[3] + (-0.01004*(-1.*t1008*t146*t234*t3249 + t1008*t1545*t234*t3272) - 1.*t1008*t146*t234*t4170 - 1.*t1008*t1545*t234*t4181 + t4593 + t4136*t4787 + 0.135*(t4325 + t4089*t4787) - 0.08055*(t4600 + t4131*t4787))*var2[4] + t4720*var2[5] + t4730*var2[6] + t4770*var2[7];
  p_output1[14]=(t1008*t4250 + t4845 + t4847 + t4853 + t4861 + 0.135*(t4089*t4860 + t4867) - 0.08055*(t4131*t4860 + t4870))*var2[4] + t4834*var2[5] + t4842*var2[6] + t4899*var2[7];
  p_output1[15]=t4209*var2[3] + t4654*var2[4] + (t4373 + t4386 + t4403 + 0.135*t4089*t4425 - 0.08055*t4131*t4425 + t4430)*var2[5] + t4928*var2[6] + t4935*var2[7];
  p_output1[16]=t4511*var2[3] + t4720*var2[4] + (0.135*t4089*t4304 - 0.08055*t4131*t4304 + t4580 + t4581 + t4586 + t4588)*var2[5] + t4967*var2[6] + t4986*var2[7];
  p_output1[17]=t5012 + t4834*var2[4] + (t4845 + t4847 + t4853 + t4861 + t4990 + t4991)*var2[5] + t4999*var2[6];
  p_output1[18]=t4148*var2[3] + t4659*var2[4] + t4928*var2[5] + (0.135*t4089*t4524 - 0.08055*t4131*t4524 + t4136*t4524 + t4915 - 0.01004*(t3272*t4518 + t4921) + t4518*t5021)*var2[6] + t5044*var2[7];
  p_output1[19]=t4534*var2[3] + t4730*var2[4] + t4967*var2[5] + (t4954 - 0.01004*(t4198 + t4959) + t4156*t5021 + 0.135*t4089*t5058 - 0.08055*t4131*t5058 + t4136*t5058)*var2[6] + t5076*var2[7];
  p_output1[20]=t5012 + t4842*var2[4] + t4999*var2[5] + (t4853 + t4861 + t4990 + t4991 + t4997 + t1545*t4212*t5021)*var2[6];
  p_output1[21]=t4352*var2[3] + t4671*var2[4] + t4935*var2[5] + t5044*var2[6] + (t4294*t4617 + 0.135*(t4446 - 1.*t4089*t4617) - 0.08055*t4633 + t1373*t4212*t5099)*var2[7];
  p_output1[22]=t4637*var2[3] + t4770*var2[4] + t4986*var2[5] + t5076*var2[6] + (t234*t4212*t5099 + t4294*t5127 + 0.135*(t4325 - 1.*t4089*t5127) - 0.08055*(t4600 - 1.*t4131*t5127))*var2[7];
  p_output1[23]=t4899*var2[4] + t5011*var2[5] + t5011*var2[6] + (-1.*t1008*t5099 + t4294*t5151 + 0.135*(t4867 - 1.*t4089*t5151) - 0.08055*(t4870 - 1.*t4131*t5151))*var2[7];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJp_LeftRotationJoint_mex.hh"

namespace SymExpression
{

void dJp_LeftRotationJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
