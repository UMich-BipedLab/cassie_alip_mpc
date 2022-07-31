/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:20:47 GMT-04:00
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
  double t41;
  double t1401;
  double t1645;
  double t1198;
  double t1781;
  double t1116;
  double t2226;
  double t1415;
  double t1848;
  double t2019;
  double t433;
  double t459;
  double t2409;
  double t2418;
  double t2478;
  double t2534;
  double t2542;
  double t2860;
  double t3042;
  double t3064;
  double t3550;
  double t3580;
  double t4567;
  double t4609;
  double t4645;
  double t4655;
  double t4980;
  double t4997;
  double t5150;
  double t4771;
  double t4784;
  double t4882;
  double t4451;
  double t4464;
  double t5838;
  double t5840;
  double t6167;
  double t4912;
  double t5451;
  double t5507;
  double t5831;
  double t6245;
  double t6365;
  double t6398;
  double t6408;
  double t6777;
  double t4274;
  double t4450;
  double t7099;
  double t5727;
  t41 = Cos(var1[3]);
  t1401 = Cos(var1[5]);
  t1645 = Sin(var1[13]);
  t1198 = Cos(var1[13]);
  t1781 = Sin(var1[5]);
  t1116 = Sin(var1[3]);
  t2226 = Sin(var1[4]);
  t1415 = t1198*t1401;
  t1848 = -1.*t1645*t1781;
  t2019 = 0. + t1415 + t1848;
  t433 = Cos(var1[4]);
  t459 = 0. + t433;
  t2409 = t1401*t1645;
  t2418 = t1198*t1781;
  t2478 = 0. + t2409 + t2418;
  t2534 = t2226*t2478;
  t2542 = 0. + t2534;
  t2860 = -1.*t1401*t1645;
  t3042 = -1.*t1198*t1781;
  t3064 = 0. + t2860 + t3042;
  t3550 = t2226*t2019;
  t3580 = 0. + t3550;
  t4567 = t433*t2019;
  t4609 = 0. + t4567;
  t4645 = -1.*t1198;
  t4655 = 1. + t4645;
  t4980 = 0.07996*t4655;
  t4997 = 0.07996*t1198;
  t5150 = 0. + t4980 + t4997;
  t4771 = -0.135*t4655;
  t4784 = -0.135*t1198;
  t4882 = 0. + t4771 + t4784;
  t4451 = t433*t2478;
  t4464 = 0. + t4451;
  t5838 = t5150*t1401;
  t5840 = t4882*t1781;
  t6167 = 0. + t5838 + t5840;
  t4912 = t4882*t1401;
  t5451 = -1.*t5150*t1781;
  t5507 = 0. + t4912 + t5451;
  t5831 = 0.08055*t2226;
  t6245 = t433*t6167;
  t6365 = 0. + t5831 + t6245;
  t6398 = -0.08055*t433;
  t6408 = t2226*t6167;
  t6777 = 0. + t6398 + t6408;
  t4274 = -1.*t2226;
  t4450 = 0. + t4274;
  t7099 = t5507*t3064;
  t5727 = -1.*t5507*t2019;
  p_output1[0]=0. + t41*t459;
  p_output1[1]=0. - 1.*t1116*t2019 + t2542*t41;
  p_output1[2]=0. - 1.*t1116*t3064 + t3580*t41;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1116*t459;
  p_output1[7]=0. + t1116*t2542 + t2019*t41;
  p_output1[8]=0. + t1116*t3580 + t3064*t41;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t4450;
  p_output1[13]=t4464;
  p_output1[14]=t4609;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0. + t4609*(t5727 - 1.*t4464*t6365 - 1.*t2542*t6777) + t4464*(t4609*t6365 + t3580*t6777 + t7099);
  p_output1[19]=t4450*(-1.*t3064*t5507 - 1.*t4609*t6365 - 1.*t3580*t6777) + t4609*(0. + t4450*t6365 + t459*t6777);
  p_output1[20]=t4450*(t2019*t5507 + t4464*t6365 + t2542*t6777) + t4464*(0. - 1.*t4450*t6365 - 1.*t459*t6777);
  p_output1[21]=t4450;
  p_output1[22]=t4464;
  p_output1[23]=t4609;
  p_output1[24]=0. + t3064*(0. + t5727 - 1.*t2478*t6167) + t2019*(0. + t2019*t6167 + t7099);
  p_output1[25]=0. - 0.08055*t3064;
  p_output1[26]=0. + 0.08055*t2019;
  p_output1[27]=0.;
  p_output1[28]=t2019;
  p_output1[29]=t3064;
  p_output1[30]=0.;
  p_output1[31]=0. + t1645*t4882 - 1.*t1198*t5150;
  p_output1[32]=0. + t1198*t4882 + t1645*t5150;
  p_output1[33]=1.;
  p_output1[34]=0.;
  p_output1[35]=0.;
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
  p_output1[78]=0.;
  p_output1[79]=0.;
  p_output1[80]=0.;
  p_output1[81]=1.;
  p_output1[82]=0.;
  p_output1[83]=0.;
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

#include "Jb_RightAbductionJoint_mex.hh"

namespace SymExpression
{

void Jb_RightAbductionJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
