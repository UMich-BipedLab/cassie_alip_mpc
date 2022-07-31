/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:27 GMT-04:00
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
  double t57;
  double t86;
  double t216;
  double t245;
  double t236;
  double t299;
  double t476;
  double t513;
  double t345;
  double t365;
  double t370;
  double t372;
  double t391;
  double t394;
  double t448;
  double t480;
  double t524;
  double t536;
  double t569;
  double t571;
  double t613;
  double t916;
  double t885;
  double t644;
  double t646;
  double t650;
  double t1045;
  double t1051;
  double t728;
  double t755;
  double t761;
  double t1054;
  double t1061;
  double t1073;
  double t1090;
  double t1136;
  double t1141;
  double t1010;
  double t1013;
  double t1024;
  double t25;
  double t1377;
  double t1411;
  double t1413;
  double t1254;
  double t1261;
  double t1273;
  double t898;
  double t967;
  double t995;
  double t1209;
  double t1223;
  double t1714;
  double t1724;
  double t1232;
  double t1757;
  double t1768;
  double t1495;
  double t1528;
  double t1535;
  double t1416;
  double t1437;
  double t1475;
  double t1783;
  double t1804;
  double t1852;
  double t1079;
  double t1146;
  double t1915;
  double t1938;
  double t1940;
  double t1341;
  double t1351;
  double t2043;
  double t2073;
  double t2078;
  double t1304;
  double t1310;
  double t1599;
  double t1604;
  double t1995;
  double t2009;
  double t2037;
  double t2232;
  double t2239;
  double t2258;
  double t1552;
  double t1567;
  double t1575;
  t57 = Cos(var1[3]);
  t86 = Sin(var1[3]);
  t216 = Cos(var1[4]);
  t245 = Sin(var1[4]);
  t236 = -1.*var1[2]*t216*t86;
  t299 = -1.*var1[1]*t245;
  t476 = Cos(var1[5]);
  t513 = Sin(var1[5]);
  t345 = var1[2]*t57*t216;
  t365 = var1[0]*t245;
  t370 = -1.*var1[1]*t57*t216;
  t372 = var1[0]*t216*t86;
  t391 = t57*t216;
  t394 = t216*t86;
  t448 = -1.*t245;
  t480 = t57*t476*t245;
  t524 = t86*t513;
  t536 = t480 + t524;
  t569 = -1.*t476*t86;
  t571 = t57*t245*t513;
  t613 = t569 + t571;
  t916 = Cos(var1[13]);
  t885 = Sin(var1[13]);
  t644 = t476*t86*t245;
  t646 = -1.*t57*t513;
  t650 = t644 + t646;
  t1045 = -1.*t916;
  t1051 = 1. + t1045;
  t728 = t57*t476;
  t755 = t86*t245*t513;
  t761 = t728 + t755;
  t1054 = 0.07996*t1051;
  t1061 = 0.135*t885;
  t1073 = 0. + t1054 + t1061;
  t1090 = -0.135*t1051;
  t1136 = 0.07996*t885;
  t1141 = 0. + t1090 + t1136;
  t1010 = t916*t216*t476;
  t1013 = -1.*t216*t885*t513;
  t1024 = t1010 + t1013;
  t25 = -1.*var1[0];
  t1377 = t916*t536;
  t1411 = -1.*t885*t613;
  t1413 = t1377 + t1411;
  t1254 = t916*t650;
  t1261 = -1.*t885*t761;
  t1273 = t1254 + t1261;
  t898 = t885*t536;
  t967 = t916*t613;
  t995 = t898 + t967;
  t1209 = -1.*var1[2];
  t1223 = -1.*t216*t476*t1073;
  t1714 = Cos(var1[14]);
  t1724 = Sin(var1[14]);
  t1232 = -1.*t216*t1141*t513;
  t1757 = -1.*t1714;
  t1768 = 1. + t1757;
  t1495 = t216*t476*t885;
  t1528 = t916*t216*t513;
  t1535 = t1495 + t1528;
  t1416 = t885*t650;
  t1437 = t916*t761;
  t1475 = t1416 + t1437;
  t1783 = -0.08055*t1768;
  t1804 = -0.135*t1724;
  t1852 = 0. + t1783 + t1804;
  t1079 = t1073*t650;
  t1146 = t1141*t761;
  t1915 = -0.135*t1768;
  t1938 = 0.08055*t1724;
  t1940 = 0. + t1915 + t1938;
  t1341 = t216*t476*t1073;
  t1351 = t216*t1141*t513;
  t2043 = t1724*t245;
  t2073 = t1714*t1535;
  t2078 = t2043 + t2073;
  t1304 = -1.*t1073*t536;
  t1310 = -1.*t1141*t613;
  t1599 = t1073*t536;
  t1604 = t1141*t613;
  t1995 = -1.*t216*t1724*t86;
  t2009 = t1714*t1475;
  t2037 = t1995 + t2009;
  t2232 = -1.*t57*t216*t1724;
  t2239 = t1714*t995;
  t2258 = t2232 + t2239;
  t1552 = -1.*var1[1];
  t1567 = -1.*t1073*t650;
  t1575 = -1.*t1141*t761;
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
  p_output1[19]=t25;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t57*var1[2];
  p_output1[25]=-1.*t86*var1[2];
  p_output1[26]=t57*var1[0] + t86*var1[1];
  p_output1[27]=-1.*t86;
  p_output1[28]=t57;
  p_output1[29]=0;
  p_output1[30]=t236 + t299;
  p_output1[31]=t345 + t365;
  p_output1[32]=t370 + t372;
  p_output1[33]=t391;
  p_output1[34]=t394;
  p_output1[35]=t448;
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
  p_output1[78]=t236 + t299 + 0.135*t536 + 0.07996*t613;
  p_output1[79]=t345 + t365 + 0.135*t650 + 0.07996*t761;
  p_output1[80]=t370 + t372 + 0.135*t216*t476 + 0.07996*t216*t513;
  p_output1[81]=0. + t391;
  p_output1[82]=0. + t394;
  p_output1[83]=0. + t448;
  p_output1[84]=(0. + t1209 + t1223 + t1232)*t1273 - 0.135*t216*t57 + 0.08055*t995 + t1024*(0. + t1079 + t1146 + var1[1]);
  p_output1[85]=0.08055*t1475 + t1024*(0. + t1304 + t1310 + t25) - 0.135*t216*t86 + t1413*(0. + t1341 + t1351 + var1[2]);
  p_output1[86]=0.08055*t1535 + t1413*(0. + t1552 + t1567 + t1575) + 0.135*t245 + t1273*(0. + t1599 + t1604 + var1[0]);
  p_output1[87]=0. + t1377 + t1411;
  p_output1[88]=0. + t1254 + t1261;
  p_output1[89]=0. + t1010 + t1013;
  p_output1[90]=0.08055*t1413 - 1.*t2037*(0. + t1209 + t1223 + t1232 - 1.*t1535*t1940 + t1852*t245) - 0.01004*(t1714*t216*t57 + t1724*t995) - 1.*t2078*(0. + t1079 + t1146 + t1475*t1940 + t1852*t216*t86 + var1[1]);
  p_output1[91]=0.08055*t1273 - 0.01004*(t1475*t1724 + t1714*t216*t86) - 1.*t2078*(0. + t1304 + t1310 + t25 - 1.*t1852*t216*t57 - 1.*t1940*t995) - 1.*t2258*(0. + t1341 + t1351 + t1535*t1940 - 1.*t1852*t245 + var1[2]);
  p_output1[92]=0.08055*t1024 - 0.01004*(t1535*t1724 - 1.*t1714*t245) - 1.*t2258*(0. + t1552 + t1567 + t1575 - 1.*t1475*t1940 - 1.*t1852*t216*t86) - 1.*t2037*(0. + t1599 + t1604 + t1852*t216*t57 + t1940*t995 + var1[0]);
  p_output1[93]=0. + t1724*t216*t57 - 1.*t1714*t995;
  p_output1[94]=0. - 1.*t1475*t1714 + t1724*t216*t86;
  p_output1[95]=0. - 1.*t1535*t1714 - 1.*t1724*t245;
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

#include "Js_RightThigh_mex.hh"

namespace SymExpression
{

void Js_RightThigh_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
