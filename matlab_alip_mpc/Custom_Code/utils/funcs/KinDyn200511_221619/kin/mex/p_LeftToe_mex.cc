/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:26:44 GMT-04:00
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
  double t367;
  double t671;
  double t83;
  double t480;
  double t801;
  double t1101;
  double t1162;
  double t1209;
  double t1299;
  double t1452;
  double t1496;
  double t1518;
  double t649;
  double t880;
  double t984;
  double t1827;
  double t1867;
  double t1899;
  double t1945;
  double t1711;
  double t1757;
  double t1810;
  double t2027;
  double t2536;
  double t2548;
  double t2559;
  double t2568;
  double t2405;
  double t2477;
  double t2532;
  double t2704;
  double t2766;
  double t2769;
  double t2943;
  double t3039;
  double t3071;
  double t3098;
  double t3187;
  double t3245;
  double t3248;
  double t3312;
  double t3322;
  double t3392;
  double t3449;
  double t3490;
  double t3556;
  double t3586;
  double t3607;
  double t3619;
  double t3779;
  double t3957;
  double t4006;
  double t4016;
  double t4123;
  double t4171;
  double t4178;
  double t4234;
  double t4356;
  double t4409;
  double t4421;
  double t4592;
  double t4715;
  double t4725;
  double t4768;
  double t4770;
  double t4813;
  double t4894;
  double t4930;
  double t4986;
  double t4991;
  double t5171;
  double t5293;
  double t5334;
  double t1274;
  double t1357;
  double t1375;
  double t1549;
  double t1581;
  double t1618;
  double t5852;
  double t5862;
  double t5917;
  double t5711;
  double t5728;
  double t5802;
  double t1916;
  double t1948;
  double t2014;
  double t2083;
  double t2170;
  double t2173;
  double t5953;
  double t5976;
  double t5995;
  double t2562;
  double t2572;
  double t2616;
  double t2773;
  double t2779;
  double t2800;
  double t3087;
  double t3161;
  double t3163;
  double t6189;
  double t6193;
  double t6251;
  double t6298;
  double t6334;
  double t6339;
  double t3271;
  double t3293;
  double t3311;
  double t3585;
  double t3589;
  double t3599;
  double t6464;
  double t6473;
  double t6480;
  double t6614;
  double t6631;
  double t6644;
  double t3925;
  double t3931;
  double t3956;
  double t4182;
  double t4299;
  double t4319;
  double t6650;
  double t6651;
  double t6672;
  double t6756;
  double t6761;
  double t6773;
  double t4453;
  double t4544;
  double t4547;
  double t4871;
  double t4900;
  double t4904;
  double t6861;
  double t6864;
  double t6875;
  double t6930;
  double t6957;
  double t6970;
  double t5100;
  double t5133;
  double t5142;
  double t7053;
  double t7057;
  double t7062;
  double t7093;
  double t7136;
  double t7139;
  double t7324;
  double t7332;
  double t7344;
  double t7437;
  double t7438;
  double t7443;
  double t7453;
  double t7471;
  double t7473;
  double t7506;
  double t7523;
  double t7524;
  double t7588;
  double t7604;
  double t7627;
  double t7640;
  double t7658;
  double t7665;
  double t7685;
  double t7691;
  double t7703;
  double t7753;
  double t7762;
  double t7794;
  double t7861;
  double t7863;
  double t7890;
  double t7933;
  double t7939;
  double t7989;
  double t8023;
  double t8036;
  double t8053;
  t367 = Cos(var1[5]);
  t671 = Sin(var1[3]);
  t83 = Cos(var1[3]);
  t480 = Sin(var1[4]);
  t801 = Sin(var1[5]);
  t1101 = Cos(var1[6]);
  t1162 = -1.*t1101;
  t1209 = 1. + t1162;
  t1299 = Sin(var1[6]);
  t1452 = -1.*t367*t671;
  t1496 = t83*t480*t801;
  t1518 = t1452 + t1496;
  t649 = t83*t367*t480;
  t880 = t671*t801;
  t984 = t649 + t880;
  t1827 = Cos(var1[7]);
  t1867 = -1.*t1827;
  t1899 = 1. + t1867;
  t1945 = Sin(var1[7]);
  t1711 = t1101*t1518;
  t1757 = t984*t1299;
  t1810 = t1711 + t1757;
  t2027 = Cos(var1[4]);
  t2536 = Cos(var1[8]);
  t2548 = -1.*t2536;
  t2559 = 1. + t2548;
  t2568 = Sin(var1[8]);
  t2405 = t83*t2027*t1827;
  t2477 = t1810*t1945;
  t2532 = t2405 + t2477;
  t2704 = t1101*t984;
  t2766 = -1.*t1518*t1299;
  t2769 = t2704 + t2766;
  t2943 = Cos(var1[9]);
  t3039 = -1.*t2943;
  t3071 = 1. + t3039;
  t3098 = Sin(var1[9]);
  t3187 = t2536*t2532;
  t3245 = t2769*t2568;
  t3248 = t3187 + t3245;
  t3312 = t2536*t2769;
  t3322 = -1.*t2532*t2568;
  t3392 = t3312 + t3322;
  t3449 = Cos(var1[10]);
  t3490 = -1.*t3449;
  t3556 = 1. + t3490;
  t3586 = Sin(var1[10]);
  t3607 = -1.*t3098*t3248;
  t3619 = t2943*t3392;
  t3779 = t3607 + t3619;
  t3957 = t2943*t3248;
  t4006 = t3098*t3392;
  t4016 = t3957 + t4006;
  t4123 = Cos(var1[11]);
  t4171 = -1.*t4123;
  t4178 = 1. + t4171;
  t4234 = Sin(var1[11]);
  t4356 = t3586*t3779;
  t4409 = t3449*t4016;
  t4421 = t4356 + t4409;
  t4592 = t3449*t3779;
  t4715 = -1.*t3586*t4016;
  t4725 = t4592 + t4715;
  t4768 = Cos(var1[12]);
  t4770 = -1.*t4768;
  t4813 = 1. + t4770;
  t4894 = Sin(var1[12]);
  t4930 = -1.*t4234*t4421;
  t4986 = t4123*t4725;
  t4991 = t4930 + t4986;
  t5171 = t4123*t4421;
  t5293 = t4234*t4725;
  t5334 = t5171 + t5293;
  t1274 = 0.07996*t1209;
  t1357 = -0.135*t1299;
  t1375 = 0. + t1274 + t1357;
  t1549 = 0.135*t1209;
  t1581 = 0.07996*t1299;
  t1618 = 0. + t1549 + t1581;
  t5852 = t83*t367;
  t5862 = t671*t480*t801;
  t5917 = t5852 + t5862;
  t5711 = t367*t671*t480;
  t5728 = -1.*t83*t801;
  t5802 = t5711 + t5728;
  t1916 = 0.135*t1899;
  t1948 = 0.08055*t1945;
  t2014 = 0. + t1916 + t1948;
  t2083 = -0.08055*t1899;
  t2170 = 0.135*t1945;
  t2173 = 0. + t2083 + t2170;
  t5953 = t1101*t5917;
  t5976 = t5802*t1299;
  t5995 = t5953 + t5976;
  t2562 = -0.08055*t2559;
  t2572 = -0.01004*t2568;
  t2616 = 0. + t2562 + t2572;
  t2773 = -0.01004*t2559;
  t2779 = 0.08055*t2568;
  t2800 = 0. + t2773 + t2779;
  t3087 = -0.08055*t3071;
  t3161 = -0.13004*t3098;
  t3163 = 0. + t3087 + t3161;
  t6189 = t2027*t1827*t671;
  t6193 = t5995*t1945;
  t6251 = t6189 + t6193;
  t6298 = t1101*t5802;
  t6334 = -1.*t5917*t1299;
  t6339 = t6298 + t6334;
  t3271 = -0.13004*t3071;
  t3293 = 0.08055*t3098;
  t3311 = 0. + t3271 + t3293;
  t3585 = -0.19074*t3556;
  t3589 = 0.03315*t3586;
  t3599 = 0. + t3585 + t3589;
  t6464 = t2536*t6251;
  t6473 = t6339*t2568;
  t6480 = t6464 + t6473;
  t6614 = t2536*t6339;
  t6631 = -1.*t6251*t2568;
  t6644 = t6614 + t6631;
  t3925 = -0.03315*t3556;
  t3931 = -0.19074*t3586;
  t3956 = 0. + t3925 + t3931;
  t4182 = -0.01315*t4178;
  t4299 = -0.62554*t4234;
  t4319 = 0. + t4182 + t4299;
  t6650 = -1.*t3098*t6480;
  t6651 = t2943*t6644;
  t6672 = t6650 + t6651;
  t6756 = t2943*t6480;
  t6761 = t3098*t6644;
  t6773 = t6756 + t6761;
  t4453 = -0.62554*t4178;
  t4544 = 0.01315*t4234;
  t4547 = 0. + t4453 + t4544;
  t4871 = -1.03354*t4813;
  t4900 = 0.05315*t4894;
  t4904 = 0. + t4871 + t4900;
  t6861 = t3586*t6672;
  t6864 = t3449*t6773;
  t6875 = t6861 + t6864;
  t6930 = t3449*t6672;
  t6957 = -1.*t3586*t6773;
  t6970 = t6930 + t6957;
  t5100 = -0.05315*t4813;
  t5133 = -1.03354*t4894;
  t5142 = 0. + t5100 + t5133;
  t7053 = -1.*t4234*t6875;
  t7057 = t4123*t6970;
  t7062 = t7053 + t7057;
  t7093 = t4123*t6875;
  t7136 = t4234*t6970;
  t7139 = t7093 + t7136;
  t7324 = t2027*t1101*t801;
  t7332 = t2027*t367*t1299;
  t7344 = t7324 + t7332;
  t7437 = -1.*t1827*t480;
  t7438 = t7344*t1945;
  t7443 = t7437 + t7438;
  t7453 = t2027*t367*t1101;
  t7471 = -1.*t2027*t801*t1299;
  t7473 = t7453 + t7471;
  t7506 = t2536*t7443;
  t7523 = t7473*t2568;
  t7524 = t7506 + t7523;
  t7588 = t2536*t7473;
  t7604 = -1.*t7443*t2568;
  t7627 = t7588 + t7604;
  t7640 = -1.*t3098*t7524;
  t7658 = t2943*t7627;
  t7665 = t7640 + t7658;
  t7685 = t2943*t7524;
  t7691 = t3098*t7627;
  t7703 = t7685 + t7691;
  t7753 = t3586*t7665;
  t7762 = t3449*t7703;
  t7794 = t7753 + t7762;
  t7861 = t3449*t7665;
  t7863 = -1.*t3586*t7703;
  t7890 = t7861 + t7863;
  t7933 = -1.*t4234*t7794;
  t7939 = t4123*t7890;
  t7989 = t7933 + t7939;
  t8023 = t4123*t7794;
  t8036 = t4234*t7890;
  t8053 = t8023 + t8036;
  p_output1[0]=0. + t1518*t1618 + t1810*t2014 + t2532*t2616 + t2769*t2800 + t3163*t3248 + t3311*t3392 + t3599*t3779 + t3956*t4016 + t4319*t4421 + t4547*t4725 + t4904*t4991 + t5142*t5334 - 0.02565*(t4894*t4991 + t4768*t5334) - 1.03824*(t4768*t4991 - 1.*t4894*t5334) + t2027*t2173*t83 + 0.1306*(t1810*t1827 - 1.*t1945*t2027*t83) + t1375*t984 + var1[0];
  p_output1[1]=0. + t1375*t5802 + t1618*t5917 + t2014*t5995 + t2616*t6251 + t2800*t6339 + t3163*t6480 + t3311*t6644 + t3599*t6672 + t2027*t2173*t671 + 0.1306*(t1827*t5995 - 1.*t1945*t2027*t671) + t3956*t6773 + t4319*t6875 + t4547*t6970 + t4904*t7062 + t5142*t7139 - 0.02565*(t4894*t7062 + t4768*t7139) - 1.03824*(t4768*t7062 - 1.*t4894*t7139) + var1[1];
  p_output1[2]=0. + t1375*t2027*t367 - 1.*t2173*t480 + t2014*t7344 + 0.1306*(t1945*t480 + t1827*t7344) + t2616*t7443 + t2800*t7473 + t3163*t7524 + t3311*t7627 + t3599*t7665 + t3956*t7703 + t4319*t7794 + t4547*t7890 + t4904*t7989 + t1618*t2027*t801 + t5142*t8053 - 0.02565*(t4894*t7989 + t4768*t8053) - 1.03824*(t4768*t7989 - 1.*t4894*t8053) + var1[2];
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "p_LeftToe_mex.hh"

namespace SymExpression
{

void p_LeftToe_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
