/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:16 GMT-04:00
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
  double t1178;
  double t636;
  double t914;
  double t1244;
  double t2191;
  double t2271;
  double t2283;
  double t2329;
  double t2395;
  double t2428;
  double t2486;
  double t2496;
  double t3295;
  double t3320;
  double t3335;
  double t3139;
  double t3232;
  double t3239;
  t1178 = Cos(var1[3]);
  t636 = Cos(var1[4]);
  t914 = Sin(var1[3]);
  t1244 = Sin(var1[4]);
  t2191 = Sin(var1[5]);
  t2271 = Cos(var1[5]);
  t2283 = t1178*t2271*t1244;
  t2329 = t914*t2191;
  t2395 = t2283 + t2329;
  t2428 = -1.*t1178*t2271;
  t2486 = -1.*t914*t1244*t2191;
  t2496 = t2428 + t2486;
  t3295 = t2271*t914;
  t3320 = -1.*t1178*t1244*t2191;
  t3335 = t3295 + t3320;
  t3139 = -1.*t2271*t914*t1244;
  t3232 = t1178*t2191;
  t3239 = t3139 + t3232;
  p_output1[0]=-1.*t636*t914*var2[3] - 1.*t1178*t1244*var2[4];
  p_output1[1]=t1178*t636*var2[3] - 1.*t1244*t914*var2[4];
  p_output1[2]=-1.*t636*var2[4];
  p_output1[3]=0;
  p_output1[4]=t2496*var2[3] + t1178*t2191*t636*var2[4] + t2395*var2[5];
  p_output1[5]=(t1178*t1244*t2191 - 1.*t2271*t914)*var2[3] + t2191*t636*t914*var2[4] + (-1.*t1178*t2191 + t1244*t2271*t914)*var2[5];
  p_output1[6]=-1.*t1244*t2191*var2[4] + t2271*t636*var2[5];
  p_output1[7]=0;
  p_output1[8]=t3239*var2[3] + t1178*t2271*t636*var2[4] + t3335*var2[5];
  p_output1[9]=t2395*var2[3] + t2271*t636*t914*var2[4] + t2496*var2[5];
  p_output1[10]=-1.*t1244*t2271*var2[4] - 1.*t2191*t636*var2[5];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (0.10836*t3239 - 0.01915*t636*t914)*var2[3] + (-0.01915*t1178*t1244 + 0.10836*t1178*t2271*t636)*var2[4] + 0.10836*t3335*var2[5];
  p_output1[13]=var2[1] + (0.10836*t2395 + 0.01915*t1178*t636)*var2[3] + (-0.01915*t1244*t914 + 0.10836*t2271*t636*t914)*var2[4] + 0.10836*t2496*var2[5];
  p_output1[14]=var2[2] + (-0.10836*t1244*t2271 - 0.01915*t636)*var2[4] - 0.10836*t2191*t636*var2[5];
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

#include "dT_Pelvis_mex.hh"

namespace SymExpression
{

void dT_Pelvis_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
