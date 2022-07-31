/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:26 GMT-04:00
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
  double t111;
  double t181;
  double t415;
  double t450;
  double t418;
  double t459;
  double t612;
  double t676;
  double t532;
  double t537;
  double t550;
  double t564;
  double t601;
  double t605;
  double t610;
  double t626;
  double t679;
  double t681;
  double t704;
  double t715;
  double t768;
  double t1132;
  double t1116;
  double t813;
  double t836;
  double t840;
  double t1183;
  double t1221;
  double t888;
  double t895;
  double t897;
  double t1226;
  double t1237;
  double t1282;
  double t1297;
  double t1311;
  double t1316;
  double t1176;
  double t1177;
  double t1182;
  double t85;
  double t1553;
  double t1557;
  double t1558;
  double t1388;
  double t1396;
  double t1397;
  double t1124;
  double t1137;
  double t1150;
  double t1362;
  double t1368;
  double t1947;
  double t1956;
  double t1376;
  double t1976;
  double t1977;
  double t1679;
  double t1683;
  double t1685;
  double t1586;
  double t1601;
  double t1606;
  double t1982;
  double t1995;
  double t2005;
  double t1291;
  double t1327;
  double t2015;
  double t2027;
  double t2033;
  double t1534;
  double t1548;
  double t2067;
  double t2076;
  double t2082;
  double t1465;
  double t1480;
  double t1860;
  double t1886;
  double t2041;
  double t2046;
  double t2052;
  double t2129;
  double t2132;
  double t2136;
  double t1708;
  double t1713;
  double t1771;
  t111 = Cos(var1[3]);
  t181 = Sin(var1[3]);
  t415 = Cos(var1[4]);
  t450 = Sin(var1[4]);
  t418 = -1.*var1[2]*t415*t181;
  t459 = -1.*var1[1]*t450;
  t612 = Cos(var1[5]);
  t676 = Sin(var1[5]);
  t532 = var1[2]*t111*t415;
  t537 = var1[0]*t450;
  t550 = -1.*var1[1]*t111*t415;
  t564 = var1[0]*t415*t181;
  t601 = t111*t415;
  t605 = t415*t181;
  t610 = -1.*t450;
  t626 = t111*t612*t450;
  t679 = t181*t676;
  t681 = t626 + t679;
  t704 = -1.*t612*t181;
  t715 = t111*t450*t676;
  t768 = t704 + t715;
  t1132 = Cos(var1[13]);
  t1116 = Sin(var1[13]);
  t813 = t612*t181*t450;
  t836 = -1.*t111*t676;
  t840 = t813 + t836;
  t1183 = -1.*t1132;
  t1221 = 1. + t1183;
  t888 = t111*t612;
  t895 = t181*t450*t676;
  t897 = t888 + t895;
  t1226 = 0.07996*t1221;
  t1237 = 0.135*t1116;
  t1282 = 0. + t1226 + t1237;
  t1297 = -0.135*t1221;
  t1311 = 0.07996*t1116;
  t1316 = 0. + t1297 + t1311;
  t1176 = t1132*t415*t612;
  t1177 = -1.*t415*t1116*t676;
  t1182 = t1176 + t1177;
  t85 = -1.*var1[0];
  t1553 = t1132*t681;
  t1557 = -1.*t1116*t768;
  t1558 = t1553 + t1557;
  t1388 = t1132*t840;
  t1396 = -1.*t1116*t897;
  t1397 = t1388 + t1396;
  t1124 = t1116*t681;
  t1137 = t1132*t768;
  t1150 = t1124 + t1137;
  t1362 = -1.*var1[2];
  t1368 = -1.*t415*t612*t1282;
  t1947 = Cos(var1[14]);
  t1956 = Sin(var1[14]);
  t1376 = -1.*t415*t1316*t676;
  t1976 = -1.*t1947;
  t1977 = 1. + t1976;
  t1679 = t415*t612*t1116;
  t1683 = t1132*t415*t676;
  t1685 = t1679 + t1683;
  t1586 = t1116*t840;
  t1601 = t1132*t897;
  t1606 = t1586 + t1601;
  t1982 = -0.08055*t1977;
  t1995 = -0.135*t1956;
  t2005 = 0. + t1982 + t1995;
  t1291 = t1282*t840;
  t1327 = t1316*t897;
  t2015 = -0.135*t1977;
  t2027 = 0.08055*t1956;
  t2033 = 0. + t2015 + t2027;
  t1534 = t415*t612*t1282;
  t1548 = t415*t1316*t676;
  t2067 = t1956*t450;
  t2076 = t1947*t1685;
  t2082 = t2067 + t2076;
  t1465 = -1.*t1282*t681;
  t1480 = -1.*t1316*t768;
  t1860 = t1282*t681;
  t1886 = t1316*t768;
  t2041 = -1.*t415*t1956*t181;
  t2046 = t1947*t1606;
  t2052 = t2041 + t2046;
  t2129 = -1.*t111*t415*t1956;
  t2132 = t1947*t1150;
  t2136 = t2129 + t2132;
  t1708 = -1.*var1[1];
  t1713 = -1.*t1282*t840;
  t1771 = -1.*t1316*t897;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=t85;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t111*var1[2];
  p_output1[25]=-1.*t181*var1[2];
  p_output1[26]=t111*var1[0] + t181*var1[1];
  p_output1[27]=-1.*t181;
  p_output1[28]=t111;
  p_output1[29]=0;
  p_output1[30]=t418 + t459;
  p_output1[31]=t532 + t537;
  p_output1[32]=t550 + t564;
  p_output1[33]=t601;
  p_output1[34]=t605;
  p_output1[35]=t610;
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
  p_output1[78]=t418 + t459 + 0.135*t681 + 0.07996*t768;
  p_output1[79]=t532 + t537 + 0.135*t840 + 0.07996*t897;
  p_output1[80]=t550 + t564 + 0.135*t415*t612 + 0.07996*t415*t676;
  p_output1[81]=0. + t601;
  p_output1[82]=0. + t605;
  p_output1[83]=0. + t610;
  p_output1[84]=0.08055*t1150 + (0. + t1362 + t1368 + t1376)*t1397 - 0.135*t111*t415 + t1182*(0. + t1291 + t1327 + var1[1]);
  p_output1[85]=0.08055*t1606 - 0.135*t181*t415 + t1182*(0. + t1465 + t1480 + t85) + t1558*(0. + t1534 + t1548 + var1[2]);
  p_output1[86]=0.08055*t1685 + t1558*(0. + t1708 + t1713 + t1771) + 0.135*t450 + t1397*(0. + t1860 + t1886 + var1[0]);
  p_output1[87]=0. + t1553 + t1557;
  p_output1[88]=0. + t1388 + t1396;
  p_output1[89]=0. + t1176 + t1177;
  p_output1[90]=0.08055*t1558 - 0.01004*(t1150*t1956 + t111*t1947*t415) - 1.*t2052*(0. + t1362 + t1368 + t1376 - 1.*t1685*t2033 + t2005*t450) - 1.*t2082*(0. + t1291 + t1327 + t1606*t2033 + t181*t2005*t415 + var1[1]);
  p_output1[91]=0.08055*t1397 - 0.01004*(t1606*t1956 + t181*t1947*t415) - 1.*t2082*(0. + t1465 + t1480 - 1.*t1150*t2033 - 1.*t111*t2005*t415 + t85) - 1.*t2136*(0. + t1534 + t1548 + t1685*t2033 - 1.*t2005*t450 + var1[2]);
  p_output1[92]=0.08055*t1182 - 1.*t2136*(0. + t1708 + t1713 + t1771 - 1.*t1606*t2033 - 1.*t181*t2005*t415) - 0.01004*(t1685*t1956 - 1.*t1947*t450) - 1.*t2052*(0. + t1860 + t1886 + t1150*t2033 + t111*t2005*t415 + var1[0]);
  p_output1[93]=0. - 1.*t1150*t1947 + t111*t1956*t415;
  p_output1[94]=0. - 1.*t1606*t1947 + t181*t1956*t415;
  p_output1[95]=0. - 1.*t1685*t1947 - 1.*t1956*t450;
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

#include "Js_RightThighJoint_mex.hh"

namespace SymExpression
{

void Js_RightThighJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
