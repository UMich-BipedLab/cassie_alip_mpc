/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:16 GMT-04:00
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
  double t215;
  double t330;
  double t119;
  double t272;
  double t356;
  double t466;
  double t308;
  double t378;
  double t407;
  double t86;
  double t469;
  double t535;
  double t554;
  double t593;
  double t408;
  double t567;
  double t569;
  double t79;
  double t608;
  double t636;
  double t637;
  double t648;
  double t680;
  double t716;
  double t728;
  double t763;
  double t767;
  double t812;
  double t575;
  double t778;
  double t789;
  double t48;
  double t823;
  double t828;
  double t844;
  double t892;
  double t801;
  double t849;
  double t861;
  double t25;
  double t922;
  double t924;
  double t948;
  double t11;
  double t1114;
  double t1116;
  double t1168;
  double t1216;
  double t1230;
  double t1235;
  double t1203;
  double t1249;
  double t1259;
  double t1288;
  double t1289;
  double t1290;
  double t1291;
  double t1314;
  double t1315;
  double t1270;
  double t1324;
  double t1327;
  double t1346;
  double t1349;
  double t1376;
  double t1027;
  double t1339;
  double t1387;
  double t1396;
  double t1411;
  double t1453;
  double t1458;
  double t1517;
  double t1523;
  double t1530;
  double t1597;
  double t1602;
  double t1613;
  double t1617;
  double t1625;
  double t1637;
  double t1551;
  double t1661;
  double t1670;
  double t1694;
  double t1715;
  double t1723;
  double t1679;
  double t1733;
  double t1753;
  double t1780;
  double t1794;
  double t1824;
  double t885;
  double t952;
  double t1003;
  double t1040;
  double t1041;
  double t1063;
  double t1405;
  double t1465;
  double t1478;
  double t1484;
  double t1486;
  double t1504;
  double t1765;
  double t1829;
  double t1831;
  double t1882;
  double t1886;
  double t1887;
  t215 = Cos(var1[5]);
  t330 = Sin(var1[3]);
  t119 = Cos(var1[3]);
  t272 = Sin(var1[4]);
  t356 = Sin(var1[5]);
  t466 = Sin(var1[13]);
  t308 = t119*t215*t272;
  t378 = t330*t356;
  t407 = t308 + t378;
  t86 = Cos(var1[13]);
  t469 = -1.*t215*t330;
  t535 = t119*t272*t356;
  t554 = t469 + t535;
  t593 = Cos(var1[15]);
  t408 = t86*t407;
  t567 = -1.*t466*t554;
  t569 = t408 + t567;
  t79 = Sin(var1[15]);
  t608 = Cos(var1[14]);
  t636 = Cos(var1[4]);
  t637 = t608*t119*t636;
  t648 = Sin(var1[14]);
  t680 = t466*t407;
  t716 = t86*t554;
  t728 = t680 + t716;
  t763 = t648*t728;
  t767 = t637 + t763;
  t812 = Cos(var1[16]);
  t575 = t79*t569;
  t778 = t593*t767;
  t789 = t575 + t778;
  t48 = Sin(var1[16]);
  t823 = t593*t569;
  t828 = -1.*t79*t767;
  t844 = t823 + t828;
  t892 = Cos(var1[17]);
  t801 = -1.*t48*t789;
  t849 = t812*t844;
  t861 = t801 + t849;
  t25 = Sin(var1[17]);
  t922 = t812*t789;
  t924 = t48*t844;
  t948 = t922 + t924;
  t11 = Sin(var1[18]);
  t1114 = t215*t330*t272;
  t1116 = -1.*t119*t356;
  t1168 = t1114 + t1116;
  t1216 = t119*t215;
  t1230 = t330*t272*t356;
  t1235 = t1216 + t1230;
  t1203 = t86*t1168;
  t1249 = -1.*t466*t1235;
  t1259 = t1203 + t1249;
  t1288 = t608*t636*t330;
  t1289 = t466*t1168;
  t1290 = t86*t1235;
  t1291 = t1289 + t1290;
  t1314 = t648*t1291;
  t1315 = t1288 + t1314;
  t1270 = t79*t1259;
  t1324 = t593*t1315;
  t1327 = t1270 + t1324;
  t1346 = t593*t1259;
  t1349 = -1.*t79*t1315;
  t1376 = t1346 + t1349;
  t1027 = Cos(var1[18]);
  t1339 = -1.*t48*t1327;
  t1387 = t812*t1376;
  t1396 = t1339 + t1387;
  t1411 = t812*t1327;
  t1453 = t48*t1376;
  t1458 = t1411 + t1453;
  t1517 = t86*t636*t215;
  t1523 = -1.*t636*t466*t356;
  t1530 = t1517 + t1523;
  t1597 = -1.*t608*t272;
  t1602 = t636*t215*t466;
  t1613 = t86*t636*t356;
  t1617 = t1602 + t1613;
  t1625 = t648*t1617;
  t1637 = t1597 + t1625;
  t1551 = t79*t1530;
  t1661 = t593*t1637;
  t1670 = t1551 + t1661;
  t1694 = t593*t1530;
  t1715 = -1.*t79*t1637;
  t1723 = t1694 + t1715;
  t1679 = -1.*t48*t1670;
  t1733 = t812*t1723;
  t1753 = t1679 + t1733;
  t1780 = t812*t1670;
  t1794 = t48*t1723;
  t1824 = t1780 + t1794;
  t885 = t25*t861;
  t952 = t892*t948;
  t1003 = t885 + t952;
  t1040 = t892*t861;
  t1041 = -1.*t25*t948;
  t1063 = t1040 + t1041;
  t1405 = t25*t1396;
  t1465 = t892*t1458;
  t1478 = t1405 + t1465;
  t1484 = t892*t1396;
  t1486 = -1.*t25*t1458;
  t1504 = t1484 + t1486;
  t1765 = t25*t1753;
  t1829 = t892*t1824;
  t1831 = t1765 + t1829;
  t1882 = t892*t1753;
  t1886 = -1.*t25*t1824;
  t1887 = t1882 + t1886;
  p_output1[0]=-1.*t1027*t1063 + t1003*t11;
  p_output1[1]=t11*t1478 - 1.*t1027*t1504;
  p_output1[2]=t11*t1831 - 1.*t1027*t1887;
  p_output1[3]=t1003*t1027 + t1063*t11;
  p_output1[4]=t1027*t1478 + t11*t1504;
  p_output1[5]=t1027*t1831 + t11*t1887;
  p_output1[6]=t119*t636*t648 - 1.*t608*t728;
  p_output1[7]=-1.*t1291*t608 + t330*t636*t648;
  p_output1[8]=-1.*t1617*t608 - 1.*t272*t648;
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

#include "R_RightTarsus_mex.hh"

namespace SymExpression
{

void R_RightTarsus_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
