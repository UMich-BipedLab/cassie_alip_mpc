/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:44 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t285;
  double t66;
  double t238;
  double t602;
  double t1014;
  double t279;
  double t694;
  double t779;
  double t8;
  double t1089;
  double t1094;
  double t1128;
  double t1267;
  double t1340;
  double t1342;
  double t1398;
  double t1495;
  double t1570;
  double t972;
  double t1147;
  double t1148;
  double t1762;
  double t1719;
  double t1853;
  double t1871;
  double t1913;
  double t1691;
  double t2118;
  double t2149;
  double t2177;
  double t1735;
  double t1952;
  double t1980;
  double t2211;
  double t3471;
  double t3521;
  double t3557;
  double t3620;
  double t3640;
  double t3645;
  double t3706;
  double t3444;
  double t3569;
  double t3599;
  double t4090;
  double t4174;
  double t2810;
  double t2847;
  double t4429;
  double t4487;
  double t4513;
  double t3939;
  double t4192;
  double t4412;
  double t1216;
  double t1665;
  double t1680;
  double t1985;
  double t2374;
  double t2551;
  double t2600;
  double t2825;
  double t2853;
  double t2961;
  double t2995;
  double t3025;
  double t3027;
  double t3068;
  double t3298;
  double t3619;
  double t3849;
  double t3887;
  double t4413;
  double t4538;
  double t4557;
  double t4566;
  double t4587;
  double t4731;
  double t4866;
  double t4894;
  double t4899;
  double t4928;
  double t5017;
  double t5018;
  double t5506;
  double t5648;
  double t5672;
  double t5984;
  double t6027;
  double t5676;
  double t5739;
  t285 = Cos(var1[16]);
  t66 = Cos(var1[17]);
  t238 = Sin(var1[16]);
  t602 = Sin(var1[17]);
  t1014 = Sin(var1[15]);
  t279 = t66*t238;
  t694 = t285*t602;
  t779 = 0. + t279 + t694;
  t8 = Cos(var1[15]);
  t1089 = t285*t66;
  t1094 = -1.*t238*t602;
  t1128 = 0. + t1089 + t1094;
  t1267 = Cos(var1[14]);
  t1340 = -1.*t1014*t779;
  t1342 = t8*t1128;
  t1398 = 0. + t1340 + t1342;
  t1495 = t1267*t1398;
  t1570 = 0. + t1495;
  t972 = t8*t779;
  t1147 = t1014*t1128;
  t1148 = 0. + t972 + t1147;
  t1762 = Cos(var1[13]);
  t1719 = Sin(var1[13]);
  t1853 = Sin(var1[14]);
  t1871 = t1853*t1398;
  t1913 = 0. + t1871;
  t1691 = Cos(var1[5]);
  t2118 = t1762*t1148;
  t2149 = t1719*t1913;
  t2177 = 0. + t2118 + t2149;
  t1735 = -1.*t1719*t1148;
  t1952 = t1762*t1913;
  t1980 = 0. + t1735 + t1952;
  t2211 = Sin(var1[5]);
  t3471 = -1.*t285*t66;
  t3521 = t238*t602;
  t3557 = 0. + t3471 + t3521;
  t3620 = -1.*t1014*t3557;
  t3640 = 0. + t972 + t3620;
  t3645 = t1267*t3640;
  t3706 = 0. + t3645;
  t3444 = t1014*t779;
  t3569 = t8*t3557;
  t3599 = 0. + t3444 + t3569;
  t4090 = t1853*t3640;
  t4174 = 0. + t4090;
  t2810 = Sin(var1[4]);
  t2847 = Cos(var1[4]);
  t4429 = t1762*t3599;
  t4487 = t1719*t4174;
  t4513 = 0. + t4429 + t4487;
  t3939 = -1.*t1719*t3599;
  t4192 = t1762*t4174;
  t4412 = 0. + t3939 + t4192;
  t1216 = var2[14]*t1148;
  t1665 = var2[13]*t1570;
  t1680 = var2[5]*t1570;
  t1985 = t1691*t1980;
  t2374 = -1.*t2177*t2211;
  t2551 = 0. + t1985 + t2374;
  t2600 = var2[4]*t2551;
  t2825 = -1.*t1570*t2810;
  t2853 = t1691*t2177;
  t2961 = t1980*t2211;
  t2995 = 0. + t2853 + t2961;
  t3025 = t2847*t2995;
  t3027 = 0. + t2825 + t3025;
  t3068 = var2[3]*t3027;
  t3298 = 0. + t1216 + t1665 + t1680 + t2600 + t3068;
  t3619 = var2[14]*t3599;
  t3849 = var2[13]*t3706;
  t3887 = var2[5]*t3706;
  t4413 = t1691*t4412;
  t4538 = -1.*t4513*t2211;
  t4557 = 0. + t4413 + t4538;
  t4566 = var2[4]*t4557;
  t4587 = -1.*t3706*t2810;
  t4731 = t1691*t4513;
  t4866 = t4412*t2211;
  t4894 = 0. + t4731 + t4866;
  t4899 = t2847*t4894;
  t4928 = 0. + t4587 + t4899;
  t5017 = var2[3]*t4928;
  t5018 = 0. + t3619 + t3849 + t3887 + t4566 + t5017;
  t5506 = 0. + t1853;
  t5648 = -1.*t1267;
  t5672 = 0. + t5648;
  t5984 = t5672*t1719;
  t6027 = 0. + t5984;
  t5676 = t1762*t5672;
  t5739 = 0. + t5676;
  p_output1[0]=0. + 0.000334*t3298 + 0.00036*t5018;
  p_output1[1]=0. + 0.0341*t3298 + 0.000334*t5018;
  p_output1[2]=0. + 0.0341*(0. + (0. - 1.*t2810*t5506 + t2847*(0. + t2211*t5739 + t1691*t6027))*var2[3] + (0. + t1691*t5739 - 1.*t2211*t6027)*var2[4] + t5506*var2[5] + t5506*var2[13] + var2[15] + var2[16] + var2[17]);
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

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
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
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 20 && ncols == 1) && 
      !(mrows == 1 && ncols == 20))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "AMBody_RightShin_mex.hh"

namespace SymExpression
{

void AMBody_RightShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
