/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:49 GMT-04:00
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
  double t653;
  double t769;
  double t883;
  double t786;
  double t962;
  double t720;
  double t1074;
  double t1110;
  double t1127;
  double t868;
  double t964;
  double t1017;
  double t1178;
  double t616;
  double t1298;
  double t1315;
  double t1318;
  double t662;
  double t665;
  double t671;
  double t1059;
  double t1183;
  double t1194;
  double t1230;
  double t1233;
  double t1246;
  double t1353;
  double t1383;
  double t1276;
  double t1355;
  double t1373;
  double t581;
  double t1414;
  double t1424;
  double t1444;
  double t468;
  double t1618;
  double t1656;
  double t1657;
  double t1590;
  double t1592;
  double t1601;
  double t1719;
  double t1757;
  double t1772;
  double t1584;
  double t1616;
  double t1659;
  double t1692;
  double t1695;
  double t1696;
  double t1505;
  double t1710;
  double t1773;
  double t1774;
  double t1792;
  double t1793;
  double t1799;
  double t2048;
  double t2059;
  double t2067;
  double t1948;
  double t1977;
  double t1978;
  double t1984;
  double t1991;
  double t1994;
  double t2001;
  double t2080;
  double t2087;
  double t2105;
  double t2106;
  double t2112;
  double t1382;
  double t1461;
  double t1464;
  double t1509;
  double t1518;
  double t1530;
  double t1775;
  double t1822;
  double t1839;
  double t1861;
  double t1873;
  double t1874;
  double t2091;
  double t2121;
  double t2122;
  double t2153;
  double t2175;
  double t2184;
  t653 = Cos(var1[3]);
  t769 = Cos(var1[5]);
  t883 = Sin(var1[4]);
  t786 = Sin(var1[3]);
  t962 = Sin(var1[5]);
  t720 = Cos(var1[6]);
  t1074 = t653*t769*t883;
  t1110 = t786*t962;
  t1127 = t1074 + t1110;
  t868 = -1.*t769*t786;
  t964 = t653*t883*t962;
  t1017 = t868 + t964;
  t1178 = Sin(var1[6]);
  t616 = Cos(var1[8]);
  t1298 = t720*t1127;
  t1315 = -1.*t1017*t1178;
  t1318 = t1298 + t1315;
  t662 = Cos(var1[4]);
  t665 = Cos(var1[7]);
  t671 = t653*t662*t665;
  t1059 = t720*t1017;
  t1183 = t1127*t1178;
  t1194 = t1059 + t1183;
  t1230 = Sin(var1[7]);
  t1233 = t1194*t1230;
  t1246 = t671 + t1233;
  t1353 = Sin(var1[8]);
  t1383 = Cos(var1[9]);
  t1276 = t616*t1246;
  t1355 = t1318*t1353;
  t1373 = t1276 + t1355;
  t581 = Sin(var1[9]);
  t1414 = t616*t1318;
  t1424 = -1.*t1246*t1353;
  t1444 = t1414 + t1424;
  t468 = Cos(var1[10]);
  t1618 = t769*t786*t883;
  t1656 = -1.*t653*t962;
  t1657 = t1618 + t1656;
  t1590 = t653*t769;
  t1592 = t786*t883*t962;
  t1601 = t1590 + t1592;
  t1719 = t720*t1657;
  t1757 = -1.*t1601*t1178;
  t1772 = t1719 + t1757;
  t1584 = t662*t665*t786;
  t1616 = t720*t1601;
  t1659 = t1657*t1178;
  t1692 = t1616 + t1659;
  t1695 = t1692*t1230;
  t1696 = t1584 + t1695;
  t1505 = Sin(var1[10]);
  t1710 = t616*t1696;
  t1773 = t1772*t1353;
  t1774 = t1710 + t1773;
  t1792 = t616*t1772;
  t1793 = -1.*t1696*t1353;
  t1799 = t1792 + t1793;
  t2048 = t662*t769*t720;
  t2059 = -1.*t662*t962*t1178;
  t2067 = t2048 + t2059;
  t1948 = -1.*t665*t883;
  t1977 = t662*t720*t962;
  t1978 = t662*t769*t1178;
  t1984 = t1977 + t1978;
  t1991 = t1984*t1230;
  t1994 = t1948 + t1991;
  t2001 = t616*t1994;
  t2080 = t2067*t1353;
  t2087 = t2001 + t2080;
  t2105 = t616*t2067;
  t2106 = -1.*t1994*t1353;
  t2112 = t2105 + t2106;
  t1382 = -1.*t581*t1373;
  t1461 = t1383*t1444;
  t1464 = t1382 + t1461;
  t1509 = t1383*t1373;
  t1518 = t581*t1444;
  t1530 = t1509 + t1518;
  t1775 = -1.*t581*t1774;
  t1822 = t1383*t1799;
  t1839 = t1775 + t1822;
  t1861 = t1383*t1774;
  t1873 = t581*t1799;
  t1874 = t1861 + t1873;
  t2091 = -1.*t581*t2087;
  t2121 = t1383*t2112;
  t2122 = t2091 + t2121;
  t2153 = t1383*t2087;
  t2175 = t581*t2112;
  t2184 = t2153 + t2175;
  p_output1[0]=t1505*t1530 - 1.*t1464*t468;
  p_output1[1]=t1505*t1874 - 1.*t1839*t468;
  p_output1[2]=t1505*t2184 - 1.*t2122*t468;
  p_output1[3]=t1464*t1505 + t1530*t468;
  p_output1[4]=t1505*t1839 + t1874*t468;
  p_output1[5]=t1505*t2122 + t2184*t468;
  p_output1[6]=t1230*t653*t662 - 1.*t1194*t665;
  p_output1[7]=-1.*t1692*t665 + t1230*t662*t786;
  p_output1[8]=-1.*t1984*t665 - 1.*t1230*t883;
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

#include "R_LeftKneeSpringJoint_mex.hh"

namespace SymExpression
{

void R_LeftKneeSpringJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
