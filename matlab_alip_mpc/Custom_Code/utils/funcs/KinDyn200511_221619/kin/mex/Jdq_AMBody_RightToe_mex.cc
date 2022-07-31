/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:31:08 GMT-04:00
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
  double t708;
  double t737;
  double t758;
  double t2312;
  double t2002;
  double t2131;
  double t2414;
  double t2645;
  double t2181;
  double t2574;
  double t2619;
  double t1943;
  double t2663;
  double t2668;
  double t2817;
  double t2916;
  double t2625;
  double t2818;
  double t2859;
  double t1824;
  double t3416;
  double t3441;
  double t3469;
  double t189;
  double t412;
  double t611;
  double t1179;
  double t3717;
  double t2887;
  double t3618;
  double t3665;
  double t1698;
  double t3776;
  double t3794;
  double t3806;
  double t783;
  double t23;
  double t3713;
  double t3878;
  double t3890;
  double t4199;
  double t4216;
  double t4274;
  double t4431;
  double t4602;
  double t1306;
  double t6045;
  double t6399;
  double t6405;
  double t5485;
  double t6431;
  double t6834;
  double t6883;
  double t6940;
  double t6863;
  double t6942;
  double t6968;
  double t7064;
  double t7085;
  double t7305;
  double t7053;
  double t7319;
  double t7329;
  double t7848;
  double t7851;
  double t7852;
  double t8093;
  double t8384;
  double t3911;
  double t3953;
  double t4188;
  double t4359;
  double t4731;
  double t4872;
  double t4994;
  double t5092;
  double t5099;
  double t5110;
  double t5163;
  double t5179;
  double t5246;
  double t5303;
  double t7529;
  double t7555;
  double t7781;
  double t7905;
  double t8466;
  double t8503;
  double t8578;
  double t8583;
  double t8603;
  double t8661;
  double t8691;
  double t8713;
  double t8726;
  double t8744;
  double t135;
  double t283;
  double t812;
  double t974;
  double t1072;
  double t1197;
  double t1208;
  double t1385;
  double t1512;
  double t1573;
  double t1595;
  double t8950;
  double t9003;
  double t9006;
  double t9048;
  double t9053;
  double t9074;
  double t8872;
  double t8875;
  double t8916;
  double t9164;
  double t9165;
  double t9167;
  double t9168;
  double t9171;
  double t9178;
  double t9179;
  double t9180;
  double t9188;
  double t9189;
  t708 = Cos(var1[14]);
  t737 = -1.*t708;
  t758 = 0. + t737;
  t2312 = Cos(var1[18]);
  t2002 = Cos(var1[19]);
  t2131 = Sin(var1[18]);
  t2414 = Sin(var1[19]);
  t2645 = Cos(var1[17]);
  t2181 = t2002*t2131;
  t2574 = t2312*t2414;
  t2619 = 0. + t2181 + t2574;
  t1943 = Sin(var1[17]);
  t2663 = t2312*t2002;
  t2668 = -1.*t2131*t2414;
  t2817 = 0. + t2663 + t2668;
  t2916 = Cos(var1[16]);
  t2625 = -1.*t1943*t2619;
  t2818 = t2645*t2817;
  t2859 = 0. + t2625 + t2818;
  t1824 = Sin(var1[16]);
  t3416 = t2645*t2619;
  t3441 = t1943*t2817;
  t3469 = 0. + t3416 + t3441;
  t189 = Sin(var1[4]);
  t412 = Cos(var1[4]);
  t611 = Cos(var1[5]);
  t1179 = Cos(var1[13]);
  t3717 = Cos(var1[15]);
  t2887 = t1824*t2859;
  t3618 = t2916*t3469;
  t3665 = 0. + t2887 + t3618;
  t1698 = Sin(var1[15]);
  t3776 = t2916*t2859;
  t3794 = -1.*t1824*t3469;
  t3806 = 0. + t3776 + t3794;
  t783 = Sin(var1[13]);
  t23 = Sin(var1[14]);
  t3713 = -1.*t1698*t3665;
  t3878 = t3717*t3806;
  t3890 = 0. + t3713 + t3878;
  t4199 = t3717*t3665;
  t4216 = t1698*t3806;
  t4274 = 0. + t4199 + t4216;
  t4431 = t23*t3890;
  t4602 = 0. + t4431;
  t1306 = Sin(var1[5]);
  t6045 = -1.*t2312*t2002;
  t6399 = t2131*t2414;
  t6405 = 0. + t6045 + t6399;
  t5485 = t1943*t2619;
  t6431 = t2645*t6405;
  t6834 = 0. + t5485 + t6431;
  t6883 = -1.*t1943*t6405;
  t6940 = 0. + t3416 + t6883;
  t6863 = -1.*t1824*t6834;
  t6942 = t2916*t6940;
  t6968 = 0. + t6863 + t6942;
  t7064 = t2916*t6834;
  t7085 = t1824*t6940;
  t7305 = 0. + t7064 + t7085;
  t7053 = t3717*t6968;
  t7319 = -1.*t1698*t7305;
  t7329 = 0. + t7053 + t7319;
  t7848 = t1698*t6968;
  t7851 = t3717*t7305;
  t7852 = 0. + t7848 + t7851;
  t8093 = t23*t7329;
  t8384 = 0. + t8093;
  t3911 = t708*t3890;
  t3953 = 0. + t3911;
  t4188 = -1.*t3953*t189;
  t4359 = t1179*t4274;
  t4731 = t783*t4602;
  t4872 = 0. + t4359 + t4731;
  t4994 = t611*t4872;
  t5092 = -1.*t783*t4274;
  t5099 = t1179*t4602;
  t5110 = 0. + t5092 + t5099;
  t5163 = t5110*t1306;
  t5179 = 0. + t4994 + t5163;
  t5246 = t412*t5179;
  t5303 = 0. + t4188 + t5246;
  t7529 = t708*t7329;
  t7555 = 0. + t7529;
  t7781 = -1.*t7555*t189;
  t7905 = t1179*t7852;
  t8466 = t783*t8384;
  t8503 = 0. + t7905 + t8466;
  t8578 = t611*t8503;
  t8583 = -1.*t783*t7852;
  t8603 = t1179*t8384;
  t8661 = 0. + t8583 + t8603;
  t8691 = t8661*t1306;
  t8713 = 0. + t8578 + t8691;
  t8726 = t412*t8713;
  t8744 = 0. + t7781 + t8726;
  t135 = 0. + t23;
  t283 = -1.*t135*t189;
  t812 = t758*t783;
  t974 = 0. + t812;
  t1072 = t611*t974;
  t1197 = t1179*t758;
  t1208 = 0. + t1197;
  t1385 = t1208*t1306;
  t1512 = 0. + t1072 + t1385;
  t1573 = t412*t1512;
  t1595 = 0. + t283 + t1573;
  t8950 = t611*t5110;
  t9003 = -1.*t4872*t1306;
  t9006 = 0. + t8950 + t9003;
  t9048 = t611*t8661;
  t9053 = -1.*t8503*t1306;
  t9074 = 0. + t9048 + t9053;
  t8872 = t1208*t611;
  t8875 = -1.*t974*t1306;
  t8916 = 0. + t8872 + t8875;
  t9164 = 1.e-6*t135;
  t9165 = -0.000099*t3953;
  t9167 = 0.000287*t7555;
  t9168 = t9164 + t9165 + t9167;
  t9171 = 0.000171*t3953;
  t9178 = -0.000099*t7555;
  t9179 = t9171 + t9178;
  t9180 = 0.000449*t135;
  t9188 = 1.e-6*t7555;
  t9189 = t9180 + t9188;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=1.e-6*t1595 - 0.000099*t5303 + 0.000287*t8744;
  p_output1[10]=0.000171*t5303 - 0.000099*t8744;
  p_output1[11]=0.000449*t1595 + 1.e-6*t8744;
  p_output1[12]=1.e-6*t8916 - 0.000099*t9006 + 0.000287*t9074;
  p_output1[13]=0.000171*t9006 - 0.000099*t9074;
  p_output1[14]=0.000449*t8916 + 1.e-6*t9074;
  p_output1[15]=t9168;
  p_output1[16]=t9179;
  p_output1[17]=t9189;
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
  p_output1[39]=t9168;
  p_output1[40]=t9179;
  p_output1[41]=t9189;
  p_output1[42]=-0.000099*t4274 + 0.000287*t7852;
  p_output1[43]=0.000171*t4274 - 0.000099*t7852;
  p_output1[44]=1.e-6*t7852;
  p_output1[45]=1.e-6;
  p_output1[46]=0;
  p_output1[47]=0.000449;
  p_output1[48]=1.e-6;
  p_output1[49]=0;
  p_output1[50]=0.000449;
  p_output1[51]=1.e-6;
  p_output1[52]=0;
  p_output1[53]=0.000449;
  p_output1[54]=1.e-6;
  p_output1[55]=0;
  p_output1[56]=0.000449;
  p_output1[57]=1.e-6;
  p_output1[58]=0;
  p_output1[59]=0.000449;
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

#include "Jdq_AMBody_RightToe_mex.hh"

namespace SymExpression
{

void Jdq_AMBody_RightToe_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
