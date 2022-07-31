/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:24:03 GMT-04:00
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
  double t5170;
  double t494;
  double t507;
  double t1505;
  double t5234;
  double t5726;
  double t5751;
  double t6342;
  double t6467;
  double t3043;
  double t5249;
  double t5392;
  double t7301;
  double t7374;
  double t7376;
  double t9542;
  double t9547;
  double t9548;
  double t9556;
  double t9529;
  double t9532;
  double t9538;
  double t9564;
  double t6343;
  double t6473;
  double t6492;
  double t7420;
  double t7618;
  double t7810;
  double t9640;
  double t9642;
  double t9643;
  double t9647;
  double t9648;
  double t9649;
  double t9551;
  double t9559;
  double t9560;
  double t9565;
  double t9571;
  double t9579;
  double t9660;
  double t9661;
  double t9662;
  double t9682;
  double t9683;
  double t9684;
  double t9702;
  double t9703;
  double t9704;
  double t9722;
  double t9723;
  double t9725;
  double t9738;
  double t9739;
  double t9741;
  double t9656;
  double t9748;
  double t9749;
  double t9758;
  double t9759;
  double t9760;
  double t9766;
  double t9767;
  double t9768;
  double t9779;
  double t9780;
  double t9781;
  double t9745;
  double t9657;
  double t9658;
  double t9787;
  double t9788;
  double t9790;
  double t9791;
  double t9793;
  double t9805;
  double t9806;
  double t9807;
  double t9763;
  double t9814;
  double t9815;
  double t9775;
  double t9776;
  double t9777;
  double t9778;
  double t9783;
  double t9784;
  double t9785;
  double t9666;
  double t9668;
  double t9669;
  double t9823;
  double t9824;
  double t9825;
  double t9827;
  double t9828;
  double t9839;
  double t9840;
  double t9841;
  double t9623;
  double t9855;
  double t9856;
  double t9857;
  t5170 = Cos(var1[3]);
  t494 = Cos(var1[5]);
  t507 = Sin(var1[3]);
  t1505 = Sin(var1[4]);
  t5234 = Sin(var1[5]);
  t5726 = Cos(var1[6]);
  t5751 = -1.*t5726;
  t6342 = 1. + t5751;
  t6467 = Sin(var1[6]);
  t3043 = -1.*t494*t507*t1505;
  t5249 = t5170*t5234;
  t5392 = t3043 + t5249;
  t7301 = -1.*t5170*t494;
  t7374 = -1.*t507*t1505*t5234;
  t7376 = t7301 + t7374;
  t9542 = Cos(var1[7]);
  t9547 = -1.*t9542;
  t9548 = 1. + t9547;
  t9556 = Sin(var1[7]);
  t9529 = t5726*t7376;
  t9532 = t5392*t6467;
  t9538 = t9529 + t9532;
  t9564 = Cos(var1[4]);
  t6343 = 0.07996*t6342;
  t6473 = -0.135*t6467;
  t6492 = 0. + t6343 + t6473;
  t7420 = 0.135*t6342;
  t7618 = 0.07996*t6467;
  t7810 = 0. + t7420 + t7618;
  t9640 = t5170*t494*t1505;
  t9642 = t507*t5234;
  t9643 = t9640 + t9642;
  t9647 = -1.*t494*t507;
  t9648 = t5170*t1505*t5234;
  t9649 = t9647 + t9648;
  t9551 = 0.135*t9548;
  t9559 = 0.08055*t9556;
  t9560 = 0. + t9551 + t9559;
  t9565 = -0.08055*t9548;
  t9571 = 0.135*t9556;
  t9579 = 0. + t9565 + t9571;
  t9660 = t5726*t9649;
  t9661 = t9643*t6467;
  t9662 = t9660 + t9661;
  t9682 = t5170*t9564*t5726*t5234;
  t9683 = t5170*t9564*t494*t6467;
  t9684 = t9682 + t9683;
  t9702 = t9564*t5726*t507*t5234;
  t9703 = t9564*t494*t507*t6467;
  t9704 = t9702 + t9703;
  t9722 = -1.*t5726*t1505*t5234;
  t9723 = -1.*t494*t1505*t6467;
  t9725 = t9722 + t9723;
  t9738 = t494*t507;
  t9739 = -1.*t5170*t1505*t5234;
  t9741 = t9738 + t9739;
  t9656 = t5726*t9643;
  t9748 = t9741*t6467;
  t9749 = t9656 + t9748;
  t9758 = t494*t507*t1505;
  t9759 = -1.*t5170*t5234;
  t9760 = t9758 + t9759;
  t9766 = t5726*t9760;
  t9767 = t7376*t6467;
  t9768 = t9766 + t9767;
  t9779 = t9564*t494*t5726;
  t9780 = -1.*t9564*t5234*t6467;
  t9781 = t9779 + t9780;
  t9745 = -1.*t9643*t6467;
  t9657 = -1.*t9649*t6467;
  t9658 = t9656 + t9657;
  t9787 = -0.135*t5726;
  t9788 = t9787 + t7618;
  t9790 = 0.07996*t5726;
  t9791 = 0.135*t6467;
  t9793 = t9790 + t9791;
  t9805 = t5170*t494;
  t9806 = t507*t1505*t5234;
  t9807 = t9805 + t9806;
  t9763 = -1.*t9760*t6467;
  t9814 = -1.*t9807*t6467;
  t9815 = t9766 + t9814;
  t9775 = -1.*t9564*t5726*t5234;
  t9776 = -1.*t9564*t494*t6467;
  t9777 = t9775 + t9776;
  t9778 = 0.04566*t9777;
  t9783 = 0.135*t9542*t9781;
  t9784 = t9781*t9560;
  t9785 = -0.08055*t9781*t9556;
  t9666 = t9542*t9662;
  t9668 = -1.*t5170*t9564*t9556;
  t9669 = t9666 + t9668;
  t9823 = 0.135*t9542;
  t9824 = -0.08055*t9556;
  t9825 = t9823 + t9824;
  t9827 = 0.08055*t9542;
  t9828 = t9827 + t9571;
  t9839 = t5726*t9807;
  t9840 = t9760*t6467;
  t9841 = t9839 + t9840;
  t9623 = -1.*t9564*t9542*t507;
  t9855 = t9564*t5726*t5234;
  t9856 = t9564*t494*t6467;
  t9857 = t9855 + t9856;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t5392*t6492 + 0.04566*(t5392*t5726 - 1.*t6467*t7376) + t7376*t7810 + t9538*t9560 + 0.135*(t9538*t9542 + t507*t9556*t9564) - 1.*t507*t9564*t9579 - 0.08055*(t9538*t9556 + t9623);
  p_output1[10]=t5170*t9564*t9579 + t6492*t9643 + t7810*t9649 + 0.04566*t9658 + t9560*t9662 - 0.08055*(t5170*t9542*t9564 + t9556*t9662) + 0.135*t9669;
  p_output1[11]=0;
  p_output1[12]=t494*t5170*t6492*t9564 + t5170*t5234*t7810*t9564 + 0.04566*(t494*t5170*t5726*t9564 - 1.*t5170*t5234*t6467*t9564) - 1.*t1505*t5170*t9579 + t9560*t9684 + 0.135*(t1505*t5170*t9556 + t9542*t9684) - 0.08055*(-1.*t1505*t5170*t9542 + t9556*t9684);
  p_output1[13]=t494*t507*t6492*t9564 + t507*t5234*t7810*t9564 + 0.04566*(t494*t507*t5726*t9564 - 1.*t507*t5234*t6467*t9564) - 1.*t1505*t507*t9579 + t9560*t9704 + 0.135*(t1505*t507*t9556 + t9542*t9704) - 0.08055*(-1.*t1505*t507*t9542 + t9556*t9704);
  p_output1[14]=0.04566*(-1.*t1505*t494*t5726 + t1505*t5234*t6467) - 1.*t1505*t494*t6492 - 1.*t1505*t5234*t7810 - 1.*t9564*t9579 + t9560*t9725 + 0.135*(t9556*t9564 + t9542*t9725) - 0.08055*(-1.*t9542*t9564 + t9556*t9725);
  p_output1[15]=t7810*t9643 + t6492*t9741 + 0.04566*(t5726*t9741 + t9745) + 0.135*t9542*t9749 - 0.08055*t9556*t9749 + t9560*t9749;
  p_output1[16]=t6492*t7376 + t7810*t9760 + 0.04566*(t9529 + t9763) + 0.135*t9542*t9768 - 0.08055*t9556*t9768 + t9560*t9768;
  p_output1[17]=-1.*t5234*t6492*t9564 + t494*t7810*t9564 + t9778 + t9783 + t9784 + t9785;
  p_output1[18]=0.135*t9542*t9658 - 0.08055*t9556*t9658 + t9560*t9658 + 0.04566*(-1.*t5726*t9649 + t9745) + t9643*t9788 + t9649*t9793;
  p_output1[19]=t9760*t9788 + t9793*t9807 + 0.04566*(t9763 - 1.*t5726*t9807) + 0.135*t9542*t9815 - 0.08055*t9556*t9815 + t9560*t9815;
  p_output1[20]=t9778 + t9783 + t9784 + t9785 + t494*t9564*t9788 + t5234*t9564*t9793;
  p_output1[21]=0.135*(-1.*t5170*t9542*t9564 - 1.*t9556*t9662) - 0.08055*t9669 + t5170*t9564*t9825 + t9662*t9828;
  p_output1[22]=t507*t9564*t9825 + t9828*t9841 - 0.08055*(-1.*t507*t9556*t9564 + t9542*t9841) + 0.135*(t9623 - 1.*t9556*t9841);
  p_output1[23]=-1.*t1505*t9825 + t9828*t9857 - 0.08055*(t1505*t9556 + t9542*t9857) + 0.135*(t1505*t9542 - 1.*t9556*t9857);
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 3, (mwSize) 20, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Jp_LeftHip_mex.hh"

namespace SymExpression
{

void Jp_LeftHip_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
