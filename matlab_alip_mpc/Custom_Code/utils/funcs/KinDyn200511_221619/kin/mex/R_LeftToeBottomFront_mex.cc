/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:32:46 GMT-04:00
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
  double t186;
  double t328;
  double t359;
  double t343;
  double t381;
  double t307;
  double t443;
  double t446;
  double t451;
  double t352;
  double t399;
  double t418;
  double t452;
  double t121;
  double t696;
  double t728;
  double t734;
  double t234;
  double t266;
  double t288;
  double t428;
  double t534;
  double t535;
  double t574;
  double t580;
  double t652;
  double t735;
  double t810;
  double t691;
  double t750;
  double t755;
  double t115;
  double t812;
  double t823;
  double t863;
  double t980;
  double t763;
  double t941;
  double t943;
  double t99;
  double t1019;
  double t1041;
  double t1085;
  double t1144;
  double t963;
  double t1088;
  double t1100;
  double t62;
  double t1148;
  double t1156;
  double t1161;
  double t1273;
  double t1143;
  double t1226;
  double t1228;
  double t44;
  double t1303;
  double t1307;
  double t1314;
  double t1425;
  double t1430;
  double t1431;
  double t1411;
  double t1415;
  double t1417;
  double t1552;
  double t1558;
  double t1586;
  double t1400;
  double t1420;
  double t1434;
  double t1464;
  double t1466;
  double t1503;
  double t1509;
  double t1595;
  double t1599;
  double t1614;
  double t1615;
  double t1616;
  double t1611;
  double t1621;
  double t1622;
  double t1642;
  double t1653;
  double t1665;
  double t1631;
  double t1677;
  double t1694;
  double t1705;
  double t1708;
  double t1709;
  double t1698;
  double t1710;
  double t1714;
  double t1730;
  double t1733;
  double t1745;
  double t1955;
  double t1958;
  double t1962;
  double t1853;
  double t1862;
  double t1866;
  double t1892;
  double t1901;
  double t1913;
  double t1923;
  double t1963;
  double t1967;
  double t1982;
  double t1987;
  double t1988;
  double t1974;
  double t2006;
  double t2018;
  double t2021;
  double t2032;
  double t2043;
  double t2020;
  double t2058;
  double t2061;
  double t2075;
  double t2077;
  double t2084;
  double t2070;
  double t2086;
  double t2090;
  double t2113;
  double t2123;
  double t2139;
  double t1264;
  double t1324;
  double t1325;
  double t1371;
  double t1373;
  double t1391;
  double t1727;
  double t1747;
  double t1760;
  double t1767;
  double t1797;
  double t1798;
  double t2108;
  double t2144;
  double t2146;
  double t2168;
  double t2172;
  double t2175;
  t186 = Cos(var1[3]);
  t328 = Cos(var1[5]);
  t359 = Sin(var1[4]);
  t343 = Sin(var1[3]);
  t381 = Sin(var1[5]);
  t307 = Cos(var1[6]);
  t443 = t186*t328*t359;
  t446 = t343*t381;
  t451 = t443 + t446;
  t352 = -1.*t328*t343;
  t399 = t186*t359*t381;
  t418 = t352 + t399;
  t452 = Sin(var1[6]);
  t121 = Cos(var1[8]);
  t696 = t307*t451;
  t728 = -1.*t418*t452;
  t734 = t696 + t728;
  t234 = Cos(var1[4]);
  t266 = Cos(var1[7]);
  t288 = t186*t234*t266;
  t428 = t307*t418;
  t534 = t451*t452;
  t535 = t428 + t534;
  t574 = Sin(var1[7]);
  t580 = t535*t574;
  t652 = t288 + t580;
  t735 = Sin(var1[8]);
  t810 = Cos(var1[9]);
  t691 = t121*t652;
  t750 = t734*t735;
  t755 = t691 + t750;
  t115 = Sin(var1[9]);
  t812 = t121*t734;
  t823 = -1.*t652*t735;
  t863 = t812 + t823;
  t980 = Cos(var1[10]);
  t763 = -1.*t115*t755;
  t941 = t810*t863;
  t943 = t763 + t941;
  t99 = Sin(var1[10]);
  t1019 = t810*t755;
  t1041 = t115*t863;
  t1085 = t1019 + t1041;
  t1144 = Cos(var1[11]);
  t963 = t99*t943;
  t1088 = t980*t1085;
  t1100 = t963 + t1088;
  t62 = Sin(var1[11]);
  t1148 = t980*t943;
  t1156 = -1.*t99*t1085;
  t1161 = t1148 + t1156;
  t1273 = Cos(var1[12]);
  t1143 = -1.*t62*t1100;
  t1226 = t1144*t1161;
  t1228 = t1143 + t1226;
  t44 = Sin(var1[12]);
  t1303 = t1144*t1100;
  t1307 = t62*t1161;
  t1314 = t1303 + t1307;
  t1425 = t328*t343*t359;
  t1430 = -1.*t186*t381;
  t1431 = t1425 + t1430;
  t1411 = t186*t328;
  t1415 = t343*t359*t381;
  t1417 = t1411 + t1415;
  t1552 = t307*t1431;
  t1558 = -1.*t1417*t452;
  t1586 = t1552 + t1558;
  t1400 = t234*t266*t343;
  t1420 = t307*t1417;
  t1434 = t1431*t452;
  t1464 = t1420 + t1434;
  t1466 = t1464*t574;
  t1503 = t1400 + t1466;
  t1509 = t121*t1503;
  t1595 = t1586*t735;
  t1599 = t1509 + t1595;
  t1614 = t121*t1586;
  t1615 = -1.*t1503*t735;
  t1616 = t1614 + t1615;
  t1611 = -1.*t115*t1599;
  t1621 = t810*t1616;
  t1622 = t1611 + t1621;
  t1642 = t810*t1599;
  t1653 = t115*t1616;
  t1665 = t1642 + t1653;
  t1631 = t99*t1622;
  t1677 = t980*t1665;
  t1694 = t1631 + t1677;
  t1705 = t980*t1622;
  t1708 = -1.*t99*t1665;
  t1709 = t1705 + t1708;
  t1698 = -1.*t62*t1694;
  t1710 = t1144*t1709;
  t1714 = t1698 + t1710;
  t1730 = t1144*t1694;
  t1733 = t62*t1709;
  t1745 = t1730 + t1733;
  t1955 = t234*t328*t307;
  t1958 = -1.*t234*t381*t452;
  t1962 = t1955 + t1958;
  t1853 = -1.*t266*t359;
  t1862 = t234*t307*t381;
  t1866 = t234*t328*t452;
  t1892 = t1862 + t1866;
  t1901 = t1892*t574;
  t1913 = t1853 + t1901;
  t1923 = t121*t1913;
  t1963 = t1962*t735;
  t1967 = t1923 + t1963;
  t1982 = t121*t1962;
  t1987 = -1.*t1913*t735;
  t1988 = t1982 + t1987;
  t1974 = -1.*t115*t1967;
  t2006 = t810*t1988;
  t2018 = t1974 + t2006;
  t2021 = t810*t1967;
  t2032 = t115*t1988;
  t2043 = t2021 + t2032;
  t2020 = t99*t2018;
  t2058 = t980*t2043;
  t2061 = t2020 + t2058;
  t2075 = t980*t2018;
  t2077 = -1.*t99*t2043;
  t2084 = t2075 + t2077;
  t2070 = -1.*t62*t2061;
  t2086 = t1144*t2084;
  t2090 = t2070 + t2086;
  t2113 = t1144*t2061;
  t2123 = t62*t2084;
  t2139 = t2113 + t2123;
  t1264 = t44*t1228;
  t1324 = t1273*t1314;
  t1325 = t1264 + t1324;
  t1371 = t1273*t1228;
  t1373 = -1.*t44*t1314;
  t1391 = t1371 + t1373;
  t1727 = t44*t1714;
  t1747 = t1273*t1745;
  t1760 = t1727 + t1747;
  t1767 = t1273*t1714;
  t1797 = -1.*t44*t1745;
  t1798 = t1767 + t1797;
  t2108 = t44*t2090;
  t2144 = t1273*t2139;
  t2146 = t2108 + t2144;
  t2168 = t1273*t2090;
  t2172 = -1.*t44*t2139;
  t2175 = t2168 + t2172;
  p_output1[0]=0.642788*t1325 + 0.766044*t1391;
  p_output1[1]=0.642788*t1760 + 0.766044*t1798;
  p_output1[2]=0.642788*t2146 + 0.766044*t2175;
  p_output1[3]=t266*t535 - 1.*t186*t234*t574;
  p_output1[4]=t1464*t266 - 1.*t234*t343*t574;
  p_output1[5]=t1892*t266 + t359*t574;
  p_output1[6]=-0.766044*t1325 + 0.642788*t1391;
  p_output1[7]=-0.766044*t1760 + 0.642788*t1798;
  p_output1[8]=-0.766044*t2146 + 0.642788*t2175;
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

#include "R_LeftToeBottomFront_mex.hh"

namespace SymExpression
{

void R_LeftToeBottomFront_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
