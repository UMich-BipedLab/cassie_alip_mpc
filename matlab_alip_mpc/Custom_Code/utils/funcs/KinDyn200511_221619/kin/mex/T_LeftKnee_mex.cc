/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:12 GMT-04:00
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
  double t16;
  double t67;
  double t110;
  double t84;
  double t116;
  double t58;
  double t152;
  double t172;
  double t174;
  double t95;
  double t131;
  double t136;
  double t181;
  double t15;
  double t341;
  double t344;
  double t374;
  double t36;
  double t41;
  double t48;
  double t138;
  double t203;
  double t247;
  double t251;
  double t272;
  double t304;
  double t393;
  double t11;
  double t659;
  double t663;
  double t713;
  double t567;
  double t613;
  double t622;
  double t436;
  double t801;
  double t803;
  double t806;
  double t559;
  double t650;
  double t728;
  double t731;
  double t736;
  double t761;
  double t1051;
  double t1053;
  double t1068;
  double t911;
  double t931;
  double t944;
  double t955;
  double t992;
  double t997;
  double t340;
  double t414;
  double t416;
  double t462;
  double t474;
  double t479;
  double t787;
  double t810;
  double t814;
  double t817;
  double t839;
  double t862;
  double t1044;
  double t1077;
  double t1088;
  double t1097;
  double t1108;
  double t1135;
  double t1450;
  double t1455;
  double t1539;
  double t1547;
  double t1758;
  double t1760;
  double t1890;
  double t1910;
  double t1144;
  double t1149;
  double t1178;
  double t1465;
  double t1466;
  double t1478;
  double t1502;
  double t1504;
  double t1521;
  double t1548;
  double t1552;
  double t1553;
  double t1607;
  double t1618;
  double t1634;
  double t1765;
  double t1784;
  double t1790;
  double t1798;
  double t1806;
  double t1826;
  double t1923;
  double t1930;
  double t1935;
  double t1961;
  double t1964;
  double t2004;
  double t1245;
  double t1262;
  double t1278;
  double t1298;
  double t1316;
  double t1321;
  t16 = Cos(var1[3]);
  t67 = Cos(var1[5]);
  t110 = Sin(var1[4]);
  t84 = Sin(var1[3]);
  t116 = Sin(var1[5]);
  t58 = Cos(var1[6]);
  t152 = t16*t67*t110;
  t172 = t84*t116;
  t174 = t152 + t172;
  t95 = -1.*t67*t84;
  t131 = t16*t110*t116;
  t136 = t95 + t131;
  t181 = Sin(var1[6]);
  t15 = Cos(var1[8]);
  t341 = t58*t174;
  t344 = -1.*t136*t181;
  t374 = t341 + t344;
  t36 = Cos(var1[4]);
  t41 = Cos(var1[7]);
  t48 = t16*t36*t41;
  t138 = t58*t136;
  t203 = t174*t181;
  t247 = t138 + t203;
  t251 = Sin(var1[7]);
  t272 = t247*t251;
  t304 = t48 + t272;
  t393 = Sin(var1[8]);
  t11 = Sin(var1[9]);
  t659 = t67*t84*t110;
  t663 = -1.*t16*t116;
  t713 = t659 + t663;
  t567 = t16*t67;
  t613 = t84*t110*t116;
  t622 = t567 + t613;
  t436 = Cos(var1[9]);
  t801 = t58*t713;
  t803 = -1.*t622*t181;
  t806 = t801 + t803;
  t559 = t36*t41*t84;
  t650 = t58*t622;
  t728 = t713*t181;
  t731 = t650 + t728;
  t736 = t731*t251;
  t761 = t559 + t736;
  t1051 = t36*t67*t58;
  t1053 = -1.*t36*t116*t181;
  t1068 = t1051 + t1053;
  t911 = -1.*t41*t110;
  t931 = t36*t58*t116;
  t944 = t36*t67*t181;
  t955 = t931 + t944;
  t992 = t955*t251;
  t997 = t911 + t992;
  t340 = t15*t304;
  t414 = t374*t393;
  t416 = t340 + t414;
  t462 = t15*t374;
  t474 = -1.*t304*t393;
  t479 = t462 + t474;
  t787 = t15*t761;
  t810 = t806*t393;
  t814 = t787 + t810;
  t817 = t15*t806;
  t839 = -1.*t761*t393;
  t862 = t817 + t839;
  t1044 = t15*t997;
  t1077 = t1068*t393;
  t1088 = t1044 + t1077;
  t1097 = t15*t1068;
  t1108 = -1.*t997*t393;
  t1135 = t1097 + t1108;
  t1450 = -1.*t58;
  t1455 = 1. + t1450;
  t1539 = -1.*t41;
  t1547 = 1. + t1539;
  t1758 = -1.*t15;
  t1760 = 1. + t1758;
  t1890 = -1.*t436;
  t1910 = 1. + t1890;
  t1144 = t436*t416;
  t1149 = t11*t479;
  t1178 = t1144 + t1149;
  t1465 = 0.07996*t1455;
  t1466 = -0.135*t181;
  t1478 = 0. + t1465 + t1466;
  t1502 = 0.135*t1455;
  t1504 = 0.07996*t181;
  t1521 = 0. + t1502 + t1504;
  t1548 = 0.135*t1547;
  t1552 = 0.08055*t251;
  t1553 = 0. + t1548 + t1552;
  t1607 = -0.08055*t1547;
  t1618 = 0.135*t251;
  t1634 = 0. + t1607 + t1618;
  t1765 = -0.08055*t1760;
  t1784 = -0.01004*t393;
  t1790 = 0. + t1765 + t1784;
  t1798 = -0.01004*t1760;
  t1806 = 0.08055*t393;
  t1826 = 0. + t1798 + t1806;
  t1923 = -0.08055*t1910;
  t1930 = -0.13004*t11;
  t1935 = 0. + t1923 + t1930;
  t1961 = -0.13004*t1910;
  t1964 = 0.08055*t11;
  t2004 = 0. + t1961 + t1964;
  t1245 = t436*t814;
  t1262 = t11*t862;
  t1278 = t1245 + t1262;
  t1298 = t436*t1088;
  t1316 = t11*t1135;
  t1321 = t1298 + t1316;
  p_output1[0]=t11*t416 - 1.*t436*t479;
  p_output1[1]=t11*t814 - 1.*t436*t862;
  p_output1[2]=t1088*t11 - 1.*t1135*t436;
  p_output1[3]=0.;
  p_output1[4]=t1178;
  p_output1[5]=t1278;
  p_output1[6]=t1321;
  p_output1[7]=0.;
  p_output1[8]=t16*t251*t36 - 1.*t247*t41;
  p_output1[9]=-1.*t41*t731 + t251*t36*t84;
  p_output1[10]=-1.*t110*t251 - 1.*t41*t955;
  p_output1[11]=0.;
  p_output1[12]=0. - 0.04845*t1178 + t136*t1521 + t1478*t174 + t1553*t247 + t1790*t304 + t16*t1634*t36 + t1826*t374 + 0.1327*(-1.*t16*t251*t36 + t247*t41) + t1935*t416 + t2004*t479 - 0.15304*(-1.*t11*t416 + t436*t479) + var1[0];
  p_output1[13]=0. - 0.04845*t1278 + t1521*t622 + t1478*t713 + t1553*t731 + t1790*t761 + t1826*t806 + t1935*t814 + t1634*t36*t84 + 0.1327*(t41*t731 - 1.*t251*t36*t84) + t2004*t862 - 0.15304*(-1.*t11*t814 + t436*t862) + var1[1];
  p_output1[14]=0. - 0.04845*t1321 - 1.*t110*t1634 + t1068*t1826 + t1088*t1935 + t1135*t2004 + t116*t1521*t36 - 0.15304*(-1.*t1088*t11 + t1135*t436) + t1478*t36*t67 + t1553*t955 + 0.1327*(t110*t251 + t41*t955) + t1790*t997 + var1[2];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "T_LeftKnee_mex.hh"

namespace SymExpression
{

void T_LeftKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
