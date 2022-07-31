/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:22:10 GMT-04:00
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
  double t380;
  double t446;
  double t365;
  double t385;
  double t460;
  double t643;
  double t426;
  double t464;
  double t467;
  double t199;
  double t673;
  double t698;
  double t711;
  double t788;
  double t635;
  double t714;
  double t725;
  double t144;
  double t799;
  double t821;
  double t823;
  double t841;
  double t887;
  double t904;
  double t909;
  double t947;
  double t953;
  double t1012;
  double t766;
  double t968;
  double t982;
  double t104;
  double t1020;
  double t1043;
  double t1046;
  double t94;
  double t1227;
  double t1244;
  double t1263;
  double t1291;
  double t1295;
  double t1327;
  double t1271;
  double t1336;
  double t1359;
  double t1366;
  double t1372;
  double t1390;
  double t1404;
  double t1411;
  double t1423;
  double t1136;
  double t1360;
  double t1451;
  double t1466;
  double t1472;
  double t1512;
  double t1513;
  double t1578;
  double t1607;
  double t1626;
  double t1656;
  double t1689;
  double t1694;
  double t1699;
  double t1705;
  double t1709;
  double t1635;
  double t1727;
  double t1729;
  double t1734;
  double t1735;
  double t1737;
  double t1003;
  double t1071;
  double t1102;
  double t1156;
  double t1189;
  double t1191;
  double t1471;
  double t1514;
  double t1522;
  double t1543;
  double t1556;
  double t1557;
  double t1731;
  double t1747;
  double t1776;
  double t1801;
  double t1831;
  double t1863;
  t380 = Cos(var1[5]);
  t446 = Sin(var1[3]);
  t365 = Cos(var1[3]);
  t385 = Sin(var1[4]);
  t460 = Sin(var1[5]);
  t643 = Sin(var1[13]);
  t426 = t365*t380*t385;
  t464 = t446*t460;
  t467 = t426 + t464;
  t199 = Cos(var1[13]);
  t673 = -1.*t380*t446;
  t698 = t365*t385*t460;
  t711 = t673 + t698;
  t788 = Cos(var1[15]);
  t635 = t199*t467;
  t714 = -1.*t643*t711;
  t725 = t635 + t714;
  t144 = Sin(var1[15]);
  t799 = Cos(var1[14]);
  t821 = Cos(var1[4]);
  t823 = t799*t365*t821;
  t841 = Sin(var1[14]);
  t887 = t643*t467;
  t904 = t199*t711;
  t909 = t887 + t904;
  t947 = t841*t909;
  t953 = t823 + t947;
  t1012 = Cos(var1[16]);
  t766 = t144*t725;
  t968 = t788*t953;
  t982 = t766 + t968;
  t104 = Sin(var1[16]);
  t1020 = t788*t725;
  t1043 = -1.*t144*t953;
  t1046 = t1020 + t1043;
  t94 = Cos(var1[17]);
  t1227 = t380*t446*t385;
  t1244 = -1.*t365*t460;
  t1263 = t1227 + t1244;
  t1291 = t365*t380;
  t1295 = t446*t385*t460;
  t1327 = t1291 + t1295;
  t1271 = t199*t1263;
  t1336 = -1.*t643*t1327;
  t1359 = t1271 + t1336;
  t1366 = t799*t821*t446;
  t1372 = t643*t1263;
  t1390 = t199*t1327;
  t1404 = t1372 + t1390;
  t1411 = t841*t1404;
  t1423 = t1366 + t1411;
  t1136 = Sin(var1[17]);
  t1360 = t144*t1359;
  t1451 = t788*t1423;
  t1466 = t1360 + t1451;
  t1472 = t788*t1359;
  t1512 = -1.*t144*t1423;
  t1513 = t1472 + t1512;
  t1578 = t199*t821*t380;
  t1607 = -1.*t821*t643*t460;
  t1626 = t1578 + t1607;
  t1656 = -1.*t799*t385;
  t1689 = t821*t380*t643;
  t1694 = t199*t821*t460;
  t1699 = t1689 + t1694;
  t1705 = t841*t1699;
  t1709 = t1656 + t1705;
  t1635 = t144*t1626;
  t1727 = t788*t1709;
  t1729 = t1635 + t1727;
  t1734 = t788*t1626;
  t1735 = -1.*t144*t1709;
  t1737 = t1734 + t1735;
  t1003 = -1.*t104*t982;
  t1071 = t1012*t1046;
  t1102 = t1003 + t1071;
  t1156 = t1012*t982;
  t1189 = t104*t1046;
  t1191 = t1156 + t1189;
  t1471 = -1.*t104*t1466;
  t1514 = t1012*t1513;
  t1522 = t1471 + t1514;
  t1543 = t1012*t1466;
  t1556 = t104*t1513;
  t1557 = t1543 + t1556;
  t1731 = -1.*t104*t1729;
  t1747 = t1012*t1737;
  t1776 = t1731 + t1747;
  t1801 = t1012*t1729;
  t1831 = t104*t1737;
  t1863 = t1801 + t1831;
  p_output1[0]=t1136*t1191 - 1.*t1102*t94;
  p_output1[1]=t1136*t1557 - 1.*t1522*t94;
  p_output1[2]=t1136*t1863 - 1.*t1776*t94;
  p_output1[3]=t1102*t1136 + t1191*t94;
  p_output1[4]=t1136*t1522 + t1557*t94;
  p_output1[5]=t1136*t1776 + t1863*t94;
  p_output1[6]=t365*t821*t841 - 1.*t799*t909;
  p_output1[7]=-1.*t1404*t799 + t446*t821*t841;
  p_output1[8]=-1.*t1699*t799 - 1.*t385*t841;
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

#include "R_RightKneeSpringJoint_mex.hh"

namespace SymExpression
{

void R_RightKneeSpringJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
