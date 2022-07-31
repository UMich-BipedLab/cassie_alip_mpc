/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:29 GMT-04:00
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
  double t190;
  double t488;
  double t666;
  double t548;
  double t685;
  double t423;
  double t718;
  double t719;
  double t725;
  double t642;
  double t704;
  double t709;
  double t741;
  double t167;
  double t1006;
  double t1038;
  double t1056;
  double t233;
  double t376;
  double t405;
  double t712;
  double t780;
  double t781;
  double t784;
  double t816;
  double t874;
  double t1076;
  double t125;
  double t1599;
  double t1602;
  double t1606;
  double t1450;
  double t1451;
  double t1469;
  double t1183;
  double t1706;
  double t1759;
  double t1783;
  double t1405;
  double t1475;
  double t1614;
  double t1656;
  double t1685;
  double t1689;
  double t2063;
  double t2068;
  double t2071;
  double t1922;
  double t1953;
  double t1992;
  double t2007;
  double t2009;
  double t2018;
  double t887;
  double t1130;
  double t1163;
  double t1249;
  double t1265;
  double t1301;
  double t1703;
  double t1804;
  double t1805;
  double t1838;
  double t1839;
  double t1877;
  double t2032;
  double t2079;
  double t2090;
  double t2096;
  double t2125;
  double t2141;
  t190 = Cos(var1[3]);
  t488 = Cos(var1[5]);
  t666 = Sin(var1[4]);
  t548 = Sin(var1[3]);
  t685 = Sin(var1[5]);
  t423 = Cos(var1[6]);
  t718 = t190*t488*t666;
  t719 = t548*t685;
  t725 = t718 + t719;
  t642 = -1.*t488*t548;
  t704 = t190*t666*t685;
  t709 = t642 + t704;
  t741 = Sin(var1[6]);
  t167 = Cos(var1[8]);
  t1006 = t423*t725;
  t1038 = -1.*t709*t741;
  t1056 = t1006 + t1038;
  t233 = Cos(var1[4]);
  t376 = Cos(var1[7]);
  t405 = t190*t233*t376;
  t712 = t423*t709;
  t780 = t725*t741;
  t781 = t712 + t780;
  t784 = Sin(var1[7]);
  t816 = t781*t784;
  t874 = t405 + t816;
  t1076 = Sin(var1[8]);
  t125 = Sin(var1[9]);
  t1599 = t488*t548*t666;
  t1602 = -1.*t190*t685;
  t1606 = t1599 + t1602;
  t1450 = t190*t488;
  t1451 = t548*t666*t685;
  t1469 = t1450 + t1451;
  t1183 = Cos(var1[9]);
  t1706 = t423*t1606;
  t1759 = -1.*t1469*t741;
  t1783 = t1706 + t1759;
  t1405 = t233*t376*t548;
  t1475 = t423*t1469;
  t1614 = t1606*t741;
  t1656 = t1475 + t1614;
  t1685 = t1656*t784;
  t1689 = t1405 + t1685;
  t2063 = t233*t488*t423;
  t2068 = -1.*t233*t685*t741;
  t2071 = t2063 + t2068;
  t1922 = -1.*t376*t666;
  t1953 = t233*t423*t685;
  t1992 = t233*t488*t741;
  t2007 = t1953 + t1992;
  t2009 = t2007*t784;
  t2018 = t1922 + t2009;
  t887 = t167*t874;
  t1130 = t1056*t1076;
  t1163 = t887 + t1130;
  t1249 = t167*t1056;
  t1265 = -1.*t874*t1076;
  t1301 = t1249 + t1265;
  t1703 = t167*t1689;
  t1804 = t1783*t1076;
  t1805 = t1703 + t1804;
  t1838 = t167*t1783;
  t1839 = -1.*t1689*t1076;
  t1877 = t1838 + t1839;
  t2032 = t167*t2018;
  t2079 = t2071*t1076;
  t2090 = t2032 + t2079;
  t2096 = t167*t2071;
  t2125 = -1.*t2018*t1076;
  t2141 = t2096 + t2125;
  p_output1[0]=t1163*t125 - 1.*t1183*t1301;
  p_output1[1]=t125*t1805 - 1.*t1183*t1877;
  p_output1[2]=t125*t2090 - 1.*t1183*t2141;
  p_output1[3]=t1163*t1183 + t125*t1301;
  p_output1[4]=t1183*t1805 + t125*t1877;
  p_output1[5]=t1183*t2090 + t125*t2141;
  p_output1[6]=-1.*t376*t781 + t190*t233*t784;
  p_output1[7]=-1.*t1656*t376 + t233*t548*t784;
  p_output1[8]=-1.*t2007*t376 - 1.*t666*t784;
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

#include "R_LeftKneeJoint_mex.hh"

namespace SymExpression
{

void R_LeftKneeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
