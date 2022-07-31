/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:39 GMT-04:00
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
  double t246;
  double t335;
  double t390;
  double t356;
  double t395;
  double t333;
  double t452;
  double t468;
  double t470;
  double t363;
  double t403;
  double t404;
  double t483;
  double t234;
  double t629;
  double t639;
  double t664;
  double t253;
  double t285;
  double t316;
  double t445;
  double t503;
  double t534;
  double t556;
  double t557;
  double t570;
  double t691;
  double t847;
  double t599;
  double t711;
  double t774;
  double t85;
  double t850;
  double t874;
  double t877;
  double t931;
  double t818;
  double t907;
  double t909;
  double t48;
  double t946;
  double t957;
  double t963;
  double t1019;
  double t929;
  double t976;
  double t990;
  double t36;
  double t1044;
  double t1075;
  double t1114;
  double t8;
  double t1286;
  double t1293;
  double t1298;
  double t1245;
  double t1250;
  double t1253;
  double t1344;
  double t1357;
  double t1370;
  double t1232;
  double t1274;
  double t1307;
  double t1311;
  double t1328;
  double t1329;
  double t1337;
  double t1375;
  double t1377;
  double t1389;
  double t1391;
  double t1407;
  double t1387;
  double t1410;
  double t1411;
  double t1449;
  double t1477;
  double t1488;
  double t1178;
  double t1432;
  double t1498;
  double t1508;
  double t1524;
  double t1531;
  double t1541;
  double t1744;
  double t1755;
  double t1763;
  double t1658;
  double t1675;
  double t1679;
  double t1690;
  double t1696;
  double t1721;
  double t1732;
  double t1784;
  double t1785;
  double t1792;
  double t1795;
  double t1798;
  double t1786;
  double t1802;
  double t1805;
  double t1821;
  double t1829;
  double t1836;
  double t1807;
  double t1838;
  double t1855;
  double t1880;
  double t1889;
  double t1890;
  double t994;
  double t1119;
  double t1137;
  double t1184;
  double t1188;
  double t1217;
  double t1513;
  double t1545;
  double t1548;
  double t1596;
  double t1624;
  double t1635;
  double t1871;
  double t1899;
  double t1908;
  double t1921;
  double t1922;
  double t1929;
  t246 = Cos(var1[3]);
  t335 = Cos(var1[5]);
  t390 = Sin(var1[4]);
  t356 = Sin(var1[3]);
  t395 = Sin(var1[5]);
  t333 = Cos(var1[6]);
  t452 = t246*t335*t390;
  t468 = t356*t395;
  t470 = t452 + t468;
  t363 = -1.*t335*t356;
  t403 = t246*t390*t395;
  t404 = t363 + t403;
  t483 = Sin(var1[6]);
  t234 = Cos(var1[8]);
  t629 = t333*t470;
  t639 = -1.*t404*t483;
  t664 = t629 + t639;
  t253 = Cos(var1[4]);
  t285 = Cos(var1[7]);
  t316 = t246*t253*t285;
  t445 = t333*t404;
  t503 = t470*t483;
  t534 = t445 + t503;
  t556 = Sin(var1[7]);
  t557 = t534*t556;
  t570 = t316 + t557;
  t691 = Sin(var1[8]);
  t847 = Cos(var1[9]);
  t599 = t234*t570;
  t711 = t664*t691;
  t774 = t599 + t711;
  t85 = Sin(var1[9]);
  t850 = t234*t664;
  t874 = -1.*t570*t691;
  t877 = t850 + t874;
  t931 = Cos(var1[10]);
  t818 = -1.*t85*t774;
  t907 = t847*t877;
  t909 = t818 + t907;
  t48 = Sin(var1[10]);
  t946 = t847*t774;
  t957 = t85*t877;
  t963 = t946 + t957;
  t1019 = Cos(var1[11]);
  t929 = t48*t909;
  t976 = t931*t963;
  t990 = t929 + t976;
  t36 = Sin(var1[11]);
  t1044 = t931*t909;
  t1075 = -1.*t48*t963;
  t1114 = t1044 + t1075;
  t8 = Cos(var1[12]);
  t1286 = t335*t356*t390;
  t1293 = -1.*t246*t395;
  t1298 = t1286 + t1293;
  t1245 = t246*t335;
  t1250 = t356*t390*t395;
  t1253 = t1245 + t1250;
  t1344 = t333*t1298;
  t1357 = -1.*t1253*t483;
  t1370 = t1344 + t1357;
  t1232 = t253*t285*t356;
  t1274 = t333*t1253;
  t1307 = t1298*t483;
  t1311 = t1274 + t1307;
  t1328 = t1311*t556;
  t1329 = t1232 + t1328;
  t1337 = t234*t1329;
  t1375 = t1370*t691;
  t1377 = t1337 + t1375;
  t1389 = t234*t1370;
  t1391 = -1.*t1329*t691;
  t1407 = t1389 + t1391;
  t1387 = -1.*t85*t1377;
  t1410 = t847*t1407;
  t1411 = t1387 + t1410;
  t1449 = t847*t1377;
  t1477 = t85*t1407;
  t1488 = t1449 + t1477;
  t1178 = Sin(var1[12]);
  t1432 = t48*t1411;
  t1498 = t931*t1488;
  t1508 = t1432 + t1498;
  t1524 = t931*t1411;
  t1531 = -1.*t48*t1488;
  t1541 = t1524 + t1531;
  t1744 = t253*t335*t333;
  t1755 = -1.*t253*t395*t483;
  t1763 = t1744 + t1755;
  t1658 = -1.*t285*t390;
  t1675 = t253*t333*t395;
  t1679 = t253*t335*t483;
  t1690 = t1675 + t1679;
  t1696 = t1690*t556;
  t1721 = t1658 + t1696;
  t1732 = t234*t1721;
  t1784 = t1763*t691;
  t1785 = t1732 + t1784;
  t1792 = t234*t1763;
  t1795 = -1.*t1721*t691;
  t1798 = t1792 + t1795;
  t1786 = -1.*t85*t1785;
  t1802 = t847*t1798;
  t1805 = t1786 + t1802;
  t1821 = t847*t1785;
  t1829 = t85*t1798;
  t1836 = t1821 + t1829;
  t1807 = t48*t1805;
  t1838 = t931*t1836;
  t1855 = t1807 + t1838;
  t1880 = t931*t1805;
  t1889 = -1.*t48*t1836;
  t1890 = t1880 + t1889;
  t994 = -1.*t36*t990;
  t1119 = t1019*t1114;
  t1137 = t994 + t1119;
  t1184 = t1019*t990;
  t1188 = t36*t1114;
  t1217 = t1184 + t1188;
  t1513 = -1.*t36*t1508;
  t1545 = t1019*t1541;
  t1548 = t1513 + t1545;
  t1596 = t1019*t1508;
  t1624 = t36*t1541;
  t1635 = t1596 + t1624;
  t1871 = -1.*t36*t1855;
  t1899 = t1019*t1890;
  t1908 = t1871 + t1899;
  t1921 = t1019*t1855;
  t1922 = t36*t1890;
  t1929 = t1921 + t1922;
  p_output1[0]=t1178*t1217 - 1.*t1137*t8;
  p_output1[1]=t1178*t1635 - 1.*t1548*t8;
  p_output1[2]=t1178*t1929 - 1.*t1908*t8;
  p_output1[3]=t1137*t1178 + t1217*t8;
  p_output1[4]=t1178*t1548 + t1635*t8;
  p_output1[5]=t1178*t1908 + t1929*t8;
  p_output1[6]=-1.*t285*t534 + t246*t253*t556;
  p_output1[7]=-1.*t1311*t285 + t253*t356*t556;
  p_output1[8]=-1.*t1690*t285 - 1.*t390*t556;
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

#include "R_LeftToeJoint_mex.hh"

namespace SymExpression
{

void R_LeftToeJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
