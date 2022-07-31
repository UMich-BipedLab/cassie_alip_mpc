/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:34 GMT-04:00
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
  double t761;
  double t1033;
  double t1375;
  double t1410;
  double t702;
  double t1535;
  double t2764;
  double t1409;
  double t2093;
  double t2167;
  double t597;
  double t3415;
  double t3474;
  double t3484;
  double t3809;
  double t3823;
  double t3868;
  double t3870;
  double t4078;
  double t4146;
  double t4196;
  double t2399;
  double t4149;
  double t4170;
  double t392;
  double t4198;
  double t4204;
  double t4208;
  double t4233;
  double t4176;
  double t4211;
  double t4218;
  double t302;
  double t4240;
  double t4254;
  double t4255;
  double t217;
  double t4317;
  double t4301;
  double t4318;
  double t4335;
  double t4349;
  double t4350;
  double t4361;
  double t4345;
  double t4367;
  double t4370;
  double t4396;
  double t4399;
  double t4412;
  double t4373;
  double t4420;
  double t4423;
  double t4427;
  double t4433;
  double t4446;
  double t4289;
  double t4424;
  double t4453;
  double t4456;
  double t4467;
  double t4468;
  double t4469;
  double t4553;
  double t4560;
  double t4561;
  double t4570;
  double t4575;
  double t4585;
  double t4596;
  double t4600;
  double t4604;
  double t4605;
  double t4610;
  double t4611;
  double t4613;
  double t4623;
  double t4628;
  double t4706;
  double t4714;
  double t4719;
  double t4720;
  double t4715;
  double t4743;
  double t4748;
  double t4768;
  double t4777;
  double t4783;
  double t4766;
  double t4784;
  double t4786;
  double t4795;
  double t4800;
  double t4804;
  double t4884;
  double t4885;
  double t4889;
  double t4880;
  double t4891;
  double t4892;
  double t4913;
  double t4921;
  double t4931;
  double t4897;
  double t4932;
  double t4942;
  double t4950;
  double t4954;
  double t4965;
  double t5002;
  double t5003;
  double t5008;
  double t5012;
  double t5015;
  double t5022;
  double t5024;
  double t5018;
  double t5045;
  double t5074;
  double t5080;
  double t5086;
  double t5093;
  double t5102;
  double t5110;
  double t5142;
  double t5144;
  double t5150;
  double t5152;
  double t5159;
  double t5161;
  double t5151;
  double t5164;
  double t5167;
  double t5181;
  double t5182;
  double t5187;
  double t5190;
  double t5191;
  double t5198;
  double t5172;
  double t5199;
  double t5209;
  double t5211;
  double t5214;
  double t5216;
  double t5210;
  double t5217;
  double t5219;
  double t5224;
  double t5225;
  double t5229;
  double t5292;
  double t5293;
  double t5294;
  double t5307;
  double t5310;
  double t5322;
  double t5324;
  double t5328;
  double t5331;
  double t5304;
  double t5337;
  double t5338;
  double t5345;
  double t5346;
  double t5348;
  double t5341;
  double t5351;
  double t5354;
  double t5368;
  double t5372;
  double t5374;
  double t5416;
  double t5417;
  double t5424;
  double t5425;
  double t5429;
  double t5431;
  double t5434;
  double t5442;
  double t5430;
  double t5450;
  double t5452;
  double t5462;
  double t5463;
  double t5465;
  double t5460;
  double t5466;
  double t5467;
  double t5478;
  double t5481;
  double t5482;
  double t5538;
  double t5542;
  double t5549;
  double t5552;
  double t5555;
  double t5560;
  double t5565;
  double t5567;
  double t5574;
  double t5579;
  double t5580;
  double t5585;
  double t5590;
  double t5598;
  double t5603;
  double t5635;
  double t5636;
  double t5639;
  double t5644;
  double t5638;
  double t5652;
  double t5654;
  double t5660;
  double t5666;
  double t5668;
  double t5659;
  double t5673;
  double t5679;
  double t5696;
  double t5697;
  double t5701;
  double t5116;
  double t5120;
  double t5125;
  double t5759;
  double t5760;
  double t5761;
  double t5758;
  double t5766;
  double t5767;
  double t5771;
  double t5773;
  double t5776;
  double t5770;
  double t5784;
  double t5788;
  double t5791;
  double t5794;
  double t5795;
  double t5836;
  double t5844;
  double t5845;
  double t5846;
  double t5849;
  double t5856;
  double t5859;
  double t5852;
  double t5888;
  double t5902;
  double t5903;
  double t5904;
  double t5910;
  double t5912;
  double t5918;
  double t5949;
  double t5950;
  double t5961;
  double t5962;
  double t5963;
  double t5967;
  double t5968;
  double t5969;
  double t5976;
  double t5980;
  double t5981;
  double t5982;
  double t6003;
  double t6005;
  double t6006;
  double t6017;
  double t6021;
  double t6023;
  double t6015;
  double t6026;
  double t6031;
  double t6039;
  double t6041;
  double t6045;
  double t6032;
  double t6049;
  double t6050;
  double t6052;
  double t6054;
  double t6055;
  double t6051;
  double t6062;
  double t6065;
  double t6067;
  double t6070;
  double t6071;
  double t6072;
  double t6073;
  double t6075;
  double t6100;
  double t6105;
  double t6106;
  double t6099;
  double t6119;
  double t6122;
  double t6126;
  double t6128;
  double t6135;
  double t6124;
  double t6136;
  double t6138;
  double t6144;
  double t6148;
  double t6150;
  double t6186;
  double t6187;
  double t6189;
  double t6190;
  double t6191;
  double t6195;
  double t6199;
  double t6194;
  double t6214;
  double t6226;
  double t6239;
  double t6244;
  double t6254;
  double t6258;
  double t6262;
  double t6312;
  double t6337;
  double t6338;
  double t6345;
  double t6347;
  double t6348;
  double t6349;
  double t6351;
  double t6352;
  double t6342;
  double t6354;
  double t6356;
  double t6361;
  double t6363;
  double t6364;
  double t6359;
  double t6367;
  double t6369;
  double t6378;
  double t6383;
  double t6384;
  double t4224;
  double t4263;
  double t4270;
  double t4290;
  double t4291;
  double t4294;
  double t4462;
  double t4471;
  double t4473;
  double t4483;
  double t4486;
  double t4490;
  double t4612;
  double t4630;
  double t4631;
  double t4637;
  double t4664;
  double t4673;
  double t4794;
  double t4808;
  double t4810;
  double t4848;
  double t4851;
  double t4856;
  double t4949;
  double t4966;
  double t4968;
  double t4978;
  double t4982;
  double t4988;
  double t5028;
  double t5037;
  double t5050;
  double t5062;
  double t5088;
  double t5089;
  double t6487;
  double t5223;
  double t5235;
  double t5247;
  double t5256;
  double t5258;
  double t5263;
  double t5360;
  double t5376;
  double t5378;
  double t5391;
  double t5396;
  double t5398;
  double t5469;
  double t5484;
  double t5490;
  double t5506;
  double t5508;
  double t5514;
  double t5588;
  double t5607;
  double t5609;
  double t5618;
  double t5625;
  double t5626;
  double t5680;
  double t5709;
  double t5712;
  double t5715;
  double t5721;
  double t5722;
  double t5126;
  double t5134;
  double t5789;
  double t5797;
  double t5803;
  double t5808;
  double t5819;
  double t5824;
  double t5865;
  double t5883;
  double t5889;
  double t5891;
  double t5906;
  double t5907;
  double t5924;
  double t5930;
  double t5937;
  double t6622;
  double t5979;
  double t5986;
  double t5988;
  double t5993;
  double t5994;
  double t5995;
  double t6651;
  double t6654;
  double t6668;
  double t6141;
  double t6151;
  double t6154;
  double t6166;
  double t6167;
  double t6172;
  double t6204;
  double t6208;
  double t6218;
  double t6219;
  double t6248;
  double t6251;
  double t6275;
  double t6276;
  double t6277;
  double t6695;
  double t6374;
  double t6385;
  double t6392;
  double t6396;
  double t6399;
  double t6400;
  t761 = Cos(var1[3]);
  t1033 = Cos(var1[4]);
  t1375 = Cos(var1[5]);
  t1410 = Sin(var1[13]);
  t702 = Cos(var1[13]);
  t1535 = Sin(var1[5]);
  t2764 = Cos(var1[15]);
  t1409 = t702*t761*t1033*t1375;
  t2093 = -1.*t761*t1033*t1410*t1535;
  t2167 = t1409 + t2093;
  t597 = Sin(var1[15]);
  t3415 = Cos(var1[14]);
  t3474 = Sin(var1[4]);
  t3484 = -1.*t3415*t761*t3474;
  t3809 = Sin(var1[14]);
  t3823 = t761*t1033*t1375*t1410;
  t3868 = t702*t761*t1033*t1535;
  t3870 = t3823 + t3868;
  t4078 = t3809*t3870;
  t4146 = t3484 + t4078;
  t4196 = Cos(var1[16]);
  t2399 = t597*t2167;
  t4149 = t2764*t4146;
  t4170 = t2399 + t4149;
  t392 = Sin(var1[16]);
  t4198 = t2764*t2167;
  t4204 = -1.*t597*t4146;
  t4208 = t4198 + t4204;
  t4233 = Cos(var1[17]);
  t4176 = -1.*t392*t4170;
  t4211 = t4196*t4208;
  t4218 = t4176 + t4211;
  t302 = Sin(var1[17]);
  t4240 = t4196*t4170;
  t4254 = t392*t4208;
  t4255 = t4240 + t4254;
  t217 = Sin(var1[18]);
  t4317 = Sin(var1[3]);
  t4301 = t761*t1375*t3474;
  t4318 = t4317*t1535;
  t4335 = t4301 + t4318;
  t4349 = t1375*t4317;
  t4350 = -1.*t761*t3474*t1535;
  t4361 = t4349 + t4350;
  t4345 = -1.*t1410*t4335;
  t4367 = t702*t4361;
  t4370 = t4345 + t4367;
  t4396 = t702*t4335;
  t4399 = t1410*t4361;
  t4412 = t4396 + t4399;
  t4373 = t597*t4370;
  t4420 = t2764*t3809*t4412;
  t4423 = t4373 + t4420;
  t4427 = t2764*t4370;
  t4433 = -1.*t3809*t597*t4412;
  t4446 = t4427 + t4433;
  t4289 = Cos(var1[18]);
  t4424 = -1.*t392*t4423;
  t4453 = t4196*t4446;
  t4456 = t4424 + t4453;
  t4467 = t4196*t4423;
  t4468 = t392*t4446;
  t4469 = t4467 + t4468;
  t4553 = -1.*t761*t1033*t3809;
  t4560 = t1410*t4335;
  t4561 = -1.*t1375*t4317;
  t4570 = t761*t3474*t1535;
  t4575 = t4561 + t4570;
  t4585 = t702*t4575;
  t4596 = t4560 + t4585;
  t4600 = t3415*t4596;
  t4604 = t4553 + t4600;
  t4605 = -1.*t4196*t597*t4604;
  t4610 = -1.*t2764*t392*t4604;
  t4611 = t4605 + t4610;
  t4613 = t2764*t4196*t4604;
  t4623 = -1.*t597*t392*t4604;
  t4628 = t4613 + t4623;
  t4706 = -1.*t702*t4575;
  t4714 = t4345 + t4706;
  t4719 = -1.*t1410*t4575;
  t4720 = t4396 + t4719;
  t4715 = t597*t4714;
  t4743 = t2764*t3809*t4720;
  t4748 = t4715 + t4743;
  t4768 = t2764*t4714;
  t4777 = -1.*t3809*t597*t4720;
  t4783 = t4768 + t4777;
  t4766 = -1.*t392*t4748;
  t4784 = t4196*t4783;
  t4786 = t4766 + t4784;
  t4795 = t4196*t4748;
  t4800 = t392*t4783;
  t4804 = t4795 + t4800;
  t4884 = t3415*t761*t1033;
  t4885 = t3809*t4596;
  t4889 = t4884 + t4885;
  t4880 = -1.*t597*t4720;
  t4891 = -1.*t2764*t4889;
  t4892 = t4880 + t4891;
  t4913 = t2764*t4720;
  t4921 = -1.*t597*t4889;
  t4931 = t4913 + t4921;
  t4897 = t392*t4892;
  t4932 = t4196*t4931;
  t4942 = t4897 + t4932;
  t4950 = t4196*t4892;
  t4954 = -1.*t392*t4931;
  t4965 = t4950 + t4954;
  t5002 = t597*t4720;
  t5003 = t2764*t4889;
  t5008 = t5002 + t5003;
  t5012 = -1.*t392*t5008;
  t5015 = t5012 + t4932;
  t5022 = -1.*t4196*t5008;
  t5024 = t5022 + t4954;
  t5018 = -1.*t302*t5015;
  t5045 = t4233*t5015;
  t5074 = t4196*t5008;
  t5080 = t392*t4931;
  t5086 = t5074 + t5080;
  t5093 = -1.*t302*t5086;
  t5102 = t5045 + t5093;
  t5110 = t217*t5102;
  t5142 = -1.*t1375*t4317*t3474;
  t5144 = t761*t1535;
  t5150 = t5142 + t5144;
  t5152 = -1.*t761*t1375;
  t5159 = -1.*t4317*t3474*t1535;
  t5161 = t5152 + t5159;
  t5151 = t702*t5150;
  t5164 = -1.*t1410*t5161;
  t5167 = t5151 + t5164;
  t5181 = -1.*t3415*t1033*t4317;
  t5182 = t1410*t5150;
  t5187 = t702*t5161;
  t5190 = t5182 + t5187;
  t5191 = t3809*t5190;
  t5198 = t5181 + t5191;
  t5172 = t597*t5167;
  t5199 = t2764*t5198;
  t5209 = t5172 + t5199;
  t5211 = t2764*t5167;
  t5214 = -1.*t597*t5198;
  t5216 = t5211 + t5214;
  t5210 = -1.*t392*t5209;
  t5217 = t4196*t5216;
  t5219 = t5210 + t5217;
  t5224 = t4196*t5209;
  t5225 = t392*t5216;
  t5229 = t5224 + t5225;
  t5292 = t702*t1033*t1375*t4317;
  t5293 = -1.*t1033*t1410*t4317*t1535;
  t5294 = t5292 + t5293;
  t5307 = -1.*t3415*t4317*t3474;
  t5310 = t1033*t1375*t1410*t4317;
  t5322 = t702*t1033*t4317*t1535;
  t5324 = t5310 + t5322;
  t5328 = t3809*t5324;
  t5331 = t5307 + t5328;
  t5304 = t597*t5294;
  t5337 = t2764*t5331;
  t5338 = t5304 + t5337;
  t5345 = t2764*t5294;
  t5346 = -1.*t597*t5331;
  t5348 = t5345 + t5346;
  t5341 = -1.*t392*t5338;
  t5351 = t4196*t5348;
  t5354 = t5341 + t5351;
  t5368 = t4196*t5338;
  t5372 = t392*t5348;
  t5374 = t5368 + t5372;
  t5416 = t1375*t4317*t3474;
  t5417 = -1.*t761*t1535;
  t5424 = t5416 + t5417;
  t5425 = -1.*t1410*t5424;
  t5429 = t5425 + t5187;
  t5431 = t702*t5424;
  t5434 = t1410*t5161;
  t5442 = t5431 + t5434;
  t5430 = t597*t5429;
  t5450 = t2764*t3809*t5442;
  t5452 = t5430 + t5450;
  t5462 = t2764*t5429;
  t5463 = -1.*t3809*t597*t5442;
  t5465 = t5462 + t5463;
  t5460 = -1.*t392*t5452;
  t5466 = t4196*t5465;
  t5467 = t5460 + t5466;
  t5478 = t4196*t5452;
  t5481 = t392*t5465;
  t5482 = t5478 + t5481;
  t5538 = -1.*t1033*t3809*t4317;
  t5542 = t1410*t5424;
  t5549 = t761*t1375;
  t5552 = t4317*t3474*t1535;
  t5555 = t5549 + t5552;
  t5560 = t702*t5555;
  t5565 = t5542 + t5560;
  t5567 = t3415*t5565;
  t5574 = t5538 + t5567;
  t5579 = -1.*t4196*t597*t5574;
  t5580 = -1.*t2764*t392*t5574;
  t5585 = t5579 + t5580;
  t5590 = t2764*t4196*t5574;
  t5598 = -1.*t597*t392*t5574;
  t5603 = t5590 + t5598;
  t5635 = -1.*t702*t5555;
  t5636 = t5425 + t5635;
  t5639 = -1.*t1410*t5555;
  t5644 = t5431 + t5639;
  t5638 = t597*t5636;
  t5652 = t2764*t3809*t5644;
  t5654 = t5638 + t5652;
  t5660 = t2764*t5636;
  t5666 = -1.*t3809*t597*t5644;
  t5668 = t5660 + t5666;
  t5659 = -1.*t392*t5654;
  t5673 = t4196*t5668;
  t5679 = t5659 + t5673;
  t5696 = t4196*t5654;
  t5697 = t392*t5668;
  t5701 = t5696 + t5697;
  t5116 = t302*t5015;
  t5120 = t4233*t5086;
  t5125 = t5116 + t5120;
  t5759 = t3415*t1033*t4317;
  t5760 = t3809*t5565;
  t5761 = t5759 + t5760;
  t5758 = -1.*t597*t5644;
  t5766 = -1.*t2764*t5761;
  t5767 = t5758 + t5766;
  t5771 = t2764*t5644;
  t5773 = -1.*t597*t5761;
  t5776 = t5771 + t5773;
  t5770 = t392*t5767;
  t5784 = t4196*t5776;
  t5788 = t5770 + t5784;
  t5791 = t4196*t5767;
  t5794 = -1.*t392*t5776;
  t5795 = t5791 + t5794;
  t5836 = t597*t5644;
  t5844 = t2764*t5761;
  t5845 = t5836 + t5844;
  t5846 = -1.*t392*t5845;
  t5849 = t5846 + t5784;
  t5856 = -1.*t4196*t5845;
  t5859 = t5856 + t5794;
  t5852 = -1.*t302*t5849;
  t5888 = t4233*t5849;
  t5902 = t4196*t5845;
  t5903 = t392*t5776;
  t5904 = t5902 + t5903;
  t5910 = -1.*t302*t5904;
  t5912 = t5888 + t5910;
  t5918 = t217*t5912;
  t5949 = t3809*t3474;
  t5950 = t1033*t1375*t1410;
  t5961 = t702*t1033*t1535;
  t5962 = t5950 + t5961;
  t5963 = t3415*t5962;
  t5967 = t5949 + t5963;
  t5968 = -1.*t4196*t597*t5967;
  t5969 = -1.*t2764*t392*t5967;
  t5976 = t5968 + t5969;
  t5980 = t2764*t4196*t5967;
  t5981 = -1.*t597*t392*t5967;
  t5982 = t5980 + t5981;
  t6003 = -1.*t1033*t1375*t1410;
  t6005 = -1.*t702*t1033*t1535;
  t6006 = t6003 + t6005;
  t6017 = t702*t1033*t1375;
  t6021 = -1.*t1033*t1410*t1535;
  t6023 = t6017 + t6021;
  t6015 = t597*t6006;
  t6026 = t2764*t3809*t6023;
  t6031 = t6015 + t6026;
  t6039 = t2764*t6006;
  t6041 = -1.*t3809*t597*t6023;
  t6045 = t6039 + t6041;
  t6032 = -1.*t392*t6031;
  t6049 = t4196*t6045;
  t6050 = t6032 + t6049;
  t6052 = t4196*t6031;
  t6054 = t392*t6045;
  t6055 = t6052 + t6054;
  t6051 = t302*t6050;
  t6062 = t4233*t6055;
  t6065 = t6051 + t6062;
  t6067 = t217*t6065;
  t6070 = t4233*t6050;
  t6071 = -1.*t302*t6055;
  t6072 = t6070 + t6071;
  t6073 = -1.*t4289*t6072;
  t6075 = t6067 + t6073;
  t6100 = -1.*t3415*t3474;
  t6105 = t3809*t5962;
  t6106 = t6100 + t6105;
  t6099 = -1.*t597*t6023;
  t6119 = -1.*t2764*t6106;
  t6122 = t6099 + t6119;
  t6126 = t2764*t6023;
  t6128 = -1.*t597*t6106;
  t6135 = t6126 + t6128;
  t6124 = t392*t6122;
  t6136 = t4196*t6135;
  t6138 = t6124 + t6136;
  t6144 = t4196*t6122;
  t6148 = -1.*t392*t6135;
  t6150 = t6144 + t6148;
  t6186 = t597*t6023;
  t6187 = t2764*t6106;
  t6189 = t6186 + t6187;
  t6190 = -1.*t392*t6189;
  t6191 = t6190 + t6136;
  t6195 = -1.*t4196*t6189;
  t6199 = t6195 + t6148;
  t6194 = -1.*t302*t6191;
  t6214 = t4233*t6191;
  t6226 = t4196*t6189;
  t6239 = t392*t6135;
  t6244 = t6226 + t6239;
  t6254 = -1.*t302*t6244;
  t6258 = t6214 + t6254;
  t6262 = t217*t6258;
  t6312 = -1.*t702*t1375*t3474;
  t6337 = t1410*t3474*t1535;
  t6338 = t6312 + t6337;
  t6345 = -1.*t3415*t1033;
  t6347 = -1.*t1375*t1410*t3474;
  t6348 = -1.*t702*t3474*t1535;
  t6349 = t6347 + t6348;
  t6351 = t3809*t6349;
  t6352 = t6345 + t6351;
  t6342 = t597*t6338;
  t6354 = t2764*t6352;
  t6356 = t6342 + t6354;
  t6361 = t2764*t6338;
  t6363 = -1.*t597*t6352;
  t6364 = t6361 + t6363;
  t6359 = -1.*t392*t6356;
  t6367 = t4196*t6364;
  t6369 = t6359 + t6367;
  t6378 = t4196*t6356;
  t6383 = t392*t6364;
  t6384 = t6378 + t6383;
  t4224 = t302*t4218;
  t4263 = t4233*t4255;
  t4270 = t4224 + t4263;
  t4290 = t4233*t4218;
  t4291 = -1.*t302*t4255;
  t4294 = t4290 + t4291;
  t4462 = t302*t4456;
  t4471 = t4233*t4469;
  t4473 = t4462 + t4471;
  t4483 = t4233*t4456;
  t4486 = -1.*t302*t4469;
  t4490 = t4483 + t4486;
  t4612 = t302*t4611;
  t4630 = t4233*t4628;
  t4631 = t4612 + t4630;
  t4637 = t4233*t4611;
  t4664 = -1.*t302*t4628;
  t4673 = t4637 + t4664;
  t4794 = t302*t4786;
  t4808 = t4233*t4804;
  t4810 = t4794 + t4808;
  t4848 = t4233*t4786;
  t4851 = -1.*t302*t4804;
  t4856 = t4848 + t4851;
  t4949 = -1.*t302*t4942;
  t4966 = t4233*t4965;
  t4968 = t4949 + t4966;
  t4978 = t4233*t4942;
  t4982 = t302*t4965;
  t4988 = t4978 + t4982;
  t5028 = t4233*t5024;
  t5037 = t5018 + t5028;
  t5050 = t302*t5024;
  t5062 = t5045 + t5050;
  t5088 = -1.*t4233*t5086;
  t5089 = t5018 + t5088;
  t6487 = t4289*t5102;
  t5223 = t302*t5219;
  t5235 = t4233*t5229;
  t5247 = t5223 + t5235;
  t5256 = t4233*t5219;
  t5258 = -1.*t302*t5229;
  t5263 = t5256 + t5258;
  t5360 = t302*t5354;
  t5376 = t4233*t5374;
  t5378 = t5360 + t5376;
  t5391 = t4233*t5354;
  t5396 = -1.*t302*t5374;
  t5398 = t5391 + t5396;
  t5469 = t302*t5467;
  t5484 = t4233*t5482;
  t5490 = t5469 + t5484;
  t5506 = t4233*t5467;
  t5508 = -1.*t302*t5482;
  t5514 = t5506 + t5508;
  t5588 = t302*t5585;
  t5607 = t4233*t5603;
  t5609 = t5588 + t5607;
  t5618 = t4233*t5585;
  t5625 = -1.*t302*t5603;
  t5626 = t5618 + t5625;
  t5680 = t302*t5679;
  t5709 = t4233*t5701;
  t5712 = t5680 + t5709;
  t5715 = t4233*t5679;
  t5721 = -1.*t302*t5701;
  t5722 = t5715 + t5721;
  t5126 = t4289*t5125;
  t5134 = t5126 + t5110;
  t5789 = -1.*t302*t5788;
  t5797 = t4233*t5795;
  t5803 = t5789 + t5797;
  t5808 = t4233*t5788;
  t5819 = t302*t5795;
  t5824 = t5808 + t5819;
  t5865 = t4233*t5859;
  t5883 = t5852 + t5865;
  t5889 = t302*t5859;
  t5891 = t5888 + t5889;
  t5906 = -1.*t4233*t5904;
  t5907 = t5852 + t5906;
  t5924 = t302*t5849;
  t5930 = t4233*t5904;
  t5937 = t5924 + t5930;
  t6622 = t4289*t5912;
  t5979 = t302*t5976;
  t5986 = t4233*t5982;
  t5988 = t5979 + t5986;
  t5993 = t4233*t5976;
  t5994 = -1.*t302*t5982;
  t5995 = t5993 + t5994;
  t6651 = t4289*t6065;
  t6654 = t217*t6072;
  t6668 = t6651 + t6654;
  t6141 = -1.*t302*t6138;
  t6151 = t4233*t6150;
  t6154 = t6141 + t6151;
  t6166 = t4233*t6138;
  t6167 = t302*t6150;
  t6172 = t6166 + t6167;
  t6204 = t4233*t6199;
  t6208 = t6194 + t6204;
  t6218 = t302*t6199;
  t6219 = t6214 + t6218;
  t6248 = -1.*t4233*t6244;
  t6251 = t6194 + t6248;
  t6275 = t302*t6191;
  t6276 = t4233*t6244;
  t6277 = t6275 + t6276;
  t6695 = t4289*t6258;
  t6374 = t302*t6369;
  t6385 = t4233*t6384;
  t6392 = t6374 + t6385;
  t6396 = t4233*t6369;
  t6399 = -1.*t302*t6384;
  t6400 = t6396 + t6399;
  p_output1[0]=(t217*t5247 - 1.*t4289*t5263)*var2[3] + (t217*t4270 - 1.*t4289*t4294)*var2[4] + (t217*t4473 - 1.*t4289*t4490)*var2[5] + (t217*t4810 - 1.*t4289*t4856)*var2[13] + (t217*t4631 - 1.*t4289*t4673)*var2[14] + (-1.*t4289*t4968 + t217*t4988)*var2[15] + (-1.*t4289*t5037 + t217*t5062)*var2[16] + (-1.*t4289*t5089 + t5110)*var2[17] + t5134*var2[18];
  p_output1[1]=(-1.*t4289*t5102 + t217*t5125)*var2[3] + (t217*t5378 - 1.*t4289*t5398)*var2[4] + (t217*t5490 - 1.*t4289*t5514)*var2[5] + (t217*t5712 - 1.*t4289*t5722)*var2[13] + (t217*t5609 - 1.*t4289*t5626)*var2[14] + (-1.*t4289*t5803 + t217*t5824)*var2[15] + (-1.*t4289*t5883 + t217*t5891)*var2[16] + (-1.*t4289*t5907 + t5918)*var2[17] + (t5918 + t4289*t5937)*var2[18];
  p_output1[2]=(t217*t6392 - 1.*t4289*t6400)*var2[4] + t6075*var2[5] + t6075*var2[13] + (t217*t5988 - 1.*t4289*t5995)*var2[14] + (-1.*t4289*t6154 + t217*t6172)*var2[15] + (-1.*t4289*t6208 + t217*t6219)*var2[16] + (-1.*t4289*t6251 + t6262)*var2[17] + (t6262 + t4289*t6277)*var2[18];
  p_output1[3]=(t4289*t5247 + t217*t5263)*var2[3] + (t4270*t4289 + t217*t4294)*var2[4] + (t4289*t4473 + t217*t4490)*var2[5] + (t4289*t4810 + t217*t4856)*var2[13] + (t4289*t4631 + t217*t4673)*var2[14] + (t217*t4968 + t4289*t4988)*var2[15] + (t217*t5037 + t4289*t5062)*var2[16] + (t217*t5089 + t6487)*var2[17] + (-1.*t217*t5125 + t6487)*var2[18];
  p_output1[4]=t5134*var2[3] + (t4289*t5378 + t217*t5398)*var2[4] + (t4289*t5490 + t217*t5514)*var2[5] + (t4289*t5712 + t217*t5722)*var2[13] + (t4289*t5609 + t217*t5626)*var2[14] + (t217*t5803 + t4289*t5824)*var2[15] + (t217*t5883 + t4289*t5891)*var2[16] + (t217*t5907 + t6622)*var2[17] + (-1.*t217*t5937 + t6622)*var2[18];
  p_output1[5]=(t4289*t6392 + t217*t6400)*var2[4] + t6668*var2[5] + t6668*var2[13] + (t4289*t5988 + t217*t5995)*var2[14] + (t217*t6154 + t4289*t6172)*var2[15] + (t217*t6208 + t4289*t6219)*var2[16] + (t217*t6251 + t6695)*var2[17] + (-1.*t217*t6277 + t6695)*var2[18];
  p_output1[6]=(-1.*t3415*t5190 + t5538)*var2[3] + (-1.*t3415*t3870 - 1.*t3474*t3809*t761)*var2[4] - 1.*t3415*t4412*var2[5] - 1.*t3415*t4720*var2[13] + t4889*var2[14];
  p_output1[7]=(-1.*t3415*t4596 + t1033*t3809*t761)*var2[3] + (-1.*t3474*t3809*t4317 - 1.*t3415*t5324)*var2[4] - 1.*t3415*t5442*var2[5] - 1.*t3415*t5644*var2[13] + t5761*var2[14];
  p_output1[8]=(-1.*t1033*t3809 - 1.*t3415*t6349)*var2[4] - 1.*t3415*t6023*var2[5] - 1.*t3415*t6023*var2[13] + t6106*var2[14];
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

#include "dR_RightAnkleJoint_mex.hh"

namespace SymExpression
{

void dR_RightAnkleJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
