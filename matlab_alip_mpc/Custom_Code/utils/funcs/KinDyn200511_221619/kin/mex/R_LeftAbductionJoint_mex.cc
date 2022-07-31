/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:34 GMT-04:00
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
  double t1286;
  double t2253;
  double t138;
  double t3099;
  double t3174;
  double t3229;
  double t3150;
  double t3280;
  double t3265;
  double t3273;
  double t3279;
  double t3190;
  double t3239;
  double t3241;
  double t3340;
  double t3345;
  double t3348;
  double t3304;
  double t3306;
  double t3323;
  t1286 = Cos(var1[4]);
  t2253 = Sin(var1[3]);
  t138 = Cos(var1[3]);
  t3099 = Sin(var1[4]);
  t3174 = Cos(var1[5]);
  t3229 = Sin(var1[5]);
  t3150 = Cos(var1[6]);
  t3280 = Sin(var1[6]);
  t3265 = t138*t3174*t3099;
  t3273 = t2253*t3229;
  t3279 = t3265 + t3273;
  t3190 = -1.*t3174*t2253;
  t3239 = t138*t3099*t3229;
  t3241 = t3190 + t3239;
  t3340 = t3174*t2253*t3099;
  t3345 = -1.*t138*t3229;
  t3348 = t3340 + t3345;
  t3304 = t138*t3174;
  t3306 = t2253*t3099*t3229;
  t3323 = t3304 + t3306;
  p_output1[0]=t1286*t138;
  p_output1[1]=t1286*t2253;
  p_output1[2]=-1.*t3099;
  p_output1[3]=t3150*t3241 + t3279*t3280;
  p_output1[4]=t3150*t3323 + t3280*t3348;
  p_output1[5]=t1286*t3150*t3229 + t1286*t3174*t3280;
  p_output1[6]=t3150*t3279 - 1.*t3241*t3280;
  p_output1[7]=-1.*t3280*t3323 + t3150*t3348;
  p_output1[8]=t1286*t3150*t3174 - 1.*t1286*t3229*t3280;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 3, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "R_LeftAbductionJoint_mex.hh"

namespace SymExpression
{

void R_LeftAbductionJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
