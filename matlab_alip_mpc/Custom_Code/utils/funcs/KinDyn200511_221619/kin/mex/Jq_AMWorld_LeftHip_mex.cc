/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:27 GMT-04:00
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
  double t1320;
  double t221;
  double t225;
  double t287;
  double t1322;
  double t153;
  double t3521;
  double t5363;
  double t5528;
  double t5540;
  double t5174;
  double t5370;
  double t5418;
  double t5437;
  double t5483;
  double t2850;
  double t2979;
  double t3231;
  double t303;
  double t2664;
  double t2683;
  double t4450;
  double t5004;
  double t5031;
  double t5112;
  double t5126;
  double t5221;
  double t5227;
  double t5257;
  double t5258;
  double t5262;
  double t5283;
  double t5293;
  double t5436;
  double t5489;
  double t5510;
  double t5515;
  double t5546;
  double t5550;
  double t5559;
  double t5560;
  double t5565;
  double t5571;
  double t5612;
  double t5624;
  double t5625;
  double t5628;
  double t5681;
  double t5689;
  double t5698;
  double t5768;
  double t5789;
  double t5794;
  double t5796;
  double t5802;
  double t5300;
  double t5629;
  double t5652;
  double t5936;
  double t5939;
  double t5941;
  double t5905;
  double t5931;
  double t5932;
  double t5715;
  double t5723;
  double t5728;
  double t5966;
  double t5969;
  double t5978;
  double t5779;
  double t5787;
  double t5795;
  double t5803;
  double t5814;
  double t5822;
  double t5829;
  double t5836;
  double t5843;
  double t5851;
  double t5860;
  double t5864;
  double t5866;
  double t5868;
  double t5875;
  double t5883;
  double t5934;
  double t5945;
  double t5960;
  double t5988;
  double t5998;
  double t5999;
  double t6032;
  double t6033;
  double t6035;
  double t6009;
  double t6011;
  double t6015;
  double t6100;
  double t6102;
  double t6107;
  double t6027;
  double t6045;
  double t6047;
  double t6146;
  double t6147;
  double t6148;
  double t6129;
  double t6136;
  double t6138;
  double t6059;
  double t6063;
  double t6068;
  double t6157;
  double t6161;
  double t6165;
  double t6072;
  double t6077;
  double t6079;
  double t6230;
  double t6233;
  double t6237;
  double t6304;
  double t6314;
  double t6323;
  double t6370;
  double t6371;
  double t6372;
  double t6417;
  double t6418;
  double t6423;
  double t6428;
  double t6436;
  double t6439;
  double t6440;
  double t6450;
  double t6454;
  double t6459;
  double t6472;
  double t6474;
  double t6475;
  double t6479;
  double t6527;
  double t6530;
  double t6533;
  double t6555;
  double t6557;
  double t6561;
  double t6139;
  double t6151;
  double t6154;
  double t6442;
  double t6480;
  double t6484;
  double t6486;
  double t6490;
  double t6494;
  double t6172;
  double t6177;
  double t6179;
  double t6189;
  double t6190;
  double t6191;
  double t6501;
  double t6508;
  double t6509;
  double t6511;
  double t6512;
  double t6513;
  double t6516;
  double t3632;
  double t6585;
  double t6586;
  double t6294;
  double t6297;
  double t6300;
  double t6328;
  double t6330;
  double t6340;
  double t6348;
  double t6351;
  double t6355;
  double t6606;
  double t6607;
  double t6608;
  double t6628;
  double t6631;
  double t6634;
  double t6636;
  double t6637;
  double t6639;
  double t6640;
  double t6641;
  double t6644;
  double t6701;
  double t6703;
  double t6651;
  double t6654;
  double t6664;
  double t6665;
  double t6667;
  double t6669;
  double t6674;
  double t6678;
  double t6684;
  double t6685;
  double t6687;
  double t6690;
  double t6698;
  double t6733;
  double t6734;
  double t6603;
  double t6610;
  double t6614;
  double t6811;
  double t6813;
  double t6815;
  double t6819;
  double t6820;
  double t6826;
  double t6827;
  double t6828;
  double t6830;
  double t6835;
  double t6766;
  double t6767;
  double t6769;
  double t6771;
  double t6780;
  double t6782;
  double t6784;
  double t6785;
  double t6787;
  double t6791;
  double t6802;
  double t5702;
  t1320 = Cos(var1[3]);
  t221 = Cos(var1[5]);
  t225 = Sin(var1[3]);
  t287 = Sin(var1[4]);
  t1322 = Sin(var1[5]);
  t153 = Cos(var1[6]);
  t3521 = Sin(var1[6]);
  t5363 = Cos(var1[7]);
  t5528 = Sin(var1[7]);
  t5540 = 0. + t5528;
  t5174 = Cos(var1[4]);
  t5370 = -1.*t153*t5363;
  t5418 = 0. + t5370;
  t5437 = -1.*t5363*t3521;
  t5483 = 0. + t5437;
  t2850 = -1.*t1320*t221;
  t2979 = -1.*t225*t287*t1322;
  t3231 = t2850 + t2979;
  t303 = -1.*t221*t225*t287;
  t2664 = t1320*t1322;
  t2683 = t303 + t2664;
  t4450 = -1.*var2[7];
  t5004 = t153*t1322;
  t5031 = t221*t3521;
  t5112 = 0. + t5004 + t5031;
  t5126 = var2[4]*t5112;
  t5221 = -1.*t221*t153;
  t5227 = t1322*t3521;
  t5257 = 0. + t5221 + t5227;
  t5258 = t5174*t5257;
  t5262 = 0. + t5258;
  t5283 = var2[3]*t5262;
  t5293 = 0. + t4450 + t5126 + t5283;
  t5436 = t221*t5418;
  t5489 = -1.*t1322*t5483;
  t5510 = 0. + t5436 + t5489;
  t5515 = var2[4]*t5510;
  t5546 = var2[5]*t5540;
  t5550 = var2[6]*t5540;
  t5559 = t5418*t1322;
  t5560 = t221*t5483;
  t5565 = 0. + t5559 + t5560;
  t5571 = t5174*t5565;
  t5612 = -1.*t287*t5540;
  t5624 = 0. + t5571 + t5612;
  t5625 = var2[3]*t5624;
  t5628 = 0. + t5515 + t5546 + t5550 + t5625;
  t5681 = t153*t3231;
  t5689 = t2683*t3521;
  t5698 = t5681 + t5689;
  t5768 = 0. + t5363;
  t5789 = t153*t5528;
  t5794 = 0. + t5789;
  t5796 = t3521*t5528;
  t5802 = 0. + t5796;
  t5300 = 0.000842*t5293;
  t5629 = -1.e-6*t5628;
  t5652 = 0. + t5300 + t5629;
  t5936 = -1.*t221*t225;
  t5939 = t1320*t287*t1322;
  t5941 = t5936 + t5939;
  t5905 = t1320*t221*t287;
  t5931 = t225*t1322;
  t5932 = t5905 + t5931;
  t5715 = -1.e-6*t5293;
  t5723 = 0.00644*t5628;
  t5728 = 0. + t5715 + t5723;
  t5966 = t153*t5941;
  t5969 = t5932*t3521;
  t5978 = t5966 + t5969;
  t5779 = var2[5]*t5768;
  t5787 = var2[6]*t5768;
  t5795 = t221*t5794;
  t5803 = -1.*t1322*t5802;
  t5814 = 0. + t5795 + t5803;
  t5822 = var2[4]*t5814;
  t5829 = -1.*t5768*t287;
  t5836 = t1322*t5794;
  t5843 = t221*t5802;
  t5851 = 0. + t5836 + t5843;
  t5860 = t5174*t5851;
  t5864 = 0. + t5829 + t5860;
  t5866 = var2[3]*t5864;
  t5868 = 0. + t5779 + t5787 + t5822 + t5866;
  t5875 = 0.00608*t5868;
  t5883 = 0. + t5875;
  t5934 = -1.*t153*t5932;
  t5945 = t5941*t3521;
  t5960 = t5934 + t5945;
  t5988 = -1.*t5363*t5978;
  t5998 = t1320*t5174*t5528;
  t5999 = t5988 + t5998;
  t6032 = -1.*t287*t5565;
  t6033 = -1.*t5174*t5540;
  t6035 = t6032 + t6033;
  t6009 = t1320*t5174*t5363;
  t6011 = t5978*t5528;
  t6015 = t6009 + t6011;
  t6100 = t1320*t5174*t153*t1322;
  t6102 = t1320*t5174*t221*t3521;
  t6107 = t6100 + t6102;
  t6027 = -0.000842*var2[3]*t287*t5257;
  t6045 = -1.e-6*var2[3]*t6035;
  t6047 = t6027 + t6045;
  t6146 = t1320*t221;
  t6147 = t225*t287*t1322;
  t6148 = t6146 + t6147;
  t6129 = t221*t225*t287;
  t6136 = -1.*t1320*t1322;
  t6138 = t6129 + t6136;
  t6059 = 1.e-6*var2[3]*t287*t5257;
  t6063 = 0.00644*var2[3]*t6035;
  t6068 = t6059 + t6063;
  t6157 = t153*t6148;
  t6161 = t6138*t3521;
  t6165 = t6157 + t6161;
  t6072 = -1.*t5174*t5768;
  t6077 = -1.*t287*t5851;
  t6079 = t6072 + t6077;
  t6230 = t5174*t153*t225*t1322;
  t6233 = t5174*t221*t225*t3521;
  t6237 = t6230 + t6233;
  t6304 = t5174*t153*t1322;
  t6314 = t5174*t221*t3521;
  t6323 = t6304 + t6314;
  t6370 = -1.*t153*t287*t1322;
  t6371 = -1.*t221*t287*t3521;
  t6372 = t6370 + t6371;
  t6417 = t5004 + t5031;
  t6418 = var2[3]*t5174*t6417;
  t6423 = t221*t153;
  t6428 = -1.*t1322*t3521;
  t6436 = t6423 + t6428;
  t6439 = var2[4]*t6436;
  t6440 = t6418 + t6439;
  t6450 = -1.*t5418*t1322;
  t6454 = -1.*t221*t5483;
  t6459 = t6450 + t6454;
  t6472 = var2[4]*t6459;
  t6474 = t5436 + t5489;
  t6475 = var2[3]*t5174*t6474;
  t6479 = t6472 + t6475;
  t6527 = t221*t225;
  t6530 = -1.*t1320*t287*t1322;
  t6533 = t6527 + t6530;
  t6555 = t153*t5932;
  t6557 = t6533*t3521;
  t6561 = t6555 + t6557;
  t6139 = -1.*t153*t6138;
  t6151 = t6148*t3521;
  t6154 = t6139 + t6151;
  t6442 = 0.000842*t6440;
  t6480 = -1.e-6*t6479;
  t6484 = t6442 + t6480;
  t6486 = -1.e-6*t6440;
  t6490 = 0.00644*t6479;
  t6494 = t6486 + t6490;
  t6172 = -1.*t5363*t6165;
  t6177 = t5174*t225*t5528;
  t6179 = t6172 + t6177;
  t6189 = t5174*t5363*t225;
  t6190 = t6165*t5528;
  t6191 = t6189 + t6190;
  t6501 = -1.*t1322*t5794;
  t6508 = -1.*t221*t5802;
  t6509 = t6501 + t6508;
  t6511 = var2[4]*t6509;
  t6512 = t5795 + t5803;
  t6513 = var2[3]*t5174*t6512;
  t6516 = t6511 + t6513;
  t3632 = t3231*t3521;
  t6585 = t153*t6138;
  t6586 = t6585 + t3632;
  t6294 = -1.*t5174*t221*t153;
  t6297 = t5174*t1322*t3521;
  t6300 = t6294 + t6297;
  t6328 = -1.*t5363*t6323;
  t6330 = -1.*t287*t5528;
  t6340 = t6328 + t6330;
  t6348 = -1.*t5363*t287;
  t6351 = t6323*t5528;
  t6355 = t6348 + t6351;
  t6606 = t5174*t221*t153;
  t6607 = -1.*t5174*t1322*t3521;
  t6608 = t6606 + t6607;
  t6628 = t153*t5363*t1322;
  t6631 = t221*t5363*t3521;
  t6634 = t6628 + t6631;
  t6636 = var2[4]*t6634;
  t6637 = -1.*t221*t153*t5363;
  t6639 = t5363*t1322*t3521;
  t6640 = t6637 + t6639;
  t6641 = var2[3]*t5174*t6640;
  t6644 = t6636 + t6641;
  t6701 = -1.*t5941*t3521;
  t6703 = t6555 + t6701;
  t6651 = -1.e-6*t6644;
  t6654 = t6442 + t6651;
  t6664 = 0.00644*t6644;
  t6665 = t6486 + t6664;
  t6667 = -1.*t153*t1322*t5528;
  t6669 = -1.*t221*t3521*t5528;
  t6674 = t6667 + t6669;
  t6678 = var2[4]*t6674;
  t6684 = t221*t153*t5528;
  t6685 = -1.*t1322*t3521*t5528;
  t6687 = t6684 + t6685;
  t6690 = var2[3]*t5174*t6687;
  t6698 = t6678 + t6690;
  t6733 = -1.*t6148*t3521;
  t6734 = t6585 + t6733;
  t6603 = t6323*t5652;
  t6610 = -1.*t5363*t6608*t5728;
  t6614 = t6608*t5528*t5883;
  t6811 = var2[5]*t5363;
  t6813 = var2[6]*t5363;
  t6815 = var2[4]*t6687;
  t6819 = t153*t1322*t5528;
  t6820 = t221*t3521*t5528;
  t6826 = t6819 + t6820;
  t6827 = t5174*t6826;
  t6828 = t6348 + t6827;
  t6830 = var2[3]*t6828;
  t6835 = t6811 + t6813 + t6815 + t6830;
  t6766 = t221*t153*t5363;
  t6767 = -1.*t5363*t1322*t3521;
  t6769 = t6766 + t6767;
  t6771 = var2[4]*t6769;
  t6780 = -1.*var2[5]*t5528;
  t6782 = -1.*var2[6]*t5528;
  t6784 = t5174*t6634;
  t6785 = t287*t5528;
  t6787 = t6784 + t6785;
  t6791 = var2[3]*t6787;
  t6802 = t6771 + t6780 + t6782 + t6791;
  t5702 = -1.*t5174*t225*t5528;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(-1.*t153*t2683 + t3632)*t5652 + (-1.*t5363*t5698 + t5702)*t5728 + (-1.*t225*t5174*t5363 + t5528*t5698)*t5883;
  p_output1[10]=t5652*t5960 + t5728*t5999 + t5883*t6015;
  p_output1[11]=0;
  p_output1[12]=(-1.*t1320*t153*t221*t5174 + t1320*t1322*t3521*t5174)*t5652 + t5960*t6047 + t5999*t6068 + t5728*(-1.*t1320*t287*t5528 - 1.*t5363*t6107) + t5883*(-1.*t1320*t287*t5363 + t5528*t6107) + 0.00608*t6015*t6079*var2[3];
  p_output1[13]=(-1.*t153*t221*t225*t5174 + t1322*t225*t3521*t5174)*t5652 + t6047*t6154 + t6068*t6179 + t5728*(-1.*t225*t287*t5528 - 1.*t5363*t6237) + t5883*(-1.*t225*t287*t5363 + t5528*t6237) + 0.00608*t6079*t6191*var2[3];
  p_output1[14]=(t153*t221*t287 - 1.*t1322*t287*t3521)*t5652 + t6047*t6300 + t6068*t6340 + t5728*(-1.*t5174*t5528 - 1.*t5363*t6372) + t5883*(-1.*t5174*t5363 + t5528*t6372) + 0.00608*t6079*t6355*var2[3];
  p_output1[15]=t5960*t6484 + t5999*t6494 + 0.00608*t6015*t6516 + t5652*(t5969 - 1.*t153*t6533) - 1.*t5363*t5728*t6561 + t5528*t5883*t6561;
  p_output1[16]=t5652*(-1.*t153*t3231 + t6161) + t6154*t6484 + t6179*t6494 + 0.00608*t6191*t6516 - 1.*t5363*t5728*t6586 + t5528*t5883*t6586;
  p_output1[17]=t6300*t6484 + t6340*t6494 + 0.00608*t6355*t6516 + t6603 + t6610 + t6614;
  p_output1[18]=t5652*t5978 + t5960*t6654 + t5999*t6665 + 0.00608*t6015*t6698 - 1.*t5363*t5728*t6703 + t5528*t5883*t6703;
  p_output1[19]=t5652*t6165 + t6154*t6654 + t6179*t6665 + 0.00608*t6191*t6698 - 1.*t5363*t5728*t6734 + t5528*t5883*t6734;
  p_output1[20]=t6603 + t6610 + t6614 + t6300*t6654 + t6340*t6665 + 0.00608*t6355*t6698;
  p_output1[21]=t5883*(-1.*t1320*t5174*t5528 + t5363*t5978) + t5728*t6015 + 0.00608*t6015*t6802 - 1.e-6*t5960*t6835 + 0.00644*t5999*t6835;
  p_output1[22]=t5883*(t5702 + t5363*t6165) + t5728*t6191 + 0.00608*t6191*t6802 - 1.e-6*t6154*t6835 + 0.00644*t6179*t6835;
  p_output1[23]=t5728*t6355 + t5883*(t5363*t6323 + t6785) + 0.00608*t6355*t6802 - 1.e-6*t6300*t6835 + 0.00644*t6340*t6835;
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

#include "Jq_AMWorld_LeftHip_mex.hh"

namespace SymExpression
{

void Jq_AMWorld_LeftHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
