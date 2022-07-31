/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:06 GMT-04:00
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
  double t459;
  double t231;
  double t263;
  double t514;
  double t33;
  double t1213;
  double t716;
  double t721;
  double t1274;
  double t1349;
  double t1507;
  double t1553;
  double t1774;
  double t2071;
  double t2074;
  double t2101;
  double t2128;
  double t1758;
  double t320;
  double t598;
  double t710;
  double t812;
  double t815;
  double t901;
  double t945;
  double t1029;
  double t1485;
  double t1581;
  double t1688;
  double t1786;
  double t1835;
  double t1867;
  double t1889;
  double t1898;
  double t1942;
  double t1995;
  double t2089;
  double t2198;
  double t2201;
  double t2203;
  double t2206;
  double t2237;
  double t2286;
  double t2293;
  double t2308;
  double t2325;
  double t2843;
  double t2846;
  double t2890;
  double t2938;
  double t2981;
  double t3016;
  double t3023;
  double t2865;
  double t3035;
  double t3045;
  double t3050;
  double t3549;
  double t3559;
  double t3624;
  double t3625;
  double t3660;
  double t3917;
  double t3938;
  double t3949;
  double t3981;
  double t3999;
  double t4000;
  double t2804;
  double t2807;
  double t2829;
  double t2693;
  double t2700;
  double t2792;
  double t3477;
  double t3793;
  double t3827;
  double t4148;
  double t4152;
  double t4158;
  double t3961;
  double t4057;
  double t4121;
  double t2606;
  double t2652;
  double t3893;
  double t4339;
  double t4626;
  double t4679;
  double t4987;
  double t5226;
  double t5388;
  double t5488;
  t459 = Cos(var1[5]);
  t231 = Cos(var1[6]);
  t263 = Sin(var1[5]);
  t514 = Sin(var1[6]);
  t33 = Sin(var1[3]);
  t1213 = Sin(var1[7]);
  t716 = Cos(var1[3]);
  t721 = Sin(var1[4]);
  t1274 = t231*t1213;
  t1349 = 0. + t1274;
  t1507 = t514*t1213;
  t1553 = 0. + t1507;
  t1774 = Cos(var1[7]);
  t2071 = -1.*t231*t1774;
  t2074 = 0. + t2071;
  t2101 = -1.*t1774*t514;
  t2128 = 0. + t2101;
  t1758 = Cos(var1[4]);
  t320 = t231*t263;
  t598 = t459*t514;
  t710 = 0. + t320 + t598;
  t812 = -1.*t459*t231;
  t815 = t263*t514;
  t901 = 0. + t812 + t815;
  t945 = t721*t901;
  t1029 = 0. + t945;
  t1485 = t459*t1349;
  t1581 = -1.*t263*t1553;
  t1688 = 0. + t1485 + t1581;
  t1786 = 0. + t1774;
  t1835 = t1758*t1786;
  t1867 = t263*t1349;
  t1889 = t459*t1553;
  t1898 = 0. + t1867 + t1889;
  t1942 = t721*t1898;
  t1995 = 0. + t1835 + t1942;
  t2089 = t459*t2074;
  t2198 = -1.*t263*t2128;
  t2201 = 0. + t2089 + t2198;
  t2203 = t2074*t263;
  t2206 = t459*t2128;
  t2237 = 0. + t2203 + t2206;
  t2286 = t721*t2237;
  t2293 = 0. + t1213;
  t2308 = t1758*t2293;
  t2325 = 0. + t2286 + t2308;
  t2843 = -1.*t231;
  t2846 = 1. + t2843;
  t2890 = -1.*t1774;
  t2938 = 1. + t2890;
  t2981 = 0.135*t2938;
  t3016 = 0.135*t1774;
  t3023 = 0. + t2981 + t3016;
  t2865 = 0.135*t2846;
  t3035 = t231*t3023;
  t3045 = 0.034300000000000004*t514;
  t3050 = 0. + t2865 + t3035 + t3045;
  t3549 = 0.07996*t2846;
  t3559 = 0.04566*t231;
  t3624 = -0.135*t514;
  t3625 = t3023*t514;
  t3660 = 0. + t3549 + t3559 + t3624 + t3625;
  t3917 = -0.08055*t2938;
  t3938 = -0.08055*t1774;
  t3949 = 0. + t3917 + t3938;
  t3981 = t263*t3050;
  t3999 = t459*t3660;
  t4000 = 0. + t3981 + t3999;
  t2804 = t1758*t2237;
  t2807 = -1.*t721*t2293;
  t2829 = 0. + t2804 + t2807;
  t2693 = -1.*t1786*t721;
  t2700 = t1758*t1898;
  t2792 = 0. + t2693 + t2700;
  t3477 = t459*t3050;
  t3793 = -1.*t263*t3660;
  t3827 = 0. + t3477 + t3793;
  t4148 = -1.*t3949*t721;
  t4152 = t1758*t4000;
  t4158 = 0. + t4148 + t4152;
  t3961 = t1758*t3949;
  t4057 = t721*t4000;
  t4121 = 0. + t3961 + t4057;
  t2606 = t1758*t901;
  t2652 = 0. + t2606;
  t3893 = t3827*t2201;
  t4339 = -1.*t3827*t1688;
  t4626 = t710*t3827;
  t4679 = -1.*t3827*t2201;
  t4987 = -1.*t710*t3827;
  t5226 = t3827*t1688;
  t5388 = t3949*t2293;
  t5488 = -1.*t3949*t1786;
  p_output1[0]=0. - 1.*t33*t710 + t1029*t716;
  p_output1[1]=0. - 1.*t1688*t33 + t1995*t716;
  p_output1[2]=0. - 1.*t2201*t33 + t2325*t716;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1029*t33 + t710*t716;
  p_output1[7]=0. + t1995*t33 + t1688*t716;
  p_output1[8]=0. + t2325*t33 + t2201*t716;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2652;
  p_output1[13]=t2792;
  p_output1[14]=t2829;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2792*(t3893 + t2325*t4121 + t2829*t4158) + t2829*(-1.*t1995*t4121 - 1.*t2792*t4158 + t4339);
  p_output1[19]=t2829*(t1029*t4121 + t2652*t4158 + t4626) + t2652*(-1.*t2325*t4121 - 1.*t2829*t4158 + t4679);
  p_output1[20]=t2792*(-1.*t1029*t4121 - 1.*t2652*t4158 + t4987) + t2652*(t1995*t4121 + t2792*t4158 + t5226);
  p_output1[21]=t2652;
  p_output1[22]=t2792;
  p_output1[23]=t2829;
  p_output1[24]=0. + t1688*(t3893 + t2237*t4000 + t5388) + t2201*(-1.*t1898*t4000 + t4339 + t5488);
  p_output1[25]=(-1.*t2293*t3949 - 1.*t2237*t4000 + t4679)*t710 + t2201*(0. + t4626 + t4000*t901);
  p_output1[26]=(t1786*t3949 + t1898*t4000 + t5226)*t710 + t1688*(0. + t4987 - 1.*t4000*t901);
  p_output1[27]=t710;
  p_output1[28]=t1688;
  p_output1[29]=t2201;
  p_output1[30]=0. + t1786*(t2074*t3050 + t2128*t3660 + t5388) + t2293*(-1.*t1349*t3050 - 1.*t1553*t3660 + t5488);
  p_output1[31]=0. + t2293*(0. - 1.*t231*t3660 + t3050*t514);
  p_output1[32]=0. + t1786*(0. + t231*t3660 - 1.*t3050*t514);
  p_output1[33]=0.;
  p_output1[34]=t1786;
  p_output1[35]=t2293;
  p_output1[36]=0.135 + t1774*(0. - 1.*t1774*t3023 + t1213*t3949) + t1213*(0. - 1.*t1213*t3023 - 1.*t1774*t3949);
  p_output1[37]=0. + 0.034300000000000004*t1213;
  p_output1[38]=0. - 0.034300000000000004*t1774;
  p_output1[39]=0.;
  p_output1[40]=t1786;
  p_output1[41]=t2293;
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

#include "Jb_LeftHip_mex.hh"

namespace SymExpression
{

void Jb_LeftHip_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
