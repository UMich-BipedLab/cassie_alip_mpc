/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:08 GMT-04:00
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
  double t60;
  double t100;
  double t173;
  double t225;
  double t191;
  double t357;
  double t681;
  double t771;
  double t385;
  double t439;
  double t553;
  double t580;
  double t606;
  double t631;
  double t645;
  double t741;
  double t801;
  double t804;
  double t813;
  double t832;
  double t878;
  double t1258;
  double t1225;
  double t969;
  double t973;
  double t978;
  double t1447;
  double t1461;
  double t1012;
  double t1066;
  double t1074;
  double t1487;
  double t1496;
  double t1519;
  double t1572;
  double t1578;
  double t1655;
  double t1404;
  double t1419;
  double t1444;
  double t37;
  double t2177;
  double t2186;
  double t2203;
  double t1853;
  double t1913;
  double t1933;
  t60 = Cos(var1[3]);
  t100 = Sin(var1[3]);
  t173 = Cos(var1[4]);
  t225 = Sin(var1[4]);
  t191 = -1.*var1[2]*t173*t100;
  t357 = -1.*var1[1]*t225;
  t681 = Cos(var1[5]);
  t771 = Sin(var1[5]);
  t385 = var1[2]*t60*t173;
  t439 = var1[0]*t225;
  t553 = -1.*var1[1]*t60*t173;
  t580 = var1[0]*t173*t100;
  t606 = t60*t173;
  t631 = t173*t100;
  t645 = -1.*t225;
  t741 = t60*t681*t225;
  t801 = t100*t771;
  t804 = t741 + t801;
  t813 = -1.*t681*t100;
  t832 = t60*t225*t771;
  t878 = t813 + t832;
  t1258 = Cos(var1[13]);
  t1225 = Sin(var1[13]);
  t969 = t681*t100*t225;
  t973 = -1.*t60*t771;
  t978 = t969 + t973;
  t1447 = -1.*t1258;
  t1461 = 1. + t1447;
  t1012 = t60*t681;
  t1066 = t100*t225*t771;
  t1074 = t1012 + t1066;
  t1487 = 0.07996*t1461;
  t1496 = 0.135*t1225;
  t1519 = 0. + t1487 + t1496;
  t1572 = -0.135*t1461;
  t1578 = 0.07996*t1225;
  t1655 = 0. + t1572 + t1578;
  t1404 = t1258*t173*t681;
  t1419 = -1.*t173*t1225*t771;
  t1444 = t1404 + t1419;
  t37 = -1.*var1[0];
  t2177 = t1258*t804;
  t2186 = -1.*t1225*t878;
  t2203 = t2177 + t2186;
  t1853 = t1258*t978;
  t1913 = -1.*t1225*t1074;
  t1933 = t1853 + t1913;
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
  p_output1[19]=t37;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t60*var1[2];
  p_output1[25]=-1.*t100*var1[2];
  p_output1[26]=t60*var1[0] + t100*var1[1];
  p_output1[27]=-1.*t100;
  p_output1[28]=t60;
  p_output1[29]=0;
  p_output1[30]=t191 + t357;
  p_output1[31]=t385 + t439;
  p_output1[32]=t553 + t580;
  p_output1[33]=t606;
  p_output1[34]=t631;
  p_output1[35]=t645;
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
  p_output1[78]=t191 + t357 + 0.135*t804 + 0.07996*t878;
  p_output1[79]=0.07996*t1074 + t385 + t439 + 0.135*t978;
  p_output1[80]=t553 + t580 + 0.135*t173*t681 + 0.07996*t173*t771;
  p_output1[81]=0. + t606;
  p_output1[82]=0. + t631;
  p_output1[83]=0. + t645;
  p_output1[84]=-0.135*t173*t60 + 0.08055*(t1225*t804 + t1258*t878) + t1444*(0. + t1074*t1655 + t1519*t978 + var1[1]) + t1933*(0. - 1.*t1519*t173*t681 - 1.*t1655*t173*t771 - 1.*var1[2]);
  p_output1[85]=-0.135*t100*t173 + t1444*(0. + t37 - 1.*t1519*t804 - 1.*t1655*t878) + 0.08055*(t1074*t1258 + t1225*t978) + t2203*(0. + t1519*t173*t681 + t1655*t173*t771 + var1[2]);
  p_output1[86]=0.135*t225 + 0.08055*(t1225*t173*t681 + t1258*t173*t771) + t1933*(0. + t1519*t804 + t1655*t878 + var1[0]) + t2203*(0. - 1.*t1074*t1655 - 1.*t1519*t978 - 1.*var1[1]);
  p_output1[87]=0. + t2177 + t2186;
  p_output1[88]=0. + t1853 + t1913;
  p_output1[89]=0. + t1404 + t1419;
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

#include "Js_RightRotationJoint_mex.hh"

namespace SymExpression
{

void Js_RightRotationJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
