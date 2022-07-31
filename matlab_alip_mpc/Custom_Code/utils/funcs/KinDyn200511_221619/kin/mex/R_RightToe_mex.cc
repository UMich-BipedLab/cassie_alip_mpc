/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:59 GMT-04:00
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
  double t346;
  double t446;
  double t324;
  double t351;
  double t455;
  double t563;
  double t424;
  double t498;
  double t552;
  double t321;
  double t587;
  double t605;
  double t625;
  double t684;
  double t555;
  double t640;
  double t646;
  double t304;
  double t686;
  double t694;
  double t702;
  double t704;
  double t710;
  double t740;
  double t804;
  double t830;
  double t844;
  double t862;
  double t649;
  double t847;
  double t856;
  double t259;
  double t888;
  double t906;
  double t913;
  double t999;
  double t861;
  double t915;
  double t960;
  double t253;
  double t1000;
  double t1001;
  double t1011;
  double t1070;
  double t988;
  double t1034;
  double t1046;
  double t241;
  double t1074;
  double t1076;
  double t1102;
  double t152;
  double t1226;
  double t1231;
  double t1234;
  double t1239;
  double t1242;
  double t1263;
  double t1235;
  double t1269;
  double t1274;
  double t1288;
  double t1291;
  double t1295;
  double t1300;
  double t1303;
  double t1308;
  double t1287;
  double t1354;
  double t1358;
  double t1386;
  double t1413;
  double t1415;
  double t1383;
  double t1422;
  double t1423;
  double t1440;
  double t1443;
  double t1448;
  double t1157;
  double t1433;
  double t1459;
  double t1475;
  double t1486;
  double t1491;
  double t1492;
  double t1575;
  double t1608;
  double t1644;
  double t1662;
  double t1686;
  double t1695;
  double t1726;
  double t1727;
  double t1732;
  double t1645;
  double t1741;
  double t1773;
  double t1788;
  double t1793;
  double t1814;
  double t1778;
  double t1833;
  double t1856;
  double t1866;
  double t1888;
  double t1889;
  double t1858;
  double t1894;
  double t1907;
  double t1936;
  double t1945;
  double t1965;
  double t1067;
  double t1106;
  double t1134;
  double t1164;
  double t1177;
  double t1182;
  double t1483;
  double t1501;
  double t1516;
  double t1521;
  double t1540;
  double t1543;
  double t1921;
  double t1977;
  double t1985;
  double t2010;
  double t2012;
  double t2027;
  t346 = Cos(var1[5]);
  t446 = Sin(var1[3]);
  t324 = Cos(var1[3]);
  t351 = Sin(var1[4]);
  t455 = Sin(var1[5]);
  t563 = Sin(var1[13]);
  t424 = t324*t346*t351;
  t498 = t446*t455;
  t552 = t424 + t498;
  t321 = Cos(var1[13]);
  t587 = -1.*t346*t446;
  t605 = t324*t351*t455;
  t625 = t587 + t605;
  t684 = Cos(var1[15]);
  t555 = t321*t552;
  t640 = -1.*t563*t625;
  t646 = t555 + t640;
  t304 = Sin(var1[15]);
  t686 = Cos(var1[14]);
  t694 = Cos(var1[4]);
  t702 = t686*t324*t694;
  t704 = Sin(var1[14]);
  t710 = t563*t552;
  t740 = t321*t625;
  t804 = t710 + t740;
  t830 = t704*t804;
  t844 = t702 + t830;
  t862 = Cos(var1[16]);
  t649 = t304*t646;
  t847 = t684*t844;
  t856 = t649 + t847;
  t259 = Sin(var1[16]);
  t888 = t684*t646;
  t906 = -1.*t304*t844;
  t913 = t888 + t906;
  t999 = Cos(var1[17]);
  t861 = -1.*t259*t856;
  t915 = t862*t913;
  t960 = t861 + t915;
  t253 = Sin(var1[17]);
  t1000 = t862*t856;
  t1001 = t259*t913;
  t1011 = t1000 + t1001;
  t1070 = Cos(var1[18]);
  t988 = t253*t960;
  t1034 = t999*t1011;
  t1046 = t988 + t1034;
  t241 = Sin(var1[18]);
  t1074 = t999*t960;
  t1076 = -1.*t253*t1011;
  t1102 = t1074 + t1076;
  t152 = Cos(var1[19]);
  t1226 = t346*t446*t351;
  t1231 = -1.*t324*t455;
  t1234 = t1226 + t1231;
  t1239 = t324*t346;
  t1242 = t446*t351*t455;
  t1263 = t1239 + t1242;
  t1235 = t321*t1234;
  t1269 = -1.*t563*t1263;
  t1274 = t1235 + t1269;
  t1288 = t686*t694*t446;
  t1291 = t563*t1234;
  t1295 = t321*t1263;
  t1300 = t1291 + t1295;
  t1303 = t704*t1300;
  t1308 = t1288 + t1303;
  t1287 = t304*t1274;
  t1354 = t684*t1308;
  t1358 = t1287 + t1354;
  t1386 = t684*t1274;
  t1413 = -1.*t304*t1308;
  t1415 = t1386 + t1413;
  t1383 = -1.*t259*t1358;
  t1422 = t862*t1415;
  t1423 = t1383 + t1422;
  t1440 = t862*t1358;
  t1443 = t259*t1415;
  t1448 = t1440 + t1443;
  t1157 = Sin(var1[19]);
  t1433 = t253*t1423;
  t1459 = t999*t1448;
  t1475 = t1433 + t1459;
  t1486 = t999*t1423;
  t1491 = -1.*t253*t1448;
  t1492 = t1486 + t1491;
  t1575 = t321*t694*t346;
  t1608 = -1.*t694*t563*t455;
  t1644 = t1575 + t1608;
  t1662 = -1.*t686*t351;
  t1686 = t694*t346*t563;
  t1695 = t321*t694*t455;
  t1726 = t1686 + t1695;
  t1727 = t704*t1726;
  t1732 = t1662 + t1727;
  t1645 = t304*t1644;
  t1741 = t684*t1732;
  t1773 = t1645 + t1741;
  t1788 = t684*t1644;
  t1793 = -1.*t304*t1732;
  t1814 = t1788 + t1793;
  t1778 = -1.*t259*t1773;
  t1833 = t862*t1814;
  t1856 = t1778 + t1833;
  t1866 = t862*t1773;
  t1888 = t259*t1814;
  t1889 = t1866 + t1888;
  t1858 = t253*t1856;
  t1894 = t999*t1889;
  t1907 = t1858 + t1894;
  t1936 = t999*t1856;
  t1945 = -1.*t253*t1889;
  t1965 = t1936 + t1945;
  t1067 = -1.*t241*t1046;
  t1106 = t1070*t1102;
  t1134 = t1067 + t1106;
  t1164 = t1070*t1046;
  t1177 = t241*t1102;
  t1182 = t1164 + t1177;
  t1483 = -1.*t241*t1475;
  t1501 = t1070*t1492;
  t1516 = t1483 + t1501;
  t1521 = t1070*t1475;
  t1540 = t241*t1492;
  t1543 = t1521 + t1540;
  t1921 = -1.*t241*t1907;
  t1977 = t1070*t1965;
  t1985 = t1921 + t1977;
  t2010 = t1070*t1907;
  t2012 = t241*t1965;
  t2027 = t2010 + t2012;
  p_output1[0]=t1157*t1182 - 1.*t1134*t152;
  p_output1[1]=-1.*t1516*t152 + t1157*t1543;
  p_output1[2]=-1.*t152*t1985 + t1157*t2027;
  p_output1[3]=t1134*t1157 + t1182*t152;
  p_output1[4]=t1157*t1516 + t152*t1543;
  p_output1[5]=t1157*t1985 + t152*t2027;
  p_output1[6]=t324*t694*t704 - 1.*t686*t804;
  p_output1[7]=-1.*t1300*t686 + t446*t694*t704;
  p_output1[8]=-1.*t1726*t686 - 1.*t351*t704;
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

#include "R_RightToe_mex.hh"

namespace SymExpression
{

void R_RightToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
