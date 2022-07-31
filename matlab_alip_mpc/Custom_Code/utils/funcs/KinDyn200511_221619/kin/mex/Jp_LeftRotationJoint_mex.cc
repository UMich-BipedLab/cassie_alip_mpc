/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:39 GMT-04:00
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
  double t3831;
  double t999;
  double t1338;
  double t3689;
  double t3861;
  double t3917;
  double t3932;
  double t3939;
  double t3959;
  double t3695;
  double t3899;
  double t3912;
  double t3971;
  double t3972;
  double t3974;
  double t4039;
  double t4040;
  double t4042;
  double t4048;
  double t4021;
  double t4024;
  double t4031;
  double t4058;
  double t3956;
  double t3962;
  double t3965;
  double t3977;
  double t3979;
  double t3995;
  double t4090;
  double t4091;
  double t4093;
  double t4095;
  double t4096;
  double t4097;
  double t4045;
  double t4051;
  double t4052;
  double t4059;
  double t4063;
  double t4066;
  double t4109;
  double t4112;
  double t4115;
  double t4149;
  double t4150;
  double t4151;
  double t4184;
  double t4185;
  double t4187;
  double t4222;
  double t4227;
  double t4229;
  double t4252;
  double t4253;
  double t4254;
  double t4100;
  double t4265;
  double t4266;
  double t4281;
  double t4286;
  double t4287;
  double t4297;
  double t4304;
  double t4305;
  double t4334;
  double t4335;
  double t4336;
  double t4261;
  double t4102;
  double t4104;
  double t4348;
  double t4350;
  double t4354;
  double t4356;
  double t4357;
  double t4377;
  double t4381;
  double t4383;
  double t4292;
  double t4402;
  double t4403;
  double t4328;
  double t4331;
  double t4332;
  double t4333;
  double t4338;
  double t4345;
  double t4346;
  double t4119;
  double t4120;
  double t4122;
  double t4426;
  double t4430;
  double t4431;
  double t4434;
  double t4435;
  double t4456;
  double t4457;
  double t4458;
  double t4074;
  double t4482;
  double t4483;
  double t4484;
  t3831 = Cos(var1[3]);
  t999 = Cos(var1[5]);
  t1338 = Sin(var1[3]);
  t3689 = Sin(var1[4]);
  t3861 = Sin(var1[5]);
  t3917 = Cos(var1[6]);
  t3932 = -1.*t3917;
  t3939 = 1. + t3932;
  t3959 = Sin(var1[6]);
  t3695 = -1.*t999*t1338*t3689;
  t3899 = t3831*t3861;
  t3912 = t3695 + t3899;
  t3971 = -1.*t3831*t999;
  t3972 = -1.*t1338*t3689*t3861;
  t3974 = t3971 + t3972;
  t4039 = Cos(var1[7]);
  t4040 = -1.*t4039;
  t4042 = 1. + t4040;
  t4048 = Sin(var1[7]);
  t4021 = t3917*t3974;
  t4024 = t3912*t3959;
  t4031 = t4021 + t4024;
  t4058 = Cos(var1[4]);
  t3956 = 0.07996*t3939;
  t3962 = -0.135*t3959;
  t3965 = 0. + t3956 + t3962;
  t3977 = 0.135*t3939;
  t3979 = 0.07996*t3959;
  t3995 = 0. + t3977 + t3979;
  t4090 = t3831*t999*t3689;
  t4091 = t1338*t3861;
  t4093 = t4090 + t4091;
  t4095 = -1.*t999*t1338;
  t4096 = t3831*t3689*t3861;
  t4097 = t4095 + t4096;
  t4045 = 0.135*t4042;
  t4051 = 0.08055*t4048;
  t4052 = 0. + t4045 + t4051;
  t4059 = -0.08055*t4042;
  t4063 = 0.135*t4048;
  t4066 = 0. + t4059 + t4063;
  t4109 = t3917*t4097;
  t4112 = t4093*t3959;
  t4115 = t4109 + t4112;
  t4149 = t3831*t4058*t3917*t3861;
  t4150 = t3831*t4058*t999*t3959;
  t4151 = t4149 + t4150;
  t4184 = t4058*t3917*t1338*t3861;
  t4185 = t4058*t999*t1338*t3959;
  t4187 = t4184 + t4185;
  t4222 = -1.*t3917*t3689*t3861;
  t4227 = -1.*t999*t3689*t3959;
  t4229 = t4222 + t4227;
  t4252 = t999*t1338;
  t4253 = -1.*t3831*t3689*t3861;
  t4254 = t4252 + t4253;
  t4100 = t3917*t4093;
  t4265 = t4254*t3959;
  t4266 = t4100 + t4265;
  t4281 = t999*t1338*t3689;
  t4286 = -1.*t3831*t3861;
  t4287 = t4281 + t4286;
  t4297 = t3917*t4287;
  t4304 = t3974*t3959;
  t4305 = t4297 + t4304;
  t4334 = t4058*t999*t3917;
  t4335 = -1.*t4058*t3861*t3959;
  t4336 = t4334 + t4335;
  t4261 = -1.*t4093*t3959;
  t4102 = -1.*t4097*t3959;
  t4104 = t4100 + t4102;
  t4348 = -0.135*t3917;
  t4350 = t4348 + t3979;
  t4354 = 0.07996*t3917;
  t4356 = 0.135*t3959;
  t4357 = t4354 + t4356;
  t4377 = t3831*t999;
  t4381 = t1338*t3689*t3861;
  t4383 = t4377 + t4381;
  t4292 = -1.*t4287*t3959;
  t4402 = -1.*t4383*t3959;
  t4403 = t4297 + t4402;
  t4328 = -1.*t4058*t3917*t3861;
  t4331 = -1.*t4058*t999*t3959;
  t4332 = t4328 + t4331;
  t4333 = -0.01004*t4332;
  t4338 = 0.135*t4039*t4336;
  t4345 = t4336*t4052;
  t4346 = -0.08055*t4336*t4048;
  t4119 = t4039*t4115;
  t4120 = -1.*t3831*t4058*t4048;
  t4122 = t4119 + t4120;
  t4426 = 0.135*t4039;
  t4430 = -0.08055*t4048;
  t4431 = t4426 + t4430;
  t4434 = 0.08055*t4039;
  t4435 = t4434 + t4063;
  t4456 = t3917*t4383;
  t4457 = t4287*t3959;
  t4458 = t4456 + t4457;
  t4074 = -1.*t4058*t4039*t1338;
  t4482 = t4058*t3917*t3861;
  t4483 = t4058*t999*t3959;
  t4484 = t4482 + t4483;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t3912*t3965 - 0.01004*(t3912*t3917 - 1.*t3959*t3974) + t3974*t3995 + t4031*t4052 + 0.135*(t4031*t4039 + t1338*t4048*t4058) - 1.*t1338*t4058*t4066 - 0.08055*(t4031*t4048 + t4074);
  p_output1[10]=t3831*t4058*t4066 + t3965*t4093 + t3995*t4097 - 0.01004*t4104 + t4052*t4115 - 0.08055*(t3831*t4039*t4058 + t4048*t4115) + 0.135*t4122;
  p_output1[11]=0;
  p_output1[12]=t3831*t3861*t3995*t4058 - 1.*t3689*t3831*t4066 + t4052*t4151 + 0.135*(t3689*t3831*t4048 + t4039*t4151) - 0.08055*(-1.*t3689*t3831*t4039 + t4048*t4151) + t3831*t3965*t4058*t999 - 0.01004*(-1.*t3831*t3861*t3959*t4058 + t3831*t3917*t4058*t999);
  p_output1[13]=t1338*t3861*t3995*t4058 - 1.*t1338*t3689*t4066 + t4052*t4187 + 0.135*(t1338*t3689*t4048 + t4039*t4187) - 0.08055*(-1.*t1338*t3689*t4039 + t4048*t4187) + t1338*t3965*t4058*t999 - 0.01004*(-1.*t1338*t3861*t3959*t4058 + t1338*t3917*t4058*t999);
  p_output1[14]=-1.*t3689*t3861*t3995 - 1.*t4058*t4066 + t4052*t4229 + 0.135*(t4048*t4058 + t4039*t4229) - 0.08055*(-1.*t4039*t4058 + t4048*t4229) - 1.*t3689*t3965*t999 - 0.01004*(t3689*t3861*t3959 - 1.*t3689*t3917*t999);
  p_output1[15]=t3995*t4093 + t3965*t4254 - 0.01004*(t3917*t4254 + t4261) + 0.135*t4039*t4266 - 0.08055*t4048*t4266 + t4052*t4266;
  p_output1[16]=t3965*t3974 + t3995*t4287 - 0.01004*(t4021 + t4292) + 0.135*t4039*t4305 - 0.08055*t4048*t4305 + t4052*t4305;
  p_output1[17]=-1.*t3861*t3965*t4058 + t4333 + t4338 + t4345 + t4346 + t3995*t4058*t999;
  p_output1[18]=0.135*t4039*t4104 - 0.08055*t4048*t4104 + t4052*t4104 - 0.01004*(-1.*t3917*t4097 + t4261) + t4093*t4350 + t4097*t4357;
  p_output1[19]=t4287*t4350 + t4357*t4383 - 0.01004*(t4292 - 1.*t3917*t4383) + 0.135*t4039*t4403 - 0.08055*t4048*t4403 + t4052*t4403;
  p_output1[20]=t4333 + t4338 + t4345 + t4346 + t3861*t4058*t4357 + t4058*t4350*t999;
  p_output1[21]=0.135*(-1.*t3831*t4039*t4058 - 1.*t4048*t4115) - 0.08055*t4122 + t3831*t4058*t4431 + t4115*t4435;
  p_output1[22]=t1338*t4058*t4431 + t4435*t4458 - 0.08055*(-1.*t1338*t4048*t4058 + t4039*t4458) + 0.135*(t4074 - 1.*t4048*t4458);
  p_output1[23]=-1.*t3689*t4431 + t4435*t4484 - 0.08055*(t3689*t4048 + t4039*t4484) + 0.135*(t3689*t4039 - 1.*t4048*t4484);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_LeftRotationJoint_mex.hh"

namespace SymExpression
{

void Jp_LeftRotationJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
