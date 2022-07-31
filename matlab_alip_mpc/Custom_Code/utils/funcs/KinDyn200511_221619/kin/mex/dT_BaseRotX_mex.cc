/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:15 GMT-04:00
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
  double t1058;
  double t977;
  double t1029;
  double t1066;
  double t1080;
  double t1085;
  double t1087;
  double t1088;
  double t1095;
  double t1102;
  double t1111;
  double t1114;
  t1058 = Cos(var1[3]);
  t977 = Cos(var1[4]);
  t1029 = Sin(var1[3]);
  t1066 = Sin(var1[4]);
  t1080 = Sin(var1[5]);
  t1085 = Cos(var1[5]);
  t1087 = t1058*t1085*t1066;
  t1088 = t1029*t1080;
  t1095 = t1087 + t1088;
  t1102 = -1.*t1058*t1085;
  t1111 = -1.*t1029*t1066*t1080;
  t1114 = t1102 + t1111;
  p_output1[0]=-1.*t1029*t977*var2[3] - 1.*t1058*t1066*var2[4];
  p_output1[1]=t1058*t977*var2[3] - 1.*t1029*t1066*var2[4];
  p_output1[2]=-1.*t977*var2[4];
  p_output1[3]=0;
  p_output1[4]=t1114*var2[3] + t1058*t1080*t977*var2[4] + t1095*var2[5];
  p_output1[5]=(t1058*t1066*t1080 - 1.*t1029*t1085)*var2[3] + t1029*t1080*t977*var2[4] + (-1.*t1058*t1080 + t1029*t1066*t1085)*var2[5];
  p_output1[6]=-1.*t1066*t1080*var2[4] + t1085*t977*var2[5];
  p_output1[7]=0;
  p_output1[8]=(t1058*t1080 - 1.*t1029*t1066*t1085)*var2[3] + t1058*t1085*t977*var2[4] + (-1.*t1058*t1066*t1080 + t1029*t1085)*var2[5];
  p_output1[9]=t1095*var2[3] + t1029*t1085*t977*var2[4] + t1114*var2[5];
  p_output1[10]=-1.*t1066*t1085*var2[4] - 1.*t1080*t977*var2[5];
  p_output1[11]=0;
  p_output1[12]=var2[0];
  p_output1[13]=var2[1];
  p_output1[14]=var2[2];
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

#include "dT_BaseRotX_mex.hh"

namespace SymExpression
{

void dT_BaseRotX_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
