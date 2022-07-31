/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:25:09 GMT-04:00
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
  double t97;
  double t201;
  double t298;
  double t308;
  double t305;
  double t317;
  double t466;
  double t472;
  double t347;
  double t349;
  double t353;
  double t358;
  double t393;
  double t433;
  double t443;
  double t684;
  double t688;
  double t699;
  double t718;
  double t720;
  double t751;
  double t835;
  double t842;
  double t866;
  double t898;
  double t517;
  double t534;
  double t634;
  double t471;
  double t489;
  double t494;
  double t894;
  double t918;
  double t958;
  double t974;
  double t980;
  double t1008;
  double t64;
  double t1027;
  double t1054;
  double t1105;
  double t1397;
  double t1431;
  double t1436;
  double t1185;
  double t1189;
  double t1192;
  double t1168;
  double t1174;
  double t1179;
  double t1495;
  double t1505;
  double t1509;
  double t1698;
  double t1700;
  double t1702;
  double t1710;
  double t1297;
  double t1338;
  double t1351;
  double t962;
  double t1018;
  double t1704;
  double t1712;
  double t1717;
  double t1737;
  double t1745;
  double t1746;
  double t1114;
  double t1124;
  double t1132;
  double t1364;
  double t1379;
  double t1230;
  double t1241;
  double t1834;
  double t1846;
  double t1851;
  double t1519;
  double t1575;
  double t1581;
  double t1992;
  double t2004;
  double t2017;
  double t1611;
  double t1615;
  double t1758;
  double t1787;
  double t1804;
  double t1720;
  double t1747;
  double t2129;
  double t2139;
  double t2154;
  double t2266;
  double t2267;
  double t2294;
  double t2327;
  double t1810;
  double t1826;
  double t2041;
  double t2051;
  double t2062;
  double t2317;
  double t2329;
  double t2347;
  double t2377;
  double t2383;
  double t2386;
  double t1870;
  double t1874;
  double t1878;
  double t1928;
  double t1980;
  double t2019;
  double t2020;
  double t2105;
  double t2115;
  double t2078;
  double t2089;
  double t2195;
  double t2200;
  double t2211;
  double t2221;
  double t2233;
  double t2243;
  double t2244;
  double t2255;
  double t2261;
  t97 = Cos(var1[3]);
  t201 = Sin(var1[3]);
  t298 = Cos(var1[4]);
  t308 = Sin(var1[4]);
  t305 = -1.*var1[2]*t298*t201;
  t317 = -1.*var1[1]*t308;
  t466 = Cos(var1[5]);
  t472 = Sin(var1[5]);
  t347 = var1[2]*t97*t298;
  t349 = var1[0]*t308;
  t353 = -1.*var1[1]*t97*t298;
  t358 = var1[0]*t298*t201;
  t393 = t97*t298;
  t433 = t298*t201;
  t443 = -1.*t308;
  t684 = t466*t201*t308;
  t688 = -1.*t97*t472;
  t699 = t684 + t688;
  t718 = t97*t466;
  t720 = t201*t308*t472;
  t751 = t718 + t720;
  t835 = Cos(var1[6]);
  t842 = -1.*t835;
  t866 = 1. + t842;
  t898 = Sin(var1[6]);
  t517 = -1.*t466*t201;
  t534 = t97*t308*t472;
  t634 = t517 + t534;
  t471 = t97*t466*t308;
  t489 = t201*t472;
  t494 = t471 + t489;
  t894 = 0.07996*t866;
  t918 = -0.135*t898;
  t958 = 0. + t894 + t918;
  t974 = 0.135*t866;
  t980 = 0.07996*t898;
  t1008 = 0. + t974 + t980;
  t64 = -1.*var1[0];
  t1027 = t298*t466*t835;
  t1054 = -1.*t298*t472*t898;
  t1105 = t1027 + t1054;
  t1397 = t835*t494;
  t1431 = -1.*t634*t898;
  t1436 = t1397 + t1431;
  t1185 = t835*t699;
  t1189 = -1.*t751*t898;
  t1192 = t1185 + t1189;
  t1168 = -1.*var1[2];
  t1174 = -1.*t298*t466*t958;
  t1179 = -1.*t298*t472*t1008;
  t1495 = t298*t835*t472;
  t1505 = t298*t466*t898;
  t1509 = t1495 + t1505;
  t1698 = Cos(var1[7]);
  t1700 = -1.*t1698;
  t1702 = 1. + t1700;
  t1710 = Sin(var1[7]);
  t1297 = t835*t751;
  t1338 = t699*t898;
  t1351 = t1297 + t1338;
  t962 = t699*t958;
  t1018 = t751*t1008;
  t1704 = 0.135*t1702;
  t1712 = 0.08055*t1710;
  t1717 = 0. + t1704 + t1712;
  t1737 = -0.08055*t1702;
  t1745 = 0.135*t1710;
  t1746 = 0. + t1737 + t1745;
  t1114 = t835*t634;
  t1124 = t494*t898;
  t1132 = t1114 + t1124;
  t1364 = t298*t466*t958;
  t1379 = t298*t472*t1008;
  t1230 = -1.*t494*t958;
  t1241 = -1.*t634*t1008;
  t1834 = t1698*t1509;
  t1846 = t308*t1710;
  t1851 = t1834 + t1846;
  t1519 = -1.*var1[1];
  t1575 = -1.*t699*t958;
  t1581 = -1.*t751*t1008;
  t1992 = t1698*t1132;
  t2004 = -1.*t97*t298*t1710;
  t2017 = t1992 + t2004;
  t1611 = t494*t958;
  t1615 = t634*t1008;
  t1758 = t1698*t1351;
  t1787 = -1.*t298*t201*t1710;
  t1804 = t1758 + t1787;
  t1720 = -1.*t1509*t1717;
  t1747 = t308*t1746;
  t2129 = -1.*t1698*t308;
  t2139 = t1509*t1710;
  t2154 = t2129 + t2139;
  t2266 = Cos(var1[8]);
  t2267 = -1.*t2266;
  t2294 = 1. + t2267;
  t2327 = Sin(var1[8]);
  t1810 = t1351*t1717;
  t1826 = t298*t201*t1746;
  t2041 = t298*t1698*t201;
  t2051 = t1351*t1710;
  t2062 = t2041 + t2051;
  t2317 = -0.08055*t2294;
  t2329 = -0.01004*t2327;
  t2347 = 0. + t2317 + t2329;
  t2377 = -0.01004*t2294;
  t2383 = 0.08055*t2327;
  t2386 = 0. + t2377 + t2383;
  t1870 = t97*t298*t1698;
  t1874 = t1132*t1710;
  t1878 = t1870 + t1874;
  t1928 = t1509*t1717;
  t1980 = -1.*t308*t1746;
  t2019 = -1.*t1132*t1717;
  t2020 = -1.*t97*t298*t1746;
  t2105 = t1132*t1717;
  t2115 = t97*t298*t1746;
  t2078 = -1.*t1351*t1717;
  t2089 = -1.*t298*t201*t1746;
  t2195 = -1.*t1698*t1132;
  t2200 = t97*t298*t1710;
  t2211 = 0. + t2195 + t2200;
  t2221 = -1.*t1698*t1351;
  t2233 = t298*t201*t1710;
  t2243 = 0. + t2221 + t2233;
  t2244 = -1.*t1698*t1509;
  t2255 = -1.*t308*t1710;
  t2261 = 0. + t2244 + t2255;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=1.;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=1.;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var1[1];
  p_output1[19]=t64;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t97*var1[2];
  p_output1[25]=-1.*t201*var1[2];
  p_output1[26]=t97*var1[0] + t201*var1[1];
  p_output1[27]=-1.*t201;
  p_output1[28]=t97;
  p_output1[29]=0;
  p_output1[30]=t305 + t317;
  p_output1[31]=t347 + t349;
  p_output1[32]=t353 + t358;
  p_output1[33]=t393;
  p_output1[34]=t433;
  p_output1[35]=t443;
  p_output1[36]=t305 + t317 - 0.135*t494 + 0.07996*t634;
  p_output1[37]=t347 + t349 - 0.135*t699 + 0.07996*t751;
  p_output1[38]=t353 + t358 - 0.135*t298*t466 + 0.07996*t298*t472;
  p_output1[39]=0. + t393;
  p_output1[40]=0. + t433;
  p_output1[41]=0. + t443;
  p_output1[42]=0.08055*t1132 + (0. + t1168 + t1174 + t1179)*t1192 + 0.135*t298*t97 + t1105*(0. + t1018 + t962 + var1[1]);
  p_output1[43]=0.08055*t1351 + 0.135*t201*t298 + t1105*(0. + t1230 + t1241 + t64) + t1436*(0. + t1364 + t1379 + var1[2]);
  p_output1[44]=0.08055*t1509 + t1436*(0. + t1519 + t1575 + t1581) - 0.135*t308 + t1192*(0. + t1611 + t1615 + var1[0]);
  p_output1[45]=0. + t1397 + t1431;
  p_output1[46]=0. + t1185 + t1189;
  p_output1[47]=0. + t1027 + t1054;
  p_output1[48]=0.08055*t1436 - 1.*(0. + t1168 + t1174 + t1179 + t1720 + t1747)*t1804 - 0.01004*t1878 - 1.*t1851*(0. + t1018 + t1810 + t1826 + t962 + var1[1]);
  p_output1[49]=0.08055*t1192 - 0.01004*t2062 - 1.*t1851*(0. + t1230 + t1241 + t2019 + t2020 + t64) - 1.*t2017*(0. + t1364 + t1379 + t1928 + t1980 + var1[2]);
  p_output1[50]=0.08055*t1105 - 1.*t2017*(0. + t1519 + t1575 + t1581 + t2078 + t2089) - 0.01004*t2154 - 1.*t1804*(0. + t1611 + t1615 + t2105 + t2115 + var1[0]);
  p_output1[51]=t2211;
  p_output1[52]=t2243;
  p_output1[53]=t2261;
  p_output1[54]=-0.13004*(t1878*t2266 + t1436*t2327) + 0.08055*(t1436*t2266 - 1.*t1878*t2327) - 1.*t1804*(0. + t1168 + t1174 + t1179 + t1720 + t1747 - 1.*t2154*t2347 - 1.*t1105*t2386) - 1.*t1851*(0. + t1018 + t1810 + t1826 + t2062*t2347 + t1192*t2386 + t962 + var1[1]);
  p_output1[55]=-0.13004*(t2062*t2266 + t1192*t2327) + 0.08055*(t1192*t2266 - 1.*t2062*t2327) - 1.*t1851*(0. + t1230 + t1241 + t2019 + t2020 - 1.*t1878*t2347 - 1.*t1436*t2386 + t64) - 1.*t2017*(0. + t1364 + t1379 + t1928 + t1980 + t2154*t2347 + t1105*t2386 + var1[2]);
  p_output1[56]=-0.13004*(t2154*t2266 + t1105*t2327) + 0.08055*(t1105*t2266 - 1.*t2154*t2327) - 1.*t2017*(0. + t1519 + t1575 + t1581 + t2078 + t2089 - 1.*t2062*t2347 - 1.*t1192*t2386) - 1.*t1804*(0. + t1611 + t1615 + t2105 + t2115 + t1878*t2347 + t1436*t2386 + var1[0]);
  p_output1[57]=t2211;
  p_output1[58]=t2243;
  p_output1[59]=t2261;
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

#include "Js_LeftKnee_mex.hh"

namespace SymExpression
{

void Js_LeftKnee_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
