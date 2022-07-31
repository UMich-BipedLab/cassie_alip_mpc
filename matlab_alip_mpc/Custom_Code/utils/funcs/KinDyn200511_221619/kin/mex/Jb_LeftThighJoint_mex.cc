/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:19:01 GMT-04:00
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
  double t199;
  double t152;
  double t157;
  double t163;
  double t168;
  double t201;
  double t239;
  double t277;
  double t327;
  double t422;
  double t189;
  double t352;
  double t361;
  double t69;
  double t447;
  double t484;
  double t493;
  double t44;
  double t1244;
  double t1262;
  double t1308;
  double t618;
  double t631;
  double t684;
  double t1052;
  double t1301;
  double t1327;
  double t1342;
  double t1374;
  double t1408;
  double t1416;
  double t1563;
  double t1572;
  double t1616;
  double t1629;
  double t404;
  double t518;
  double t570;
  double t811;
  double t815;
  double t1033;
  double t1067;
  double t1068;
  double t1089;
  double t1112;
  double t1133;
  double t1360;
  double t1418;
  double t1434;
  double t1454;
  double t1456;
  double t1460;
  double t1465;
  double t1471;
  double t1481;
  double t1503;
  double t1521;
  double t1606;
  double t1644;
  double t1655;
  double t1662;
  double t1667;
  double t1676;
  double t1678;
  double t1680;
  double t1687;
  double t1694;
  double t2266;
  double t2220;
  double t2251;
  double t2293;
  double t2306;
  double t2311;
  double t2368;
  double t2413;
  double t2440;
  double t2442;
  double t2447;
  double t2462;
  double t2466;
  double t2468;
  double t2483;
  double t2490;
  double t2183;
  double t2210;
  double t2217;
  double t2256;
  double t2262;
  double t2320;
  double t2492;
  double t2508;
  double t2527;
  double t2570;
  double t2597;
  double t2599;
  double t2608;
  double t2692;
  double t2710;
  double t2788;
  double t2798;
  double t2810;
  double t2814;
  double t2160;
  double t2172;
  double t2176;
  double t2515;
  double t2626;
  double t2639;
  double t2796;
  double t2819;
  double t2822;
  double t2917;
  double t2938;
  double t2956;
  double t2134;
  double t2135;
  double t2148;
  double t2684;
  double t3059;
  double t3110;
  double t3211;
  double t3252;
  double t3293;
  double t3394;
  double t3424;
  double t3533;
  double t3586;
  double t3821;
  double t3913;
  t199 = Cos(var1[6]);
  t152 = Cos(var1[8]);
  t157 = -1.*t152;
  t163 = 0. + t157;
  t168 = Sin(var1[6]);
  t201 = Sin(var1[7]);
  t239 = Sin(var1[8]);
  t277 = t201*t239;
  t327 = 0. + t277;
  t422 = Sin(var1[5]);
  t189 = -1.*t163*t168;
  t352 = t199*t327;
  t361 = 0. + t189 + t352;
  t69 = Cos(var1[5]);
  t447 = t199*t163;
  t484 = t168*t327;
  t493 = 0. + t447 + t484;
  t44 = Sin(var1[3]);
  t1244 = t152*t201;
  t1262 = 0. + t1244;
  t1308 = 0. + t239;
  t618 = Cos(var1[3]);
  t631 = Cos(var1[4]);
  t684 = Cos(var1[7]);
  t1052 = Sin(var1[4]);
  t1301 = t168*t1262;
  t1327 = t199*t1308;
  t1342 = 0. + t1301 + t1327;
  t1374 = t199*t1262;
  t1408 = -1.*t168*t1308;
  t1416 = 0. + t1374 + t1408;
  t1563 = -1.*t199*t684;
  t1572 = 0. + t1563;
  t1616 = -1.*t684*t168;
  t1629 = 0. + t1616;
  t404 = t69*t361;
  t518 = -1.*t422*t493;
  t570 = 0. + t404 + t518;
  t811 = t684*t239;
  t815 = 0. + t811;
  t1033 = t631*t815;
  t1067 = t422*t361;
  t1068 = t69*t493;
  t1089 = 0. + t1067 + t1068;
  t1112 = t1052*t1089;
  t1133 = 0. + t1033 + t1112;
  t1360 = -1.*t422*t1342;
  t1418 = t69*t1416;
  t1434 = 0. + t1360 + t1418;
  t1454 = t684*t152;
  t1456 = 0. + t1454;
  t1460 = t631*t1456;
  t1465 = t69*t1342;
  t1471 = t422*t1416;
  t1481 = 0. + t1465 + t1471;
  t1503 = t1052*t1481;
  t1521 = 0. + t1460 + t1503;
  t1606 = t69*t1572;
  t1644 = -1.*t422*t1629;
  t1655 = 0. + t1606 + t1644;
  t1662 = t1572*t422;
  t1667 = t69*t1629;
  t1676 = 0. + t1662 + t1667;
  t1678 = t1052*t1676;
  t1680 = 0. + t201;
  t1687 = t631*t1680;
  t1694 = 0. + t1678 + t1687;
  t2266 = 1. + t157;
  t2220 = -1.*t199;
  t2251 = 1. + t2220;
  t2293 = -0.01004*t2266;
  t2306 = -0.01004*t152;
  t2311 = 0. + t2293 + t2306;
  t2368 = -1.*t684;
  t2413 = 1. + t2368;
  t2440 = 0.135*t2413;
  t2442 = 0.135*t684;
  t2447 = 0.08055*t201;
  t2462 = -0.08055*t2266;
  t2466 = -0.08055*t152;
  t2468 = 0. + t2462 + t2466;
  t2483 = t2468*t201;
  t2490 = 0. + t2440 + t2442 + t2447 + t2483;
  t2183 = t631*t1676;
  t2210 = -1.*t1052*t1680;
  t2217 = 0. + t2183 + t2210;
  t2256 = 0.135*t2251;
  t2262 = 0.07996*t168;
  t2320 = -1.*t2311*t168;
  t2492 = t199*t2490;
  t2508 = 0. + t2256 + t2262 + t2320 + t2492;
  t2527 = 0.07996*t2251;
  t2570 = t199*t2311;
  t2597 = -0.135*t168;
  t2599 = t168*t2490;
  t2608 = 0. + t2527 + t2570 + t2597 + t2599;
  t2692 = -0.08055*t2413;
  t2710 = t684*t2468;
  t2788 = 0. + t2692 + t2710;
  t2798 = t422*t2508;
  t2810 = t69*t2608;
  t2814 = 0. + t2798 + t2810;
  t2160 = -1.*t1456*t1052;
  t2172 = t631*t1481;
  t2176 = 0. + t2160 + t2172;
  t2515 = t69*t2508;
  t2626 = -1.*t422*t2608;
  t2639 = 0. + t2515 + t2626;
  t2796 = -1.*t2788*t1052;
  t2819 = t631*t2814;
  t2822 = 0. + t2796 + t2819;
  t2917 = t631*t2788;
  t2938 = t1052*t2814;
  t2956 = 0. + t2917 + t2938;
  t2134 = -1.*t1052*t815;
  t2135 = t631*t1089;
  t2148 = 0. + t2134 + t2135;
  t2684 = t1655*t2639;
  t3059 = -1.*t2639*t1434;
  t3110 = -1.*t1655*t2639;
  t3211 = t2639*t570;
  t3252 = t2639*t1434;
  t3293 = -1.*t2639*t570;
  t3394 = t2788*t1680;
  t3424 = -1.*t2788*t1456;
  t3533 = -1.*t2788*t1680;
  t3586 = t2788*t815;
  t3821 = t2788*t1456;
  t3913 = -1.*t2788*t815;
  p_output1[0]=0. - 1.*t44*t570 + t1133*t618;
  p_output1[1]=0. - 1.*t1434*t44 + t1521*t618;
  p_output1[2]=0. - 1.*t1655*t44 + t1694*t618;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0. + t1133*t44 + t570*t618;
  p_output1[7]=0. + t1521*t44 + t1434*t618;
  p_output1[8]=0. + t1694*t44 + t1655*t618;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2148;
  p_output1[13]=t2176;
  p_output1[14]=t2217;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=t2176*(t2684 + t2217*t2822 + t1694*t2956) + t2217*(-1.*t2176*t2822 - 1.*t1521*t2956 + t3059);
  p_output1[19]=t2148*(-1.*t2217*t2822 - 1.*t1694*t2956 + t3110) + t2217*(t2148*t2822 + t1133*t2956 + t3211);
  p_output1[20]=t2148*(t2176*t2822 + t1521*t2956 + t3252) + t2176*(-1.*t2148*t2822 - 1.*t1133*t2956 + t3293);
  p_output1[21]=t2148;
  p_output1[22]=t2176;
  p_output1[23]=t2217;
  p_output1[24]=t1434*(t2684 + t1676*t2814 + t3394) + t1655*(-1.*t1481*t2814 + t3059 + t3424);
  p_output1[25]=t1655*(t1089*t2814 + t3211 + t3586) + (-1.*t1676*t2814 + t3110 + t3533)*t570;
  p_output1[26]=t1434*(-1.*t1089*t2814 + t3293 + t3913) + (t1481*t2814 + t3252 + t3821)*t570;
  p_output1[27]=t570;
  p_output1[28]=t1434;
  p_output1[29]=t1655;
  p_output1[30]=t1456*(t1572*t2508 + t1629*t2608 + t3394) + t1680*(-1.*t1416*t2508 - 1.*t1342*t2608 + t3424);
  p_output1[31]=t1680*(t3586 + t2508*t361 + t2608*t493) + (-1.*t1572*t2508 - 1.*t1629*t2608 + t3533)*t815;
  p_output1[32]=t1456*(-1.*t2508*t361 + t3913 - 1.*t2608*t493) + (t1416*t2508 + t1342*t2608 + t3821)*t815;
  p_output1[33]=t815;
  p_output1[34]=t1456;
  p_output1[35]=t1680;
  p_output1[36]=-0.135*t163 + 0.07996*t327 + t201*(-1.*t1308*t2311 - 1.*t1262*t2490 + t3424) + t1456*(0. + t201*t2788 - 1.*t2490*t684);
  p_output1[37]=0.07996*t1262 - 0.135*t1308 + t201*(t163*t2311 + t2490*t327 + t3586) + (0. - 1.*t201*t2788 + t2490*t684)*t815;
  p_output1[38]=0. + t1456*(-1.*t163*t2311 - 1.*t2490*t327 + t3913) - 0.07996*t684 + (t1308*t2311 + t1262*t2490 + t3821)*t815;
  p_output1[39]=t815;
  p_output1[40]=t1456;
  p_output1[41]=t1680;
  p_output1[42]=0.;
  p_output1[43]=0.;
  p_output1[44]=-0.08055 - 1.*t152*(0. + t2311*t239 + t152*t2468) + t239*(0. + t152*t2311 - 1.*t239*t2468);
  p_output1[45]=t163;
  p_output1[46]=t1308;
  p_output1[47]=0.;
  p_output1[48]=0.;
  p_output1[49]=0.;
  p_output1[50]=0.;
  p_output1[51]=0.;
  p_output1[52]=0.;
  p_output1[53]=1.;
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

#include "Jb_LeftThighJoint_mex.hh"

namespace SymExpression
{

void Jb_LeftThighJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
