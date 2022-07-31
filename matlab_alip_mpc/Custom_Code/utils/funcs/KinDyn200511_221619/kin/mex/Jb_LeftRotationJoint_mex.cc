/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:43 GMT-04:00
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
  double t997;
  double t755;
  double t790;
  double t1035;
  double t543;
  double t2562;
  double t1405;
  double t1565;
  double t2894;
  double t2978;
  double t2983;
  double t3303;
  double t4033;
  double t4183;
  double t4188;
  double t4207;
  double t4209;
  double t4028;
  double t890;
  double t1081;
  double t1104;
  double t1595;
  double t1656;
  double t1732;
  double t1740;
  double t2166;
  double t2980;
  double t3788;
  double t3820;
  double t4071;
  double t4082;
  double t4109;
  double t4136;
  double t4148;
  double t4150;
  double t4164;
  double t4189;
  double t4221;
  double t4239;
  double t4249;
  double t4251;
  double t4252;
  double t4255;
  double t4256;
  double t4258;
  double t4263;
  double t4460;
  double t4475;
  double t4477;
  double t4493;
  double t4494;
  double t4505;
  double t4509;
  double t4476;
  double t4513;
  double t4517;
  double t4525;
  double t4531;
  double t4533;
  double t4536;
  double t4543;
  double t4545;
  double t4570;
  double t4572;
  double t4579;
  double t4581;
  double t4586;
  double t4588;
  double t4455;
  double t4456;
  double t4457;
  double t4420;
  double t4443;
  double t4447;
  double t4530;
  double t4553;
  double t4559;
  double t4608;
  double t4614;
  double t4620;
  double t4580;
  double t4593;
  double t4601;
  double t4403;
  double t4405;
  double t4562;
  double t4637;
  double t4654;
  double t4664;
  double t4678;
  double t4695;
  double t4713;
  double t4720;
  t997 = Cos(var1[5]);
  t755 = Cos(var1[6]);
  t790 = Sin(var1[5]);
  t1035 = Sin(var1[6]);
  t543 = Sin(var1[3]);
  t2562 = Sin(var1[7]);
  t1405 = Cos(var1[3]);
  t1565 = Sin(var1[4]);
  t2894 = t755*t2562;
  t2978 = 0. + t2894;
  t2983 = t1035*t2562;
  t3303 = 0. + t2983;
  t4033 = Cos(var1[7]);
  t4183 = -1.*t755*t4033;
  t4188 = 0. + t4183;
  t4207 = -1.*t4033*t1035;
  t4209 = 0. + t4207;
  t4028 = Cos(var1[4]);
  t890 = t755*t790;
  t1081 = t997*t1035;
  t1104 = 0. + t890 + t1081;
  t1595 = -1.*t997*t755;
  t1656 = t790*t1035;
  t1732 = 0. + t1595 + t1656;
  t1740 = t1565*t1732;
  t2166 = 0. + t1740;
  t2980 = t997*t2978;
  t3788 = -1.*t790*t3303;
  t3820 = 0. + t2980 + t3788;
  t4071 = 0. + t4033;
  t4082 = t4028*t4071;
  t4109 = t790*t2978;
  t4136 = t997*t3303;
  t4148 = 0. + t4109 + t4136;
  t4150 = t1565*t4148;
  t4164 = 0. + t4082 + t4150;
  t4189 = t997*t4188;
  t4221 = -1.*t790*t4209;
  t4239 = 0. + t4189 + t4221;
  t4249 = t4188*t790;
  t4251 = t997*t4209;
  t4252 = 0. + t4249 + t4251;
  t4255 = t1565*t4252;
  t4256 = 0. + t2562;
  t4258 = t4028*t4256;
  t4263 = 0. + t4255 + t4258;
  t4460 = -1.*t755;
  t4475 = 1. + t4460;
  t4477 = -1.*t4033;
  t4493 = 1. + t4477;
  t4494 = 0.135*t4493;
  t4505 = 0.135*t4033;
  t4509 = 0. + t4494 + t4505;
  t4476 = 0.135*t4475;
  t4513 = t755*t4509;
  t4517 = 0.09*t1035;
  t4525 = 0. + t4476 + t4513 + t4517;
  t4531 = 0.07996*t4475;
  t4533 = -0.01004*t755;
  t4536 = -0.135*t1035;
  t4543 = t4509*t1035;
  t4545 = 0. + t4531 + t4533 + t4536 + t4543;
  t4570 = -0.08055*t4493;
  t4572 = -0.08055*t4033;
  t4579 = 0. + t4570 + t4572;
  t4581 = t790*t4525;
  t4586 = t997*t4545;
  t4588 = 0. + t4581 + t4586;
  t4455 = t4028*t4252;
  t4456 = -1.*t1565*t4256;
  t4457 = 0. + t4455 + t4456;
  t4420 = -1.*t4071*t1565;
  t4443 = t4028*t4148;
  t4447 = 0. + t4420 + t4443;
  t4530 = t997*t4525;
  t4553 = -1.*t790*t4545;
  t4559 = 0. + t4530 + t4553;
  t4608 = -1.*t4579*t1565;
  t4614 = t4028*t4588;
  t4620 = 0. + t4608 + t4614;
  t4580 = t4028*t4579;
  t4593 = t1565*t4588;
  t4601 = 0. + t4580 + t4593;
  t4403 = t4028*t1732;
  t4405 = 0. + t4403;
  t4562 = t4559*t4239;
  t4637 = -1.*t4559*t3820;
  t4654 = t1104*t4559;
  t4664 = -1.*t4559*t4239;
  t4678 = -1.*t1104*t4559;
  t4695 = t4559*t3820;
  t4713 = t4579*t4256;
  t4720 = -1.*t4579*t4071;
  p_output1[0]=0. + t1405*t2166 - 1.*t1104*t543;
  p_output1[1]=0. + t1405*t4164 - 1.*t3820*t543;
  p_output1[2]=0. + t1405*t4263 - 1.*t4239*t543;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1104*t1405 + t2166*t543;
  p_output1[7]=0. + t1405*t3820 + t4164*t543;
  p_output1[8]=0. + t1405*t4239 + t4263*t543;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4405;
  p_output1[13]=t4447;
  p_output1[14]=t4457;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t4447*(t4562 + t4263*t4601 + t4457*t4620) + t4457*(-1.*t4164*t4601 - 1.*t4447*t4620 + t4637);
  p_output1[19]=t4457*(t2166*t4601 + t4405*t4620 + t4654) + t4405*(-1.*t4263*t4601 - 1.*t4457*t4620 + t4664);
  p_output1[20]=t4447*(-1.*t2166*t4601 - 1.*t4405*t4620 + t4678) + t4405*(t4164*t4601 + t4447*t4620 + t4695);
  p_output1[21]=t4405;
  p_output1[22]=t4447;
  p_output1[23]=t4457;
  p_output1[24]=0. + t3820*(t4562 + t4252*t4588 + t4713) + t4239*(-1.*t4148*t4588 + t4637 + t4720);
  p_output1[25]=t4239*(0. + t1732*t4588 + t4654) + t1104*(-1.*t4256*t4579 - 1.*t4252*t4588 + t4664);
  p_output1[26]=t3820*(0. - 1.*t1732*t4588 + t4678) + t1104*(t4071*t4579 + t4148*t4588 + t4695);
  p_output1[27]=t1104;
  p_output1[28]=t3820;
  p_output1[29]=t4239;
  p_output1[30]=0. + t4071*(t4188*t4525 + t4209*t4545 + t4713) + t4256*(-1.*t2978*t4525 - 1.*t3303*t4545 + t4720);
  p_output1[31]=0. + t4256*(0. + t1035*t4525 - 1.*t4545*t755);
  p_output1[32]=0. + t4071*(0. - 1.*t1035*t4525 + t4545*t755);
  p_output1[33]=0.;
  p_output1[34]=t4071;
  p_output1[35]=t4256;
  p_output1[36]=0.135 + t4033*(0. - 1.*t4033*t4509 + t2562*t4579) + t2562*(0. - 1.*t2562*t4509 - 1.*t4033*t4579);
  p_output1[37]=0. + 0.09*t2562;
  p_output1[38]=0. - 0.09*t4033;
  p_output1[39]=0.;
  p_output1[40]=t4071;
  p_output1[41]=t4256;
  p_output1[42]=0.;
  p_output1[43]=0.;
  p_output1[44]=0.;
  p_output1[45]=-1.;
  p_output1[46]=0.;
  p_output1[47]=0.;
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

#include "Jb_LeftRotationJoint_mex.hh"

namespace SymExpression
{

void Jb_LeftRotationJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
