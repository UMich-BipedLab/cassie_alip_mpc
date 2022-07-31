/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:31 GMT-04:00
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
  double t711;
  double t609;
  double t610;
  double t1210;
  double t3086;
  double t2721;
  double t3255;
  double t2913;
  double t3668;
  double t3771;
  double t3828;
  double t3917;
  double t4260;
  double t4270;
  double t4309;
  double t4429;
  double t4439;
  double t4476;
  double t4808;
  double t4812;
  double t4828;
  double t4857;
  double t5104;
  double t5144;
  double t5170;
  double t4075;
  double t4086;
  double t4092;
  double t5343;
  double t4374;
  double t4414;
  double t4422;
  double t4334;
  double t4349;
  double t4487;
  double t5540;
  double t4963;
  double t4981;
  double t5004;
  double t5609;
  double t5621;
  double t5622;
  double t5716;
  double t5738;
  double t2992;
  double t3257;
  double t3484;
  double t5331;
  double t5332;
  double t5334;
  double t5776;
  double t5785;
  double t5787;
  double t5744;
  double t5751;
  double t5756;
  double t5350;
  double t5353;
  double t4234;
  double t4238;
  double t5363;
  double t5373;
  double t4427;
  double t4501;
  double t5381;
  double t5388;
  double t5391;
  double t4554;
  double t4556;
  double t4586;
  double t5460;
  double t5461;
  double t5496;
  double t4725;
  double t4741;
  double t4760;
  double t5546;
  double t4873;
  double t4888;
  double t5919;
  double t5929;
  double t5931;
  double t5932;
  double t5946;
  double t5564;
  double t5584;
  double t5064;
  double t5080;
  double t6613;
  double t6709;
  double t5223;
  double t5228;
  double t5296;
  double t5643;
  double t5670;
  double t5675;
  t711 = Cos(var1[3]);
  t609 = Cos(var1[4]);
  t610 = Sin(var1[3]);
  t1210 = Sin(var1[4]);
  t3086 = Cos(var1[13]);
  t2721 = Cos(var1[5]);
  t3255 = Sin(var1[5]);
  t2913 = Sin(var1[13]);
  t3668 = t711*t2721*t1210;
  t3771 = t610*t3255;
  t3828 = t3668 + t3771;
  t3917 = t3086*t3828;
  t4260 = -1.*t2721*t610;
  t4270 = t711*t1210*t3255;
  t4309 = t4260 + t4270;
  t4429 = -1.*t711*t2721;
  t4439 = -1.*t610*t1210*t3255;
  t4476 = t4429 + t4439;
  t4808 = t2721*t610*t1210;
  t4812 = -1.*t711*t3255;
  t4828 = t4808 + t4812;
  t4857 = t3086*t4828;
  t5104 = t3086*t609*t2721;
  t5144 = -1.*t609*t2913*t3255;
  t5170 = t5104 + t5144;
  t4075 = t2721*t610;
  t4086 = -1.*t711*t1210*t3255;
  t4092 = t4075 + t4086;
  t5343 = -1.*t2913*t3828;
  t4374 = -1.*t2721*t610*t1210;
  t4414 = t711*t3255;
  t4422 = t4374 + t4414;
  t4334 = -1.*t2913*t4309;
  t4349 = t3917 + t4334;
  t4487 = t3086*t4476;
  t5540 = -1.*t2913*t4828;
  t4963 = t711*t2721;
  t4981 = t610*t1210*t3255;
  t5004 = t4963 + t4981;
  t5609 = -1.*t609*t2721*t2913;
  t5621 = -1.*t3086*t609*t3255;
  t5622 = t5609 + t5621;
  t5716 = -1.*t3086;
  t5738 = 1. + t5716;
  t2992 = t711*t609*t2721*t2913;
  t3257 = t3086*t711*t609*t3255;
  t3484 = t2992 + t3257;
  t5331 = t3086*t711*t609*t2721;
  t5332 = -1.*t711*t609*t2913*t3255;
  t5334 = t5331 + t5332;
  t5776 = -0.135*t5738;
  t5785 = 0.07996*t2913;
  t5787 = 0. + t5776 + t5785;
  t5744 = 0.07996*t5738;
  t5751 = 0.135*t2913;
  t5756 = 0. + t5744 + t5751;
  t5350 = t3086*t4092;
  t5353 = t5343 + t5350;
  t4234 = t2913*t4092;
  t4238 = t3917 + t4234;
  t5363 = -1.*t3086*t4309;
  t5373 = t5343 + t5363;
  t4427 = t2913*t4422;
  t4501 = t4427 + t4487;
  t5381 = t3086*t4422;
  t5388 = -1.*t2913*t4476;
  t5391 = t5381 + t5388;
  t4554 = t609*t2721*t2913*t610;
  t4556 = t3086*t609*t610*t3255;
  t4586 = t4554 + t4556;
  t5460 = t3086*t609*t2721*t610;
  t5461 = -1.*t609*t2913*t610*t3255;
  t5496 = t5460 + t5461;
  t4725 = t2913*t3828;
  t4741 = t3086*t4309;
  t4760 = t4725 + t4741;
  t5546 = t5540 + t4487;
  t4873 = t2913*t4476;
  t4888 = t4857 + t4873;
  t5919 = 0.135*t3086;
  t5929 = t5919 + t5785;
  t5931 = 0.07996*t3086;
  t5932 = -0.135*t2913;
  t5946 = t5931 + t5932;
  t5564 = -1.*t3086*t5004;
  t5584 = t5540 + t5564;
  t5064 = -1.*t2913*t5004;
  t5080 = t4857 + t5064;
  t6613 = 0.09786*t5622;
  t6709 = -0.1351*t5170;
  t5223 = -1.*t2721*t2913*t1210;
  t5228 = -1.*t3086*t1210*t3255;
  t5296 = t5223 + t5228;
  t5643 = -1.*t3086*t2721*t1210;
  t5670 = t2913*t1210*t3255;
  t5675 = t5643 + t5670;
  p_output1[0]=-1.*t609*t610*var2[3] - 1.*t1210*t711*var2[4];
  p_output1[1]=t609*t711*var2[3] - 1.*t1210*t610*var2[4];
  p_output1[2]=-1.*t609*var2[4];
  p_output1[3]=0;
  p_output1[4]=t4501*var2[3] + t3484*var2[4] + t4238*var2[5] + t4349*var2[13];
  p_output1[5]=t4760*var2[3] + t4586*var2[4] + t4888*var2[5] + t5080*var2[13];
  p_output1[6]=t5296*var2[4] + t5170*var2[5] + t5170*var2[13];
  p_output1[7]=0;
  p_output1[8]=t5391*var2[3] + t5334*var2[4] + t5353*var2[5] + t5373*var2[13];
  p_output1[9]=t4349*var2[3] + t5496*var2[4] + t5546*var2[5] + t5584*var2[13];
  p_output1[10]=t5675*var2[4] + t5622*var2[5] + t5622*var2[13];
  p_output1[11]=0;
  p_output1[12]=var2[0] + (-0.1351*t4501 + 0.09786*t5391 + t4422*t5756 + t4476*t5787 + 0.05485*t609*t610)*var2[3] + (-0.1351*t3484 + 0.09786*t5334 + 0.05485*t1210*t711 + t2721*t5756*t609*t711 + t3255*t5787*t609*t711)*var2[4] + (-0.1351*t4238 + 0.09786*t5353 + t4092*t5756 + t3828*t5787)*var2[5] + (-0.1351*t4349 + 0.09786*t5373 + t3828*t5929 + t4309*t5946)*var2[13];
  p_output1[13]=var2[1] + (0.09786*t4349 - 0.1351*t4760 + t3828*t5756 + t4309*t5787 - 0.05485*t609*t711)*var2[3] + (-0.1351*t4586 + 0.09786*t5496 + 0.05485*t1210*t610 + t2721*t5756*t609*t610 + t3255*t5787*t609*t610)*var2[4] + (-0.1351*t4888 + 0.09786*t5546 + t4476*t5756 + t4828*t5787)*var2[5] + (-0.1351*t5080 + 0.09786*t5584 + t4828*t5929 + t5004*t5946)*var2[13];
  p_output1[14]=var2[2] + (-0.1351*t5296 + 0.09786*t5675 - 1.*t1210*t2721*t5756 - 1.*t1210*t3255*t5787 + 0.05485*t609)*var2[4] + (-1.*t3255*t5756*t609 + t2721*t5787*t609 + t6613 + t6709)*var2[5] + (t2721*t5929*t609 + t3255*t5946*t609 + t6613 + t6709)*var2[13];
  p_output1[15]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dT_RightPelvisRotation_mex.hh"

namespace SymExpression
{

void dT_RightPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
