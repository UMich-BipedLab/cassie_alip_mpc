/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:12 GMT-04:00
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
  double t2960;
  double t3148;
  double t3161;
  double t3215;
  double t1477;
  double t3513;
  double t3810;
  double t3200;
  double t3537;
  double t3544;
  double t1135;
  double t3828;
  double t3839;
  double t3843;
  double t3850;
  double t3865;
  double t3869;
  double t3883;
  double t3907;
  double t3929;
  double t3938;
  double t3768;
  double t3935;
  double t3936;
  double t867;
  double t3965;
  double t3967;
  double t3974;
  double t166;
  double t4044;
  double t4042;
  double t4059;
  double t4061;
  double t4075;
  double t4078;
  double t4081;
  double t4071;
  double t4097;
  double t4103;
  double t4121;
  double t4122;
  double t4148;
  double t3982;
  double t4112;
  double t4151;
  double t4161;
  double t4185;
  double t4194;
  double t4206;
  double t4286;
  double t4292;
  double t4301;
  double t4302;
  double t4304;
  double t4328;
  double t4333;
  double t4335;
  double t4341;
  double t4420;
  double t4433;
  double t4439;
  double t4451;
  double t4435;
  double t4454;
  double t4455;
  double t4512;
  double t4520;
  double t4538;
  double t4584;
  double t4585;
  double t4586;
  double t4581;
  double t4588;
  double t4589;
  double t4594;
  double t4595;
  double t4599;
  double t4604;
  double t4655;
  double t4656;
  double t4657;
  double t4642;
  double t4665;
  double t4673;
  double t4678;
  double t4756;
  double t4761;
  double t4763;
  double t4778;
  double t4780;
  double t4781;
  double t4769;
  double t4790;
  double t4794;
  double t4797;
  double t4805;
  double t4808;
  double t4810;
  double t4814;
  double t4816;
  double t4795;
  double t4830;
  double t4835;
  double t4840;
  double t4842;
  double t4844;
  double t4891;
  double t4901;
  double t4909;
  double t4935;
  double t4936;
  double t4937;
  double t4939;
  double t4941;
  double t4944;
  double t4925;
  double t4945;
  double t4949;
  double t4954;
  double t4958;
  double t4959;
  double t4991;
  double t5011;
  double t5012;
  double t5016;
  double t5026;
  double t5031;
  double t5032;
  double t5038;
  double t5029;
  double t5039;
  double t5042;
  double t5053;
  double t5062;
  double t5083;
  double t5131;
  double t5132;
  double t5136;
  double t5138;
  double t5146;
  double t5149;
  double t5155;
  double t5162;
  double t5165;
  double t5228;
  double t5231;
  double t5239;
  double t5248;
  double t5237;
  double t5249;
  double t5254;
  double t5273;
  double t5277;
  double t5287;
  double t4731;
  double t4740;
  double t4741;
  double t5366;
  double t5371;
  double t5372;
  double t5359;
  double t5374;
  double t5375;
  double t5379;
  double t5385;
  double t5388;
  double t5402;
  double t5433;
  double t5434;
  double t5435;
  double t5413;
  double t5438;
  double t5443;
  double t5444;
  double t5492;
  double t5493;
  double t5494;
  double t5500;
  double t5507;
  double t5509;
  double t5549;
  double t5566;
  double t5578;
  double t5588;
  double t5589;
  double t5593;
  double t5581;
  double t5594;
  double t5595;
  double t5600;
  double t5605;
  double t5606;
  double t5599;
  double t5608;
  double t5612;
  double t5613;
  double t5614;
  double t5616;
  double t5620;
  double t5624;
  double t5630;
  double t5652;
  double t5664;
  double t5667;
  double t5651;
  double t5672;
  double t5678;
  double t5689;
  double t5704;
  double t5706;
  double t5711;
  double t5748;
  double t5750;
  double t5751;
  double t5732;
  double t5752;
  double t5755;
  double t5758;
  double t5810;
  double t5811;
  double t5817;
  double t5822;
  double t5825;
  double t5834;
  double t5843;
  double t5844;
  double t5850;
  double t5821;
  double t5852;
  double t5855;
  double t5860;
  double t5865;
  double t5866;
  double t3937;
  double t3979;
  double t3980;
  double t3989;
  double t3993;
  double t4000;
  double t4165;
  double t4212;
  double t4216;
  double t4221;
  double t4234;
  double t4245;
  double t4342;
  double t4365;
  double t4368;
  double t4375;
  double t4381;
  double t4386;
  double t4481;
  double t4539;
  double t4545;
  double t4548;
  double t4557;
  double t4562;
  double t4590;
  double t4616;
  double t4620;
  double t4644;
  double t4684;
  double t4697;
  double t6001;
  double t4836;
  double t4855;
  double t4856;
  double t4863;
  double t4864;
  double t4871;
  double t4950;
  double t4961;
  double t4971;
  double t4975;
  double t4980;
  double t4983;
  double t5051;
  double t5090;
  double t5095;
  double t5100;
  double t5112;
  double t5117;
  double t5168;
  double t5183;
  double t5187;
  double t5200;
  double t5201;
  double t5209;
  double t5256;
  double t5291;
  double t5299;
  double t5313;
  double t5316;
  double t5318;
  double t4746;
  double t4751;
  double t5377;
  double t5404;
  double t5411;
  double t5416;
  double t5446;
  double t5459;
  double t6190;
  double t5468;
  double t5471;
  double t5473;
  double t5515;
  double t5516;
  double t5518;
  double t5529;
  double t5531;
  double t5534;
  double t6268;
  double t6272;
  double t6274;
  double t5683;
  double t5719;
  double t5728;
  double t5738;
  double t5766;
  double t5767;
  double t6307;
  double t5784;
  double t5785;
  double t5789;
  double t5859;
  double t5868;
  double t5876;
  double t5886;
  double t5891;
  double t5896;
  t2960 = Cos(var1[3]);
  t3148 = Cos(var1[4]);
  t3161 = Cos(var1[5]);
  t3215 = Sin(var1[13]);
  t1477 = Cos(var1[13]);
  t3513 = Sin(var1[5]);
  t3810 = Cos(var1[15]);
  t3200 = t1477*t2960*t3148*t3161;
  t3537 = -1.*t2960*t3148*t3215*t3513;
  t3544 = t3200 + t3537;
  t1135 = Sin(var1[15]);
  t3828 = Cos(var1[14]);
  t3839 = Sin(var1[4]);
  t3843 = -1.*t3828*t2960*t3839;
  t3850 = Sin(var1[14]);
  t3865 = t2960*t3148*t3161*t3215;
  t3869 = t1477*t2960*t3148*t3513;
  t3883 = t3865 + t3869;
  t3907 = t3850*t3883;
  t3929 = t3843 + t3907;
  t3938 = Cos(var1[16]);
  t3768 = t1135*t3544;
  t3935 = t3810*t3929;
  t3936 = t3768 + t3935;
  t867 = Sin(var1[16]);
  t3965 = t3810*t3544;
  t3967 = -1.*t1135*t3929;
  t3974 = t3965 + t3967;
  t166 = Cos(var1[17]);
  t4044 = Sin(var1[3]);
  t4042 = t2960*t3161*t3839;
  t4059 = t4044*t3513;
  t4061 = t4042 + t4059;
  t4075 = t3161*t4044;
  t4078 = -1.*t2960*t3839*t3513;
  t4081 = t4075 + t4078;
  t4071 = -1.*t3215*t4061;
  t4097 = t1477*t4081;
  t4103 = t4071 + t4097;
  t4121 = t1477*t4061;
  t4122 = t3215*t4081;
  t4148 = t4121 + t4122;
  t3982 = Sin(var1[17]);
  t4112 = t1135*t4103;
  t4151 = t3810*t3850*t4148;
  t4161 = t4112 + t4151;
  t4185 = t3810*t4103;
  t4194 = -1.*t3850*t1135*t4148;
  t4206 = t4185 + t4194;
  t4286 = -1.*t2960*t3148*t3850;
  t4292 = t3215*t4061;
  t4301 = -1.*t3161*t4044;
  t4302 = t2960*t3839*t3513;
  t4304 = t4301 + t4302;
  t4328 = t1477*t4304;
  t4333 = t4292 + t4328;
  t4335 = t3828*t4333;
  t4341 = t4286 + t4335;
  t4420 = -1.*t1477*t4304;
  t4433 = t4071 + t4420;
  t4439 = -1.*t3215*t4304;
  t4451 = t4121 + t4439;
  t4435 = t1135*t4433;
  t4454 = t3810*t3850*t4451;
  t4455 = t4435 + t4454;
  t4512 = t3810*t4433;
  t4520 = -1.*t3850*t1135*t4451;
  t4538 = t4512 + t4520;
  t4584 = t3828*t2960*t3148;
  t4585 = t3850*t4333;
  t4586 = t4584 + t4585;
  t4581 = -1.*t1135*t4451;
  t4588 = -1.*t3810*t4586;
  t4589 = t4581 + t4588;
  t4594 = t3810*t4451;
  t4595 = -1.*t1135*t4586;
  t4599 = t4594 + t4595;
  t4604 = t3938*t4599;
  t4655 = t1135*t4451;
  t4656 = t3810*t4586;
  t4657 = t4655 + t4656;
  t4642 = -1.*t867*t4599;
  t4665 = -1.*t867*t4657;
  t4673 = t4665 + t4604;
  t4678 = t3982*t4673;
  t4756 = -1.*t3161*t4044*t3839;
  t4761 = t2960*t3513;
  t4763 = t4756 + t4761;
  t4778 = -1.*t2960*t3161;
  t4780 = -1.*t4044*t3839*t3513;
  t4781 = t4778 + t4780;
  t4769 = t1477*t4763;
  t4790 = -1.*t3215*t4781;
  t4794 = t4769 + t4790;
  t4797 = -1.*t3828*t3148*t4044;
  t4805 = t3215*t4763;
  t4808 = t1477*t4781;
  t4810 = t4805 + t4808;
  t4814 = t3850*t4810;
  t4816 = t4797 + t4814;
  t4795 = t1135*t4794;
  t4830 = t3810*t4816;
  t4835 = t4795 + t4830;
  t4840 = t3810*t4794;
  t4842 = -1.*t1135*t4816;
  t4844 = t4840 + t4842;
  t4891 = t1477*t3148*t3161*t4044;
  t4901 = -1.*t3148*t3215*t4044*t3513;
  t4909 = t4891 + t4901;
  t4935 = -1.*t3828*t4044*t3839;
  t4936 = t3148*t3161*t3215*t4044;
  t4937 = t1477*t3148*t4044*t3513;
  t4939 = t4936 + t4937;
  t4941 = t3850*t4939;
  t4944 = t4935 + t4941;
  t4925 = t1135*t4909;
  t4945 = t3810*t4944;
  t4949 = t4925 + t4945;
  t4954 = t3810*t4909;
  t4958 = -1.*t1135*t4944;
  t4959 = t4954 + t4958;
  t4991 = t3161*t4044*t3839;
  t5011 = -1.*t2960*t3513;
  t5012 = t4991 + t5011;
  t5016 = -1.*t3215*t5012;
  t5026 = t5016 + t4808;
  t5031 = t1477*t5012;
  t5032 = t3215*t4781;
  t5038 = t5031 + t5032;
  t5029 = t1135*t5026;
  t5039 = t3810*t3850*t5038;
  t5042 = t5029 + t5039;
  t5053 = t3810*t5026;
  t5062 = -1.*t3850*t1135*t5038;
  t5083 = t5053 + t5062;
  t5131 = -1.*t3148*t3850*t4044;
  t5132 = t3215*t5012;
  t5136 = t2960*t3161;
  t5138 = t4044*t3839*t3513;
  t5146 = t5136 + t5138;
  t5149 = t1477*t5146;
  t5155 = t5132 + t5149;
  t5162 = t3828*t5155;
  t5165 = t5131 + t5162;
  t5228 = -1.*t1477*t5146;
  t5231 = t5016 + t5228;
  t5239 = -1.*t3215*t5146;
  t5248 = t5031 + t5239;
  t5237 = t1135*t5231;
  t5249 = t3810*t3850*t5248;
  t5254 = t5237 + t5249;
  t5273 = t3810*t5231;
  t5277 = -1.*t3850*t1135*t5248;
  t5287 = t5273 + t5277;
  t4731 = t3938*t4657;
  t4740 = t867*t4599;
  t4741 = t4731 + t4740;
  t5366 = t3828*t3148*t4044;
  t5371 = t3850*t5155;
  t5372 = t5366 + t5371;
  t5359 = -1.*t1135*t5248;
  t5374 = -1.*t3810*t5372;
  t5375 = t5359 + t5374;
  t5379 = t3810*t5248;
  t5385 = -1.*t1135*t5372;
  t5388 = t5379 + t5385;
  t5402 = t3938*t5388;
  t5433 = t1135*t5248;
  t5434 = t3810*t5372;
  t5435 = t5433 + t5434;
  t5413 = -1.*t867*t5388;
  t5438 = -1.*t867*t5435;
  t5443 = t5438 + t5402;
  t5444 = t3982*t5443;
  t5492 = t3850*t3839;
  t5493 = t3148*t3161*t3215;
  t5494 = t1477*t3148*t3513;
  t5500 = t5493 + t5494;
  t5507 = t3828*t5500;
  t5509 = t5492 + t5507;
  t5549 = -1.*t3148*t3161*t3215;
  t5566 = -1.*t1477*t3148*t3513;
  t5578 = t5549 + t5566;
  t5588 = t1477*t3148*t3161;
  t5589 = -1.*t3148*t3215*t3513;
  t5593 = t5588 + t5589;
  t5581 = t1135*t5578;
  t5594 = t3810*t3850*t5593;
  t5595 = t5581 + t5594;
  t5600 = t3810*t5578;
  t5605 = -1.*t3850*t1135*t5593;
  t5606 = t5600 + t5605;
  t5599 = -1.*t867*t5595;
  t5608 = t3938*t5606;
  t5612 = t5599 + t5608;
  t5613 = -1.*t166*t5612;
  t5614 = t3938*t5595;
  t5616 = t867*t5606;
  t5620 = t5614 + t5616;
  t5624 = t3982*t5620;
  t5630 = t5613 + t5624;
  t5652 = -1.*t3828*t3839;
  t5664 = t3850*t5500;
  t5667 = t5652 + t5664;
  t5651 = -1.*t1135*t5593;
  t5672 = -1.*t3810*t5667;
  t5678 = t5651 + t5672;
  t5689 = t3810*t5593;
  t5704 = -1.*t1135*t5667;
  t5706 = t5689 + t5704;
  t5711 = t3938*t5706;
  t5748 = t1135*t5593;
  t5750 = t3810*t5667;
  t5751 = t5748 + t5750;
  t5732 = -1.*t867*t5706;
  t5752 = -1.*t867*t5751;
  t5755 = t5752 + t5711;
  t5758 = t3982*t5755;
  t5810 = -1.*t1477*t3161*t3839;
  t5811 = t3215*t3839*t3513;
  t5817 = t5810 + t5811;
  t5822 = -1.*t3828*t3148;
  t5825 = -1.*t3161*t3215*t3839;
  t5834 = -1.*t1477*t3839*t3513;
  t5843 = t5825 + t5834;
  t5844 = t3850*t5843;
  t5850 = t5822 + t5844;
  t5821 = t1135*t5817;
  t5852 = t3810*t5850;
  t5855 = t5821 + t5852;
  t5860 = t3810*t5817;
  t5865 = -1.*t1135*t5850;
  t5866 = t5860 + t5865;
  t3937 = -1.*t867*t3936;
  t3979 = t3938*t3974;
  t3980 = t3937 + t3979;
  t3989 = t3938*t3936;
  t3993 = t867*t3974;
  t4000 = t3989 + t3993;
  t4165 = -1.*t867*t4161;
  t4212 = t3938*t4206;
  t4216 = t4165 + t4212;
  t4221 = t3938*t4161;
  t4234 = t867*t4206;
  t4245 = t4221 + t4234;
  t4342 = -1.*t3938*t1135*t4341;
  t4365 = -1.*t3810*t867*t4341;
  t4368 = t4342 + t4365;
  t4375 = t3810*t3938*t4341;
  t4381 = -1.*t1135*t867*t4341;
  t4386 = t4375 + t4381;
  t4481 = -1.*t867*t4455;
  t4539 = t3938*t4538;
  t4545 = t4481 + t4539;
  t4548 = t3938*t4455;
  t4557 = t867*t4538;
  t4562 = t4548 + t4557;
  t4590 = t867*t4589;
  t4616 = t4590 + t4604;
  t4620 = t3938*t4589;
  t4644 = t4620 + t4642;
  t4684 = -1.*t3938*t4657;
  t4697 = t4684 + t4642;
  t6001 = t166*t4673;
  t4836 = -1.*t867*t4835;
  t4855 = t3938*t4844;
  t4856 = t4836 + t4855;
  t4863 = t3938*t4835;
  t4864 = t867*t4844;
  t4871 = t4863 + t4864;
  t4950 = -1.*t867*t4949;
  t4961 = t3938*t4959;
  t4971 = t4950 + t4961;
  t4975 = t3938*t4949;
  t4980 = t867*t4959;
  t4983 = t4975 + t4980;
  t5051 = -1.*t867*t5042;
  t5090 = t3938*t5083;
  t5095 = t5051 + t5090;
  t5100 = t3938*t5042;
  t5112 = t867*t5083;
  t5117 = t5100 + t5112;
  t5168 = -1.*t3938*t1135*t5165;
  t5183 = -1.*t3810*t867*t5165;
  t5187 = t5168 + t5183;
  t5200 = t3810*t3938*t5165;
  t5201 = -1.*t1135*t867*t5165;
  t5209 = t5200 + t5201;
  t5256 = -1.*t867*t5254;
  t5291 = t3938*t5287;
  t5299 = t5256 + t5291;
  t5313 = t3938*t5254;
  t5316 = t867*t5287;
  t5318 = t5313 + t5316;
  t4746 = t166*t4741;
  t4751 = t4678 + t4746;
  t5377 = t867*t5375;
  t5404 = t5377 + t5402;
  t5411 = t3938*t5375;
  t5416 = t5411 + t5413;
  t5446 = -1.*t3938*t5435;
  t5459 = t5446 + t5413;
  t6190 = t166*t5443;
  t5468 = t3938*t5435;
  t5471 = t867*t5388;
  t5473 = t5468 + t5471;
  t5515 = -1.*t3938*t1135*t5509;
  t5516 = -1.*t3810*t867*t5509;
  t5518 = t5515 + t5516;
  t5529 = t3810*t3938*t5509;
  t5531 = -1.*t1135*t867*t5509;
  t5534 = t5529 + t5531;
  t6268 = t3982*t5612;
  t6272 = t166*t5620;
  t6274 = t6268 + t6272;
  t5683 = t867*t5678;
  t5719 = t5683 + t5711;
  t5728 = t3938*t5678;
  t5738 = t5728 + t5732;
  t5766 = -1.*t3938*t5751;
  t5767 = t5766 + t5732;
  t6307 = t166*t5755;
  t5784 = t3938*t5751;
  t5785 = t867*t5706;
  t5789 = t5784 + t5785;
  t5859 = -1.*t867*t5855;
  t5868 = t3938*t5866;
  t5876 = t5859 + t5868;
  t5886 = t3938*t5855;
  t5891 = t867*t5866;
  t5896 = t5886 + t5891;
  p_output1[0]=(-1.*t166*t4856 + t3982*t4871)*var2[3] + (-1.*t166*t3980 + t3982*t4000)*var2[4] + (-1.*t166*t4216 + t3982*t4245)*var2[5] + (-1.*t166*t4545 + t3982*t4562)*var2[13] + (-1.*t166*t4368 + t3982*t4386)*var2[14] + (t3982*t4616 - 1.*t166*t4644)*var2[15] + (t4678 - 1.*t166*t4697)*var2[16] + t4751*var2[17];
  p_output1[1]=(-1.*t166*t4673 + t3982*t4741)*var2[3] + (-1.*t166*t4971 + t3982*t4983)*var2[4] + (-1.*t166*t5095 + t3982*t5117)*var2[5] + (-1.*t166*t5299 + t3982*t5318)*var2[13] + (-1.*t166*t5187 + t3982*t5209)*var2[14] + (t3982*t5404 - 1.*t166*t5416)*var2[15] + (t5444 - 1.*t166*t5459)*var2[16] + (t5444 + t166*t5473)*var2[17];
  p_output1[2]=(-1.*t166*t5876 + t3982*t5896)*var2[4] + t5630*var2[5] + t5630*var2[13] + (-1.*t166*t5518 + t3982*t5534)*var2[14] + (t3982*t5719 - 1.*t166*t5738)*var2[15] + (t5758 - 1.*t166*t5767)*var2[16] + (t5758 + t166*t5789)*var2[17];
  p_output1[3]=(t3982*t4856 + t166*t4871)*var2[3] + (t3980*t3982 + t166*t4000)*var2[4] + (t3982*t4216 + t166*t4245)*var2[5] + (t3982*t4545 + t166*t4562)*var2[13] + (t3982*t4368 + t166*t4386)*var2[14] + (t166*t4616 + t3982*t4644)*var2[15] + (t3982*t4697 + t6001)*var2[16] + (-1.*t3982*t4741 + t6001)*var2[17];
  p_output1[4]=t4751*var2[3] + (t3982*t4971 + t166*t4983)*var2[4] + (t3982*t5095 + t166*t5117)*var2[5] + (t3982*t5299 + t166*t5318)*var2[13] + (t3982*t5187 + t166*t5209)*var2[14] + (t166*t5404 + t3982*t5416)*var2[15] + (t3982*t5459 + t6190)*var2[16] + (-1.*t3982*t5473 + t6190)*var2[17];
  p_output1[5]=(t3982*t5876 + t166*t5896)*var2[4] + t6274*var2[5] + t6274*var2[13] + (t3982*t5518 + t166*t5534)*var2[14] + (t166*t5719 + t3982*t5738)*var2[15] + (t3982*t5767 + t6307)*var2[16] + (-1.*t3982*t5789 + t6307)*var2[17];
  p_output1[6]=(-1.*t3828*t4810 + t5131)*var2[3] + (-1.*t2960*t3839*t3850 - 1.*t3828*t3883)*var2[4] - 1.*t3828*t4148*var2[5] - 1.*t3828*t4451*var2[13] + t4586*var2[14];
  p_output1[7]=(t2960*t3148*t3850 - 1.*t3828*t4333)*var2[3] + (-1.*t3839*t3850*t4044 - 1.*t3828*t4939)*var2[4] - 1.*t3828*t5038*var2[5] - 1.*t3828*t5248*var2[13] + t5372*var2[14];
  p_output1[8]=(-1.*t3148*t3850 - 1.*t3828*t5843)*var2[4] - 1.*t3828*t5593*var2[5] - 1.*t3828*t5593*var2[13] + t5667*var2[14];
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

#include "dR_RightKneeSpringJoint_mex.hh"

namespace SymExpression
{

void dR_RightKneeSpringJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
