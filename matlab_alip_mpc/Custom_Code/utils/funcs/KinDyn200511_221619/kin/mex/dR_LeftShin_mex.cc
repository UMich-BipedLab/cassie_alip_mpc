/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:49 GMT-04:00
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
  double t1847;
  double t1212;
  double t2006;
  double t1283;
  double t2187;
  double t963;
  double t1022;
  double t1332;
  double t2238;
  double t2469;
  double t2940;
  double t3182;
  double t3497;
  double t3566;
  double t3632;
  double t3634;
  double t3823;
  double t3860;
  double t3864;
  double t3866;
  double t4007;
  double t4033;
  double t4052;
  double t439;
  double t543;
  double t4055;
  double t224;
  double t4145;
  double t4155;
  double t4177;
  double t4190;
  double t4211;
  double t4212;
  double t4142;
  double t4179;
  double t4187;
  double t4092;
  double t4188;
  double t4214;
  double t4216;
  double t4238;
  double t4240;
  double t4252;
  double t4315;
  double t4333;
  double t4308;
  double t4310;
  double t4311;
  double t4336;
  double t4338;
  double t4343;
  double t4348;
  double t4352;
  double t4459;
  double t4460;
  double t4461;
  double t4427;
  double t4429;
  double t4441;
  double t4443;
  double t4446;
  double t4454;
  double t4457;
  double t4462;
  double t4466;
  double t4470;
  double t4474;
  double t4476;
  double t4542;
  double t4543;
  double t4545;
  double t4522;
  double t4523;
  double t4532;
  double t4567;
  double t4571;
  double t4574;
  double t4520;
  double t4540;
  double t4546;
  double t4550;
  double t4554;
  double t4555;
  double t4559;
  double t4576;
  double t4578;
  double t4581;
  double t4588;
  double t4606;
  double t4637;
  double t4640;
  double t4641;
  double t4645;
  double t4646;
  double t4649;
  double t4656;
  double t4667;
  double t4669;
  double t4670;
  double t4706;
  double t4708;
  double t4714;
  double t4694;
  double t4721;
  double t4727;
  double t4731;
  double t4794;
  double t4797;
  double t4799;
  double t4808;
  double t4812;
  double t4815;
  double t4816;
  double t4821;
  double t4823;
  double t4830;
  double t4834;
  double t4836;
  double t4889;
  double t4890;
  double t4878;
  double t4879;
  double t4880;
  double t4882;
  double t4898;
  double t4901;
  double t4926;
  double t4931;
  double t4934;
  double t4999;
  double t5000;
  double t4971;
  double t4985;
  double t4993;
  double t5011;
  double t5012;
  double t5026;
  double t5033;
  double t5034;
  double t5126;
  double t5131;
  double t5136;
  double t5083;
  double t5093;
  double t5097;
  double t5099;
  double t5105;
  double t5119;
  double t5121;
  double t5137;
  double t5141;
  double t5148;
  double t5150;
  double t5154;
  double t5225;
  double t5226;
  double t5229;
  double t5239;
  double t5241;
  double t5251;
  double t5254;
  double t5257;
  double t5259;
  double t5270;
  double t5309;
  double t5319;
  double t5320;
  double t5296;
  double t5322;
  double t5326;
  double t5333;
  double t4752;
  double t4753;
  double t4769;
  double t5394;
  double t5395;
  double t5396;
  double t5402;
  double t5407;
  double t5408;
  double t5456;
  double t5458;
  double t5460;
  double t5443;
  double t5446;
  double t5448;
  double t5454;
  double t5467;
  double t5471;
  double t5478;
  double t5479;
  double t5481;
  double t5472;
  double t5482;
  double t5489;
  double t5493;
  double t5496;
  double t5497;
  double t5504;
  double t5508;
  double t5509;
  double t5533;
  double t5534;
  double t5537;
  double t5540;
  double t5543;
  double t5549;
  double t5560;
  double t5563;
  double t5566;
  double t5570;
  double t5608;
  double t5615;
  double t5621;
  double t5592;
  double t5630;
  double t5640;
  double t5646;
  double t5730;
  double t5745;
  double t5746;
  double t5686;
  double t5693;
  double t5695;
  double t5703;
  double t5705;
  double t5706;
  double t5710;
  double t5750;
  double t5751;
  double t5760;
  double t5764;
  double t5768;
  double t4048;
  double t4058;
  double t4061;
  double t4115;
  double t4117;
  double t4122;
  double t4227;
  double t4255;
  double t4262;
  double t4276;
  double t4278;
  double t4288;
  double t4342;
  double t4355;
  double t4365;
  double t4399;
  double t4402;
  double t4405;
  double t4469;
  double t4481;
  double t4482;
  double t4495;
  double t4497;
  double t4500;
  double t4580;
  double t4608;
  double t4609;
  double t4619;
  double t4627;
  double t4631;
  double t4653;
  double t4671;
  double t4687;
  double t4698;
  double t4737;
  double t4740;
  double t5895;
  double t4838;
  double t4843;
  double t4844;
  double t4855;
  double t4858;
  double t4859;
  double t4912;
  double t4935;
  double t4936;
  double t4941;
  double t4943;
  double t4947;
  double t5025;
  double t5035;
  double t5036;
  double t5041;
  double t5046;
  double t5048;
  double t5145;
  double t5160;
  double t5175;
  double t5178;
  double t5187;
  double t5189;
  double t5252;
  double t5273;
  double t5290;
  double t5297;
  double t5336;
  double t5338;
  double t6035;
  double t5349;
  double t5364;
  double t5366;
  double t4772;
  double t4776;
  double t5410;
  double t5412;
  double t5414;
  double t5418;
  double t5423;
  double t5432;
  double t6127;
  double t6130;
  double t6133;
  double t5559;
  double t5574;
  double t5585;
  double t5596;
  double t5652;
  double t5653;
  double t6163;
  double t5669;
  double t5671;
  double t5672;
  double t5756;
  double t5771;
  double t5775;
  double t5793;
  double t5794;
  double t5796;
  t1847 = Cos(var1[3]);
  t1212 = Cos(var1[5]);
  t2006 = Sin(var1[4]);
  t1283 = Sin(var1[3]);
  t2187 = Sin(var1[5]);
  t963 = Cos(var1[7]);
  t1022 = Cos(var1[6]);
  t1332 = -1.*t1212*t1283;
  t2238 = t1847*t2006*t2187;
  t2469 = t1332 + t2238;
  t2940 = t1022*t2469;
  t3182 = t1847*t1212*t2006;
  t3497 = t1283*t2187;
  t3566 = t3182 + t3497;
  t3632 = Sin(var1[6]);
  t3634 = t3566*t3632;
  t3823 = t2940 + t3634;
  t3860 = t963*t3823;
  t3864 = Cos(var1[4]);
  t3866 = Sin(var1[7]);
  t4007 = -1.*t1847*t3864*t3866;
  t4033 = t3860 + t4007;
  t4052 = Cos(var1[9]);
  t439 = Cos(var1[8]);
  t543 = Sin(var1[9]);
  t4055 = Sin(var1[8]);
  t224 = Cos(var1[10]);
  t4145 = t1212*t1283;
  t4155 = -1.*t1847*t2006*t2187;
  t4177 = t4145 + t4155;
  t4190 = t1022*t4177;
  t4211 = -1.*t3566*t3632;
  t4212 = t4190 + t4211;
  t4142 = t1022*t3566;
  t4179 = t4177*t3632;
  t4187 = t4142 + t4179;
  t4092 = Sin(var1[10]);
  t4188 = t439*t4187*t3866;
  t4214 = t4212*t4055;
  t4216 = t4188 + t4214;
  t4238 = t439*t4212;
  t4240 = -1.*t4187*t3866*t4055;
  t4252 = t4238 + t4240;
  t4315 = -1.*t1022*t2469;
  t4333 = t4315 + t4211;
  t4308 = -1.*t2469*t3632;
  t4310 = t4142 + t4308;
  t4311 = t439*t4310*t3866;
  t4336 = t4333*t4055;
  t4338 = t4311 + t4336;
  t4343 = t439*t4333;
  t4348 = -1.*t4310*t3866*t4055;
  t4352 = t4343 + t4348;
  t4459 = t1847*t3864*t1212*t1022;
  t4460 = -1.*t1847*t3864*t2187*t3632;
  t4461 = t4459 + t4460;
  t4427 = -1.*t1847*t963*t2006;
  t4429 = t1847*t3864*t1022*t2187;
  t4441 = t1847*t3864*t1212*t3632;
  t4443 = t4429 + t4441;
  t4446 = t4443*t3866;
  t4454 = t4427 + t4446;
  t4457 = t439*t4454;
  t4462 = t4461*t4055;
  t4466 = t4457 + t4462;
  t4470 = t439*t4461;
  t4474 = -1.*t4454*t4055;
  t4476 = t4470 + t4474;
  t4542 = -1.*t1212*t1283*t2006;
  t4543 = t1847*t2187;
  t4545 = t4542 + t4543;
  t4522 = -1.*t1847*t1212;
  t4523 = -1.*t1283*t2006*t2187;
  t4532 = t4522 + t4523;
  t4567 = t1022*t4545;
  t4571 = -1.*t4532*t3632;
  t4574 = t4567 + t4571;
  t4520 = -1.*t3864*t963*t1283;
  t4540 = t1022*t4532;
  t4546 = t4545*t3632;
  t4550 = t4540 + t4546;
  t4554 = t4550*t3866;
  t4555 = t4520 + t4554;
  t4559 = t439*t4555;
  t4576 = t4574*t4055;
  t4578 = t4559 + t4576;
  t4581 = t439*t4574;
  t4588 = -1.*t4555*t4055;
  t4606 = t4581 + t4588;
  t4637 = t1847*t3864*t963;
  t4640 = t3823*t3866;
  t4641 = t4637 + t4640;
  t4645 = -1.*t439*t4641;
  t4646 = -1.*t4310*t4055;
  t4649 = t4645 + t4646;
  t4656 = t439*t4310;
  t4667 = -1.*t4641*t4055;
  t4669 = t4656 + t4667;
  t4670 = t4052*t4669;
  t4706 = t439*t4641;
  t4708 = t4310*t4055;
  t4714 = t4706 + t4708;
  t4694 = -1.*t543*t4669;
  t4721 = -1.*t543*t4714;
  t4727 = t4721 + t4670;
  t4731 = t4092*t4727;
  t4794 = t1847*t1212;
  t4797 = t1283*t2006*t2187;
  t4799 = t4794 + t4797;
  t4808 = t1022*t4799;
  t4812 = t1212*t1283*t2006;
  t4815 = -1.*t1847*t2187;
  t4816 = t4812 + t4815;
  t4821 = t4816*t3632;
  t4823 = t4808 + t4821;
  t4830 = t963*t4823;
  t4834 = -1.*t3864*t1283*t3866;
  t4836 = t4830 + t4834;
  t4889 = -1.*t4816*t3632;
  t4890 = t4540 + t4889;
  t4878 = t1022*t4816;
  t4879 = t4532*t3632;
  t4880 = t4878 + t4879;
  t4882 = t439*t4880*t3866;
  t4898 = t4890*t4055;
  t4901 = t4882 + t4898;
  t4926 = t439*t4890;
  t4931 = -1.*t4880*t3866*t4055;
  t4934 = t4926 + t4931;
  t4999 = -1.*t1022*t4799;
  t5000 = t4999 + t4889;
  t4971 = -1.*t4799*t3632;
  t4985 = t4878 + t4971;
  t4993 = t439*t4985*t3866;
  t5011 = t5000*t4055;
  t5012 = t4993 + t5011;
  t5026 = t439*t5000;
  t5033 = -1.*t4985*t3866*t4055;
  t5034 = t5026 + t5033;
  t5126 = t3864*t1212*t1022*t1283;
  t5131 = -1.*t3864*t1283*t2187*t3632;
  t5136 = t5126 + t5131;
  t5083 = -1.*t963*t1283*t2006;
  t5093 = t3864*t1022*t1283*t2187;
  t5097 = t3864*t1212*t1283*t3632;
  t5099 = t5093 + t5097;
  t5105 = t5099*t3866;
  t5119 = t5083 + t5105;
  t5121 = t439*t5119;
  t5137 = t5136*t4055;
  t5141 = t5121 + t5137;
  t5148 = t439*t5136;
  t5150 = -1.*t5119*t4055;
  t5154 = t5148 + t5150;
  t5225 = t3864*t963*t1283;
  t5226 = t4823*t3866;
  t5229 = t5225 + t5226;
  t5239 = -1.*t439*t5229;
  t5241 = -1.*t4985*t4055;
  t5251 = t5239 + t5241;
  t5254 = t439*t4985;
  t5257 = -1.*t5229*t4055;
  t5259 = t5254 + t5257;
  t5270 = t4052*t5259;
  t5309 = t439*t5229;
  t5319 = t4985*t4055;
  t5320 = t5309 + t5319;
  t5296 = -1.*t543*t5259;
  t5322 = -1.*t543*t5320;
  t5326 = t5322 + t5270;
  t5333 = t4092*t5326;
  t4752 = t4052*t4714;
  t4753 = t543*t4669;
  t4769 = t4752 + t4753;
  t5394 = t3864*t1022*t2187;
  t5395 = t3864*t1212*t3632;
  t5396 = t5394 + t5395;
  t5402 = t963*t5396;
  t5407 = t2006*t3866;
  t5408 = t5402 + t5407;
  t5456 = -1.*t3864*t1022*t2187;
  t5458 = -1.*t3864*t1212*t3632;
  t5460 = t5456 + t5458;
  t5443 = t3864*t1212*t1022;
  t5446 = -1.*t3864*t2187*t3632;
  t5448 = t5443 + t5446;
  t5454 = t439*t5448*t3866;
  t5467 = t5460*t4055;
  t5471 = t5454 + t5467;
  t5478 = t439*t5460;
  t5479 = -1.*t5448*t3866*t4055;
  t5481 = t5478 + t5479;
  t5472 = -1.*t543*t5471;
  t5482 = t4052*t5481;
  t5489 = t5472 + t5482;
  t5493 = -1.*t224*t5489;
  t5496 = t4052*t5471;
  t5497 = t543*t5481;
  t5504 = t5496 + t5497;
  t5508 = t4092*t5504;
  t5509 = t5493 + t5508;
  t5533 = -1.*t963*t2006;
  t5534 = t5396*t3866;
  t5537 = t5533 + t5534;
  t5540 = -1.*t439*t5537;
  t5543 = -1.*t5448*t4055;
  t5549 = t5540 + t5543;
  t5560 = t439*t5448;
  t5563 = -1.*t5537*t4055;
  t5566 = t5560 + t5563;
  t5570 = t4052*t5566;
  t5608 = t439*t5537;
  t5615 = t5448*t4055;
  t5621 = t5608 + t5615;
  t5592 = -1.*t543*t5566;
  t5630 = -1.*t543*t5621;
  t5640 = t5630 + t5570;
  t5646 = t4092*t5640;
  t5730 = -1.*t1212*t1022*t2006;
  t5745 = t2006*t2187*t3632;
  t5746 = t5730 + t5745;
  t5686 = -1.*t3864*t963;
  t5693 = -1.*t1022*t2006*t2187;
  t5695 = -1.*t1212*t2006*t3632;
  t5703 = t5693 + t5695;
  t5705 = t5703*t3866;
  t5706 = t5686 + t5705;
  t5710 = t439*t5706;
  t5750 = t5746*t4055;
  t5751 = t5710 + t5750;
  t5760 = t439*t5746;
  t5764 = -1.*t5706*t4055;
  t5768 = t5760 + t5764;
  t4048 = -1.*t439*t543*t4033;
  t4058 = -1.*t4052*t4033*t4055;
  t4061 = t4048 + t4058;
  t4115 = t4052*t439*t4033;
  t4117 = -1.*t543*t4033*t4055;
  t4122 = t4115 + t4117;
  t4227 = -1.*t543*t4216;
  t4255 = t4052*t4252;
  t4262 = t4227 + t4255;
  t4276 = t4052*t4216;
  t4278 = t543*t4252;
  t4288 = t4276 + t4278;
  t4342 = -1.*t543*t4338;
  t4355 = t4052*t4352;
  t4365 = t4342 + t4355;
  t4399 = t4052*t4338;
  t4402 = t543*t4352;
  t4405 = t4399 + t4402;
  t4469 = -1.*t543*t4466;
  t4481 = t4052*t4476;
  t4482 = t4469 + t4481;
  t4495 = t4052*t4466;
  t4497 = t543*t4476;
  t4500 = t4495 + t4497;
  t4580 = -1.*t543*t4578;
  t4608 = t4052*t4606;
  t4609 = t4580 + t4608;
  t4619 = t4052*t4578;
  t4627 = t543*t4606;
  t4631 = t4619 + t4627;
  t4653 = t543*t4649;
  t4671 = t4653 + t4670;
  t4687 = t4052*t4649;
  t4698 = t4687 + t4694;
  t4737 = -1.*t4052*t4714;
  t4740 = t4737 + t4694;
  t5895 = t224*t4727;
  t4838 = -1.*t439*t543*t4836;
  t4843 = -1.*t4052*t4836*t4055;
  t4844 = t4838 + t4843;
  t4855 = t4052*t439*t4836;
  t4858 = -1.*t543*t4836*t4055;
  t4859 = t4855 + t4858;
  t4912 = -1.*t543*t4901;
  t4935 = t4052*t4934;
  t4936 = t4912 + t4935;
  t4941 = t4052*t4901;
  t4943 = t543*t4934;
  t4947 = t4941 + t4943;
  t5025 = -1.*t543*t5012;
  t5035 = t4052*t5034;
  t5036 = t5025 + t5035;
  t5041 = t4052*t5012;
  t5046 = t543*t5034;
  t5048 = t5041 + t5046;
  t5145 = -1.*t543*t5141;
  t5160 = t4052*t5154;
  t5175 = t5145 + t5160;
  t5178 = t4052*t5141;
  t5187 = t543*t5154;
  t5189 = t5178 + t5187;
  t5252 = t543*t5251;
  t5273 = t5252 + t5270;
  t5290 = t4052*t5251;
  t5297 = t5290 + t5296;
  t5336 = -1.*t4052*t5320;
  t5338 = t5336 + t5296;
  t6035 = t224*t5326;
  t5349 = t4052*t5320;
  t5364 = t543*t5259;
  t5366 = t5349 + t5364;
  t4772 = t224*t4769;
  t4776 = t4731 + t4772;
  t5410 = -1.*t439*t543*t5408;
  t5412 = -1.*t4052*t5408*t4055;
  t5414 = t5410 + t5412;
  t5418 = t4052*t439*t5408;
  t5423 = -1.*t543*t5408*t4055;
  t5432 = t5418 + t5423;
  t6127 = t4092*t5489;
  t6130 = t224*t5504;
  t6133 = t6127 + t6130;
  t5559 = t543*t5549;
  t5574 = t5559 + t5570;
  t5585 = t4052*t5549;
  t5596 = t5585 + t5592;
  t5652 = -1.*t4052*t5621;
  t5653 = t5652 + t5592;
  t6163 = t224*t5640;
  t5669 = t4052*t5621;
  t5671 = t543*t5566;
  t5672 = t5669 + t5671;
  t5756 = -1.*t543*t5751;
  t5771 = t4052*t5768;
  t5775 = t5756 + t5771;
  t5793 = t4052*t5751;
  t5794 = t543*t5768;
  t5796 = t5793 + t5794;
  p_output1[0]=(-1.*t224*t4609 + t4092*t4631)*var2[3] + (-1.*t224*t4482 + t4092*t4500)*var2[4] + (-1.*t224*t4262 + t4092*t4288)*var2[5] + (-1.*t224*t4365 + t4092*t4405)*var2[6] + (-1.*t224*t4061 + t4092*t4122)*var2[7] + (t4092*t4671 - 1.*t224*t4698)*var2[8] + (t4731 - 1.*t224*t4740)*var2[9] + t4776*var2[10];
  p_output1[1]=(-1.*t224*t4727 + t4092*t4769)*var2[3] + (-1.*t224*t5175 + t4092*t5189)*var2[4] + (-1.*t224*t4936 + t4092*t4947)*var2[5] + (-1.*t224*t5036 + t4092*t5048)*var2[6] + (-1.*t224*t4844 + t4092*t4859)*var2[7] + (t4092*t5273 - 1.*t224*t5297)*var2[8] + (t5333 - 1.*t224*t5338)*var2[9] + (t5333 + t224*t5366)*var2[10];
  p_output1[2]=(-1.*t224*t5775 + t4092*t5796)*var2[4] + t5509*var2[5] + t5509*var2[6] + (-1.*t224*t5414 + t4092*t5432)*var2[7] + (t4092*t5574 - 1.*t224*t5596)*var2[8] + (t5646 - 1.*t224*t5653)*var2[9] + (t5646 + t224*t5672)*var2[10];
  p_output1[3]=(t4092*t4609 + t224*t4631)*var2[3] + (t4092*t4482 + t224*t4500)*var2[4] + (t4092*t4262 + t224*t4288)*var2[5] + (t4092*t4365 + t224*t4405)*var2[6] + (t4061*t4092 + t224*t4122)*var2[7] + (t224*t4671 + t4092*t4698)*var2[8] + (t4092*t4740 + t5895)*var2[9] + (-1.*t4092*t4769 + t5895)*var2[10];
  p_output1[4]=t4776*var2[3] + (t4092*t5175 + t224*t5189)*var2[4] + (t4092*t4936 + t224*t4947)*var2[5] + (t4092*t5036 + t224*t5048)*var2[6] + (t4092*t4844 + t224*t4859)*var2[7] + (t224*t5273 + t4092*t5297)*var2[8] + (t4092*t5338 + t6035)*var2[9] + (-1.*t4092*t5366 + t6035)*var2[10];
  p_output1[5]=(t4092*t5775 + t224*t5796)*var2[4] + t6133*var2[5] + t6133*var2[6] + (t4092*t5414 + t224*t5432)*var2[7] + (t224*t5574 + t4092*t5596)*var2[8] + (t4092*t5653 + t6163)*var2[9] + (-1.*t4092*t5672 + t6163)*var2[10];
  p_output1[6]=(t4834 - 1.*t4550*t963)*var2[3] + (-1.*t1847*t2006*t3866 - 1.*t4443*t963)*var2[4] - 1.*t4187*t963*var2[5] - 1.*t4310*t963*var2[6] + t4641*var2[7];
  p_output1[7]=(t1847*t3864*t3866 - 1.*t3823*t963)*var2[3] + (-1.*t1283*t2006*t3866 - 1.*t5099*t963)*var2[4] - 1.*t4880*t963*var2[5] - 1.*t4985*t963*var2[6] + t5229*var2[7];
  p_output1[8]=(-1.*t3864*t3866 - 1.*t5703*t963)*var2[4] - 1.*t5448*t963*var2[5] - 1.*t5448*t963*var2[6] + t5537*var2[7];
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

#include "dR_LeftShin_mex.hh"

namespace SymExpression
{

void dR_LeftShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
