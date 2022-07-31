/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:12 GMT-04:00
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
  double t393;
  double t441;
  double t412;
  double t462;
  double t380;
  double t533;
  double t535;
  double t547;
  double t423;
  double t465;
  double t514;
  double t566;
  double t242;
  double t698;
  double t728;
  double t744;
  double t316;
  double t331;
  double t334;
  double t532;
  double t574;
  double t576;
  double t665;
  double t672;
  double t675;
  double t747;
  double t821;
  double t694;
  double t779;
  double t802;
  double t237;
  double t829;
  double t832;
  double t834;
  double t943;
  double t805;
  double t861;
  double t892;
  double t86;
  double t967;
  double t1003;
  double t1033;
  double t4;
  double t1175;
  double t1177;
  double t1195;
  double t1143;
  double t1145;
  double t1155;
  double t1315;
  double t1342;
  double t1352;
  double t1135;
  double t1161;
  double t1205;
  double t1211;
  double t1234;
  double t1262;
  double t1302;
  double t1358;
  double t1365;
  double t1367;
  double t1368;
  double t1371;
  double t1069;
  double t1366;
  double t1378;
  double t1393;
  double t1429;
  double t1431;
  double t1432;
  double t1611;
  double t1616;
  double t1618;
  double t1540;
  double t1555;
  double t1556;
  double t1573;
  double t1591;
  double t1595;
  double t1600;
  double t1619;
  double t1623;
  double t1634;
  double t1639;
  double t1642;
  double t1627;
  double t1653;
  double t1662;
  double t1717;
  double t1731;
  double t1735;
  double t940;
  double t1035;
  double t1048;
  double t1078;
  double t1079;
  double t1086;
  double t1400;
  double t1443;
  double t1456;
  double t1473;
  double t1498;
  double t1501;
  double t1689;
  double t1739;
  double t1762;
  double t1782;
  double t1788;
  double t1795;
  t279 = Cos(var1[3]);
  t393 = Cos(var1[5]);
  t441 = Sin(var1[4]);
  t412 = Sin(var1[3]);
  t462 = Sin(var1[5]);
  t380 = Cos(var1[6]);
  t533 = t279*t393*t441;
  t535 = t412*t462;
  t547 = t533 + t535;
  t423 = -1.*t393*t412;
  t465 = t279*t441*t462;
  t514 = t423 + t465;
  t566 = Sin(var1[6]);
  t242 = Cos(var1[8]);
  t698 = t380*t547;
  t728 = -1.*t514*t566;
  t744 = t698 + t728;
  t316 = Cos(var1[4]);
  t331 = Cos(var1[7]);
  t334 = t279*t316*t331;
  t532 = t380*t514;
  t574 = t547*t566;
  t576 = t532 + t574;
  t665 = Sin(var1[7]);
  t672 = t576*t665;
  t675 = t334 + t672;
  t747 = Sin(var1[8]);
  t821 = Cos(var1[9]);
  t694 = t242*t675;
  t779 = t744*t747;
  t802 = t694 + t779;
  t237 = Sin(var1[9]);
  t829 = t242*t744;
  t832 = -1.*t675*t747;
  t834 = t829 + t832;
  t943 = Cos(var1[10]);
  t805 = -1.*t237*t802;
  t861 = t821*t834;
  t892 = t805 + t861;
  t86 = Sin(var1[10]);
  t967 = t821*t802;
  t1003 = t237*t834;
  t1033 = t967 + t1003;
  t4 = Sin(var1[11]);
  t1175 = t393*t412*t441;
  t1177 = -1.*t279*t462;
  t1195 = t1175 + t1177;
  t1143 = t279*t393;
  t1145 = t412*t441*t462;
  t1155 = t1143 + t1145;
  t1315 = t380*t1195;
  t1342 = -1.*t1155*t566;
  t1352 = t1315 + t1342;
  t1135 = t316*t331*t412;
  t1161 = t380*t1155;
  t1205 = t1195*t566;
  t1211 = t1161 + t1205;
  t1234 = t1211*t665;
  t1262 = t1135 + t1234;
  t1302 = t242*t1262;
  t1358 = t1352*t747;
  t1365 = t1302 + t1358;
  t1367 = t242*t1352;
  t1368 = -1.*t1262*t747;
  t1371 = t1367 + t1368;
  t1069 = Cos(var1[11]);
  t1366 = -1.*t237*t1365;
  t1378 = t821*t1371;
  t1393 = t1366 + t1378;
  t1429 = t821*t1365;
  t1431 = t237*t1371;
  t1432 = t1429 + t1431;
  t1611 = t316*t393*t380;
  t1616 = -1.*t316*t462*t566;
  t1618 = t1611 + t1616;
  t1540 = -1.*t331*t441;
  t1555 = t316*t380*t462;
  t1556 = t316*t393*t566;
  t1573 = t1555 + t1556;
  t1591 = t1573*t665;
  t1595 = t1540 + t1591;
  t1600 = t242*t1595;
  t1619 = t1618*t747;
  t1623 = t1600 + t1619;
  t1634 = t242*t1618;
  t1639 = -1.*t1595*t747;
  t1642 = t1634 + t1639;
  t1627 = -1.*t237*t1623;
  t1653 = t821*t1642;
  t1662 = t1627 + t1653;
  t1717 = t821*t1623;
  t1731 = t237*t1642;
  t1735 = t1717 + t1731;
  t940 = t86*t892;
  t1035 = t943*t1033;
  t1048 = t940 + t1035;
  t1078 = t943*t892;
  t1079 = -1.*t86*t1033;
  t1086 = t1078 + t1079;
  t1400 = t86*t1393;
  t1443 = t943*t1432;
  t1456 = t1400 + t1443;
  t1473 = t943*t1393;
  t1498 = -1.*t86*t1432;
  t1501 = t1473 + t1498;
  t1689 = t86*t1662;
  t1739 = t943*t1735;
  t1762 = t1689 + t1739;
  t1782 = t943*t1662;
  t1788 = -1.*t86*t1735;
  t1795 = t1782 + t1788;
  p_output1[0]=-1.*t1069*t1086 + t1048*t4;
  p_output1[1]=-1.*t1069*t1501 + t1456*t4;
  p_output1[2]=-1.*t1069*t1795 + t1762*t4;
  p_output1[3]=t1048*t1069 + t1086*t4;
  p_output1[4]=t1069*t1456 + t1501*t4;
  p_output1[5]=t1069*t1762 + t1795*t4;
  p_output1[6]=-1.*t331*t576 + t279*t316*t665;
  p_output1[7]=-1.*t1211*t331 + t316*t412*t665;
  p_output1[8]=-1.*t1573*t331 - 1.*t441*t665;
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

#include "R_LeftAnkleJoint_mex.hh"

namespace SymExpression
{

void R_LeftAnkleJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
