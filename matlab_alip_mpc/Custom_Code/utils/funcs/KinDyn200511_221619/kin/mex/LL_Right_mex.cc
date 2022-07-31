/*
 * Automatically Generated from Mathematica.
 * Tue 2 Jun 2020 15:03:41 GMT-04:00
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
  double t84;
  double t116;
  double t255;
  double t60;
  double t270;
  double t547;
  double t356;
  double t335;
  double t580;
  double t752;
  double t900;
  double t36;
  double t202;
  double t295;
  double t303;
  double t321;
  double t323;
  double t510;
  double t968;
  double t979;
  double t1012;
  double t1060;
  double t1322;
  double t1409;
  double t1418;
  double t1455;
  double t1592;
  double t1601;
  double t1616;
  double t1762;
  double t1793;
  double t1827;
  double t1918;
  double t1976;
  double t1978;
  double t2019;
  double t2301;
  double t2320;
  double t2431;
  double t2514;
  double t2664;
  double t2674;
  double t2731;
  double t2797;
  double t2841;
  double t2855;
  double t2988;
  double t3029;
  double t3038;
  double t3152;
  double t3267;
  double t3289;
  double t3510;
  double t3666;
  double t3920;
  double t3943;
  double t4272;
  double t4405;
  double t4552;
  double t5617;
  double t5609;
  double t5615;
  double t5644;
  double t5645;
  double t5724;
  double t5809;
  double t5821;
  double t5856;
  double t5864;
  double t5866;
  double t5684;
  double t5828;
  double t5835;
  double t5848;
  double t5849;
  double t5876;
  double t5887;
  double t5895;
  double t5909;
  double t1452;
  double t1459;
  double t1516;
  double t1625;
  double t1656;
  double t1673;
  double t6012;
  double t6025;
  double t6046;
  double t1915;
  double t1931;
  double t1948;
  double t2131;
  double t2134;
  double t2140;
  double t2725;
  double t2732;
  double t2781;
  double t6068;
  double t6083;
  double t6085;
  double t6114;
  double t6131;
  double t6132;
  double t2954;
  double t2957;
  double t2959;
  double t3503;
  double t3551;
  double t3659;
  double t6142;
  double t6150;
  double t6155;
  double t6167;
  double t6172;
  double t6177;
  double t4097;
  double t4099;
  double t4260;
  double t6195;
  double t6197;
  double t6204;
  double t6229;
  double t6235;
  double t6244;
  double t6292;
  double t6299;
  double t6303;
  double t6317;
  double t6334;
  double t6336;
  double t6371;
  double t6372;
  double t6377;
  double t6309;
  double t6337;
  double t6347;
  double t6355;
  double t6369;
  double t6390;
  double t6393;
  double t6397;
  double t6401;
  double t6422;
  double t6426;
  double t6431;
  double t6442;
  double t6448;
  double t6451;
  double t6456;
  double t6457;
  double t6459;
  double t6470;
  double t6484;
  double t6493;
  double t6501;
  double t6505;
  double t6506;
  double t6508;
  double t6509;
  double t6513;
  double t6531;
  double t6534;
  double t6541;
  double t1112;
  double t1128;
  double t1241;
  double t1311;
  double t1314;
  double t1586;
  double t1623;
  double t1682;
  double t2073;
  double t2435;
  double t2936;
  double t3133;
  double t4027;
  double t4696;
  double t4870;
  double t4876;
  double t5064;
  double t5387;
  double t5438;
  double t5440;
  double t5442;
  double t5458;
  double t5479;
  double t5916;
  double t5925;
  double t5926;
  double t5969;
  double t5979;
  double t6006;
  double t6050;
  double t6059;
  double t6100;
  double t6135;
  double t6161;
  double t6187;
  double t6213;
  double t6249;
  double t6252;
  double t6257;
  double t6260;
  double t6262;
  double t6265;
  double t6267;
  double t6268;
  double t6278;
  double t6281;
  double t6404;
  double t6406;
  double t6410;
  double t6411;
  double t6414;
  double t6421;
  double t6437;
  double t6438;
  double t6454;
  double t6469;
  double t6499;
  double t6507;
  double t6522;
  double t6543;
  double t6546;
  double t6547;
  double t6550;
  double t6554;
  double t6556;
  double t6564;
  double t6565;
  double t6566;
  double t6568;
  t84 = Cos(var1[4]);
  t116 = Cos(var1[5]);
  t255 = Sin(var1[13]);
  t60 = Cos(var1[13]);
  t270 = Sin(var1[5]);
  t547 = Sin(var1[14]);
  t356 = Sin(var1[4]);
  t335 = Cos(var1[14]);
  t580 = t84*t116*t255;
  t752 = t60*t84*t270;
  t900 = t580 + t752;
  t36 = Sin(var1[15]);
  t202 = t60*t84*t116;
  t295 = -1.*t84*t255*t270;
  t303 = t202 + t295;
  t321 = t36*t303;
  t323 = Cos(var1[15]);
  t510 = -1.*t335*t356;
  t968 = t547*t900;
  t979 = t510 + t968;
  t1012 = t323*t979;
  t1060 = t321 + t1012;
  t1322 = Cos(var1[16]);
  t1409 = -1.*t1322;
  t1418 = 1. + t1409;
  t1455 = Sin(var1[16]);
  t1592 = t323*t303;
  t1601 = -1.*t36*t979;
  t1616 = t1592 + t1601;
  t1762 = Cos(var1[17]);
  t1793 = -1.*t1762;
  t1827 = 1. + t1793;
  t1918 = Sin(var1[17]);
  t1976 = -1.*t1455*t1060;
  t1978 = t1322*t1616;
  t2019 = t1976 + t1978;
  t2301 = t1322*t1060;
  t2320 = t1455*t1616;
  t2431 = t2301 + t2320;
  t2514 = Cos(var1[18]);
  t2664 = -1.*t2514;
  t2674 = 1. + t2664;
  t2731 = Sin(var1[18]);
  t2797 = t1918*t2019;
  t2841 = t1762*t2431;
  t2855 = t2797 + t2841;
  t2988 = t1762*t2019;
  t3029 = -1.*t1918*t2431;
  t3038 = t2988 + t3029;
  t3152 = Cos(var1[19]);
  t3267 = -1.*t3152;
  t3289 = 1. + t3267;
  t3510 = Sin(var1[19]);
  t3666 = -1.*t2731*t2855;
  t3920 = t2514*t3038;
  t3943 = t3666 + t3920;
  t4272 = t2514*t2855;
  t4405 = t2731*t3038;
  t4552 = t4272 + t4405;
  t5617 = Sin(var1[3]);
  t5609 = Cos(var1[3]);
  t5615 = t5609*t116*t356;
  t5644 = t5617*t270;
  t5645 = t5615 + t5644;
  t5724 = -1.*t116*t5617;
  t5809 = t5609*t356*t270;
  t5821 = t5724 + t5809;
  t5856 = t255*t5645;
  t5864 = t60*t5821;
  t5866 = t5856 + t5864;
  t5684 = t60*t5645;
  t5828 = -1.*t255*t5821;
  t5835 = t5684 + t5828;
  t5848 = t36*t5835;
  t5849 = t335*t5609*t84;
  t5876 = t547*t5866;
  t5887 = t5849 + t5876;
  t5895 = t323*t5887;
  t5909 = t5848 + t5895;
  t1452 = -0.08055*t1418;
  t1459 = -0.13004*t1455;
  t1516 = 0. + t1452 + t1459;
  t1625 = -0.13004*t1418;
  t1656 = 0.08055*t1455;
  t1673 = 0. + t1625 + t1656;
  t6012 = t323*t5835;
  t6025 = -1.*t36*t5887;
  t6046 = t6012 + t6025;
  t1915 = -0.19074*t1827;
  t1931 = 0.03315*t1918;
  t1948 = 0. + t1915 + t1931;
  t2131 = -0.03315*t1827;
  t2134 = -0.19074*t1918;
  t2140 = 0. + t2131 + t2134;
  t2725 = -0.01315*t2674;
  t2732 = -0.62554*t2731;
  t2781 = 0. + t2725 + t2732;
  t6068 = -1.*t1455*t5909;
  t6083 = t1322*t6046;
  t6085 = t6068 + t6083;
  t6114 = t1322*t5909;
  t6131 = t1455*t6046;
  t6132 = t6114 + t6131;
  t2954 = -0.62554*t2674;
  t2957 = 0.01315*t2731;
  t2959 = 0. + t2954 + t2957;
  t3503 = -1.03354*t3289;
  t3551 = 0.05315*t3510;
  t3659 = 0. + t3503 + t3551;
  t6142 = t1918*t6085;
  t6150 = t1762*t6132;
  t6155 = t6142 + t6150;
  t6167 = t1762*t6085;
  t6172 = -1.*t1918*t6132;
  t6177 = t6167 + t6172;
  t4097 = -0.05315*t3289;
  t4099 = -1.03354*t3510;
  t4260 = 0. + t4097 + t4099;
  t6195 = -1.*t2731*t6155;
  t6197 = t2514*t6177;
  t6204 = t6195 + t6197;
  t6229 = t2514*t6155;
  t6235 = t2731*t6177;
  t6244 = t6229 + t6235;
  t6292 = t116*t5617*t356;
  t6299 = -1.*t5609*t270;
  t6303 = t6292 + t6299;
  t6317 = t5609*t116;
  t6334 = t5617*t356*t270;
  t6336 = t6317 + t6334;
  t6371 = t255*t6303;
  t6372 = t60*t6336;
  t6377 = t6371 + t6372;
  t6309 = t60*t6303;
  t6337 = -1.*t255*t6336;
  t6347 = t6309 + t6337;
  t6355 = t36*t6347;
  t6369 = t335*t84*t5617;
  t6390 = t547*t6377;
  t6393 = t6369 + t6390;
  t6397 = t323*t6393;
  t6401 = t6355 + t6397;
  t6422 = t323*t6347;
  t6426 = -1.*t36*t6393;
  t6431 = t6422 + t6426;
  t6442 = -1.*t1455*t6401;
  t6448 = t1322*t6431;
  t6451 = t6442 + t6448;
  t6456 = t1322*t6401;
  t6457 = t1455*t6431;
  t6459 = t6456 + t6457;
  t6470 = t1918*t6451;
  t6484 = t1762*t6459;
  t6493 = t6470 + t6484;
  t6501 = t1762*t6451;
  t6505 = -1.*t1918*t6459;
  t6506 = t6501 + t6505;
  t6508 = -1.*t2731*t6493;
  t6509 = t2514*t6506;
  t6513 = t6508 + t6509;
  t6531 = t2514*t6493;
  t6534 = t2731*t6506;
  t6541 = t6531 + t6534;
  t1112 = t547*t356;
  t1128 = t335*t900;
  t1241 = t1112 + t1128;
  t1311 = 0.004500000000000004*t1241;
  t1314 = 0.08055*t1060;
  t1586 = t1516*t1060;
  t1623 = 0.01004*t1616;
  t1682 = t1673*t1616;
  t2073 = t1948*t2019;
  t2435 = t2140*t2431;
  t2936 = t2781*t2855;
  t3133 = t2959*t3038;
  t4027 = t3659*t3943;
  t4696 = t4260*t4552;
  t4870 = t3510*t3943;
  t4876 = t3152*t4552;
  t5064 = t4870 + t4876;
  t5387 = -0.05315*t5064;
  t5438 = t3152*t3943;
  t5440 = -1.*t3510*t4552;
  t5442 = t5438 + t5440;
  t5458 = -1.03354*t5442;
  t5479 = 0. + t1311 + t1314 + t1586 + t1623 + t1682 + t2073 + t2435 + t2936 + t3133 + t4027 + t4696 + t5387 + t5458;
  t5916 = -1.*t5609*t84*t547;
  t5925 = t335*t5866;
  t5926 = t5916 + t5925;
  t5969 = 0.004500000000000004*t5926;
  t5979 = 0.08055*t5909;
  t6006 = t1516*t5909;
  t6050 = 0.01004*t6046;
  t6059 = t1673*t6046;
  t6100 = t1948*t6085;
  t6135 = t2140*t6132;
  t6161 = t2781*t6155;
  t6187 = t2959*t6177;
  t6213 = t3659*t6204;
  t6249 = t4260*t6244;
  t6252 = t3510*t6204;
  t6257 = t3152*t6244;
  t6260 = t6252 + t6257;
  t6262 = -0.05315*t6260;
  t6265 = t3152*t6204;
  t6267 = -1.*t3510*t6244;
  t6268 = t6265 + t6267;
  t6278 = -1.03354*t6268;
  t6281 = 0. + t5969 + t5979 + t6006 + t6050 + t6059 + t6100 + t6135 + t6161 + t6187 + t6213 + t6249 + t6262 + t6278;
  t6404 = -1.*t84*t547*t5617;
  t6406 = t335*t6377;
  t6410 = t6404 + t6406;
  t6411 = 0.004500000000000004*t6410;
  t6414 = 0.08055*t6401;
  t6421 = t1516*t6401;
  t6437 = 0.01004*t6431;
  t6438 = t1673*t6431;
  t6454 = t1948*t6451;
  t6469 = t2140*t6459;
  t6499 = t2781*t6493;
  t6507 = t2959*t6506;
  t6522 = t3659*t6513;
  t6543 = t4260*t6541;
  t6546 = t3510*t6513;
  t6547 = t3152*t6541;
  t6550 = t6546 + t6547;
  t6554 = -0.05315*t6550;
  t6556 = t3152*t6513;
  t6564 = -1.*t3510*t6541;
  t6565 = t6556 + t6564;
  t6566 = -1.03354*t6565;
  t6568 = 0. + t6411 + t6414 + t6421 + t6437 + t6438 + t6454 + t6469 + t6499 + t6507 + t6522 + t6543 + t6554 + t6566;
  p_output1[0]=Sqrt(Power(t1060*t5479 + t5909*t6281 + t6401*t6568,2) + Power((-1.*t323*t5835 + t36*t5887)*t6281 + (-1.*t323*t6347 + t36*t6393)*t6568 + t5479*(-1.*t303*t323 + t36*t979),2));
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 1, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "LL_Right_mex.hh"

namespace SymExpression
{

void LL_Right_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
