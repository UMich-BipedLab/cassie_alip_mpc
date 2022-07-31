/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:18 GMT-04:00
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
  double t1203;
  double t1192;
  double t1197;
  double t1206;
  double t1218;
  double t1230;
  double t1231;
  double t1234;
  double t1237;
  double t1242;
  double t1243;
  double t1253;
  t1203 = Cos(var1[3]);
  t1192 = Cos(var1[4]);
  t1197 = Sin(var1[3]);
  t1206 = Sin(var1[4]);
  t1218 = Sin(var1[5]);
  t1230 = Cos(var1[5]);
  t1231 = t1203*t1230*t1206;
  t1234 = t1197*t1218;
  t1237 = t1231 + t1234;
  t1242 = -1.*t1203*t1230;
  t1243 = -1.*t1197*t1206*t1218;
  t1253 = t1242 + t1243;
  p_output1[0]=-1.*t1192*t1197*var2[3] - 1.*t1203*t1206*var2[4];
  p_output1[1]=t1192*t1203*var2[3] - 1.*t1197*t1206*var2[4];
  p_output1[2]=-1.*t1192*var2[4];
  p_output1[3]=t1253*var2[3] + t1192*t1203*t1218*var2[4] + t1237*var2[5];
  p_output1[4]=(t1203*t1206*t1218 - 1.*t1197*t1230)*var2[3] + t1192*t1197*t1218*var2[4] + (-1.*t1203*t1218 + t1197*t1206*t1230)*var2[5];
  p_output1[5]=-1.*t1206*t1218*var2[4] + t1192*t1230*var2[5];
  p_output1[6]=(t1203*t1218 - 1.*t1197*t1206*t1230)*var2[3] + t1192*t1203*t1230*var2[4] + (-1.*t1203*t1206*t1218 + t1197*t1230)*var2[5];
  p_output1[7]=t1237*var2[3] + t1192*t1197*t1230*var2[4] + t1253*var2[5];
  p_output1[8]=-1.*t1206*t1230*var2[4] - 1.*t1192*t1218*var2[5];
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

#include "dR_BaseRotX_mex.hh"

namespace SymExpression
{

void dR_BaseRotX_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
