/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:57 GMT-04:00
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
  double t2463;
  double t1087;
  double t2489;
  double t1701;
  double t2599;
  double t1039;
  double t594;
  double t4295;
  double t4327;
  double t3467;
  double t3716;
  double t5071;
  double t3703;
  double t4478;
  double t4622;
  double t4672;
  double t4770;
  double t2114;
  double t2843;
  double t2846;
  double t3108;
  double t3333;
  double t3425;
  double t3452;
  double t3477;
  double t3487;
  double t5818;
  double t6193;
  double t6272;
  double t6274;
  double t6103;
  double t6115;
  double t6145;
  double t6298;
  double t6364;
  double t6161;
  double t6299;
  double t6321;
  double t5786;
  double t6420;
  double t6454;
  double t6586;
  double t6659;
  double t5711;
  double t6784;
  double t6785;
  double t6787;
  double t6735;
  double t6750;
  double t6753;
  double t6817;
  double t6826;
  double t6847;
  double t6853;
  double t6887;
  double t6780;
  double t6805;
  double t6806;
  double t6919;
  double t6936;
  double t6916;
  double t6941;
  double t6946;
  double t6953;
  double t6987;
  double t6991;
  double t7021;
  double t7022;
  double t7025;
  double t7039;
  double t7040;
  double t7041;
  double t7043;
  double t7028;
  double t7032;
  double t7033;
  double t7070;
  double t7071;
  double t7067;
  double t7072;
  double t7077;
  double t7094;
  double t7102;
  double t7103;
  double t6332;
  double t6600;
  double t6603;
  double t6673;
  double t6675;
  double t6676;
  double t6808;
  double t6889;
  double t6909;
  double t6947;
  double t6995;
  double t6997;
  double t6999;
  double t7000;
  double t7001;
  double t7002;
  double t7006;
  double t7010;
  double t7013;
  double t7015;
  double t7017;
  double t7034;
  double t7047;
  double t7066;
  double t7093;
  double t7107;
  double t7108;
  double t7126;
  double t7134;
  double t7136;
  double t7143;
  double t7145;
  double t7146;
  double t7148;
  double t7151;
  double t7153;
  double t4623;
  double t4871;
  double t4979;
  double t5068;
  double t5165;
  double t5192;
  double t5240;
  double t5282;
  double t5287;
  double t5325;
  double t5362;
  double t5384;
  double t5416;
  double t5536;
  double t5542;
  double t5576;
  double t7204;
  double t7208;
  double t7210;
  double t7211;
  double t7212;
  double t7215;
  double t7220;
  double t7221;
  double t7224;
  double t7249;
  double t7257;
  double t7259;
  double t7232;
  double t7244;
  double t7245;
  double t7248;
  double t7262;
  double t7265;
  double t7272;
  double t7273;
  double t7276;
  double t7019;
  double t7158;
  double t7159;
  double t7271;
  double t7278;
  double t7283;
  double t7285;
  double t7286;
  double t7288;
  double t7173;
  double t7188;
  double t7193;
  double t7304;
  double t7305;
  double t7308;
  double t7330;
  double t7333;
  double t7334;
  double t7321;
  double t7323;
  double t7325;
  double t7329;
  double t7335;
  double t7336;
  double t7338;
  double t7340;
  double t7341;
  double t7337;
  double t7343;
  double t7345;
  double t7349;
  double t7351;
  double t7352;
  t2463 = Cos(var1[3]);
  t1087 = Cos(var1[5]);
  t2489 = Sin(var1[4]);
  t1701 = Sin(var1[3]);
  t2599 = Sin(var1[5]);
  t1039 = Cos(var1[6]);
  t594 = Cos(var1[7]);
  t4295 = -1.*t594;
  t4327 = 0. + t4295;
  t3467 = Sin(var1[6]);
  t3716 = Sin(var1[7]);
  t5071 = 0. + t3716;
  t3703 = Cos(var1[4]);
  t4478 = t1039*t4327;
  t4622 = 0. + t4478;
  t4672 = t4327*t3467;
  t4770 = 0. + t4672;
  t2114 = -1.*t1087*t1701;
  t2843 = t2463*t2489*t2599;
  t2846 = t2114 + t2843;
  t3108 = t1039*t2846;
  t3333 = t2463*t1087*t2489;
  t3425 = t1701*t2599;
  t3452 = t3333 + t3425;
  t3477 = t3452*t3467;
  t3487 = t3108 + t3477;
  t5818 = Cos(var1[8]);
  t6193 = t1039*t3452;
  t6272 = -1.*t2846*t3467;
  t6274 = t6193 + t6272;
  t6103 = t2463*t3703*t594;
  t6115 = t3487*t3716;
  t6145 = t6103 + t6115;
  t6298 = Sin(var1[8]);
  t6364 = Cos(var1[9]);
  t6161 = t5818*t6145;
  t6299 = t6274*t6298;
  t6321 = t6161 + t6299;
  t5786 = Sin(var1[9]);
  t6420 = t5818*t6274;
  t6454 = -1.*t6145*t6298;
  t6586 = t6420 + t6454;
  t6659 = Cos(var1[10]);
  t5711 = Sin(var1[10]);
  t6784 = t6364*t6659;
  t6785 = -1.*t5786*t5711;
  t6787 = 0. + t6784 + t6785;
  t6735 = t6659*t5786;
  t6750 = t6364*t5711;
  t6753 = 0. + t6735 + t6750;
  t6817 = t5818*t6787;
  t6826 = -1.*t6753*t6298;
  t6847 = 0. + t6817 + t6826;
  t6853 = t594*t6847;
  t6887 = 0. + t6853;
  t6780 = t5818*t6753;
  t6805 = t6787*t6298;
  t6806 = 0. + t6780 + t6805;
  t6919 = t3716*t6847;
  t6936 = 0. + t6919;
  t6916 = -1.*t3467*t6806;
  t6941 = t1039*t6936;
  t6946 = 0. + t6916 + t6941;
  t6953 = t1039*t6806;
  t6987 = t3467*t6936;
  t6991 = 0. + t6953 + t6987;
  t7021 = -1.*t6364*t6659;
  t7022 = t5786*t5711;
  t7025 = 0. + t7021 + t7022;
  t7039 = -1.*t7025*t6298;
  t7040 = 0. + t6780 + t7039;
  t7041 = t594*t7040;
  t7043 = 0. + t7041;
  t7028 = t5818*t7025;
  t7032 = t6753*t6298;
  t7033 = 0. + t7028 + t7032;
  t7070 = t3716*t7040;
  t7071 = 0. + t7070;
  t7067 = -1.*t3467*t7033;
  t7072 = t1039*t7071;
  t7077 = 0. + t7067 + t7072;
  t7094 = t1039*t7033;
  t7102 = t3467*t7071;
  t7103 = 0. + t7094 + t7102;
  t6332 = -1.*t5786*t6321;
  t6600 = t6364*t6586;
  t6603 = t6332 + t6600;
  t6673 = t6364*t6321;
  t6675 = t5786*t6586;
  t6676 = t6673 + t6675;
  t6808 = var2[7]*t6806;
  t6889 = var2[5]*t6887;
  t6909 = var2[6]*t6887;
  t6947 = t1087*t6946;
  t6995 = -1.*t2599*t6991;
  t6997 = 0. + t6947 + t6995;
  t6999 = var2[4]*t6997;
  t7000 = -1.*t2489*t6887;
  t7001 = t2599*t6946;
  t7002 = t1087*t6991;
  t7006 = 0. + t7001 + t7002;
  t7010 = t3703*t7006;
  t7013 = 0. + t7000 + t7010;
  t7015 = var2[3]*t7013;
  t7017 = 0. + t6808 + t6889 + t6909 + t6999 + t7015;
  t7034 = var2[7]*t7033;
  t7047 = var2[5]*t7043;
  t7066 = var2[6]*t7043;
  t7093 = t1087*t7077;
  t7107 = -1.*t2599*t7103;
  t7108 = 0. + t7093 + t7107;
  t7126 = var2[4]*t7108;
  t7134 = -1.*t2489*t7043;
  t7136 = t2599*t7077;
  t7143 = t1087*t7103;
  t7145 = 0. + t7136 + t7143;
  t7146 = t3703*t7145;
  t7148 = 0. + t7134 + t7146;
  t7151 = var2[3]*t7148;
  t7153 = 0. + t7034 + t7047 + t7066 + t7126 + t7151;
  t4623 = t1087*t4622;
  t4871 = -1.*t2599*t4770;
  t4979 = 0. + t4623 + t4871;
  t5068 = var2[4]*t4979;
  t5165 = var2[5]*t5071;
  t5192 = var2[6]*t5071;
  t5240 = t4622*t2599;
  t5282 = t1087*t4770;
  t5287 = 0. + t5240 + t5282;
  t5325 = t3703*t5287;
  t5362 = -1.*t2489*t5071;
  t5384 = 0. + t5325 + t5362;
  t5416 = var2[3]*t5384;
  t5536 = 0. + var2[9] + var2[10] + var2[8] + t5068 + t5165 + t5192 + t5416;
  t5542 = 0.0341*t5536;
  t5576 = 0. + t5542;
  t7204 = t2463*t1087;
  t7208 = t1701*t2489*t2599;
  t7210 = t7204 + t7208;
  t7211 = t1039*t7210;
  t7212 = t1087*t1701*t2489;
  t7215 = -1.*t2463*t2599;
  t7220 = t7212 + t7215;
  t7221 = t7220*t3467;
  t7224 = t7211 + t7221;
  t7249 = t1039*t7220;
  t7257 = -1.*t7210*t3467;
  t7259 = t7249 + t7257;
  t7232 = t3703*t594*t1701;
  t7244 = t7224*t3716;
  t7245 = t7232 + t7244;
  t7248 = t5818*t7245;
  t7262 = t7259*t6298;
  t7265 = t7248 + t7262;
  t7272 = t5818*t7259;
  t7273 = -1.*t7245*t6298;
  t7276 = t7272 + t7273;
  t7019 = 0.0341*t7017;
  t7158 = 0.000334*t7153;
  t7159 = 0. + t7019 + t7158;
  t7271 = -1.*t5786*t7265;
  t7278 = t6364*t7276;
  t7283 = t7271 + t7278;
  t7285 = t6364*t7265;
  t7286 = t5786*t7276;
  t7288 = t7285 + t7286;
  t7173 = 0.000334*t7017;
  t7188 = 0.00036*t7153;
  t7193 = 0. + t7173 + t7188;
  t7304 = t3703*t1039*t2599;
  t7305 = t3703*t1087*t3467;
  t7308 = t7304 + t7305;
  t7330 = t3703*t1087*t1039;
  t7333 = -1.*t3703*t2599*t3467;
  t7334 = t7330 + t7333;
  t7321 = -1.*t594*t2489;
  t7323 = t7308*t3716;
  t7325 = t7321 + t7323;
  t7329 = t5818*t7325;
  t7335 = t7334*t6298;
  t7336 = t7329 + t7335;
  t7338 = t5818*t7334;
  t7340 = -1.*t7325*t6298;
  t7341 = t7338 + t7340;
  t7337 = -1.*t5786*t7336;
  t7343 = t6364*t7341;
  t7345 = t7337 + t7343;
  t7349 = t6364*t7336;
  t7351 = t5786*t7341;
  t7352 = t7349 + t7351;
  p_output1[0]=t5576*(t2463*t3703*t3716 - 1.*t3487*t594) + (t5711*t6603 + t6659*t6676)*t7159 + (-1.*t6603*t6659 + t5711*t6676)*t7193;
  p_output1[1]=t5576*(t1701*t3703*t3716 - 1.*t594*t7224) + t7193*(-1.*t6659*t7283 + t5711*t7288) + t7159*(t5711*t7283 + t6659*t7288);
  p_output1[2]=t5576*(-1.*t2489*t3716 - 1.*t594*t7308) + t7193*(-1.*t6659*t7345 + t5711*t7352) + t7159*(t5711*t7345 + t6659*t7352);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "AMWorld_LeftShin_mex.hh"

namespace SymExpression
{

void AMWorld_LeftShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
