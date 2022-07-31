/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:43 GMT-04:00
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
  double t294;
  double t376;
  double t505;
  double t419;
  double t525;
  double t375;
  double t699;
  double t724;
  double t747;
  double t493;
  double t628;
  double t652;
  double t766;
  double t222;
  double t927;
  double t946;
  double t973;
  double t326;
  double t352;
  double t364;
  double t691;
  double t859;
  double t891;
  double t892;
  double t916;
  double t917;
  double t975;
  double t1122;
  double t923;
  double t1081;
  double t1099;
  double t205;
  double t1125;
  double t1135;
  double t1142;
  double t1271;
  double t1114;
  double t1147;
  double t1176;
  double t179;
  double t1301;
  double t1332;
  double t1341;
  double t1372;
  double t1207;
  double t1342;
  double t1351;
  double t18;
  double t1394;
  double t1418;
  double t1421;
  double t1473;
  double t1371;
  double t1449;
  double t1451;
  double t9;
  double t1474;
  double t1509;
  double t1525;
  double t1690;
  double t1700;
  double t1711;
  double t1624;
  double t1637;
  double t1638;
  double t1777;
  double t1802;
  double t1821;
  double t1604;
  double t1678;
  double t1718;
  double t1729;
  double t1735;
  double t1767;
  double t1769;
  double t1824;
  double t1838;
  double t1862;
  double t1871;
  double t1883;
  double t1860;
  double t1911;
  double t1916;
  double t1959;
  double t1962;
  double t1969;
  double t1919;
  double t1976;
  double t1978;
  double t1987;
  double t2015;
  double t2021;
  double t1981;
  double t2052;
  double t2066;
  double t2083;
  double t2087;
  double t2091;
  double t2218;
  double t2219;
  double t2236;
  double t2139;
  double t2142;
  double t2151;
  double t2178;
  double t2186;
  double t2196;
  double t2199;
  double t2238;
  double t2256;
  double t2268;
  double t2271;
  double t2277;
  double t2267;
  double t2285;
  double t2292;
  double t2309;
  double t2310;
  double t2317;
  double t2294;
  double t2330;
  double t2359;
  double t2369;
  double t2381;
  double t2385;
  double t2363;
  double t2389;
  double t2398;
  double t2417;
  double t2434;
  double t2439;
  double t1457;
  double t1541;
  double t1544;
  double t1563;
  double t1565;
  double t1569;
  double t2070;
  double t2095;
  double t2105;
  double t2109;
  double t2118;
  double t2119;
  double t2408;
  double t2473;
  double t2482;
  double t2489;
  double t2492;
  double t2497;
  t294 = Cos(var1[3]);
  t376 = Cos(var1[5]);
  t505 = Sin(var1[4]);
  t419 = Sin(var1[3]);
  t525 = Sin(var1[5]);
  t375 = Cos(var1[6]);
  t699 = t294*t376*t505;
  t724 = t419*t525;
  t747 = t699 + t724;
  t493 = -1.*t376*t419;
  t628 = t294*t505*t525;
  t652 = t493 + t628;
  t766 = Sin(var1[6]);
  t222 = Cos(var1[8]);
  t927 = t375*t747;
  t946 = -1.*t652*t766;
  t973 = t927 + t946;
  t326 = Cos(var1[4]);
  t352 = Cos(var1[7]);
  t364 = t294*t326*t352;
  t691 = t375*t652;
  t859 = t747*t766;
  t891 = t691 + t859;
  t892 = Sin(var1[7]);
  t916 = t891*t892;
  t917 = t364 + t916;
  t975 = Sin(var1[8]);
  t1122 = Cos(var1[9]);
  t923 = t222*t917;
  t1081 = t973*t975;
  t1099 = t923 + t1081;
  t205 = Sin(var1[9]);
  t1125 = t222*t973;
  t1135 = -1.*t917*t975;
  t1142 = t1125 + t1135;
  t1271 = Cos(var1[10]);
  t1114 = -1.*t205*t1099;
  t1147 = t1122*t1142;
  t1176 = t1114 + t1147;
  t179 = Sin(var1[10]);
  t1301 = t1122*t1099;
  t1332 = t205*t1142;
  t1341 = t1301 + t1332;
  t1372 = Cos(var1[11]);
  t1207 = t179*t1176;
  t1342 = t1271*t1341;
  t1351 = t1207 + t1342;
  t18 = Sin(var1[11]);
  t1394 = t1271*t1176;
  t1418 = -1.*t179*t1341;
  t1421 = t1394 + t1418;
  t1473 = Cos(var1[12]);
  t1371 = -1.*t18*t1351;
  t1449 = t1372*t1421;
  t1451 = t1371 + t1449;
  t9 = Sin(var1[12]);
  t1474 = t1372*t1351;
  t1509 = t18*t1421;
  t1525 = t1474 + t1509;
  t1690 = t376*t419*t505;
  t1700 = -1.*t294*t525;
  t1711 = t1690 + t1700;
  t1624 = t294*t376;
  t1637 = t419*t505*t525;
  t1638 = t1624 + t1637;
  t1777 = t375*t1711;
  t1802 = -1.*t1638*t766;
  t1821 = t1777 + t1802;
  t1604 = t326*t352*t419;
  t1678 = t375*t1638;
  t1718 = t1711*t766;
  t1729 = t1678 + t1718;
  t1735 = t1729*t892;
  t1767 = t1604 + t1735;
  t1769 = t222*t1767;
  t1824 = t1821*t975;
  t1838 = t1769 + t1824;
  t1862 = t222*t1821;
  t1871 = -1.*t1767*t975;
  t1883 = t1862 + t1871;
  t1860 = -1.*t205*t1838;
  t1911 = t1122*t1883;
  t1916 = t1860 + t1911;
  t1959 = t1122*t1838;
  t1962 = t205*t1883;
  t1969 = t1959 + t1962;
  t1919 = t179*t1916;
  t1976 = t1271*t1969;
  t1978 = t1919 + t1976;
  t1987 = t1271*t1916;
  t2015 = -1.*t179*t1969;
  t2021 = t1987 + t2015;
  t1981 = -1.*t18*t1978;
  t2052 = t1372*t2021;
  t2066 = t1981 + t2052;
  t2083 = t1372*t1978;
  t2087 = t18*t2021;
  t2091 = t2083 + t2087;
  t2218 = t326*t376*t375;
  t2219 = -1.*t326*t525*t766;
  t2236 = t2218 + t2219;
  t2139 = -1.*t352*t505;
  t2142 = t326*t375*t525;
  t2151 = t326*t376*t766;
  t2178 = t2142 + t2151;
  t2186 = t2178*t892;
  t2196 = t2139 + t2186;
  t2199 = t222*t2196;
  t2238 = t2236*t975;
  t2256 = t2199 + t2238;
  t2268 = t222*t2236;
  t2271 = -1.*t2196*t975;
  t2277 = t2268 + t2271;
  t2267 = -1.*t205*t2256;
  t2285 = t1122*t2277;
  t2292 = t2267 + t2285;
  t2309 = t1122*t2256;
  t2310 = t205*t2277;
  t2317 = t2309 + t2310;
  t2294 = t179*t2292;
  t2330 = t1271*t2317;
  t2359 = t2294 + t2330;
  t2369 = t1271*t2292;
  t2381 = -1.*t179*t2317;
  t2385 = t2369 + t2381;
  t2363 = -1.*t18*t2359;
  t2389 = t1372*t2385;
  t2398 = t2363 + t2389;
  t2417 = t1372*t2359;
  t2434 = t18*t2385;
  t2439 = t2417 + t2434;
  t1457 = t9*t1451;
  t1541 = t1473*t1525;
  t1544 = t1457 + t1541;
  t1563 = t1473*t1451;
  t1565 = -1.*t9*t1525;
  t1569 = t1563 + t1565;
  t2070 = t9*t2066;
  t2095 = t1473*t2091;
  t2105 = t2070 + t2095;
  t2109 = t1473*t2066;
  t2118 = -1.*t9*t2091;
  t2119 = t2109 + t2118;
  t2408 = t9*t2398;
  t2473 = t1473*t2439;
  t2482 = t2408 + t2473;
  t2489 = t1473*t2398;
  t2492 = -1.*t9*t2439;
  t2497 = t2489 + t2492;
  p_output1[0]=0.642788*t1544 + 0.766044*t1569;
  p_output1[1]=0.642788*t2105 + 0.766044*t2119;
  p_output1[2]=0.642788*t2482 + 0.766044*t2497;
  p_output1[3]=t352*t891 - 1.*t294*t326*t892;
  p_output1[4]=t1729*t352 - 1.*t326*t419*t892;
  p_output1[5]=t2178*t352 + t505*t892;
  p_output1[6]=-0.766044*t1544 + 0.642788*t1569;
  p_output1[7]=-0.766044*t2105 + 0.642788*t2119;
  p_output1[8]=-0.766044*t2482 + 0.642788*t2497;
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

#include "R_LeftToeBottom_mex.hh"

namespace SymExpression
{

void R_LeftToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
