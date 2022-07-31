/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:20 GMT-04:00
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
  double t1686;
  double t1832;
  double t1902;
  double t2172;
  double t3396;
  double t4208;
  double t4173;
  double t4180;
  double t4211;
  double t394;
  double t429;
  double t492;
  double t1139;
  double t4202;
  double t4283;
  double t4393;
  double t4549;
  double t4687;
  double t4742;
  double t252;
  double t5152;
  double t5187;
  double t5257;
  double t5312;
  double t5357;
  double t5416;
  double t5424;
  double t5474;
  double t5475;
  double t5505;
  double t5770;
  double t5777;
  double t5778;
  double t1045;
  double t1187;
  double t1484;
  double t2830;
  double t3805;
  double t3976;
  double t4481;
  double t4499;
  double t4527;
  double t4918;
  double t4971;
  double t5008;
  double t5918;
  double t5919;
  double t5929;
  double t5935;
  double t5936;
  double t5946;
  double t5417;
  double t5454;
  double t5460;
  double t6056;
  double t6057;
  double t6059;
  double t5676;
  double t5759;
  double t5761;
  double t6084;
  double t6110;
  double t6153;
  double t6189;
  double t6191;
  double t6200;
  double t6324;
  double t6341;
  double t6343;
  double t6361;
  double t6368;
  double t6376;
  double t6445;
  double t6451;
  double t6454;
  double t6489;
  double t6506;
  double t6514;
  double t6521;
  double t6530;
  double t6532;
  double t6581;
  double t6583;
  double t6622;
  double t6728;
  double t6731;
  double t6734;
  double t6739;
  double t6746;
  double t6752;
  double t6815;
  double t6816;
  double t6824;
  double t6903;
  double t6904;
  double t6906;
  double t6962;
  double t6971;
  double t6923;
  double t6934;
  double t6944;
  double t7031;
  double t7032;
  double t7039;
  double t7068;
  double t7072;
  double t7090;
  double t7044;
  double t7048;
  double t7304;
  double t7306;
  double t7312;
  double t7278;
  double t7282;
  double t7302;
  double t7488;
  double t7497;
  double t7433;
  double t7439;
  double t7466;
  double t7468;
  double t7469;
  double t7613;
  double t7621;
  double t7622;
  double t7641;
  double t7644;
  double t7631;
  double t7632;
  double t7303;
  double t7344;
  double t7348;
  double t7364;
  double t7372;
  double t7379;
  double t7384;
  double t7385;
  double t7391;
  double t7409;
  double t7410;
  double t7428;
  double t6155;
  double t6169;
  double t6176;
  double t7708;
  double t7709;
  double t7711;
  double t7724;
  double t7725;
  double t7765;
  double t7766;
  double t7772;
  double t7777;
  double t7778;
  double t7783;
  double t7806;
  double t7810;
  double t7815;
  double t7827;
  double t7831;
  double t7834;
  double t6244;
  double t6249;
  double t6281;
  double t7861;
  double t7862;
  double t7864;
  double t7865;
  double t7875;
  double t7894;
  double t7907;
  double t7908;
  double t7942;
  double t7943;
  double t7944;
  t1686 = Sin(var1[3]);
  t1832 = Cos(var1[13]);
  t1902 = -1.*t1832;
  t2172 = 1. + t1902;
  t3396 = Sin(var1[13]);
  t4208 = Cos(var1[3]);
  t4173 = Cos(var1[5]);
  t4180 = Sin(var1[4]);
  t4211 = Sin(var1[5]);
  t394 = Cos(var1[14]);
  t429 = -1.*t394;
  t492 = 1. + t429;
  t1139 = Sin(var1[14]);
  t4202 = -1.*t4173*t1686*t4180;
  t4283 = t4208*t4211;
  t4393 = t4202 + t4283;
  t4549 = -1.*t4208*t4173;
  t4687 = -1.*t1686*t4180*t4211;
  t4742 = t4549 + t4687;
  t252 = Cos(var1[4]);
  t5152 = t3396*t4393;
  t5187 = t1832*t4742;
  t5257 = t5152 + t5187;
  t5312 = Cos(var1[15]);
  t5357 = -1.*t5312;
  t5416 = 1. + t5357;
  t5424 = Sin(var1[15]);
  t5474 = t1832*t4393;
  t5475 = -1.*t3396*t4742;
  t5505 = t5474 + t5475;
  t5770 = -1.*t394*t252*t1686;
  t5777 = t1139*t5257;
  t5778 = t5770 + t5777;
  t1045 = -0.08055*t492;
  t1187 = -0.135*t1139;
  t1484 = 0. + t1045 + t1187;
  t2830 = 0.07996*t2172;
  t3805 = 0.135*t3396;
  t3976 = 0. + t2830 + t3805;
  t4481 = -0.135*t2172;
  t4499 = 0.07996*t3396;
  t4527 = 0. + t4481 + t4499;
  t4918 = -0.135*t492;
  t4971 = 0.08055*t1139;
  t5008 = 0. + t4918 + t4971;
  t5918 = t4208*t4173*t4180;
  t5919 = t1686*t4211;
  t5929 = t5918 + t5919;
  t5935 = -1.*t4173*t1686;
  t5936 = t4208*t4180*t4211;
  t5946 = t5935 + t5936;
  t5417 = -0.01004*t5416;
  t5454 = 0.08055*t5424;
  t5460 = 0. + t5417 + t5454;
  t6056 = t3396*t5929;
  t6057 = t1832*t5946;
  t6059 = t6056 + t6057;
  t5676 = -0.08055*t5416;
  t5759 = -0.01004*t5424;
  t5761 = 0. + t5676 + t5759;
  t6084 = t1832*t5929;
  t6110 = -1.*t3396*t5946;
  t6153 = t6084 + t6110;
  t6189 = t394*t4208*t252;
  t6191 = t1139*t6059;
  t6200 = t6189 + t6191;
  t6324 = t4208*t252*t4173*t3396;
  t6341 = t1832*t4208*t252*t4211;
  t6343 = t6324 + t6341;
  t6361 = t1832*t4208*t252*t4173;
  t6368 = -1.*t4208*t252*t3396*t4211;
  t6376 = t6361 + t6368;
  t6445 = -1.*t394*t4208*t4180;
  t6451 = t1139*t6343;
  t6454 = t6445 + t6451;
  t6489 = t252*t4173*t3396*t1686;
  t6506 = t1832*t252*t1686*t4211;
  t6514 = t6489 + t6506;
  t6521 = t1832*t252*t4173*t1686;
  t6530 = -1.*t252*t3396*t1686*t4211;
  t6532 = t6521 + t6530;
  t6581 = -1.*t394*t1686*t4180;
  t6583 = t1139*t6514;
  t6622 = t6581 + t6583;
  t6728 = -1.*t4173*t3396*t4180;
  t6731 = -1.*t1832*t4180*t4211;
  t6734 = t6728 + t6731;
  t6739 = -1.*t1832*t4173*t4180;
  t6746 = t3396*t4180*t4211;
  t6752 = t6739 + t6746;
  t6815 = -1.*t394*t252;
  t6816 = t1139*t6734;
  t6824 = t6815 + t6816;
  t6903 = t4173*t1686;
  t6904 = -1.*t4208*t4180*t4211;
  t6906 = t6903 + t6904;
  t6962 = t3396*t6906;
  t6971 = t6084 + t6962;
  t6923 = -1.*t3396*t5929;
  t6934 = t1832*t6906;
  t6944 = t6923 + t6934;
  t7031 = t4173*t1686*t4180;
  t7032 = -1.*t4208*t4211;
  t7039 = t7031 + t7032;
  t7068 = t1832*t7039;
  t7072 = t3396*t4742;
  t7090 = t7068 + t7072;
  t7044 = -1.*t3396*t7039;
  t7048 = t7044 + t5187;
  t7304 = t1832*t252*t4173;
  t7306 = -1.*t252*t3396*t4211;
  t7312 = t7304 + t7306;
  t7278 = -1.*t252*t4173*t3396;
  t7282 = -1.*t1832*t252*t4211;
  t7302 = t7278 + t7282;
  t7488 = -1.*t1832*t5946;
  t7497 = t6923 + t7488;
  t7433 = 0.135*t1832;
  t7439 = t7433 + t4499;
  t7466 = 0.07996*t1832;
  t7468 = -0.135*t3396;
  t7469 = t7466 + t7468;
  t7613 = t4208*t4173;
  t7621 = t1686*t4180*t4211;
  t7622 = t7613 + t7621;
  t7641 = -1.*t3396*t7622;
  t7644 = t7068 + t7641;
  t7631 = -1.*t1832*t7622;
  t7632 = t7044 + t7631;
  t7303 = t5460*t7302;
  t7344 = -0.135*t394*t7312;
  t7348 = t5008*t7312;
  t7364 = t1139*t5761*t7312;
  t7372 = t5424*t7302;
  t7379 = t5312*t1139*t7312;
  t7384 = t7372 + t7379;
  t7385 = -0.08055*t7384;
  t7391 = t5312*t7302;
  t7409 = -1.*t1139*t5424*t7312;
  t7410 = t7391 + t7409;
  t7428 = -0.01004*t7410;
  t6155 = -1.*t4208*t252*t1139;
  t6169 = t394*t6059;
  t6176 = t6155 + t6169;
  t7708 = -0.135*t394;
  t7709 = -0.08055*t1139;
  t7711 = t7708 + t7709;
  t7724 = 0.08055*t394;
  t7725 = t7724 + t1187;
  t7765 = t3396*t7039;
  t7766 = t1832*t7622;
  t7772 = t7765 + t7766;
  t7777 = -1.*t252*t1139*t1686;
  t7778 = t394*t7772;
  t7783 = t7777 + t7778;
  t7806 = t252*t4173*t3396;
  t7810 = t1832*t252*t4211;
  t7815 = t7806 + t7810;
  t7827 = t1139*t4180;
  t7831 = t394*t7815;
  t7834 = t7827 + t7831;
  t6244 = t5312*t6153;
  t6249 = -1.*t5424*t6200;
  t6281 = t6244 + t6249;
  t7861 = 0.08055*t5312;
  t7862 = t7861 + t5759;
  t7864 = -0.01004*t5312;
  t7865 = -0.08055*t5424;
  t7875 = t7864 + t7865;
  t7894 = t394*t252*t1686;
  t7907 = t1139*t7772;
  t7908 = t7894 + t7907;
  t7942 = -1.*t394*t4180;
  t7943 = t1139*t7815;
  t7944 = t7942 + t7943;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=-1.*t1484*t1686*t252 + t3976*t4393 + t4527*t4742 + t5008*t5257 - 0.135*(t1139*t1686*t252 + t394*t5257) + t5460*t5505 + t5761*t5778 - 0.08055*(t5424*t5505 + t5312*t5778) - 0.01004*(t5312*t5505 - 1.*t5424*t5778);
  p_output1[10]=t1484*t252*t4208 + t3976*t5929 + t4527*t5946 + t5008*t6059 + t5460*t6153 - 0.135*t6176 + t5761*t6200 - 0.08055*(t5424*t6153 + t5312*t6200) - 0.01004*t6281;
  p_output1[11]=0;
  p_output1[12]=t252*t3976*t4173*t4208 - 1.*t1484*t4180*t4208 + t252*t4208*t4211*t4527 + t5008*t6343 - 0.135*(t1139*t4180*t4208 + t394*t6343) + t5460*t6376 + t5761*t6454 - 0.08055*(t5424*t6376 + t5312*t6454) - 0.01004*(t5312*t6376 - 1.*t5424*t6454);
  p_output1[13]=t1686*t252*t3976*t4173 - 1.*t1484*t1686*t4180 + t1686*t252*t4211*t4527 + t5008*t6514 - 0.135*(t1139*t1686*t4180 + t394*t6514) + t5460*t6532 + t5761*t6622 - 0.08055*(t5424*t6532 + t5312*t6622) - 0.01004*(t5312*t6532 - 1.*t5424*t6622);
  p_output1[14]=-1.*t1484*t252 - 1.*t3976*t4173*t4180 - 1.*t4180*t4211*t4527 + t5008*t6734 - 0.135*(t1139*t252 + t394*t6734) + t5460*t6752 + t5761*t6824 - 0.08055*(t5424*t6752 + t5312*t6824) - 0.01004*(t5312*t6752 - 1.*t5424*t6824);
  p_output1[15]=t4527*t5929 + t3976*t6906 + t5460*t6944 - 0.135*t394*t6971 + t5008*t6971 + t1139*t5761*t6971 - 0.08055*(t5424*t6944 + t1139*t5312*t6971) - 0.01004*(t5312*t6944 - 1.*t1139*t5424*t6971);
  p_output1[16]=t3976*t4742 + t4527*t7039 + t5460*t7048 - 0.135*t394*t7090 + t5008*t7090 + t1139*t5761*t7090 - 0.08055*(t5424*t7048 + t1139*t5312*t7090) - 0.01004*(t5312*t7048 - 1.*t1139*t5424*t7090);
  p_output1[17]=-1.*t252*t3976*t4211 + t252*t4173*t4527 + t7303 + t7344 + t7348 + t7364 + t7385 + t7428;
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
  p_output1[39]=-0.135*t394*t6153 + t5008*t6153 + t1139*t5761*t6153 + t5929*t7439 + t5946*t7469 + t5460*t7497 - 0.01004*(-1.*t1139*t5424*t6153 + t5312*t7497) - 0.08055*(t1139*t5312*t6153 + t5424*t7497);
  p_output1[40]=t7039*t7439 + t7469*t7622 + t5460*t7632 - 0.135*t394*t7644 + t5008*t7644 + t1139*t5761*t7644 - 0.08055*(t5424*t7632 + t1139*t5312*t7644) - 0.01004*(t5312*t7632 - 1.*t1139*t5424*t7644);
  p_output1[41]=t7303 + t7344 + t7348 + t7364 + t7385 + t7428 + t252*t4173*t7439 + t252*t4211*t7469;
  p_output1[42]=-0.135*(-1.*t252*t394*t4208 - 1.*t1139*t6059) - 0.08055*t5312*t6176 + 0.01004*t5424*t6176 + t5761*t6176 + t252*t4208*t7711 + t6059*t7725;
  p_output1[43]=t1686*t252*t7711 + t7725*t7772 - 0.135*(t5770 - 1.*t1139*t7772) - 0.08055*t5312*t7783 + 0.01004*t5424*t7783 + t5761*t7783;
  p_output1[44]=-1.*t4180*t7711 + t7725*t7815 - 0.135*(t394*t4180 - 1.*t1139*t7815) - 0.08055*t5312*t7834 + 0.01004*t5424*t7834 + t5761*t7834;
  p_output1[45]=-0.01004*(-1.*t5424*t6153 - 1.*t5312*t6200) - 0.08055*t6281 + t6153*t7862 + t6200*t7875;
  p_output1[46]=t7644*t7862 + t7875*t7908 - 0.01004*(-1.*t5424*t7644 - 1.*t5312*t7908) - 0.08055*(t5312*t7644 - 1.*t5424*t7908);
  p_output1[47]=t7312*t7862 + t7875*t7944 - 0.01004*(-1.*t5424*t7312 - 1.*t5312*t7944) - 0.08055*(t5312*t7312 - 1.*t5424*t7944);
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

#include "Jp_RightThighJoint_mex.hh"

namespace SymExpression
{

void Jp_RightThighJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
