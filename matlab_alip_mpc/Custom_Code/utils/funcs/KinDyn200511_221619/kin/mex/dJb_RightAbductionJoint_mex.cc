/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:49 GMT-04:00
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
  double t574;
  double t41;
  double t257;
  double t1652;
  double t2234;
  double t2549;
  double t2956;
  double t899;
  double t3786;
  double t3793;
  double t3983;
  double t3993;
  double t4236;
  double t4255;
  double t4274;
  double t4423;
  double t4451;
  double t2482;
  double t2965;
  double t3168;
  double t4997;
  double t7342;
  double t7412;
  double t7431;
  double t7717;
  double t7730;
  double t7740;
  double t186;
  double t8467;
  double t8483;
  double t8596;
  double t5389;
  double t5396;
  double t8741;
  double t8742;
  double t8747;
  double t7880;
  double t8036;
  double t8061;
  double t8989;
  double t8990;
  double t8992;
  double t8997;
  double t8998;
  double t8999;
  double t9003;
  double t9004;
  double t9005;
  double t9032;
  double t9036;
  double t8977;
  double t9038;
  double t9054;
  double t9152;
  double t9153;
  double t9080;
  double t9088;
  double t9123;
  double t9125;
  double t9140;
  double t9147;
  double t8975;
  double t8976;
  double t9157;
  double t9174;
  double t9175;
  double t9176;
  double t9179;
  double t9194;
  double t9196;
  double t9243;
  double t9273;
  double t9274;
  double t9275;
  double t9276;
  double t9291;
  double t9297;
  double t9299;
  double t9324;
  double t9306;
  double t9316;
  double t9317;
  double t9319;
  double t9282;
  double t9284;
  double t9286;
  double t9308;
  double t9341;
  double t9346;
  double t9347;
  double t9348;
  double t9349;
  double t9350;
  double t9351;
  double t9352;
  double t9353;
  double t9408;
  double t9409;
  double t9411;
  double t9412;
  double t9413;
  double t9414;
  double t9415;
  double t8885;
  double t8911;
  double t8926;
  double t8927;
  double t8929;
  double t8930;
  double t8953;
  double t8957;
  double t8958;
  double t9462;
  double t9323;
  double t9465;
  double t9466;
  double t9467;
  double t9468;
  double t9469;
  double t9470;
  double t9471;
  double t9331;
  t574 = Cos(var1[3]);
  t41 = Cos(var1[4]);
  t257 = Sin(var1[3]);
  t1652 = Cos(var1[5]);
  t2234 = Sin(var1[13]);
  t2549 = Cos(var1[13]);
  t2956 = Sin(var1[5]);
  t899 = Sin(var1[4]);
  t3786 = -1.*t1652*t2234;
  t3793 = -1.*t2549*t2956;
  t3983 = t3786 + t3793;
  t3993 = -1.*t257*t3983;
  t4236 = t2549*t1652;
  t4255 = -1.*t2234*t2956;
  t4274 = t4236 + t4255;
  t4423 = t574*t899*t4274;
  t4451 = t3993 + t4423;
  t2482 = t1652*t2234;
  t2965 = t2549*t2956;
  t3168 = 0. + t2482 + t2965;
  t4997 = 0. + t4236 + t4255;
  t7342 = t574*t899*t3983;
  t7412 = -1.*t2549*t1652;
  t7431 = t2234*t2956;
  t7717 = t7412 + t7431;
  t7730 = -1.*t257*t7717;
  t7740 = t7342 + t7730;
  t186 = 0. + t41;
  t8467 = t574*t3983;
  t8483 = t257*t899*t4274;
  t8596 = t8467 + t8483;
  t5389 = t899*t3168;
  t5396 = 0. + t5389;
  t8741 = t257*t899*t3983;
  t8742 = t574*t7717;
  t8747 = t8741 + t8742;
  t7880 = 0. + t3786 + t3793;
  t8036 = t899*t4997;
  t8061 = 0. + t8036;
  t8989 = -1.*t2549;
  t8990 = 1. + t8989;
  t8992 = 0.07996*t8990;
  t8997 = 0.07996*t2549;
  t8998 = 0. + t8992 + t8997;
  t8999 = t8998*t1652;
  t9003 = -0.135*t8990;
  t9004 = -0.135*t2549;
  t9005 = 0. + t9003 + t9004;
  t9032 = t9005*t2956;
  t9036 = 0. + t8999 + t9032;
  t8977 = 0.08055*t899;
  t9038 = t41*t9036;
  t9054 = 0. + t8977 + t9038;
  t9152 = t41*t3168;
  t9153 = 0. + t9152;
  t9080 = -0.08055*t41;
  t9088 = t899*t9036;
  t9123 = 0. + t9080 + t9088;
  t9125 = 0.08055*t41;
  t9140 = -1.*t899*t9036;
  t9147 = t9125 + t9140;
  t8975 = t41*t4997;
  t8976 = 0. + t8975;
  t9157 = t8977 + t9038;
  t9174 = t9005*t1652;
  t9175 = -1.*t8998*t2956;
  t9176 = 0. + t9174 + t9175;
  t9179 = -1.*t9176*t4997;
  t9194 = -1.*t9054*t9153;
  t9196 = -1.*t9123*t5396;
  t9243 = t9179 + t9194 + t9196;
  t9273 = t9176*t7880;
  t9274 = t9054*t8976;
  t9275 = t9123*t8061;
  t9276 = t9273 + t9274 + t9275;
  t9291 = -1.*t9176*t3983;
  t9297 = -1.*t41*t4274*t9054;
  t9299 = -1.*t899*t4274*t9123;
  t9324 = t9174 + t9175;
  t9306 = t41*t3983*t9243;
  t9316 = -1.*t8998*t1652;
  t9317 = -1.*t9005*t2956;
  t9319 = t9316 + t9317;
  t9282 = t9176*t7717;
  t9284 = t41*t3983*t9054;
  t9286 = t899*t3983*t9123;
  t9308 = t41*t4274*t9276;
  t9341 = -1.*t899;
  t9346 = 0. + t9341;
  t9347 = t9346*t9054;
  t9348 = t186*t9123;
  t9349 = 0. + t9347 + t9348;
  t9350 = t41*t3983*t9349;
  t9351 = -1.*t9176*t7717;
  t9352 = -1.*t41*t3983*t9054;
  t9353 = -1.*t899*t3983*t9123;
  t9408 = -1.*t9346*t9054;
  t9409 = -1.*t186*t9123;
  t9411 = 0. + t9408 + t9409;
  t9412 = t41*t4274*t9411;
  t9413 = t9176*t3983;
  t9414 = t41*t4274*t9054;
  t9415 = t899*t4274*t9123;
  t8885 = -1.*var2[4]*t41;
  t8911 = -1.*var2[4]*t899*t3168;
  t8926 = var2[13]*t41*t4274;
  t8927 = var2[5]*t41*t4274;
  t8929 = t8911 + t8926 + t8927;
  t8930 = var2[13]*t41*t3983;
  t8953 = var2[5]*t41*t3983;
  t8957 = -1.*var2[4]*t899*t4997;
  t8958 = t8930 + t8953 + t8957;
  t9462 = -1.*t9036*t4274;
  t9323 = -1.*t9319*t4997;
  t9465 = t9036*t4997;
  t9466 = 0. + t9273 + t9465;
  t9467 = t3983*t9466;
  t9468 = -1.*t9036*t3168;
  t9469 = 0. + t9468 + t9179;
  t9470 = t7717*t9469;
  t9471 = t9036*t3983;
  t9331 = t9319*t7880;
  p_output1[0]=-1.*t186*t257*var2[3] - 1.*t574*t899*var2[4];
  p_output1[1]=(-1.*t257*t5396 - 1.*t4997*t574)*var2[3] + t3168*t41*t574*var2[4] + t4451*var2[5] + t4451*var2[13];
  p_output1[2]=(-1.*t574*t7880 - 1.*t257*t8061)*var2[3] + t41*t4997*t574*var2[4] + t7740*var2[5] + t7740*var2[13];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t186*t574*var2[3] - 1.*t257*t899*var2[4];
  p_output1[7]=(-1.*t257*t4997 + t5396*t574)*var2[3] + t257*t3168*t41*var2[4] + t8596*var2[5] + t8596*var2[13];
  p_output1[8]=(-1.*t257*t7880 + t574*t8061)*var2[3] + t257*t41*t4997*var2[4] + t8747*var2[5] + t8747*var2[13];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t8885;
  p_output1[13]=t8929;
  p_output1[14]=t8958;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t8976*(t3168*t899*t9054 - 1.*t3168*t41*t9123 - 1.*t9147*t9153 - 1.*t5396*t9157) + t9153*(-1.*t4997*t899*t9054 + t41*t4997*t9123 + t8976*t9147 + t8061*t9157) - 1.*t4997*t899*t9243 - 1.*t3168*t899*t9276)*var2[4] + (t9306 + t9308 + t8976*(t9291 + t9297 + t9299 + t9323 - 1.*t5396*t899*t9324 - 1.*t41*t9153*t9324) + t9153*(t9282 + t9284 + t9286 + t41*t8976*t9324 + t8061*t899*t9324 + t9331))*var2[5] + (t9153*(0. + t9282 + t9284 + t9286) + t8976*(0. + t9291 + t9297 + t9299) + t9306 + t9308)*var2[13];
  p_output1[19]=(-1.*t41*(-1.*t8976*t9054 - 1.*t8061*t9123 - 1.*t7880*t9176) + (t4997*t899*t9054 - 1.*t41*t4997*t9123 - 1.*t8976*t9147 - 1.*t8061*t9157)*t9346 + t8976*(-1.*t41*t9054 - 1.*t899*t9123 + t186*t9157 + t9147*t9346) - 1.*t4997*t899*t9349)*var2[4] + (t8976*(t186*t899*t9324 + t41*t9324*t9346) + t9350 + t9346*(-1.*t7880*t9319 - 1.*t41*t8976*t9324 - 1.*t8061*t899*t9324 + t9351 + t9352 + t9353))*var2[5] + (0. + t9350 + t9346*(0. + t9351 + t9352 + t9353))*var2[13];
  p_output1[20]=(-1.*t41*(t5396*t9123 + t9054*t9153 + t4997*t9176) + (-1.*t3168*t899*t9054 + t3168*t41*t9123 + t9147*t9153 + t5396*t9157)*t9346 + t9153*(t41*t9054 + t899*t9123 - 1.*t186*t9157 - 1.*t9147*t9346) - 1.*t3168*t899*t9411)*var2[4] + (t9153*(-1.*t186*t899*t9324 - 1.*t41*t9324*t9346) + t9412 + t9346*(t4997*t9319 + t5396*t899*t9324 + t41*t9153*t9324 + t9413 + t9414 + t9415))*var2[5] + (0. + t9412 + t9346*(0. + t9413 + t9414 + t9415))*var2[13];
  p_output1[21]=t8885;
  p_output1[22]=t8929;
  p_output1[23]=t8958;
  p_output1[24]=(t7880*(t9291 + t9323 - 1.*t3168*t9324 + t9462) + t9467 + t9470 + t4997*(t9282 + t4997*t9324 + t9331 + t9471))*var2[5] + (t7880*(0. + t9291 + t9462) + t9467 + t9470 + t4997*(0. + t9282 + t9471))*var2[13];
  p_output1[25]=-0.08055*t7717*var2[5] - 0.08055*t7717*var2[13];
  p_output1[26]=0.08055*t3983*var2[5] + 0.08055*t3983*var2[13];
  p_output1[27]=0;
  p_output1[28]=t3983*var2[5] + t3983*var2[13];
  p_output1[29]=t7717*var2[5] + t7717*var2[13];
  p_output1[30]=0;
  p_output1[31]=(0. + t2234*t8998 + t2549*t9005)*var2[13];
  p_output1[32]=(0. + t2549*t8998 - 1.*t2234*t9005)*var2[13];
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

#include "dJb_RightAbductionJoint_mex.hh"

namespace SymExpression
{

void dJb_RightAbductionJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
