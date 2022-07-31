/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:43 GMT-04:00
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
  double t306;
  double t1948;
  double t85;
  double t538;
  double t4099;
  double t5859;
  double t79;
  double t6416;
  double t6304;
  double t6313;
  double t6321;
  double t6131;
  double t6172;
  double t6188;
  double t6292;
  double t6414;
  double t6430;
  double t6517;
  double t6542;
  double t6546;
  double t6585;
  double t6588;
  double t6589;
  double t6596;
  double t6597;
  double t6607;
  double t6615;
  double t6643;
  double t6714;
  double t6719;
  double t6738;
  double t1782;
  double t5389;
  double t5763;
  double t5912;
  double t5976;
  double t6010;
  double t6294;
  double t6594;
  double t6754;
  double t6816;
  double t6863;
  double t6892;
  double t6906;
  double t6917;
  double t7127;
  double t7140;
  double t7150;
  double t7154;
  double t7159;
  double t7160;
  double t7058;
  double t7063;
  double t7070;
  double t7072;
  t306 = Cos(var1[5]);
  t1948 = Sin(var1[3]);
  t85 = Cos(var1[3]);
  t538 = Sin(var1[4]);
  t4099 = Sin(var1[5]);
  t5859 = Cos(var1[13]);
  t79 = Sin(var1[13]);
  t6416 = Cos(var1[4]);
  t6304 = t5859*t306;
  t6313 = -1.*t79*t4099;
  t6321 = 0. + t6304 + t6313;
  t6131 = -1.*t538;
  t6172 = 0. + t6131;
  t6188 = var2[3]*t6172;
  t6292 = 0. + var2[13] + var2[5] + t6188;
  t6414 = var2[4]*t6321;
  t6430 = t306*t79;
  t6517 = t5859*t4099;
  t6542 = 0. + t6430 + t6517;
  t6546 = t6416*t6542;
  t6585 = 0. + t6546;
  t6588 = var2[3]*t6585;
  t6589 = 0. + t6414 + t6588;
  t6596 = -1.*t306*t79;
  t6597 = -1.*t5859*t4099;
  t6607 = 0. + t6596 + t6597;
  t6615 = var2[4]*t6607;
  t6643 = t6416*t6321;
  t6714 = 0. + t6643;
  t6719 = var2[3]*t6714;
  t6738 = 0. + t6615 + t6719;
  t1782 = t85*t306*t538;
  t5389 = t1948*t4099;
  t5763 = t1782 + t5389;
  t5912 = -1.*t306*t1948;
  t5976 = t85*t538*t4099;
  t6010 = t5912 + t5976;
  t6294 = -1.e-6*t6292;
  t6594 = 0.00559*t6589;
  t6754 = -3.e-6*t6738;
  t6816 = t6294 + t6594 + t6754;
  t6863 = 0.00272*t6292;
  t6892 = -1.e-6*t6589;
  t6906 = 2.e-6*t6738;
  t6917 = t6863 + t6892 + t6906;
  t7127 = t306*t1948*t538;
  t7140 = -1.*t85*t4099;
  t7150 = t7127 + t7140;
  t7154 = t85*t306;
  t7159 = t1948*t538*t4099;
  t7160 = t7154 + t7159;
  t7058 = 2.e-6*t6292;
  t7063 = -3.e-6*t6589;
  t7070 = 0.00464*t6738;
  t7072 = t7058 + t7063 + t7070;
  p_output1[0]=t6816*(t5859*t6010 + t5763*t79) + t7072*(t5763*t5859 - 1.*t6010*t79) + t6416*t6917*t85;
  p_output1[1]=t1948*t6416*t6917 + t6816*(t5859*t7160 + t7150*t79) + t7072*(t5859*t7150 - 1.*t7160*t79);
  p_output1[2]=-1.*t538*t6917 + t6816*(t4099*t5859*t6416 + t306*t6416*t79) + t7072*(t306*t5859*t6416 - 1.*t4099*t6416*t79);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "AMWorld_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void AMWorld_RightPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
