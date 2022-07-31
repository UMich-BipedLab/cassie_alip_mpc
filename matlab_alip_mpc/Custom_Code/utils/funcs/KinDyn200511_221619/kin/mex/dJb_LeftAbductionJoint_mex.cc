/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:26 GMT-04:00
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
  double t1743;
  double t182;
  double t881;
  double t2072;
  double t2076;
  double t2111;
  double t2112;
  double t1977;
  double t2159;
  double t2162;
  double t2164;
  double t2172;
  double t2195;
  double t2206;
  double t2208;
  double t2209;
  double t2222;
  double t2089;
  double t2133;
  double t2144;
  double t2240;
  double t2322;
  double t2324;
  double t2328;
  double t2337;
  double t2338;
  double t2344;
  double t268;
  double t2393;
  double t2396;
  double t2399;
  double t2269;
  double t2271;
  double t2429;
  double t2430;
  double t2431;
  double t2359;
  double t2365;
  double t2367;
  double t2498;
  double t2499;
  double t2502;
  double t2504;
  double t2505;
  double t2511;
  double t2519;
  double t2530;
  double t2533;
  double t2534;
  double t2538;
  double t2496;
  double t2544;
  double t2547;
  double t2573;
  double t2575;
  double t2552;
  double t2554;
  double t2563;
  double t2570;
  double t2571;
  double t2572;
  double t2488;
  double t2495;
  double t2578;
  double t2601;
  double t2609;
  double t2612;
  double t2617;
  double t2619;
  double t2622;
  double t2624;
  double t2645;
  double t2647;
  double t2649;
  double t2650;
  double t2660;
  double t2671;
  double t2672;
  double t2717;
  double t2698;
  double t2679;
  double t2683;
  double t2712;
  double t2713;
  double t2715;
  double t2685;
  double t2703;
  double t2749;
  double t2753;
  double t2754;
  double t2755;
  double t2757;
  double t2759;
  double t2761;
  double t2762;
  double t2764;
  double t2847;
  double t2848;
  double t2851;
  double t2854;
  double t2855;
  double t2857;
  double t2860;
  double t2457;
  double t2458;
  double t2467;
  double t2470;
  double t2473;
  double t2477;
  double t2478;
  double t2483;
  double t2485;
  double t2973;
  double t2976;
  double t2981;
  double t2967;
  double t2716;
  double t2982;
  double t2985;
  double t2988;
  double t2990;
  double t2726;
  t1743 = Cos(var1[3]);
  t182 = Cos(var1[4]);
  t881 = Sin(var1[3]);
  t2072 = Cos(var1[6]);
  t2076 = Sin(var1[5]);
  t2111 = Cos(var1[5]);
  t2112 = Sin(var1[6]);
  t1977 = Sin(var1[4]);
  t2159 = -1.*t2072*t2076;
  t2162 = -1.*t2111*t2112;
  t2164 = t2159 + t2162;
  t2172 = -1.*t881*t2164;
  t2195 = t2111*t2072;
  t2206 = -1.*t2076*t2112;
  t2208 = t2195 + t2206;
  t2209 = t1743*t1977*t2208;
  t2222 = t2172 + t2209;
  t2089 = t2072*t2076;
  t2133 = t2111*t2112;
  t2144 = 0. + t2089 + t2133;
  t2240 = 0. + t2195 + t2206;
  t2322 = t1743*t1977*t2164;
  t2324 = -1.*t2111*t2072;
  t2328 = t2076*t2112;
  t2337 = t2324 + t2328;
  t2338 = -1.*t881*t2337;
  t2344 = t2322 + t2338;
  t268 = 0. + t182;
  t2393 = t1743*t2164;
  t2396 = t881*t1977*t2208;
  t2399 = t2393 + t2396;
  t2269 = t1977*t2144;
  t2271 = 0. + t2269;
  t2429 = t881*t1977*t2164;
  t2430 = t1743*t2337;
  t2431 = t2429 + t2430;
  t2359 = 0. + t2159 + t2162;
  t2365 = t1977*t2240;
  t2367 = 0. + t2365;
  t2498 = -1.*t2072;
  t2499 = 1. + t2498;
  t2502 = 0.07996*t2499;
  t2504 = 0.07996*t2072;
  t2505 = 0. + t2502 + t2504;
  t2511 = t2111*t2505;
  t2519 = 0.135*t2499;
  t2530 = 0.135*t2072;
  t2533 = 0. + t2519 + t2530;
  t2534 = t2533*t2076;
  t2538 = 0. + t2511 + t2534;
  t2496 = 0.08055*t1977;
  t2544 = t182*t2538;
  t2547 = 0. + t2496 + t2544;
  t2573 = t182*t2144;
  t2575 = 0. + t2573;
  t2552 = -0.08055*t182;
  t2554 = t1977*t2538;
  t2563 = 0. + t2552 + t2554;
  t2570 = 0.08055*t182;
  t2571 = -1.*t1977*t2538;
  t2572 = t2570 + t2571;
  t2488 = t182*t2240;
  t2495 = 0. + t2488;
  t2578 = t2496 + t2544;
  t2601 = t2111*t2533;
  t2609 = -1.*t2505*t2076;
  t2612 = 0. + t2601 + t2609;
  t2617 = -1.*t2612*t2240;
  t2619 = -1.*t2547*t2575;
  t2622 = -1.*t2563*t2271;
  t2624 = t2617 + t2619 + t2622;
  t2645 = t2612*t2359;
  t2647 = t2547*t2495;
  t2649 = t2563*t2367;
  t2650 = t2645 + t2647 + t2649;
  t2660 = -1.*t2612*t2164;
  t2671 = -1.*t182*t2547*t2208;
  t2672 = -1.*t1977*t2563*t2208;
  t2717 = t2601 + t2609;
  t2698 = t182*t2164*t2624;
  t2679 = t182*t2547*t2164;
  t2683 = t1977*t2563*t2164;
  t2712 = -1.*t2111*t2505;
  t2713 = -1.*t2533*t2076;
  t2715 = t2712 + t2713;
  t2685 = t2612*t2337;
  t2703 = t182*t2208*t2650;
  t2749 = -1.*t1977;
  t2753 = 0. + t2749;
  t2754 = t2753*t2547;
  t2755 = t268*t2563;
  t2757 = 0. + t2754 + t2755;
  t2759 = t182*t2757*t2164;
  t2761 = -1.*t182*t2547*t2164;
  t2762 = -1.*t1977*t2563*t2164;
  t2764 = -1.*t2612*t2337;
  t2847 = -1.*t2753*t2547;
  t2848 = -1.*t268*t2563;
  t2851 = 0. + t2847 + t2848;
  t2854 = t182*t2851*t2208;
  t2855 = t2612*t2164;
  t2857 = t182*t2547*t2208;
  t2860 = t1977*t2563*t2208;
  t2457 = -1.*var2[4]*t182;
  t2458 = -1.*var2[4]*t1977*t2144;
  t2467 = var2[5]*t182*t2208;
  t2470 = var2[6]*t182*t2208;
  t2473 = t2458 + t2467 + t2470;
  t2477 = var2[5]*t182*t2164;
  t2478 = var2[6]*t182*t2164;
  t2483 = -1.*var2[4]*t1977*t2240;
  t2485 = t2477 + t2478 + t2483;
  t2973 = -1.*t2538*t2144;
  t2976 = 0. + t2973 + t2617;
  t2981 = t2337*t2976;
  t2967 = -1.*t2538*t2208;
  t2716 = -1.*t2715*t2240;
  t2982 = t2538*t2240;
  t2985 = 0. + t2645 + t2982;
  t2988 = t2164*t2985;
  t2990 = t2538*t2164;
  t2726 = t2715*t2359;
  p_output1[0]=-1.*t268*t881*var2[3] - 1.*t1743*t1977*var2[4];
  p_output1[1]=(-1.*t1743*t2240 - 1.*t2271*t881)*var2[3] + t1743*t182*t2144*var2[4] + t2222*var2[5] + t2222*var2[6];
  p_output1[2]=(-1.*t1743*t2359 - 1.*t2367*t881)*var2[3] + t1743*t182*t2240*var2[4] + t2344*var2[5] + t2344*var2[6];
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=t1743*t268*var2[3] - 1.*t1977*t881*var2[4];
  p_output1[7]=(t1743*t2271 - 1.*t2240*t881)*var2[3] + t182*t2144*t881*var2[4] + t2399*var2[5] + t2399*var2[6];
  p_output1[8]=(t1743*t2367 - 1.*t2359*t881)*var2[3] + t182*t2240*t881*var2[4] + t2431*var2[5] + t2431*var2[6];
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=t2457;
  p_output1[13]=t2473;
  p_output1[14]=t2485;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=(t2495*(t1977*t2144*t2547 - 1.*t182*t2144*t2563 - 1.*t2572*t2575 - 1.*t2271*t2578) + t2575*(-1.*t1977*t2240*t2547 + t182*t2240*t2563 + t2495*t2572 + t2367*t2578) - 1.*t1977*t2240*t2624 - 1.*t1977*t2144*t2650)*var2[4] + (t2698 + t2703 + t2495*(t2660 + t2671 + t2672 + t2716 - 1.*t1977*t2271*t2717 - 1.*t182*t2575*t2717) + t2575*(t2679 + t2683 + t2685 + t1977*t2367*t2717 + t182*t2495*t2717 + t2726))*var2[5] + (t2495*(0. + t2660 + t2671 + t2672) + t2575*(0. + t2679 + t2683 + t2685) + t2698 + t2703)*var2[6];
  p_output1[19]=(-1.*t182*(-1.*t2495*t2547 - 1.*t2367*t2563 - 1.*t2359*t2612) + (t1977*t2240*t2547 - 1.*t182*t2240*t2563 - 1.*t2495*t2572 - 1.*t2367*t2578)*t2753 + t2495*(-1.*t182*t2547 - 1.*t1977*t2563 + t2578*t268 + t2572*t2753) - 1.*t1977*t2240*t2757)*var2[4] + (t2495*(t1977*t268*t2717 + t182*t2717*t2753) + t2759 + t2753*(-1.*t2359*t2715 - 1.*t1977*t2367*t2717 - 1.*t182*t2495*t2717 + t2761 + t2762 + t2764))*var2[5] + (0. + t2759 + t2753*(0. + t2761 + t2762 + t2764))*var2[6];
  p_output1[20]=(-1.*t182*(t2271*t2563 + t2547*t2575 + t2240*t2612) + (-1.*t1977*t2144*t2547 + t182*t2144*t2563 + t2572*t2575 + t2271*t2578)*t2753 + t2575*(t182*t2547 + t1977*t2563 - 1.*t2578*t268 - 1.*t2572*t2753) - 1.*t1977*t2144*t2851)*var2[4] + (t2575*(-1.*t1977*t268*t2717 - 1.*t182*t2717*t2753) + t2854 + t2753*(t2240*t2715 + t1977*t2271*t2717 + t182*t2575*t2717 + t2855 + t2857 + t2860))*var2[5] + (0. + t2854 + t2753*(0. + t2855 + t2857 + t2860))*var2[6];
  p_output1[21]=t2457;
  p_output1[22]=t2473;
  p_output1[23]=t2485;
  p_output1[24]=(t2359*(t2660 + t2716 - 1.*t2144*t2717 + t2967) + t2981 + t2988 + t2240*(t2685 + t2240*t2717 + t2726 + t2990))*var2[5] + (t2359*(0. + t2660 + t2967) + t2981 + t2988 + t2240*(0. + t2685 + t2990))*var2[6];
  p_output1[25]=-0.08055*t2337*var2[5] - 0.08055*t2337*var2[6];
  p_output1[26]=0.08055*t2164*var2[5] + 0.08055*t2164*var2[6];
  p_output1[27]=0;
  p_output1[28]=t2164*var2[5] + t2164*var2[6];
  p_output1[29]=t2337*var2[5] + t2337*var2[6];
  p_output1[30]=0;
  p_output1[31]=(0. + t2112*t2505 + t2072*t2533)*var2[6];
  p_output1[32]=(0. + t2072*t2505 - 1.*t2112*t2533)*var2[6];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 6, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "dJb_LeftAbductionJoint_mex.hh"

namespace SymExpression
{

void dJb_LeftAbductionJoint_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
