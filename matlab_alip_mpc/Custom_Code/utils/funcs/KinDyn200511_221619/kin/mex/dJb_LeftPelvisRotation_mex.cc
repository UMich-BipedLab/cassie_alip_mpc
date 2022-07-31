/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:39 GMT-04:00
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
  double t190;
  double t3;
  double t176;
  double t955;
  double t1805;
  double t2689;
  double t2823;
  double t191;
  double t3127;
  double t3184;
  double t3265;
  double t3329;
  double t3431;
  double t3521;
  double t3568;
  double t3628;
  double t3987;
  double t2332;
  double t2849;
  double t2857;
  double t4408;
  double t5456;
  double t5617;
  double t5622;
  double t5630;
  double t5634;
  double t5654;
  double t5;
  double t7443;
  double t7526;
  double t7817;
  double t4746;
  double t5053;
  double t8223;
  double t8231;
  double t8291;
  double t5686;
  double t6096;
  double t6253;
  double t8971;
  double t8976;
  double t8981;
  double t8984;
  double t9009;
  double t9010;
  double t9018;
  double t9023;
  double t9039;
  double t9051;
  double t9058;
  double t9064;
  double t9065;
  double t8948;
  double t9066;
  double t9102;
  double t9149;
  double t9159;
  double t9116;
  double t9120;
  double t9121;
  double t9135;
  double t9139;
  double t9143;
  double t8910;
  double t8931;
  double t9164;
  double t9179;
  double t9182;
  double t9183;
  double t9185;
  double t9186;
  double t9188;
  double t9190;
  double t9221;
  double t9222;
  double t9224;
  double t9226;
  double t9227;
  double t9233;
  double t9234;
  double t9236;
  double t9202;
  double t9204;
  double t9207;
  double t9208;
  double t9223;
  double t9229;
  double t9231;
  double t9216;
  double t9218;
  double t9219;
  double t9220;
  double t9280;
  double t9243;
  double t9244;
  double t9245;
  double t9273;
  double t9274;
  double t9275;
  double t9251;
  double t9304;
  double t9307;
  double t9308;
  double t9310;
  double t9311;
  double t9349;
  double t9355;
  double t9356;
  double t9358;
  double t9379;
  double t9380;
  double t9381;
  double t9402;
  double t9407;
  double t9408;
  double t9409;
  double t8800;
  double t8817;
  double t8820;
  double t8823;
  double t8827;
  double t8852;
  double t8869;
  double t8871;
  double t8909;
  double t9232;
  double t9250;
  double t9435;
  double t9276;
  double t9438;
  double t9439;
  double t9441;
  double t9442;
  double t9443;
  double t9444;
  double t9445;
  double t9289;
  t190 = Cos(var1[3]);
  t3 = Cos(var1[4]);
  t176 = Sin(var1[3]);
  t955 = Cos(var1[6]);
  t1805 = Sin(var1[5]);
  t2689 = Cos(var1[5]);
  t2823 = Sin(var1[6]);
  t191 = Sin(var1[4]);
  t3127 = -1.*t955*t1805;
  t3184 = -1.*t2689*t2823;
  t3265 = t3127 + t3184;
  t3329 = -1.*t176*t3265;
  t3431 = t2689*t955;
  t3521 = -1.*t1805*t2823;
  t3568 = t3431 + t3521;
  t3628 = t190*t191*t3568;
  t3987 = t3329 + t3628;
  t2332 = t955*t1805;
  t2849 = t2689*t2823;
  t2857 = 0. + t2332 + t2849;
  t4408 = 0. + t3431 + t3521;
  t5456 = t190*t191*t3265;
  t5617 = -1.*t2689*t955;
  t5622 = t1805*t2823;
  t5630 = t5617 + t5622;
  t5634 = -1.*t176*t5630;
  t5654 = t5456 + t5634;
  t5 = 0. + t3;
  t7443 = t190*t3265;
  t7526 = t176*t191*t3568;
  t7817 = t7443 + t7526;
  t4746 = t191*t2857;
  t5053 = 0. + t4746;
  t8223 = t176*t191*t3265;
  t8231 = t190*t5630;
  t8291 = t8223 + t8231;
  t5686 = 0. + t3127 + t3184;
  t6096 = t191*t4408;
  t6253 = 0. + t6096;
  t8971 = -1.*t955;
  t8976 = 1. + t8971;
  t8981 = 0.135*t8976;
  t8984 = 0.1351*t955;
  t9009 = -0.0179*t2823;
  t9010 = 0. + t8981 + t8984 + t9009;
  t9018 = t1805*t9010;
  t9023 = 0.07996*t8976;
  t9039 = 0.09786*t955;
  t9051 = 0.00009999999999998899*t2823;
  t9058 = 0. + t9023 + t9039 + t9051;
  t9064 = t2689*t9058;
  t9065 = 0. + t9018 + t9064;
  t8948 = 0.05485*t191;
  t9066 = t3*t9065;
  t9102 = 0. + t8948 + t9066;
  t9149 = t3*t2857;
  t9159 = 0. + t9149;
  t9116 = -0.05485*t3;
  t9120 = t191*t9065;
  t9121 = 0. + t9116 + t9120;
  t9135 = 0.05485*t3;
  t9139 = -1.*t191*t9065;
  t9143 = t9135 + t9139;
  t8910 = t3*t4408;
  t8931 = 0. + t8910;
  t9164 = t8948 + t9066;
  t9179 = t2689*t9010;
  t9182 = -1.*t1805*t9058;
  t9183 = 0. + t9179 + t9182;
  t9185 = -1.*t9183*t4408;
  t9186 = -1.*t9102*t9159;
  t9188 = -1.*t9121*t5053;
  t9190 = t9185 + t9186 + t9188;
  t9221 = 0.00009999999999998899*t955;
  t9222 = t9221 + t9009;
  t9224 = -0.0179*t955;
  t9226 = -0.00009999999999998899*t2823;
  t9227 = t9224 + t9226;
  t9233 = t2689*t9222;
  t9234 = t1805*t9227;
  t9236 = t9233 + t9234;
  t9202 = t9183*t5686;
  t9204 = t9102*t8931;
  t9207 = t9121*t6253;
  t9208 = t9202 + t9204 + t9207;
  t9223 = -1.*t1805*t9222;
  t9229 = t2689*t9227;
  t9231 = t9223 + t9229;
  t9216 = t3*t3265*t9190;
  t9218 = -1.*t9183*t3265;
  t9219 = -1.*t3*t9102*t3568;
  t9220 = -1.*t191*t9121*t3568;
  t9280 = t9179 + t9182;
  t9243 = t3*t3568*t9208;
  t9244 = t3*t9102*t3265;
  t9245 = t191*t9121*t3265;
  t9273 = -1.*t1805*t9010;
  t9274 = -1.*t2689*t9058;
  t9275 = t9273 + t9274;
  t9251 = t9183*t5630;
  t9304 = -1.*t191;
  t9307 = 0. + t9304;
  t9308 = t9307*t9102;
  t9310 = t5*t9121;
  t9311 = 0. + t9308 + t9310;
  t9349 = t3*t9311*t3265;
  t9355 = -1.*t3*t9102*t3265;
  t9356 = -1.*t191*t9121*t3265;
  t9358 = -1.*t9183*t5630;
  t9379 = -1.*t9307*t9102;
  t9380 = -1.*t5*t9121;
  t9381 = 0. + t9379 + t9380;
  t9402 = t3*t9381*t3568;
  t9407 = t9183*t3265;
  t9408 = t3*t9102*t3568;
  t9409 = t191*t9121*t3568;
  t8800 = -1.*var2[4]*t3;
  t8817 = -1.*var2[4]*t191*t2857;
  t8820 = var2[5]*t3*t3568;
  t8823 = var2[6]*t3*t3568;
  t8827 = t8817 + t8820 + t8823;
  t8852 = var2[5]*t3*t3265;
  t8869 = var2[6]*t3*t3265;
  t8871 = -1.*var2[4]*t191*t4408;
  t8909 = t8852 + t8869 + t8871;
  t9232 = -1.*t9231*t4408;
  t9250 = t9231*t5686;
  t9435 = -1.*t9065*t3568;
  t9276 = -1.*t9275*t4408;
  t9438 = t9065*t4408;
  t9439 = 0. + t9202 + t9438;
  t9441 = t3265*t9439;
  t9442 = -1.*t9065*t2857;
  t9443 = 0. + t9442 + t9185;
  t9444 = t5630*t9443;
  t9445 = t9065*t3265;
  t9289 = t9275*t5686;
  p_output1[0]=-1.*t176*t5*var2[3] - 1.*t190*t191*var2[4];
  p_output1[1]=(-1.*t190*t4408 - 1.*t176*t5053)*var2[3] + t190*t2857*t3*var2[4] + t3987*var2[5] + t3987*var2[6];
  p_output1[2]=(-1.*t190*t5686 - 1.*t176*t6253)*var2[3] + t190*t3*t4408*var2[4] + t5654*var2[5] + t5654*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t190*t5*var2[3] - 1.*t176*t191*var2[4];
  p_output1[7]=(-1.*t176*t4408 + t190*t5053)*var2[3] + t176*t2857*t3*var2[4] + t7817*var2[5] + t7817*var2[6];
  p_output1[8]=(-1.*t176*t5686 + t190*t6253)*var2[3] + t176*t3*t4408*var2[4] + t8291*var2[5] + t8291*var2[6];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t8800;
  p_output1[13]=t8827;
  p_output1[14]=t8909;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t8931*(t191*t2857*t9102 - 1.*t2857*t3*t9121 - 1.*t9143*t9159 - 1.*t5053*t9164) + t9159*(-1.*t191*t4408*t9102 + t3*t4408*t9121 + t8931*t9143 + t6253*t9164) - 1.*t191*t4408*t9190 - 1.*t191*t2857*t9208)*var2[4] + (t9216 + t9243 + t8931*(t9218 + t9219 + t9220 + t9276 - 1.*t191*t5053*t9280 - 1.*t3*t9159*t9280) + t9159*(t9244 + t9245 + t9251 + t191*t6253*t9280 + t3*t8931*t9280 + t9289))*var2[5] + (t9216 + t8931*(t9218 + t9219 + t9220 + t9232 - 1.*t191*t5053*t9236 - 1.*t3*t9159*t9236) + t9243 + t9159*(t191*t6253*t9236 + t3*t8931*t9236 + t9244 + t9245 + t9250 + t9251))*var2[6];
  p_output1[19]=(-1.*t3*(-1.*t8931*t9102 - 1.*t6253*t9121 - 1.*t5686*t9183) + (t191*t4408*t9102 - 1.*t3*t4408*t9121 - 1.*t8931*t9143 - 1.*t6253*t9164)*t9307 + t8931*(-1.*t3*t9102 - 1.*t191*t9121 + t5*t9164 + t9143*t9307) - 1.*t191*t4408*t9311)*var2[4] + (t8931*(t191*t5*t9280 + t3*t9280*t9307) + t9349 + t9307*(-1.*t5686*t9275 - 1.*t191*t6253*t9280 - 1.*t3*t8931*t9280 + t9355 + t9356 + t9358))*var2[5] + (t8931*(t191*t5*t9236 + t3*t9236*t9307) + t9349 + t9307*(-1.*t5686*t9231 - 1.*t191*t6253*t9236 - 1.*t3*t8931*t9236 + t9355 + t9356 + t9358))*var2[6];
  p_output1[20]=(-1.*t3*(t5053*t9121 + t9102*t9159 + t4408*t9183) + (-1.*t191*t2857*t9102 + t2857*t3*t9121 + t9143*t9159 + t5053*t9164)*t9307 + t9159*(t3*t9102 + t191*t9121 - 1.*t5*t9164 - 1.*t9143*t9307) - 1.*t191*t2857*t9381)*var2[4] + (t9159*(-1.*t191*t5*t9280 - 1.*t3*t9280*t9307) + t9402 + t9307*(t4408*t9275 + t191*t5053*t9280 + t3*t9159*t9280 + t9407 + t9408 + t9409))*var2[5] + (t9159*(-1.*t191*t5*t9236 - 1.*t3*t9236*t9307) + t9402 + t9307*(t4408*t9231 + t191*t5053*t9236 + t3*t9159*t9236 + t9407 + t9408 + t9409))*var2[6];
  p_output1[21]=t8800;
  p_output1[22]=t8827;
  p_output1[23]=t8909;
  p_output1[24]=(t5686*(t9218 + t9276 - 1.*t2857*t9280 + t9435) + t9441 + t9444 + t4408*(t9251 + t4408*t9280 + t9289 + t9445))*var2[5] + (t5686*(t9218 + t9232 - 1.*t2857*t9236 + t9435) + t9441 + t9444 + t4408*(t4408*t9236 + t9250 + t9251 + t9445))*var2[6];
  p_output1[25]=-0.05485*t5630*var2[5] - 0.05485*t5630*var2[6];
  p_output1[26]=0.05485*t3265*var2[5] + 0.05485*t3265*var2[6];
  p_output1[27]=0;
  p_output1[28]=t3265*var2[5] + t3265*var2[6];
  p_output1[29]=t5630*var2[5] + t5630*var2[6];
  p_output1[30]=0;
  p_output1[31]=(t2823*t9058 + t2823*t9227 + t9010*t955 - 1.*t9222*t955)*var2[6];
  p_output1[32]=(-1.*t2823*t9010 + t2823*t9222 + t9058*t955 + t9227*t955)*var2[6];
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

#include "dJb_LeftPelvisRotation_mex.hh"

namespace SymExpression
{

void dJb_LeftPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
