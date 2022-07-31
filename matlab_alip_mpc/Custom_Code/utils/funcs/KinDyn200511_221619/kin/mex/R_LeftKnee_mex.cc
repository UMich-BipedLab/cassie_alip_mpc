/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:16 GMT-04:00
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
  double t129;
  double t561;
  double t676;
  double t599;
  double t764;
  double t473;
  double t987;
  double t1029;
  double t1031;
  double t656;
  double t857;
  double t903;
  double t1106;
  double t66;
  double t1308;
  double t1315;
  double t1374;
  double t134;
  double t343;
  double t355;
  double t907;
  double t1140;
  double t1142;
  double t1221;
  double t1234;
  double t1235;
  double t1434;
  double t26;
  double t1871;
  double t1880;
  double t1893;
  double t1790;
  double t1805;
  double t1807;
  double t1603;
  double t1983;
  double t1993;
  double t1997;
  double t1755;
  double t1808;
  double t1906;
  double t1912;
  double t1932;
  double t1965;
  double t2519;
  double t2555;
  double t2579;
  double t2325;
  double t2332;
  double t2348;
  double t2425;
  double t2428;
  double t2463;
  double t1256;
  double t1475;
  double t1527;
  double t1630;
  double t1637;
  double t1649;
  double t1974;
  double t2055;
  double t2117;
  double t2141;
  double t2163;
  double t2264;
  double t2493;
  double t2609;
  double t2651;
  double t2665;
  double t2682;
  double t2701;
  t129 = Cos(var1[3]);
  t561 = Cos(var1[5]);
  t676 = Sin(var1[4]);
  t599 = Sin(var1[3]);
  t764 = Sin(var1[5]);
  t473 = Cos(var1[6]);
  t987 = t129*t561*t676;
  t1029 = t599*t764;
  t1031 = t987 + t1029;
  t656 = -1.*t561*t599;
  t857 = t129*t676*t764;
  t903 = t656 + t857;
  t1106 = Sin(var1[6]);
  t66 = Cos(var1[8]);
  t1308 = t473*t1031;
  t1315 = -1.*t903*t1106;
  t1374 = t1308 + t1315;
  t134 = Cos(var1[4]);
  t343 = Cos(var1[7]);
  t355 = t129*t134*t343;
  t907 = t473*t903;
  t1140 = t1031*t1106;
  t1142 = t907 + t1140;
  t1221 = Sin(var1[7]);
  t1234 = t1142*t1221;
  t1235 = t355 + t1234;
  t1434 = Sin(var1[8]);
  t26 = Sin(var1[9]);
  t1871 = t561*t599*t676;
  t1880 = -1.*t129*t764;
  t1893 = t1871 + t1880;
  t1790 = t129*t561;
  t1805 = t599*t676*t764;
  t1807 = t1790 + t1805;
  t1603 = Cos(var1[9]);
  t1983 = t473*t1893;
  t1993 = -1.*t1807*t1106;
  t1997 = t1983 + t1993;
  t1755 = t134*t343*t599;
  t1808 = t473*t1807;
  t1906 = t1893*t1106;
  t1912 = t1808 + t1906;
  t1932 = t1912*t1221;
  t1965 = t1755 + t1932;
  t2519 = t134*t561*t473;
  t2555 = -1.*t134*t764*t1106;
  t2579 = t2519 + t2555;
  t2325 = -1.*t343*t676;
  t2332 = t134*t473*t764;
  t2348 = t134*t561*t1106;
  t2425 = t2332 + t2348;
  t2428 = t2425*t1221;
  t2463 = t2325 + t2428;
  t1256 = t66*t1235;
  t1475 = t1374*t1434;
  t1527 = t1256 + t1475;
  t1630 = t66*t1374;
  t1637 = -1.*t1235*t1434;
  t1649 = t1630 + t1637;
  t1974 = t66*t1965;
  t2055 = t1997*t1434;
  t2117 = t1974 + t2055;
  t2141 = t66*t1997;
  t2163 = -1.*t1965*t1434;
  t2264 = t2141 + t2163;
  t2493 = t66*t2463;
  t2609 = t2579*t1434;
  t2651 = t2493 + t2609;
  t2665 = t66*t2579;
  t2682 = -1.*t2463*t1434;
  t2701 = t2665 + t2682;
  p_output1[0]=-1.*t1603*t1649 + t1527*t26;
  p_output1[1]=-1.*t1603*t2264 + t2117*t26;
  p_output1[2]=t26*t2651 - 1.*t1603*t2701;
  p_output1[3]=t1527*t1603 + t1649*t26;
  p_output1[4]=t1603*t2117 + t2264*t26;
  p_output1[5]=t1603*t2651 + t26*t2701;
  p_output1[6]=t1221*t129*t134 - 1.*t1142*t343;
  p_output1[7]=-1.*t1912*t343 + t1221*t134*t599;
  p_output1[8]=-1.*t2425*t343 - 1.*t1221*t676;
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

#include "R_LeftKnee_mex.hh"

namespace SymExpression
{

void R_LeftKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
