/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:34:19 GMT-04:00
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
  double t239;
  double t361;
  double t220;
  double t282;
  double t363;
  double t456;
  double t329;
  double t383;
  double t404;
  double t157;
  double t482;
  double t499;
  double t535;
  double t603;
  double t452;
  double t579;
  double t581;
  double t145;
  double t606;
  double t611;
  double t636;
  double t685;
  double t695;
  double t703;
  double t709;
  double t741;
  double t788;
  double t836;
  double t595;
  double t789;
  double t802;
  double t133;
  double t861;
  double t893;
  double t896;
  double t996;
  double t804;
  double t901;
  double t936;
  double t130;
  double t997;
  double t1010;
  double t1022;
  double t1067;
  double t992;
  double t1038;
  double t1049;
  double t91;
  double t1084;
  double t1097;
  double t1104;
  double t1140;
  double t1054;
  double t1119;
  double t1132;
  double t16;
  double t1143;
  double t1153;
  double t1163;
  double t1260;
  double t1261;
  double t1270;
  double t1281;
  double t1298;
  double t1345;
  double t1274;
  double t1367;
  double t1370;
  double t1421;
  double t1422;
  double t1443;
  double t1447;
  double t1450;
  double t1488;
  double t1389;
  double t1509;
  double t1515;
  double t1551;
  double t1557;
  double t1595;
  double t1535;
  double t1599;
  double t1605;
  double t1619;
  double t1625;
  double t1628;
  double t1614;
  double t1630;
  double t1632;
  double t1639;
  double t1646;
  double t1649;
  double t1638;
  double t1660;
  double t1661;
  double t1692;
  double t1694;
  double t1698;
  double t1772;
  double t1774;
  double t1834;
  double t1851;
  double t1852;
  double t1873;
  double t1933;
  double t1945;
  double t1967;
  double t1846;
  double t1998;
  double t2025;
  double t2037;
  double t2038;
  double t2039;
  double t2036;
  double t2049;
  double t2054;
  double t2087;
  double t2088;
  double t2090;
  double t2061;
  double t2099;
  double t2103;
  double t2116;
  double t2120;
  double t2125;
  double t2105;
  double t2129;
  double t2139;
  double t2194;
  double t2210;
  double t2238;
  double t1134;
  double t1168;
  double t1170;
  double t1189;
  double t1208;
  double t1231;
  double t1667;
  double t1704;
  double t1717;
  double t1748;
  double t1750;
  double t1755;
  double t2152;
  double t2249;
  double t2258;
  double t2297;
  double t2320;
  double t2325;
  t239 = Cos(var1[5]);
  t361 = Sin(var1[3]);
  t220 = Cos(var1[3]);
  t282 = Sin(var1[4]);
  t363 = Sin(var1[5]);
  t456 = Sin(var1[13]);
  t329 = t220*t239*t282;
  t383 = t361*t363;
  t404 = t329 + t383;
  t157 = Cos(var1[13]);
  t482 = -1.*t239*t361;
  t499 = t220*t282*t363;
  t535 = t482 + t499;
  t603 = Cos(var1[15]);
  t452 = t157*t404;
  t579 = -1.*t456*t535;
  t581 = t452 + t579;
  t145 = Sin(var1[15]);
  t606 = Cos(var1[14]);
  t611 = Cos(var1[4]);
  t636 = t606*t220*t611;
  t685 = Sin(var1[14]);
  t695 = t456*t404;
  t703 = t157*t535;
  t709 = t695 + t703;
  t741 = t685*t709;
  t788 = t636 + t741;
  t836 = Cos(var1[16]);
  t595 = t145*t581;
  t789 = t603*t788;
  t802 = t595 + t789;
  t133 = Sin(var1[16]);
  t861 = t603*t581;
  t893 = -1.*t145*t788;
  t896 = t861 + t893;
  t996 = Cos(var1[17]);
  t804 = -1.*t133*t802;
  t901 = t836*t896;
  t936 = t804 + t901;
  t130 = Sin(var1[17]);
  t997 = t836*t802;
  t1010 = t133*t896;
  t1022 = t997 + t1010;
  t1067 = Cos(var1[18]);
  t992 = t130*t936;
  t1038 = t996*t1022;
  t1049 = t992 + t1038;
  t91 = Sin(var1[18]);
  t1084 = t996*t936;
  t1097 = -1.*t130*t1022;
  t1104 = t1084 + t1097;
  t1140 = Cos(var1[19]);
  t1054 = -1.*t91*t1049;
  t1119 = t1067*t1104;
  t1132 = t1054 + t1119;
  t16 = Sin(var1[19]);
  t1143 = t1067*t1049;
  t1153 = t91*t1104;
  t1163 = t1143 + t1153;
  t1260 = t239*t361*t282;
  t1261 = -1.*t220*t363;
  t1270 = t1260 + t1261;
  t1281 = t220*t239;
  t1298 = t361*t282*t363;
  t1345 = t1281 + t1298;
  t1274 = t157*t1270;
  t1367 = -1.*t456*t1345;
  t1370 = t1274 + t1367;
  t1421 = t606*t611*t361;
  t1422 = t456*t1270;
  t1443 = t157*t1345;
  t1447 = t1422 + t1443;
  t1450 = t685*t1447;
  t1488 = t1421 + t1450;
  t1389 = t145*t1370;
  t1509 = t603*t1488;
  t1515 = t1389 + t1509;
  t1551 = t603*t1370;
  t1557 = -1.*t145*t1488;
  t1595 = t1551 + t1557;
  t1535 = -1.*t133*t1515;
  t1599 = t836*t1595;
  t1605 = t1535 + t1599;
  t1619 = t836*t1515;
  t1625 = t133*t1595;
  t1628 = t1619 + t1625;
  t1614 = t130*t1605;
  t1630 = t996*t1628;
  t1632 = t1614 + t1630;
  t1639 = t996*t1605;
  t1646 = -1.*t130*t1628;
  t1649 = t1639 + t1646;
  t1638 = -1.*t91*t1632;
  t1660 = t1067*t1649;
  t1661 = t1638 + t1660;
  t1692 = t1067*t1632;
  t1694 = t91*t1649;
  t1698 = t1692 + t1694;
  t1772 = t157*t611*t239;
  t1774 = -1.*t611*t456*t363;
  t1834 = t1772 + t1774;
  t1851 = -1.*t606*t282;
  t1852 = t611*t239*t456;
  t1873 = t157*t611*t363;
  t1933 = t1852 + t1873;
  t1945 = t685*t1933;
  t1967 = t1851 + t1945;
  t1846 = t145*t1834;
  t1998 = t603*t1967;
  t2025 = t1846 + t1998;
  t2037 = t603*t1834;
  t2038 = -1.*t145*t1967;
  t2039 = t2037 + t2038;
  t2036 = -1.*t133*t2025;
  t2049 = t836*t2039;
  t2054 = t2036 + t2049;
  t2087 = t836*t2025;
  t2088 = t133*t2039;
  t2090 = t2087 + t2088;
  t2061 = t130*t2054;
  t2099 = t996*t2090;
  t2103 = t2061 + t2099;
  t2116 = t996*t2054;
  t2120 = -1.*t130*t2090;
  t2125 = t2116 + t2120;
  t2105 = -1.*t91*t2103;
  t2129 = t1067*t2125;
  t2139 = t2105 + t2129;
  t2194 = t1067*t2103;
  t2210 = t91*t2125;
  t2238 = t2194 + t2210;
  t1134 = t16*t1132;
  t1168 = t1140*t1163;
  t1170 = t1134 + t1168;
  t1189 = t1140*t1132;
  t1208 = -1.*t16*t1163;
  t1231 = t1189 + t1208;
  t1667 = t16*t1661;
  t1704 = t1140*t1698;
  t1717 = t1667 + t1704;
  t1748 = t1140*t1661;
  t1750 = -1.*t16*t1698;
  t1755 = t1748 + t1750;
  t2152 = t16*t2139;
  t2249 = t1140*t2238;
  t2258 = t2152 + t2249;
  t2297 = t1140*t2139;
  t2320 = -1.*t16*t2238;
  t2325 = t2297 + t2320;
  p_output1[0]=0.642788*t1170 + 0.766044*t1231;
  p_output1[1]=0.642788*t1717 + 0.766044*t1755;
  p_output1[2]=0.642788*t2258 + 0.766044*t2325;
  p_output1[3]=-1.*t220*t611*t685 + t606*t709;
  p_output1[4]=t1447*t606 - 1.*t361*t611*t685;
  p_output1[5]=t1933*t606 + t282*t685;
  p_output1[6]=-0.766044*t1170 + 0.642788*t1231;
  p_output1[7]=-0.766044*t1717 + 0.642788*t1755;
  p_output1[8]=-0.766044*t2258 + 0.642788*t2325;
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

#include "R_RightToeBottomFront_mex.hh"

namespace SymExpression
{

void R_RightToeBottomFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
