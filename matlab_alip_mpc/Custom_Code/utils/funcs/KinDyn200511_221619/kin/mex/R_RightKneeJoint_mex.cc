/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:51 GMT-04:00
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
  double t172;
  double t200;
  double t158;
  double t182;
  double t381;
  double t582;
  double t185;
  double t431;
  double t455;
  double t107;
  double t602;
  double t885;
  double t886;
  double t976;
  double t539;
  double t909;
  double t914;
  double t86;
  double t988;
  double t989;
  double t1038;
  double t1092;
  double t1138;
  double t1159;
  double t1171;
  double t1185;
  double t1225;
  double t26;
  double t1451;
  double t1468;
  double t1493;
  double t1524;
  double t1607;
  double t1637;
  double t1337;
  double t1513;
  double t1655;
  double t1659;
  double t1689;
  double t1694;
  double t1706;
  double t1721;
  double t1733;
  double t1776;
  double t1991;
  double t1997;
  double t1998;
  double t2035;
  double t2038;
  double t2072;
  double t2076;
  double t2078;
  double t2085;
  double t957;
  double t1253;
  double t1302;
  double t1355;
  double t1398;
  double t1401;
  double t1674;
  double t1793;
  double t1812;
  double t1934;
  double t1944;
  double t1949;
  double t2034;
  double t2094;
  double t2110;
  double t2114;
  double t2121;
  double t2124;
  t172 = Cos(var1[5]);
  t200 = Sin(var1[3]);
  t158 = Cos(var1[3]);
  t182 = Sin(var1[4]);
  t381 = Sin(var1[5]);
  t582 = Sin(var1[13]);
  t185 = t158*t172*t182;
  t431 = t200*t381;
  t455 = t185 + t431;
  t107 = Cos(var1[13]);
  t602 = -1.*t172*t200;
  t885 = t158*t182*t381;
  t886 = t602 + t885;
  t976 = Cos(var1[15]);
  t539 = t107*t455;
  t909 = -1.*t582*t886;
  t914 = t539 + t909;
  t86 = Sin(var1[15]);
  t988 = Cos(var1[14]);
  t989 = Cos(var1[4]);
  t1038 = t988*t158*t989;
  t1092 = Sin(var1[14]);
  t1138 = t582*t455;
  t1159 = t107*t886;
  t1171 = t1138 + t1159;
  t1185 = t1092*t1171;
  t1225 = t1038 + t1185;
  t26 = Sin(var1[16]);
  t1451 = t172*t200*t182;
  t1468 = -1.*t158*t381;
  t1493 = t1451 + t1468;
  t1524 = t158*t172;
  t1607 = t200*t182*t381;
  t1637 = t1524 + t1607;
  t1337 = Cos(var1[16]);
  t1513 = t107*t1493;
  t1655 = -1.*t582*t1637;
  t1659 = t1513 + t1655;
  t1689 = t988*t989*t200;
  t1694 = t582*t1493;
  t1706 = t107*t1637;
  t1721 = t1694 + t1706;
  t1733 = t1092*t1721;
  t1776 = t1689 + t1733;
  t1991 = t107*t989*t172;
  t1997 = -1.*t989*t582*t381;
  t1998 = t1991 + t1997;
  t2035 = -1.*t988*t182;
  t2038 = t989*t172*t582;
  t2072 = t107*t989*t381;
  t2076 = t2038 + t2072;
  t2078 = t1092*t2076;
  t2085 = t2035 + t2078;
  t957 = t86*t914;
  t1253 = t976*t1225;
  t1302 = t957 + t1253;
  t1355 = t976*t914;
  t1398 = -1.*t86*t1225;
  t1401 = t1355 + t1398;
  t1674 = t86*t1659;
  t1793 = t976*t1776;
  t1812 = t1674 + t1793;
  t1934 = t976*t1659;
  t1944 = -1.*t86*t1776;
  t1949 = t1934 + t1944;
  t2034 = t86*t1998;
  t2094 = t976*t2085;
  t2110 = t2034 + t2094;
  t2114 = t976*t1998;
  t2121 = -1.*t86*t2085;
  t2124 = t2114 + t2121;
  p_output1[0]=-1.*t1337*t1401 + t1302*t26;
  p_output1[1]=-1.*t1337*t1949 + t1812*t26;
  p_output1[2]=-1.*t1337*t2124 + t2110*t26;
  p_output1[3]=t1302*t1337 + t1401*t26;
  p_output1[4]=t1337*t1812 + t1949*t26;
  p_output1[5]=t1337*t2110 + t2124*t26;
  p_output1[6]=-1.*t1171*t988 + t1092*t158*t989;
  p_output1[7]=-1.*t1721*t988 + t1092*t200*t989;
  p_output1[8]=-1.*t1092*t182 - 1.*t2076*t988;
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

#include "R_RightKneeJoint_mex.hh"

namespace SymExpression
{

void R_RightKneeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
