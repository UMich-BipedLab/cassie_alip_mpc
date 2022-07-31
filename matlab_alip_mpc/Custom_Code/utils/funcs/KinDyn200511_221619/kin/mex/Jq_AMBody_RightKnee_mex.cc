/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:12 GMT-04:00
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
  double t1010;
  double t1040;
  double t1053;
  double t135;
  double t779;
  double t836;
  double t2007;
  double t3368;
  double t3071;
  double t3199;
  double t3555;
  double t1210;
  double t561;
  double t3246;
  double t3748;
  double t3960;
  double t4620;
  double t4647;
  double t4866;
  double t4872;
  double t4993;
  double t2420;
  double t6141;
  double t6142;
  double t6148;
  double t6213;
  double t6252;
  double t610;
  double t714;
  double t1218;
  double t1397;
  double t1606;
  double t2259;
  double t2271;
  double t2459;
  double t2465;
  double t2485;
  double t2721;
  double t4374;
  double t4558;
  double t4559;
  double t4867;
  double t5152;
  double t5158;
  double t5235;
  double t5360;
  double t5614;
  double t5627;
  double t5669;
  double t5973;
  double t6028;
  double t6103;
  double t6169;
  double t6186;
  double t6195;
  double t6197;
  double t6262;
  double t6275;
  double t6276;
  double t6312;
  double t6320;
  double t6323;
  double t6326;
  double t6327;
  double t6351;
  double t6371;
  double t6471;
  double t6474;
  double t6482;
  double t6489;
  double t6490;
  double t6492;
  double t6501;
  double t6504;
  double t6509;
  double t6513;
  double t6514;
  double t6518;
  double t6520;
  double t6522;
  double t6526;
  double t6530;
  double t6531;
  double t6536;
  double t6540;
  double t6548;
  double t6549;
  double t6550;
  double t6554;
  double t6558;
  double t6560;
  double t6563;
  double t6564;
  double t6625;
  double t6610;
  double t6615;
  double t6618;
  double t6670;
  double t6664;
  double t6665;
  double t6667;
  double t6584;
  double t6587;
  double t6590;
  double t6591;
  double t6593;
  double t6599;
  double t6600;
  double t6605;
  double t6606;
  double t6621;
  double t6626;
  double t6630;
  double t6633;
  double t6634;
  double t6635;
  double t6644;
  double t6648;
  double t6653;
  double t6669;
  double t6677;
  double t6680;
  double t6682;
  double t6698;
  double t6699;
  double t6704;
  double t6705;
  double t6706;
  double t6737;
  double t6741;
  double t6742;
  double t6747;
  double t6753;
  double t6756;
  double t6757;
  double t6758;
  double t6759;
  double t6760;
  double t6762;
  double t6765;
  double t6767;
  double t6772;
  double t6776;
  double t6777;
  double t6781;
  double t6784;
  double t6786;
  double t6787;
  double t6791;
  double t6796;
  double t6799;
  double t6803;
  double t6805;
  double t6810;
  double t6811;
  double t6813;
  double t6817;
  double t6818;
  double t6821;
  double t6822;
  double t6826;
  double t6827;
  double t6828;
  double t6830;
  double t6831;
  double t6832;
  double t6834;
  double t6835;
  double t6837;
  double t6839;
  double t6858;
  double t6861;
  double t6862;
  double t6868;
  double t6879;
  double t6880;
  double t6882;
  double t6874;
  double t6876;
  double t6877;
  double t6913;
  double t6938;
  double t6941;
  double t6942;
  double t6928;
  double t6929;
  double t6930;
  double t6864;
  double t6866;
  double t6871;
  double t6878;
  double t6886;
  double t6887;
  double t6888;
  double t6891;
  double t6893;
  double t6897;
  double t6898;
  double t6900;
  double t6903;
  double t6905;
  double t6909;
  double t6914;
  double t6919;
  double t6923;
  double t6937;
  double t6944;
  double t6945;
  double t6947;
  double t6949;
  double t6950;
  double t6951;
  double t6952;
  double t6954;
  double t6955;
  double t6957;
  double t6959;
  double t6910;
  double t6960;
  double t6962;
  double t6965;
  double t6970;
  double t6971;
  double t6972;
  double t6975;
  double t6978;
  t1010 = Cos(var1[14]);
  t1040 = -1.*t1010;
  t1053 = 0. + t1040;
  t135 = Cos(var1[4]);
  t779 = Sin(var1[4]);
  t836 = Cos(var1[5]);
  t2007 = Cos(var1[13]);
  t3368 = Cos(var1[15]);
  t3071 = Cos(var1[16]);
  t3199 = Sin(var1[15]);
  t3555 = Sin(var1[16]);
  t1210 = Sin(var1[13]);
  t561 = Sin(var1[14]);
  t3246 = t3071*t3199;
  t3748 = t3368*t3555;
  t3960 = 0. + t3246 + t3748;
  t4620 = -1.*t3368*t3071;
  t4647 = t3199*t3555;
  t4866 = 0. + t4620 + t4647;
  t4872 = t561*t3960;
  t4993 = 0. + t4872;
  t2420 = Sin(var1[5]);
  t6141 = t3368*t3071;
  t6142 = -1.*t3199*t3555;
  t6148 = 0. + t6141 + t6142;
  t6213 = t561*t6148;
  t6252 = 0. + t6213;
  t610 = 0. + t561;
  t714 = -1.*t135*t610;
  t1218 = t1053*t1210;
  t1397 = 0. + t1218;
  t1606 = t836*t1397;
  t2259 = t2007*t1053;
  t2271 = 0. + t2259;
  t2459 = t2271*t2420;
  t2465 = 0. + t1606 + t2459;
  t2485 = -1.*t779*t2465;
  t2721 = t714 + t2485;
  t4374 = t1010*t3960;
  t4558 = 0. + t4374;
  t4559 = -1.*t135*t4558;
  t4867 = t2007*t4866;
  t5152 = t1210*t4993;
  t5158 = 0. + t4867 + t5152;
  t5235 = t836*t5158;
  t5360 = -1.*t1210*t4866;
  t5614 = t2007*t4993;
  t5627 = 0. + t5360 + t5614;
  t5669 = t5627*t2420;
  t5973 = 0. + t5235 + t5669;
  t6028 = -1.*t779*t5973;
  t6103 = t4559 + t6028;
  t6169 = t1010*t6148;
  t6186 = 0. + t6169;
  t6195 = -1.*t135*t6186;
  t6197 = t2007*t3960;
  t6262 = t1210*t6252;
  t6275 = 0. + t6197 + t6262;
  t6276 = t836*t6275;
  t6312 = -1.*t1210*t3960;
  t6320 = t2007*t6252;
  t6323 = 0. + t6312 + t6320;
  t6326 = t6323*t2420;
  t6327 = 0. + t6276 + t6326;
  t6351 = -1.*t779*t6327;
  t6371 = t6195 + t6351;
  t6471 = -1.*t836*t1397;
  t6474 = -1.*t2271*t2420;
  t6482 = t6471 + t6474;
  t6489 = var2[4]*t6482;
  t6490 = t2271*t836;
  t6492 = -1.*t1397*t2420;
  t6501 = t6490 + t6492;
  t6504 = var2[3]*t135*t6501;
  t6509 = t6489 + t6504;
  t6513 = -1.*t836*t5158;
  t6514 = -1.*t5627*t2420;
  t6518 = t6513 + t6514;
  t6520 = var2[4]*t6518;
  t6522 = t836*t5627;
  t6526 = -1.*t5158*t2420;
  t6530 = t6522 + t6526;
  t6531 = var2[3]*t135*t6530;
  t6536 = t6520 + t6531;
  t6540 = -1.*t836*t6275;
  t6548 = -1.*t6323*t2420;
  t6549 = t6540 + t6548;
  t6550 = var2[4]*t6549;
  t6554 = t836*t6323;
  t6558 = -1.*t6275*t2420;
  t6560 = t6554 + t6558;
  t6563 = var2[3]*t135*t6560;
  t6564 = t6550 + t6563;
  t6625 = t5360 + t5614;
  t6610 = -1.*t2007*t4866;
  t6615 = -1.*t1210*t4993;
  t6618 = t6610 + t6615;
  t6670 = t6312 + t6320;
  t6664 = -1.*t2007*t3960;
  t6665 = -1.*t1210*t6252;
  t6667 = t6664 + t6665;
  t6584 = -1.*t1053*t836*t1210;
  t6587 = -1.*t2007*t1053*t2420;
  t6590 = t6584 + t6587;
  t6591 = var2[4]*t6590;
  t6593 = t2007*t1053*t836;
  t6599 = -1.*t1053*t1210*t2420;
  t6600 = t6593 + t6599;
  t6605 = var2[3]*t135*t6600;
  t6606 = t6591 + t6605;
  t6621 = t836*t6618;
  t6626 = -1.*t6625*t2420;
  t6630 = t6621 + t6626;
  t6633 = var2[4]*t6630;
  t6634 = t836*t6625;
  t6635 = t6618*t2420;
  t6644 = t6634 + t6635;
  t6648 = var2[3]*t135*t6644;
  t6653 = t6633 + t6648;
  t6669 = t836*t6667;
  t6677 = -1.*t6670*t2420;
  t6680 = t6669 + t6677;
  t6682 = var2[4]*t6680;
  t6698 = t836*t6670;
  t6699 = t6667*t2420;
  t6704 = t6698 + t6699;
  t6705 = var2[3]*t135*t6704;
  t6706 = t6682 + t6705;
  t6737 = var2[13]*t1010;
  t6741 = var2[5]*t1010;
  t6742 = t2007*t836*t561;
  t6747 = -1.*t1210*t561*t2420;
  t6753 = t6742 + t6747;
  t6756 = var2[4]*t6753;
  t6757 = -1.*t1010*t779;
  t6758 = t836*t1210*t561;
  t6759 = t2007*t561*t2420;
  t6760 = t6758 + t6759;
  t6762 = t135*t6760;
  t6765 = t6757 + t6762;
  t6767 = var2[3]*t6765;
  t6772 = t6737 + t6741 + t6756 + t6767;
  t6776 = -1.*var2[13]*t561*t3960;
  t6777 = -1.*var2[5]*t561*t3960;
  t6781 = t2007*t1010*t836*t3960;
  t6784 = -1.*t1010*t1210*t3960*t2420;
  t6786 = t6781 + t6784;
  t6787 = var2[4]*t6786;
  t6791 = t561*t3960*t779;
  t6796 = t1010*t836*t1210*t3960;
  t6799 = t2007*t1010*t3960*t2420;
  t6803 = t6796 + t6799;
  t6805 = t135*t6803;
  t6810 = t6791 + t6805;
  t6811 = var2[3]*t6810;
  t6813 = t6776 + t6777 + t6787 + t6811;
  t6817 = -1.*var2[13]*t561*t6148;
  t6818 = -1.*var2[5]*t561*t6148;
  t6821 = t2007*t1010*t836*t6148;
  t6822 = -1.*t1010*t1210*t6148*t2420;
  t6826 = t6821 + t6822;
  t6827 = var2[4]*t6826;
  t6828 = t561*t6148*t779;
  t6830 = t1010*t836*t1210*t6148;
  t6831 = t2007*t1010*t6148*t2420;
  t6832 = t6830 + t6831;
  t6834 = t135*t6832;
  t6835 = t6828 + t6834;
  t6837 = var2[3]*t6835;
  t6839 = t6817 + t6818 + t6827 + t6837;
  t6858 = -1.*t3071*t3199;
  t6861 = -1.*t3368*t3555;
  t6862 = t6858 + t6861;
  t6868 = t6141 + t6142;
  t6879 = t1210*t561*t6862;
  t6880 = t2007*t6868;
  t6882 = t6879 + t6880;
  t6874 = t2007*t561*t6862;
  t6876 = -1.*t1210*t6868;
  t6877 = t6874 + t6876;
  t6913 = t3246 + t3748;
  t6938 = t2007*t6913;
  t6941 = t1210*t561*t6868;
  t6942 = t6938 + t6941;
  t6928 = -1.*t1210*t6913;
  t6929 = t2007*t561*t6868;
  t6930 = t6928 + t6929;
  t6864 = var2[13]*t1010*t6862;
  t6866 = var2[5]*t1010*t6862;
  t6871 = var2[14]*t6868;
  t6878 = t836*t6877;
  t6886 = -1.*t6882*t2420;
  t6887 = t6878 + t6886;
  t6888 = var2[4]*t6887;
  t6891 = -1.*t1010*t6862*t779;
  t6893 = t836*t6882;
  t6897 = t6877*t2420;
  t6898 = t6893 + t6897;
  t6900 = t135*t6898;
  t6903 = t6891 + t6900;
  t6905 = var2[3]*t6903;
  t6909 = t6864 + t6866 + t6871 + t6888 + t6905;
  t6914 = var2[14]*t6913;
  t6919 = var2[13]*t1010*t6868;
  t6923 = var2[5]*t1010*t6868;
  t6937 = t836*t6930;
  t6944 = -1.*t6942*t2420;
  t6945 = t6937 + t6944;
  t6947 = var2[4]*t6945;
  t6949 = -1.*t1010*t6868*t779;
  t6950 = t836*t6942;
  t6951 = t6930*t2420;
  t6952 = t6950 + t6951;
  t6954 = t135*t6952;
  t6955 = t6949 + t6954;
  t6957 = var2[3]*t6955;
  t6959 = t6914 + t6919 + t6923 + t6947 + t6957;
  t6910 = 0.000956*t6909;
  t6960 = 0.00216*t6959;
  t6962 = t6910 + t6960;
  t6965 = 0.00144*t6909;
  t6970 = 0.000956*t6959;
  t6971 = t6965 + t6970;
  t6972 = -1.e-6*t6909;
  t6975 = -3.e-6*t6959;
  t6978 = t6972 + t6975;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=-3.e-6*t2721*var2[3] + 0.00216*t6103*var2[3] + 0.000956*t6371*var2[3];
  p_output1[13]=-1.e-6*t2721*var2[3] + 0.000956*t6103*var2[3] + 0.00144*t6371*var2[3];
  p_output1[14]=0.00334*t2721*var2[3] - 3.e-6*t6103*var2[3] - 1.e-6*t6371*var2[3];
  p_output1[15]=-3.e-6*t6509 + 0.00216*t6536 + 0.000956*t6564;
  p_output1[16]=-1.e-6*t6509 + 0.000956*t6536 + 0.00144*t6564;
  p_output1[17]=0.00334*t6509 - 3.e-6*t6536 - 1.e-6*t6564;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=0;
  p_output1[25]=0;
  p_output1[26]=0;
  p_output1[27]=0;
  p_output1[28]=0;
  p_output1[29]=0;
  p_output1[30]=0;
  p_output1[31]=0;
  p_output1[32]=0;
  p_output1[33]=0;
  p_output1[34]=0;
  p_output1[35]=0;
  p_output1[36]=0;
  p_output1[37]=0;
  p_output1[38]=0;
  p_output1[39]=-3.e-6*t6606 + 0.00216*t6653 + 0.000956*t6706;
  p_output1[40]=-1.e-6*t6606 + 0.000956*t6653 + 0.00144*t6706;
  p_output1[41]=0.00334*t6606 - 3.e-6*t6653 - 1.e-6*t6706;
  p_output1[42]=-3.e-6*t6772 + 0.00216*t6813 + 0.000956*t6839;
  p_output1[43]=-1.e-6*t6772 + 0.000956*t6813 + 0.00144*t6839;
  p_output1[44]=0.00334*t6772 - 3.e-6*t6813 - 1.e-6*t6839;
  p_output1[45]=t6962;
  p_output1[46]=t6971;
  p_output1[47]=t6978;
  p_output1[48]=t6962;
  p_output1[49]=t6971;
  p_output1[50]=t6978;
  p_output1[51]=0;
  p_output1[52]=0;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "Jq_AMBody_RightKnee_mex.hh"

namespace SymExpression
{

void Jq_AMBody_RightKnee_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
