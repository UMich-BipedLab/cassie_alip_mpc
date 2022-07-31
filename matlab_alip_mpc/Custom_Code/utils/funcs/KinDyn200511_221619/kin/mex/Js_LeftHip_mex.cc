/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:09 GMT-04:00
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
  double t173;
  double t196;
  double t371;
  double t400;
  double t380;
  double t425;
  double t665;
  double t697;
  double t579;
  double t595;
  double t608;
  double t613;
  double t634;
  double t650;
  double t659;
  double t934;
  double t943;
  double t987;
  double t1077;
  double t1087;
  double t1104;
  double t1270;
  double t1300;
  double t1318;
  double t1381;
  double t780;
  double t823;
  double t838;
  double t685;
  double t704;
  double t724;
  double t1370;
  double t1412;
  double t1415;
  double t1426;
  double t1444;
  double t1522;
  double t134;
  double t1573;
  double t1664;
  double t1670;
  double t2445;
  double t2471;
  double t2473;
  double t1885;
  double t1908;
  double t1990;
  t173 = Cos(var1[3]);
  t196 = Sin(var1[3]);
  t371 = Cos(var1[4]);
  t400 = Sin(var1[4]);
  t380 = -1.*var1[2]*t371*t196;
  t425 = -1.*var1[1]*t400;
  t665 = Cos(var1[5]);
  t697 = Sin(var1[5]);
  t579 = var1[2]*t173*t371;
  t595 = var1[0]*t400;
  t608 = -1.*var1[1]*t173*t371;
  t613 = var1[0]*t371*t196;
  t634 = t173*t371;
  t650 = t371*t196;
  t659 = -1.*t400;
  t934 = t665*t196*t400;
  t943 = -1.*t173*t697;
  t987 = t934 + t943;
  t1077 = t173*t665;
  t1087 = t196*t400*t697;
  t1104 = t1077 + t1087;
  t1270 = Cos(var1[6]);
  t1300 = -1.*t1270;
  t1318 = 1. + t1300;
  t1381 = Sin(var1[6]);
  t780 = -1.*t665*t196;
  t823 = t173*t400*t697;
  t838 = t780 + t823;
  t685 = t173*t665*t400;
  t704 = t196*t697;
  t724 = t685 + t704;
  t1370 = 0.07996*t1318;
  t1412 = -0.135*t1381;
  t1415 = 0. + t1370 + t1412;
  t1426 = 0.135*t1318;
  t1444 = 0.07996*t1381;
  t1522 = 0. + t1426 + t1444;
  t134 = -1.*var1[0];
  t1573 = t371*t665*t1270;
  t1664 = -1.*t371*t697*t1381;
  t1670 = t1573 + t1664;
  t2445 = t1270*t724;
  t2471 = -1.*t838*t1381;
  t2473 = t2445 + t2471;
  t1885 = t1270*t987;
  t1908 = -1.*t1104*t1381;
  t1990 = t1885 + t1908;
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
  p_output1[19]=t134;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=1.;
  p_output1[24]=-1.*t173*var1[2];
  p_output1[25]=-1.*t196*var1[2];
  p_output1[26]=t173*var1[0] + t196*var1[1];
  p_output1[27]=-1.*t196;
  p_output1[28]=t173;
  p_output1[29]=0;
  p_output1[30]=t380 + t425;
  p_output1[31]=t579 + t595;
  p_output1[32]=t608 + t613;
  p_output1[33]=t634;
  p_output1[34]=t650;
  p_output1[35]=t659;
  p_output1[36]=t380 + t425 - 0.135*t724 + 0.07996*t838;
  p_output1[37]=0.07996*t1104 + t579 + t595 - 0.135*t987;
  p_output1[38]=t608 + t613 - 0.135*t371*t665 + 0.07996*t371*t697;
  p_output1[39]=0. + t634;
  p_output1[40]=0. + t650;
  p_output1[41]=0. + t659;
  p_output1[42]=0.135*t173*t371 + 0.08055*(t1381*t724 + t1270*t838) + t1670*(0. + t1104*t1522 + t1415*t987 + var1[1]) + t1990*(0. - 1.*t1415*t371*t665 - 1.*t1522*t371*t697 - 1.*var1[2]);
  p_output1[43]=0.135*t196*t371 + t1670*(0. + t134 - 1.*t1415*t724 - 1.*t1522*t838) + 0.08055*(t1104*t1270 + t1381*t987) + t2473*(0. + t1415*t371*t665 + t1522*t371*t697 + var1[2]);
  p_output1[44]=-0.135*t400 + 0.08055*(t1381*t371*t665 + t1270*t371*t697) + t1990*(0. + t1415*t724 + t1522*t838 + var1[0]) + t2473*(0. - 1.*t1104*t1522 - 1.*t1415*t987 - 1.*var1[1]);
  p_output1[45]=0. + t2445 + t2471;
  p_output1[46]=0. + t1885 + t1908;
  p_output1[47]=0. + t1573 + t1664;
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

#include "Js_LeftHip_mex.hh"

namespace SymExpression
{

void Js_LeftHip_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
