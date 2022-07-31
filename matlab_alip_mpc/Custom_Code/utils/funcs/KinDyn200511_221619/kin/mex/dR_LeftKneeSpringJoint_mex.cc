/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:50 GMT-04:00
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
  double t2500;
  double t1730;
  double t3152;
  double t2211;
  double t3493;
  double t1449;
  double t1684;
  double t2397;
  double t3548;
  double t3553;
  double t3737;
  double t3764;
  double t3767;
  double t3890;
  double t3937;
  double t3942;
  double t3961;
  double t3968;
  double t3973;
  double t3982;
  double t3983;
  double t3985;
  double t3993;
  double t1242;
  double t1399;
  double t3998;
  double t359;
  double t4059;
  double t4064;
  double t4077;
  double t4093;
  double t4100;
  double t4112;
  double t4055;
  double t4088;
  double t4091;
  double t4006;
  double t4092;
  double t4117;
  double t4121;
  double t4133;
  double t4137;
  double t4153;
  double t4269;
  double t4277;
  double t4244;
  double t4258;
  double t4259;
  double t4291;
  double t4297;
  double t4319;
  double t4324;
  double t4325;
  double t4441;
  double t4451;
  double t4452;
  double t4408;
  double t4411;
  double t4413;
  double t4419;
  double t4424;
  double t4426;
  double t4429;
  double t4456;
  double t4465;
  double t4472;
  double t4473;
  double t4482;
  double t4610;
  double t4611;
  double t4612;
  double t4583;
  double t4595;
  double t4601;
  double t4634;
  double t4646;
  double t4647;
  double t4567;
  double t4606;
  double t4613;
  double t4614;
  double t4617;
  double t4630;
  double t4633;
  double t4648;
  double t4650;
  double t4654;
  double t4655;
  double t4662;
  double t4699;
  double t4702;
  double t4709;
  double t4714;
  double t4724;
  double t4725;
  double t4733;
  double t4735;
  double t4738;
  double t4743;
  double t4766;
  double t4777;
  double t4790;
  double t4756;
  double t4791;
  double t4796;
  double t4798;
  double t4841;
  double t4843;
  double t4847;
  double t4854;
  double t4856;
  double t4857;
  double t4859;
  double t4863;
  double t4868;
  double t4869;
  double t4873;
  double t4876;
  double t4933;
  double t4939;
  double t4925;
  double t4928;
  double t4930;
  double t4931;
  double t4942;
  double t4946;
  double t4949;
  double t4950;
  double t4956;
  double t4999;
  double t5008;
  double t4983;
  double t4987;
  double t4988;
  double t5009;
  double t5011;
  double t5014;
  double t5016;
  double t5022;
  double t5074;
  double t5081;
  double t5086;
  double t5054;
  double t5055;
  double t5058;
  double t5064;
  double t5067;
  double t5068;
  double t5071;
  double t5087;
  double t5092;
  double t5097;
  double t5102;
  double t5105;
  double t5143;
  double t5146;
  double t5147;
  double t5148;
  double t5150;
  double t5154;
  double t5158;
  double t5160;
  double t5161;
  double t5162;
  double t5183;
  double t5185;
  double t5188;
  double t5174;
  double t5193;
  double t5194;
  double t5195;
  double t4829;
  double t4830;
  double t4831;
  double t5260;
  double t5272;
  double t5273;
  double t5274;
  double t5278;
  double t5285;
  double t5358;
  double t5363;
  double t5365;
  double t5347;
  double t5350;
  double t5354;
  double t5357;
  double t5369;
  double t5383;
  double t5388;
  double t5389;
  double t5391;
  double t5385;
  double t5392;
  double t5395;
  double t5396;
  double t5399;
  double t5401;
  double t5407;
  double t5415;
  double t5417;
  double t5436;
  double t5439;
  double t5440;
  double t5441;
  double t5451;
  double t5455;
  double t5463;
  double t5465;
  double t5468;
  double t5469;
  double t5507;
  double t5509;
  double t5510;
  double t5496;
  double t5516;
  double t5517;
  double t5522;
  double t5600;
  double t5606;
  double t5609;
  double t5568;
  double t5576;
  double t5577;
  double t5582;
  double t5588;
  double t5589;
  double t5594;
  double t5612;
  double t5613;
  double t5616;
  double t5618;
  double t5621;
  double t3986;
  double t4000;
  double t4002;
  double t4010;
  double t4012;
  double t4021;
  double t4125;
  double t4176;
  double t4180;
  double t4206;
  double t4212;
  double t4220;
  double t4310;
  double t4329;
  double t4332;
  double t4388;
  double t4389;
  double t4396;
  double t4466;
  double t4483;
  double t4504;
  double t4527;
  double t4534;
  double t4537;
  double t4652;
  double t4665;
  double t4669;
  double t4672;
  double t4673;
  double t4678;
  double t4728;
  double t4746;
  double t4755;
  double t4757;
  double t4815;
  double t4820;
  double t5758;
  double t4877;
  double t4880;
  double t4882;
  double t4893;
  double t4900;
  double t4904;
  double t4947;
  double t4957;
  double t4961;
  double t4965;
  double t4966;
  double t4971;
  double t5012;
  double t5023;
  double t5028;
  double t5034;
  double t5038;
  double t5040;
  double t5094;
  double t5106;
  double t5108;
  double t5129;
  double t5132;
  double t5133;
  double t5156;
  double t5163;
  double t5165;
  double t5175;
  double t5201;
  double t5209;
  double t5834;
  double t5215;
  double t5223;
  double t5226;
  double t4832;
  double t4834;
  double t5293;
  double t5296;
  double t5299;
  double t5306;
  double t5308;
  double t5310;
  double t5886;
  double t5888;
  double t5889;
  double t5456;
  double t5474;
  double t5485;
  double t5497;
  double t5527;
  double t5529;
  double t5909;
  double t5546;
  double t5548;
  double t5549;
  double t5615;
  double t5622;
  double t5640;
  double t5644;
  double t5647;
  double t5648;
  t2500 = Cos(var1[3]);
  t1730 = Cos(var1[5]);
  t3152 = Sin(var1[4]);
  t2211 = Sin(var1[3]);
  t3493 = Sin(var1[5]);
  t1449 = Cos(var1[7]);
  t1684 = Cos(var1[6]);
  t2397 = -1.*t1730*t2211;
  t3548 = t2500*t3152*t3493;
  t3553 = t2397 + t3548;
  t3737 = t1684*t3553;
  t3764 = t2500*t1730*t3152;
  t3767 = t2211*t3493;
  t3890 = t3764 + t3767;
  t3937 = Sin(var1[6]);
  t3942 = t3890*t3937;
  t3961 = t3737 + t3942;
  t3968 = t1449*t3961;
  t3973 = Cos(var1[4]);
  t3982 = Sin(var1[7]);
  t3983 = -1.*t2500*t3973*t3982;
  t3985 = t3968 + t3983;
  t3993 = Cos(var1[9]);
  t1242 = Cos(var1[8]);
  t1399 = Sin(var1[9]);
  t3998 = Sin(var1[8]);
  t359 = Cos(var1[10]);
  t4059 = t1730*t2211;
  t4064 = -1.*t2500*t3152*t3493;
  t4077 = t4059 + t4064;
  t4093 = t1684*t4077;
  t4100 = -1.*t3890*t3937;
  t4112 = t4093 + t4100;
  t4055 = t1684*t3890;
  t4088 = t4077*t3937;
  t4091 = t4055 + t4088;
  t4006 = Sin(var1[10]);
  t4092 = t1242*t4091*t3982;
  t4117 = t4112*t3998;
  t4121 = t4092 + t4117;
  t4133 = t1242*t4112;
  t4137 = -1.*t4091*t3982*t3998;
  t4153 = t4133 + t4137;
  t4269 = -1.*t1684*t3553;
  t4277 = t4269 + t4100;
  t4244 = -1.*t3553*t3937;
  t4258 = t4055 + t4244;
  t4259 = t1242*t4258*t3982;
  t4291 = t4277*t3998;
  t4297 = t4259 + t4291;
  t4319 = t1242*t4277;
  t4324 = -1.*t4258*t3982*t3998;
  t4325 = t4319 + t4324;
  t4441 = t2500*t3973*t1730*t1684;
  t4451 = -1.*t2500*t3973*t3493*t3937;
  t4452 = t4441 + t4451;
  t4408 = -1.*t2500*t1449*t3152;
  t4411 = t2500*t3973*t1684*t3493;
  t4413 = t2500*t3973*t1730*t3937;
  t4419 = t4411 + t4413;
  t4424 = t4419*t3982;
  t4426 = t4408 + t4424;
  t4429 = t1242*t4426;
  t4456 = t4452*t3998;
  t4465 = t4429 + t4456;
  t4472 = t1242*t4452;
  t4473 = -1.*t4426*t3998;
  t4482 = t4472 + t4473;
  t4610 = -1.*t1730*t2211*t3152;
  t4611 = t2500*t3493;
  t4612 = t4610 + t4611;
  t4583 = -1.*t2500*t1730;
  t4595 = -1.*t2211*t3152*t3493;
  t4601 = t4583 + t4595;
  t4634 = t1684*t4612;
  t4646 = -1.*t4601*t3937;
  t4647 = t4634 + t4646;
  t4567 = -1.*t3973*t1449*t2211;
  t4606 = t1684*t4601;
  t4613 = t4612*t3937;
  t4614 = t4606 + t4613;
  t4617 = t4614*t3982;
  t4630 = t4567 + t4617;
  t4633 = t1242*t4630;
  t4648 = t4647*t3998;
  t4650 = t4633 + t4648;
  t4654 = t1242*t4647;
  t4655 = -1.*t4630*t3998;
  t4662 = t4654 + t4655;
  t4699 = t2500*t3973*t1449;
  t4702 = t3961*t3982;
  t4709 = t4699 + t4702;
  t4714 = -1.*t1242*t4709;
  t4724 = -1.*t4258*t3998;
  t4725 = t4714 + t4724;
  t4733 = t1242*t4258;
  t4735 = -1.*t4709*t3998;
  t4738 = t4733 + t4735;
  t4743 = t3993*t4738;
  t4766 = t1242*t4709;
  t4777 = t4258*t3998;
  t4790 = t4766 + t4777;
  t4756 = -1.*t1399*t4738;
  t4791 = -1.*t1399*t4790;
  t4796 = t4791 + t4743;
  t4798 = t4006*t4796;
  t4841 = t2500*t1730;
  t4843 = t2211*t3152*t3493;
  t4847 = t4841 + t4843;
  t4854 = t1684*t4847;
  t4856 = t1730*t2211*t3152;
  t4857 = -1.*t2500*t3493;
  t4859 = t4856 + t4857;
  t4863 = t4859*t3937;
  t4868 = t4854 + t4863;
  t4869 = t1449*t4868;
  t4873 = -1.*t3973*t2211*t3982;
  t4876 = t4869 + t4873;
  t4933 = -1.*t4859*t3937;
  t4939 = t4606 + t4933;
  t4925 = t1684*t4859;
  t4928 = t4601*t3937;
  t4930 = t4925 + t4928;
  t4931 = t1242*t4930*t3982;
  t4942 = t4939*t3998;
  t4946 = t4931 + t4942;
  t4949 = t1242*t4939;
  t4950 = -1.*t4930*t3982*t3998;
  t4956 = t4949 + t4950;
  t4999 = -1.*t1684*t4847;
  t5008 = t4999 + t4933;
  t4983 = -1.*t4847*t3937;
  t4987 = t4925 + t4983;
  t4988 = t1242*t4987*t3982;
  t5009 = t5008*t3998;
  t5011 = t4988 + t5009;
  t5014 = t1242*t5008;
  t5016 = -1.*t4987*t3982*t3998;
  t5022 = t5014 + t5016;
  t5074 = t3973*t1730*t1684*t2211;
  t5081 = -1.*t3973*t2211*t3493*t3937;
  t5086 = t5074 + t5081;
  t5054 = -1.*t1449*t2211*t3152;
  t5055 = t3973*t1684*t2211*t3493;
  t5058 = t3973*t1730*t2211*t3937;
  t5064 = t5055 + t5058;
  t5067 = t5064*t3982;
  t5068 = t5054 + t5067;
  t5071 = t1242*t5068;
  t5087 = t5086*t3998;
  t5092 = t5071 + t5087;
  t5097 = t1242*t5086;
  t5102 = -1.*t5068*t3998;
  t5105 = t5097 + t5102;
  t5143 = t3973*t1449*t2211;
  t5146 = t4868*t3982;
  t5147 = t5143 + t5146;
  t5148 = -1.*t1242*t5147;
  t5150 = -1.*t4987*t3998;
  t5154 = t5148 + t5150;
  t5158 = t1242*t4987;
  t5160 = -1.*t5147*t3998;
  t5161 = t5158 + t5160;
  t5162 = t3993*t5161;
  t5183 = t1242*t5147;
  t5185 = t4987*t3998;
  t5188 = t5183 + t5185;
  t5174 = -1.*t1399*t5161;
  t5193 = -1.*t1399*t5188;
  t5194 = t5193 + t5162;
  t5195 = t4006*t5194;
  t4829 = t3993*t4790;
  t4830 = t1399*t4738;
  t4831 = t4829 + t4830;
  t5260 = t3973*t1684*t3493;
  t5272 = t3973*t1730*t3937;
  t5273 = t5260 + t5272;
  t5274 = t1449*t5273;
  t5278 = t3152*t3982;
  t5285 = t5274 + t5278;
  t5358 = -1.*t3973*t1684*t3493;
  t5363 = -1.*t3973*t1730*t3937;
  t5365 = t5358 + t5363;
  t5347 = t3973*t1730*t1684;
  t5350 = -1.*t3973*t3493*t3937;
  t5354 = t5347 + t5350;
  t5357 = t1242*t5354*t3982;
  t5369 = t5365*t3998;
  t5383 = t5357 + t5369;
  t5388 = t1242*t5365;
  t5389 = -1.*t5354*t3982*t3998;
  t5391 = t5388 + t5389;
  t5385 = -1.*t1399*t5383;
  t5392 = t3993*t5391;
  t5395 = t5385 + t5392;
  t5396 = -1.*t359*t5395;
  t5399 = t3993*t5383;
  t5401 = t1399*t5391;
  t5407 = t5399 + t5401;
  t5415 = t4006*t5407;
  t5417 = t5396 + t5415;
  t5436 = -1.*t1449*t3152;
  t5439 = t5273*t3982;
  t5440 = t5436 + t5439;
  t5441 = -1.*t1242*t5440;
  t5451 = -1.*t5354*t3998;
  t5455 = t5441 + t5451;
  t5463 = t1242*t5354;
  t5465 = -1.*t5440*t3998;
  t5468 = t5463 + t5465;
  t5469 = t3993*t5468;
  t5507 = t1242*t5440;
  t5509 = t5354*t3998;
  t5510 = t5507 + t5509;
  t5496 = -1.*t1399*t5468;
  t5516 = -1.*t1399*t5510;
  t5517 = t5516 + t5469;
  t5522 = t4006*t5517;
  t5600 = -1.*t1730*t1684*t3152;
  t5606 = t3152*t3493*t3937;
  t5609 = t5600 + t5606;
  t5568 = -1.*t3973*t1449;
  t5576 = -1.*t1684*t3152*t3493;
  t5577 = -1.*t1730*t3152*t3937;
  t5582 = t5576 + t5577;
  t5588 = t5582*t3982;
  t5589 = t5568 + t5588;
  t5594 = t1242*t5589;
  t5612 = t5609*t3998;
  t5613 = t5594 + t5612;
  t5616 = t1242*t5609;
  t5618 = -1.*t5589*t3998;
  t5621 = t5616 + t5618;
  t3986 = -1.*t1242*t1399*t3985;
  t4000 = -1.*t3993*t3985*t3998;
  t4002 = t3986 + t4000;
  t4010 = t3993*t1242*t3985;
  t4012 = -1.*t1399*t3985*t3998;
  t4021 = t4010 + t4012;
  t4125 = -1.*t1399*t4121;
  t4176 = t3993*t4153;
  t4180 = t4125 + t4176;
  t4206 = t3993*t4121;
  t4212 = t1399*t4153;
  t4220 = t4206 + t4212;
  t4310 = -1.*t1399*t4297;
  t4329 = t3993*t4325;
  t4332 = t4310 + t4329;
  t4388 = t3993*t4297;
  t4389 = t1399*t4325;
  t4396 = t4388 + t4389;
  t4466 = -1.*t1399*t4465;
  t4483 = t3993*t4482;
  t4504 = t4466 + t4483;
  t4527 = t3993*t4465;
  t4534 = t1399*t4482;
  t4537 = t4527 + t4534;
  t4652 = -1.*t1399*t4650;
  t4665 = t3993*t4662;
  t4669 = t4652 + t4665;
  t4672 = t3993*t4650;
  t4673 = t1399*t4662;
  t4678 = t4672 + t4673;
  t4728 = t1399*t4725;
  t4746 = t4728 + t4743;
  t4755 = t3993*t4725;
  t4757 = t4755 + t4756;
  t4815 = -1.*t3993*t4790;
  t4820 = t4815 + t4756;
  t5758 = t359*t4796;
  t4877 = -1.*t1242*t1399*t4876;
  t4880 = -1.*t3993*t4876*t3998;
  t4882 = t4877 + t4880;
  t4893 = t3993*t1242*t4876;
  t4900 = -1.*t1399*t4876*t3998;
  t4904 = t4893 + t4900;
  t4947 = -1.*t1399*t4946;
  t4957 = t3993*t4956;
  t4961 = t4947 + t4957;
  t4965 = t3993*t4946;
  t4966 = t1399*t4956;
  t4971 = t4965 + t4966;
  t5012 = -1.*t1399*t5011;
  t5023 = t3993*t5022;
  t5028 = t5012 + t5023;
  t5034 = t3993*t5011;
  t5038 = t1399*t5022;
  t5040 = t5034 + t5038;
  t5094 = -1.*t1399*t5092;
  t5106 = t3993*t5105;
  t5108 = t5094 + t5106;
  t5129 = t3993*t5092;
  t5132 = t1399*t5105;
  t5133 = t5129 + t5132;
  t5156 = t1399*t5154;
  t5163 = t5156 + t5162;
  t5165 = t3993*t5154;
  t5175 = t5165 + t5174;
  t5201 = -1.*t3993*t5188;
  t5209 = t5201 + t5174;
  t5834 = t359*t5194;
  t5215 = t3993*t5188;
  t5223 = t1399*t5161;
  t5226 = t5215 + t5223;
  t4832 = t359*t4831;
  t4834 = t4798 + t4832;
  t5293 = -1.*t1242*t1399*t5285;
  t5296 = -1.*t3993*t5285*t3998;
  t5299 = t5293 + t5296;
  t5306 = t3993*t1242*t5285;
  t5308 = -1.*t1399*t5285*t3998;
  t5310 = t5306 + t5308;
  t5886 = t4006*t5395;
  t5888 = t359*t5407;
  t5889 = t5886 + t5888;
  t5456 = t1399*t5455;
  t5474 = t5456 + t5469;
  t5485 = t3993*t5455;
  t5497 = t5485 + t5496;
  t5527 = -1.*t3993*t5510;
  t5529 = t5527 + t5496;
  t5909 = t359*t5517;
  t5546 = t3993*t5510;
  t5548 = t1399*t5468;
  t5549 = t5546 + t5548;
  t5615 = -1.*t1399*t5613;
  t5622 = t3993*t5621;
  t5640 = t5615 + t5622;
  t5644 = t3993*t5613;
  t5647 = t1399*t5621;
  t5648 = t5644 + t5647;
  p_output1[0]=(-1.*t359*t4669 + t4006*t4678)*var2[3] + (-1.*t359*t4504 + t4006*t4537)*var2[4] + (-1.*t359*t4180 + t4006*t4220)*var2[5] + (-1.*t359*t4332 + t4006*t4396)*var2[6] + (-1.*t359*t4002 + t4006*t4021)*var2[7] + (t4006*t4746 - 1.*t359*t4757)*var2[8] + (t4798 - 1.*t359*t4820)*var2[9] + t4834*var2[10];
  p_output1[1]=(-1.*t359*t4796 + t4006*t4831)*var2[3] + (-1.*t359*t5108 + t4006*t5133)*var2[4] + (-1.*t359*t4961 + t4006*t4971)*var2[5] + (-1.*t359*t5028 + t4006*t5040)*var2[6] + (-1.*t359*t4882 + t4006*t4904)*var2[7] + (t4006*t5163 - 1.*t359*t5175)*var2[8] + (t5195 - 1.*t359*t5209)*var2[9] + (t5195 + t359*t5226)*var2[10];
  p_output1[2]=(-1.*t359*t5640 + t4006*t5648)*var2[4] + t5417*var2[5] + t5417*var2[6] + (-1.*t359*t5299 + t4006*t5310)*var2[7] + (t4006*t5474 - 1.*t359*t5497)*var2[8] + (t5522 - 1.*t359*t5529)*var2[9] + (t5522 + t359*t5549)*var2[10];
  p_output1[3]=(t4006*t4669 + t359*t4678)*var2[3] + (t4006*t4504 + t359*t4537)*var2[4] + (t4006*t4180 + t359*t4220)*var2[5] + (t4006*t4332 + t359*t4396)*var2[6] + (t4002*t4006 + t359*t4021)*var2[7] + (t359*t4746 + t4006*t4757)*var2[8] + (t4006*t4820 + t5758)*var2[9] + (-1.*t4006*t4831 + t5758)*var2[10];
  p_output1[4]=t4834*var2[3] + (t4006*t5108 + t359*t5133)*var2[4] + (t4006*t4961 + t359*t4971)*var2[5] + (t4006*t5028 + t359*t5040)*var2[6] + (t4006*t4882 + t359*t4904)*var2[7] + (t359*t5163 + t4006*t5175)*var2[8] + (t4006*t5209 + t5834)*var2[9] + (-1.*t4006*t5226 + t5834)*var2[10];
  p_output1[5]=(t4006*t5640 + t359*t5648)*var2[4] + t5889*var2[5] + t5889*var2[6] + (t4006*t5299 + t359*t5310)*var2[7] + (t359*t5474 + t4006*t5497)*var2[8] + (t4006*t5529 + t5909)*var2[9] + (-1.*t4006*t5549 + t5909)*var2[10];
  p_output1[6]=(-1.*t1449*t4614 + t4873)*var2[3] + (-1.*t2500*t3152*t3982 - 1.*t1449*t4419)*var2[4] - 1.*t1449*t4091*var2[5] - 1.*t1449*t4258*var2[6] + t4709*var2[7];
  p_output1[7]=(-1.*t1449*t3961 + t2500*t3973*t3982)*var2[3] + (-1.*t2211*t3152*t3982 - 1.*t1449*t5064)*var2[4] - 1.*t1449*t4930*var2[5] - 1.*t1449*t4987*var2[6] + t5147*var2[7];
  p_output1[8]=(-1.*t3973*t3982 - 1.*t1449*t5582)*var2[4] - 1.*t1449*t5354*var2[5] - 1.*t1449*t5354*var2[6] + t5440*var2[7];
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

#include "dR_LeftKneeSpringJoint_mex.hh"

namespace SymExpression
{

void dR_LeftKneeSpringJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
