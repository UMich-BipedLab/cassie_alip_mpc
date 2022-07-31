/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:45 GMT-04:00
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
  double t1066;
  double t619;
  double t644;
  double t1323;
  double t3743;
  double t4142;
  double t4044;
  double t4300;
  double t4801;
  double t4898;
  double t4952;
  double t4994;
  double t5178;
  double t5180;
  double t5342;
  double t4474;
  double t4511;
  double t4528;
  double t5683;
  double t5791;
  double t5799;
  double t5802;
  double t6491;
  double t6498;
  double t6504;
  double t5065;
  double t5076;
  double t5114;
  double t6680;
  double t4602;
  double t4618;
  double t4741;
  double t4558;
  double t5881;
  double t5938;
  double t5989;
  double t7416;
  double t5343;
  double t5456;
  double t7658;
  double t7662;
  double t7664;
  double t7687;
  double t7817;
  double t4062;
  double t4378;
  double t4437;
  double t6592;
  double t6593;
  double t6618;
  double t7854;
  double t7871;
  double t7917;
  double t8002;
  double t8015;
  double t8021;
  double t6679;
  double t6742;
  double t5139;
  double t5146;
  double t6770;
  double t6935;
  double t4746;
  double t4773;
  double t7035;
  double t7042;
  double t7119;
  double t5610;
  double t5636;
  double t5637;
  double t7194;
  double t7357;
  double t7360;
  double t5651;
  double t5658;
  double t5661;
  double t7441;
  double t5810;
  double t5811;
  double t8840;
  double t8852;
  double t8887;
  double t8984;
  double t9009;
  double t7585;
  double t7587;
  double t6008;
  double t6048;
  double t9338;
  double t9339;
  double t6203;
  double t6242;
  double t6295;
  double t7670;
  double t7672;
  double t7675;
  t1066 = Cos(var1[3]);
  t619 = Cos(var1[4]);
  t644 = Sin(var1[3]);
  t1323 = Sin(var1[4]);
  t3743 = Cos(var1[6]);
  t4142 = Cos(var1[5]);
  t4044 = Sin(var1[5]);
  t4300 = Sin(var1[6]);
  t4801 = t1066*t4142*t1323;
  t4898 = t644*t4044;
  t4952 = t4801 + t4898;
  t4994 = t3743*t4952;
  t5178 = -1.*t4142*t644;
  t5180 = t1066*t1323*t4044;
  t5342 = t5178 + t5180;
  t4474 = -1.*t1066*t4142;
  t4511 = -1.*t644*t1323*t4044;
  t4528 = t4474 + t4511;
  t5683 = t4142*t644*t1323;
  t5791 = -1.*t1066*t4044;
  t5799 = t5683 + t5791;
  t5802 = t3743*t5799;
  t6491 = t619*t4142*t3743;
  t6498 = -1.*t619*t4044*t4300;
  t6504 = t6491 + t6498;
  t5065 = t4142*t644;
  t5076 = -1.*t1066*t1323*t4044;
  t5114 = t5065 + t5076;
  t6680 = -1.*t4952*t4300;
  t4602 = -1.*t4142*t644*t1323;
  t4618 = t1066*t4044;
  t4741 = t4602 + t4618;
  t4558 = t3743*t4528;
  t5881 = t1066*t4142;
  t5938 = t644*t1323*t4044;
  t5989 = t5881 + t5938;
  t7416 = -1.*t5799*t4300;
  t5343 = -1.*t5342*t4300;
  t5456 = t4994 + t5343;
  t7658 = -1.*t619*t3743*t4044;
  t7662 = -1.*t619*t4142*t4300;
  t7664 = t7658 + t7662;
  t7687 = -1.*t3743;
  t7817 = 1. + t7687;
  t4062 = t1066*t619*t3743*t4044;
  t4378 = t1066*t619*t4142*t4300;
  t4437 = t4062 + t4378;
  t6592 = t1066*t619*t4142*t3743;
  t6593 = -1.*t1066*t619*t4044*t4300;
  t6618 = t6592 + t6593;
  t7854 = 0.07996*t7817;
  t7871 = -0.135*t4300;
  t7917 = 0. + t7854 + t7871;
  t8002 = 0.135*t7817;
  t8015 = 0.07996*t4300;
  t8021 = 0. + t8002 + t8015;
  t6679 = t3743*t5114;
  t6742 = t6679 + t6680;
  t5139 = t5114*t4300;
  t5146 = t4994 + t5139;
  t6770 = -1.*t3743*t5342;
  t6935 = t6770 + t6680;
  t4746 = t4741*t4300;
  t4773 = t4558 + t4746;
  t7035 = t3743*t4741;
  t7042 = -1.*t4528*t4300;
  t7119 = t7035 + t7042;
  t5610 = t619*t3743*t644*t4044;
  t5636 = t619*t4142*t644*t4300;
  t5637 = t5610 + t5636;
  t7194 = t619*t4142*t3743*t644;
  t7357 = -1.*t619*t644*t4044*t4300;
  t7360 = t7194 + t7357;
  t5651 = t3743*t5342;
  t5658 = t4952*t4300;
  t5661 = t5651 + t5658;
  t7441 = t4558 + t7416;
  t5810 = t4528*t4300;
  t5811 = t5802 + t5810;
  t8840 = -0.135*t3743;
  t8852 = t8840 + t8015;
  t8887 = 0.07996*t3743;
  t8984 = 0.135*t4300;
  t9009 = t8887 + t8984;
  t7585 = -1.*t3743*t5989;
  t7587 = t7585 + t7416;
  t6008 = -1.*t5989*t4300;
  t6048 = t5802 + t6008;
  t9338 = 0.09786*t7664;
  t9339 = 0.1351*t6504;
  t6203 = -1.*t3743*t1323*t4044;
  t6242 = -1.*t4142*t1323*t4300;
  t6295 = t6203 + t6242;
  t7670 = -1.*t4142*t3743*t1323;
  t7672 = t1323*t4044*t4300;
  t7675 = t7670 + t7672;
  p_output1[0]=-1.*t619*t644*var2[3] - 1.*t1066*t1323*var2[4];
  p_output1[1]=t1066*t619*var2[3] - 1.*t1323*t644*var2[4];
  p_output1[2]=-1.*t619*var2[4];
  p_output1[3]=0;
  p_output1[4]=t4773*var2[3] + t4437*var2[4] + t5146*var2[5] + t5456*var2[6];
  p_output1[5]=t5661*var2[3] + t5637*var2[4] + t5811*var2[5] + t6048*var2[6];
  p_output1[6]=t6295*var2[4] + t6504*var2[5] + t6504*var2[6];
  p_output1[7]=0;
  p_output1[8]=t7119*var2[3] + t6618*var2[4] + t6742*var2[5] + t6935*var2[6];
  p_output1[9]=t5456*var2[3] + t7360*var2[4] + t7441*var2[5] + t7587*var2[6];
  p_output1[10]=t7675*var2[4] + t7664*var2[5] + t7664*var2[6];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.1351*t4773 + 0.05485*t619*t644 + 0.09786*t7119 + t4741*t7917 + t4528*t8021)*var2[3] + (0.05485*t1066*t1323 + 0.1351*t4437 + 0.09786*t6618 + t1066*t4142*t619*t7917 + t1066*t4044*t619*t8021)*var2[4] + (0.1351*t5146 + 0.09786*t6742 + t5114*t7917 + t4952*t8021)*var2[5] + (0.1351*t5456 + 0.09786*t6935 + t4952*t8852 + t5342*t9009)*var2[6];
  p_output1[13]=var2[1] + (0.09786*t5456 + 0.1351*t5661 - 0.05485*t1066*t619 + t4952*t7917 + t5342*t8021)*var2[3] + (0.1351*t5637 + 0.05485*t1323*t644 + 0.09786*t7360 + t4142*t619*t644*t7917 + t4044*t619*t644*t8021)*var2[4] + (0.1351*t5811 + 0.09786*t7441 + t4528*t7917 + t5799*t8021)*var2[5] + (0.1351*t6048 + 0.09786*t7587 + t5799*t8852 + t5989*t9009)*var2[6];
  p_output1[14]=var2[2] + (0.05485*t619 + 0.1351*t6295 + 0.09786*t7675 - 1.*t1323*t4142*t7917 - 1.*t1323*t4044*t8021)*var2[4] + (-1.*t4044*t619*t7917 + t4142*t619*t8021 + t9338 + t9339)*var2[5] + (t4142*t619*t8852 + t4044*t619*t9009 + t9338 + t9339)*var2[6];
  p_output1[15]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dT_LeftPelvisRotation_mex.hh"

namespace SymExpression
{

void dT_LeftPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
