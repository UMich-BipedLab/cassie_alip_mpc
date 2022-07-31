/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:46 GMT-04:00
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
  double t1147;
  double t813;
  double t1072;
  double t1240;
  double t1665;
  double t1135;
  double t1358;
  double t1398;
  double t658;
  double t1691;
  double t1853;
  double t1871;
  double t1502;
  double t1985;
  double t2118;
  double t3298;
  double t2995;
  double t3083;
  double t3124;
  double t2961;
  double t3619;
  double t3640;
  double t3726;
  double t8;
  double t76;
  double t2847;
  double t2853;
  double t5008;
  double t5018;
  double t5068;
  double t5136;
  double t5147;
  double t5648;
  double t5676;
  double t5739;
  double t6097;
  double t6267;
  double t4413;
  double t2149;
  double t2430;
  double t2600;
  double t3127;
  double t3764;
  double t3849;
  double t3887;
  double t4090;
  double t4174;
  double t4383;
  double t4487;
  double t4557;
  double t4831;
  double t4866;
  double t5416;
  double t5421;
  double t5566;
  double t5831;
  double t6327;
  double t6332;
  double t6391;
  double t6441;
  double t6459;
  double t6505;
  double t6514;
  double t6517;
  double t6533;
  double t6611;
  double t6717;
  double t6737;
  double t6976;
  double t6982;
  double t6989;
  double t6995;
  double t6997;
  double t7014;
  double t7019;
  double t7027;
  double t7029;
  double t7031;
  double t7032;
  double t7033;
  double t7034;
  double t7036;
  double t7048;
  double t7087;
  double t7094;
  double t7097;
  double t6747;
  double t6810;
  double t6854;
  double t6874;
  double t7217;
  double t7179;
  double t7180;
  double t7184;
  double t7293;
  double t7280;
  double t7281;
  double t7284;
  double t7195;
  double t7221;
  double t7222;
  double t7224;
  double t7240;
  double t7244;
  double t7250;
  double t7251;
  double t7256;
  double t7290;
  double t7294;
  double t7295;
  double t7297;
  double t7334;
  double t7338;
  double t7339;
  double t7342;
  double t7343;
  double t7366;
  double t7367;
  double t7368;
  double t7372;
  double t7374;
  double t7375;
  double t7376;
  double t7378;
  double t7380;
  double t7381;
  double t7384;
  double t7385;
  double t7387;
  double t7389;
  double t7391;
  double t7392;
  double t7394;
  double t7395;
  double t7396;
  double t7399;
  double t7401;
  double t7403;
  double t7404;
  double t7405;
  double t7406;
  double t7407;
  double t7411;
  double t7412;
  double t7457;
  double t7458;
  double t7459;
  double t7455;
  double t7471;
  double t7473;
  double t7474;
  double t7465;
  double t7466;
  double t7467;
  double t7501;
  double t7505;
  double t7508;
  double t7514;
  double t7515;
  double t7517;
  double t7510;
  double t7511;
  double t7512;
  double t7456;
  double t7460;
  double t7463;
  double t7469;
  double t7476;
  double t7477;
  double t7482;
  double t7484;
  double t7486;
  double t7488;
  double t7489;
  double t7494;
  double t7495;
  double t7497;
  double t7498;
  double t7506;
  double t7507;
  double t7509;
  double t7513;
  double t7520;
  double t7527;
  double t7531;
  double t7532;
  double t7533;
  double t7536;
  double t7537;
  double t7538;
  double t7539;
  double t7544;
  double t7545;
  double t7553;
  double t7555;
  double t7556;
  double t7559;
  double t7568;
  double t7569;
  double t7570;
  double t7558;
  double t7560;
  double t7563;
  double t7587;
  double t7588;
  double t7589;
  double t7576;
  double t7577;
  double t7583;
  double t7603;
  double t7604;
  double t7605;
  double t7608;
  double t7609;
  double t7610;
  double t7618;
  double t7619;
  double t7621;
  double t7613;
  double t7614;
  double t7615;
  double t7565;
  double t7574;
  double t7575;
  double t7584;
  double t7590;
  double t7591;
  double t7592;
  double t7593;
  double t7594;
  double t7595;
  double t7596;
  double t7597;
  double t7599;
  double t7600;
  double t7601;
  double t7606;
  double t7607;
  double t7612;
  double t7617;
  double t7623;
  double t7624;
  double t7626;
  double t7627;
  double t7628;
  double t7629;
  double t7630;
  double t7631;
  double t7632;
  double t7633;
  double t7634;
  double t7602;
  double t7635;
  double t7638;
  double t7642;
  double t7643;
  double t7647;
  t1147 = Cos(var1[16]);
  t813 = Cos(var1[17]);
  t1072 = Sin(var1[16]);
  t1240 = Sin(var1[17]);
  t1665 = Cos(var1[15]);
  t1135 = t813*t1072;
  t1358 = t1147*t1240;
  t1398 = 0. + t1135 + t1358;
  t658 = Sin(var1[15]);
  t1691 = t1147*t813;
  t1853 = -1.*t1072*t1240;
  t1871 = 0. + t1691 + t1853;
  t1502 = -1.*t658*t1398;
  t1985 = t1665*t1871;
  t2118 = 0. + t1502 + t1985;
  t3298 = Sin(var1[13]);
  t2995 = t1665*t1398;
  t3083 = t658*t1871;
  t3124 = 0. + t2995 + t3083;
  t2961 = Cos(var1[13]);
  t3619 = Sin(var1[14]);
  t3640 = t3619*t2118;
  t3726 = 0. + t3640;
  t8 = Cos(var1[4]);
  t76 = Cos(var1[14]);
  t2847 = Sin(var1[4]);
  t2853 = Cos(var1[5]);
  t5008 = -1.*t1147*t813;
  t5018 = t1072*t1240;
  t5068 = 0. + t5008 + t5018;
  t5136 = -1.*t658*t5068;
  t5147 = 0. + t2995 + t5136;
  t5648 = t658*t1398;
  t5676 = t1665*t5068;
  t5739 = 0. + t5648 + t5676;
  t6097 = t3619*t5147;
  t6267 = 0. + t6097;
  t4413 = Sin(var1[5]);
  t2149 = t76*t2118;
  t2430 = 0. + t2149;
  t2600 = -1.*t8*t2430;
  t3127 = t2961*t3124;
  t3764 = t3298*t3726;
  t3849 = 0. + t3127 + t3764;
  t3887 = t2853*t3849;
  t4090 = -1.*t3298*t3124;
  t4174 = t2961*t3726;
  t4383 = 0. + t4090 + t4174;
  t4487 = t4383*t4413;
  t4557 = 0. + t3887 + t4487;
  t4831 = -1.*t2847*t4557;
  t4866 = t2600 + t4831;
  t5416 = t76*t5147;
  t5421 = 0. + t5416;
  t5566 = -1.*t8*t5421;
  t5831 = t2961*t5739;
  t6327 = t3298*t6267;
  t6332 = 0. + t5831 + t6327;
  t6391 = t2853*t6332;
  t6441 = -1.*t3298*t5739;
  t6459 = t2961*t6267;
  t6505 = 0. + t6441 + t6459;
  t6514 = t6505*t4413;
  t6517 = 0. + t6391 + t6514;
  t6533 = -1.*t2847*t6517;
  t6611 = t5566 + t6533;
  t6717 = -1.*t76;
  t6737 = 0. + t6717;
  t6976 = -1.*t2853*t3849;
  t6982 = -1.*t4383*t4413;
  t6989 = t6976 + t6982;
  t6995 = var2[4]*t6989;
  t6997 = t2853*t4383;
  t7014 = -1.*t3849*t4413;
  t7019 = t6997 + t7014;
  t7027 = var2[3]*t8*t7019;
  t7029 = t6995 + t7027;
  t7031 = -1.*t2853*t6332;
  t7032 = -1.*t6505*t4413;
  t7033 = t7031 + t7032;
  t7034 = var2[4]*t7033;
  t7036 = t2853*t6505;
  t7048 = -1.*t6332*t4413;
  t7087 = t7036 + t7048;
  t7094 = var2[3]*t8*t7087;
  t7097 = t7034 + t7094;
  t6747 = t6737*t3298;
  t6810 = 0. + t6747;
  t6854 = t2961*t6737;
  t6874 = 0. + t6854;
  t7217 = t4090 + t4174;
  t7179 = -1.*t2961*t3124;
  t7180 = -1.*t3298*t3726;
  t7184 = t7179 + t7180;
  t7293 = t6441 + t6459;
  t7280 = -1.*t2961*t5739;
  t7281 = -1.*t3298*t6267;
  t7284 = t7280 + t7281;
  t7195 = t2853*t7184;
  t7221 = -1.*t7217*t4413;
  t7222 = t7195 + t7221;
  t7224 = var2[4]*t7222;
  t7240 = t2853*t7217;
  t7244 = t7184*t4413;
  t7250 = t7240 + t7244;
  t7251 = var2[3]*t8*t7250;
  t7256 = t7224 + t7251;
  t7290 = t2853*t7284;
  t7294 = -1.*t7293*t4413;
  t7295 = t7290 + t7294;
  t7297 = var2[4]*t7295;
  t7334 = t2853*t7293;
  t7338 = t7284*t4413;
  t7339 = t7334 + t7338;
  t7342 = var2[3]*t8*t7339;
  t7343 = t7297 + t7342;
  t7366 = -1.*var2[13]*t3619*t2118;
  t7367 = -1.*var2[5]*t3619*t2118;
  t7368 = t2961*t76*t2853*t2118;
  t7372 = -1.*t76*t3298*t2118*t4413;
  t7374 = t7368 + t7372;
  t7375 = var2[4]*t7374;
  t7376 = t3619*t2118*t2847;
  t7378 = t76*t2853*t3298*t2118;
  t7380 = t2961*t76*t2118*t4413;
  t7381 = t7378 + t7380;
  t7384 = t8*t7381;
  t7385 = t7376 + t7384;
  t7387 = var2[3]*t7385;
  t7389 = t7366 + t7367 + t7375 + t7387;
  t7391 = -1.*var2[13]*t3619*t5147;
  t7392 = -1.*var2[5]*t3619*t5147;
  t7394 = t2961*t76*t2853*t5147;
  t7395 = -1.*t76*t3298*t5147*t4413;
  t7396 = t7394 + t7395;
  t7399 = var2[4]*t7396;
  t7401 = t3619*t5147*t2847;
  t7403 = t76*t2853*t3298*t5147;
  t7404 = t2961*t76*t5147*t4413;
  t7405 = t7403 + t7404;
  t7406 = t8*t7405;
  t7407 = t7401 + t7406;
  t7411 = var2[3]*t7407;
  t7412 = t7391 + t7392 + t7399 + t7411;
  t7457 = -1.*t1665*t1398;
  t7458 = -1.*t658*t1871;
  t7459 = t7457 + t7458;
  t7455 = t1502 + t1985;
  t7471 = t2961*t7455;
  t7473 = t3298*t3619*t7459;
  t7474 = t7471 + t7473;
  t7465 = -1.*t3298*t7455;
  t7466 = t2961*t3619*t7459;
  t7467 = t7465 + t7466;
  t7501 = -1.*t1665*t5068;
  t7505 = t1502 + t7501;
  t7508 = t2995 + t5136;
  t7514 = t3298*t3619*t7505;
  t7515 = t2961*t7508;
  t7517 = t7514 + t7515;
  t7510 = t2961*t3619*t7505;
  t7511 = -1.*t3298*t7508;
  t7512 = t7510 + t7511;
  t7456 = var2[14]*t7455;
  t7460 = var2[13]*t76*t7459;
  t7463 = var2[5]*t76*t7459;
  t7469 = t2853*t7467;
  t7476 = -1.*t7474*t4413;
  t7477 = t7469 + t7476;
  t7482 = var2[4]*t7477;
  t7484 = -1.*t76*t7459*t2847;
  t7486 = t2853*t7474;
  t7488 = t7467*t4413;
  t7489 = t7486 + t7488;
  t7494 = t8*t7489;
  t7495 = t7484 + t7494;
  t7497 = var2[3]*t7495;
  t7498 = t7456 + t7460 + t7463 + t7482 + t7497;
  t7506 = var2[13]*t76*t7505;
  t7507 = var2[5]*t76*t7505;
  t7509 = var2[14]*t7508;
  t7513 = t2853*t7512;
  t7520 = -1.*t7517*t4413;
  t7527 = t7513 + t7520;
  t7531 = var2[4]*t7527;
  t7532 = -1.*t76*t7505*t2847;
  t7533 = t2853*t7517;
  t7536 = t7512*t4413;
  t7537 = t7533 + t7536;
  t7538 = t8*t7537;
  t7539 = t7532 + t7538;
  t7544 = var2[3]*t7539;
  t7545 = t7506 + t7507 + t7509 + t7531 + t7544;
  t7553 = -1.*t813*t1072;
  t7555 = -1.*t1147*t1240;
  t7556 = t7553 + t7555;
  t7559 = t1691 + t1853;
  t7568 = t1665*t7556;
  t7569 = -1.*t658*t7559;
  t7570 = t7568 + t7569;
  t7558 = t658*t7556;
  t7560 = t1665*t7559;
  t7563 = t7558 + t7560;
  t7587 = t2961*t7563;
  t7588 = t3298*t3619*t7570;
  t7589 = t7587 + t7588;
  t7576 = -1.*t3298*t7563;
  t7577 = t2961*t3619*t7570;
  t7583 = t7576 + t7577;
  t7603 = t1135 + t1358;
  t7604 = -1.*t658*t7603;
  t7605 = t7604 + t7560;
  t7608 = t1665*t7603;
  t7609 = t658*t7559;
  t7610 = t7608 + t7609;
  t7618 = t3298*t3619*t7605;
  t7619 = t2961*t7610;
  t7621 = t7618 + t7619;
  t7613 = t2961*t3619*t7605;
  t7614 = -1.*t3298*t7610;
  t7615 = t7613 + t7614;
  t7565 = var2[14]*t7563;
  t7574 = var2[13]*t76*t7570;
  t7575 = var2[5]*t76*t7570;
  t7584 = t2853*t7583;
  t7590 = -1.*t7589*t4413;
  t7591 = t7584 + t7590;
  t7592 = var2[4]*t7591;
  t7593 = -1.*t76*t7570*t2847;
  t7594 = t2853*t7589;
  t7595 = t7583*t4413;
  t7596 = t7594 + t7595;
  t7597 = t8*t7596;
  t7599 = t7593 + t7597;
  t7600 = var2[3]*t7599;
  t7601 = t7565 + t7574 + t7575 + t7592 + t7600;
  t7606 = var2[13]*t76*t7605;
  t7607 = var2[5]*t76*t7605;
  t7612 = var2[14]*t7610;
  t7617 = t2853*t7615;
  t7623 = -1.*t7621*t4413;
  t7624 = t7617 + t7623;
  t7626 = var2[4]*t7624;
  t7627 = -1.*t76*t7605*t2847;
  t7628 = t2853*t7621;
  t7629 = t7615*t4413;
  t7630 = t7628 + t7629;
  t7631 = t8*t7630;
  t7632 = t7627 + t7631;
  t7633 = var2[3]*t7632;
  t7634 = t7606 + t7607 + t7612 + t7626 + t7633;
  t7602 = 0.000334*t7601;
  t7635 = 0.00036*t7634;
  t7638 = t7602 + t7635;
  t7642 = 0.0341*t7601;
  t7643 = 0.000334*t7634;
  t7647 = t7642 + t7643;
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
  p_output1[12]=0.000334*t4866*var2[3] + 0.00036*t6611*var2[3];
  p_output1[13]=0.0341*t4866*var2[3] + 0.000334*t6611*var2[3];
  p_output1[14]=0.0341*(-1.*t2847*(0. + t2853*t6810 + t4413*t6874) - 1.*(0. + t3619)*t8)*var2[3];
  p_output1[15]=0.000334*t7029 + 0.00036*t7097;
  p_output1[16]=0.0341*t7029 + 0.000334*t7097;
  p_output1[17]=0.0341*((-1.*t4413*t6810 + t2853*t6874)*t8*var2[3] + (-1.*t2853*t6810 - 1.*t4413*t6874)*var2[4]);
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
  p_output1[39]=0.000334*t7256 + 0.00036*t7343;
  p_output1[40]=0.0341*t7256 + 0.000334*t7343;
  p_output1[41]=0.0341*((t2853*t2961*t6737 - 1.*t3298*t4413*t6737)*t8*var2[3] + (-1.*t2853*t3298*t6737 - 1.*t2961*t4413*t6737)*var2[4]);
  p_output1[42]=0.000334*t7389 + 0.00036*t7412;
  p_output1[43]=0.0341*t7389 + 0.000334*t7412;
  p_output1[44]=0.0341*((-1.*t2847*t76 + (t2853*t3298*t3619 + t2961*t3619*t4413)*t8)*var2[3] + (t2853*t2961*t3619 - 1.*t3298*t3619*t4413)*var2[4] + t76*var2[5] + t76*var2[13]);
  p_output1[45]=0.000334*t7498 + 0.00036*t7545;
  p_output1[46]=0.0341*t7498 + 0.000334*t7545;
  p_output1[47]=0;
  p_output1[48]=t7638;
  p_output1[49]=t7647;
  p_output1[50]=0;
  p_output1[51]=t7638;
  p_output1[52]=t7647;
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

#include "Jq_AMBody_RightShin_mex.hh"

namespace SymExpression
{

void Jq_AMBody_RightShin_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
