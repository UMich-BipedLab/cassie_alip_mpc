/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:12 GMT-04:00
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
  double t84;
  double t277;
  double t37;
  double t126;
  double t315;
  double t36;
  double t479;
  double t784;
  double t468;
  double t473;
  double t474;
  double t243;
  double t343;
  double t374;
  double t924;
  double t610;
  double t653;
  double t704;
  double t542;
  double t588;
  double t595;
  double t1176;
  double t991;
  double t1148;
  double t1169;
  double t1370;
  double t1376;
  double t1606;
  double t1745;
  double t1749;
  double t1788;
  double t2483;
  double t2502;
  double t2747;
  double t2868;
  double t940;
  double t1217;
  double t1227;
  double t2513;
  double t2532;
  double t2540;
  double t2618;
  double t2647;
  double t2653;
  double t2881;
  double t2900;
  double t2924;
  double t2946;
  double t2957;
  double t2991;
  double t1315;
  double t1666;
  double t1713;
  double t1741;
  double t1914;
  double t1990;
  t84 = Cos(var1[5]);
  t277 = Sin(var1[3]);
  t37 = Cos(var1[3]);
  t126 = Sin(var1[4]);
  t315 = Sin(var1[5]);
  t36 = Cos(var1[6]);
  t479 = Sin(var1[6]);
  t784 = Cos(var1[4]);
  t468 = -1.*t84*t277;
  t473 = t37*t126*t315;
  t474 = t468 + t473;
  t243 = t37*t84*t126;
  t343 = t277*t315;
  t374 = t243 + t343;
  t924 = Cos(var1[7]);
  t610 = t37*t84;
  t653 = t277*t126*t315;
  t704 = t610 + t653;
  t542 = t84*t277*t126;
  t588 = -1.*t37*t315;
  t595 = t542 + t588;
  t1176 = Sin(var1[7]);
  t991 = t36*t474;
  t1148 = t374*t479;
  t1169 = t991 + t1148;
  t1370 = t36*t704;
  t1376 = t595*t479;
  t1606 = t1370 + t1376;
  t1745 = t784*t36*t315;
  t1749 = t784*t84*t479;
  t1788 = t1745 + t1749;
  t2483 = -1.*t36;
  t2502 = 1. + t2483;
  t2747 = -1.*t924;
  t2868 = 1. + t2747;
  t940 = t37*t784*t924;
  t1217 = t1169*t1176;
  t1227 = t940 + t1217;
  t2513 = 0.07996*t2502;
  t2532 = -0.135*t479;
  t2540 = 0. + t2513 + t2532;
  t2618 = 0.135*t2502;
  t2647 = 0.07996*t479;
  t2653 = 0. + t2618 + t2647;
  t2881 = 0.135*t2868;
  t2900 = 0.08055*t1176;
  t2924 = 0. + t2881 + t2900;
  t2946 = -0.08055*t2868;
  t2957 = 0.135*t1176;
  t2991 = 0. + t2946 + t2957;
  t1315 = t784*t924*t277;
  t1666 = t1606*t1176;
  t1713 = t1315 + t1666;
  t1741 = -1.*t924*t126;
  t1914 = t1788*t1176;
  t1990 = t1741 + t1914;
  p_output1[0]=-1.*t36*t374 + t474*t479;
  p_output1[1]=-1.*t36*t595 + t479*t704;
  p_output1[2]=t315*t479*t784 - 1.*t36*t784*t84;
  p_output1[3]=0.;
  p_output1[4]=t1227;
  p_output1[5]=t1713;
  p_output1[6]=t1990;
  p_output1[7]=0.;
  p_output1[8]=t1176*t37*t784 - 1.*t1169*t924;
  p_output1[9]=t1176*t277*t784 - 1.*t1606*t924;
  p_output1[10]=-1.*t1176*t126 - 1.*t1788*t924;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08055*t1227 + t1169*t2924 + t2540*t374 + t2653*t474 + 0.04566*(t36*t374 - 1.*t474*t479) + t2991*t37*t784 + 0.135*(-1.*t1176*t37*t784 + t1169*t924) + var1[0];
  p_output1[13]=0. - 0.08055*t1713 + t1606*t2924 + t2540*t595 + t2653*t704 + 0.04566*(t36*t595 - 1.*t479*t704) + t277*t2991*t784 + 0.135*(-1.*t1176*t277*t784 + t1606*t924) + var1[1];
  p_output1[14]=0. - 0.08055*t1990 + t1788*t2924 - 1.*t126*t2991 + t2653*t315*t784 + t2540*t784*t84 + 0.04566*(-1.*t315*t479*t784 + t36*t784*t84) + 0.135*(t1176*t126 + t1788*t924) + var1[2];
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

#include "T_LeftHip_mex.hh"

namespace SymExpression
{

void T_LeftHip_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
