/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:58 GMT-04:00
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
  double t2883;
  double t107;
  double t158;
  double t2964;
  double t6885;
  double t6251;
  double t6945;
  double t6256;
  double t7335;
  double t7337;
  double t7474;
  double t7475;
  double t8100;
  double t8109;
  double t8126;
  double t8561;
  double t8638;
  double t8655;
  double t9264;
  double t9278;
  double t9305;
  double t9330;
  double t9385;
  double t9387;
  double t9396;
  double t7503;
  double t7628;
  double t7707;
  double t9428;
  double t8337;
  double t8339;
  double t8353;
  double t8240;
  double t8243;
  double t8728;
  double t9453;
  double t9367;
  double t9369;
  double t9372;
  double t9466;
  double t9469;
  double t9472;
  t2883 = Cos(var1[3]);
  t107 = Cos(var1[4]);
  t158 = Sin(var1[3]);
  t2964 = Sin(var1[4]);
  t6885 = Cos(var1[13]);
  t6251 = Cos(var1[5]);
  t6945 = Sin(var1[5]);
  t6256 = Sin(var1[13]);
  t7335 = t2883*t6251*t2964;
  t7337 = t158*t6945;
  t7474 = t7335 + t7337;
  t7475 = t6885*t7474;
  t8100 = -1.*t6251*t158;
  t8109 = t2883*t2964*t6945;
  t8126 = t8100 + t8109;
  t8561 = -1.*t2883*t6251;
  t8638 = -1.*t158*t2964*t6945;
  t8655 = t8561 + t8638;
  t9264 = t6251*t158*t2964;
  t9278 = -1.*t2883*t6945;
  t9305 = t9264 + t9278;
  t9330 = t6885*t9305;
  t9385 = t6885*t107*t6251;
  t9387 = -1.*t107*t6256*t6945;
  t9396 = t9385 + t9387;
  t7503 = t6251*t158;
  t7628 = -1.*t2883*t2964*t6945;
  t7707 = t7503 + t7628;
  t9428 = -1.*t6256*t7474;
  t8337 = -1.*t6251*t158*t2964;
  t8339 = t2883*t6945;
  t8353 = t8337 + t8339;
  t8240 = -1.*t6256*t8126;
  t8243 = t7475 + t8240;
  t8728 = t6885*t8655;
  t9453 = -1.*t6256*t9305;
  t9367 = t2883*t6251;
  t9369 = t158*t2964*t6945;
  t9372 = t9367 + t9369;
  t9466 = -1.*t107*t6251*t6256;
  t9469 = -1.*t6885*t107*t6945;
  t9472 = t9466 + t9469;
  p_output1[0]=-1.*t107*t158*var2[3] - 1.*t2883*t2964*var2[4];
  p_output1[1]=t107*t2883*var2[3] - 1.*t158*t2964*var2[4];
  p_output1[2]=-1.*t107*var2[4];
  p_output1[3]=(t6256*t8353 + t8728)*var2[3] + (t107*t2883*t6251*t6256 + t107*t2883*t6885*t6945)*var2[4] + (t7475 + t6256*t7707)*var2[5] + t8243*var2[13];
  p_output1[4]=(t6256*t7474 + t6885*t8126)*var2[3] + (t107*t158*t6251*t6256 + t107*t158*t6885*t6945)*var2[4] + (t6256*t8655 + t9330)*var2[5] + (t9330 - 1.*t6256*t9372)*var2[13];
  p_output1[5]=(-1.*t2964*t6251*t6256 - 1.*t2964*t6885*t6945)*var2[4] + t9396*var2[5] + t9396*var2[13];
  p_output1[6]=(t6885*t8353 - 1.*t6256*t8655)*var2[3] + (t107*t2883*t6251*t6885 - 1.*t107*t2883*t6256*t6945)*var2[4] + (t6885*t7707 + t9428)*var2[5] + (-1.*t6885*t8126 + t9428)*var2[13];
  p_output1[7]=t8243*var2[3] + (t107*t158*t6251*t6885 - 1.*t107*t158*t6256*t6945)*var2[4] + (t8728 + t9453)*var2[5] + (-1.*t6885*t9372 + t9453)*var2[13];
  p_output1[8]=(-1.*t2964*t6251*t6885 + t2964*t6256*t6945)*var2[4] + t9472*var2[5] + t9472*var2[13];
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

#include "dR_RightAbductionJoint_mex.hh"

namespace SymExpression
{

void dR_RightAbductionJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
