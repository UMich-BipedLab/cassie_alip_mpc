/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:15 GMT-04:00
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
  double t362;
  double t513;
  double t589;
  double t527;
  double t604;
  double t453;
  double t742;
  double t789;
  double t799;
  double t531;
  double t622;
  double t623;
  double t807;
  double t130;
  double t939;
  double t951;
  double t1042;
  double t380;
  double t383;
  double t400;
  double t646;
  double t811;
  double t856;
  double t858;
  double t877;
  double t907;
  double t1068;
  double t1125;
  double t924;
  double t1090;
  double t1101;
  double t113;
  double t1138;
  double t1142;
  double t1150;
  double t1174;
  double t1102;
  double t1160;
  double t1161;
  double t92;
  double t1180;
  double t1186;
  double t1187;
  double t1258;
  double t1173;
  double t1189;
  double t1205;
  double t62;
  double t1263;
  double t1270;
  double t1276;
  double t1311;
  double t1257;
  double t1277;
  double t1284;
  double t39;
  double t1318;
  double t1329;
  double t1349;
  double t1504;
  double t1515;
  double t1529;
  double t1459;
  double t1473;
  double t1476;
  double t1593;
  double t1596;
  double t1601;
  double t1456;
  double t1481;
  double t1533;
  double t1569;
  double t1577;
  double t1580;
  double t1581;
  double t1612;
  double t1614;
  double t1620;
  double t1636;
  double t1639;
  double t1615;
  double t1642;
  double t1657;
  double t1697;
  double t1709;
  double t1716;
  double t1658;
  double t1743;
  double t1759;
  double t1799;
  double t1803;
  double t1810;
  double t1784;
  double t1813;
  double t1819;
  double t1829;
  double t1853;
  double t1881;
  double t2009;
  double t2010;
  double t2012;
  double t1941;
  double t1948;
  double t1949;
  double t1955;
  double t1974;
  double t1991;
  double t2008;
  double t2026;
  double t2028;
  double t2031;
  double t2046;
  double t2058;
  double t2030;
  double t2067;
  double t2068;
  double t2074;
  double t2077;
  double t2094;
  double t2072;
  double t2117;
  double t2118;
  double t2132;
  double t2135;
  double t2139;
  double t2129;
  double t2168;
  double t2172;
  double t2191;
  double t2196;
  double t2209;
  double t1302;
  double t1372;
  double t1374;
  double t1394;
  double t1426;
  double t1432;
  double t1822;
  double t1886;
  double t1887;
  double t1904;
  double t1910;
  double t1914;
  double t2177;
  double t2219;
  double t2222;
  double t2245;
  double t2256;
  double t2275;
  t362 = Cos(var1[3]);
  t513 = Cos(var1[5]);
  t589 = Sin(var1[4]);
  t527 = Sin(var1[3]);
  t604 = Sin(var1[5]);
  t453 = Cos(var1[6]);
  t742 = t362*t513*t589;
  t789 = t527*t604;
  t799 = t742 + t789;
  t531 = -1.*t513*t527;
  t622 = t362*t589*t604;
  t623 = t531 + t622;
  t807 = Sin(var1[6]);
  t130 = Cos(var1[8]);
  t939 = t453*t799;
  t951 = -1.*t623*t807;
  t1042 = t939 + t951;
  t380 = Cos(var1[4]);
  t383 = Cos(var1[7]);
  t400 = t362*t380*t383;
  t646 = t453*t623;
  t811 = t799*t807;
  t856 = t646 + t811;
  t858 = Sin(var1[7]);
  t877 = t856*t858;
  t907 = t400 + t877;
  t1068 = Sin(var1[8]);
  t1125 = Cos(var1[9]);
  t924 = t130*t907;
  t1090 = t1042*t1068;
  t1101 = t924 + t1090;
  t113 = Sin(var1[9]);
  t1138 = t130*t1042;
  t1142 = -1.*t907*t1068;
  t1150 = t1138 + t1142;
  t1174 = Cos(var1[10]);
  t1102 = -1.*t113*t1101;
  t1160 = t1125*t1150;
  t1161 = t1102 + t1160;
  t92 = Sin(var1[10]);
  t1180 = t1125*t1101;
  t1186 = t113*t1150;
  t1187 = t1180 + t1186;
  t1258 = Cos(var1[11]);
  t1173 = t92*t1161;
  t1189 = t1174*t1187;
  t1205 = t1173 + t1189;
  t62 = Sin(var1[11]);
  t1263 = t1174*t1161;
  t1270 = -1.*t92*t1187;
  t1276 = t1263 + t1270;
  t1311 = Cos(var1[12]);
  t1257 = -1.*t62*t1205;
  t1277 = t1258*t1276;
  t1284 = t1257 + t1277;
  t39 = Sin(var1[12]);
  t1318 = t1258*t1205;
  t1329 = t62*t1276;
  t1349 = t1318 + t1329;
  t1504 = t513*t527*t589;
  t1515 = -1.*t362*t604;
  t1529 = t1504 + t1515;
  t1459 = t362*t513;
  t1473 = t527*t589*t604;
  t1476 = t1459 + t1473;
  t1593 = t453*t1529;
  t1596 = -1.*t1476*t807;
  t1601 = t1593 + t1596;
  t1456 = t380*t383*t527;
  t1481 = t453*t1476;
  t1533 = t1529*t807;
  t1569 = t1481 + t1533;
  t1577 = t1569*t858;
  t1580 = t1456 + t1577;
  t1581 = t130*t1580;
  t1612 = t1601*t1068;
  t1614 = t1581 + t1612;
  t1620 = t130*t1601;
  t1636 = -1.*t1580*t1068;
  t1639 = t1620 + t1636;
  t1615 = -1.*t113*t1614;
  t1642 = t1125*t1639;
  t1657 = t1615 + t1642;
  t1697 = t1125*t1614;
  t1709 = t113*t1639;
  t1716 = t1697 + t1709;
  t1658 = t92*t1657;
  t1743 = t1174*t1716;
  t1759 = t1658 + t1743;
  t1799 = t1174*t1657;
  t1803 = -1.*t92*t1716;
  t1810 = t1799 + t1803;
  t1784 = -1.*t62*t1759;
  t1813 = t1258*t1810;
  t1819 = t1784 + t1813;
  t1829 = t1258*t1759;
  t1853 = t62*t1810;
  t1881 = t1829 + t1853;
  t2009 = t380*t513*t453;
  t2010 = -1.*t380*t604*t807;
  t2012 = t2009 + t2010;
  t1941 = -1.*t383*t589;
  t1948 = t380*t453*t604;
  t1949 = t380*t513*t807;
  t1955 = t1948 + t1949;
  t1974 = t1955*t858;
  t1991 = t1941 + t1974;
  t2008 = t130*t1991;
  t2026 = t2012*t1068;
  t2028 = t2008 + t2026;
  t2031 = t130*t2012;
  t2046 = -1.*t1991*t1068;
  t2058 = t2031 + t2046;
  t2030 = -1.*t113*t2028;
  t2067 = t1125*t2058;
  t2068 = t2030 + t2067;
  t2074 = t1125*t2028;
  t2077 = t113*t2058;
  t2094 = t2074 + t2077;
  t2072 = t92*t2068;
  t2117 = t1174*t2094;
  t2118 = t2072 + t2117;
  t2132 = t1174*t2068;
  t2135 = -1.*t92*t2094;
  t2139 = t2132 + t2135;
  t2129 = -1.*t62*t2118;
  t2168 = t1258*t2139;
  t2172 = t2129 + t2168;
  t2191 = t1258*t2118;
  t2196 = t62*t2139;
  t2209 = t2191 + t2196;
  t1302 = t39*t1284;
  t1372 = t1311*t1349;
  t1374 = t1302 + t1372;
  t1394 = t1311*t1284;
  t1426 = -1.*t39*t1349;
  t1432 = t1394 + t1426;
  t1822 = t39*t1819;
  t1886 = t1311*t1881;
  t1887 = t1822 + t1886;
  t1904 = t1311*t1819;
  t1910 = -1.*t39*t1881;
  t1914 = t1904 + t1910;
  t2177 = t39*t2172;
  t2219 = t1311*t2209;
  t2222 = t2177 + t2219;
  t2245 = t1311*t2172;
  t2256 = -1.*t39*t2209;
  t2275 = t2245 + t2256;
  p_output1[0]=0.642788*t1374 + 0.766044*t1432;
  p_output1[1]=0.642788*t1887 + 0.766044*t1914;
  p_output1[2]=0.642788*t2222 + 0.766044*t2275;
  p_output1[3]=t383*t856 - 1.*t362*t380*t858;
  p_output1[4]=t1569*t383 - 1.*t380*t527*t858;
  p_output1[5]=t1955*t383 + t589*t858;
  p_output1[6]=-0.766044*t1374 + 0.642788*t1432;
  p_output1[7]=-0.766044*t1887 + 0.642788*t1914;
  p_output1[8]=-0.766044*t2222 + 0.642788*t2275;
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

#include "R_LeftToeBottomBack_mex.hh"

namespace SymExpression
{

void R_LeftToeBottomBack_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
