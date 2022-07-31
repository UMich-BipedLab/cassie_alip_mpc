/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:25 GMT-04:00
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
  double t182;
  double t1604;
  double t1756;
  double t1393;
  double t1807;
  double t896;
  double t1868;
  double t1743;
  double t1811;
  double t1835;
  double t268;
  double t663;
  double t1877;
  double t1881;
  double t1885;
  double t1886;
  double t1890;
  double t1919;
  double t1941;
  double t1954;
  double t1964;
  double t1967;
  double t2050;
  double t2054;
  double t2055;
  double t2060;
  double t2089;
  double t2092;
  double t2093;
  double t2063;
  double t2072;
  double t2076;
  double t2031;
  double t2046;
  double t2112;
  double t2122;
  double t2125;
  double t2088;
  double t2094;
  double t2098;
  double t2111;
  double t2127;
  double t2129;
  double t2133;
  double t2137;
  double t2143;
  double t2019;
  double t2022;
  double t2106;
  double t2149;
  t182 = Cos(var1[3]);
  t1604 = Cos(var1[6]);
  t1756 = Sin(var1[5]);
  t1393 = Cos(var1[5]);
  t1807 = Sin(var1[6]);
  t896 = Sin(var1[3]);
  t1868 = Sin(var1[4]);
  t1743 = t1393*t1604;
  t1811 = -1.*t1756*t1807;
  t1835 = 0. + t1743 + t1811;
  t268 = Cos(var1[4]);
  t663 = 0. + t268;
  t1877 = t1604*t1756;
  t1881 = t1393*t1807;
  t1885 = 0. + t1877 + t1881;
  t1886 = t1868*t1885;
  t1890 = 0. + t1886;
  t1919 = -1.*t1604*t1756;
  t1941 = -1.*t1393*t1807;
  t1954 = 0. + t1919 + t1941;
  t1964 = t1868*t1835;
  t1967 = 0. + t1964;
  t2050 = t268*t1835;
  t2054 = 0. + t2050;
  t2055 = -1.*t1604;
  t2060 = 1. + t2055;
  t2089 = 0.07996*t2060;
  t2092 = 0.07996*t1604;
  t2093 = 0. + t2089 + t2092;
  t2063 = 0.135*t2060;
  t2072 = 0.135*t1604;
  t2076 = 0. + t2063 + t2072;
  t2031 = t268*t1885;
  t2046 = 0. + t2031;
  t2112 = t1393*t2093;
  t2122 = t2076*t1756;
  t2125 = 0. + t2112 + t2122;
  t2088 = t1393*t2076;
  t2094 = -1.*t2093*t1756;
  t2098 = 0. + t2088 + t2094;
  t2111 = 0.08055*t1868;
  t2127 = t268*t2125;
  t2129 = 0. + t2111 + t2127;
  t2133 = -0.08055*t268;
  t2137 = t1868*t2125;
  t2143 = 0. + t2133 + t2137;
  t2019 = -1.*t1868;
  t2022 = 0. + t2019;
  t2106 = -1.*t2098*t1835;
  t2149 = t2098*t1954;
  p_output1[0]=0. + t182*t663;
  p_output1[1]=0. + t182*t1890 - 1.*t1835*t896;
  p_output1[2]=0. + t182*t1967 - 1.*t1954*t896;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t663*t896;
  p_output1[7]=0. + t182*t1835 + t1890*t896;
  p_output1[8]=0. + t182*t1954 + t1967*t896;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2022;
  p_output1[13]=t2046;
  p_output1[14]=t2054;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0. + t2054*(t2106 - 1.*t2046*t2129 - 1.*t1890*t2143) + t2046*(t2054*t2129 + t1967*t2143 + t2149);
  p_output1[19]=t2022*(-1.*t1954*t2098 - 1.*t2054*t2129 - 1.*t1967*t2143) + t2054*(0. + t2022*t2129 + t2143*t663);
  p_output1[20]=t2022*(t1835*t2098 + t2046*t2129 + t1890*t2143) + t2046*(0. - 1.*t2022*t2129 - 1.*t2143*t663);
  p_output1[21]=t2022;
  p_output1[22]=t2046;
  p_output1[23]=t2054;
  p_output1[24]=0. + t1954*(0. + t2106 - 1.*t1885*t2125) + t1835*(0. + t1835*t2125 + t2149);
  p_output1[25]=0. - 0.08055*t1954;
  p_output1[26]=0. + 0.08055*t1835;
  p_output1[27]=0.;
  p_output1[28]=t1835;
  p_output1[29]=t1954;
  p_output1[30]=0.;
  p_output1[31]=0. + t1807*t2076 - 1.*t1604*t2093;
  p_output1[32]=0. + t1604*t2076 + t1807*t2093;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
  p_output1[36]=0.;
  p_output1[37]=0.;
  p_output1[38]=0.;
  p_output1[39]=1.;
  p_output1[40]=0.;
  p_output1[41]=0.;
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

#include "Jb_LeftAbductionJoint_mex.hh"

namespace SymExpression
{

void Jb_LeftAbductionJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
