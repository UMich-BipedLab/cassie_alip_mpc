/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:28:40 GMT-04:00
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
  double t1839;
  double t66;
  double t1670;
  double t1836;
  double t2456;
  double t5046;
  double t838;
  double t4189;
  double t5295;
  double t5528;
  double t5655;
  double t6128;
  double t4600;
  double t6822;
  double t6836;
  double t6885;
  double t6942;
  double t852;
  double t903;
  double t2502;
  double t2759;
  double t4100;
  double t4390;
  double t4478;
  double t4625;
  double t4710;
  double t4788;
  double t4839;
  double t5092;
  double t5136;
  double t5181;
  double t5631;
  double t6135;
  double t6198;
  double t6364;
  double t6464;
  double t6477;
  double t6522;
  double t6558;
  double t6574;
  double t6628;
  double t6640;
  double t6671;
  double t6676;
  double t6692;
  double t6837;
  double t6948;
  double t6966;
  double t6973;
  double t6977;
  double t6981;
  double t6986;
  double t6992;
  double t6993;
  double t6998;
  double t6999;
  double t7070;
  double t7074;
  double t7082;
  double t7083;
  double t7089;
  double t7090;
  double t7091;
  double t7092;
  double t7095;
  double t7098;
  double t7104;
  double t7105;
  double t7128;
  double t7130;
  double t7152;
  double t7161;
  double t7162;
  double t7167;
  double t7169;
  double t7171;
  double t7172;
  double t7175;
  double t7176;
  double t7180;
  double t7181;
  double t7184;
  double t7196;
  double t7239;
  double t7240;
  double t7241;
  double t7235;
  double t7289;
  double t7284;
  double t7286;
  double t7287;
  double t7221;
  double t7222;
  double t7225;
  double t7226;
  double t7227;
  double t7229;
  double t7230;
  double t7231;
  double t7232;
  double t7236;
  double t7242;
  double t7252;
  double t7265;
  double t7269;
  double t7271;
  double t7272;
  double t7277;
  double t7282;
  double t7288;
  double t7291;
  double t7294;
  double t7296;
  double t7300;
  double t7312;
  double t7313;
  double t7315;
  double t7318;
  double t7350;
  double t7360;
  double t7365;
  double t7367;
  double t7378;
  double t7382;
  double t7384;
  double t7391;
  double t7394;
  double t7406;
  double t7409;
  double t7410;
  double t7411;
  double t7413;
  double t7417;
  double t7418;
  double t7421;
  double t7428;
  double t7435;
  double t7444;
  double t7451;
  double t7452;
  double t7454;
  double t7455;
  double t7456;
  double t7457;
  double t7458;
  double t7463;
  double t7469;
  double t7470;
  double t7471;
  double t7474;
  double t7475;
  double t7478;
  double t7481;
  double t7487;
  double t7491;
  double t7494;
  double t7496;
  double t7499;
  double t7500;
  double t7501;
  double t7551;
  double t7552;
  double t7559;
  double t7546;
  double t7547;
  double t7549;
  double t7651;
  double t7654;
  double t7656;
  double t7631;
  double t7633;
  double t7639;
  double t7535;
  double t7539;
  double t7541;
  double t7550;
  double t7561;
  double t7562;
  double t7573;
  double t7580;
  double t7582;
  double t7586;
  double t7589;
  double t7590;
  double t7609;
  double t7610;
  double t7614;
  double t7620;
  double t7628;
  double t7629;
  double t7640;
  double t7657;
  double t7660;
  double t7662;
  double t7666;
  double t7669;
  double t7670;
  double t7671;
  double t7672;
  double t7676;
  double t7677;
  double t7681;
  t1839 = Cos(var1[14]);
  t66 = Cos(var1[4]);
  t1670 = Sin(var1[4]);
  t1836 = Cos(var1[5]);
  t2456 = Sin(var1[13]);
  t5046 = Cos(var1[15]);
  t838 = Sin(var1[14]);
  t4189 = Cos(var1[13]);
  t5295 = t5046*t838;
  t5528 = 0. + t5295;
  t5655 = Sin(var1[15]);
  t6128 = 0. + t5655;
  t4600 = Sin(var1[5]);
  t6822 = -1.*t5046;
  t6836 = 0. + t6822;
  t6885 = t838*t5655;
  t6942 = 0. + t6885;
  t852 = 0. + t838;
  t903 = -1.*t66*t852;
  t2502 = -1.*t1839*t2456;
  t2759 = 0. + t2502;
  t4100 = t1836*t2759;
  t4390 = -1.*t4189*t1839;
  t4478 = 0. + t4390;
  t4625 = t4478*t4600;
  t4710 = 0. + t4100 + t4625;
  t4788 = -1.*t1670*t4710;
  t4839 = t903 + t4788;
  t5092 = t1839*t5046;
  t5136 = 0. + t5092;
  t5181 = -1.*t5136*t66;
  t5631 = t2456*t5528;
  t6135 = t4189*t6128;
  t6198 = 0. + t5631 + t6135;
  t6364 = t1836*t6198;
  t6464 = t4189*t5528;
  t6477 = -1.*t2456*t6128;
  t6522 = 0. + t6464 + t6477;
  t6558 = t6522*t4600;
  t6574 = 0. + t6364 + t6558;
  t6628 = -1.*t1670*t6574;
  t6640 = t5181 + t6628;
  t6671 = t1839*t5655;
  t6676 = 0. + t6671;
  t6692 = -1.*t66*t6676;
  t6837 = t4189*t6836;
  t6948 = t2456*t6942;
  t6966 = 0. + t6837 + t6948;
  t6973 = t1836*t6966;
  t6977 = -1.*t6836*t2456;
  t6981 = t4189*t6942;
  t6986 = 0. + t6977 + t6981;
  t6992 = t6986*t4600;
  t6993 = 0. + t6973 + t6992;
  t6998 = -1.*t1670*t6993;
  t6999 = t6692 + t6998;
  t7070 = -1.*t1836*t2759;
  t7074 = -1.*t4478*t4600;
  t7082 = t7070 + t7074;
  t7083 = var2[4]*t7082;
  t7089 = t4478*t1836;
  t7090 = -1.*t2759*t4600;
  t7091 = t7089 + t7090;
  t7092 = var2[3]*t66*t7091;
  t7095 = t7083 + t7092;
  t7098 = t1836*t6522;
  t7104 = -1.*t6198*t4600;
  t7105 = t7098 + t7104;
  t7128 = var2[3]*t66*t7105;
  t7130 = -1.*t1836*t6198;
  t7152 = -1.*t6522*t4600;
  t7161 = t7130 + t7152;
  t7162 = var2[4]*t7161;
  t7167 = t7128 + t7162;
  t7169 = -1.*t1836*t6966;
  t7171 = -1.*t6986*t4600;
  t7172 = t7169 + t7171;
  t7175 = var2[4]*t7172;
  t7176 = t1836*t6986;
  t7180 = -1.*t6966*t4600;
  t7181 = t7176 + t7180;
  t7184 = var2[3]*t66*t7181;
  t7196 = t7175 + t7184;
  t7239 = -1.*t2456*t5528;
  t7240 = -1.*t4189*t6128;
  t7241 = t7239 + t7240;
  t7235 = t6464 + t6477;
  t7289 = t6977 + t6981;
  t7284 = -1.*t4189*t6836;
  t7286 = -1.*t2456*t6942;
  t7287 = t7284 + t7286;
  t7221 = t1839*t1836*t2456;
  t7222 = t4189*t1839*t4600;
  t7225 = t7221 + t7222;
  t7226 = var2[4]*t7225;
  t7227 = -1.*t4189*t1839*t1836;
  t7229 = t1839*t2456*t4600;
  t7230 = t7227 + t7229;
  t7231 = var2[3]*t66*t7230;
  t7232 = t7226 + t7231;
  t7236 = t1836*t7235;
  t7242 = t7241*t4600;
  t7252 = t7236 + t7242;
  t7265 = var2[3]*t66*t7252;
  t7269 = t1836*t7241;
  t7271 = -1.*t7235*t4600;
  t7272 = t7269 + t7271;
  t7277 = var2[4]*t7272;
  t7282 = t7265 + t7277;
  t7288 = t1836*t7287;
  t7291 = -1.*t7289*t4600;
  t7294 = t7288 + t7291;
  t7296 = var2[4]*t7294;
  t7300 = t1836*t7289;
  t7312 = t7287*t4600;
  t7313 = t7300 + t7312;
  t7315 = var2[3]*t66*t7313;
  t7318 = t7296 + t7315;
  t7350 = -1.*var2[13]*t5046*t838;
  t7360 = -1.*var2[5]*t5046*t838;
  t7365 = t4189*t1839*t5046*t1836;
  t7367 = -1.*t1839*t5046*t2456*t4600;
  t7378 = t7365 + t7367;
  t7382 = var2[4]*t7378;
  t7384 = t5046*t838*t1670;
  t7391 = t1839*t5046*t1836*t2456;
  t7394 = t4189*t1839*t5046*t4600;
  t7406 = t7391 + t7394;
  t7409 = t66*t7406;
  t7410 = t7384 + t7409;
  t7411 = var2[3]*t7410;
  t7413 = t7350 + t7360 + t7382 + t7411;
  t7417 = var2[13]*t1839;
  t7418 = var2[5]*t1839;
  t7421 = t4189*t1836*t838;
  t7428 = -1.*t2456*t838*t4600;
  t7435 = t7421 + t7428;
  t7444 = var2[4]*t7435;
  t7451 = -1.*t1839*t1670;
  t7452 = t1836*t2456*t838;
  t7454 = t4189*t838*t4600;
  t7455 = t7452 + t7454;
  t7456 = t66*t7455;
  t7457 = t7451 + t7456;
  t7458 = var2[3]*t7457;
  t7463 = t7417 + t7418 + t7444 + t7458;
  t7469 = -1.*var2[13]*t838*t5655;
  t7470 = -1.*var2[5]*t838*t5655;
  t7471 = t4189*t1839*t1836*t5655;
  t7474 = -1.*t1839*t2456*t5655*t4600;
  t7475 = t7471 + t7474;
  t7478 = var2[4]*t7475;
  t7481 = t838*t5655*t1670;
  t7487 = t1839*t1836*t2456*t5655;
  t7491 = t4189*t1839*t5655*t4600;
  t7494 = t7487 + t7491;
  t7496 = t66*t7494;
  t7499 = t7481 + t7496;
  t7500 = var2[3]*t7499;
  t7501 = t7469 + t7470 + t7478 + t7500;
  t7551 = t5046*t2456*t838;
  t7552 = t4189*t5655;
  t7559 = t7551 + t7552;
  t7546 = t4189*t5046*t838;
  t7547 = -1.*t2456*t5655;
  t7549 = t7546 + t7547;
  t7651 = t4189*t5046;
  t7654 = -1.*t2456*t838*t5655;
  t7656 = t7651 + t7654;
  t7631 = -1.*t5046*t2456;
  t7633 = -1.*t4189*t838*t5655;
  t7639 = t7631 + t7633;
  t7535 = var2[13]*t1839*t5046;
  t7539 = var2[5]*t1839*t5046;
  t7541 = var2[14]*t5655;
  t7550 = t1836*t7549;
  t7561 = -1.*t7559*t4600;
  t7562 = t7550 + t7561;
  t7573 = var2[4]*t7562;
  t7580 = -1.*t1839*t5046*t1670;
  t7582 = t1836*t7559;
  t7586 = t7549*t4600;
  t7589 = t7582 + t7586;
  t7590 = t66*t7589;
  t7609 = t7580 + t7590;
  t7610 = var2[3]*t7609;
  t7614 = t7535 + t7539 + t7541 + t7573 + t7610;
  t7620 = var2[14]*t5046;
  t7628 = -1.*var2[13]*t1839*t5655;
  t7629 = -1.*var2[5]*t1839*t5655;
  t7640 = t1836*t7639;
  t7657 = -1.*t7656*t4600;
  t7660 = t7640 + t7657;
  t7662 = var2[4]*t7660;
  t7666 = t1839*t5655*t1670;
  t7669 = t1836*t7656;
  t7670 = t7639*t4600;
  t7671 = t7669 + t7670;
  t7672 = t66*t7671;
  t7676 = t7666 + t7672;
  t7677 = var2[3]*t7676;
  t7681 = t7620 + t7628 + t7629 + t7662 + t7677;
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
  p_output1[12]=0.0117*t4839*var2[3] + 0.000284*t6640*var2[3] + 0.018*t6999*var2[3];
  p_output1[13]=0.000019*t4839*var2[3] + 0.0563*t6640*var2[3] + 0.000284*t6999*var2[3];
  p_output1[14]=0.0498*t4839*var2[3] + 0.000019*t6640*var2[3] + 0.0117*t6999*var2[3];
  p_output1[15]=0.0117*t7095 + 0.000284*t7167 + 0.018*t7196;
  p_output1[16]=0.000019*t7095 + 0.0563*t7167 + 0.000284*t7196;
  p_output1[17]=0.0498*t7095 + 0.000019*t7167 + 0.0117*t7196;
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
  p_output1[39]=0.0117*t7232 + 0.000284*t7282 + 0.018*t7318;
  p_output1[40]=0.000019*t7232 + 0.0563*t7282 + 0.000284*t7318;
  p_output1[41]=0.0498*t7232 + 0.000019*t7282 + 0.0117*t7318;
  p_output1[42]=0.000284*t7413 + 0.0117*t7463 + 0.018*t7501;
  p_output1[43]=0.0563*t7413 + 0.000019*t7463 + 0.000284*t7501;
  p_output1[44]=0.000019*t7413 + 0.0498*t7463 + 0.0117*t7501;
  p_output1[45]=0.018*t7614 + 0.000284*t7681;
  p_output1[46]=0.000284*t7614 + 0.0563*t7681;
  p_output1[47]=0.0117*t7614 + 0.000019*t7681;
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

#include "Jq_AMBody_RightThigh_mex.hh"

namespace SymExpression
{

void Jq_AMBody_RightThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
