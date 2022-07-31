/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:39 GMT-04:00
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
  double t579;
  double t354;
  double t526;
  double t585;
  double t79;
  double t539;
  double t1238;
  double t1496;
  double t1667;
  double t1737;
  double t1782;
  double t4874;
  double t4901;
  double t4989;
  double t5137;
  double t5389;
  double t5516;
  double t5642;
  double t5764;
  double t5806;
  double t5859;
  double t5878;
  double t5912;
  double t5976;
  double t5763;
  double t6010;
  double t6012;
  double t6026;
  double t6122;
  double t6131;
  double t6154;
  double t6165;
  double t6172;
  t306 = Sin(var1[4]);
  t579 = Cos(var1[13]);
  t354 = Cos(var1[5]);
  t526 = Sin(var1[13]);
  t585 = Sin(var1[5]);
  t79 = Cos(var1[4]);
  t539 = t354*t526;
  t1238 = t579*t585;
  t1496 = 0. + t539 + t1238;
  t1667 = t579*t354;
  t1737 = -1.*t526*t585;
  t1782 = 0. + t1667 + t1737;
  t4874 = -1.*t354*t526;
  t4901 = -1.*t579*t585;
  t4989 = t4874 + t4901;
  t5137 = var2[4]*t4989;
  t5389 = t1667 + t1737;
  t5516 = var2[3]*t79*t5389;
  t5642 = t5137 + t5516;
  t5764 = var2[3]*t79*t4989;
  t5806 = -1.*t579*t354;
  t5859 = t526*t585;
  t5878 = t5806 + t5859;
  t5912 = var2[4]*t5878;
  t5976 = t5764 + t5912;
  t5763 = -1.e-6*t5642;
  t6010 = 2.e-6*t5976;
  t6012 = t5763 + t6010;
  t6026 = 0.00559*t5642;
  t6122 = -3.e-6*t5976;
  t6131 = t6026 + t6122;
  t6154 = -3.e-6*t5642;
  t6165 = 0.00464*t5976;
  t6172 = t6154 + t6165;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=1.e-6*t1496*t306*var2[3] - 2.e-6*t1782*t306*var2[3] - 0.00272*t79*var2[3];
  p_output1[13]=-0.00559*t1496*t306*var2[3] + 3.e-6*t1782*t306*var2[3] + 1.e-6*t79*var2[3];
  p_output1[14]=3.e-6*t1496*t306*var2[3] - 0.00464*t1782*t306*var2[3] - 2.e-6*t79*var2[3];
  p_output1[15]=t6012;
  p_output1[16]=t6131;
  p_output1[17]=t6172;
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
  p_output1[39]=t6012;
  p_output1[40]=t6131;
  p_output1[41]=t6172;
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

#include "Jq_AMBody_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void Jq_AMBody_RightPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
