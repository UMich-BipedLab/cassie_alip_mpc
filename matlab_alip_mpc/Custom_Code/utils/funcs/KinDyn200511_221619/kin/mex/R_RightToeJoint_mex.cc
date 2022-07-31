/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:00 GMT-04:00
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
  double t309;
  double t351;
  double t305;
  double t347;
  double t383;
  double t470;
  double t348;
  double t390;
  double t404;
  double t296;
  double t504;
  double t524;
  double t534;
  double t670;
  double t469;
  double t535;
  double t549;
  double t222;
  double t684;
  double t699;
  double t701;
  double t720;
  double t750;
  double t779;
  double t781;
  double t793;
  double t814;
  double t866;
  double t630;
  double t833;
  double t836;
  double t219;
  double t870;
  double t876;
  double t896;
  double t942;
  double t859;
  double t898;
  double t903;
  double t186;
  double t947;
  double t967;
  double t968;
  double t1017;
  double t912;
  double t1000;
  double t1001;
  double t180;
  double t1059;
  double t1074;
  double t1079;
  double t64;
  double t1256;
  double t1264;
  double t1281;
  double t1296;
  double t1306;
  double t1310;
  double t1283;
  double t1319;
  double t1329;
  double t1350;
  double t1358;
  double t1359;
  double t1386;
  double t1403;
  double t1411;
  double t1348;
  double t1416;
  double t1440;
  double t1445;
  double t1446;
  double t1457;
  double t1442;
  double t1491;
  double t1500;
  double t1533;
  double t1558;
  double t1565;
  double t1132;
  double t1508;
  double t1571;
  double t1578;
  double t1595;
  double t1597;
  double t1599;
  double t1701;
  double t1756;
  double t1792;
  double t1838;
  double t1839;
  double t1845;
  double t1846;
  double t1866;
  double t1887;
  double t1823;
  double t1894;
  double t1904;
  double t1920;
  double t1925;
  double t1954;
  double t1912;
  double t1955;
  double t1957;
  double t1961;
  double t1965;
  double t1972;
  double t1959;
  double t1979;
  double t1983;
  double t2028;
  double t2037;
  double t2042;
  double t1011;
  double t1093;
  double t1114;
  double t1137;
  double t1170;
  double t1179;
  double t1583;
  double t1610;
  double t1611;
  double t1653;
  double t1659;
  double t1665;
  double t1991;
  double t2052;
  double t2063;
  double t2093;
  double t2094;
  double t2103;
  t309 = Cos(var1[5]);
  t351 = Sin(var1[3]);
  t305 = Cos(var1[3]);
  t347 = Sin(var1[4]);
  t383 = Sin(var1[5]);
  t470 = Sin(var1[13]);
  t348 = t305*t309*t347;
  t390 = t351*t383;
  t404 = t348 + t390;
  t296 = Cos(var1[13]);
  t504 = -1.*t309*t351;
  t524 = t305*t347*t383;
  t534 = t504 + t524;
  t670 = Cos(var1[15]);
  t469 = t296*t404;
  t535 = -1.*t470*t534;
  t549 = t469 + t535;
  t222 = Sin(var1[15]);
  t684 = Cos(var1[14]);
  t699 = Cos(var1[4]);
  t701 = t684*t305*t699;
  t720 = Sin(var1[14]);
  t750 = t470*t404;
  t779 = t296*t534;
  t781 = t750 + t779;
  t793 = t720*t781;
  t814 = t701 + t793;
  t866 = Cos(var1[16]);
  t630 = t222*t549;
  t833 = t670*t814;
  t836 = t630 + t833;
  t219 = Sin(var1[16]);
  t870 = t670*t549;
  t876 = -1.*t222*t814;
  t896 = t870 + t876;
  t942 = Cos(var1[17]);
  t859 = -1.*t219*t836;
  t898 = t866*t896;
  t903 = t859 + t898;
  t186 = Sin(var1[17]);
  t947 = t866*t836;
  t967 = t219*t896;
  t968 = t947 + t967;
  t1017 = Cos(var1[18]);
  t912 = t186*t903;
  t1000 = t942*t968;
  t1001 = t912 + t1000;
  t180 = Sin(var1[18]);
  t1059 = t942*t903;
  t1074 = -1.*t186*t968;
  t1079 = t1059 + t1074;
  t64 = Cos(var1[19]);
  t1256 = t309*t351*t347;
  t1264 = -1.*t305*t383;
  t1281 = t1256 + t1264;
  t1296 = t305*t309;
  t1306 = t351*t347*t383;
  t1310 = t1296 + t1306;
  t1283 = t296*t1281;
  t1319 = -1.*t470*t1310;
  t1329 = t1283 + t1319;
  t1350 = t684*t699*t351;
  t1358 = t470*t1281;
  t1359 = t296*t1310;
  t1386 = t1358 + t1359;
  t1403 = t720*t1386;
  t1411 = t1350 + t1403;
  t1348 = t222*t1329;
  t1416 = t670*t1411;
  t1440 = t1348 + t1416;
  t1445 = t670*t1329;
  t1446 = -1.*t222*t1411;
  t1457 = t1445 + t1446;
  t1442 = -1.*t219*t1440;
  t1491 = t866*t1457;
  t1500 = t1442 + t1491;
  t1533 = t866*t1440;
  t1558 = t219*t1457;
  t1565 = t1533 + t1558;
  t1132 = Sin(var1[19]);
  t1508 = t186*t1500;
  t1571 = t942*t1565;
  t1578 = t1508 + t1571;
  t1595 = t942*t1500;
  t1597 = -1.*t186*t1565;
  t1599 = t1595 + t1597;
  t1701 = t296*t699*t309;
  t1756 = -1.*t699*t470*t383;
  t1792 = t1701 + t1756;
  t1838 = -1.*t684*t347;
  t1839 = t699*t309*t470;
  t1845 = t296*t699*t383;
  t1846 = t1839 + t1845;
  t1866 = t720*t1846;
  t1887 = t1838 + t1866;
  t1823 = t222*t1792;
  t1894 = t670*t1887;
  t1904 = t1823 + t1894;
  t1920 = t670*t1792;
  t1925 = -1.*t222*t1887;
  t1954 = t1920 + t1925;
  t1912 = -1.*t219*t1904;
  t1955 = t866*t1954;
  t1957 = t1912 + t1955;
  t1961 = t866*t1904;
  t1965 = t219*t1954;
  t1972 = t1961 + t1965;
  t1959 = t186*t1957;
  t1979 = t942*t1972;
  t1983 = t1959 + t1979;
  t2028 = t942*t1957;
  t2037 = -1.*t186*t1972;
  t2042 = t2028 + t2037;
  t1011 = -1.*t180*t1001;
  t1093 = t1017*t1079;
  t1114 = t1011 + t1093;
  t1137 = t1017*t1001;
  t1170 = t180*t1079;
  t1179 = t1137 + t1170;
  t1583 = -1.*t180*t1578;
  t1610 = t1017*t1599;
  t1611 = t1583 + t1610;
  t1653 = t1017*t1578;
  t1659 = t180*t1599;
  t1665 = t1653 + t1659;
  t1991 = -1.*t180*t1983;
  t2052 = t1017*t2042;
  t2063 = t1991 + t2052;
  t2093 = t1017*t1983;
  t2094 = t180*t2042;
  t2103 = t2093 + t2094;
  p_output1[0]=t1132*t1179 - 1.*t1114*t64;
  p_output1[1]=t1132*t1665 - 1.*t1611*t64;
  p_output1[2]=t1132*t2103 - 1.*t2063*t64;
  p_output1[3]=t1114*t1132 + t1179*t64;
  p_output1[4]=t1132*t1611 + t1665*t64;
  p_output1[5]=t1132*t2063 + t2103*t64;
  p_output1[6]=t305*t699*t720 - 1.*t684*t781;
  p_output1[7]=-1.*t1386*t684 + t351*t699*t720;
  p_output1[8]=-1.*t1846*t684 - 1.*t347*t720;
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

#include "R_RightToeJoint_mex.hh"

namespace SymExpression
{

void R_RightToeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
