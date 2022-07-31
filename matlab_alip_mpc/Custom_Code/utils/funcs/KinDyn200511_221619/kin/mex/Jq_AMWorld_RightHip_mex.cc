/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:14 GMT-04:00
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
  double t1064;
  double t2860;
  double t2520;
  double t2797;
  double t2866;
  double t1062;
  double t4082;
  double t3124;
  double t1502;
  double t1571;
  double t88;
  double t4505;
  double t4549;
  double t4301;
  double t4447;
  double t2854;
  double t2996;
  double t3083;
  double t3151;
  double t3160;
  double t3211;
  double t4201;
  double t4220;
  double t4461;
  double t4715;
  double t4717;
  double t4738;
  double t4749;
  double t4777;
  double t4784;
  double t4788;
  double t4798;
  double t4803;
  double t4857;
  double t4863;
  double t4872;
  double t4875;
  double t4880;
  double t4884;
  double t4886;
  double t4905;
  double t4906;
  double t4944;
  double t4949;
  double t4950;
  double t4952;
  double t4979;
  double t3084;
  double t3217;
  double t3320;
  double t5130;
  double t5271;
  double t5273;
  double t5237;
  double t5260;
  double t4871;
  double t4985;
  double t4988;
  double t5439;
  double t5445;
  double t5454;
  double t5463;
  double t5468;
  double t5472;
  double t5033;
  double t5046;
  double t5068;
  double t5462;
  double t5478;
  double t5492;
  double t5149;
  double t5233;
  double t5270;
  double t5277;
  double t5285;
  double t5286;
  double t5290;
  double t5293;
  double t5298;
  double t5309;
  double t5329;
  double t5374;
  double t5386;
  double t5390;
  double t5404;
  double t5416;
  double t5504;
  double t5508;
  double t5515;
  double t5607;
  double t5608;
  double t5610;
  double t5428;
  double t5494;
  double t5496;
  double t5520;
  double t5538;
  double t5539;
  double t5682;
  double t5685;
  double t5689;
  double t5583;
  double t5612;
  double t5628;
  double t5635;
  double t5636;
  double t5653;
  double t5815;
  double t5822;
  double t5853;
  double t5873;
  double t5875;
  double t5883;
  double t5663;
  double t5667;
  double t5673;
  double t5892;
  double t5911;
  double t5913;
  double t5974;
  double t5979;
  double t5985;
  double t6070;
  double t6071;
  double t6080;
  double t6129;
  double t6132;
  double t6133;
  double t6189;
  double t6191;
  double t6201;
  double t6203;
  double t6206;
  double t6216;
  double t6217;
  double t6229;
  double t6232;
  double t6234;
  double t6244;
  double t6245;
  double t6253;
  double t6257;
  double t6331;
  double t6332;
  double t6342;
  double t6329;
  double t6343;
  double t6348;
  double t5863;
  double t5887;
  double t5888;
  double t6228;
  double t6261;
  double t6265;
  double t6269;
  double t6274;
  double t6275;
  double t5890;
  double t5916;
  double t5917;
  double t6277;
  double t6284;
  double t6291;
  double t6299;
  double t6314;
  double t6319;
  double t6320;
  double t5934;
  double t5937;
  double t5948;
  double t5008;
  double t6436;
  double t6438;
  double t6040;
  double t6085;
  double t6087;
  double t6097;
  double t6106;
  double t6110;
  double t6113;
  double t6114;
  double t6116;
  double t6476;
  double t6479;
  double t6481;
  double t6537;
  double t6561;
  double t6572;
  double t6580;
  double t6582;
  double t6592;
  double t6593;
  double t6598;
  double t6609;
  double t6684;
  double t6700;
  double t6616;
  double t6623;
  double t6642;
  double t6644;
  double t6659;
  double t6663;
  double t6665;
  double t6666;
  double t6667;
  double t6668;
  double t6672;
  double t6673;
  double t6678;
  double t6718;
  double t6733;
  double t6487;
  double t6490;
  double t6510;
  double t6769;
  double t6776;
  double t6779;
  double t6780;
  double t6782;
  double t6783;
  double t6788;
  double t6793;
  double t6800;
  double t6801;
  double t6806;
  double t6807;
  double t6812;
  double t6822;
  double t6825;
  double t6851;
  double t6853;
  double t6856;
  double t6858;
  double t6865;
  double t6874;
  double t1072;
  t1064 = Sin(var1[3]);
  t2860 = Cos(var1[3]);
  t2520 = Cos(var1[5]);
  t2797 = Sin(var1[4]);
  t2866 = Sin(var1[5]);
  t1062 = Sin(var1[14]);
  t4082 = 0. + t1062;
  t3124 = Cos(var1[13]);
  t1502 = Cos(var1[14]);
  t1571 = Sin(var1[13]);
  t88 = Cos(var1[4]);
  t4505 = -1.*t1502*t1571;
  t4549 = 0. + t4505;
  t4301 = -1.*t3124*t1502;
  t4447 = 0. + t4301;
  t2854 = -1.*t2520*t1064*t2797;
  t2996 = t2860*t2866;
  t3083 = t2854 + t2996;
  t3151 = -1.*t2860*t2520;
  t3160 = -1.*t1064*t2797*t2866;
  t3211 = t3151 + t3160;
  t4201 = var2[13]*t4082;
  t4220 = var2[5]*t4082;
  t4461 = t4447*t2520;
  t4715 = -1.*t4549*t2866;
  t4717 = 0. + t4461 + t4715;
  t4738 = var2[4]*t4717;
  t4749 = -1.*t4082*t2797;
  t4777 = t2520*t4549;
  t4784 = t4447*t2866;
  t4788 = 0. + t4777 + t4784;
  t4798 = t88*t4788;
  t4803 = 0. + t4749 + t4798;
  t4857 = var2[3]*t4803;
  t4863 = 0. + t4201 + t4220 + t4738 + t4857;
  t4872 = -1.*var2[14];
  t4875 = t2520*t1571;
  t4880 = t3124*t2866;
  t4884 = 0. + t4875 + t4880;
  t4886 = var2[4]*t4884;
  t4905 = -1.*t3124*t2520;
  t4906 = t1571*t2866;
  t4944 = 0. + t4905 + t4906;
  t4949 = t88*t4944;
  t4950 = 0. + t4949;
  t4952 = var2[3]*t4950;
  t4979 = 0. + t4872 + t4886 + t4952;
  t3084 = t1571*t3083;
  t3217 = t3124*t3211;
  t3320 = t3084 + t3217;
  t5130 = 0. + t1502;
  t5271 = t1571*t1062;
  t5273 = 0. + t5271;
  t5237 = t3124*t1062;
  t5260 = 0. + t5237;
  t4871 = 0.00644*t4863;
  t4985 = -1.e-6*t4979;
  t4988 = 0. + t4871 + t4985;
  t5439 = t2860*t2520*t2797;
  t5445 = t1064*t2866;
  t5454 = t5439 + t5445;
  t5463 = -1.*t2520*t1064;
  t5468 = t2860*t2797*t2866;
  t5472 = t5463 + t5468;
  t5033 = -1.e-6*t4863;
  t5046 = 0.000842*t4979;
  t5068 = 0. + t5033 + t5046;
  t5462 = t1571*t5454;
  t5478 = t3124*t5472;
  t5492 = t5462 + t5478;
  t5149 = var2[13]*t5130;
  t5233 = var2[5]*t5130;
  t5270 = t2520*t5260;
  t5277 = -1.*t5273*t2866;
  t5285 = 0. + t5270 + t5277;
  t5286 = var2[4]*t5285;
  t5290 = -1.*t5130*t2797;
  t5293 = t2520*t5273;
  t5298 = t5260*t2866;
  t5309 = 0. + t5293 + t5298;
  t5329 = t88*t5309;
  t5374 = 0. + t5290 + t5329;
  t5386 = var2[3]*t5374;
  t5390 = 0. + t5149 + t5233 + t5286 + t5386;
  t5404 = 0.00608*t5390;
  t5416 = 0. + t5404;
  t5504 = -1.*t3124*t5454;
  t5508 = t1571*t5472;
  t5515 = t5504 + t5508;
  t5607 = -1.*t88*t4082;
  t5608 = -1.*t2797*t4788;
  t5610 = t5607 + t5608;
  t5428 = t2860*t88*t1062;
  t5494 = -1.*t1502*t5492;
  t5496 = t5428 + t5494;
  t5520 = t1502*t2860*t88;
  t5538 = t1062*t5492;
  t5539 = t5520 + t5538;
  t5682 = t2860*t88*t2520*t1571;
  t5685 = t3124*t2860*t88*t2866;
  t5689 = t5682 + t5685;
  t5583 = -0.000842*var2[3]*t2797*t4944;
  t5612 = -1.e-6*var2[3]*t5610;
  t5628 = t5583 + t5612;
  t5635 = 1.e-6*var2[3]*t2797*t4944;
  t5636 = 0.00644*var2[3]*t5610;
  t5653 = t5635 + t5636;
  t5815 = t2520*t1064*t2797;
  t5822 = -1.*t2860*t2866;
  t5853 = t5815 + t5822;
  t5873 = t2860*t2520;
  t5875 = t1064*t2797*t2866;
  t5883 = t5873 + t5875;
  t5663 = -1.*t5130*t88;
  t5667 = -1.*t2797*t5309;
  t5673 = t5663 + t5667;
  t5892 = t1571*t5853;
  t5911 = t3124*t5883;
  t5913 = t5892 + t5911;
  t5974 = t88*t2520*t1571*t1064;
  t5979 = t3124*t88*t1064*t2866;
  t5985 = t5974 + t5979;
  t6070 = t88*t2520*t1571;
  t6071 = t3124*t88*t2866;
  t6080 = t6070 + t6071;
  t6129 = -1.*t2520*t1571*t2797;
  t6132 = -1.*t3124*t2797*t2866;
  t6133 = t6129 + t6132;
  t6189 = t4875 + t4880;
  t6191 = var2[3]*t88*t6189;
  t6201 = t3124*t2520;
  t6203 = -1.*t1571*t2866;
  t6206 = t6201 + t6203;
  t6216 = var2[4]*t6206;
  t6217 = t6191 + t6216;
  t6229 = -1.*t2520*t4549;
  t6232 = -1.*t4447*t2866;
  t6234 = t6229 + t6232;
  t6244 = var2[4]*t6234;
  t6245 = t4461 + t4715;
  t6253 = var2[3]*t88*t6245;
  t6257 = t6244 + t6253;
  t6331 = t2520*t1064;
  t6332 = -1.*t2860*t2797*t2866;
  t6342 = t6331 + t6332;
  t6329 = t3124*t5454;
  t6343 = t1571*t6342;
  t6348 = t6329 + t6343;
  t5863 = -1.*t3124*t5853;
  t5887 = t1571*t5883;
  t5888 = t5863 + t5887;
  t6228 = 0.000842*t6217;
  t6261 = -1.e-6*t6257;
  t6265 = t6228 + t6261;
  t6269 = -1.e-6*t6217;
  t6274 = 0.00644*t6257;
  t6275 = t6269 + t6274;
  t5890 = t88*t1062*t1064;
  t5916 = -1.*t1502*t5913;
  t5917 = t5890 + t5916;
  t6277 = -1.*t2520*t5273;
  t6284 = -1.*t5260*t2866;
  t6291 = t6277 + t6284;
  t6299 = var2[4]*t6291;
  t6314 = t5270 + t5277;
  t6319 = var2[3]*t88*t6314;
  t6320 = t6299 + t6319;
  t5934 = t1502*t88*t1064;
  t5937 = t1062*t5913;
  t5948 = t5934 + t5937;
  t5008 = t1571*t3211;
  t6436 = t3124*t5853;
  t6438 = t6436 + t5008;
  t6040 = -1.*t1502*t2797;
  t6085 = t1062*t6080;
  t6087 = t6040 + t6085;
  t6097 = -1.*t3124*t88*t2520;
  t6106 = t88*t1571*t2866;
  t6110 = t6097 + t6106;
  t6113 = -1.*t1062*t2797;
  t6114 = -1.*t1502*t6080;
  t6116 = t6113 + t6114;
  t6476 = t3124*t88*t2520;
  t6479 = -1.*t88*t1571*t2866;
  t6481 = t6476 + t6479;
  t6537 = t1502*t2520*t1571;
  t6561 = t3124*t1502*t2866;
  t6572 = t6537 + t6561;
  t6580 = var2[4]*t6572;
  t6582 = -1.*t3124*t1502*t2520;
  t6592 = t1502*t1571*t2866;
  t6593 = t6582 + t6592;
  t6598 = var2[3]*t88*t6593;
  t6609 = t6580 + t6598;
  t6684 = -1.*t1571*t5472;
  t6700 = t6329 + t6684;
  t6616 = -1.e-6*t6609;
  t6623 = t6228 + t6616;
  t6642 = 0.00644*t6609;
  t6644 = t6269 + t6642;
  t6659 = -1.*t2520*t1571*t1062;
  t6663 = -1.*t3124*t1062*t2866;
  t6665 = t6659 + t6663;
  t6666 = var2[4]*t6665;
  t6667 = t3124*t2520*t1062;
  t6668 = -1.*t1571*t1062*t2866;
  t6672 = t6667 + t6668;
  t6673 = var2[3]*t88*t6672;
  t6678 = t6666 + t6673;
  t6718 = -1.*t1571*t5883;
  t6733 = t6436 + t6718;
  t6487 = -1.*t1502*t6481*t4988;
  t6490 = t6080*t5068;
  t6510 = t1062*t6481*t5416;
  t6769 = var2[13]*t1502;
  t6776 = var2[5]*t1502;
  t6779 = var2[4]*t6672;
  t6780 = t2520*t1571*t1062;
  t6782 = t3124*t1062*t2866;
  t6783 = t6780 + t6782;
  t6788 = t88*t6783;
  t6793 = t6040 + t6788;
  t6800 = var2[3]*t6793;
  t6801 = t6769 + t6776 + t6779 + t6800;
  t6806 = -1.*var2[13]*t1062;
  t6807 = -1.*var2[5]*t1062;
  t6812 = t3124*t1502*t2520;
  t6822 = -1.*t1502*t1571*t2866;
  t6825 = t6812 + t6822;
  t6851 = var2[4]*t6825;
  t6853 = t1062*t2797;
  t6856 = t88*t6572;
  t6858 = t6853 + t6856;
  t6865 = var2[3]*t6858;
  t6874 = t6806 + t6807 + t6851 + t6865;
  t1072 = -1.*t88*t1062*t1064;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t1072 - 1.*t1502*t3320)*t4988 + (-1.*t3083*t3124 + t5008)*t5068 + t5416*(t1062*t3320 - 1.*t1064*t1502*t88);
  p_output1[10]=t4988*t5496 + t5068*t5515 + t5416*t5539;
  p_output1[11]=0;
  p_output1[12]=t5515*t5628 + t5496*t5653 + t5416*(-1.*t1502*t2797*t2860 + t1062*t5689) + t4988*(-1.*t1062*t2797*t2860 - 1.*t1502*t5689) + t5068*(t1571*t2860*t2866*t88 - 1.*t2520*t2860*t3124*t88) + 0.00608*t5539*t5673*var2[3];
  p_output1[13]=t5628*t5888 + t5653*t5917 + t5416*(-1.*t1064*t1502*t2797 + t1062*t5985) + t4988*(-1.*t1062*t1064*t2797 - 1.*t1502*t5985) + t5068*(t1064*t1571*t2866*t88 - 1.*t1064*t2520*t3124*t88) + 0.00608*t5673*t5948*var2[3];
  p_output1[14]=(-1.*t1571*t2797*t2866 + t2520*t2797*t3124)*t5068 + t5628*t6110 + t5653*t6116 + t4988*(-1.*t1502*t6133 - 1.*t1062*t88) + t5416*(t1062*t6133 - 1.*t1502*t88) + 0.00608*t5673*t6087*var2[3];
  p_output1[15]=t5515*t6265 + t5496*t6275 + 0.00608*t5539*t6320 + t5068*(t5462 - 1.*t3124*t6342) - 1.*t1502*t4988*t6348 + t1062*t5416*t6348;
  p_output1[16]=t5068*(-1.*t3124*t3211 + t5892) + t5888*t6265 + t5917*t6275 + 0.00608*t5948*t6320 - 1.*t1502*t4988*t6438 + t1062*t5416*t6438;
  p_output1[17]=t6110*t6265 + t6116*t6275 + 0.00608*t6087*t6320 + t6487 + t6490 + t6510;
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
  p_output1[39]=t5068*t5492 + t5515*t6623 + t5496*t6644 + 0.00608*t5539*t6678 - 1.*t1502*t4988*t6700 + t1062*t5416*t6700;
  p_output1[40]=t5068*t5913 + t5888*t6623 + t5917*t6644 + 0.00608*t5948*t6678 - 1.*t1502*t4988*t6733 + t1062*t5416*t6733;
  p_output1[41]=t6487 + t6490 + t6510 + t6110*t6623 + t6116*t6644 + 0.00608*t6087*t6678;
  p_output1[42]=t4988*t5539 + 0.00644*t5496*t6801 - 1.e-6*t5515*t6801 + 0.00608*t5539*t6874 + t5416*(t1502*t5492 - 1.*t1062*t2860*t88);
  p_output1[43]=t5416*(t1072 + t1502*t5913) + t4988*t5948 - 1.e-6*t5888*t6801 + 0.00644*t5917*t6801 + 0.00608*t5948*t6874;
  p_output1[44]=t4988*t6087 - 1.e-6*t6110*t6801 + 0.00644*t6116*t6801 + t5416*(t1502*t6080 + t6853) + 0.00608*t6087*t6874;
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

#include "Jq_AMWorld_RightHip_mex.hh"

namespace SymExpression
{

void Jq_AMWorld_RightHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
