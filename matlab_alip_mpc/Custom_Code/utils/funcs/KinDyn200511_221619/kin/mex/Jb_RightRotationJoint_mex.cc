/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:05 GMT-04:00
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
  double t142;
  double t54;
  double t59;
  double t184;
  double t20;
  double t835;
  double t339;
  double t392;
  double t910;
  double t942;
  double t851;
  double t857;
  double t1003;
  double t1067;
  double t1469;
  double t1472;
  double t1437;
  double t1463;
  double t66;
  double t241;
  double t283;
  double t419;
  double t443;
  double t478;
  double t488;
  double t649;
  double t886;
  double t967;
  double t981;
  double t1010;
  double t1096;
  double t1097;
  double t1104;
  double t1271;
  double t1279;
  double t1341;
  double t1468;
  double t1497;
  double t1515;
  double t1527;
  double t1599;
  double t1661;
  double t1687;
  double t1766;
  double t1774;
  double t1813;
  double t1968;
  double t1970;
  double t1979;
  double t2003;
  double t2004;
  double t2039;
  double t2058;
  double t2075;
  double t2083;
  double t2085;
  double t1981;
  double t1996;
  double t1999;
  double t2142;
  double t2146;
  double t2148;
  double t2153;
  double t2174;
  double t2025;
  double t2086;
  double t2091;
  double t2134;
  double t2186;
  double t2187;
  double t2192;
  double t2207;
  double t2254;
  double t2298;
  double t2141;
  double t2182;
  double t2183;
  double t2194;
  double t2300;
  double t2308;
  double t2341;
  double t2350;
  double t2352;
  double t1966;
  double t1967;
  double t2185;
  double t2404;
  double t2537;
  double t2468;
  double t2576;
  double t2625;
  double t2714;
  double t2789;
  t142 = Cos(var1[13]);
  t54 = Cos(var1[5]);
  t59 = Sin(var1[13]);
  t184 = Sin(var1[5]);
  t20 = Sin(var1[3]);
  t835 = Sin(var1[14]);
  t339 = Cos(var1[3]);
  t392 = Sin(var1[4]);
  t910 = t59*t835;
  t942 = 0. + t910;
  t851 = t142*t835;
  t857 = 0. + t851;
  t1003 = Cos(var1[14]);
  t1067 = Cos(var1[4]);
  t1469 = -1.*t1003*t59;
  t1472 = 0. + t1469;
  t1437 = -1.*t142*t1003;
  t1463 = 0. + t1437;
  t66 = t54*t59;
  t241 = t142*t184;
  t283 = 0. + t66 + t241;
  t419 = -1.*t142*t54;
  t443 = t59*t184;
  t478 = 0. + t419 + t443;
  t488 = t392*t478;
  t649 = 0. + t488;
  t886 = t54*t857;
  t967 = -1.*t942*t184;
  t981 = 0. + t886 + t967;
  t1010 = 0. + t1003;
  t1096 = t1010*t1067;
  t1097 = t54*t942;
  t1104 = t857*t184;
  t1271 = 0. + t1097 + t1104;
  t1279 = t392*t1271;
  t1341 = 0. + t1096 + t1279;
  t1468 = t1463*t54;
  t1497 = -1.*t1472*t184;
  t1515 = 0. + t1468 + t1497;
  t1527 = 0. + t835;
  t1599 = t1067*t1527;
  t1661 = t54*t1472;
  t1687 = t1463*t184;
  t1766 = 0. + t1661 + t1687;
  t1774 = t392*t1766;
  t1813 = 0. + t1599 + t1774;
  t1968 = -1.*t1010*t392;
  t1970 = t1067*t1271;
  t1979 = 0. + t1968 + t1970;
  t2003 = -1.*t142;
  t2004 = 1. + t2003;
  t2039 = -1.*t1003;
  t2058 = 1. + t2039;
  t2075 = -0.135*t2058;
  t2083 = -0.135*t1003;
  t2085 = 0. + t2075 + t2083;
  t1981 = -1.*t1527*t392;
  t1996 = t1067*t1766;
  t1999 = 0. + t1981 + t1996;
  t2142 = 0.07996*t2004;
  t2146 = -0.01004*t142;
  t2148 = 0.135*t59;
  t2153 = t2085*t59;
  t2174 = 0. + t2142 + t2146 + t2148 + t2153;
  t2025 = -0.135*t2004;
  t2086 = t142*t2085;
  t2091 = 0.09*t59;
  t2134 = 0. + t2025 + t2086 + t2091;
  t2186 = -0.08055*t2058;
  t2187 = -0.08055*t1003;
  t2192 = 0. + t2186 + t2187;
  t2207 = t54*t2174;
  t2254 = t2134*t184;
  t2298 = 0. + t2207 + t2254;
  t2141 = t54*t2134;
  t2182 = -1.*t2174*t184;
  t2183 = 0. + t2141 + t2182;
  t2194 = -1.*t2192*t392;
  t2300 = t1067*t2298;
  t2308 = 0. + t2194 + t2300;
  t2341 = t2192*t1067;
  t2350 = t392*t2298;
  t2352 = 0. + t2341 + t2350;
  t1966 = t1067*t478;
  t1967 = 0. + t1966;
  t2185 = t2183*t1515;
  t2404 = -1.*t2183*t981;
  t2537 = t283*t2183;
  t2468 = -1.*t2183*t1515;
  t2576 = -1.*t283*t2183;
  t2625 = t2183*t981;
  t2714 = t2192*t1527;
  t2789 = -1.*t2192*t1010;
  p_output1[0]=0. - 1.*t20*t283 + t339*t649;
  p_output1[1]=0. + t1341*t339 - 1.*t20*t981;
  p_output1[2]=0. - 1.*t1515*t20 + t1813*t339;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t283*t339 + t20*t649;
  p_output1[7]=0. + t1341*t20 + t339*t981;
  p_output1[8]=0. + t1813*t20 + t1515*t339;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t1967;
  p_output1[13]=t1979;
  p_output1[14]=t1999;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t1979*(t2185 + t1999*t2308 + t1813*t2352) + t1999*(-1.*t1979*t2308 - 1.*t1341*t2352 + t2404);
  p_output1[19]=t1967*(-1.*t1999*t2308 - 1.*t1813*t2352 + t2468) + t1999*(t1967*t2308 + t2537 + t2352*t649);
  p_output1[20]=t1967*(t1979*t2308 + t1341*t2352 + t2625) + t1979*(-1.*t1967*t2308 + t2576 - 1.*t2352*t649);
  p_output1[21]=t1967;
  p_output1[22]=t1979;
  p_output1[23]=t1999;
  p_output1[24]=0. + t1515*(-1.*t1271*t2298 + t2404 + t2789) + (t2185 + t1766*t2298 + t2714)*t981;
  p_output1[25]=(-1.*t1527*t2192 - 1.*t1766*t2298 + t2468)*t283 + t1515*(0. + t2537 + t2298*t478);
  p_output1[26]=(t1010*t2192 + t1271*t2298 + t2625)*t283 + (0. + t2576 - 1.*t2298*t478)*t981;
  p_output1[27]=t283;
  p_output1[28]=t981;
  p_output1[29]=t1515;
  p_output1[30]=0. + t1010*(t1463*t2134 + t1472*t2174 + t2714) + t1527*(t2789 - 1.*t2134*t857 - 1.*t2174*t942);
  p_output1[31]=0. + t1527*(0. - 1.*t142*t2174 + t2134*t59);
  p_output1[32]=0. + t1010*(0. + t142*t2174 - 1.*t2134*t59);
  p_output1[33]=0.;
  p_output1[34]=t1010;
  p_output1[35]=t1527;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=0;
  p_output1[40]=0;
  p_output1[41]=0;
  p_output1[42]=0;
  p_output1[43]=0;
  p_output1[44]=0;
  p_output1[45]=0;
  p_output1[46]=0;
  p_output1[47]=0;
  p_output1[48]=0;
  p_output1[49]=0;
  p_output1[50]=0;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
  p_output1[60]=0;
  p_output1[61]=0;
  p_output1[62]=0;
  p_output1[63]=0;
  p_output1[64]=0;
  p_output1[65]=0;
  p_output1[66]=0;
  p_output1[67]=0;
  p_output1[68]=0;
  p_output1[69]=0;
  p_output1[70]=0;
  p_output1[71]=0;
  p_output1[72]=0;
  p_output1[73]=0;
  p_output1[74]=0;
  p_output1[75]=0;
  p_output1[76]=0;
  p_output1[77]=0;
  p_output1[78]=-0.135 + t835*(0. - 1.*t1003*t2192 - 1.*t2085*t835) + t1003*(0. - 1.*t1003*t2085 + t2192*t835);
  p_output1[79]=0. + 0.09*t835;
  p_output1[80]=0. - 0.09*t1003;
  p_output1[81]=0.;
  p_output1[82]=t1010;
  p_output1[83]=t1527;
  p_output1[84]=0.;
  p_output1[85]=0.;
  p_output1[86]=0.;
  p_output1[87]=-1.;
  p_output1[88]=0.;
  p_output1[89]=0.;
  p_output1[90]=0;
  p_output1[91]=0;
  p_output1[92]=0;
  p_output1[93]=0;
  p_output1[94]=0;
  p_output1[95]=0;
  p_output1[96]=0;
  p_output1[97]=0;
  p_output1[98]=0;
  p_output1[99]=0;
  p_output1[100]=0;
  p_output1[101]=0;
  p_output1[102]=0;
  p_output1[103]=0;
  p_output1[104]=0;
  p_output1[105]=0;
  p_output1[106]=0;
  p_output1[107]=0;
  p_output1[108]=0;
  p_output1[109]=0;
  p_output1[110]=0;
  p_output1[111]=0;
  p_output1[112]=0;
  p_output1[113]=0;
  p_output1[114]=0;
  p_output1[115]=0;
  p_output1[116]=0;
  p_output1[117]=0;
  p_output1[118]=0;
  p_output1[119]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jb_RightRotationJoint_mex.hh"

namespace SymExpression
{

void Jb_RightRotationJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
