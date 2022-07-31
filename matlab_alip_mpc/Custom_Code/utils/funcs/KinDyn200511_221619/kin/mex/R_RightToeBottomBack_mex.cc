/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:48 GMT-04:00
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
  double t279;
  double t382;
  double t230;
  double t334;
  double t441;
  double t516;
  double t348;
  double t465;
  double t468;
  double t227;
  double t546;
  double t554;
  double t573;
  double t669;
  double t484;
  double t630;
  double t638;
  double t225;
  double t686;
  double t687;
  double t688;
  double t721;
  double t783;
  double t819;
  double t823;
  double t835;
  double t836;
  double t858;
  double t641;
  double t839;
  double t843;
  double t177;
  double t866;
  double t871;
  double t896;
  double t954;
  double t848;
  double t899;
  double t942;
  double t153;
  double t964;
  double t970;
  double t975;
  double t1021;
  double t944;
  double t982;
  double t1011;
  double t61;
  double t1031;
  double t1032;
  double t1049;
  double t1116;
  double t1016;
  double t1056;
  double t1105;
  double t56;
  double t1122;
  double t1123;
  double t1124;
  double t1236;
  double t1253;
  double t1274;
  double t1286;
  double t1300;
  double t1316;
  double t1279;
  double t1326;
  double t1344;
  double t1364;
  double t1365;
  double t1369;
  double t1389;
  double t1392;
  double t1413;
  double t1351;
  double t1426;
  double t1430;
  double t1450;
  double t1457;
  double t1458;
  double t1438;
  double t1462;
  double t1464;
  double t1481;
  double t1485;
  double t1503;
  double t1471;
  double t1519;
  double t1525;
  double t1595;
  double t1599;
  double t1600;
  double t1588;
  double t1604;
  double t1606;
  double t1624;
  double t1629;
  double t1633;
  double t1729;
  double t1745;
  double t1755;
  double t1767;
  double t1790;
  double t1798;
  double t1806;
  double t1830;
  double t1836;
  double t1760;
  double t1839;
  double t1858;
  double t1865;
  double t1869;
  double t1878;
  double t1862;
  double t1882;
  double t1885;
  double t1890;
  double t1895;
  double t1921;
  double t1886;
  double t1933;
  double t1935;
  double t1953;
  double t1962;
  double t1968;
  double t1939;
  double t1970;
  double t1997;
  double t2014;
  double t2028;
  double t2035;
  double t1109;
  double t1154;
  double t1157;
  double t1163;
  double t1172;
  double t1184;
  double t1617;
  double t1637;
  double t1665;
  double t1705;
  double t1710;
  double t1712;
  double t2009;
  double t2036;
  double t2039;
  double t2042;
  double t2049;
  double t2069;
  t279 = Cos(var1[5]);
  t382 = Sin(var1[3]);
  t230 = Cos(var1[3]);
  t334 = Sin(var1[4]);
  t441 = Sin(var1[5]);
  t516 = Sin(var1[13]);
  t348 = t230*t279*t334;
  t465 = t382*t441;
  t468 = t348 + t465;
  t227 = Cos(var1[13]);
  t546 = -1.*t279*t382;
  t554 = t230*t334*t441;
  t573 = t546 + t554;
  t669 = Cos(var1[15]);
  t484 = t227*t468;
  t630 = -1.*t516*t573;
  t638 = t484 + t630;
  t225 = Sin(var1[15]);
  t686 = Cos(var1[14]);
  t687 = Cos(var1[4]);
  t688 = t686*t230*t687;
  t721 = Sin(var1[14]);
  t783 = t516*t468;
  t819 = t227*t573;
  t823 = t783 + t819;
  t835 = t721*t823;
  t836 = t688 + t835;
  t858 = Cos(var1[16]);
  t641 = t225*t638;
  t839 = t669*t836;
  t843 = t641 + t839;
  t177 = Sin(var1[16]);
  t866 = t669*t638;
  t871 = -1.*t225*t836;
  t896 = t866 + t871;
  t954 = Cos(var1[17]);
  t848 = -1.*t177*t843;
  t899 = t858*t896;
  t942 = t848 + t899;
  t153 = Sin(var1[17]);
  t964 = t858*t843;
  t970 = t177*t896;
  t975 = t964 + t970;
  t1021 = Cos(var1[18]);
  t944 = t153*t942;
  t982 = t954*t975;
  t1011 = t944 + t982;
  t61 = Sin(var1[18]);
  t1031 = t954*t942;
  t1032 = -1.*t153*t975;
  t1049 = t1031 + t1032;
  t1116 = Cos(var1[19]);
  t1016 = -1.*t61*t1011;
  t1056 = t1021*t1049;
  t1105 = t1016 + t1056;
  t56 = Sin(var1[19]);
  t1122 = t1021*t1011;
  t1123 = t61*t1049;
  t1124 = t1122 + t1123;
  t1236 = t279*t382*t334;
  t1253 = -1.*t230*t441;
  t1274 = t1236 + t1253;
  t1286 = t230*t279;
  t1300 = t382*t334*t441;
  t1316 = t1286 + t1300;
  t1279 = t227*t1274;
  t1326 = -1.*t516*t1316;
  t1344 = t1279 + t1326;
  t1364 = t686*t687*t382;
  t1365 = t516*t1274;
  t1369 = t227*t1316;
  t1389 = t1365 + t1369;
  t1392 = t721*t1389;
  t1413 = t1364 + t1392;
  t1351 = t225*t1344;
  t1426 = t669*t1413;
  t1430 = t1351 + t1426;
  t1450 = t669*t1344;
  t1457 = -1.*t225*t1413;
  t1458 = t1450 + t1457;
  t1438 = -1.*t177*t1430;
  t1462 = t858*t1458;
  t1464 = t1438 + t1462;
  t1481 = t858*t1430;
  t1485 = t177*t1458;
  t1503 = t1481 + t1485;
  t1471 = t153*t1464;
  t1519 = t954*t1503;
  t1525 = t1471 + t1519;
  t1595 = t954*t1464;
  t1599 = -1.*t153*t1503;
  t1600 = t1595 + t1599;
  t1588 = -1.*t61*t1525;
  t1604 = t1021*t1600;
  t1606 = t1588 + t1604;
  t1624 = t1021*t1525;
  t1629 = t61*t1600;
  t1633 = t1624 + t1629;
  t1729 = t227*t687*t279;
  t1745 = -1.*t687*t516*t441;
  t1755 = t1729 + t1745;
  t1767 = -1.*t686*t334;
  t1790 = t687*t279*t516;
  t1798 = t227*t687*t441;
  t1806 = t1790 + t1798;
  t1830 = t721*t1806;
  t1836 = t1767 + t1830;
  t1760 = t225*t1755;
  t1839 = t669*t1836;
  t1858 = t1760 + t1839;
  t1865 = t669*t1755;
  t1869 = -1.*t225*t1836;
  t1878 = t1865 + t1869;
  t1862 = -1.*t177*t1858;
  t1882 = t858*t1878;
  t1885 = t1862 + t1882;
  t1890 = t858*t1858;
  t1895 = t177*t1878;
  t1921 = t1890 + t1895;
  t1886 = t153*t1885;
  t1933 = t954*t1921;
  t1935 = t1886 + t1933;
  t1953 = t954*t1885;
  t1962 = -1.*t153*t1921;
  t1968 = t1953 + t1962;
  t1939 = -1.*t61*t1935;
  t1970 = t1021*t1968;
  t1997 = t1939 + t1970;
  t2014 = t1021*t1935;
  t2028 = t61*t1968;
  t2035 = t2014 + t2028;
  t1109 = t56*t1105;
  t1154 = t1116*t1124;
  t1157 = t1109 + t1154;
  t1163 = t1116*t1105;
  t1172 = -1.*t56*t1124;
  t1184 = t1163 + t1172;
  t1617 = t56*t1606;
  t1637 = t1116*t1633;
  t1665 = t1617 + t1637;
  t1705 = t1116*t1606;
  t1710 = -1.*t56*t1633;
  t1712 = t1705 + t1710;
  t2009 = t56*t1997;
  t2036 = t1116*t2035;
  t2039 = t2009 + t2036;
  t2042 = t1116*t1997;
  t2049 = -1.*t56*t2035;
  t2069 = t2042 + t2049;
  p_output1[0]=0.642788*t1157 + 0.766044*t1184;
  p_output1[1]=0.642788*t1665 + 0.766044*t1712;
  p_output1[2]=0.642788*t2039 + 0.766044*t2069;
  p_output1[3]=-1.*t230*t687*t721 + t686*t823;
  p_output1[4]=t1389*t686 - 1.*t382*t687*t721;
  p_output1[5]=t1806*t686 + t334*t721;
  p_output1[6]=-0.766044*t1157 + 0.642788*t1184;
  p_output1[7]=-0.766044*t1665 + 0.642788*t1712;
  p_output1[8]=-0.766044*t2039 + 0.642788*t2069;
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

#include "R_RightToeBottomBack_mex.hh"

namespace SymExpression
{

void R_RightToeBottomBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
