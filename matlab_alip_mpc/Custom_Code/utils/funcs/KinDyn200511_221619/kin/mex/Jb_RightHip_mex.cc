/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:27:53 GMT-04:00
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
  double t383;
  double t138;
  double t140;
  double t418;
  double t137;
  double t1388;
  double t485;
  double t558;
  double t1584;
  double t1626;
  double t1389;
  double t1484;
  double t1711;
  double t1763;
  double t2255;
  double t2256;
  double t2165;
  double t2194;
  double t292;
  double t419;
  double t429;
  double t619;
  double t756;
  double t841;
  double t957;
  double t986;
  double t1485;
  double t1638;
  double t1675;
  double t1727;
  double t1822;
  double t1880;
  double t1886;
  double t1935;
  double t1962;
  double t1965;
  double t2241;
  double t2416;
  double t2496;
  double t2576;
  double t2585;
  double t2681;
  double t2689;
  double t2697;
  double t2706;
  double t2739;
  double t3154;
  double t3205;
  double t3322;
  double t3489;
  double t3628;
  double t3760;
  double t3798;
  double t3877;
  double t3912;
  double t3916;
  double t3379;
  double t3385;
  double t3407;
  double t3995;
  double t4030;
  double t4057;
  double t4077;
  double t4135;
  double t3664;
  double t3976;
  double t3986;
  double t3992;
  double t4256;
  double t4287;
  double t4296;
  double t4322;
  double t4344;
  double t4347;
  double t3993;
  double t4192;
  double t4204;
  double t4303;
  double t4409;
  double t4479;
  double t4617;
  double t4656;
  double t4657;
  double t3119;
  double t3153;
  double t4242;
  double t4711;
  double t4946;
  double t4799;
  double t5049;
  double t5283;
  double t5484;
  double t5531;
  t383 = Cos(var1[13]);
  t138 = Cos(var1[5]);
  t140 = Sin(var1[13]);
  t418 = Sin(var1[5]);
  t137 = Sin(var1[3]);
  t1388 = Sin(var1[14]);
  t485 = Cos(var1[3]);
  t558 = Sin(var1[4]);
  t1584 = t140*t1388;
  t1626 = 0. + t1584;
  t1389 = t383*t1388;
  t1484 = 0. + t1389;
  t1711 = Cos(var1[14]);
  t1763 = Cos(var1[4]);
  t2255 = -1.*t1711*t140;
  t2256 = 0. + t2255;
  t2165 = -1.*t383*t1711;
  t2194 = 0. + t2165;
  t292 = t138*t140;
  t419 = t383*t418;
  t429 = 0. + t292 + t419;
  t619 = -1.*t383*t138;
  t756 = t140*t418;
  t841 = 0. + t619 + t756;
  t957 = t558*t841;
  t986 = 0. + t957;
  t1485 = t138*t1484;
  t1638 = -1.*t1626*t418;
  t1675 = 0. + t1485 + t1638;
  t1727 = 0. + t1711;
  t1822 = t1727*t1763;
  t1880 = t138*t1626;
  t1886 = t1484*t418;
  t1935 = 0. + t1880 + t1886;
  t1962 = t558*t1935;
  t1965 = 0. + t1822 + t1962;
  t2241 = t2194*t138;
  t2416 = -1.*t2256*t418;
  t2496 = 0. + t2241 + t2416;
  t2576 = 0. + t1388;
  t2585 = t1763*t2576;
  t2681 = t138*t2256;
  t2689 = t2194*t418;
  t2697 = 0. + t2681 + t2689;
  t2706 = t558*t2697;
  t2739 = 0. + t2585 + t2706;
  t3154 = -1.*t1727*t558;
  t3205 = t1763*t1935;
  t3322 = 0. + t3154 + t3205;
  t3489 = -1.*t383;
  t3628 = 1. + t3489;
  t3760 = -1.*t1711;
  t3798 = 1. + t3760;
  t3877 = -0.135*t3798;
  t3912 = -0.135*t1711;
  t3916 = 0. + t3877 + t3912;
  t3379 = -1.*t2576*t558;
  t3385 = t1763*t2697;
  t3407 = 0. + t3379 + t3385;
  t3995 = 0.07996*t3628;
  t4030 = 0.04566*t383;
  t4057 = 0.135*t140;
  t4077 = t3916*t140;
  t4135 = 0. + t3995 + t4030 + t4057 + t4077;
  t3664 = -0.135*t3628;
  t3976 = t383*t3916;
  t3986 = 0.034300000000000004*t140;
  t3992 = 0. + t3664 + t3976 + t3986;
  t4256 = -0.08055*t3798;
  t4287 = -0.08055*t1711;
  t4296 = 0. + t4256 + t4287;
  t4322 = t138*t4135;
  t4344 = t3992*t418;
  t4347 = 0. + t4322 + t4344;
  t3993 = t138*t3992;
  t4192 = -1.*t4135*t418;
  t4204 = 0. + t3993 + t4192;
  t4303 = -1.*t4296*t558;
  t4409 = t1763*t4347;
  t4479 = 0. + t4303 + t4409;
  t4617 = t4296*t1763;
  t4656 = t558*t4347;
  t4657 = 0. + t4617 + t4656;
  t3119 = t1763*t841;
  t3153 = 0. + t3119;
  t4242 = t4204*t2496;
  t4711 = -1.*t4204*t1675;
  t4946 = t429*t4204;
  t4799 = -1.*t4204*t2496;
  t5049 = -1.*t429*t4204;
  t5283 = t4204*t1675;
  t5484 = t4296*t2576;
  t5531 = -1.*t4296*t1727;
  p_output1[0]=0. - 1.*t137*t429 + t485*t986;
  p_output1[1]=0. - 1.*t137*t1675 + t1965*t485;
  p_output1[2]=0. - 1.*t137*t2496 + t2739*t485;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t429*t485 + t137*t986;
  p_output1[7]=0. + t137*t1965 + t1675*t485;
  p_output1[8]=0. + t137*t2739 + t2496*t485;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t3153;
  p_output1[13]=t3322;
  p_output1[14]=t3407;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t3322*(t4242 + t3407*t4479 + t2739*t4657) + t3407*(-1.*t3322*t4479 - 1.*t1965*t4657 + t4711);
  p_output1[19]=t3153*(-1.*t3407*t4479 - 1.*t2739*t4657 + t4799) + t3407*(t3153*t4479 + t4946 + t4657*t986);
  p_output1[20]=t3153*(t3322*t4479 + t1965*t4657 + t5283) + t3322*(-1.*t3153*t4479 + t5049 - 1.*t4657*t986);
  p_output1[21]=t3153;
  p_output1[22]=t3322;
  p_output1[23]=t3407;
  p_output1[24]=0. + t1675*(t4242 + t2697*t4347 + t5484) + t2496*(-1.*t1935*t4347 + t4711 + t5531);
  p_output1[25]=t429*(-1.*t2576*t4296 - 1.*t2697*t4347 + t4799) + t2496*(0. + t4946 + t4347*t841);
  p_output1[26]=t429*(t1727*t4296 + t1935*t4347 + t5283) + t1675*(0. + t5049 - 1.*t4347*t841);
  p_output1[27]=t429;
  p_output1[28]=t1675;
  p_output1[29]=t2496;
  p_output1[30]=0. + t1727*(t2194*t3992 + t2256*t4135 + t5484) + t2576*(-1.*t1484*t3992 - 1.*t1626*t4135 + t5531);
  p_output1[31]=0. + t2576*(0. + t140*t3992 - 1.*t383*t4135);
  p_output1[32]=0. + t1727*(0. - 1.*t140*t3992 + t383*t4135);
  p_output1[33]=0.;
  p_output1[34]=t1727;
  p_output1[35]=t2576;
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
  p_output1[78]=-0.135 + t1711*(0. - 1.*t1711*t3916 + t1388*t4296) + t1388*(0. - 1.*t1388*t3916 - 1.*t1711*t4296);
  p_output1[79]=0. + 0.034300000000000004*t1388;
  p_output1[80]=0. - 0.034300000000000004*t1711;
  p_output1[81]=0.;
  p_output1[82]=t1727;
  p_output1[83]=t2576;
  p_output1[84]=0.;
  p_output1[85]=0.;
  p_output1[86]=0.;
  p_output1[87]=-1.;
  p_output1[88]=0.;
  p_output1[89]=0.;
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

#include "Jb_RightHip_mex.hh"

namespace SymExpression
{

void Jb_RightHip_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
