/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:30:12 GMT-04:00
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
  double t92;
  double t104;
  double t76;
  double t98;
  double t115;
  double t127;
  double t103;
  double t116;
  double t118;
  double t75;
  double t143;
  double t152;
  double t153;
  double t177;
  double t123;
  double t162;
  double t169;
  double t68;
  double t211;
  double t227;
  double t231;
  double t236;
  double t239;
  double t243;
  double t247;
  double t273;
  double t275;
  double t293;
  double t175;
  double t283;
  double t288;
  double t59;
  double t301;
  double t327;
  double t329;
  double t346;
  double t289;
  double t332;
  double t336;
  double t22;
  double t357;
  double t366;
  double t379;
  double t5;
  double t449;
  double t454;
  double t456;
  double t465;
  double t477;
  double t491;
  double t464;
  double t492;
  double t505;
  double t525;
  double t528;
  double t531;
  double t536;
  double t545;
  double t549;
  double t518;
  double t553;
  double t561;
  double t588;
  double t601;
  double t604;
  double t393;
  double t584;
  double t607;
  double t609;
  double t625;
  double t633;
  double t643;
  double t693;
  double t698;
  double t701;
  double t724;
  double t730;
  double t738;
  double t739;
  double t741;
  double t744;
  double t715;
  double t749;
  double t750;
  double t762;
  double t765;
  double t771;
  double t752;
  double t774;
  double t775;
  double t787;
  double t791;
  double t794;
  double t342;
  double t381;
  double t383;
  double t412;
  double t420;
  double t424;
  double t623;
  double t647;
  double t654;
  double t668;
  double t675;
  double t678;
  double t780;
  double t797;
  double t802;
  double t806;
  double t818;
  double t822;
  double t967;
  double t1004;
  double t938;
  double t941;
  double t1100;
  double t1107;
  double t1222;
  double t1228;
  double t1303;
  double t1306;
  double t1354;
  double t1368;
  double t845;
  double t856;
  double t859;
  double t944;
  double t954;
  double t957;
  double t1008;
  double t1015;
  double t1030;
  double t1048;
  double t1054;
  double t1073;
  double t1081;
  double t1088;
  double t1090;
  double t1135;
  double t1152;
  double t1156;
  double t1208;
  double t1209;
  double t1211;
  double t1230;
  double t1242;
  double t1245;
  double t1248;
  double t1259;
  double t1293;
  double t1319;
  double t1327;
  double t1328;
  double t1336;
  double t1346;
  double t1349;
  double t1376;
  double t1382;
  double t1383;
  double t1425;
  double t1428;
  double t1429;
  double t864;
  double t873;
  double t878;
  double t880;
  double t886;
  double t890;
  t92 = Cos(var1[5]);
  t104 = Sin(var1[3]);
  t76 = Cos(var1[3]);
  t98 = Sin(var1[4]);
  t115 = Sin(var1[5]);
  t127 = Sin(var1[13]);
  t103 = t76*t92*t98;
  t116 = t104*t115;
  t118 = t103 + t116;
  t75 = Cos(var1[13]);
  t143 = -1.*t92*t104;
  t152 = t76*t98*t115;
  t153 = t143 + t152;
  t177 = Cos(var1[15]);
  t123 = t75*t118;
  t162 = -1.*t127*t153;
  t169 = t123 + t162;
  t68 = Sin(var1[15]);
  t211 = Cos(var1[14]);
  t227 = Cos(var1[4]);
  t231 = t211*t76*t227;
  t236 = Sin(var1[14]);
  t239 = t127*t118;
  t243 = t75*t153;
  t247 = t239 + t243;
  t273 = t236*t247;
  t275 = t231 + t273;
  t293 = Cos(var1[16]);
  t175 = t68*t169;
  t283 = t177*t275;
  t288 = t175 + t283;
  t59 = Sin(var1[16]);
  t301 = t177*t169;
  t327 = -1.*t68*t275;
  t329 = t301 + t327;
  t346 = Cos(var1[17]);
  t289 = -1.*t59*t288;
  t332 = t293*t329;
  t336 = t289 + t332;
  t22 = Sin(var1[17]);
  t357 = t293*t288;
  t366 = t59*t329;
  t379 = t357 + t366;
  t5 = Sin(var1[18]);
  t449 = t92*t104*t98;
  t454 = -1.*t76*t115;
  t456 = t449 + t454;
  t465 = t76*t92;
  t477 = t104*t98*t115;
  t491 = t465 + t477;
  t464 = t75*t456;
  t492 = -1.*t127*t491;
  t505 = t464 + t492;
  t525 = t211*t227*t104;
  t528 = t127*t456;
  t531 = t75*t491;
  t536 = t528 + t531;
  t545 = t236*t536;
  t549 = t525 + t545;
  t518 = t68*t505;
  t553 = t177*t549;
  t561 = t518 + t553;
  t588 = t177*t505;
  t601 = -1.*t68*t549;
  t604 = t588 + t601;
  t393 = Cos(var1[18]);
  t584 = -1.*t59*t561;
  t607 = t293*t604;
  t609 = t584 + t607;
  t625 = t293*t561;
  t633 = t59*t604;
  t643 = t625 + t633;
  t693 = t75*t227*t92;
  t698 = -1.*t227*t127*t115;
  t701 = t693 + t698;
  t724 = -1.*t211*t98;
  t730 = t227*t92*t127;
  t738 = t75*t227*t115;
  t739 = t730 + t738;
  t741 = t236*t739;
  t744 = t724 + t741;
  t715 = t68*t701;
  t749 = t177*t744;
  t750 = t715 + t749;
  t762 = t177*t701;
  t765 = -1.*t68*t744;
  t771 = t762 + t765;
  t752 = -1.*t59*t750;
  t774 = t293*t771;
  t775 = t752 + t774;
  t787 = t293*t750;
  t791 = t59*t771;
  t794 = t787 + t791;
  t342 = t22*t336;
  t381 = t346*t379;
  t383 = t342 + t381;
  t412 = t346*t336;
  t420 = -1.*t22*t379;
  t424 = t412 + t420;
  t623 = t22*t609;
  t647 = t346*t643;
  t654 = t623 + t647;
  t668 = t346*t609;
  t675 = -1.*t22*t643;
  t678 = t668 + t675;
  t780 = t22*t775;
  t797 = t346*t794;
  t802 = t780 + t797;
  t806 = t346*t775;
  t818 = -1.*t22*t794;
  t822 = t806 + t818;
  t967 = -1.*t75;
  t1004 = 1. + t967;
  t938 = -1.*t211;
  t941 = 1. + t938;
  t1100 = -1.*t177;
  t1107 = 1. + t1100;
  t1222 = -1.*t293;
  t1228 = 1. + t1222;
  t1303 = -1.*t346;
  t1306 = 1. + t1303;
  t1354 = -1.*t393;
  t1368 = 1. + t1354;
  t845 = t393*t383;
  t856 = t5*t424;
  t859 = t845 + t856;
  t944 = -0.08055*t941;
  t954 = -0.135*t236;
  t957 = 0. + t944 + t954;
  t1008 = 0.07996*t1004;
  t1015 = 0.135*t127;
  t1030 = 0. + t1008 + t1015;
  t1048 = -0.135*t1004;
  t1054 = 0.07996*t127;
  t1073 = 0. + t1048 + t1054;
  t1081 = -0.135*t941;
  t1088 = 0.08055*t236;
  t1090 = 0. + t1081 + t1088;
  t1135 = -0.01004*t1107;
  t1152 = 0.08055*t68;
  t1156 = 0. + t1135 + t1152;
  t1208 = -0.08055*t1107;
  t1209 = -0.01004*t68;
  t1211 = 0. + t1208 + t1209;
  t1230 = -0.08055*t1228;
  t1242 = -0.13004*t59;
  t1245 = 0. + t1230 + t1242;
  t1248 = -0.13004*t1228;
  t1259 = 0.08055*t59;
  t1293 = 0. + t1248 + t1259;
  t1319 = -0.19074*t1306;
  t1327 = 0.03315*t22;
  t1328 = 0. + t1319 + t1327;
  t1336 = -0.03315*t1306;
  t1346 = -0.19074*t22;
  t1349 = 0. + t1336 + t1346;
  t1376 = -0.01315*t1368;
  t1382 = -0.62554*t5;
  t1383 = 0. + t1376 + t1382;
  t1425 = -0.62554*t1368;
  t1428 = 0.01315*t5;
  t1429 = 0. + t1425 + t1428;
  t864 = t393*t654;
  t873 = t5*t678;
  t878 = t864 + t873;
  t880 = t393*t802;
  t886 = t5*t822;
  t890 = t880 + t886;
  p_output1[0]=-1.*t393*t424 + t383*t5;
  p_output1[1]=t5*t654 - 1.*t393*t678;
  p_output1[2]=t5*t802 - 1.*t393*t822;
  p_output1[3]=0.;
  p_output1[4]=t859;
  p_output1[5]=t878;
  p_output1[6]=t890;
  p_output1[7]=0.;
  p_output1[8]=-1.*t211*t247 + t227*t236*t76;
  p_output1[9]=t104*t227*t236 - 1.*t211*t536;
  p_output1[10]=-1.*t211*t739 - 1.*t236*t98;
  p_output1[11]=0.;
  p_output1[12]=0. + t1030*t118 + t1073*t153 + t1156*t169 + t1090*t247 + t1211*t275 + t1245*t288 + t1293*t329 + t1328*t336 + t1349*t379 + t1383*t383 + t1429*t424 - 0.73604*(t393*t424 - 1.*t383*t5) - 0.1318*(t211*t247 - 1.*t227*t236*t76) - 0.04375*t859 + t227*t76*t957 + var1[0];
  p_output1[13]=0. + t1030*t456 + t1073*t491 + t1156*t505 + t1090*t536 - 0.1318*(-1.*t104*t227*t236 + t211*t536) + t1211*t549 + t1245*t561 + t1293*t604 + t1328*t609 + t1349*t643 + t1383*t654 + t1429*t678 - 0.73604*(-1.*t5*t654 + t393*t678) - 0.04375*t878 + t104*t227*t957 + var1[1];
  p_output1[14]=0. + t1073*t115*t227 + t1156*t701 + t1090*t739 + t1211*t744 + t1245*t750 + t1293*t771 + t1328*t775 + t1349*t794 + t1383*t802 + t1429*t822 - 0.73604*(-1.*t5*t802 + t393*t822) - 0.04375*t890 + t1030*t227*t92 - 1.*t957*t98 - 0.1318*(t211*t739 + t236*t98) + var1[2];
  p_output1[15]=1.;
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
  plhs[0] = mxCreateDoubleMatrix((mwSize) 4, (mwSize) 4, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "T_RightTarsus_mex.hh"

namespace SymExpression
{

void T_RightTarsus_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
