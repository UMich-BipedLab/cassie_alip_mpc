/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:52 GMT-04:00
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
  double t636;
  double t786;
  double t2482;
  double t2965;
  double t2941;
  double t3002;
  double t3033;
  double t3045;
  double t4289;
  double t4334;
  double t3391;
  double t3438;
  double t3469;
  double t3615;
  double t4506;
  double t4618;
  double t4638;
  double t5069;
  double t5073;
  double t5088;
  double t3628;
  double t3638;
  double t3689;
  double t3710;
  double t3787;
  double t3799;
  double t3933;
  double t3935;
  double t4022;
  double t4044;
  double t4050;
  double t4064;
  double t4065;
  double t4269;
  double t4277;
  t636 = Cos(var1[3]);
  t786 = Sin(var1[3]);
  t2482 = Cos(var1[4]);
  t2965 = Sin(var1[4]);
  t2941 = -1.*var2[2]*t2482*t786;
  t3002 = -1.*var2[1]*t2965;
  t3033 = -1.*var1[1]*t2482;
  t3045 = var1[2]*t786*t2965;
  t4289 = Cos(var1[5]);
  t4334 = Sin(var1[5]);
  t3391 = var2[2]*t636*t2482;
  t3438 = var2[0]*t2965;
  t3469 = var1[0]*t2482;
  t3615 = -1.*var1[2]*t636*t2965;
  t4506 = t636*t4289*t2965;
  t4618 = t786*t4334;
  t4638 = t4506 + t4618;
  t5069 = -1.*t636*t4289;
  t5073 = -1.*t786*t2965*t4334;
  t5088 = t5069 + t5073;
  t3628 = -1.*var2[1]*t636*t2482;
  t3638 = var2[0]*t2482*t786;
  t3689 = var1[0]*t636*t2482;
  t3710 = var1[1]*t2482*t786;
  t3787 = t3689 + t3710;
  t3799 = var2[3]*t3787;
  t3933 = var1[1]*t636*t2965;
  t3935 = -1.*var1[0]*t786*t2965;
  t4022 = -1.*var2[3]*t2482*t786;
  t4044 = -1.*var2[4]*t636*t2965;
  t4050 = t4022 + t4044;
  t4064 = var2[3]*t636*t2482;
  t4065 = -1.*var2[4]*t786*t2965;
  t4269 = t4064 + t4065;
  t4277 = -1.*var2[4]*t2482;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t636*var2[2] + t786*var1[2]*var2[3];
  p_output1[25]=-1.*t786*var2[2] - 1.*t636*var1[2]*var2[3];
  p_output1[26]=t636*var2[0] + t786*var2[1] + (-1.*t786*var1[0] + t636*var1[1])*var2[3];
  p_output1[27]=-1.*t636*var2[3];
  p_output1[28]=-1.*t786*var2[3];
  p_output1[29]=0;
  p_output1[30]=t2941 + t3002 - 1.*t2482*t636*var1[2]*var2[3] + (t3033 + t3045)*var2[4];
  p_output1[31]=t3391 + t3438 - 1.*t2482*t786*var1[2]*var2[3] + (t3469 + t3615)*var2[4];
  p_output1[32]=t3628 + t3638 + t3799 + (t3933 + t3935)*var2[4];
  p_output1[33]=t4050;
  p_output1[34]=t4269;
  p_output1[35]=t4277;
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
  p_output1[78]=t2941 + t3002 + (0.07996*t5088 + 0.135*(t4334*t636 - 1.*t2965*t4289*t786) - 1.*t2482*t636*var1[2])*var2[3] + (t3033 + t3045 + 0.135*t2482*t4289*t636 + 0.07996*t2482*t4334*t636)*var2[4] + (0.07996*t4638 + 0.135*(-1.*t2965*t4334*t636 + t4289*t786))*var2[5];
  p_output1[79]=t3391 + t3438 + (0.135*t4638 + 0.07996*(t2965*t4334*t636 - 1.*t4289*t786) - 1.*t2482*t786*var1[2])*var2[3] + (t3469 + t3615 + 0.135*t2482*t4289*t786 + 0.07996*t2482*t4334*t786)*var2[4] + (0.135*t5088 + 0.07996*(-1.*t4334*t636 + t2965*t4289*t786))*var2[5];
  p_output1[80]=t3628 + t3638 + t3799 + (t3933 + t3935 - 0.135*t2965*t4289 - 0.07996*t2965*t4334)*var2[4] + (0.07996*t2482*t4289 - 0.135*t2482*t4334)*var2[5];
  p_output1[81]=t4050;
  p_output1[82]=t4269;
  p_output1[83]=t4277;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJs_RightAbductionJoint_mex.hh"

namespace SymExpression
{

void dJs_RightAbductionJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
