/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:08 GMT-04:00
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
  double t175;
  double t618;
  double t716;
  double t580;
  double t812;
  double t960;
  double t1055;
  double t1168;
  double t1375;
  double t1543;
  double t1702;
  double t1796;
  double t1867;
  double t1942;
  double t2014;
  double t2074;
  double t650;
  double t838;
  double t856;
  double t2804;
  double t388;
  double t3981;
  double t4984;
  double t5195;
  double t5235;
  double t5296;
  double t5561;
  double t5600;
  double t4651;
  double t5198;
  double t5367;
  double t5369;
  double t3624;
  double t3846;
  double t3917;
  double t6181;
  double t6187;
  double t6201;
  double t6209;
  double t6294;
  double t6308;
  double t6444;
  double t6465;
  double t6471;
  double t6595;
  double t4364;
  double t4365;
  double t4530;
  double t7653;
  double t7700;
  double t7739;
  double t2336;
  double t2476;
  double t2530;
  double t2865;
  double t3196;
  double t3280;
  double t3938;
  double t3999;
  double t4078;
  double t4193;
  double t4194;
  double t4349;
  double t4740;
  double t5388;
  double t5416;
  double t5438;
  double t5439;
  double t5454;
  double t5601;
  double t5742;
  double t5950;
  double t5979;
  double t5984;
  double t6056;
  double t6105;
  double t6135;
  double t6192;
  double t6272;
  double t6273;
  double t6319;
  double t6519;
  double t6596;
  double t6619;
  double t6758;
  double t6843;
  double t6859;
  double t6866;
  double t7067;
  double t7169;
  double t7171;
  double t7233;
  double t7309;
  double t7417;
  double t9735;
  double t9738;
  double t9744;
  double t9747;
  double t9748;
  double t9752;
  double t9754;
  double t9741;
  double t9774;
  double t9781;
  double t9786;
  double t9788;
  double t9789;
  double t9790;
  double t9791;
  double t9794;
  double t9810;
  double t9815;
  double t9818;
  double t9820;
  double t9821;
  double t9823;
  double t9787;
  double t9795;
  double t9797;
  double t9830;
  double t9832;
  double t9834;
  double t9819;
  double t9826;
  double t9827;
  double t9846;
  double t9848;
  double t9850;
  double t9851;
  double t9852;
  double t9853;
  double t9868;
  double t9869;
  double t9870;
  double t9836;
  double t9849;
  double t9854;
  double t9858;
  double t9877;
  double t9798;
  double t9828;
  double t9840;
  double t9842;
  double t9920;
  double t9905;
  double t9908;
  double t9909;
  double t9894;
  double t9895;
  double t9896;
  double t9897;
  double t9701;
  double t9707;
  double t9709;
  double t9679;
  double t9683;
  double t9686;
  double t9982;
  double t9983;
  double t9990;
  double t9977;
  double t9671;
  double t9672;
  double t9674;
  double t9717;
  double t9718;
  double t9724;
  double t10034;
  double t10035;
  double t10032;
  double t10036;
  double t10037;
  double t10038;
  double t10044;
  double t10051;
  double t10053;
  double t10064;
  double t10065;
  double t10066;
  double t10068;
  double t10069;
  double t10123;
  double t10124;
  double t10125;
  double t10126;
  double t10141;
  double t10145;
  double t10147;
  double t10162;
  double t10163;
  double t10164;
  double t10165;
  double t10166;
  double t9658;
  double t9659;
  double t9663;
  double t9670;
  double t9676;
  double t9677;
  double t9678;
  double t9691;
  double t9693;
  double t9697;
  double t9698;
  double t9713;
  double t9733;
  double t9734;
  double t9844;
  double t9862;
  double t9880;
  double t9883;
  double t10206;
  double t10207;
  double t10208;
  double t9904;
  double t9912;
  double t9933;
  double t9949;
  double t10218;
  double t10219;
  double t10220;
  double t10007;
  double t10023;
  double t10043;
  double t10056;
  double t10057;
  double t10251;
  double t10252;
  double t10073;
  double t10255;
  double t10080;
  double t10082;
  double t10263;
  double t10264;
  double t10265;
  double t10266;
  double t10112;
  double t10128;
  double t10289;
  double t10290;
  double t10140;
  double t10151;
  double t10155;
  double t10170;
  double t10300;
  double t10176;
  double t10179;
  double t10307;
  double t10308;
  double t10309;
  double t10310;
  double t10237;
  double t10243;
  double t10281;
  double t10394;
  double t10395;
  t175 = Cos(var1[3]);
  t618 = Cos(var1[6]);
  t716 = Sin(var1[5]);
  t580 = Cos(var1[5]);
  t812 = Sin(var1[6]);
  t960 = Sin(var1[4]);
  t1055 = t618*t716;
  t1168 = t580*t812;
  t1375 = t1055 + t1168;
  t1543 = t175*t960*t1375;
  t1702 = Sin(var1[3]);
  t1796 = t580*t618;
  t1867 = -1.*t716*t812;
  t1942 = t1796 + t1867;
  t2014 = -1.*t1702*t1942;
  t2074 = t1543 + t2014;
  t650 = -1.*t580*t618;
  t838 = t716*t812;
  t856 = 0. + t650 + t838;
  t2804 = Cos(var1[7]);
  t388 = Cos(var1[4]);
  t3981 = Sin(var1[7]);
  t4984 = t618*t3981;
  t5195 = 0. + t4984;
  t5235 = t812*t3981;
  t5296 = 0. + t5235;
  t5561 = t580*t5195;
  t5600 = -1.*t716*t5296;
  t4651 = 0. + t2804;
  t5198 = t716*t5195;
  t5367 = t580*t5296;
  t5369 = 0. + t5198 + t5367;
  t3624 = t618*t2804*t716;
  t3846 = t580*t2804*t812;
  t3917 = t3624 + t3846;
  t6181 = -1.*t618*t2804;
  t6187 = 0. + t6181;
  t6201 = -1.*t2804*t812;
  t6209 = 0. + t6201;
  t6294 = t580*t6187;
  t6308 = -1.*t716*t6209;
  t6444 = t6187*t716;
  t6465 = t580*t6209;
  t6471 = 0. + t6444 + t6465;
  t6595 = 0. + t3981;
  t4364 = t580*t618*t3981;
  t4365 = -1.*t716*t812*t3981;
  t4530 = t4364 + t4365;
  t7653 = t1702*t960*t1375;
  t7700 = t175*t1942;
  t7739 = t7653 + t7700;
  t2336 = 0. + t1055 + t1168;
  t2476 = t960*t856;
  t2530 = 0. + t2476;
  t2865 = t580*t618*t2804;
  t3196 = -1.*t2804*t716*t812;
  t3280 = t2865 + t3196;
  t3938 = t960*t3917;
  t3999 = -1.*t388*t3981;
  t4078 = t3938 + t3999;
  t4193 = -1.*t618*t716*t3981;
  t4194 = -1.*t580*t812*t3981;
  t4349 = t4193 + t4194;
  t4740 = -1.*t4651*t960;
  t5388 = t388*t5369;
  t5416 = t4740 + t5388;
  t5438 = -1.*t716*t5195;
  t5439 = -1.*t580*t5296;
  t5454 = t5438 + t5439;
  t5601 = t5561 + t5600;
  t5742 = 0. + t5561 + t5600;
  t5950 = t388*t4651;
  t5979 = t960*t5369;
  t5984 = 0. + t5950 + t5979;
  t6056 = -1.*t580*t618*t2804;
  t6105 = t2804*t716*t812;
  t6135 = t6056 + t6105;
  t6192 = -1.*t6187*t716;
  t6272 = -1.*t580*t6209;
  t6273 = t6192 + t6272;
  t6319 = t6294 + t6308;
  t6519 = t388*t6471;
  t6596 = -1.*t960*t6595;
  t6619 = t6519 + t6596;
  t6758 = 0. + t6294 + t6308;
  t6843 = t960*t6471;
  t6859 = t388*t6595;
  t6866 = 0. + t6843 + t6859;
  t7067 = t388*t2804;
  t7169 = t618*t716*t3981;
  t7171 = t580*t812*t3981;
  t7233 = t7169 + t7171;
  t7309 = t960*t7233;
  t7417 = t7067 + t7309;
  t9735 = -1.*t618;
  t9738 = 1. + t9735;
  t9744 = -1.*t2804;
  t9747 = 1. + t9744;
  t9748 = 0.135*t9747;
  t9752 = 0.135*t2804;
  t9754 = 0. + t9748 + t9752;
  t9741 = 0.135*t9738;
  t9774 = t618*t9754;
  t9781 = 0.034300000000000004*t812;
  t9786 = 0. + t9741 + t9774 + t9781;
  t9788 = 0.07996*t9738;
  t9789 = 0.04566*t618;
  t9790 = -0.135*t812;
  t9791 = t9754*t812;
  t9794 = 0. + t9788 + t9789 + t9790 + t9791;
  t9810 = -0.08055*t9747;
  t9815 = -0.08055*t2804;
  t9818 = 0. + t9810 + t9815;
  t9820 = t716*t9786;
  t9821 = t580*t9794;
  t9823 = 0. + t9820 + t9821;
  t9787 = t580*t9786;
  t9795 = -1.*t716*t9794;
  t9797 = 0. + t9787 + t9795;
  t9830 = -1.*t9818*t960;
  t9832 = t388*t9823;
  t9834 = 0. + t9830 + t9832;
  t9819 = t388*t9818;
  t9826 = t960*t9823;
  t9827 = 0. + t9819 + t9826;
  t9846 = -0.135*t618;
  t9848 = t9846 + t9774 + t9781;
  t9850 = 0.034300000000000004*t618;
  t9851 = 0.135*t812;
  t9852 = -1.*t9754*t812;
  t9853 = t9850 + t9851 + t9852;
  t9868 = t580*t9848;
  t9869 = t716*t9853;
  t9870 = t9868 + t9869;
  t9836 = 0. + t6519 + t6596;
  t9849 = -1.*t716*t9848;
  t9854 = t580*t9853;
  t9858 = t9849 + t9854;
  t9877 = 0. + t4740 + t5388;
  t9798 = t9797*t6758;
  t9828 = t9827*t6866;
  t9840 = t9834*t9836;
  t9842 = t9798 + t9828 + t9840;
  t9920 = t9787 + t9795;
  t9905 = -1.*t716*t9786;
  t9908 = -1.*t580*t9794;
  t9909 = t9905 + t9908;
  t9894 = -1.*t9797*t5742;
  t9895 = -1.*t9834*t9877;
  t9896 = -1.*t9827*t5984;
  t9897 = t9894 + t9895 + t9896;
  t9701 = -1.*t960*t6471;
  t9707 = -1.*t388*t6595;
  t9709 = t9701 + t9707;
  t9679 = -1.*t388*t4651;
  t9683 = -1.*t960*t5369;
  t9686 = t9679 + t9683;
  t9982 = -1.*t388*t9818;
  t9983 = -1.*t960*t9823;
  t9990 = t9982 + t9983;
  t9977 = t9830 + t9832;
  t9671 = t388*t3917;
  t9672 = t960*t3981;
  t9674 = t9671 + t9672;
  t9717 = -1.*t2804*t960;
  t9718 = t388*t7233;
  t9724 = t9717 + t9718;
  t10034 = t388*t856;
  t10035 = 0. + t10034;
  t10032 = t2336*t9797;
  t10036 = t10035*t9834;
  t10037 = t2530*t9827;
  t10038 = t10032 + t10036 + t10037;
  t10044 = t1942*t9797;
  t10051 = t388*t1375*t9834;
  t10053 = t960*t1375*t9827;
  t10064 = -1.*t9797*t6758;
  t10065 = -1.*t9827*t6866;
  t10066 = -1.*t9834*t9836;
  t10068 = t10064 + t10065 + t10066;
  t10069 = t388*t1375*t10068;
  t10123 = -1.*t2336*t9797;
  t10124 = -1.*t10035*t9834;
  t10125 = -1.*t2530*t9827;
  t10126 = t10123 + t10124 + t10125;
  t10141 = -1.*t1942*t9797;
  t10145 = -1.*t388*t1375*t9834;
  t10147 = -1.*t960*t1375*t9827;
  t10162 = t9797*t5742;
  t10163 = t9834*t9877;
  t10164 = t9827*t5984;
  t10165 = t10162 + t10163 + t10164;
  t10166 = t388*t1375*t10165;
  t9658 = var2[5]*t388*t1375;
  t9659 = var2[6]*t388*t1375;
  t9663 = -1.*var2[4]*t960*t856;
  t9670 = t9658 + t9659 + t9663;
  t9676 = var2[7]*t9674;
  t9677 = var2[6]*t388*t4530;
  t9678 = var2[5]*t388*t5601;
  t9691 = var2[4]*t9686;
  t9693 = t9676 + t9677 + t9678 + t9691;
  t9697 = var2[6]*t388*t6135;
  t9698 = var2[5]*t388*t6319;
  t9713 = var2[4]*t9709;
  t9733 = var2[7]*t9724;
  t9734 = t9697 + t9698 + t9713 + t9733;
  t9844 = t3917*t9797;
  t9862 = t9858*t6758;
  t9880 = -1.*t9797*t4349;
  t9883 = -1.*t9858*t5742;
  t10206 = t9823*t6471;
  t10207 = t9818*t6595;
  t10208 = t10206 + t9798 + t10207;
  t9904 = t9797*t6273;
  t9912 = t9909*t6758;
  t9933 = -1.*t9797*t5454;
  t9949 = -1.*t9909*t5742;
  t10218 = -1.*t9818*t4651;
  t10219 = -1.*t9823*t5369;
  t10220 = t10218 + t10219 + t9894;
  t10007 = -1.*t3280*t9797;
  t10023 = t9797*t4530;
  t10043 = t2336*t9858;
  t10056 = -1.*t3917*t9797;
  t10057 = -1.*t9858*t6758;
  t10251 = t856*t9823;
  t10252 = 0. + t10251 + t10032;
  t10073 = t2336*t9909;
  t10255 = t1375*t9823;
  t10080 = -1.*t9797*t6273;
  t10082 = -1.*t9909*t6758;
  t10263 = -1.*t9823*t6471;
  t10264 = -1.*t9818*t6595;
  t10265 = t10263 + t10064 + t10264;
  t10266 = t1942*t10265;
  t10112 = -1.*t9797*t4530;
  t10128 = t3280*t9797;
  t10289 = -1.*t856*t9823;
  t10290 = 0. + t10289 + t10123;
  t10140 = -1.*t2336*t9858;
  t10151 = t9797*t4349;
  t10155 = t9858*t5742;
  t10170 = -1.*t2336*t9909;
  t10300 = -1.*t1375*t9823;
  t10176 = t9797*t5454;
  t10179 = t9909*t5742;
  t10307 = t9818*t4651;
  t10308 = t9823*t5369;
  t10309 = t10307 + t10308 + t10162;
  t10310 = t1942*t10309;
  t10237 = t9818*t3981;
  t10243 = t9818*t2804;
  t10281 = -1.*t9818*t2804;
  t10394 = -1.*var2[7]*t3981;
  t10395 = var2[7]*t2804;
  p_output1[0]=(-1.*t175*t2336 - 1.*t1702*t2530)*var2[3] + t175*t388*t856*var2[4] + t2074*var2[5] + t2074*var2[6];
  p_output1[1]=(-1.*t175*t5742 - 1.*t1702*t5984)*var2[3] + t175*t5416*var2[4] + (-1.*t1702*t5454 + t175*t5601*t960)*var2[5] + (-1.*t1702*t4349 + t175*t4530*t960)*var2[6] + (-1.*t1702*t3280 + t175*t4078)*var2[7];
  p_output1[2]=(-1.*t175*t6758 - 1.*t1702*t6866)*var2[3] + t175*t6619*var2[4] + (-1.*t1702*t6273 + t175*t6319*t960)*var2[5] + (-1.*t1702*t3917 + t175*t6135*t960)*var2[6] + (-1.*t1702*t4530 + t175*t7417)*var2[7];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=(-1.*t1702*t2336 + t175*t2530)*var2[3] + t1702*t388*t856*var2[4] + t7739*var2[5] + t7739*var2[6];
  p_output1[7]=(-1.*t1702*t5742 + t175*t5984)*var2[3] + t1702*t5416*var2[4] + (t175*t5454 + t1702*t5601*t960)*var2[5] + (t175*t4349 + t1702*t4530*t960)*var2[6] + (t175*t3280 + t1702*t4078)*var2[7];
  p_output1[8]=(-1.*t1702*t6758 + t175*t6866)*var2[3] + t1702*t6619*var2[4] + (t175*t6273 + t1702*t6319*t960)*var2[5] + (t175*t3917 + t1702*t6135*t960)*var2[6] + (t175*t4530 + t1702*t7417)*var2[7];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t9670;
  p_output1[13]=t9693;
  p_output1[14]=t9734;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t9686*t9842 + t9709*t9897 + t9877*(t6619*t9827 + t9709*t9834 + t6866*t9977 + t9836*t9990) + t9836*(-1.*t5416*t9827 - 1.*t9686*t9834 - 1.*t5984*t9977 - 1.*t9877*t9990))*var2[4] + (t388*t5601*t9842 + t388*t6319*t9897 + t9877*(t6319*t960*t9827 + t388*t6319*t9834 + t9904 + t9912 + t6866*t960*t9920 + t388*t9836*t9920) + t9836*(-1.*t5601*t960*t9827 - 1.*t388*t5601*t9834 - 1.*t5984*t960*t9920 - 1.*t388*t9877*t9920 + t9933 + t9949))*var2[5] + (t388*t4530*t9842 + (t6135*t960*t9827 + t388*t6135*t9834 + t9844 + t9862 + t6866*t960*t9870 + t388*t9836*t9870)*t9877 + t9836*(-1.*t4530*t960*t9827 - 1.*t388*t4530*t9834 - 1.*t5984*t960*t9870 - 1.*t388*t9870*t9877 + t9880 + t9883) + t388*t6135*t9897)*var2[6] + ((0. + t10007 - 1.*t4078*t9827 - 1.*t9674*t9834)*t9836 + t9674*t9842 + (0. + t10023 + t7417*t9827 + t9724*t9834)*t9877 + t9724*t9897)*var2[7];
  p_output1[19]=(-1.*t10068*t856*t960 + t10038*t9709 + t9836*(t388*t856*t9827 - 1.*t856*t960*t9834 + t2530*t9977 + t10035*t9990) + t10035*(-1.*t6619*t9827 - 1.*t9709*t9834 - 1.*t6866*t9977 - 1.*t9836*t9990))*var2[4] + (t10069 + t10038*t388*t6319 + t9836*(t10044 + t10051 + t10053 + t10073 + t10035*t388*t9920 + t2530*t960*t9920) + t10035*(t10080 + t10082 - 1.*t6319*t960*t9827 - 1.*t388*t6319*t9834 - 1.*t6866*t960*t9920 - 1.*t388*t9836*t9920))*var2[5] + (t10069 + t10038*t388*t6135 + t9836*(t10043 + t10044 + t10051 + t10053 + t10035*t388*t9870 + t2530*t960*t9870) + t10035*(t10056 + t10057 - 1.*t6135*t960*t9827 - 1.*t388*t6135*t9834 - 1.*t6866*t960*t9870 - 1.*t388*t9836*t9870))*var2[6] + (0. + t10038*t9724 + t10035*(0. + t10112 - 1.*t7417*t9827 - 1.*t9724*t9834))*var2[7];
  p_output1[20]=(-1.*t10165*t856*t960 + t10126*t9686 + t9877*(-1.*t388*t856*t9827 + t856*t960*t9834 - 1.*t2530*t9977 - 1.*t10035*t9990) + t10035*(t5416*t9827 + t9686*t9834 + t5984*t9977 + t9877*t9990))*var2[4] + (t10166 + t10126*t388*t5601 + t9877*(t10141 + t10145 + t10147 + t10170 - 1.*t10035*t388*t9920 - 1.*t2530*t960*t9920) + t10035*(t10176 + t10179 + t5601*t960*t9827 + t388*t5601*t9834 + t5984*t960*t9920 + t388*t9877*t9920))*var2[5] + (t10166 + t10126*t388*t4530 + (t10140 + t10141 + t10145 + t10147 - 1.*t10035*t388*t9870 - 1.*t2530*t960*t9870)*t9877 + t10035*(t10151 + t10155 + t4530*t960*t9827 + t388*t4530*t9834 + t5984*t960*t9870 + t388*t9870*t9877))*var2[6] + (0. + t10126*t9674 + t10035*(0. + t10128 + t4078*t9827 + t9674*t9834))*var2[7];
  p_output1[21]=t9670;
  p_output1[22]=t9693;
  p_output1[23]=t9734;
  p_output1[24]=(t10208*t5454 + t10220*t6273 + t5742*(t6319*t9823 + t9904 + t9912 + t6471*t9920) + t6758*(-1.*t5601*t9823 - 1.*t5369*t9920 + t9933 + t9949))*var2[5] + (t10220*t3917 + t10208*t4349 + t5742*(t6135*t9823 + t9844 + t9862 + t6471*t9870) + t6758*(-1.*t4530*t9823 - 1.*t5369*t9870 + t9880 + t9883))*var2[6] + (t10208*t3280 + t10220*t4530 + t6758*(0. + t10007 + t10237 - 1.*t3917*t9823) + t5742*(0. + t10023 + t10243 + t7233*t9823))*var2[7];
  p_output1[25]=(t10266 + t10252*t6273 + t2336*(t10080 + t10082 - 1.*t6319*t9823 - 1.*t6471*t9920) + t6758*(t10044 + t10073 + t10255 + t856*t9920))*var2[5] + (t10266 + t10252*t3917 + t2336*(t10056 + t10057 - 1.*t6135*t9823 - 1.*t6471*t9870) + t6758*(t10043 + t10044 + t10255 + t856*t9870))*var2[6] + (0. + t10252*t4530 + t2336*(0. + t10112 + t10281 - 1.*t7233*t9823))*var2[7];
  p_output1[26]=(t10310 + t10290*t5454 + t2336*(t10176 + t10179 + t5601*t9823 + t5369*t9920) + t5742*(t10141 + t10170 + t10300 - 1.*t856*t9920))*var2[5] + (t10310 + t10290*t4349 + t2336*(t10151 + t10155 + t4530*t9823 + t5369*t9870) + t5742*(t10140 + t10141 + t10300 - 1.*t856*t9870))*var2[6] + (0. + t10290*t3280 + t2336*(0. + t10128 - 1.*t3981*t9818 + t3917*t9823))*var2[7];
  p_output1[27]=t1942*var2[5] + t1942*var2[6];
  p_output1[28]=t5454*var2[5] + t4349*var2[6] + t3280*var2[7];
  p_output1[29]=t6273*var2[5] + t3917*var2[6] + t4530*var2[7];
  p_output1[30]=(t6595*(t3981*t812*t9786 - 1.*t3981*t618*t9794 - 1.*t5296*t9848 - 1.*t5195*t9853) + t4651*(t2804*t812*t9786 - 1.*t2804*t618*t9794 + t6209*t9848 + t6187*t9853))*var2[6] + (t2804*(t10218 - 1.*t5195*t9786 - 1.*t5296*t9794) - 1.*t3981*(t10207 + t6187*t9786 + t6209*t9794) + t6595*(0. + t10237 - 1.*t2804*t618*t9786 - 1.*t2804*t812*t9794) + t4651*(0. + t10243 + t3981*t618*t9786 + t3981*t812*t9794))*var2[7];
  p_output1[31]=t6595*(t618*t9786 + t812*t9794 - 1.*t618*t9848 + t812*t9853)*var2[6] + (0. + t2804*(0. + t812*t9786 - 1.*t618*t9794))*var2[7];
  p_output1[32]=t4651*(-1.*t618*t9786 - 1.*t812*t9794 + t618*t9848 - 1.*t812*t9853)*var2[6] + (0. - 1.*t3981*(0. - 1.*t812*t9786 + t618*t9794))*var2[7];
  p_output1[33]=0;
  p_output1[34]=t10394;
  p_output1[35]=t10395;
  p_output1[36]=(t2804*(0. + t10281 - 1.*t3981*t9754) + t2804*(0. + t10243 + t3981*t9754))*var2[7];
  p_output1[37]=0.034300000000000004*t2804*var2[7];
  p_output1[38]=0.034300000000000004*t3981*var2[7];
  p_output1[39]=0;
  p_output1[40]=t10394;
  p_output1[41]=t10395;
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

#include "dJb_LeftHip_mex.hh"

namespace SymExpression
{

void dJb_LeftHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
