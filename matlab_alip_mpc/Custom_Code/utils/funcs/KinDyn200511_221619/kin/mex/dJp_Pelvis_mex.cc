/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:07 GMT-04:00
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
  double t1354;
  double t279;
  double t1414;
  double t1473;
  double t148;
  double t1600;
  double t1737;
  double t1402;
  double t1459;
  double t1469;
  double t2115;
  double t2133;
  double t2314;
  double t2489;
  double t1755;
  double t1926;
  double t1938;
  double t1482;
  double t1604;
  double t1663;
  double t2505;
  double t2510;
  double t2547;
  double t2326;
  double t2380;
  double t2392;
  t1354 = Sin(var1[3]);
  t279 = Cos(var1[5]);
  t1414 = Sin(var1[4]);
  t1473 = Cos(var1[3]);
  t148 = Cos(var1[4]);
  t1600 = Sin(var1[5]);
  t1737 = -0.01915*t1473*t148;
  t1402 = -0.10836*t148*t279*t1354;
  t1459 = 0.01915*t1354*t1414;
  t1469 = t1402 + t1459;
  t2115 = 0.10836*t1473*t148*t279;
  t2133 = -0.01915*t1473*t1414;
  t2314 = t2115 + t2133;
  t2489 = -0.01915*t148*t1354;
  t1755 = -1.*t1473*t279*t1414;
  t1926 = -1.*t1354*t1600;
  t1938 = t1755 + t1926;
  t1482 = t1473*t279;
  t1604 = t1354*t1414*t1600;
  t1663 = t1482 + t1604;
  t2505 = -1.*t279*t1354*t1414;
  t2510 = t1473*t1600;
  t2547 = t2505 + t2510;
  t2326 = t279*t1354;
  t2380 = -1.*t1473*t1414*t1600;
  t2392 = t2326 + t2380;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t1737 + 0.10836*t1938)*var2[3] + t1469*var2[4] + 0.10836*t1663*var2[5];
  p_output1[10]=(t2489 + 0.10836*t2547)*var2[3] + t2314*var2[4] + 0.10836*t2392*var2[5];
  p_output1[11]=0;
  p_output1[12]=t1469*var2[3] + (t1737 - 0.10836*t1414*t1473*t279)*var2[4] - 0.10836*t1473*t148*t1600*var2[5];
  p_output1[13]=t2314*var2[3] + (t2489 - 0.10836*t1354*t1414*t279)*var2[4] - 0.10836*t1354*t148*t1600*var2[5];
  p_output1[14]=(0.01915*t1414 - 0.10836*t148*t279)*var2[4] + 0.10836*t1414*t1600*var2[5];
  p_output1[15]=0.10836*t1663*var2[3] - 0.10836*t1473*t148*t1600*var2[4] + 0.10836*t1938*var2[5];
  p_output1[16]=0.10836*t2392*var2[3] - 0.10836*t1354*t148*t1600*var2[4] + 0.10836*t2547*var2[5];
  p_output1[17]=0.10836*t1414*t1600*var2[4] - 0.10836*t148*t279*var2[5];
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

#include "dJp_Pelvis_mex.hh"

namespace SymExpression
{

void dJp_Pelvis_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
