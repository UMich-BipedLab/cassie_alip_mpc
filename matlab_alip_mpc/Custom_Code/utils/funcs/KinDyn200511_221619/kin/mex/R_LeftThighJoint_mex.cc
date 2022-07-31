/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:10 GMT-04:00
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
  double t88;
  double t356;
  double t67;
  double t141;
  double t366;
  double t23;
  double t478;
  double t486;
  double t495;
  double t225;
  double t386;
  double t400;
  double t505;
  double t3;
  double t633;
  double t635;
  double t1078;
  double t1128;
  double t1200;
  double t975;
  double t1051;
  double t1073;
  double t875;
  double t968;
  double t699;
  double t720;
  double t772;
  double t806;
  double t910;
  double t956;
  double t455;
  double t557;
  double t598;
  double t1257;
  double t1311;
  double t1318;
  double t1361;
  double t1388;
  double t1414;
  double t1074;
  double t1236;
  double t1240;
  double t1502;
  double t1523;
  double t1530;
  double t1541;
  double t1554;
  double t1624;
  double t1446;
  double t1451;
  double t1458;
  t88 = Cos(var1[5]);
  t356 = Sin(var1[3]);
  t67 = Cos(var1[3]);
  t141 = Sin(var1[4]);
  t366 = Sin(var1[5]);
  t23 = Cos(var1[6]);
  t478 = -1.*t88*t356;
  t486 = t67*t141*t366;
  t495 = t478 + t486;
  t225 = t67*t88*t141;
  t386 = t356*t366;
  t400 = t225 + t386;
  t505 = Sin(var1[6]);
  t3 = Cos(var1[8]);
  t633 = Cos(var1[4]);
  t635 = Cos(var1[7]);
  t1078 = t67*t88;
  t1128 = t356*t141*t366;
  t1200 = t1078 + t1128;
  t975 = t88*t356*t141;
  t1051 = -1.*t67*t366;
  t1073 = t975 + t1051;
  t875 = Sin(var1[7]);
  t968 = Sin(var1[8]);
  t699 = t67*t633*t635;
  t720 = t23*t495;
  t772 = t400*t505;
  t806 = t720 + t772;
  t910 = t806*t875;
  t956 = t699 + t910;
  t455 = t23*t400;
  t557 = -1.*t495*t505;
  t598 = t455 + t557;
  t1257 = t633*t635*t356;
  t1311 = t23*t1200;
  t1318 = t1073*t505;
  t1361 = t1311 + t1318;
  t1388 = t1361*t875;
  t1414 = t1257 + t1388;
  t1074 = t23*t1073;
  t1236 = -1.*t1200*t505;
  t1240 = t1074 + t1236;
  t1502 = -1.*t635*t141;
  t1523 = t633*t23*t366;
  t1530 = t633*t88*t505;
  t1541 = t1523 + t1530;
  t1554 = t1541*t875;
  t1624 = t1502 + t1554;
  t1446 = t633*t88*t23;
  t1451 = -1.*t633*t366*t505;
  t1458 = t1446 + t1451;
  p_output1[0]=-1.*t3*t598 + t956*t968;
  p_output1[1]=-1.*t1240*t3 + t1414*t968;
  p_output1[2]=-1.*t1458*t3 + t1624*t968;
  p_output1[3]=t3*t956 + t598*t968;
  p_output1[4]=t1414*t3 + t1240*t968;
  p_output1[5]=t1624*t3 + t1458*t968;
  p_output1[6]=-1.*t635*t806 + t633*t67*t875;
  p_output1[7]=-1.*t1361*t635 + t356*t633*t875;
  p_output1[8]=-1.*t1541*t635 - 1.*t141*t875;
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

#include "R_LeftThighJoint_mex.hh"

namespace SymExpression
{

void R_LeftThighJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
