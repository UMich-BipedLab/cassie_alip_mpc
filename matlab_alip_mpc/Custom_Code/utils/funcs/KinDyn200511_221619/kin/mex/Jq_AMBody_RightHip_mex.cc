/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:09 GMT-04:00
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
  double t91;
  double t657;
  double t1499;
  double t443;
  double t3600;
  double t1540;
  double t3545;
  double t3571;
  double t1487;
  double t3523;
  double t3524;
  double t3581;
  double t3587;
  double t3677;
  double t3686;
  double t3692;
  double t3764;
  double t3769;
  double t3821;
  double t3847;
  double t3888;
  double t3930;
  double t4004;
  double t4045;
  double t4118;
  double t4133;
  double t4251;
  double t4274;
  double t4276;
  double t4277;
  double t4283;
  double t4308;
  double t4335;
  double t4359;
  double t4366;
  double t4416;
  double t4424;
  double t4444;
  double t4447;
  double t4450;
  double t4455;
  double t4457;
  double t4458;
  double t4459;
  double t4387;
  double t4553;
  double t4579;
  double t4613;
  double t4614;
  double t4616;
  double t4629;
  double t4641;
  double t4655;
  double t4665;
  double t4676;
  double t4719;
  double t4726;
  double t4730;
  double t4777;
  double t4781;
  double t4784;
  double t4785;
  double t4788;
  double t4803;
  double t4810;
  double t4831;
  double t4863;
  double t4866;
  double t4871;
  t91 = Sin(var1[4]);
  t657 = Cos(var1[5]);
  t1499 = Sin(var1[13]);
  t443 = Cos(var1[13]);
  t3600 = Cos(var1[14]);
  t1540 = Sin(var1[5]);
  t3545 = Cos(var1[4]);
  t3571 = Sin(var1[14]);
  t1487 = -1.*t443*t657;
  t3523 = t1499*t1540;
  t3524 = 0. + t1487 + t3523;
  t3581 = 0. + t3571;
  t3587 = -1.*t3545*t3581;
  t3677 = -1.*t3600*t1499;
  t3686 = 0. + t3677;
  t3692 = t657*t3686;
  t3764 = -1.*t443*t3600;
  t3769 = 0. + t3764;
  t3821 = t3769*t1540;
  t3847 = 0. + t3692 + t3821;
  t3888 = -1.*t91*t3847;
  t3930 = t3587 + t3888;
  t4004 = t1499*t3571;
  t4045 = 0. + t4004;
  t4118 = t443*t3571;
  t4133 = 0. + t4118;
  t4251 = t657*t1499;
  t4274 = t443*t1540;
  t4276 = t4251 + t4274;
  t4277 = var2[3]*t3545*t4276;
  t4283 = t443*t657;
  t4308 = -1.*t1499*t1540;
  t4335 = t4283 + t4308;
  t4359 = var2[4]*t4335;
  t4366 = t4277 + t4359;
  t4416 = -1.*t657*t3686;
  t4424 = -1.*t3769*t1540;
  t4444 = t4416 + t4424;
  t4447 = var2[4]*t4444;
  t4450 = t3769*t657;
  t4455 = -1.*t3686*t1540;
  t4457 = t4450 + t4455;
  t4458 = var2[3]*t3545*t4457;
  t4459 = t4447 + t4458;
  t4387 = 0.000842*t4366;
  t4553 = -1.e-6*t4366;
  t4579 = t3600*t657*t1499;
  t4613 = t443*t3600*t1540;
  t4614 = t4579 + t4613;
  t4616 = var2[4]*t4614;
  t4629 = -1.*t443*t3600*t657;
  t4641 = t3600*t1499*t1540;
  t4655 = t4629 + t4641;
  t4665 = var2[3]*t3545*t4655;
  t4676 = t4616 + t4665;
  t4719 = t443*t657*t3571;
  t4726 = -1.*t1499*t3571*t1540;
  t4730 = t4719 + t4726;
  t4777 = var2[13]*t3600;
  t4781 = var2[5]*t3600;
  t4784 = var2[4]*t4730;
  t4785 = -1.*t3600*t91;
  t4788 = t657*t1499*t3571;
  t4803 = t443*t3571*t1540;
  t4810 = t4788 + t4803;
  t4831 = t3545*t4810;
  t4863 = t4785 + t4831;
  t4866 = var2[3]*t4863;
  t4871 = t4777 + t4781 + t4784 + t4866;
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
  p_output1[12]=-1.e-6*t3930*var2[3] - 0.000842*t3524*t91*var2[3];
  p_output1[13]=0.00608*(-1.*t3545*(0. + t3600) - 1.*(0. + t1540*t4133 + t4045*t657)*t91)*var2[3];
  p_output1[14]=0.00644*t3930*var2[3] + 1.e-6*t3524*t91*var2[3];
  p_output1[15]=t4387 - 1.e-6*t4459;
  p_output1[16]=0.00608*(t3545*(-1.*t1540*t4045 + t4133*t657)*var2[3] + (-1.*t1540*t4133 - 1.*t4045*t657)*var2[4]);
  p_output1[17]=0.00644*t4459 + t4553;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=t4387 - 1.e-6*t4676;
  p_output1[40]=0.00608*(t3545*t4730*var2[3] + (-1.*t1540*t3571*t443 - 1.*t1499*t3571*t657)*var2[4]);
  p_output1[41]=t4553 + 0.00644*t4676;
  p_output1[42]=-1.e-6*t4871;
  p_output1[43]=0.00608*((t3545*t4614 + t3571*t91)*var2[3] + (-1.*t1499*t1540*t3600 + t3600*t443*t657)*var2[4] - 1.*t3571*var2[5] - 1.*t3571*var2[13]);
  p_output1[44]=0.00644*t4871;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jq_AMBody_RightHip_mex.hh"

namespace SymExpression
{

void Jq_AMBody_RightHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
