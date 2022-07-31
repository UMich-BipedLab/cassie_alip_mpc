/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:42 GMT-04:00
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
  double t600;
  double t788;
  double t2597;
  double t2780;
  double t2707;
  double t2849;
  double t2850;
  double t2979;
  double t4120;
  double t4308;
  double t3245;
  double t3343;
  double t3360;
  double t3418;
  double t4417;
  double t4422;
  double t4436;
  double t4810;
  double t4811;
  double t4852;
  double t3707;
  double t3711;
  double t3738;
  double t3743;
  double t3765;
  double t3813;
  double t3852;
  double t3857;
  double t4006;
  double t4026;
  double t4049;
  double t4062;
  double t4066;
  double t4079;
  double t4088;
  t600 = Cos(var1[3]);
  t788 = Sin(var1[3]);
  t2597 = Cos(var1[4]);
  t2780 = Sin(var1[4]);
  t2707 = -1.*var2[2]*t2597*t788;
  t2849 = -1.*var2[1]*t2780;
  t2850 = -1.*var1[1]*t2597;
  t2979 = var1[2]*t788*t2780;
  t4120 = Cos(var1[5]);
  t4308 = Sin(var1[5]);
  t3245 = var2[2]*t600*t2597;
  t3343 = var2[0]*t2780;
  t3360 = var1[0]*t2597;
  t3418 = -1.*var1[2]*t600*t2780;
  t4417 = t600*t4120*t2780;
  t4422 = t788*t4308;
  t4436 = t4417 + t4422;
  t4810 = -1.*t600*t4120;
  t4811 = -1.*t788*t2780*t4308;
  t4852 = t4810 + t4811;
  t3707 = -1.*var2[1]*t600*t2597;
  t3711 = var2[0]*t2597*t788;
  t3738 = var1[0]*t600*t2597;
  t3743 = var1[1]*t2597*t788;
  t3765 = t3738 + t3743;
  t3813 = var2[3]*t3765;
  t3852 = var1[1]*t600*t2780;
  t3857 = -1.*var1[0]*t788*t2780;
  t4006 = -1.*var2[3]*t2597*t788;
  t4026 = -1.*var2[4]*t600*t2780;
  t4049 = t4006 + t4026;
  t4062 = var2[3]*t600*t2597;
  t4066 = -1.*var2[4]*t788*t2780;
  t4079 = t4062 + t4066;
  t4088 = -1.*var2[4]*t2597;
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
  p_output1[24]=-1.*t600*var2[2] + t788*var1[2]*var2[3];
  p_output1[25]=-1.*t788*var2[2] - 1.*t600*var1[2]*var2[3];
  p_output1[26]=t600*var2[0] + t788*var2[1] + (-1.*t788*var1[0] + t600*var1[1])*var2[3];
  p_output1[27]=-1.*t600*var2[3];
  p_output1[28]=-1.*t788*var2[3];
  p_output1[29]=0;
  p_output1[30]=t2707 + t2849 - 1.*t2597*t600*var1[2]*var2[3] + (t2850 + t2979)*var2[4];
  p_output1[31]=t3245 + t3343 - 1.*t2597*t788*var1[2]*var2[3] + (t3360 + t3418)*var2[4];
  p_output1[32]=t3707 + t3711 + t3813 + (t3852 + t3857)*var2[4];
  p_output1[33]=t4049;
  p_output1[34]=t4079;
  p_output1[35]=t4088;
  p_output1[36]=t2707 + t2849 + (0.07996*t4852 - 0.135*(t4308*t600 - 1.*t2780*t4120*t788) - 1.*t2597*t600*var1[2])*var2[3] + (t2850 + t2979 - 0.135*t2597*t4120*t600 + 0.07996*t2597*t4308*t600)*var2[4] + (0.07996*t4436 - 0.135*(-1.*t2780*t4308*t600 + t4120*t788))*var2[5];
  p_output1[37]=t3245 + t3343 + (-0.135*t4436 + 0.07996*(t2780*t4308*t600 - 1.*t4120*t788) - 1.*t2597*t788*var1[2])*var2[3] + (t3360 + t3418 - 0.135*t2597*t4120*t788 + 0.07996*t2597*t4308*t788)*var2[4] + (-0.135*t4852 + 0.07996*(-1.*t4308*t600 + t2780*t4120*t788))*var2[5];
  p_output1[38]=t3707 + t3711 + t3813 + (t3852 + t3857 + 0.135*t2780*t4120 - 0.07996*t2780*t4308)*var2[4] + (0.07996*t2597*t4120 + 0.135*t2597*t4308)*var2[5];
  p_output1[39]=t4049;
  p_output1[40]=t4079;
  p_output1[41]=t4088;
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

#include "dJs_LeftPelvisRotation_mex.hh"

namespace SymExpression
{

void dJs_LeftPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
