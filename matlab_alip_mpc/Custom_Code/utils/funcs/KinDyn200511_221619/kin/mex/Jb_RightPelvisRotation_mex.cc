/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:23 GMT-04:00
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
  double t51;
  double t555;
  double t808;
  double t460;
  double t817;
  double t437;
  double t1338;
  double t637;
  double t1218;
  double t1289;
  double t114;
  double t148;
  double t1422;
  double t1546;
  double t1564;
  double t1570;
  double t1796;
  double t2375;
  double t2416;
  double t2423;
  double t2472;
  double t2756;
  double t3303;
  double t3421;
  double t3446;
  double t3453;
  double t3089;
  double t3298;
  double t3609;
  double t3620;
  double t3650;
  double t3654;
  double t3511;
  double t3541;
  double t3542;
  double t3554;
  double t3906;
  double t4086;
  double t4090;
  double t3587;
  double t3681;
  double t3683;
  double t3840;
  double t4093;
  double t4218;
  double t4284;
  double t4312;
  double t4351;
  double t3021;
  double t3033;
  double t4402;
  double t3722;
  t51 = Cos(var1[3]);
  t555 = Cos(var1[5]);
  t808 = Sin(var1[13]);
  t460 = Cos(var1[13]);
  t817 = Sin(var1[5]);
  t437 = Sin(var1[3]);
  t1338 = Sin(var1[4]);
  t637 = t460*t555;
  t1218 = -1.*t808*t817;
  t1289 = 0. + t637 + t1218;
  t114 = Cos(var1[4]);
  t148 = 0. + t114;
  t1422 = t555*t808;
  t1546 = t460*t817;
  t1564 = 0. + t1422 + t1546;
  t1570 = t1338*t1564;
  t1796 = 0. + t1570;
  t2375 = -1.*t555*t808;
  t2416 = -1.*t460*t817;
  t2423 = 0. + t2375 + t2416;
  t2472 = t1338*t1289;
  t2756 = 0. + t2472;
  t3303 = t114*t1289;
  t3421 = 0. + t3303;
  t3446 = -1.*t460;
  t3453 = 1. + t3446;
  t3089 = t114*t1564;
  t3298 = 0. + t3089;
  t3609 = 0.07996*t3453;
  t3620 = 0.09786*t460;
  t3650 = -0.00009999999999998899*t808;
  t3654 = 0. + t3609 + t3620 + t3650;
  t3511 = -0.135*t3453;
  t3541 = -0.1351*t460;
  t3542 = -0.0179*t808;
  t3554 = 0. + t3511 + t3541 + t3542;
  t3906 = t555*t3654;
  t4086 = t3554*t817;
  t4090 = 0. + t3906 + t4086;
  t3587 = t555*t3554;
  t3681 = -1.*t3654*t817;
  t3683 = 0. + t3587 + t3681;
  t3840 = 0.05485*t1338;
  t4093 = t114*t4090;
  t4218 = 0. + t3840 + t4093;
  t4284 = -0.05485*t114;
  t4312 = t1338*t4090;
  t4351 = 0. + t4284 + t4312;
  t3021 = -1.*t1338;
  t3033 = 0. + t3021;
  t4402 = t2423*t3683;
  t3722 = -1.*t3683*t1289;
  p_output1[0]=0. + t148*t51;
  p_output1[1]=0. - 1.*t1289*t437 + t1796*t51;
  p_output1[2]=0. - 1.*t2423*t437 + t2756*t51;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t148*t437;
  p_output1[7]=0. + t1796*t437 + t1289*t51;
  p_output1[8]=0. + t2756*t437 + t2423*t51;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3033;
  p_output1[13]=t3298;
  p_output1[14]=t3421;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0. + t3421*(t3722 - 1.*t3298*t4218 - 1.*t1796*t4351) + t3298*(t3421*t4218 + t2756*t4351 + t4402);
  p_output1[19]=t3421*(0. + t3033*t4218 + t148*t4351) + t3033*(-1.*t2423*t3683 - 1.*t3421*t4218 - 1.*t2756*t4351);
  p_output1[20]=t3298*(0. - 1.*t3033*t4218 - 1.*t148*t4351) + t3033*(t1289*t3683 + t3298*t4218 + t1796*t4351);
  p_output1[21]=t3033;
  p_output1[22]=t3298;
  p_output1[23]=t3421;
  p_output1[24]=0. + t2423*(0. + t3722 - 1.*t1564*t4090) + t1289*(0. + t1289*t4090 + t4402);
  p_output1[25]=0. - 0.05485*t2423;
  p_output1[26]=0. + 0.05485*t1289;
  p_output1[27]=0.;
  p_output1[28]=t1289;
  p_output1[29]=t2423;
  p_output1[30]=0.;
  p_output1[31]=0. - 1.*t3654*t460 + t3554*t808;
  p_output1[32]=0. + t3554*t460 + t3654*t808;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
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
  p_output1[78]=0.;
  p_output1[79]=-0.0179;
  p_output1[80]=-0.00009999999999998899;
  p_output1[81]=1.;
  p_output1[82]=0.;
  p_output1[83]=0.;
  p_output1[84]=0;
  p_output1[85]=0;
  p_output1[86]=0;
  p_output1[87]=0;
  p_output1[88]=0;
  p_output1[89]=0;
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

#include "Jb_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void Jb_RightPelvisRotation_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
