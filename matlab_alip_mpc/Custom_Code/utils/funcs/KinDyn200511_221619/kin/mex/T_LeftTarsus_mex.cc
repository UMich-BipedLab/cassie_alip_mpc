/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:18 GMT-04:00
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
  double t45;
  double t81;
  double t111;
  double t85;
  double t114;
  double t77;
  double t137;
  double t138;
  double t140;
  double t105;
  double t119;
  double t134;
  double t148;
  double t40;
  double t235;
  double t248;
  double t255;
  double t51;
  double t64;
  double t69;
  double t135;
  double t169;
  double t190;
  double t195;
  double t198;
  double t204;
  double t277;
  double t311;
  double t220;
  double t288;
  double t289;
  double t37;
  double t313;
  double t315;
  double t336;
  double t387;
  double t294;
  double t343;
  double t345;
  double t17;
  double t390;
  double t419;
  double t421;
  double t15;
  double t512;
  double t517;
  double t521;
  double t496;
  double t498;
  double t499;
  double t573;
  double t576;
  double t586;
  double t490;
  double t508;
  double t544;
  double t549;
  double t563;
  double t567;
  double t569;
  double t587;
  double t594;
  double t596;
  double t606;
  double t615;
  double t442;
  double t595;
  double t624;
  double t631;
  double t639;
  double t642;
  double t645;
  double t782;
  double t808;
  double t817;
  double t738;
  double t752;
  double t753;
  double t758;
  double t763;
  double t770;
  double t779;
  double t821;
  double t825;
  double t843;
  double t852;
  double t860;
  double t830;
  double t872;
  double t877;
  double t887;
  double t903;
  double t919;
  double t379;
  double t429;
  double t437;
  double t445;
  double t453;
  double t460;
  double t638;
  double t654;
  double t670;
  double t701;
  double t706;
  double t711;
  double t884;
  double t926;
  double t930;
  double t933;
  double t942;
  double t945;
  double t1172;
  double t1183;
  double t1277;
  double t1281;
  double t1356;
  double t1365;
  double t1427;
  double t1435;
  double t1497;
  double t1506;
  double t1568;
  double t1572;
  double t989;
  double t1001;
  double t1020;
  double t1195;
  double t1204;
  double t1212;
  double t1224;
  double t1225;
  double t1234;
  double t1282;
  double t1287;
  double t1296;
  double t1331;
  double t1332;
  double t1334;
  double t1366;
  double t1369;
  double t1386;
  double t1390;
  double t1392;
  double t1403;
  double t1438;
  double t1459;
  double t1465;
  double t1470;
  double t1472;
  double t1489;
  double t1508;
  double t1512;
  double t1517;
  double t1534;
  double t1546;
  double t1557;
  double t1586;
  double t1587;
  double t1590;
  double t1596;
  double t1604;
  double t1608;
  double t1022;
  double t1023;
  double t1050;
  double t1057;
  double t1062;
  double t1064;
  t45 = Cos(var1[3]);
  t81 = Cos(var1[5]);
  t111 = Sin(var1[4]);
  t85 = Sin(var1[3]);
  t114 = Sin(var1[5]);
  t77 = Cos(var1[6]);
  t137 = t45*t81*t111;
  t138 = t85*t114;
  t140 = t137 + t138;
  t105 = -1.*t81*t85;
  t119 = t45*t111*t114;
  t134 = t105 + t119;
  t148 = Sin(var1[6]);
  t40 = Cos(var1[8]);
  t235 = t77*t140;
  t248 = -1.*t134*t148;
  t255 = t235 + t248;
  t51 = Cos(var1[4]);
  t64 = Cos(var1[7]);
  t69 = t45*t51*t64;
  t135 = t77*t134;
  t169 = t140*t148;
  t190 = t135 + t169;
  t195 = Sin(var1[7]);
  t198 = t190*t195;
  t204 = t69 + t198;
  t277 = Sin(var1[8]);
  t311 = Cos(var1[9]);
  t220 = t40*t204;
  t288 = t255*t277;
  t289 = t220 + t288;
  t37 = Sin(var1[9]);
  t313 = t40*t255;
  t315 = -1.*t204*t277;
  t336 = t313 + t315;
  t387 = Cos(var1[10]);
  t294 = -1.*t37*t289;
  t343 = t311*t336;
  t345 = t294 + t343;
  t17 = Sin(var1[10]);
  t390 = t311*t289;
  t419 = t37*t336;
  t421 = t390 + t419;
  t15 = Sin(var1[11]);
  t512 = t81*t85*t111;
  t517 = -1.*t45*t114;
  t521 = t512 + t517;
  t496 = t45*t81;
  t498 = t85*t111*t114;
  t499 = t496 + t498;
  t573 = t77*t521;
  t576 = -1.*t499*t148;
  t586 = t573 + t576;
  t490 = t51*t64*t85;
  t508 = t77*t499;
  t544 = t521*t148;
  t549 = t508 + t544;
  t563 = t549*t195;
  t567 = t490 + t563;
  t569 = t40*t567;
  t587 = t586*t277;
  t594 = t569 + t587;
  t596 = t40*t586;
  t606 = -1.*t567*t277;
  t615 = t596 + t606;
  t442 = Cos(var1[11]);
  t595 = -1.*t37*t594;
  t624 = t311*t615;
  t631 = t595 + t624;
  t639 = t311*t594;
  t642 = t37*t615;
  t645 = t639 + t642;
  t782 = t51*t81*t77;
  t808 = -1.*t51*t114*t148;
  t817 = t782 + t808;
  t738 = -1.*t64*t111;
  t752 = t51*t77*t114;
  t753 = t51*t81*t148;
  t758 = t752 + t753;
  t763 = t758*t195;
  t770 = t738 + t763;
  t779 = t40*t770;
  t821 = t817*t277;
  t825 = t779 + t821;
  t843 = t40*t817;
  t852 = -1.*t770*t277;
  t860 = t843 + t852;
  t830 = -1.*t37*t825;
  t872 = t311*t860;
  t877 = t830 + t872;
  t887 = t311*t825;
  t903 = t37*t860;
  t919 = t887 + t903;
  t379 = t17*t345;
  t429 = t387*t421;
  t437 = t379 + t429;
  t445 = t387*t345;
  t453 = -1.*t17*t421;
  t460 = t445 + t453;
  t638 = t17*t631;
  t654 = t387*t645;
  t670 = t638 + t654;
  t701 = t387*t631;
  t706 = -1.*t17*t645;
  t711 = t701 + t706;
  t884 = t17*t877;
  t926 = t387*t919;
  t930 = t884 + t926;
  t933 = t387*t877;
  t942 = -1.*t17*t919;
  t945 = t933 + t942;
  t1172 = -1.*t77;
  t1183 = 1. + t1172;
  t1277 = -1.*t64;
  t1281 = 1. + t1277;
  t1356 = -1.*t40;
  t1365 = 1. + t1356;
  t1427 = -1.*t311;
  t1435 = 1. + t1427;
  t1497 = -1.*t387;
  t1506 = 1. + t1497;
  t1568 = -1.*t442;
  t1572 = 1. + t1568;
  t989 = t442*t437;
  t1001 = t15*t460;
  t1020 = t989 + t1001;
  t1195 = 0.07996*t1183;
  t1204 = -0.135*t148;
  t1212 = 0. + t1195 + t1204;
  t1224 = 0.135*t1183;
  t1225 = 0.07996*t148;
  t1234 = 0. + t1224 + t1225;
  t1282 = 0.135*t1281;
  t1287 = 0.08055*t195;
  t1296 = 0. + t1282 + t1287;
  t1331 = -0.08055*t1281;
  t1332 = 0.135*t195;
  t1334 = 0. + t1331 + t1332;
  t1366 = -0.08055*t1365;
  t1369 = -0.01004*t277;
  t1386 = 0. + t1366 + t1369;
  t1390 = -0.01004*t1365;
  t1392 = 0.08055*t277;
  t1403 = 0. + t1390 + t1392;
  t1438 = -0.08055*t1435;
  t1459 = -0.13004*t37;
  t1465 = 0. + t1438 + t1459;
  t1470 = -0.13004*t1435;
  t1472 = 0.08055*t37;
  t1489 = 0. + t1470 + t1472;
  t1508 = -0.19074*t1506;
  t1512 = 0.03315*t17;
  t1517 = 0. + t1508 + t1512;
  t1534 = -0.03315*t1506;
  t1546 = -0.19074*t17;
  t1557 = 0. + t1534 + t1546;
  t1586 = -0.01315*t1572;
  t1587 = -0.62554*t15;
  t1590 = 0. + t1586 + t1587;
  t1596 = -0.62554*t1572;
  t1604 = 0.01315*t15;
  t1608 = 0. + t1596 + t1604;
  t1022 = t442*t670;
  t1023 = t15*t711;
  t1050 = t1022 + t1023;
  t1057 = t442*t930;
  t1062 = t15*t945;
  t1064 = t1057 + t1062;
  p_output1[0]=t15*t437 - 1.*t442*t460;
  p_output1[1]=t15*t670 - 1.*t442*t711;
  p_output1[2]=t15*t930 - 1.*t442*t945;
  p_output1[3]=0.;
  p_output1[4]=t1020;
  p_output1[5]=t1050;
  p_output1[6]=t1064;
  p_output1[7]=0.;
  p_output1[8]=t195*t45*t51 - 1.*t190*t64;
  p_output1[9]=-1.*t549*t64 + t195*t51*t85;
  p_output1[10]=-1.*t111*t195 - 1.*t64*t758;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.04375*t1020 + t1234*t134 + t1212*t140 + t1296*t190 + t1386*t204 + t1403*t255 + t1465*t289 + t1489*t336 + t1517*t345 + t1557*t421 + t1590*t437 + t1608*t460 - 0.73604*(-1.*t15*t437 + t442*t460) + t1334*t45*t51 + 0.1318*(-1.*t195*t45*t51 + t190*t64) + var1[0];
  p_output1[13]=0. - 0.04375*t1050 + t1234*t499 + t1212*t521 + t1296*t549 + t1386*t567 + t1403*t586 + t1465*t594 + t1489*t615 + t1517*t631 + t1557*t645 + t1590*t670 + t1608*t711 - 0.73604*(-1.*t15*t670 + t442*t711) + t1334*t51*t85 + 0.1318*(t549*t64 - 1.*t195*t51*t85) + var1[1];
  p_output1[14]=0. - 0.04375*t1064 - 1.*t111*t1334 + t114*t1234*t51 + t1296*t758 + 0.1318*(t111*t195 + t64*t758) + t1386*t770 + t1212*t51*t81 + t1403*t817 + t1465*t825 + t1489*t860 + t1517*t877 + t1557*t919 + t1590*t930 + t1608*t945 - 0.73604*(-1.*t15*t930 + t442*t945) + var1[2];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "T_LeftTarsus_mex.hh"

namespace SymExpression
{

void T_LeftTarsus_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
