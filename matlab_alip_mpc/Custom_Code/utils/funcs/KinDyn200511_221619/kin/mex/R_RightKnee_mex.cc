/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:06 GMT-04:00
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
  double t198;
  double t293;
  double t178;
  double t267;
  double t357;
  double t593;
  double t273;
  double t406;
  double t477;
  double t92;
  double t607;
  double t623;
  double t655;
  double t898;
  double t531;
  double t722;
  double t730;
  double t62;
  double t915;
  double t954;
  double t964;
  double t1004;
  double t1071;
  double t1091;
  double t1092;
  double t1117;
  double t1128;
  double t59;
  double t1349;
  double t1353;
  double t1361;
  double t1389;
  double t1393;
  double t1441;
  double t1200;
  double t1382;
  double t1447;
  double t1448;
  double t1496;
  double t1527;
  double t1548;
  double t1570;
  double t1586;
  double t1647;
  double t1815;
  double t1862;
  double t1872;
  double t1926;
  double t1932;
  double t1942;
  double t1943;
  double t1952;
  double t1969;
  double t880;
  double t1147;
  double t1168;
  double t1220;
  double t1259;
  double t1293;
  double t1479;
  double t1665;
  double t1680;
  double t1724;
  double t1756;
  double t1764;
  double t1917;
  double t2069;
  double t2078;
  double t2118;
  double t2143;
  double t2149;
  t198 = Cos(var1[5]);
  t293 = Sin(var1[3]);
  t178 = Cos(var1[3]);
  t267 = Sin(var1[4]);
  t357 = Sin(var1[5]);
  t593 = Sin(var1[13]);
  t273 = t178*t198*t267;
  t406 = t293*t357;
  t477 = t273 + t406;
  t92 = Cos(var1[13]);
  t607 = -1.*t198*t293;
  t623 = t178*t267*t357;
  t655 = t607 + t623;
  t898 = Cos(var1[15]);
  t531 = t92*t477;
  t722 = -1.*t593*t655;
  t730 = t531 + t722;
  t62 = Sin(var1[15]);
  t915 = Cos(var1[14]);
  t954 = Cos(var1[4]);
  t964 = t915*t178*t954;
  t1004 = Sin(var1[14]);
  t1071 = t593*t477;
  t1091 = t92*t655;
  t1092 = t1071 + t1091;
  t1117 = t1004*t1092;
  t1128 = t964 + t1117;
  t59 = Sin(var1[16]);
  t1349 = t198*t293*t267;
  t1353 = -1.*t178*t357;
  t1361 = t1349 + t1353;
  t1389 = t178*t198;
  t1393 = t293*t267*t357;
  t1441 = t1389 + t1393;
  t1200 = Cos(var1[16]);
  t1382 = t92*t1361;
  t1447 = -1.*t593*t1441;
  t1448 = t1382 + t1447;
  t1496 = t915*t954*t293;
  t1527 = t593*t1361;
  t1548 = t92*t1441;
  t1570 = t1527 + t1548;
  t1586 = t1004*t1570;
  t1647 = t1496 + t1586;
  t1815 = t92*t954*t198;
  t1862 = -1.*t954*t593*t357;
  t1872 = t1815 + t1862;
  t1926 = -1.*t915*t267;
  t1932 = t954*t198*t593;
  t1942 = t92*t954*t357;
  t1943 = t1932 + t1942;
  t1952 = t1004*t1943;
  t1969 = t1926 + t1952;
  t880 = t62*t730;
  t1147 = t898*t1128;
  t1168 = t880 + t1147;
  t1220 = t898*t730;
  t1259 = -1.*t62*t1128;
  t1293 = t1220 + t1259;
  t1479 = t62*t1448;
  t1665 = t898*t1647;
  t1680 = t1479 + t1665;
  t1724 = t898*t1448;
  t1756 = -1.*t62*t1647;
  t1764 = t1724 + t1756;
  t1917 = t62*t1872;
  t2069 = t898*t1969;
  t2078 = t1917 + t2069;
  t2118 = t898*t1872;
  t2143 = -1.*t62*t1969;
  t2149 = t2118 + t2143;
  p_output1[0]=-1.*t1200*t1293 + t1168*t59;
  p_output1[1]=-1.*t1200*t1764 + t1680*t59;
  p_output1[2]=-1.*t1200*t2149 + t2078*t59;
  p_output1[3]=t1168*t1200 + t1293*t59;
  p_output1[4]=t1200*t1680 + t1764*t59;
  p_output1[5]=t1200*t2078 + t2149*t59;
  p_output1[6]=-1.*t1092*t915 + t1004*t178*t954;
  p_output1[7]=-1.*t1570*t915 + t1004*t293*t954;
  p_output1[8]=-1.*t1004*t267 - 1.*t1943*t915;
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

#include "R_RightKnee_mex.hh"

namespace SymExpression
{

void R_RightKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
