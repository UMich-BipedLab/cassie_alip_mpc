/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:11 GMT-04:00
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
  double t1985;
  double t1487;
  double t2929;
  double t1924;
  double t1990;
  double t3668;
  double t1441;
  double t1002;
  double t1200;
  double t1447;
  double t2760;
  double t2843;
  double t2857;
  double t3042;
  double t3655;
  double t3839;
  double t3892;
  double t3930;
  double t3939;
  double t3950;
  double t4004;
  double t4080;
  double t4131;
  double t4150;
  double t4220;
  double t4232;
  double t4171;
  double t4200;
  double t4459;
  double t4469;
  double t4472;
  double t4483;
  double t4484;
  double t4494;
  double t4164;
  double t4610;
  double t4613;
  double t4616;
  t1985 = Cos(var1[14]);
  t1487 = Cos(var1[4]);
  t2929 = Cos(var1[13]);
  t1924 = Cos(var1[5]);
  t1990 = Sin(var1[13]);
  t3668 = Sin(var1[5]);
  t1441 = Sin(var1[4]);
  t1002 = Sin(var1[14]);
  t1200 = 0. + t1002;
  t1447 = -1.*t1200*t1441;
  t2760 = -1.*t1985*t1990;
  t2843 = 0. + t2760;
  t2857 = t1924*t2843;
  t3042 = -1.*t2929*t1985;
  t3655 = 0. + t3042;
  t3839 = t3655*t3668;
  t3892 = 0. + t2857 + t3839;
  t3930 = t1487*t3892;
  t3939 = 0. + t1447 + t3930;
  t3950 = -1.*t2929*t1924;
  t4004 = t1990*t3668;
  t4080 = 0. + t3950 + t4004;
  t4131 = t1487*t4080;
  t4150 = 0. + t4131;
  t4220 = t2929*t1002;
  t4232 = 0. + t4220;
  t4171 = t1990*t1002;
  t4200 = 0. + t4171;
  t4459 = t1924*t1990;
  t4469 = t2929*t3668;
  t4472 = 0. + t4459 + t4469;
  t4483 = t3655*t1924;
  t4484 = -1.*t2843*t3668;
  t4494 = 0. + t4483 + t4484;
  t4164 = 0. + t1985;
  t4610 = -1.e-6*t1200;
  t4613 = 0.00608*t4164;
  t4616 = 0.00644*t1200;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=-1.e-6*t3939 + 0.000842*t4150;
  p_output1[10]=0.00608*(0. - 1.*t1441*t4164 + t1487*(0. + t1924*t4200 + t3668*t4232));
  p_output1[11]=0.00644*t3939 - 1.e-6*t4150;
  p_output1[12]=0.000842*t4472 - 1.e-6*t4494;
  p_output1[13]=0.00608*(0. - 1.*t3668*t4200 + t1924*t4232);
  p_output1[14]=-1.e-6*t4472 + 0.00644*t4494;
  p_output1[15]=t4610;
  p_output1[16]=t4613;
  p_output1[17]=t4616;
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
  p_output1[39]=t4610;
  p_output1[40]=t4613;
  p_output1[41]=t4616;
  p_output1[42]=-0.000842;
  p_output1[43]=0;
  p_output1[44]=1.e-6;
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

#include "Jdq_AMBody_RightHip_mex.hh"

namespace SymExpression
{

void Jdq_AMBody_RightHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
