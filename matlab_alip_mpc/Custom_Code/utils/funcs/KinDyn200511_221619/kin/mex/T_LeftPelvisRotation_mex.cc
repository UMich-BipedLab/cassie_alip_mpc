/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:43 GMT-04:00
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
  double t131;
  double t209;
  double t82;
  double t707;
  double t877;
  double t918;
  double t765;
  double t1434;
  double t1218;
  double t1323;
  double t1401;
  double t911;
  double t935;
  double t973;
  double t1911;
  double t1987;
  double t2352;
  double t1605;
  double t1612;
  double t1676;
  double t3852;
  double t3936;
  double t1088;
  double t1435;
  double t1474;
  double t3221;
  double t3612;
  double t3646;
  double t4044;
  double t4062;
  double t4142;
  double t4417;
  double t4437;
  double t4438;
  double t1683;
  double t2432;
  double t2482;
  double t3665;
  double t3672;
  double t3690;
  double t2582;
  double t2931;
  double t3215;
  double t3711;
  double t3738;
  double t3743;
  t131 = Cos(var1[4]);
  t209 = Sin(var1[3]);
  t82 = Cos(var1[3]);
  t707 = Sin(var1[4]);
  t877 = Cos(var1[5]);
  t918 = Sin(var1[5]);
  t765 = Cos(var1[6]);
  t1434 = Sin(var1[6]);
  t1218 = t82*t877*t707;
  t1323 = t209*t918;
  t1401 = t1218 + t1323;
  t911 = -1.*t877*t209;
  t935 = t82*t707*t918;
  t973 = t911 + t935;
  t1911 = t877*t209*t707;
  t1987 = -1.*t82*t918;
  t2352 = t1911 + t1987;
  t1605 = t82*t877;
  t1612 = t209*t707*t918;
  t1676 = t1605 + t1612;
  t3852 = -1.*t765;
  t3936 = 1. + t3852;
  t1088 = t765*t973;
  t1435 = t1401*t1434;
  t1474 = t1088 + t1435;
  t3221 = t765*t1401;
  t3612 = -1.*t973*t1434;
  t3646 = t3221 + t3612;
  t4044 = 0.07996*t3936;
  t4062 = -0.135*t1434;
  t4142 = 0. + t4044 + t4062;
  t4417 = 0.135*t3936;
  t4437 = 0.07996*t1434;
  t4438 = 0. + t4417 + t4437;
  t1683 = t765*t1676;
  t2432 = t2352*t1434;
  t2482 = t1683 + t2432;
  t3665 = t765*t2352;
  t3672 = -1.*t1676*t1434;
  t3690 = t3665 + t3672;
  t2582 = t131*t765*t918;
  t2931 = t131*t877*t1434;
  t3215 = t2582 + t2931;
  t3711 = t131*t877*t765;
  t3738 = -1.*t131*t918*t1434;
  t3743 = t3711 + t3738;
  p_output1[0]=t131*t82;
  p_output1[1]=t131*t209;
  p_output1[2]=-1.*t707;
  p_output1[3]=0.;
  p_output1[4]=t1474;
  p_output1[5]=t2482;
  p_output1[6]=t3215;
  p_output1[7]=0.;
  p_output1[8]=t3646;
  p_output1[9]=t3690;
  p_output1[10]=t3743;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.1351*t1474 + 0.09786*t3646 + t1401*t4142 - 0.05485*t131*t82 + t4438*t973 + var1[0];
  p_output1[13]=0. - 0.05485*t131*t209 + 0.1351*t2482 + 0.09786*t3690 + t2352*t4142 + t1676*t4438 + var1[1];
  p_output1[14]=0. + 0.1351*t3215 + 0.09786*t3743 + 0.05485*t707 + t131*t4142*t877 + t131*t4438*t918 + var1[2];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "T_LeftPelvisRotation_mex.hh"

namespace SymExpression
{

void T_LeftPelvisRotation_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
