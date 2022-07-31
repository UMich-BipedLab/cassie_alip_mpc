/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:11 GMT-04:00
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
  double t319;
  double t447;
  double t1561;
  double t1854;
  double t1670;
  double t1862;
  double t1878;
  double t1882;
  double t2718;
  double t2781;
  double t2031;
  double t2155;
  double t2159;
  double t2179;
  double t2947;
  double t2957;
  double t2959;
  double t3351;
  double t3355;
  double t3395;
  double t2211;
  double t2332;
  double t2358;
  double t2399;
  double t2445;
  double t2473;
  double t2483;
  double t2526;
  double t2590;
  double t2605;
  double t2618;
  double t2620;
  double t2626;
  double t2713;
  double t2716;
  double t4168;
  double t3737;
  double t3748;
  double t3763;
  double t4196;
  double t3609;
  double t3619;
  double t3624;
  double t4385;
  double t4387;
  double t4178;
  double t4210;
  double t4221;
  double t3190;
  double t3233;
  double t3307;
  double t4392;
  double t4397;
  double t4412;
  double t4421;
  double t4428;
  double t4433;
  double t4270;
  double t4285;
  double t4293;
  double t4585;
  double t4593;
  double t4599;
  double t4623;
  double t4519;
  double t4630;
  double t3005;
  double t3008;
  double t3014;
  double t4793;
  double t4805;
  double t4851;
  double t5101;
  double t5104;
  double t5109;
  double t4862;
  double t4863;
  double t4864;
  double t4866;
  double t4982;
  double t4637;
  double t4712;
  double t5424;
  double t5432;
  double t5462;
  double t5466;
  double t5467;
  double t5317;
  double t5318;
  double t5331;
  double t5857;
  double t5874;
  double t5877;
  double t5950;
  double t5958;
  double t5959;
  double t5979;
  double t6230;
  double t6465;
  double t5889;
  double t5907;
  double t5908;
  double t4416;
  double t4448;
  double t5236;
  double t5279;
  double t5289;
  double t7228;
  double t4990;
  double t7106;
  double t7111;
  double t7169;
  double t7171;
  double t6415;
  double t6483;
  double t6122;
  double t6124;
  double t6128;
  double t7595;
  double t5536;
  double t5537;
  double t6793;
  double t6798;
  t319 = Cos(var1[3]);
  t447 = Sin(var1[3]);
  t1561 = Cos(var1[4]);
  t1854 = Sin(var1[4]);
  t1670 = -1.*var2[2]*t1561*t447;
  t1862 = -1.*var2[1]*t1854;
  t1878 = -1.*var1[1]*t1561;
  t1882 = var1[2]*t447*t1854;
  t2718 = Cos(var1[5]);
  t2781 = Sin(var1[5]);
  t2031 = var2[2]*t319*t1561;
  t2155 = var2[0]*t1854;
  t2159 = var1[0]*t1561;
  t2179 = -1.*var1[2]*t319*t1854;
  t2947 = t319*t2718*t1854;
  t2957 = t447*t2781;
  t2959 = t2947 + t2957;
  t3351 = -1.*t319*t2718;
  t3355 = -1.*t447*t1854*t2781;
  t3395 = t3351 + t3355;
  t2211 = -1.*var2[1]*t319*t1561;
  t2332 = var2[0]*t1561*t447;
  t2358 = var1[0]*t319*t1561;
  t2399 = var1[1]*t1561*t447;
  t2445 = t2358 + t2399;
  t2473 = var2[3]*t2445;
  t2483 = var1[1]*t319*t1854;
  t2526 = -1.*var1[0]*t447*t1854;
  t2590 = -1.*var2[3]*t1561*t447;
  t2605 = -1.*var2[4]*t319*t1854;
  t2618 = t2590 + t2605;
  t2620 = var2[3]*t319*t1561;
  t2626 = -1.*var2[4]*t447*t1854;
  t2713 = t2620 + t2626;
  t2716 = -1.*var2[4]*t1561;
  t4168 = Cos(var1[6]);
  t3737 = t2718*t447*t1854;
  t3748 = -1.*t319*t2781;
  t3763 = t3737 + t3748;
  t4196 = Sin(var1[6]);
  t3609 = -1.*t2718*t447;
  t3619 = t319*t1854*t2781;
  t3624 = t3609 + t3619;
  t4385 = -1.*t4168;
  t4387 = 1. + t4385;
  t4178 = t1561*t2718*t4168;
  t4210 = -1.*t1561*t2781*t4196;
  t4221 = t4178 + t4210;
  t3190 = -1.*t2718*t447*t1854;
  t3233 = t319*t2781;
  t3307 = t3190 + t3233;
  t4392 = 0.07996*t4387;
  t4397 = -0.135*t4196;
  t4412 = 0. + t4392 + t4397;
  t4421 = 0.135*t4387;
  t4428 = 0.07996*t4196;
  t4433 = 0. + t4421 + t4428;
  t4270 = t319*t2718;
  t4285 = t447*t1854*t2781;
  t4293 = t4270 + t4285;
  t4585 = -1.*var1[2];
  t4593 = -1.*t1561*t2718*t4412;
  t4599 = -1.*t1561*t2781*t4433;
  t4623 = 0. + t4585 + t4593 + t4599;
  t4519 = t4168*t3395;
  t4630 = t4168*t2959;
  t3005 = t2718*t447;
  t3008 = -1.*t319*t1854*t2781;
  t3014 = t3005 + t3008;
  t4793 = t3763*t4412;
  t4805 = t4293*t4433;
  t4851 = 0. + var1[1] + t4793 + t4805;
  t5101 = t4168*t3763;
  t5104 = -1.*t4293*t4196;
  t5109 = t5101 + t5104;
  t4862 = -1.*t1561*t4168*t2781;
  t4863 = -1.*t1561*t2718*t4196;
  t4864 = t4862 + t4863;
  t4866 = t4851*t4864;
  t4982 = -1.*t3763*t4196;
  t4637 = -1.*t3624*t4196;
  t4712 = t4630 + t4637;
  t5424 = -0.135*t4168;
  t5432 = t5424 + t4428;
  t5462 = 0.07996*t4168;
  t5466 = 0.135*t4196;
  t5467 = t5462 + t5466;
  t5317 = -1.*t2718*t4168*t1854;
  t5318 = t1854*t2781*t4196;
  t5331 = t5317 + t5318;
  t5857 = t1561*t2718*t4412;
  t5874 = t1561*t2781*t4433;
  t5877 = 0. + var1[2] + t5857 + t5874;
  t5950 = -1.*var1[0];
  t5958 = -1.*t2959*t4412;
  t5959 = -1.*t3624*t4433;
  t5979 = 0. + t5950 + t5958 + t5959;
  t6230 = t5979*t4864;
  t6465 = -1.*t2959*t4196;
  t5889 = t319*t1561*t2718*t4168;
  t5907 = -1.*t319*t1561*t2781*t4196;
  t5908 = t5889 + t5907;
  t4416 = t2959*t4412;
  t4448 = t3624*t4433;
  t5236 = t1561*t2718*t4168*t447;
  t5279 = -1.*t1561*t447*t2781*t4196;
  t5289 = t5236 + t5279;
  t7228 = 0. + var1[0] + t4416 + t4448;
  t4990 = t4519 + t4982;
  t7106 = -1.*var1[1];
  t7111 = -1.*t3763*t4412;
  t7169 = -1.*t4293*t4433;
  t7171 = 0. + t7106 + t7111 + t7169;
  t6415 = t4168*t3014;
  t6483 = t6415 + t6465;
  t6122 = t4168*t3307;
  t6124 = -1.*t3395*t4196;
  t6128 = t6122 + t6124;
  t7595 = 0.08055*t4221;
  t5536 = -1.*t4168*t4293;
  t5537 = t5536 + t4982;
  t6793 = -1.*t4168*t3624;
  t6798 = t6793 + t6465;
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
  p_output1[24]=-1.*t319*var2[2] + t447*var1[2]*var2[3];
  p_output1[25]=-1.*t447*var2[2] - 1.*t319*var1[2]*var2[3];
  p_output1[26]=t319*var2[0] + t447*var2[1] + (-1.*t447*var1[0] + t319*var1[1])*var2[3];
  p_output1[27]=-1.*t319*var2[3];
  p_output1[28]=-1.*t447*var2[3];
  p_output1[29]=0;
  p_output1[30]=t1670 + t1862 - 1.*t1561*t319*var1[2]*var2[3] + (t1878 + t1882)*var2[4];
  p_output1[31]=t2031 + t2155 - 1.*t1561*t447*var1[2]*var2[3] + (t2159 + t2179)*var2[4];
  p_output1[32]=t2211 + t2332 + t2473 + (t2483 + t2526)*var2[4];
  p_output1[33]=t2618;
  p_output1[34]=t2713;
  p_output1[35]=t2716;
  p_output1[36]=t1670 + t1862 + (-0.135*t3307 + 0.07996*t3395 - 1.*t1561*t319*var1[2])*var2[3] + (t1878 + t1882 - 0.135*t1561*t2718*t319 + 0.07996*t1561*t2781*t319)*var2[4] + (0.07996*t2959 - 0.135*t3014)*var2[5];
  p_output1[37]=t2031 + t2155 + (-0.135*t2959 + 0.07996*t3624 - 1.*t1561*t447*var1[2])*var2[3] + (t2159 + t2179 - 0.135*t1561*t2718*t447 + 0.07996*t1561*t2781*t447)*var2[4] + (-0.135*t3395 + 0.07996*t3763)*var2[5];
  p_output1[38]=t2211 + t2332 + t2473 + (t2483 + t2526 + 0.135*t1854*t2718 - 0.07996*t1854*t2781)*var2[4] + (0.07996*t1561*t2718 + 0.135*t1561*t2781)*var2[5];
  p_output1[39]=t2618;
  p_output1[40]=t2713;
  p_output1[41]=t2716;
  p_output1[42]=t4221*var2[1] + (-1.*t3763*t4168 + t4196*t4293)*var2[2] + (t4221*(t4416 + t4448) - 0.135*t1561*t447 + 0.08055*(t3307*t4196 + t4519) + t4623*t4712)*var2[3] + (-0.135*t1854*t319 + 0.08055*(t1561*t2781*t319*t4168 + t1561*t2718*t319*t4196) + t4221*(t1561*t2718*t4412*t447 + t1561*t2781*t4433*t447) + (t1854*t2718*t4412 + t1854*t2781*t4433)*t5109 + t4623*t5289 + t4851*t5331)*var2[4] + (t4221*(t3395*t4412 + t3763*t4433) + 0.08055*(t3014*t4196 + t4630) + t4866 + t4623*t4990 + (t1561*t2781*t4412 - 1.*t1561*t2718*t4433)*t5109)*var2[5] + (0.08055*t4712 + t4866 + t5109*(-1.*t1561*t2718*t5432 - 1.*t1561*t2781*t5467) + t4221*(t3763*t5432 + t4293*t5467) + t4623*t5537)*var2[6];
  p_output1[43]=(-1.*t1561*t2718*t4168 + t1561*t2781*t4196)*var2[0] + t4712*var2[2] + (0.135*t1561*t319 + 0.08055*(t3624*t4168 + t2959*t4196) + t4221*(-1.*t3307*t4412 - 1.*t3395*t4433) + t5877*t6128)*var2[3] + (t4221*(-1.*t1561*t2718*t319*t4412 - 1.*t1561*t2781*t319*t4433) - 0.135*t1854*t447 + 0.08055*(t1561*t2781*t4168*t447 + t1561*t2718*t4196*t447) + (-1.*t1854*t2718*t4412 - 1.*t1854*t2781*t4433)*t4712 + t5877*t5908 + t5331*t5979)*var2[4] + (t4221*(-1.*t3014*t4412 - 1.*t2959*t4433) + (-1.*t1561*t2781*t4412 + t1561*t2718*t4433)*t4712 + 0.08055*(t3395*t4196 + t5101) + t6230 + t5877*t6483)*var2[5] + (0.08055*t5109 + t4712*(t1561*t2718*t5432 + t1561*t2781*t5467) + t4221*(-1.*t2959*t5432 - 1.*t3624*t5467) + t6230 + t5877*t6798)*var2[6];
  p_output1[44]=t5109*var2[0] + (-1.*t2959*t4168 + t3624*t4196)*var2[1] + ((t3307*t4412 + t3395*t4433)*t5109 + t4712*(t5958 + t5959) + t6128*t7171 + t4712*t7228)*var2[3] + (-0.135*t1561 + 0.08055*(-1.*t1854*t2781*t4168 - 1.*t1854*t2718*t4196) + (-1.*t1561*t2718*t4412*t447 - 1.*t1561*t2781*t4433*t447)*t4712 + (t1561*t2718*t319*t4412 + t1561*t2781*t319*t4433)*t5109 + t5908*t7171 + t5289*t7228)*var2[4] + ((-1.*t3395*t4412 - 1.*t3763*t4433)*t4712 + (t3014*t4412 + t2959*t4433)*t5109 + t6483*t7171 + t4990*t7228 + t7595)*var2[5] + (t5109*(t2959*t5432 + t3624*t5467) + t4712*(-1.*t3763*t5432 - 1.*t4293*t5467) + t6798*t7171 + t5537*t7228 + t7595)*var2[6];
  p_output1[45]=t6128*var2[3] + t5908*var2[4] + t6483*var2[5] + t6798*var2[6];
  p_output1[46]=t4712*var2[3] + t5289*var2[4] + t4990*var2[5] + t5537*var2[6];
  p_output1[47]=t5331*var2[4] + t4864*var2[5] + t4864*var2[6];
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

#include "dJs_LeftHip_mex.hh"

namespace SymExpression
{

void dJs_LeftHip_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
