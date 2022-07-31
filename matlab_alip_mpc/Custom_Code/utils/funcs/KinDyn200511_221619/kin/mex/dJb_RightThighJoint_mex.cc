/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:24 GMT-04:00
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
  double t464;
  double t1147;
  double t1149;
  double t1188;
  double t1322;
  double t1070;
  double t1323;
  double t1391;
  double t1410;
  double t1044;
  double t1503;
  double t1540;
  double t1546;
  double t197;
  double t943;
  double t2029;
  double t1880;
  double t1922;
  double t1941;
  double t1843;
  double t1314;
  double t1435;
  double t1490;
  double t1544;
  double t215;
  double t1001;
  double t3482;
  double t3488;
  double t3503;
  double t3413;
  double t3416;
  double t3468;
  double t3057;
  double t3083;
  double t623;
  double t827;
  double t1498;
  double t1679;
  double t1688;
  double t3695;
  double t3706;
  double t3713;
  double t3739;
  double t3746;
  double t3778;
  double t3709;
  double t3727;
  double t3729;
  double t3889;
  double t3893;
  double t3902;
  double t3857;
  double t4163;
  double t4169;
  double t4181;
  double t4107;
  double t4117;
  double t4120;
  double t3884;
  double t3908;
  double t3963;
  double t3966;
  double t3988;
  double t3996;
  double t3997;
  double t4373;
  double t4374;
  double t4384;
  double t4386;
  double t4530;
  double t4533;
  double t4341;
  double t4381;
  double t4388;
  double t4402;
  double t992;
  double t1795;
  double t1805;
  double t1956;
  double t2212;
  double t2219;
  double t2407;
  double t2503;
  double t2570;
  double t2641;
  double t2800;
  double t2954;
  double t3103;
  double t3153;
  double t3158;
  double t3189;
  double t3201;
  double t3203;
  double t3237;
  double t3253;
  double t3269;
  double t3306;
  double t3470;
  double t3531;
  double t3556;
  double t3568;
  double t3572;
  double t3574;
  double t3575;
  double t3607;
  double t3611;
  double t3651;
  double t3669;
  double t3674;
  double t3680;
  double t3738;
  double t3785;
  double t3803;
  double t3807;
  double t3811;
  double t3815;
  double t3912;
  double t3922;
  double t3925;
  double t3928;
  double t3974;
  double t4004;
  double t4030;
  double t4040;
  double t4041;
  double t4044;
  double t4059;
  double t4060;
  double t4067;
  double t4071;
  double t4083;
  double t4088;
  double t4148;
  double t4187;
  double t4191;
  double t4225;
  double t4226;
  double t4234;
  double t4240;
  double t4245;
  double t4249;
  double t4260;
  double t4266;
  double t4277;
  double t4298;
  double t4355;
  double t4413;
  double t4417;
  double t4425;
  double t4431;
  double t4446;
  double t4463;
  double t4471;
  double t4488;
  double t4505;
  double t4514;
  double t4528;
  double t4548;
  double t4571;
  double t4575;
  double t4578;
  double t4580;
  double t4658;
  double t4672;
  double t4673;
  double t4677;
  double t4683;
  double t4704;
  double t4709;
  double t4713;
  double t4720;
  double t5345;
  double t5352;
  double t5356;
  double t5538;
  double t5497;
  double t5506;
  double t5540;
  double t5545;
  double t5553;
  double t5559;
  double t5566;
  double t5568;
  double t5571;
  double t5575;
  double t5577;
  double t5578;
  double t5583;
  double t5584;
  double t5596;
  double t5603;
  double t5605;
  double t5608;
  double t5609;
  double t5612;
  double t5508;
  double t5514;
  double t5556;
  double t5597;
  double t5600;
  double t5627;
  double t5631;
  double t5640;
  double t5644;
  double t5646;
  double t5647;
  double t5625;
  double t5601;
  double t5616;
  double t5617;
  double t5641;
  double t5649;
  double t5655;
  double t5660;
  double t5668;
  double t5673;
  double t5789;
  double t5804;
  double t5764;
  double t5766;
  double t5767;
  double t5779;
  double t5782;
  double t5833;
  double t5837;
  double t5842;
  double t5618;
  double t5659;
  double t5686;
  double t5699;
  double t5785;
  double t5812;
  double t5825;
  double t5759;
  double t6038;
  double t5992;
  double t5997;
  double t6006;
  double t5951;
  double t5960;
  double t5964;
  double t5981;
  double t5417;
  double t5421;
  double t5431;
  double t5368;
  double t5369;
  double t5374;
  double t6142;
  double t6146;
  double t6163;
  double t6135;
  double t5317;
  double t5324;
  double t5334;
  double t6247;
  double t6248;
  double t6288;
  double t6290;
  double t6302;
  double t6313;
  double t6320;
  double t6325;
  double t5441;
  double t5445;
  double t5465;
  double t6253;
  double t6269;
  double t6284;
  double t6303;
  double t6326;
  double t6327;
  double t6338;
  double t6347;
  double t6351;
  double t5246;
  double t5251;
  double t5256;
  double t6399;
  double t6401;
  double t6404;
  double t6409;
  double t6439;
  double t6481;
  double t6483;
  double t6488;
  double t6489;
  double t5283;
  double t5289;
  double t5293;
  double t5197;
  double t5221;
  double t5237;
  double t6720;
  double t6722;
  double t6727;
  double t6735;
  double t6774;
  double t6776;
  double t6778;
  double t6779;
  double t5167;
  double t5189;
  double t5245;
  double t5258;
  double t5296;
  double t5297;
  double t5305;
  double t5307;
  double t5336;
  double t5359;
  double t5376;
  double t5391;
  double t5393;
  double t5415;
  double t5436;
  double t5476;
  double t5495;
  double t5714;
  double t7046;
  double t7047;
  double t7055;
  double t6285;
  double t6287;
  double t6362;
  double t6366;
  double t5828;
  double t5830;
  double t7139;
  double t7141;
  double t7142;
  double t5887;
  double t5893;
  double t6019;
  double t6037;
  double t6092;
  double t6094;
  double t6426;
  double t6440;
  double t6441;
  double t7257;
  double t7260;
  double t7262;
  double t6462;
  double t6464;
  double t6507;
  double t6508;
  double t6545;
  double t6548;
  double t7333;
  double t7338;
  double t7339;
  double t6651;
  double t6653;
  double t6670;
  double t6671;
  double t6875;
  double t6877;
  double t6916;
  double t6917;
  double t6953;
  double t6978;
  double t7498;
  double t7504;
  double t7505;
  double t7526;
  double t7527;
  double t7532;
  double t6700;
  double t6701;
  double t6744;
  double t6746;
  double t6794;
  double t6797;
  double t6827;
  double t6828;
  double t7068;
  double t7800;
  double t7802;
  double t7806;
  double t7118;
  double t7120;
  double t7128;
  double t7129;
  double t7267;
  double t7995;
  double t7997;
  double t8000;
  double t7406;
  double t7407;
  double t7424;
  double t7425;
  double t7469;
  double t7477;
  double t7509;
  double t7514;
  double t7538;
  double t7546;
  double t8178;
  double t8180;
  double t8184;
  double t8201;
  double t8205;
  double t8207;
  double t8272;
  double t8276;
  double t8277;
  double t8371;
  double t8373;
  double t8377;
  double t8474;
  double t8478;
  double t8480;
  double t8494;
  double t8495;
  double t8496;
  double t8255;
  double t8257;
  double t8258;
  double t8262;
  double t8263;
  double t8267;
  double t8268;
  double t8520;
  double t8393;
  t464 = Sin(var1[15]);
  t1147 = Cos(var1[15]);
  t1149 = -1.*t1147;
  t1188 = 0. + t1149;
  t1322 = Sin(var1[13]);
  t1070 = Cos(var1[13]);
  t1323 = Sin(var1[14]);
  t1391 = t1323*t464;
  t1410 = 0. + t1391;
  t1044 = Cos(var1[5]);
  t1503 = -1.*t1188*t1322;
  t1540 = t1070*t1410;
  t1546 = Sin(var1[5]);
  t197 = Cos(var1[3]);
  t943 = Sin(var1[4]);
  t2029 = t1503 + t1540;
  t1880 = -1.*t1070*t1188;
  t1922 = -1.*t1322*t1410;
  t1941 = t1880 + t1922;
  t1843 = Sin(var1[3]);
  t1314 = t1070*t1188;
  t1435 = t1322*t1410;
  t1490 = 0. + t1314 + t1435;
  t1544 = 0. + t1503 + t1540;
  t215 = Cos(var1[14]);
  t1001 = Cos(var1[4]);
  t3482 = t1147*t1322*t1323;
  t3488 = t1070*t464;
  t3503 = t3482 + t3488;
  t3413 = t1070*t1147*t1323;
  t3416 = -1.*t1322*t464;
  t3468 = t3413 + t3416;
  t3057 = t1044*t1544;
  t3083 = -1.*t1490*t1546;
  t623 = t215*t464;
  t827 = 0. + t623;
  t1498 = t1044*t1490;
  t1679 = t1544*t1546;
  t1688 = 0. + t1498 + t1679;
  t3695 = t1147*t1323;
  t3706 = 0. + t3695;
  t3713 = 0. + t464;
  t3739 = -1.*t1322*t3706;
  t3746 = -1.*t1070*t3713;
  t3778 = t3739 + t3746;
  t3709 = t1070*t3706;
  t3727 = -1.*t1322*t3713;
  t3729 = t3709 + t3727;
  t3889 = t1322*t3706;
  t3893 = t1070*t3713;
  t3902 = 0. + t3889 + t3893;
  t3857 = 0. + t3709 + t3727;
  t4163 = t1070*t1147;
  t4169 = -1.*t1322*t1323*t464;
  t4181 = t4163 + t4169;
  t4107 = -1.*t1147*t1322;
  t4117 = -1.*t1070*t1323*t464;
  t4120 = t4107 + t4117;
  t3884 = t1044*t3857;
  t3908 = -1.*t3902*t1546;
  t3963 = t215*t1147;
  t3966 = 0. + t3963;
  t3988 = t1044*t3902;
  t3996 = t3857*t1546;
  t3997 = 0. + t3988 + t3996;
  t4373 = -1.*t215*t1322;
  t4374 = 0. + t4373;
  t4384 = -1.*t1070*t215;
  t4386 = 0. + t4384;
  t4530 = t4386*t1044;
  t4533 = -1.*t4374*t1546;
  t4341 = 0. + t1323;
  t4381 = t1044*t4374;
  t4388 = t4386*t1546;
  t4402 = 0. + t4381 + t4388;
  t992 = -1.*t827*t943;
  t1795 = t1001*t1688;
  t1805 = t992 + t1795;
  t1956 = t1044*t1941;
  t2212 = -1.*t2029*t1546;
  t2219 = t1956 + t2212;
  t2407 = t1044*t2029;
  t2503 = t1941*t1546;
  t2570 = t2407 + t2503;
  t2641 = -1.*t1044*t1490;
  t2800 = -1.*t1544*t1546;
  t2954 = t2641 + t2800;
  t3103 = t3057 + t3083;
  t3153 = t1070*t215*t1044*t464;
  t3158 = -1.*t215*t1322*t464*t1546;
  t3189 = t3153 + t3158;
  t3201 = -1.*t1001*t1323*t464;
  t3203 = t215*t1044*t1322*t464;
  t3237 = t1070*t215*t464*t1546;
  t3253 = t3203 + t3237;
  t3269 = t943*t3253;
  t3306 = t3201 + t3269;
  t3470 = t1044*t3468;
  t3531 = -1.*t3503*t1546;
  t3556 = t3470 + t3531;
  t3568 = t215*t1147*t1001;
  t3572 = t1044*t3503;
  t3574 = t3468*t1546;
  t3575 = t3572 + t3574;
  t3607 = t943*t3575;
  t3611 = t3568 + t3607;
  t3651 = 0. + t3057 + t3083;
  t3669 = t1001*t827;
  t3674 = t943*t1688;
  t3680 = 0. + t3669 + t3674;
  t3738 = t1044*t3729;
  t3785 = t3778*t1546;
  t3803 = t3738 + t3785;
  t3807 = t1044*t3778;
  t3811 = -1.*t3729*t1546;
  t3815 = t3807 + t3811;
  t3912 = t3884 + t3908;
  t3922 = -1.*t1044*t3902;
  t3925 = -1.*t3857*t1546;
  t3928 = t3922 + t3925;
  t3974 = -1.*t3966*t943;
  t4004 = t1001*t3997;
  t4030 = t3974 + t4004;
  t4040 = t1070*t215*t1147*t1044;
  t4041 = -1.*t215*t1147*t1322*t1546;
  t4044 = t4040 + t4041;
  t4059 = -1.*t1147*t1001*t1323;
  t4060 = t215*t1147*t1044*t1322;
  t4067 = t1070*t215*t1147*t1546;
  t4071 = t4060 + t4067;
  t4083 = t943*t4071;
  t4088 = t4059 + t4083;
  t4148 = t1044*t4120;
  t4187 = -1.*t4181*t1546;
  t4191 = t4148 + t4187;
  t4225 = -1.*t215*t1001*t464;
  t4226 = t1044*t4181;
  t4234 = t4120*t1546;
  t4240 = t4226 + t4234;
  t4245 = t943*t4240;
  t4249 = t4225 + t4245;
  t4260 = 0. + t3884 + t3908;
  t4266 = t3966*t1001;
  t4277 = t943*t3997;
  t4298 = 0. + t4266 + t4277;
  t4355 = -1.*t4341*t943;
  t4413 = t1001*t4402;
  t4417 = t4355 + t4413;
  t4425 = t215*t1044*t1322;
  t4431 = t1070*t215*t1546;
  t4446 = t4425 + t4431;
  t4463 = -1.*t1070*t215*t1044;
  t4471 = t215*t1322*t1546;
  t4488 = t4463 + t4471;
  t4505 = -1.*t1044*t4374;
  t4514 = -1.*t4386*t1546;
  t4528 = t4505 + t4514;
  t4548 = t4530 + t4533;
  t4571 = 0. + t4530 + t4533;
  t4575 = t1001*t4341;
  t4578 = t943*t4402;
  t4580 = 0. + t4575 + t4578;
  t4658 = t1070*t1044*t1323;
  t4672 = -1.*t1322*t1323*t1546;
  t4673 = t4658 + t4672;
  t4677 = t215*t1001;
  t4683 = t1044*t1322*t1323;
  t4704 = t1070*t1323*t1546;
  t4709 = t4683 + t4704;
  t4713 = t943*t4709;
  t4720 = t4677 + t4713;
  t5345 = t215*t464*t943;
  t5352 = t1001*t4240;
  t5356 = t5345 + t5352;
  t5538 = 1. + t1149;
  t5497 = -1.*t1070;
  t5506 = 1. + t5497;
  t5540 = -0.01004*t5538;
  t5545 = -0.01004*t1147;
  t5553 = 0. + t5540 + t5545;
  t5559 = -1.*t215;
  t5566 = 1. + t5559;
  t5568 = -0.135*t5566;
  t5571 = -0.135*t215;
  t5575 = 0.08055*t1323;
  t5577 = -0.08055*t5538;
  t5578 = -0.08055*t1147;
  t5583 = 0. + t5577 + t5578;
  t5584 = t5583*t1323;
  t5596 = 0. + t5568 + t5571 + t5575 + t5584;
  t5603 = 0.07996*t5506;
  t5605 = t1070*t5553;
  t5608 = 0.135*t1322;
  t5609 = t1322*t5596;
  t5612 = 0. + t5603 + t5605 + t5608 + t5609;
  t5508 = -0.135*t5506;
  t5514 = 0.07996*t1322;
  t5556 = -1.*t5553*t1322;
  t5597 = t1070*t5596;
  t5600 = 0. + t5508 + t5514 + t5556 + t5597;
  t5627 = -0.08055*t5566;
  t5631 = t215*t5583;
  t5640 = 0. + t5627 + t5631;
  t5644 = t1044*t5612;
  t5646 = t5600*t1546;
  t5647 = 0. + t5644 + t5646;
  t5625 = 0. + t4355 + t4413;
  t5601 = t1044*t5600;
  t5616 = -1.*t5612*t1546;
  t5617 = 0. + t5601 + t5616;
  t5641 = -1.*t5640*t943;
  t5649 = t1001*t5647;
  t5655 = 0. + t5641 + t5649;
  t5660 = t5640*t1001;
  t5668 = t943*t5647;
  t5673 = 0. + t5660 + t5668;
  t5789 = 0.135*t1070;
  t5804 = t5789 + t5514 + t5556 + t5597;
  t5764 = 0.07996*t1070;
  t5766 = -1.*t1070*t5553;
  t5767 = -0.135*t1322;
  t5779 = -1.*t1322*t5596;
  t5782 = t5764 + t5766 + t5767 + t5779;
  t5833 = t1044*t5804;
  t5837 = t5782*t1546;
  t5842 = t5833 + t5837;
  t5618 = t4571*t5617;
  t5659 = t5625*t5655;
  t5686 = t4580*t5673;
  t5699 = t5618 + t5659 + t5686;
  t5785 = t1044*t5782;
  t5812 = -1.*t5804*t1546;
  t5825 = t5785 + t5812;
  t5759 = 0. + t3974 + t4004;
  t6038 = t5601 + t5616;
  t5992 = -1.*t1044*t5612;
  t5997 = -1.*t5600*t1546;
  t6006 = t5992 + t5997;
  t5951 = -1.*t5617*t4260;
  t5960 = -1.*t5655*t5759;
  t5964 = -1.*t5673*t4298;
  t5981 = t5951 + t5960 + t5964;
  t5417 = -1.*t1001*t4341;
  t5421 = -1.*t943*t4402;
  t5431 = t5417 + t5421;
  t5368 = -1.*t3966*t1001;
  t5369 = -1.*t943*t3997;
  t5374 = t5368 + t5369;
  t6142 = -1.*t5640*t1001;
  t6146 = -1.*t943*t5647;
  t6163 = t6142 + t6146;
  t6135 = t5641 + t5649;
  t5317 = t1147*t1323*t943;
  t5324 = t1001*t4071;
  t5334 = t5317 + t5324;
  t6247 = 0.08055*t215;
  t6248 = 0. + t6247 + t5631;
  t6288 = -0.08055*t1323;
  t6290 = -1.*t5583*t1323;
  t6302 = t6288 + t6290;
  t6313 = t6248*t1044*t1322;
  t6320 = t1070*t6248*t1546;
  t6325 = t6313 + t6320;
  t5441 = -1.*t215*t943;
  t5445 = t1001*t4709;
  t5465 = t5441 + t5445;
  t6253 = t1070*t6248*t1044;
  t6269 = -1.*t6248*t1322*t1546;
  t6284 = t6253 + t6269;
  t6303 = -1.*t6302*t943;
  t6326 = t1001*t6325;
  t6327 = t6303 + t6326;
  t6338 = t1001*t6302;
  t6347 = t943*t6325;
  t6351 = t6338 + t6347;
  t5246 = -1.*t215*t1147*t943;
  t5251 = t1001*t3575;
  t5256 = t5246 + t5251;
  t6399 = -1.*t4571*t5617;
  t6401 = -1.*t5625*t5655;
  t6404 = -1.*t4580*t5673;
  t6409 = t6399 + t6401 + t6404;
  t6439 = 0. + t992 + t1795;
  t6481 = t5617*t3651;
  t6483 = t5655*t6439;
  t6488 = t5673*t3680;
  t6489 = t6481 + t6483 + t6488;
  t5283 = -1.*t1001*t827;
  t5289 = -1.*t943*t1688;
  t5293 = t5283 + t5289;
  t5197 = t1323*t464*t943;
  t5221 = t1001*t3253;
  t5237 = t5197 + t5221;
  t6720 = t5617*t4260;
  t6722 = t5655*t5759;
  t6727 = t5673*t4298;
  t6735 = t6720 + t6722 + t6727;
  t6774 = -1.*t5617*t3651;
  t6776 = -1.*t5655*t6439;
  t6778 = -1.*t5673*t3680;
  t6779 = t6774 + t6776 + t6778;
  t5167 = var2[13]*t1001*t2570;
  t5189 = var2[5]*t1001*t3103;
  t5245 = var2[14]*t5237;
  t5258 = var2[15]*t5256;
  t5296 = var2[4]*t5293;
  t5297 = t5167 + t5189 + t5245 + t5258 + t5296;
  t5305 = var2[13]*t1001*t3803;
  t5307 = var2[5]*t1001*t3912;
  t5336 = var2[14]*t5334;
  t5359 = var2[15]*t5356;
  t5376 = var2[4]*t5374;
  t5391 = t5305 + t5307 + t5336 + t5359 + t5376;
  t5393 = var2[13]*t1001*t4488;
  t5415 = var2[5]*t1001*t4548;
  t5436 = var2[4]*t5431;
  t5476 = var2[14]*t5465;
  t5495 = t5393 + t5415 + t5436 + t5476;
  t5714 = -1.*t5617*t4191;
  t7046 = t5640*t4341;
  t7047 = t4402*t5647;
  t7055 = t7046 + t7047 + t5618;
  t6285 = t6284*t4571;
  t6287 = t4673*t5617;
  t6362 = -1.*t4044*t5617;
  t6366 = -1.*t6284*t4260;
  t5828 = t4571*t5825;
  t5830 = t4446*t5617;
  t7139 = -1.*t5640*t3966;
  t7141 = -1.*t5647*t3997;
  t7142 = t7139 + t5951 + t7141;
  t5887 = -1.*t5825*t4260;
  t5893 = -1.*t5617*t3815;
  t6019 = t4571*t6006;
  t6037 = t4528*t5617;
  t6092 = -1.*t6006*t4260;
  t6094 = -1.*t5617*t3928;
  t6426 = t5617*t3556;
  t6440 = -1.*t4571*t5825;
  t6441 = -1.*t4446*t5617;
  t7257 = -1.*t5640*t4341;
  t7260 = -1.*t4402*t5647;
  t7262 = t7257 + t7260 + t6399;
  t6462 = t5617*t2219;
  t6464 = t5825*t3651;
  t6507 = -1.*t4571*t6006;
  t6508 = -1.*t4528*t5617;
  t6545 = t5617*t2954;
  t6548 = t6006*t3651;
  t7333 = t5640*t827;
  t7338 = t5647*t1688;
  t7339 = t7333 + t7338 + t6481;
  t6651 = -1.*t6284*t4571;
  t6653 = -1.*t4673*t5617;
  t6670 = t5617*t3189;
  t6671 = t6284*t3651;
  t6875 = t4044*t5617;
  t6877 = t6284*t4260;
  t6916 = -1.*t5617*t3189;
  t6917 = -1.*t6284*t3651;
  t6953 = -1.*t5617*t3556;
  t6978 = t5617*t4191;
  t7498 = t5640*t3966;
  t7504 = t5647*t3997;
  t7505 = t7498 + t6720 + t7504;
  t7526 = -1.*t5640*t827;
  t7527 = -1.*t5647*t1688;
  t7532 = t7526 + t7527 + t6774;
  t6700 = t5825*t4260;
  t6701 = t5617*t3815;
  t6744 = -1.*t5617*t2219;
  t6746 = -1.*t5825*t3651;
  t6794 = t6006*t4260;
  t6797 = t5617*t3928;
  t6827 = -1.*t5617*t2954;
  t6828 = -1.*t6006*t3651;
  t7068 = t215*t5640*t464;
  t7800 = t4386*t5600;
  t7802 = t4374*t5612;
  t7806 = t7046 + t7800 + t7802;
  t7118 = t215*t5640;
  t7120 = t4341*t6302;
  t7128 = t5640*t1147*t1323;
  t7129 = -1.*t3966*t6302;
  t7267 = t215*t5640*t1147;
  t7995 = -1.*t4386*t5600;
  t7997 = -1.*t4374*t5612;
  t8000 = t7257 + t7995 + t7997;
  t7406 = -1.*t215*t5640;
  t7407 = -1.*t4341*t6302;
  t7424 = -1.*t5640*t1323*t464;
  t7425 = t6302*t827;
  t7469 = -1.*t5640*t1147*t1323;
  t7477 = t3966*t6302;
  t7509 = t5640*t1323*t464;
  t7514 = -1.*t6302*t827;
  t7538 = -1.*t215*t5640*t1147;
  t7546 = -1.*t215*t5640*t464;
  t8178 = t5612*t3902;
  t8180 = t5600*t3857;
  t8184 = t7498 + t8178 + t8180;
  t8201 = -1.*t5600*t1544;
  t8205 = -1.*t5612*t1490;
  t8207 = t7526 + t8201 + t8205;
  t8272 = t5640*t1323;
  t8276 = -1.*t215*t5596;
  t8277 = 0. + t8272 + t8276;
  t8371 = -1.*t5640*t1323;
  t8373 = t215*t5596;
  t8377 = 0. + t8371 + t8373;
  t8474 = t5596*t3706;
  t8478 = t5553*t3713;
  t8480 = t7498 + t8474 + t8478;
  t8494 = -1.*t1188*t5553;
  t8495 = -1.*t5596*t1410;
  t8496 = t8494 + t7526 + t8495;
  t8255 = var2[15]*t215*t1147;
  t8257 = -1.*var2[14]*t1323*t464;
  t8258 = t8255 + t8257;
  t8262 = -1.*var2[14]*t1147*t1323;
  t8263 = -1.*var2[15]*t215*t464;
  t8267 = t8262 + t8263;
  t8268 = var2[14]*t215;
  t8520 = -1.*t5553*t464;
  t8393 = t5553*t464;
  p_output1[0]=(-1.*t197*t3651 - 1.*t1843*t3680)*var2[3] + t1805*t197*var2[4] + (-1.*t1843*t2954 + t197*t3103*t943)*var2[5] + (-1.*t1843*t2219 + t197*t2570*t943)*var2[13] + (-1.*t1843*t3189 + t197*t3306)*var2[14] + (-1.*t1843*t3556 + t197*t3611)*var2[15];
  p_output1[1]=(-1.*t197*t4260 - 1.*t1843*t4298)*var2[3] + t197*t4030*var2[4] + (-1.*t1843*t3928 + t197*t3912*t943)*var2[5] + (-1.*t1843*t3815 + t197*t3803*t943)*var2[13] + (-1.*t1843*t4044 + t197*t4088)*var2[14] + (-1.*t1843*t4191 + t197*t4249)*var2[15];
  p_output1[2]=(-1.*t197*t4571 - 1.*t1843*t4580)*var2[3] + t197*t4417*var2[4] + (-1.*t1843*t4528 + t197*t4548*t943)*var2[5] + (-1.*t1843*t4446 + t197*t4488*t943)*var2[13] + (-1.*t1843*t4673 + t197*t4720)*var2[14];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t1843*t3651 + t197*t3680)*var2[3] + t1805*t1843*var2[4] + (t197*t2954 + t1843*t3103*t943)*var2[5] + (t197*t2219 + t1843*t2570*t943)*var2[13] + (t197*t3189 + t1843*t3306)*var2[14] + (t197*t3556 + t1843*t3611)*var2[15];
  p_output1[7]=(-1.*t1843*t4260 + t197*t4298)*var2[3] + t1843*t4030*var2[4] + (t197*t3928 + t1843*t3912*t943)*var2[5] + (t197*t3815 + t1843*t3803*t943)*var2[13] + (t197*t4044 + t1843*t4088)*var2[14] + (t197*t4191 + t1843*t4249)*var2[15];
  p_output1[8]=(-1.*t1843*t4571 + t197*t4580)*var2[3] + t1843*t4417*var2[4] + (t197*t4528 + t1843*t4548*t943)*var2[5] + (t197*t4446 + t1843*t4488*t943)*var2[13] + (t197*t4673 + t1843*t4720)*var2[14];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t5297;
  p_output1[13]=t5391;
  p_output1[14]=t5495;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t5374*t5699 + t5431*t5981 + t5759*(t5431*t5655 + t4417*t5673 + t4580*t6135 + t5625*t6163) + t5625*(-1.*t5374*t5655 - 1.*t4030*t5673 - 1.*t4298*t6135 - 1.*t5759*t6163))*var2[4] + (t1001*t3912*t5699 + t1001*t4548*t5981 + t5625*(-1.*t1001*t3912*t5655 - 1.*t1001*t5759*t6038 + t6092 + t6094 - 1.*t3912*t5673*t943 - 1.*t4298*t6038*t943) + t5759*(t1001*t4548*t5655 + t6019 + t6037 + t1001*t5625*t6038 + t4548*t5673*t943 + t4580*t6038*t943))*var2[5] + (t1001*t3803*t5699 + t1001*t4488*t5981 + t5625*(-1.*t1001*t3803*t5655 - 1.*t1001*t5759*t5842 + t5887 + t5893 - 1.*t3803*t5673*t943 - 1.*t4298*t5842*t943) + t5759*(t1001*t4488*t5655 + t5828 + t5830 + t1001*t5625*t5842 + t4488*t5673*t943 + t4580*t5842*t943))*var2[13] + (t5334*t5699 + t5465*t5981 + t5759*(t5465*t5655 + t4720*t5673 + t6285 + t6287 + t5625*t6327 + t4580*t6351) + t5625*(-1.*t5334*t5655 - 1.*t4088*t5673 - 1.*t5759*t6327 - 1.*t4298*t6351 + t6362 + t6366))*var2[14] + (0. + t5356*t5699 + t5625*(0. - 1.*t5356*t5655 - 1.*t4249*t5673 + t5714))*var2[15];
  p_output1[19]=(t5293*t6409 + (-1.*t5431*t5655 - 1.*t4417*t5673 - 1.*t4580*t6135 - 1.*t5625*t6163)*t6439 + t5625*(t5293*t5655 + t1805*t5673 + t3680*t6135 + t6163*t6439) + t5431*t6489)*var2[4] + (t1001*t3103*t6409 + t1001*t4548*t6489 + t5625*(t1001*t3103*t5655 + t1001*t6038*t6439 + t6545 + t6548 + t3103*t5673*t943 + t3680*t6038*t943) + t6439*(-1.*t1001*t4548*t5655 - 1.*t1001*t5625*t6038 + t6507 + t6508 - 1.*t4548*t5673*t943 - 1.*t4580*t6038*t943))*var2[5] + (t1001*t2570*t6409 + t1001*t4488*t6489 + t5625*(t1001*t2570*t5655 + t1001*t5842*t6439 + t6462 + t6464 + t2570*t5673*t943 + t3680*t5842*t943) + t6439*(-1.*t1001*t4488*t5655 - 1.*t1001*t5625*t5842 + t6440 + t6441 - 1.*t4488*t5673*t943 - 1.*t4580*t5842*t943))*var2[13] + (t5237*t6409 + t5465*t6489 + t6439*(-1.*t5465*t5655 - 1.*t4720*t5673 - 1.*t5625*t6327 - 1.*t4580*t6351 + t6651 + t6653) + t5625*(t5237*t5655 + t3306*t5673 + t3680*t6351 + t6327*t6439 + t6670 + t6671))*var2[14] + (0. + t5256*t6409 + t5625*(0. + t5256*t5655 + t3611*t5673 + t6426))*var2[15];
  p_output1[20]=((t5374*t5655 + t4030*t5673 + t4298*t6135 + t5759*t6163)*t6439 + t5759*(-1.*t5293*t5655 - 1.*t1805*t5673 - 1.*t3680*t6135 - 1.*t6163*t6439) + t5293*t6735 + t5374*t6779)*var2[4] + (t1001*t3103*t6735 + t1001*t3912*t6779 + t5759*(-1.*t1001*t3103*t5655 - 1.*t1001*t6038*t6439 + t6827 + t6828 - 1.*t3103*t5673*t943 - 1.*t3680*t6038*t943) + t6439*(t1001*t3912*t5655 + t1001*t5759*t6038 + t6794 + t6797 + t3912*t5673*t943 + t4298*t6038*t943))*var2[5] + (t1001*t2570*t6735 + t1001*t3803*t6779 + t5759*(-1.*t1001*t2570*t5655 - 1.*t1001*t5842*t6439 + t6744 + t6746 - 1.*t2570*t5673*t943 - 1.*t3680*t5842*t943) + t6439*(t1001*t3803*t5655 + t1001*t5759*t5842 + t6700 + t6701 + t3803*t5673*t943 + t4298*t5842*t943))*var2[13] + (t5237*t6735 + t5334*t6779 + t6439*(t5334*t5655 + t4088*t5673 + t5759*t6327 + t4298*t6351 + t6875 + t6877) + t5759*(-1.*t5237*t5655 - 1.*t3306*t5673 - 1.*t3680*t6351 - 1.*t6327*t6439 + t6916 + t6917))*var2[14] + (t5256*t6735 + t5356*t6779 + t5759*(0. - 1.*t5256*t5655 - 1.*t3611*t5673 + t6953) + t6439*(0. + t5356*t5655 + t4249*t5673 + t6978))*var2[15];
  p_output1[21]=t5297;
  p_output1[22]=t5391;
  p_output1[23]=t5495;
  p_output1[24]=(t4260*(t4548*t5647 + t6019 + t6037 + t4402*t6038) + t4571*(-1.*t3912*t5647 - 1.*t3997*t6038 + t6092 + t6094) + t3928*t7055 + t4528*t7142)*var2[5] + (t4260*(t4488*t5647 + t5828 + t5830 + t4402*t5842) + t4571*(-1.*t3803*t5647 - 1.*t3997*t5842 + t5887 + t5893) + t3815*t7055 + t4446*t7142)*var2[13] + (t4044*t7055 + t4260*(t4709*t5647 + t6285 + t6287 + t4402*t6325 + t7118 + t7120) + t4571*(-1.*t4071*t5647 - 1.*t3997*t6325 + t6362 + t6366 + t7128 + t7129) + t4673*t7142)*var2[14] + (0. + t4191*t7055 + t4571*(0. - 1.*t4240*t5647 + t5714 + t7068))*var2[15];
  p_output1[25]=(t3651*(-1.*t4548*t5647 - 1.*t4402*t6038 + t6507 + t6508) + t4571*(t3103*t5647 + t1688*t6038 + t6545 + t6548) + t2954*t7262 + t4528*t7339)*var2[5] + (t3651*(-1.*t4488*t5647 - 1.*t4402*t5842 + t6440 + t6441) + t4571*(t2570*t5647 + t1688*t5842 + t6462 + t6464) + t2219*t7262 + t4446*t7339)*var2[13] + (t3189*t7262 + t4673*t7339 + t3651*(-1.*t4709*t5647 - 1.*t4402*t6325 + t6651 + t6653 + t7406 + t7407) + t4571*(t3253*t5647 + t1688*t6325 + t6670 + t6671 + t7424 + t7425))*var2[14] + (0. + t3556*t7262 + t4571*(0. + t3575*t5647 + t6426 + t7267))*var2[15];
  p_output1[26]=(t3651*(t3912*t5647 + t3997*t6038 + t6794 + t6797) + t4260*(-1.*t3103*t5647 - 1.*t1688*t6038 + t6827 + t6828) + t2954*t7505 + t3928*t7532)*var2[5] + (t3651*(t3803*t5647 + t3997*t5842 + t6700 + t6701) + t4260*(-1.*t2570*t5647 - 1.*t1688*t5842 + t6744 + t6746) + t2219*t7505 + t3815*t7532)*var2[13] + (t3651*(t4071*t5647 + t3997*t6325 + t6875 + t6877 + t7469 + t7477) + t3189*t7505 + t4260*(-1.*t3253*t5647 - 1.*t1688*t6325 + t6916 + t6917 + t7509 + t7514) + t4044*t7532)*var2[14] + (t3556*t7505 + t4191*t7532 + t4260*(0. - 1.*t3575*t5647 + t6953 + t7538) + t3651*(0. + t4240*t5647 + t6978 + t7546))*var2[15];
  p_output1[27]=t2954*var2[5] + t2219*var2[13] + t3189*var2[14] + t3556*var2[15];
  p_output1[28]=t3928*var2[5] + t3815*var2[13] + t4044*var2[14] + t4191*var2[15];
  p_output1[29]=t4528*var2[5] + t4446*var2[13] + t4673*var2[14];
  p_output1[30]=(t4341*(-1.*t3778*t5600 - 1.*t3729*t5612 - 1.*t3857*t5782 - 1.*t3902*t5804) + t3966*(t1322*t215*t5600 - 1.*t1070*t215*t5612 + t4386*t5782 + t4374*t5804))*var2[13] + (t3966*(t1070*t1323*t5600 + t1322*t1323*t5612 + t1322*t4374*t6248 + t1070*t4386*t6248 + t7118 + t7120) + t4341*(-1.*t1070*t1147*t215*t5600 - 1.*t1147*t1322*t215*t5612 - 1.*t1070*t3857*t6248 - 1.*t1322*t3902*t6248 + t7128 + t7129) + t215*(-1.*t3857*t5600 - 1.*t3902*t5612 + t7139) - 1.*t1147*t1323*t7806)*var2[14] + (0. + t4341*(0. - 1.*t4120*t5600 - 1.*t4181*t5612 + t7068) - 1.*t215*t464*t7806)*var2[15];
  p_output1[31]=(t4341*(t1941*t5600 + t2029*t5612 + t1544*t5782 + t1490*t5804) + (-1.*t1322*t215*t5600 + t1070*t215*t5612 - 1.*t4386*t5782 - 1.*t4374*t5804)*t827)*var2[13] + (t215*(t1544*t5600 + t1490*t5612 + t7333) + t4341*(t1070*t215*t464*t5600 + t1322*t215*t464*t5612 + t1322*t1490*t6248 + t1070*t1544*t6248 + t7424 + t7425) - 1.*t1323*t464*t8000 + (-1.*t1070*t1323*t5600 - 1.*t1322*t1323*t5612 - 1.*t1322*t4374*t6248 - 1.*t1070*t4386*t6248 + t7406 + t7407)*t827)*var2[14] + (0. + t4341*(0. + t3468*t5600 + t3503*t5612 + t7267) + t1147*t215*t8000)*var2[15];
  p_output1[32]=(t3966*(-1.*t1941*t5600 - 1.*t2029*t5612 - 1.*t1544*t5782 - 1.*t1490*t5804) + (t3778*t5600 + t3729*t5612 + t3857*t5782 + t3902*t5804)*t827)*var2[13] + (t3966*(-1.*t1070*t215*t464*t5600 - 1.*t1322*t215*t464*t5612 - 1.*t1322*t1490*t6248 - 1.*t1070*t1544*t6248 + t7509 + t7514) - 1.*t1323*t464*t8184 - 1.*t1147*t1323*t8207 + (t1070*t1147*t215*t5600 + t1147*t1322*t215*t5612 + t1070*t3857*t6248 + t1322*t3902*t6248 + t7469 + t7477)*t827)*var2[14] + (t3966*(0. - 1.*t3468*t5600 - 1.*t3503*t5612 + t7538) + t1147*t215*t8184 - 1.*t215*t464*t8207 + (0. + t4120*t5600 + t4181*t5612 + t7546)*t827)*var2[15];
  p_output1[33]=t8258;
  p_output1[34]=t8267;
  p_output1[35]=t8268;
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
  p_output1[78]=(0.07996*t215*t464 + t3966*(t1323*t5596 - 1.*t215*t6248 + t1323*t6302 + t7118) + t1323*(-1.*t1147*t215*t5596 - 1.*t3706*t6248 + t7128 + t7129) + t215*(-1.*t3713*t5553 - 1.*t3706*t5596 + t7139) - 1.*t1147*t1323*t8277)*var2[14] + (0. + 0.07996*t1147*t1323 + 0.135*t464 + t1323*(0. - 1.*t1147*t5553 + t1323*t464*t5596 + t7068) - 1.*t215*t464*t8277)*var2[15];
  p_output1[79]=(0.07996*t1147*t215 + t215*(t1188*t5553 + t1410*t5596 + t7333) + t1323*(t215*t464*t5596 + t1410*t6248 + t7424 + t7425) + (-1.*t1323*t5596 + t215*t6248 - 1.*t1323*t6302 + t7406)*t827 - 1.*t1323*t464*t8377)*var2[14] + (0. + 0.135*t1147 - 0.07996*t1323*t464 + t1147*t215*t8377 + t1323*(0. + t1147*t1323*t5596 + t7267 + t8393))*var2[15];
  p_output1[80]=(0.07996*t1323 + t3966*(-1.*t215*t464*t5596 - 1.*t1410*t6248 + t7509 + t7514) + (t1147*t215*t5596 + t3706*t6248 + t7469 + t7477)*t827 - 1.*t1323*t464*t8480 - 1.*t1147*t1323*t8496)*var2[14] + ((0. + t1147*t5553 - 1.*t1323*t464*t5596 + t7546)*t827 + t1147*t215*t8480 - 1.*t215*t464*t8496 + t3966*(0. - 1.*t1147*t1323*t5596 + t7538 + t8520))*var2[15];
  p_output1[81]=t8258;
  p_output1[82]=t8267;
  p_output1[83]=t8268;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=(t464*(0. + t1147*t5583 + t8393) + t464*(0. - 1.*t1147*t5583 + t8520))*var2[15];
  p_output1[87]=t464*var2[15];
  p_output1[88]=t1147*var2[15];
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

#include "dJb_RightThighJoint_mex.hh"

namespace SymExpression
{

void dJb_RightThighJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
