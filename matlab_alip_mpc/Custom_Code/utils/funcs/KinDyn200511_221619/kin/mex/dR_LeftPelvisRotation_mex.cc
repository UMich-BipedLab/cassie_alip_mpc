/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:48 GMT-04:00
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
  double t2646;
  double t1120;
  double t1257;
  double t2796;
  double t5065;
  double t5461;
  double t5404;
  double t5580;
  double t6295;
  double t6504;
  double t6507;
  double t6583;
  double t7122;
  double t7129;
  double t7237;
  double t5683;
  double t5800;
  double t5810;
  double t7774;
  double t7871;
  double t8002;
  double t8015;
  double t8840;
  double t8852;
  double t8869;
  double t6592;
  double t6618;
  double t6742;
  double t9066;
  double t5859;
  double t5881;
  double t6048;
  double t5811;
  double t8411;
  double t8414;
  double t8492;
  double t9253;
  double t7441;
  double t7473;
  double t9301;
  double t9302;
  double t9304;
  t2646 = Cos(var1[3]);
  t1120 = Cos(var1[4]);
  t1257 = Sin(var1[3]);
  t2796 = Sin(var1[4]);
  t5065 = Cos(var1[6]);
  t5461 = Cos(var1[5]);
  t5404 = Sin(var1[5]);
  t5580 = Sin(var1[6]);
  t6295 = t2646*t5461*t2796;
  t6504 = t1257*t5404;
  t6507 = t6295 + t6504;
  t6583 = t5065*t6507;
  t7122 = -1.*t5461*t1257;
  t7129 = t2646*t2796*t5404;
  t7237 = t7122 + t7129;
  t5683 = -1.*t2646*t5461;
  t5800 = -1.*t1257*t2796*t5404;
  t5810 = t5683 + t5800;
  t7774 = t5461*t1257*t2796;
  t7871 = -1.*t2646*t5404;
  t8002 = t7774 + t7871;
  t8015 = t5065*t8002;
  t8840 = t1120*t5461*t5065;
  t8852 = -1.*t1120*t5404*t5580;
  t8869 = t8840 + t8852;
  t6592 = t5461*t1257;
  t6618 = -1.*t2646*t2796*t5404;
  t6742 = t6592 + t6618;
  t9066 = -1.*t6507*t5580;
  t5859 = -1.*t5461*t1257*t2796;
  t5881 = t2646*t5404;
  t6048 = t5859 + t5881;
  t5811 = t5065*t5810;
  t8411 = t2646*t5461;
  t8414 = t1257*t2796*t5404;
  t8492 = t8411 + t8414;
  t9253 = -1.*t8002*t5580;
  t7441 = -1.*t7237*t5580;
  t7473 = t6583 + t7441;
  t9301 = -1.*t1120*t5065*t5404;
  t9302 = -1.*t1120*t5461*t5580;
  t9304 = t9301 + t9302;
  p_output1[0]=-1.*t1120*t1257*var2[3] - 1.*t2646*t2796*var2[4];
  p_output1[1]=t1120*t2646*var2[3] - 1.*t1257*t2796*var2[4];
  p_output1[2]=-1.*t1120*var2[4];
  p_output1[3]=(t5811 + t5580*t6048)*var2[3] + (t1120*t2646*t5065*t5404 + t1120*t2646*t5461*t5580)*var2[4] + (t6583 + t5580*t6742)*var2[5] + t7473*var2[6];
  p_output1[4]=(t5580*t6507 + t5065*t7237)*var2[3] + (t1120*t1257*t5065*t5404 + t1120*t1257*t5461*t5580)*var2[4] + (t5580*t5810 + t8015)*var2[5] + (t8015 - 1.*t5580*t8492)*var2[6];
  p_output1[5]=(-1.*t2796*t5065*t5404 - 1.*t2796*t5461*t5580)*var2[4] + t8869*var2[5] + t8869*var2[6];
  p_output1[6]=(-1.*t5580*t5810 + t5065*t6048)*var2[3] + (t1120*t2646*t5065*t5461 - 1.*t1120*t2646*t5404*t5580)*var2[4] + (t5065*t6742 + t9066)*var2[5] + (-1.*t5065*t7237 + t9066)*var2[6];
  p_output1[7]=t7473*var2[3] + (t1120*t1257*t5065*t5461 - 1.*t1120*t1257*t5404*t5580)*var2[4] + (t5811 + t9253)*var2[5] + (-1.*t5065*t8492 + t9253)*var2[6];
  p_output1[8]=(-1.*t2796*t5065*t5461 + t2796*t5404*t5580)*var2[4] + t9304*var2[5] + t9304*var2[6];
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

#include "dR_LeftPelvisRotation_mex.hh"

namespace SymExpression
{

void dR_LeftPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
