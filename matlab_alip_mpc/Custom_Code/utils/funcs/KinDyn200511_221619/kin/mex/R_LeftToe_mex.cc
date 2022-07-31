/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:02 GMT-04:00
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
  double t225;
  double t326;
  double t438;
  double t382;
  double t440;
  double t314;
  double t566;
  double t588;
  double t669;
  double t421;
  double t447;
  double t468;
  double t692;
  double t199;
  double t803;
  double t855;
  double t859;
  double t246;
  double t248;
  double t309;
  double t550;
  double t725;
  double t727;
  double t742;
  double t774;
  double t788;
  double t883;
  double t1005;
  double t797;
  double t917;
  double t941;
  double t198;
  double t1043;
  double t1045;
  double t1047;
  double t1095;
  double t949;
  double t1048;
  double t1055;
  double t147;
  double t1105;
  double t1109;
  double t1115;
  double t1126;
  double t1056;
  double t1116;
  double t1117;
  double t120;
  double t1131;
  double t1135;
  double t1139;
  double t14;
  double t1368;
  double t1373;
  double t1374;
  double t1322;
  double t1340;
  double t1357;
  double t1471;
  double t1479;
  double t1490;
  double t1317;
  double t1362;
  double t1386;
  double t1391;
  double t1402;
  double t1409;
  double t1444;
  double t1508;
  double t1511;
  double t1527;
  double t1529;
  double t1548;
  double t1523;
  double t1552;
  double t1555;
  double t1558;
  double t1562;
  double t1581;
  double t1217;
  double t1557;
  double t1586;
  double t1592;
  double t1595;
  double t1596;
  double t1644;
  double t1768;
  double t1775;
  double t1792;
  double t1692;
  double t1701;
  double t1726;
  double t1739;
  double t1745;
  double t1747;
  double t1765;
  double t1817;
  double t1820;
  double t1840;
  double t1851;
  double t1853;
  double t1831;
  double t1861;
  double t1874;
  double t1895;
  double t1911;
  double t1917;
  double t1887;
  double t1919;
  double t1923;
  double t1946;
  double t1970;
  double t1973;
  double t1123;
  double t1147;
  double t1164;
  double t1256;
  double t1274;
  double t1276;
  double t1594;
  double t1646;
  double t1650;
  double t1668;
  double t1672;
  double t1674;
  double t1929;
  double t1978;
  double t1980;
  double t1986;
  double t1987;
  double t1999;
  t225 = Cos(var1[3]);
  t326 = Cos(var1[5]);
  t438 = Sin(var1[4]);
  t382 = Sin(var1[3]);
  t440 = Sin(var1[5]);
  t314 = Cos(var1[6]);
  t566 = t225*t326*t438;
  t588 = t382*t440;
  t669 = t566 + t588;
  t421 = -1.*t326*t382;
  t447 = t225*t438*t440;
  t468 = t421 + t447;
  t692 = Sin(var1[6]);
  t199 = Cos(var1[8]);
  t803 = t314*t669;
  t855 = -1.*t468*t692;
  t859 = t803 + t855;
  t246 = Cos(var1[4]);
  t248 = Cos(var1[7]);
  t309 = t225*t246*t248;
  t550 = t314*t468;
  t725 = t669*t692;
  t727 = t550 + t725;
  t742 = Sin(var1[7]);
  t774 = t727*t742;
  t788 = t309 + t774;
  t883 = Sin(var1[8]);
  t1005 = Cos(var1[9]);
  t797 = t199*t788;
  t917 = t859*t883;
  t941 = t797 + t917;
  t198 = Sin(var1[9]);
  t1043 = t199*t859;
  t1045 = -1.*t788*t883;
  t1047 = t1043 + t1045;
  t1095 = Cos(var1[10]);
  t949 = -1.*t198*t941;
  t1048 = t1005*t1047;
  t1055 = t949 + t1048;
  t147 = Sin(var1[10]);
  t1105 = t1005*t941;
  t1109 = t198*t1047;
  t1115 = t1105 + t1109;
  t1126 = Cos(var1[11]);
  t1056 = t147*t1055;
  t1116 = t1095*t1115;
  t1117 = t1056 + t1116;
  t120 = Sin(var1[11]);
  t1131 = t1095*t1055;
  t1135 = -1.*t147*t1115;
  t1139 = t1131 + t1135;
  t14 = Cos(var1[12]);
  t1368 = t326*t382*t438;
  t1373 = -1.*t225*t440;
  t1374 = t1368 + t1373;
  t1322 = t225*t326;
  t1340 = t382*t438*t440;
  t1357 = t1322 + t1340;
  t1471 = t314*t1374;
  t1479 = -1.*t1357*t692;
  t1490 = t1471 + t1479;
  t1317 = t246*t248*t382;
  t1362 = t314*t1357;
  t1386 = t1374*t692;
  t1391 = t1362 + t1386;
  t1402 = t1391*t742;
  t1409 = t1317 + t1402;
  t1444 = t199*t1409;
  t1508 = t1490*t883;
  t1511 = t1444 + t1508;
  t1527 = t199*t1490;
  t1529 = -1.*t1409*t883;
  t1548 = t1527 + t1529;
  t1523 = -1.*t198*t1511;
  t1552 = t1005*t1548;
  t1555 = t1523 + t1552;
  t1558 = t1005*t1511;
  t1562 = t198*t1548;
  t1581 = t1558 + t1562;
  t1217 = Sin(var1[12]);
  t1557 = t147*t1555;
  t1586 = t1095*t1581;
  t1592 = t1557 + t1586;
  t1595 = t1095*t1555;
  t1596 = -1.*t147*t1581;
  t1644 = t1595 + t1596;
  t1768 = t246*t326*t314;
  t1775 = -1.*t246*t440*t692;
  t1792 = t1768 + t1775;
  t1692 = -1.*t248*t438;
  t1701 = t246*t314*t440;
  t1726 = t246*t326*t692;
  t1739 = t1701 + t1726;
  t1745 = t1739*t742;
  t1747 = t1692 + t1745;
  t1765 = t199*t1747;
  t1817 = t1792*t883;
  t1820 = t1765 + t1817;
  t1840 = t199*t1792;
  t1851 = -1.*t1747*t883;
  t1853 = t1840 + t1851;
  t1831 = -1.*t198*t1820;
  t1861 = t1005*t1853;
  t1874 = t1831 + t1861;
  t1895 = t1005*t1820;
  t1911 = t198*t1853;
  t1917 = t1895 + t1911;
  t1887 = t147*t1874;
  t1919 = t1095*t1917;
  t1923 = t1887 + t1919;
  t1946 = t1095*t1874;
  t1970 = -1.*t147*t1917;
  t1973 = t1946 + t1970;
  t1123 = -1.*t120*t1117;
  t1147 = t1126*t1139;
  t1164 = t1123 + t1147;
  t1256 = t1126*t1117;
  t1274 = t120*t1139;
  t1276 = t1256 + t1274;
  t1594 = -1.*t120*t1592;
  t1646 = t1126*t1644;
  t1650 = t1594 + t1646;
  t1668 = t1126*t1592;
  t1672 = t120*t1644;
  t1674 = t1668 + t1672;
  t1929 = -1.*t120*t1923;
  t1978 = t1126*t1973;
  t1980 = t1929 + t1978;
  t1986 = t1126*t1923;
  t1987 = t120*t1973;
  t1999 = t1986 + t1987;
  p_output1[0]=t1217*t1276 - 1.*t1164*t14;
  p_output1[1]=-1.*t14*t1650 + t1217*t1674;
  p_output1[2]=-1.*t14*t1980 + t1217*t1999;
  p_output1[3]=t1164*t1217 + t1276*t14;
  p_output1[4]=t1217*t1650 + t14*t1674;
  p_output1[5]=t1217*t1980 + t14*t1999;
  p_output1[6]=-1.*t248*t727 + t225*t246*t742;
  p_output1[7]=-1.*t1391*t248 + t246*t382*t742;
  p_output1[8]=-1.*t1739*t248 - 1.*t438*t742;
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

#include "R_LeftToe_mex.hh"

namespace SymExpression
{

void R_LeftToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
