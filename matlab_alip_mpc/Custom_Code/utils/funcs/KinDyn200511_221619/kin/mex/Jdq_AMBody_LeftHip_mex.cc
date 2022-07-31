/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:24 GMT-04:00
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
  double t738;
  double t1136;
  double t1633;
  double t1115;
  double t2873;
  double t1826;
  double t4715;
  double t4739;
  double t1521;
  double t1930;
  double t1944;
  double t2181;
  double t2825;
  double t2897;
  double t2943;
  double t3146;
  double t3154;
  double t3237;
  double t3526;
  double t4298;
  double t4566;
  double t4781;
  double t4835;
  double t4900;
  double t5019;
  double t5020;
  double t5042;
  double t5069;
  double t5189;
  double t5197;
  double t5221;
  double t5229;
  double t5239;
  double t5241;
  double t4962;
  double t5294;
  double t5295;
  double t5297;
  t738 = Cos(var1[4]);
  t1136 = Cos(var1[6]);
  t1633 = Sin(var1[5]);
  t1115 = Cos(var1[5]);
  t2873 = Cos(var1[7]);
  t1826 = Sin(var1[6]);
  t4715 = Sin(var1[4]);
  t4739 = Sin(var1[7]);
  t1521 = -1.*t1115*t1136;
  t1930 = t1633*t1826;
  t1944 = 0. + t1521 + t1930;
  t2181 = t738*t1944;
  t2825 = 0. + t2181;
  t2897 = -1.*t1136*t2873;
  t2943 = 0. + t2897;
  t3146 = t2943*t1633;
  t3154 = -1.*t2873*t1826;
  t3237 = 0. + t3154;
  t3526 = t1115*t3237;
  t4298 = 0. + t3146 + t3526;
  t4566 = t738*t4298;
  t4781 = 0. + t4739;
  t4835 = -1.*t4715*t4781;
  t4900 = 0. + t4566 + t4835;
  t5019 = t1136*t4739;
  t5020 = 0. + t5019;
  t5042 = t1826*t4739;
  t5069 = 0. + t5042;
  t5189 = t1136*t1633;
  t5197 = t1115*t1826;
  t5221 = 0. + t5189 + t5197;
  t5229 = t1115*t2943;
  t5239 = -1.*t1633*t3237;
  t5241 = 0. + t5229 + t5239;
  t4962 = 0. + t2873;
  t5294 = -1.e-6*t4781;
  t5295 = 0.00608*t4962;
  t5297 = 0.00644*t4781;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0.000842*t2825 - 1.e-6*t4900;
  p_output1[10]=0.00608*(0. - 1.*t4715*t4962 + (0. + t1633*t5020 + t1115*t5069)*t738);
  p_output1[11]=-1.e-6*t2825 + 0.00644*t4900;
  p_output1[12]=0.000842*t5221 - 1.e-6*t5241;
  p_output1[13]=0.00608*(0. + t1115*t5020 - 1.*t1633*t5069);
  p_output1[14]=-1.e-6*t5221 + 0.00644*t5241;
  p_output1[15]=t5294;
  p_output1[16]=t5295;
  p_output1[17]=t5297;
  p_output1[18]=t5294;
  p_output1[19]=t5295;
  p_output1[20]=t5297;
  p_output1[21]=-0.000842;
  p_output1[22]=0;
  p_output1[23]=1.e-6;
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
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
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

#include "Jdq_AMBody_LeftHip_mex.hh"

namespace SymExpression
{

void Jdq_AMBody_LeftHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
