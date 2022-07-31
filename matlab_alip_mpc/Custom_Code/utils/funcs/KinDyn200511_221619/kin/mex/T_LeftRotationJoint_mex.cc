/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:49 GMT-04:00
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
  double t262;
  double t446;
  double t125;
  double t377;
  double t509;
  double t79;
  double t705;
  double t1357;
  double t567;
  double t638;
  double t667;
  double t402;
  double t515;
  double t535;
  double t1805;
  double t1044;
  double t1202;
  double t1227;
  double t866;
  double t895;
  double t933;
  double t2095;
  double t2009;
  double t2039;
  double t2079;
  double t2333;
  double t2455;
  double t2509;
  double t2615;
  double t2665;
  double t2666;
  double t3556;
  double t3566;
  double t4585;
  double t4594;
  double t1818;
  double t2116;
  double t2179;
  double t3606;
  double t3629;
  double t3879;
  double t4018;
  double t4030;
  double t4047;
  double t4618;
  double t4622;
  double t4631;
  double t4643;
  double t4700;
  double t4716;
  double t2231;
  double t2583;
  double t2589;
  double t2614;
  double t2691;
  double t2700;
  t262 = Cos(var1[5]);
  t446 = Sin(var1[3]);
  t125 = Cos(var1[3]);
  t377 = Sin(var1[4]);
  t509 = Sin(var1[5]);
  t79 = Cos(var1[6]);
  t705 = Sin(var1[6]);
  t1357 = Cos(var1[4]);
  t567 = -1.*t262*t446;
  t638 = t125*t377*t509;
  t667 = t567 + t638;
  t402 = t125*t262*t377;
  t515 = t446*t509;
  t535 = t402 + t515;
  t1805 = Cos(var1[7]);
  t1044 = t125*t262;
  t1202 = t446*t377*t509;
  t1227 = t1044 + t1202;
  t866 = t262*t446*t377;
  t895 = -1.*t125*t509;
  t933 = t866 + t895;
  t2095 = Sin(var1[7]);
  t2009 = t79*t667;
  t2039 = t535*t705;
  t2079 = t2009 + t2039;
  t2333 = t79*t1227;
  t2455 = t933*t705;
  t2509 = t2333 + t2455;
  t2615 = t1357*t79*t509;
  t2665 = t1357*t262*t705;
  t2666 = t2615 + t2665;
  t3556 = -1.*t79;
  t3566 = 1. + t3556;
  t4585 = -1.*t1805;
  t4594 = 1. + t4585;
  t1818 = t125*t1357*t1805;
  t2116 = t2079*t2095;
  t2179 = t1818 + t2116;
  t3606 = 0.07996*t3566;
  t3629 = -0.135*t705;
  t3879 = 0. + t3606 + t3629;
  t4018 = 0.135*t3566;
  t4030 = 0.07996*t705;
  t4047 = 0. + t4018 + t4030;
  t4618 = 0.135*t4594;
  t4622 = 0.08055*t2095;
  t4631 = 0. + t4618 + t4622;
  t4643 = -0.08055*t4594;
  t4700 = 0.135*t2095;
  t4716 = 0. + t4643 + t4700;
  t2231 = t1357*t1805*t446;
  t2583 = t2509*t2095;
  t2589 = t2231 + t2583;
  t2614 = -1.*t1805*t377;
  t2691 = t2666*t2095;
  t2700 = t2614 + t2691;
  p_output1[0]=t667*t705 - 1.*t535*t79;
  p_output1[1]=t1227*t705 - 1.*t79*t933;
  p_output1[2]=t1357*t509*t705 - 1.*t1357*t262*t79;
  p_output1[3]=0.;
  p_output1[4]=t2179;
  p_output1[5]=t2589;
  p_output1[6]=t2700;
  p_output1[7]=0.;
  p_output1[8]=-1.*t1805*t2079 + t125*t1357*t2095;
  p_output1[9]=-1.*t1805*t2509 + t1357*t2095*t446;
  p_output1[10]=-1.*t1805*t2666 - 1.*t2095*t377;
  p_output1[11]=0.;
  p_output1[12]=0. + 0.135*(t1805*t2079 - 1.*t125*t1357*t2095) - 0.08055*t2179 + t2079*t4631 + t125*t1357*t4716 + t3879*t535 + t4047*t667 - 0.01004*(-1.*t667*t705 + t535*t79) + var1[0];
  p_output1[13]=0. - 0.08055*t2589 + t1227*t4047 + 0.135*(t1805*t2509 - 1.*t1357*t2095*t446) + t2509*t4631 + t1357*t446*t4716 + t3879*t933 - 0.01004*(-1.*t1227*t705 + t79*t933) + var1[1];
  p_output1[14]=0. - 0.08055*t2700 + 0.135*(t1805*t2666 + t2095*t377) + t1357*t262*t3879 + t2666*t4631 - 1.*t377*t4716 + t1357*t4047*t509 - 0.01004*(-1.*t1357*t509*t705 + t1357*t262*t79) + var1[2];
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

#include "T_LeftRotationJoint_mex.hh"

namespace SymExpression
{

void T_LeftRotationJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
