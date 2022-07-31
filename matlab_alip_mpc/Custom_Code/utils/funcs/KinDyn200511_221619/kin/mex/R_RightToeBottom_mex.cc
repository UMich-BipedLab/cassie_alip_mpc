/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:33:17 GMT-04:00
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
  double t225;
  double t307;
  double t209;
  double t230;
  double t319;
  double t460;
  double t252;
  double t336;
  double t338;
  double t196;
  double t462;
  double t468;
  double t470;
  double t509;
  double t380;
  double t482;
  double t486;
  double t171;
  double t566;
  double t618;
  double t629;
  double t640;
  double t641;
  double t646;
  double t687;
  double t717;
  double t793;
  double t835;
  double t500;
  double t794;
  double t804;
  double t150;
  double t841;
  double t844;
  double t892;
  double t961;
  double t824;
  double t905;
  double t922;
  double t119;
  double t975;
  double t1022;
  double t1032;
  double t1100;
  double t956;
  double t1040;
  double t1054;
  double t91;
  double t1104;
  double t1108;
  double t1123;
  double t1164;
  double t1066;
  double t1132;
  double t1143;
  double t62;
  double t1170;
  double t1178;
  double t1179;
  double t1328;
  double t1356;
  double t1365;
  double t1425;
  double t1446;
  double t1448;
  double t1413;
  double t1453;
  double t1459;
  double t1519;
  double t1539;
  double t1560;
  double t1564;
  double t1575;
  double t1589;
  double t1516;
  double t1607;
  double t1608;
  double t1624;
  double t1651;
  double t1672;
  double t1615;
  double t1674;
  double t1679;
  double t1688;
  double t1691;
  double t1715;
  double t1685;
  double t1719;
  double t1720;
  double t1725;
  double t1726;
  double t1749;
  double t1721;
  double t1766;
  double t1769;
  double t1781;
  double t1791;
  double t1804;
  double t1944;
  double t1957;
  double t1958;
  double t1968;
  double t1992;
  double t1999;
  double t2009;
  double t2010;
  double t2031;
  double t1961;
  double t2032;
  double t2033;
  double t2082;
  double t2129;
  double t2140;
  double t2077;
  double t2142;
  double t2144;
  double t2157;
  double t2165;
  double t2177;
  double t2156;
  double t2185;
  double t2223;
  double t2246;
  double t2256;
  double t2273;
  double t2234;
  double t2290;
  double t2292;
  double t2297;
  double t2299;
  double t2307;
  double t1157;
  double t1220;
  double t1227;
  double t1294;
  double t1313;
  double t1319;
  double t1780;
  double t1826;
  double t1829;
  double t1849;
  double t1850;
  double t1851;
  double t2295;
  double t2313;
  double t2317;
  double t2340;
  double t2349;
  double t2390;
  t225 = Cos(var1[5]);
  t307 = Sin(var1[3]);
  t209 = Cos(var1[3]);
  t230 = Sin(var1[4]);
  t319 = Sin(var1[5]);
  t460 = Sin(var1[13]);
  t252 = t209*t225*t230;
  t336 = t307*t319;
  t338 = t252 + t336;
  t196 = Cos(var1[13]);
  t462 = -1.*t225*t307;
  t468 = t209*t230*t319;
  t470 = t462 + t468;
  t509 = Cos(var1[15]);
  t380 = t196*t338;
  t482 = -1.*t460*t470;
  t486 = t380 + t482;
  t171 = Sin(var1[15]);
  t566 = Cos(var1[14]);
  t618 = Cos(var1[4]);
  t629 = t566*t209*t618;
  t640 = Sin(var1[14]);
  t641 = t460*t338;
  t646 = t196*t470;
  t687 = t641 + t646;
  t717 = t640*t687;
  t793 = t629 + t717;
  t835 = Cos(var1[16]);
  t500 = t171*t486;
  t794 = t509*t793;
  t804 = t500 + t794;
  t150 = Sin(var1[16]);
  t841 = t509*t486;
  t844 = -1.*t171*t793;
  t892 = t841 + t844;
  t961 = Cos(var1[17]);
  t824 = -1.*t150*t804;
  t905 = t835*t892;
  t922 = t824 + t905;
  t119 = Sin(var1[17]);
  t975 = t835*t804;
  t1022 = t150*t892;
  t1032 = t975 + t1022;
  t1100 = Cos(var1[18]);
  t956 = t119*t922;
  t1040 = t961*t1032;
  t1054 = t956 + t1040;
  t91 = Sin(var1[18]);
  t1104 = t961*t922;
  t1108 = -1.*t119*t1032;
  t1123 = t1104 + t1108;
  t1164 = Cos(var1[19]);
  t1066 = -1.*t91*t1054;
  t1132 = t1100*t1123;
  t1143 = t1066 + t1132;
  t62 = Sin(var1[19]);
  t1170 = t1100*t1054;
  t1178 = t91*t1123;
  t1179 = t1170 + t1178;
  t1328 = t225*t307*t230;
  t1356 = -1.*t209*t319;
  t1365 = t1328 + t1356;
  t1425 = t209*t225;
  t1446 = t307*t230*t319;
  t1448 = t1425 + t1446;
  t1413 = t196*t1365;
  t1453 = -1.*t460*t1448;
  t1459 = t1413 + t1453;
  t1519 = t566*t618*t307;
  t1539 = t460*t1365;
  t1560 = t196*t1448;
  t1564 = t1539 + t1560;
  t1575 = t640*t1564;
  t1589 = t1519 + t1575;
  t1516 = t171*t1459;
  t1607 = t509*t1589;
  t1608 = t1516 + t1607;
  t1624 = t509*t1459;
  t1651 = -1.*t171*t1589;
  t1672 = t1624 + t1651;
  t1615 = -1.*t150*t1608;
  t1674 = t835*t1672;
  t1679 = t1615 + t1674;
  t1688 = t835*t1608;
  t1691 = t150*t1672;
  t1715 = t1688 + t1691;
  t1685 = t119*t1679;
  t1719 = t961*t1715;
  t1720 = t1685 + t1719;
  t1725 = t961*t1679;
  t1726 = -1.*t119*t1715;
  t1749 = t1725 + t1726;
  t1721 = -1.*t91*t1720;
  t1766 = t1100*t1749;
  t1769 = t1721 + t1766;
  t1781 = t1100*t1720;
  t1791 = t91*t1749;
  t1804 = t1781 + t1791;
  t1944 = t196*t618*t225;
  t1957 = -1.*t618*t460*t319;
  t1958 = t1944 + t1957;
  t1968 = -1.*t566*t230;
  t1992 = t618*t225*t460;
  t1999 = t196*t618*t319;
  t2009 = t1992 + t1999;
  t2010 = t640*t2009;
  t2031 = t1968 + t2010;
  t1961 = t171*t1958;
  t2032 = t509*t2031;
  t2033 = t1961 + t2032;
  t2082 = t509*t1958;
  t2129 = -1.*t171*t2031;
  t2140 = t2082 + t2129;
  t2077 = -1.*t150*t2033;
  t2142 = t835*t2140;
  t2144 = t2077 + t2142;
  t2157 = t835*t2033;
  t2165 = t150*t2140;
  t2177 = t2157 + t2165;
  t2156 = t119*t2144;
  t2185 = t961*t2177;
  t2223 = t2156 + t2185;
  t2246 = t961*t2144;
  t2256 = -1.*t119*t2177;
  t2273 = t2246 + t2256;
  t2234 = -1.*t91*t2223;
  t2290 = t1100*t2273;
  t2292 = t2234 + t2290;
  t2297 = t1100*t2223;
  t2299 = t91*t2273;
  t2307 = t2297 + t2299;
  t1157 = t62*t1143;
  t1220 = t1164*t1179;
  t1227 = t1157 + t1220;
  t1294 = t1164*t1143;
  t1313 = -1.*t62*t1179;
  t1319 = t1294 + t1313;
  t1780 = t62*t1769;
  t1826 = t1164*t1804;
  t1829 = t1780 + t1826;
  t1849 = t1164*t1769;
  t1850 = -1.*t62*t1804;
  t1851 = t1849 + t1850;
  t2295 = t62*t2292;
  t2313 = t1164*t2307;
  t2317 = t2295 + t2313;
  t2340 = t1164*t2292;
  t2349 = -1.*t62*t2307;
  t2390 = t2340 + t2349;
  p_output1[0]=0.642788*t1227 + 0.766044*t1319;
  p_output1[1]=0.642788*t1829 + 0.766044*t1851;
  p_output1[2]=0.642788*t2317 + 0.766044*t2390;
  p_output1[3]=-1.*t209*t618*t640 + t566*t687;
  p_output1[4]=t1564*t566 - 1.*t307*t618*t640;
  p_output1[5]=t2009*t566 + t230*t640;
  p_output1[6]=-0.766044*t1227 + 0.642788*t1319;
  p_output1[7]=-0.766044*t1829 + 0.642788*t1851;
  p_output1[8]=-0.766044*t2317 + 0.642788*t2390;
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

#include "R_RightToeBottom_mex.hh"

namespace SymExpression
{

void R_RightToeBottom_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
