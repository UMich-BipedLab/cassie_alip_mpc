/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:52 GMT-04:00
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
  double t326;
  double t2179;
  double t96;
  double t1227;
  double t1433;
  double t2753;
  double t2222;
  double t160;
  double t649;
  double t4040;
  double t4076;
  double t4312;
  double t4362;
  double t5553;
  double t5567;
  double t5569;
  double t5602;
  double t530;
  double t599;
  double t769;
  double t1549;
  double t1945;
  double t1981;
  double t2009;
  double t2030;
  double t2252;
  double t2275;
  double t2742;
  double t3504;
  double t3596;
  double t4020;
  double t4192;
  double t4379;
  double t4405;
  double t4442;
  double t4597;
  double t4675;
  double t4750;
  double t4755;
  double t5078;
  double t5190;
  double t5239;
  double t5321;
  double t5421;
  double t5541;
  double t5568;
  double t5611;
  double t5677;
  double t5685;
  double t5708;
  double t5711;
  double t5739;
  double t5756;
  double t5820;
  double t5824;
  double t5858;
  double t6006;
  double t6016;
  double t6022;
  double t6025;
  double t6034;
  double t6039;
  double t6044;
  double t6045;
  double t6047;
  double t6078;
  double t6081;
  double t6091;
  double t6098;
  double t6111;
  double t6115;
  double t6117;
  double t6118;
  double t6125;
  double t6130;
  double t6131;
  double t6134;
  double t6138;
  double t6139;
  double t6142;
  double t6144;
  double t6152;
  double t6156;
  double t6269;
  double t6271;
  double t6275;
  double t6280;
  double t6344;
  double t6352;
  double t6353;
  double t6356;
  double t6230;
  double t6240;
  double t6242;
  double t6243;
  double t6247;
  double t6252;
  double t6257;
  double t6259;
  double t6261;
  double t6279;
  double t6282;
  double t6285;
  double t6306;
  double t6307;
  double t6308;
  double t6309;
  double t6311;
  double t6318;
  double t6350;
  double t6359;
  double t6361;
  double t6362;
  double t6364;
  double t6377;
  double t6380;
  double t6384;
  double t6385;
  double t6445;
  double t6450;
  double t6459;
  double t6462;
  double t6464;
  double t6468;
  double t6476;
  double t6477;
  double t6485;
  double t6487;
  double t6488;
  double t6492;
  double t6493;
  double t6498;
  double t6502;
  double t6505;
  double t6506;
  double t6511;
  double t6521;
  double t6522;
  double t6526;
  double t6529;
  double t6538;
  double t6549;
  double t6558;
  double t6560;
  double t6562;
  double t6566;
  double t6571;
  double t6573;
  double t6594;
  double t6596;
  double t6597;
  double t6598;
  double t6600;
  double t6601;
  double t6604;
  double t6605;
  double t6611;
  double t6618;
  double t6620;
  double t6629;
  double t6737;
  double t6739;
  double t6742;
  double t6751;
  double t6757;
  double t6761;
  double t6800;
  double t6802;
  double t6809;
  double t6814;
  double t6816;
  double t6818;
  double t6705;
  double t6731;
  double t6736;
  double t6747;
  double t6763;
  double t6764;
  double t6768;
  double t6769;
  double t6770;
  double t6771;
  double t6772;
  double t6773;
  double t6774;
  double t6777;
  double t6788;
  double t6792;
  double t6796;
  double t6797;
  double t6810;
  double t6821;
  double t6822;
  double t6827;
  double t6829;
  double t6834;
  double t6840;
  double t6844;
  double t6845;
  double t6848;
  double t6856;
  double t6860;
  t326 = Cos(var1[7]);
  t2179 = Cos(var1[4]);
  t96 = Sin(var1[4]);
  t1227 = Cos(var1[5]);
  t1433 = Sin(var1[6]);
  t2753 = Cos(var1[8]);
  t2222 = Sin(var1[7]);
  t160 = Cos(var1[6]);
  t649 = Sin(var1[5]);
  t4040 = t2753*t2222;
  t4076 = 0. + t4040;
  t4312 = Sin(var1[8]);
  t4362 = 0. + t4312;
  t5553 = -1.*t2753;
  t5567 = 0. + t5553;
  t5569 = t2222*t4312;
  t5602 = 0. + t5569;
  t530 = -1.*t160*t326;
  t599 = 0. + t530;
  t769 = t599*t649;
  t1549 = -1.*t326*t1433;
  t1945 = 0. + t1549;
  t1981 = t1227*t1945;
  t2009 = 0. + t769 + t1981;
  t2030 = -1.*t96*t2009;
  t2252 = 0. + t2222;
  t2275 = -1.*t2179*t2252;
  t2742 = t2030 + t2275;
  t3504 = t326*t2753;
  t3596 = 0. + t3504;
  t4020 = -1.*t2179*t3596;
  t4192 = t1433*t4076;
  t4379 = t160*t4362;
  t4405 = 0. + t4192 + t4379;
  t4442 = t1227*t4405;
  t4597 = t160*t4076;
  t4675 = -1.*t1433*t4362;
  t4750 = 0. + t4597 + t4675;
  t4755 = t649*t4750;
  t5078 = 0. + t4442 + t4755;
  t5190 = -1.*t96*t5078;
  t5239 = t4020 + t5190;
  t5321 = t326*t4312;
  t5421 = 0. + t5321;
  t5541 = -1.*t2179*t5421;
  t5568 = -1.*t5567*t1433;
  t5611 = t160*t5602;
  t5677 = 0. + t5568 + t5611;
  t5685 = t649*t5677;
  t5708 = t160*t5567;
  t5711 = t1433*t5602;
  t5739 = 0. + t5708 + t5711;
  t5756 = t1227*t5739;
  t5820 = 0. + t5685 + t5756;
  t5824 = -1.*t96*t5820;
  t5858 = t5541 + t5824;
  t6006 = -1.*t599*t649;
  t6016 = -1.*t1227*t1945;
  t6022 = t6006 + t6016;
  t6025 = var2[4]*t6022;
  t6034 = t1227*t599;
  t6039 = -1.*t649*t1945;
  t6044 = t6034 + t6039;
  t6045 = var2[3]*t2179*t6044;
  t6047 = t6025 + t6045;
  t6078 = -1.*t649*t4405;
  t6081 = t1227*t4750;
  t6091 = t6078 + t6081;
  t6098 = var2[3]*t2179*t6091;
  t6111 = -1.*t1227*t4405;
  t6115 = -1.*t649*t4750;
  t6117 = t6111 + t6115;
  t6118 = var2[4]*t6117;
  t6125 = t6098 + t6118;
  t6130 = -1.*t649*t5677;
  t6131 = -1.*t1227*t5739;
  t6134 = t6130 + t6131;
  t6138 = var2[4]*t6134;
  t6139 = t1227*t5677;
  t6142 = -1.*t649*t5739;
  t6144 = t6139 + t6142;
  t6152 = var2[3]*t2179*t6144;
  t6156 = t6138 + t6152;
  t6269 = -1.*t1433*t4076;
  t6271 = -1.*t160*t4362;
  t6275 = t6269 + t6271;
  t6280 = t4597 + t4675;
  t6344 = t5568 + t5611;
  t6352 = -1.*t160*t5567;
  t6353 = -1.*t1433*t5602;
  t6356 = t6352 + t6353;
  t6230 = t160*t326*t649;
  t6240 = t1227*t326*t1433;
  t6242 = t6230 + t6240;
  t6243 = var2[4]*t6242;
  t6247 = -1.*t1227*t160*t326;
  t6252 = t326*t649*t1433;
  t6257 = t6247 + t6252;
  t6259 = var2[3]*t2179*t6257;
  t6261 = t6243 + t6259;
  t6279 = t649*t6275;
  t6282 = t1227*t6280;
  t6285 = t6279 + t6282;
  t6306 = var2[3]*t2179*t6285;
  t6307 = t1227*t6275;
  t6308 = -1.*t649*t6280;
  t6309 = t6307 + t6308;
  t6311 = var2[4]*t6309;
  t6318 = t6306 + t6311;
  t6350 = -1.*t649*t6344;
  t6359 = t1227*t6356;
  t6361 = t6350 + t6359;
  t6362 = var2[4]*t6361;
  t6364 = t1227*t6344;
  t6377 = t649*t6356;
  t6380 = t6364 + t6377;
  t6384 = var2[3]*t2179*t6380;
  t6385 = t6362 + t6384;
  t6445 = t1227*t160*t326*t2753;
  t6450 = -1.*t326*t2753*t649*t1433;
  t6459 = t6445 + t6450;
  t6462 = var2[4]*t6459;
  t6464 = -1.*var2[5]*t2753*t2222;
  t6468 = -1.*var2[6]*t2753*t2222;
  t6476 = t160*t326*t2753*t649;
  t6477 = t1227*t326*t2753*t1433;
  t6485 = t6476 + t6477;
  t6487 = t2179*t6485;
  t6488 = t2753*t96*t2222;
  t6492 = t6487 + t6488;
  t6493 = var2[3]*t6492;
  t6498 = t6462 + t6464 + t6468 + t6493;
  t6502 = var2[5]*t326;
  t6505 = var2[6]*t326;
  t6506 = t1227*t160*t2222;
  t6511 = -1.*t649*t1433*t2222;
  t6521 = t6506 + t6511;
  t6522 = var2[4]*t6521;
  t6526 = -1.*t326*t96;
  t6529 = t160*t649*t2222;
  t6538 = t1227*t1433*t2222;
  t6549 = t6529 + t6538;
  t6558 = t2179*t6549;
  t6560 = t6526 + t6558;
  t6562 = var2[3]*t6560;
  t6566 = t6502 + t6505 + t6522 + t6562;
  t6571 = -1.*var2[5]*t2222*t4312;
  t6573 = -1.*var2[6]*t2222*t4312;
  t6594 = t1227*t160*t326*t4312;
  t6596 = -1.*t326*t649*t1433*t4312;
  t6597 = t6594 + t6596;
  t6598 = var2[4]*t6597;
  t6600 = t96*t2222*t4312;
  t6601 = t160*t326*t649*t4312;
  t6604 = t1227*t326*t1433*t4312;
  t6605 = t6601 + t6604;
  t6611 = t2179*t6605;
  t6618 = t6600 + t6611;
  t6620 = var2[3]*t6618;
  t6629 = t6571 + t6573 + t6598 + t6620;
  t6737 = t2753*t1433*t2222;
  t6739 = t160*t4312;
  t6742 = t6737 + t6739;
  t6751 = t160*t2753*t2222;
  t6757 = -1.*t1433*t4312;
  t6761 = t6751 + t6757;
  t6800 = -1.*t2753*t1433;
  t6802 = -1.*t160*t2222*t4312;
  t6809 = t6800 + t6802;
  t6814 = t160*t2753;
  t6816 = -1.*t1433*t2222*t4312;
  t6818 = t6814 + t6816;
  t6705 = var2[5]*t326*t2753;
  t6731 = var2[6]*t326*t2753;
  t6736 = var2[7]*t4312;
  t6747 = -1.*t649*t6742;
  t6763 = t1227*t6761;
  t6764 = t6747 + t6763;
  t6768 = var2[4]*t6764;
  t6769 = -1.*t326*t2753*t96;
  t6770 = t1227*t6742;
  t6771 = t649*t6761;
  t6772 = t6770 + t6771;
  t6773 = t2179*t6772;
  t6774 = t6769 + t6773;
  t6777 = var2[3]*t6774;
  t6788 = t6705 + t6731 + t6736 + t6768 + t6777;
  t6792 = var2[7]*t2753;
  t6796 = -1.*var2[5]*t326*t4312;
  t6797 = -1.*var2[6]*t326*t4312;
  t6810 = t1227*t6809;
  t6821 = -1.*t649*t6818;
  t6822 = t6810 + t6821;
  t6827 = var2[4]*t6822;
  t6829 = t326*t96*t4312;
  t6834 = t649*t6809;
  t6840 = t1227*t6818;
  t6844 = t6834 + t6840;
  t6845 = t2179*t6844;
  t6848 = t6829 + t6845;
  t6856 = var2[3]*t6848;
  t6860 = t6792 + t6796 + t6797 + t6827 + t6856;
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
  p_output1[12]=-0.0117*t2742*var2[3] + 0.000284*t5239*var2[3] + 0.018*t5858*var2[3];
  p_output1[13]=-0.000019*t2742*var2[3] + 0.0563*t5239*var2[3] + 0.000284*t5858*var2[3];
  p_output1[14]=0.0498*t2742*var2[3] - 0.000019*t5239*var2[3] - 0.0117*t5858*var2[3];
  p_output1[15]=-0.0117*t6047 + 0.000284*t6125 + 0.018*t6156;
  p_output1[16]=-0.000019*t6047 + 0.0563*t6125 + 0.000284*t6156;
  p_output1[17]=0.0498*t6047 - 0.000019*t6125 - 0.0117*t6156;
  p_output1[18]=-0.0117*t6261 + 0.000284*t6318 + 0.018*t6385;
  p_output1[19]=-0.000019*t6261 + 0.0563*t6318 + 0.000284*t6385;
  p_output1[20]=0.0498*t6261 - 0.000019*t6318 - 0.0117*t6385;
  p_output1[21]=0.000284*t6498 - 0.0117*t6566 + 0.018*t6629;
  p_output1[22]=0.0563*t6498 - 0.000019*t6566 + 0.000284*t6629;
  p_output1[23]=-0.000019*t6498 + 0.0498*t6566 - 0.0117*t6629;
  p_output1[24]=0.018*t6788 + 0.000284*t6860;
  p_output1[25]=0.000284*t6788 + 0.0563*t6860;
  p_output1[26]=-0.0117*t6788 - 0.000019*t6860;
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

#include "Jq_AMBody_LeftThigh_mex.hh"

namespace SymExpression
{

void Jq_AMBody_LeftThigh_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
