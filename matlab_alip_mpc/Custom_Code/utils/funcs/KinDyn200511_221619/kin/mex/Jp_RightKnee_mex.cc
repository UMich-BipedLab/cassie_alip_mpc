/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:52 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double t1480;
  double t1526;
  double t1723;
  double t1752;
  double t2001;
  double t2847;
  double t2255;
  double t2645;
  double t2873;
  double t510;
  double t558;
  double t586;
  double t972;
  double t2683;
  double t2917;
  double t2944;
  double t3365;
  double t3444;
  double t3450;
  double t76;
  double t3930;
  double t4101;
  double t4303;
  double t4614;
  double t4632;
  double t4638;
  double t4693;
  double t4823;
  double t4830;
  double t4888;
  double t5491;
  double t5515;
  double t5824;
  double t5989;
  double t6087;
  double t6163;
  double t6237;
  double t6361;
  double t6432;
  double t6497;
  double t6877;
  double t7038;
  double t7067;
  double t971;
  double t1097;
  double t1135;
  double t1780;
  double t2056;
  double t2207;
  double t3003;
  double t3063;
  double t3210;
  double t3523;
  double t3604;
  double t3920;
  double t7589;
  double t7643;
  double t7644;
  double t7755;
  double t7767;
  double t7846;
  double t4652;
  double t4720;
  double t4776;
  double t7903;
  double t7907;
  double t7917;
  double t5358;
  double t5372;
  double t5391;
  double t6214;
  double t6248;
  double t6316;
  double t7938;
  double t7946;
  double t7961;
  double t8037;
  double t8054;
  double t8058;
  double t6553;
  double t6814;
  double t6843;
  double t8083;
  double t8099;
  double t8126;
  double t8139;
  double t8142;
  double t8145;
  double t8256;
  double t8260;
  double t8261;
  double t8277;
  double t8287;
  double t8289;
  double t8303;
  double t8306;
  double t8315;
  double t8320;
  double t8322;
  double t8330;
  double t8336;
  double t8339;
  double t8342;
  double t8375;
  double t8381;
  double t8382;
  double t8392;
  double t8393;
  double t8395;
  double t8404;
  double t8407;
  double t8408;
  double t8412;
  double t8413;
  double t8429;
  double t8439;
  double t8451;
  double t8452;
  double t8487;
  double t8490;
  double t8498;
  double t8503;
  double t8508;
  double t8509;
  double t8523;
  double t8524;
  double t8525;
  double t8527;
  double t8528;
  double t8538;
  double t8546;
  double t8550;
  double t8555;
  double t8585;
  double t8586;
  double t8589;
  double t8607;
  double t8608;
  double t8599;
  double t8603;
  double t8604;
  double t8614;
  double t8615;
  double t8617;
  double t8619;
  double t8622;
  double t8623;
  double t8650;
  double t8651;
  double t8652;
  double t8663;
  double t8665;
  double t8666;
  double t8658;
  double t8659;
  double t8672;
  double t8674;
  double t8675;
  double t8679;
  double t8683;
  double t8684;
  double t8709;
  double t8713;
  double t8714;
  double t8705;
  double t8706;
  double t8707;
  double t8722;
  double t8723;
  double t8724;
  double t8728;
  double t8729;
  double t8730;
  double t8766;
  double t8767;
  double t8777;
  double t8778;
  double t8779;
  double t8781;
  double t8783;
  double t8784;
  double t8753;
  double t8754;
  double t8759;
  double t8760;
  double t8763;
  double t8807;
  double t8808;
  double t8809;
  double t8816;
  double t8817;
  double t8812;
  double t8813;
  double t8821;
  double t8822;
  double t8824;
  double t8826;
  double t8827;
  double t8828;
  double t8708;
  double t8715;
  double t8718;
  double t8721;
  double t8726;
  double t8737;
  double t8738;
  double t8739;
  double t8744;
  double t8745;
  double t8746;
  double t8747;
  double t8750;
  double t8751;
  double t7989;
  double t8013;
  double t8016;
  double t8847;
  double t8848;
  double t8849;
  double t8851;
  double t8852;
  double t8875;
  double t8876;
  double t8877;
  double t8879;
  double t8880;
  double t8881;
  double t8899;
  double t8900;
  double t8902;
  double t8905;
  double t8906;
  double t8907;
  double t8937;
  double t8938;
  double t8939;
  double t8182;
  double t8927;
  double t8928;
  double t8932;
  double t8933;
  double t8934;
  double t8952;
  double t8953;
  double t8954;
  double t8956;
  double t8957;
  double t8960;
  double t8962;
  double t8963;
  double t8964;
  double t8976;
  double t8977;
  double t8978;
  double t8980;
  double t8981;
  double t8982;
  double t8984;
  double t8985;
  double t8986;
  double t8180;
  double t8196;
  double t8947;
  double t8998;
  double t8999;
  double t9000;
  double t9002;
  double t9003;
  double t9010;
  double t9011;
  double t9012;
  double t8967;
  double t8971;
  double t9023;
  double t9024;
  double t9025;
  double t8990;
  double t8994;
  t1480 = Sin(var1[3]);
  t1526 = Cos(var1[13]);
  t1723 = -1.*t1526;
  t1752 = 1. + t1723;
  t2001 = Sin(var1[13]);
  t2847 = Cos(var1[3]);
  t2255 = Cos(var1[5]);
  t2645 = Sin(var1[4]);
  t2873 = Sin(var1[5]);
  t510 = Cos(var1[14]);
  t558 = -1.*t510;
  t586 = 1. + t558;
  t972 = Sin(var1[14]);
  t2683 = -1.*t2255*t1480*t2645;
  t2917 = t2847*t2873;
  t2944 = t2683 + t2917;
  t3365 = -1.*t2847*t2255;
  t3444 = -1.*t1480*t2645*t2873;
  t3450 = t3365 + t3444;
  t76 = Cos(var1[4]);
  t3930 = t2001*t2944;
  t4101 = t1526*t3450;
  t4303 = t3930 + t4101;
  t4614 = Cos(var1[15]);
  t4632 = -1.*t4614;
  t4638 = 1. + t4632;
  t4693 = Sin(var1[15]);
  t4823 = t1526*t2944;
  t4830 = -1.*t2001*t3450;
  t4888 = t4823 + t4830;
  t5491 = -1.*t510*t76*t1480;
  t5515 = t972*t4303;
  t5824 = t5491 + t5515;
  t5989 = Cos(var1[16]);
  t6087 = -1.*t5989;
  t6163 = 1. + t6087;
  t6237 = Sin(var1[16]);
  t6361 = t4693*t4888;
  t6432 = t4614*t5824;
  t6497 = t6361 + t6432;
  t6877 = t4614*t4888;
  t7038 = -1.*t4693*t5824;
  t7067 = t6877 + t7038;
  t971 = -0.08055*t586;
  t1097 = -0.135*t972;
  t1135 = 0. + t971 + t1097;
  t1780 = 0.07996*t1752;
  t2056 = 0.135*t2001;
  t2207 = 0. + t1780 + t2056;
  t3003 = -0.135*t1752;
  t3063 = 0.07996*t2001;
  t3210 = 0. + t3003 + t3063;
  t3523 = -0.135*t586;
  t3604 = 0.08055*t972;
  t3920 = 0. + t3523 + t3604;
  t7589 = t2847*t2255*t2645;
  t7643 = t1480*t2873;
  t7644 = t7589 + t7643;
  t7755 = -1.*t2255*t1480;
  t7767 = t2847*t2645*t2873;
  t7846 = t7755 + t7767;
  t4652 = -0.01004*t4638;
  t4720 = 0.08055*t4693;
  t4776 = 0. + t4652 + t4720;
  t7903 = t2001*t7644;
  t7907 = t1526*t7846;
  t7917 = t7903 + t7907;
  t5358 = -0.08055*t4638;
  t5372 = -0.01004*t4693;
  t5391 = 0. + t5358 + t5372;
  t6214 = -0.08055*t6163;
  t6248 = -0.13004*t6237;
  t6316 = 0. + t6214 + t6248;
  t7938 = t1526*t7644;
  t7946 = -1.*t2001*t7846;
  t7961 = t7938 + t7946;
  t8037 = t510*t2847*t76;
  t8054 = t972*t7917;
  t8058 = t8037 + t8054;
  t6553 = -0.13004*t6163;
  t6814 = 0.08055*t6237;
  t6843 = 0. + t6553 + t6814;
  t8083 = t4693*t7961;
  t8099 = t4614*t8058;
  t8126 = t8083 + t8099;
  t8139 = t4614*t7961;
  t8142 = -1.*t4693*t8058;
  t8145 = t8139 + t8142;
  t8256 = t2847*t76*t2255*t2001;
  t8260 = t1526*t2847*t76*t2873;
  t8261 = t8256 + t8260;
  t8277 = t1526*t2847*t76*t2255;
  t8287 = -1.*t2847*t76*t2001*t2873;
  t8289 = t8277 + t8287;
  t8303 = -1.*t510*t2847*t2645;
  t8306 = t972*t8261;
  t8315 = t8303 + t8306;
  t8320 = t4693*t8289;
  t8322 = t4614*t8315;
  t8330 = t8320 + t8322;
  t8336 = t4614*t8289;
  t8339 = -1.*t4693*t8315;
  t8342 = t8336 + t8339;
  t8375 = t76*t2255*t2001*t1480;
  t8381 = t1526*t76*t1480*t2873;
  t8382 = t8375 + t8381;
  t8392 = t1526*t76*t2255*t1480;
  t8393 = -1.*t76*t2001*t1480*t2873;
  t8395 = t8392 + t8393;
  t8404 = -1.*t510*t1480*t2645;
  t8407 = t972*t8382;
  t8408 = t8404 + t8407;
  t8412 = t4693*t8395;
  t8413 = t4614*t8408;
  t8429 = t8412 + t8413;
  t8439 = t4614*t8395;
  t8451 = -1.*t4693*t8408;
  t8452 = t8439 + t8451;
  t8487 = -1.*t2255*t2001*t2645;
  t8490 = -1.*t1526*t2645*t2873;
  t8498 = t8487 + t8490;
  t8503 = -1.*t1526*t2255*t2645;
  t8508 = t2001*t2645*t2873;
  t8509 = t8503 + t8508;
  t8523 = -1.*t510*t76;
  t8524 = t972*t8498;
  t8525 = t8523 + t8524;
  t8527 = t4693*t8509;
  t8528 = t4614*t8525;
  t8538 = t8527 + t8528;
  t8546 = t4614*t8509;
  t8550 = -1.*t4693*t8525;
  t8555 = t8546 + t8550;
  t8585 = t2255*t1480;
  t8586 = -1.*t2847*t2645*t2873;
  t8589 = t8585 + t8586;
  t8607 = t2001*t8589;
  t8608 = t7938 + t8607;
  t8599 = -1.*t2001*t7644;
  t8603 = t1526*t8589;
  t8604 = t8599 + t8603;
  t8614 = t4693*t8604;
  t8615 = t4614*t972*t8608;
  t8617 = t8614 + t8615;
  t8619 = t4614*t8604;
  t8622 = -1.*t972*t4693*t8608;
  t8623 = t8619 + t8622;
  t8650 = t2255*t1480*t2645;
  t8651 = -1.*t2847*t2873;
  t8652 = t8650 + t8651;
  t8663 = t1526*t8652;
  t8665 = t2001*t3450;
  t8666 = t8663 + t8665;
  t8658 = -1.*t2001*t8652;
  t8659 = t8658 + t4101;
  t8672 = t4693*t8659;
  t8674 = t4614*t972*t8666;
  t8675 = t8672 + t8674;
  t8679 = t4614*t8659;
  t8683 = -1.*t972*t4693*t8666;
  t8684 = t8679 + t8683;
  t8709 = t1526*t76*t2255;
  t8713 = -1.*t76*t2001*t2873;
  t8714 = t8709 + t8713;
  t8705 = -1.*t76*t2255*t2001;
  t8706 = -1.*t1526*t76*t2873;
  t8707 = t8705 + t8706;
  t8722 = t4693*t8707;
  t8723 = t4614*t972*t8714;
  t8724 = t8722 + t8723;
  t8728 = t4614*t8707;
  t8729 = -1.*t972*t4693*t8714;
  t8730 = t8728 + t8729;
  t8766 = -1.*t1526*t7846;
  t8767 = t8599 + t8766;
  t8777 = t4693*t8767;
  t8778 = t4614*t972*t7961;
  t8779 = t8777 + t8778;
  t8781 = t4614*t8767;
  t8783 = -1.*t972*t4693*t7961;
  t8784 = t8781 + t8783;
  t8753 = 0.135*t1526;
  t8754 = t8753 + t3063;
  t8759 = 0.07996*t1526;
  t8760 = -0.135*t2001;
  t8763 = t8759 + t8760;
  t8807 = t2847*t2255;
  t8808 = t1480*t2645*t2873;
  t8809 = t8807 + t8808;
  t8816 = -1.*t2001*t8809;
  t8817 = t8663 + t8816;
  t8812 = -1.*t1526*t8809;
  t8813 = t8658 + t8812;
  t8821 = t4693*t8813;
  t8822 = t4614*t972*t8817;
  t8824 = t8821 + t8822;
  t8826 = t4614*t8813;
  t8827 = -1.*t972*t4693*t8817;
  t8828 = t8826 + t8827;
  t8708 = t4776*t8707;
  t8715 = -0.1327*t510*t8714;
  t8718 = t3920*t8714;
  t8721 = t972*t5391*t8714;
  t8726 = t6316*t8724;
  t8737 = t6843*t8730;
  t8738 = -1.*t6237*t8724;
  t8739 = t5989*t8730;
  t8744 = t8738 + t8739;
  t8745 = -0.15304*t8744;
  t8746 = t5989*t8724;
  t8747 = t6237*t8730;
  t8750 = t8746 + t8747;
  t8751 = -0.04845*t8750;
  t7989 = -1.*t2847*t76*t972;
  t8013 = t510*t7917;
  t8016 = t7989 + t8013;
  t8847 = -0.135*t510;
  t8848 = -0.08055*t972;
  t8849 = t8847 + t8848;
  t8851 = 0.08055*t510;
  t8852 = t8851 + t1097;
  t8875 = t2001*t8652;
  t8876 = t1526*t8809;
  t8877 = t8875 + t8876;
  t8879 = -1.*t76*t972*t1480;
  t8880 = t510*t8877;
  t8881 = t8879 + t8880;
  t8899 = t76*t2255*t2001;
  t8900 = t1526*t76*t2873;
  t8902 = t8899 + t8900;
  t8905 = t972*t2645;
  t8906 = t510*t8902;
  t8907 = t8905 + t8906;
  t8937 = -1.*t4693*t7961;
  t8938 = -1.*t4614*t8058;
  t8939 = t8937 + t8938;
  t8182 = t5989*t8145;
  t8927 = 0.08055*t4614;
  t8928 = t8927 + t5372;
  t8932 = -0.01004*t4614;
  t8933 = -0.08055*t4693;
  t8934 = t8932 + t8933;
  t8952 = t510*t76*t1480;
  t8953 = t972*t8877;
  t8954 = t8952 + t8953;
  t8956 = -1.*t4693*t8817;
  t8957 = -1.*t4614*t8954;
  t8960 = t8956 + t8957;
  t8962 = t4614*t8817;
  t8963 = -1.*t4693*t8954;
  t8964 = t8962 + t8963;
  t8976 = -1.*t510*t2645;
  t8977 = t972*t8902;
  t8978 = t8976 + t8977;
  t8980 = -1.*t4693*t8714;
  t8981 = -1.*t4614*t8978;
  t8982 = t8980 + t8981;
  t8984 = t4614*t8714;
  t8985 = -1.*t4693*t8978;
  t8986 = t8984 + t8985;
  t8180 = -1.*t6237*t8126;
  t8196 = t8180 + t8182;
  t8947 = -1.*t6237*t8145;
  t8998 = -0.13004*t5989;
  t8999 = -0.08055*t6237;
  t9000 = t8998 + t8999;
  t9002 = 0.08055*t5989;
  t9003 = t9002 + t6248;
  t9010 = t4693*t8817;
  t9011 = t4614*t8954;
  t9012 = t9010 + t9011;
  t8967 = t5989*t8964;
  t8971 = -1.*t6237*t8964;
  t9023 = t4693*t8714;
  t9024 = t4614*t8978;
  t9025 = t9023 + t9024;
  t8990 = t5989*t8986;
  t8994 = -1.*t6237*t8986;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2207*t2944 + t3210*t3450 + t3920*t4303 + t4776*t4888 + t5391*t5824 + t6316*t6497 + t6843*t7067 - 0.15304*(-1.*t6237*t6497 + t5989*t7067) - 0.04845*(t5989*t6497 + t6237*t7067) - 1.*t1135*t1480*t76 - 0.1327*(t4303*t510 + t1480*t76*t972);
  p_output1[10]=t1135*t2847*t76 + t2207*t7644 + t3210*t7846 + t3920*t7917 + t4776*t7961 - 0.1327*t8016 + t5391*t8058 + t6316*t8126 + t6843*t8145 - 0.04845*(t5989*t8126 + t6237*t8145) - 0.15304*t8196;
  p_output1[11]=0;
  p_output1[12]=-1.*t1135*t2645*t2847 + t2207*t2255*t2847*t76 + t2847*t2873*t3210*t76 + t3920*t8261 + t4776*t8289 + t5391*t8315 + t6316*t8330 + t6843*t8342 - 0.15304*(-1.*t6237*t8330 + t5989*t8342) - 0.04845*(t5989*t8330 + t6237*t8342) - 0.1327*(t510*t8261 + t2645*t2847*t972);
  p_output1[13]=-1.*t1135*t1480*t2645 + t1480*t2207*t2255*t76 + t1480*t2873*t3210*t76 + t3920*t8382 + t4776*t8395 + t5391*t8408 + t6316*t8429 + t6843*t8452 - 0.15304*(-1.*t6237*t8429 + t5989*t8452) - 0.04845*(t5989*t8429 + t6237*t8452) - 0.1327*(t510*t8382 + t1480*t2645*t972);
  p_output1[14]=-1.*t2207*t2255*t2645 - 1.*t2645*t2873*t3210 - 1.*t1135*t76 + t3920*t8498 + t4776*t8509 + t5391*t8525 + t6316*t8538 + t6843*t8555 - 0.15304*(-1.*t6237*t8538 + t5989*t8555) - 0.04845*(t5989*t8538 + t6237*t8555) - 0.1327*(t510*t8498 + t76*t972);
  p_output1[15]=t3210*t7644 + t2207*t8589 + t4776*t8604 + t3920*t8608 - 0.1327*t510*t8608 + t6316*t8617 + t6843*t8623 - 0.15304*(-1.*t6237*t8617 + t5989*t8623) - 0.04845*(t5989*t8617 + t6237*t8623) + t5391*t8608*t972;
  p_output1[16]=t2207*t3450 + t3210*t8652 + t4776*t8659 + t3920*t8666 - 0.1327*t510*t8666 + t6316*t8675 + t6843*t8684 - 0.15304*(-1.*t6237*t8675 + t5989*t8684) - 0.04845*(t5989*t8675 + t6237*t8684) + t5391*t8666*t972;
  p_output1[17]=-1.*t2207*t2873*t76 + t2255*t3210*t76 + t8708 + t8715 + t8718 + t8721 + t8726 + t8737 + t8745 + t8751;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
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
  p_output1[39]=t3920*t7961 - 0.1327*t510*t7961 + t7644*t8754 + t7846*t8763 + t4776*t8767 + t6316*t8779 + t6843*t8784 - 0.15304*(-1.*t6237*t8779 + t5989*t8784) - 0.04845*(t5989*t8779 + t6237*t8784) + t5391*t7961*t972;
  p_output1[40]=t8652*t8754 + t8763*t8809 + t4776*t8813 + t3920*t8817 - 0.1327*t510*t8817 + t6316*t8824 + t6843*t8828 - 0.15304*(-1.*t6237*t8824 + t5989*t8828) - 0.04845*(t5989*t8824 + t6237*t8828) + t5391*t8817*t972;
  p_output1[41]=t8708 + t8715 + t8718 + t8721 + t8726 + t8737 + t8745 + t8751 + t2255*t76*t8754 + t2873*t76*t8763;
  p_output1[42]=t5391*t8016 + t4614*t6316*t8016 - 1.*t4693*t6843*t8016 - 0.15304*(-1.*t4693*t5989*t8016 - 1.*t4614*t6237*t8016) - 0.04845*(t4614*t5989*t8016 - 1.*t4693*t6237*t8016) + t2847*t76*t8849 + t7917*t8852 - 0.1327*(-1.*t2847*t510*t76 - 1.*t7917*t972);
  p_output1[43]=t1480*t76*t8849 + t8852*t8877 + t5391*t8881 + t4614*t6316*t8881 - 1.*t4693*t6843*t8881 - 0.15304*(-1.*t4693*t5989*t8881 - 1.*t4614*t6237*t8881) - 0.04845*(t4614*t5989*t8881 - 1.*t4693*t6237*t8881) - 0.1327*(t5491 - 1.*t8877*t972);
  p_output1[44]=-1.*t2645*t8849 + t8852*t8902 + t5391*t8907 + t4614*t6316*t8907 - 1.*t4693*t6843*t8907 - 0.15304*(-1.*t4693*t5989*t8907 - 1.*t4614*t6237*t8907) - 0.04845*(t4614*t5989*t8907 - 1.*t4693*t6237*t8907) - 0.1327*(t2645*t510 - 1.*t8902*t972);
  p_output1[45]=t6316*t8145 + t7961*t8928 + t8058*t8934 + t6843*t8939 - 0.04845*(t8182 + t6237*t8939) - 0.15304*(t5989*t8939 + t8947);
  p_output1[46]=t8817*t8928 + t8934*t8954 + t6843*t8960 + t6316*t8964 - 0.04845*(t6237*t8960 + t8967) - 0.15304*(t5989*t8960 + t8971);
  p_output1[47]=t8714*t8928 + t8934*t8978 + t6843*t8982 + t6316*t8986 - 0.04845*(t6237*t8982 + t8990) - 0.15304*(t5989*t8982 + t8994);
  p_output1[48]=-0.04845*t8196 - 0.15304*(-1.*t5989*t8126 + t8947) + t8126*t9000 + t8145*t9003;
  p_output1[49]=t8964*t9003 + t9000*t9012 - 0.15304*(t8971 - 1.*t5989*t9012) - 0.04845*(t8967 - 1.*t6237*t9012);
  p_output1[50]=t8986*t9003 + t9000*t9025 - 0.15304*(t8994 - 1.*t5989*t9025) - 0.04845*(t8990 - 1.*t6237*t9025);
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
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

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_RightKnee_mex.hh"

namespace SymExpression
{

void Jp_RightKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
