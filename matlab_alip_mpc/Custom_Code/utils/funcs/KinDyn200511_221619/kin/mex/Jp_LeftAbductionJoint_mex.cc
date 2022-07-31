/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:22 GMT-04:00
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
  double t1341;
  double t1397;
  double t1366;
  double t1385;
  double t1399;
  double t1409;
  double t1414;
  double t1421;
  double t1426;
  double t1449;
  double t1452;
  double t1456;
  double t1395;
  double t1404;
  double t1408;
  double t1322;
  double t1422;
  double t1438;
  double t1442;
  double t1458;
  double t1459;
  double t1460;
  double t1500;
  double t1504;
  double t1509;
  double t1495;
  double t1496;
  double t1498;
  double t1666;
  double t1668;
  double t1669;
  double t1527;
  double t1468;
  double t1708;
  double t1713;
  double t1722;
  double t1688;
  double t1532;
  double t1534;
  double t1789;
  double t1792;
  double t1794;
  double t1801;
  double t1802;
  double t1822;
  double t1823;
  double t1824;
  double t1731;
  double t1739;
  double t1760;
  double t1767;
  double t1771;
  double t1772;
  double t1781;
  double t1782;
  double t1785;
  double t1787;
  t1341 = Sin(var1[3]);
  t1397 = Cos(var1[3]);
  t1366 = Cos(var1[5]);
  t1385 = Sin(var1[4]);
  t1399 = Sin(var1[5]);
  t1409 = Cos(var1[6]);
  t1414 = -1.*t1409;
  t1421 = 1. + t1414;
  t1426 = Sin(var1[6]);
  t1449 = -1.*t1397*t1366;
  t1452 = -1.*t1341*t1385*t1399;
  t1456 = t1449 + t1452;
  t1395 = -1.*t1366*t1341*t1385;
  t1404 = t1397*t1399;
  t1408 = t1395 + t1404;
  t1322 = Cos(var1[4]);
  t1422 = 0.07996*t1421;
  t1438 = -0.135*t1426;
  t1442 = 0. + t1422 + t1438;
  t1458 = 0.135*t1421;
  t1459 = 0.07996*t1426;
  t1460 = 0. + t1458 + t1459;
  t1500 = -1.*t1366*t1341;
  t1504 = t1397*t1385*t1399;
  t1509 = t1500 + t1504;
  t1495 = t1397*t1366*t1385;
  t1496 = t1341*t1399;
  t1498 = t1495 + t1496;
  t1666 = t1366*t1341;
  t1668 = -1.*t1397*t1385*t1399;
  t1669 = t1666 + t1668;
  t1527 = t1409*t1498;
  t1468 = t1409*t1456;
  t1708 = t1366*t1341*t1385;
  t1713 = -1.*t1397*t1399;
  t1722 = t1708 + t1713;
  t1688 = -1.*t1498*t1426;
  t1532 = -1.*t1509*t1426;
  t1534 = t1527 + t1532;
  t1789 = -0.135*t1409;
  t1792 = t1789 + t1459;
  t1794 = 0.07996*t1409;
  t1801 = 0.135*t1426;
  t1802 = t1794 + t1801;
  t1822 = t1397*t1366;
  t1823 = t1341*t1385*t1399;
  t1824 = t1822 + t1823;
  t1731 = -1.*t1722*t1426;
  t1739 = t1409*t1722;
  t1760 = -1.*t1322*t1409*t1399;
  t1767 = -1.*t1322*t1366*t1426;
  t1771 = t1760 + t1767;
  t1772 = 0.07996*t1771;
  t1781 = t1322*t1366*t1409;
  t1782 = -1.*t1322*t1399*t1426;
  t1785 = t1781 + t1782;
  t1787 = 0.135*t1785;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=0.08055*t1322*t1341 + t1408*t1442 + 0.07996*(t1408*t1409 - 1.*t1426*t1456) + t1456*t1460 + 0.135*(t1408*t1426 + t1468);
  p_output1[10]=-0.08055*t1322*t1397 + t1442*t1498 + t1460*t1509 + 0.135*(t1426*t1498 + t1409*t1509) + 0.07996*t1534;
  p_output1[11]=0;
  p_output1[12]=0.08055*t1385*t1397 + 0.135*(t1322*t1397*t1399*t1409 + t1322*t1366*t1397*t1426) + 0.07996*(t1322*t1366*t1397*t1409 - 1.*t1322*t1397*t1399*t1426) + t1322*t1366*t1397*t1442 + t1322*t1397*t1399*t1460;
  p_output1[13]=0.08055*t1341*t1385 + 0.135*(t1322*t1341*t1399*t1409 + t1322*t1341*t1366*t1426) + 0.07996*(t1322*t1341*t1366*t1409 - 1.*t1322*t1341*t1399*t1426) + t1322*t1341*t1366*t1442 + t1322*t1341*t1399*t1460;
  p_output1[14]=0.08055*t1322 + 0.135*(-1.*t1385*t1399*t1409 - 1.*t1366*t1385*t1426) + 0.07996*(-1.*t1366*t1385*t1409 + t1385*t1399*t1426) - 1.*t1366*t1385*t1442 - 1.*t1385*t1399*t1460;
  p_output1[15]=t1460*t1498 + t1442*t1669 + 0.135*(t1527 + t1426*t1669) + 0.07996*(t1409*t1669 + t1688);
  p_output1[16]=t1442*t1456 + t1460*t1722 + 0.07996*(t1468 + t1731) + 0.135*(t1426*t1456 + t1739);
  p_output1[17]=-1.*t1322*t1399*t1442 + t1322*t1366*t1460 + t1772 + t1787;
  p_output1[18]=0.135*t1534 + 0.07996*(-1.*t1409*t1509 + t1688) + t1498*t1792 + t1509*t1802;
  p_output1[19]=t1722*t1792 + t1802*t1824 + 0.07996*(t1731 - 1.*t1409*t1824) + 0.135*(t1739 - 1.*t1426*t1824);
  p_output1[20]=t1772 + t1787 + t1322*t1366*t1792 + t1322*t1399*t1802;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_LeftAbductionJoint_mex.hh"

namespace SymExpression
{

void Jp_LeftAbductionJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
