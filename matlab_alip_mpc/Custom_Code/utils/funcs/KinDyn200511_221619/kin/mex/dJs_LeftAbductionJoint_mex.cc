/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:30 GMT-04:00
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
  double t2133;
  double t2426;
  double t2695;
  double t2724;
  double t2708;
  double t2727;
  double t2731;
  double t2735;
  double t2933;
  double t2936;
  double t2774;
  double t2780;
  double t2789;
  double t2792;
  double t2976;
  double t2982;
  double t2985;
  double t3039;
  double t3047;
  double t3050;
  double t2804;
  double t2812;
  double t2815;
  double t2821;
  double t2822;
  double t2829;
  double t2835;
  double t2868;
  double t2911;
  double t2914;
  double t2920;
  double t2923;
  double t2924;
  double t2929;
  double t2930;
  t2133 = Cos(var1[3]);
  t2426 = Sin(var1[3]);
  t2695 = Cos(var1[4]);
  t2724 = Sin(var1[4]);
  t2708 = -1.*var2[2]*t2695*t2426;
  t2727 = -1.*var2[1]*t2724;
  t2731 = -1.*var1[1]*t2695;
  t2735 = var1[2]*t2426*t2724;
  t2933 = Cos(var1[5]);
  t2936 = Sin(var1[5]);
  t2774 = var2[2]*t2133*t2695;
  t2780 = var2[0]*t2724;
  t2789 = var1[0]*t2695;
  t2792 = -1.*var1[2]*t2133*t2724;
  t2976 = t2133*t2933*t2724;
  t2982 = t2426*t2936;
  t2985 = t2976 + t2982;
  t3039 = -1.*t2133*t2933;
  t3047 = -1.*t2426*t2724*t2936;
  t3050 = t3039 + t3047;
  t2804 = -1.*var2[1]*t2133*t2695;
  t2812 = var2[0]*t2695*t2426;
  t2815 = var1[0]*t2133*t2695;
  t2821 = var1[1]*t2695*t2426;
  t2822 = t2815 + t2821;
  t2829 = var2[3]*t2822;
  t2835 = var1[1]*t2133*t2724;
  t2868 = -1.*var1[0]*t2426*t2724;
  t2911 = -1.*var2[3]*t2695*t2426;
  t2914 = -1.*var2[4]*t2133*t2724;
  t2920 = t2911 + t2914;
  t2923 = var2[3]*t2133*t2695;
  t2924 = -1.*var2[4]*t2426*t2724;
  t2929 = t2923 + t2924;
  t2930 = -1.*var2[4]*t2695;
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
  p_output1[24]=-1.*t2133*var2[2] + t2426*var1[2]*var2[3];
  p_output1[25]=-1.*t2426*var2[2] - 1.*t2133*var1[2]*var2[3];
  p_output1[26]=t2133*var2[0] + t2426*var2[1] + (-1.*t2426*var1[0] + t2133*var1[1])*var2[3];
  p_output1[27]=-1.*t2133*var2[3];
  p_output1[28]=-1.*t2426*var2[3];
  p_output1[29]=0;
  p_output1[30]=t2708 + t2727 - 1.*t2133*t2695*var1[2]*var2[3] + (t2731 + t2735)*var2[4];
  p_output1[31]=t2774 + t2780 - 1.*t2426*t2695*var1[2]*var2[3] + (t2789 + t2792)*var2[4];
  p_output1[32]=t2804 + t2812 + t2829 + (t2835 + t2868)*var2[4];
  p_output1[33]=t2920;
  p_output1[34]=t2929;
  p_output1[35]=t2930;
  p_output1[36]=t2708 + t2727 + (-0.135*(-1.*t2426*t2724*t2933 + t2133*t2936) + 0.07996*t3050 - 1.*t2133*t2695*var1[2])*var2[3] + (t2731 + t2735 - 0.135*t2133*t2695*t2933 + 0.07996*t2133*t2695*t2936)*var2[4] + (-0.135*(t2426*t2933 - 1.*t2133*t2724*t2936) + 0.07996*t2985)*var2[5];
  p_output1[37]=t2774 + t2780 + (0.07996*(-1.*t2426*t2933 + t2133*t2724*t2936) - 0.135*t2985 - 1.*t2426*t2695*var1[2])*var2[3] + (t2789 + t2792 - 0.135*t2426*t2695*t2933 + 0.07996*t2426*t2695*t2936)*var2[4] + (0.07996*(t2426*t2724*t2933 - 1.*t2133*t2936) - 0.135*t3050)*var2[5];
  p_output1[38]=t2804 + t2812 + t2829 + (t2835 + t2868 + 0.135*t2724*t2933 - 0.07996*t2724*t2936)*var2[4] + (0.07996*t2695*t2933 + 0.135*t2695*t2936)*var2[5];
  p_output1[39]=t2920;
  p_output1[40]=t2929;
  p_output1[41]=t2930;
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
  p_output1[78]=0;
  p_output1[79]=0;
  p_output1[80]=0;
  p_output1[81]=0;
  p_output1[82]=0;
  p_output1[83]=0;
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

#include "dJs_LeftAbductionJoint_mex.hh"

namespace SymExpression
{

void dJs_LeftAbductionJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
