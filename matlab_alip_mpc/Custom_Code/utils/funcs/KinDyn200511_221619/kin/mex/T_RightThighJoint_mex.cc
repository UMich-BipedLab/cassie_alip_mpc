/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:29 GMT-04:00
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
  double t51;
  double t167;
  double t42;
  double t97;
  double t172;
  double t287;
  double t141;
  double t221;
  double t224;
  double t16;
  double t319;
  double t343;
  double t352;
  double t12;
  double t377;
  double t407;
  double t410;
  double t457;
  double t663;
  double t677;
  double t729;
  double t744;
  double t751;
  double t790;
  double t272;
  double t365;
  double t367;
  double t447;
  double t458;
  double t505;
  double t536;
  double t640;
  double t641;
  double t736;
  double t791;
  double t809;
  double t891;
  double t903;
  double t911;
  double t912;
  double t913;
  double t967;
  double t1011;
  double t1038;
  double t1049;
  double t1222;
  double t1256;
  double t1257;
  double t1311;
  double t1325;
  double t1342;
  double t1835;
  double t1846;
  double t1749;
  double t1752;
  double t2048;
  double t2052;
  double t1439;
  double t1453;
  double t1456;
  double t1757;
  double t1768;
  double t1815;
  double t1848;
  double t1924;
  double t1925;
  double t1943;
  double t1973;
  double t1974;
  double t2007;
  double t2015;
  double t2016;
  double t2068;
  double t2070;
  double t2077;
  double t2124;
  double t2131;
  double t2139;
  double t1516;
  double t1551;
  double t1570;
  double t1584;
  double t1627;
  double t1630;
  t51 = Cos(var1[5]);
  t167 = Sin(var1[3]);
  t42 = Cos(var1[3]);
  t97 = Sin(var1[4]);
  t172 = Sin(var1[5]);
  t287 = Sin(var1[13]);
  t141 = t42*t51*t97;
  t221 = t167*t172;
  t224 = t141 + t221;
  t16 = Cos(var1[13]);
  t319 = -1.*t51*t167;
  t343 = t42*t97*t172;
  t352 = t319 + t343;
  t12 = Cos(var1[15]);
  t377 = Sin(var1[15]);
  t407 = Cos(var1[14]);
  t410 = Cos(var1[4]);
  t457 = Sin(var1[14]);
  t663 = t51*t167*t97;
  t677 = -1.*t42*t172;
  t729 = t663 + t677;
  t744 = t42*t51;
  t751 = t167*t97*t172;
  t790 = t744 + t751;
  t272 = t16*t224;
  t365 = -1.*t287*t352;
  t367 = t272 + t365;
  t447 = t407*t42*t410;
  t458 = t287*t224;
  t505 = t16*t352;
  t536 = t458 + t505;
  t640 = t457*t536;
  t641 = t447 + t640;
  t736 = t16*t729;
  t791 = -1.*t287*t790;
  t809 = t736 + t791;
  t891 = t407*t410*t167;
  t903 = t287*t729;
  t911 = t16*t790;
  t912 = t903 + t911;
  t913 = t457*t912;
  t967 = t891 + t913;
  t1011 = t16*t410*t51;
  t1038 = -1.*t410*t287*t172;
  t1049 = t1011 + t1038;
  t1222 = -1.*t407*t97;
  t1256 = t410*t51*t287;
  t1257 = t16*t410*t172;
  t1311 = t1256 + t1257;
  t1325 = t457*t1311;
  t1342 = t1222 + t1325;
  t1835 = -1.*t16;
  t1846 = 1. + t1835;
  t1749 = -1.*t407;
  t1752 = 1. + t1749;
  t2048 = -1.*t12;
  t2052 = 1. + t2048;
  t1439 = t377*t367;
  t1453 = t12*t641;
  t1456 = t1439 + t1453;
  t1757 = -0.08055*t1752;
  t1768 = -0.135*t457;
  t1815 = 0. + t1757 + t1768;
  t1848 = 0.07996*t1846;
  t1924 = 0.135*t287;
  t1925 = 0. + t1848 + t1924;
  t1943 = -0.135*t1846;
  t1973 = 0.07996*t287;
  t1974 = 0. + t1943 + t1973;
  t2007 = -0.135*t1752;
  t2015 = 0.08055*t457;
  t2016 = 0. + t2007 + t2015;
  t2068 = -0.01004*t2052;
  t2070 = 0.08055*t377;
  t2077 = 0. + t2068 + t2070;
  t2124 = -0.08055*t2052;
  t2131 = -0.01004*t377;
  t2139 = 0. + t2124 + t2131;
  t1516 = t377*t809;
  t1551 = t12*t967;
  t1570 = t1516 + t1551;
  t1584 = t377*t1049;
  t1627 = t12*t1342;
  t1630 = t1584 + t1627;
  p_output1[0]=-1.*t12*t367 + t377*t641;
  p_output1[1]=-1.*t12*t809 + t377*t967;
  p_output1[2]=-1.*t1049*t12 + t1342*t377;
  p_output1[3]=0.;
  p_output1[4]=t1456;
  p_output1[5]=t1570;
  p_output1[6]=t1630;
  p_output1[7]=0.;
  p_output1[8]=t410*t42*t457 - 1.*t407*t536;
  p_output1[9]=t167*t410*t457 - 1.*t407*t912;
  p_output1[10]=-1.*t1311*t407 - 1.*t457*t97;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.08055*t1456 + t1925*t224 + t1974*t352 + t2077*t367 + t1815*t410*t42 + t2016*t536 - 0.135*(-1.*t410*t42*t457 + t407*t536) + t2139*t641 - 0.01004*(t12*t367 - 1.*t377*t641) + var1[0];
  p_output1[13]=0. - 0.08055*t1570 + t167*t1815*t410 + t1925*t729 + t1974*t790 + t2077*t809 + t2016*t912 - 0.135*(-1.*t167*t410*t457 + t407*t912) + t2139*t967 - 0.01004*(t12*t809 - 1.*t377*t967) + var1[1];
  p_output1[14]=0. - 0.08055*t1630 + t1311*t2016 + t1049*t2077 + t1342*t2139 - 0.01004*(t1049*t12 - 1.*t1342*t377) + t172*t1974*t410 + t1925*t410*t51 - 1.*t1815*t97 - 0.135*(t1311*t407 + t457*t97) + var1[2];
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

#include "T_RightThighJoint_mex.hh"

namespace SymExpression
{

void T_RightThighJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
