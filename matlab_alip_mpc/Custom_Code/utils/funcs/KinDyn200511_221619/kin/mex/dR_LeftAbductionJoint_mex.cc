/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:36 GMT-04:00
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
  double t3421;
  double t692;
  double t695;
  double t3454;
  double t3588;
  double t3601;
  double t3589;
  double t3603;
  double t3650;
  double t3656;
  double t3660;
  double t3661;
  double t3675;
  double t3676;
  double t3678;
  double t3616;
  double t3618;
  double t3627;
  double t3696;
  double t3697;
  double t3698;
  double t3703;
  double t3737;
  double t3738;
  double t3741;
  double t3662;
  double t3667;
  double t3669;
  double t3758;
  double t3633;
  double t3635;
  double t3636;
  double t3628;
  double t3707;
  double t3708;
  double t3709;
  double t3798;
  double t3679;
  double t3680;
  double t3812;
  double t3819;
  double t3822;
  t3421 = Cos(var1[3]);
  t692 = Cos(var1[4]);
  t695 = Sin(var1[3]);
  t3454 = Sin(var1[4]);
  t3588 = Cos(var1[6]);
  t3601 = Cos(var1[5]);
  t3589 = Sin(var1[5]);
  t3603 = Sin(var1[6]);
  t3650 = t3421*t3601*t3454;
  t3656 = t695*t3589;
  t3660 = t3650 + t3656;
  t3661 = t3588*t3660;
  t3675 = -1.*t3601*t695;
  t3676 = t3421*t3454*t3589;
  t3678 = t3675 + t3676;
  t3616 = -1.*t3421*t3601;
  t3618 = -1.*t695*t3454*t3589;
  t3627 = t3616 + t3618;
  t3696 = t3601*t695*t3454;
  t3697 = -1.*t3421*t3589;
  t3698 = t3696 + t3697;
  t3703 = t3588*t3698;
  t3737 = t692*t3601*t3588;
  t3738 = -1.*t692*t3589*t3603;
  t3741 = t3737 + t3738;
  t3662 = t3601*t695;
  t3667 = -1.*t3421*t3454*t3589;
  t3669 = t3662 + t3667;
  t3758 = -1.*t3660*t3603;
  t3633 = -1.*t3601*t695*t3454;
  t3635 = t3421*t3589;
  t3636 = t3633 + t3635;
  t3628 = t3588*t3627;
  t3707 = t3421*t3601;
  t3708 = t695*t3454*t3589;
  t3709 = t3707 + t3708;
  t3798 = -1.*t3698*t3603;
  t3679 = -1.*t3678*t3603;
  t3680 = t3661 + t3679;
  t3812 = -1.*t692*t3588*t3589;
  t3819 = -1.*t692*t3601*t3603;
  t3822 = t3812 + t3819;
  p_output1[0]=-1.*t692*t695*var2[3] - 1.*t3421*t3454*var2[4];
  p_output1[1]=t3421*t692*var2[3] - 1.*t3454*t695*var2[4];
  p_output1[2]=-1.*t692*var2[4];
  p_output1[3]=(t3628 + t3603*t3636)*var2[3] + (t3421*t3588*t3589*t692 + t3421*t3601*t3603*t692)*var2[4] + (t3661 + t3603*t3669)*var2[5] + t3680*var2[6];
  p_output1[4]=(t3603*t3660 + t3588*t3678)*var2[3] + (t3588*t3589*t692*t695 + t3601*t3603*t692*t695)*var2[4] + (t3603*t3627 + t3703)*var2[5] + (t3703 - 1.*t3603*t3709)*var2[6];
  p_output1[5]=(-1.*t3454*t3588*t3589 - 1.*t3454*t3601*t3603)*var2[4] + t3741*var2[5] + t3741*var2[6];
  p_output1[6]=(-1.*t3603*t3627 + t3588*t3636)*var2[3] + (t3421*t3588*t3601*t692 - 1.*t3421*t3589*t3603*t692)*var2[4] + (t3588*t3669 + t3758)*var2[5] + (-1.*t3588*t3678 + t3758)*var2[6];
  p_output1[7]=t3680*var2[3] + (t3588*t3601*t692*t695 - 1.*t3589*t3603*t692*t695)*var2[4] + (t3628 + t3798)*var2[5] + (-1.*t3588*t3709 + t3798)*var2[6];
  p_output1[8]=(-1.*t3454*t3588*t3601 + t3454*t3589*t3603)*var2[4] + t3822*var2[5] + t3822*var2[6];
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

#include "dR_LeftAbductionJoint_mex.hh"

namespace SymExpression
{

void dR_LeftAbductionJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
