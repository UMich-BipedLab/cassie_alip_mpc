/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:29:47 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jq_AMBody_RightShin_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double t1135;
  double t350;
  double t486;
  double t1358;
  double t1721;
  double t490;
  double t1558;
  double t1691;
  double t109;
  double t1727;
  double t1969;
  double t1985;
  double t1720;
  double t2084;
  double t2112;
  double t3127;
  double t2908;
  double t2912;
  double t2995;
  double t2539;
  double t3198;
  double t3449;
  double t3640;
  double t10;
  double t62;
  double t2398;
  double t2534;
  double t5164;
  double t5416;
  double t5648;
  double t5676;
  double t5765;
  double t6071;
  double t6097;
  double t6241;
  double t6391;
  double t6459;
  double t4349;
  double t2143;
  double t2149;
  double t2166;
  double t3083;
  double t3764;
  double t3887;
  double t3974;
  double t4174;
  double t4231;
  double t4314;
  double t4487;
  double t4866;
  double t4928;
  double t5018;
  double t5831;
  double t5962;
  double t6041;
  double t6327;
  double t6514;
  double t6611;
  double t6612;
  double t6617;
  double t6626;
  double t6662;
  double t6676;
  double t6682;
  double t6692;
  double t6702;
  double t6953;
  double t6954;
  double t7087;
  double t7094;
  double t7097;
  double t7098;
  double t7099;
  double t7105;
  double t7118;
  double t7125;
  double t7127;
  double t7136;
  double t7138;
  double t7140;
  double t7142;
  double t7154;
  double t7155;
  double t7162;
  double t7174;
  double t7184;
  double t6989;
  double t6995;
  double t7019;
  double t7027;
  double t7343;
  double t7334;
  double t7338;
  double t7339;
  double t7364;
  double t7359;
  double t7360;
  double t7361;
  double t7342;
  double t7344;
  double t7347;
  double t7349;
  double t7351;
  double t7352;
  double t7353;
  double t7354;
  double t7357;
  double t7362;
  double t7365;
  double t7368;
  double t7374;
  double t7375;
  double t7376;
  double t7378;
  double t7380;
  double t7381;
  double t7412;
  double t7414;
  double t7415;
  double t7418;
  double t7419;
  double t7420;
  double t7421;
  double t7422;
  double t7423;
  double t7425;
  double t7431;
  double t7432;
  double t7434;
  double t7435;
  double t7439;
  double t7441;
  double t7444;
  double t7447;
  double t7453;
  double t7454;
  double t7456;
  double t7460;
  double t7463;
  double t7466;
  double t7467;
  double t7469;
  double t7471;
  double t7473;
  double t7536;
  double t7537;
  double t7538;
  double t7531;
  double t7548;
  double t7550;
  double t7552;
  double t7544;
  double t7545;
  double t7546;
  double t7591;
  double t7592;
  double t7596;
  double t7606;
  double t7607;
  double t7608;
  double t7599;
  double t7600;
  double t7601;
  double t7533;
  double t7539;
  double t7540;
  double t7547;
  double t7556;
  double t7558;
  double t7560;
  double t7565;
  double t7568;
  double t7574;
  double t7575;
  double t7577;
  double t7583;
  double t7584;
  double t7587;
  double t7594;
  double t7595;
  double t7597;
  double t7602;
  double t7609;
  double t7612;
  double t7613;
  double t7615;
  double t7617;
  double t7618;
  double t7619;
  double t7624;
  double t7626;
  double t7628;
  double t7629;
  double t7635;
  double t7638;
  double t7642;
  double t7646;
  double t7651;
  double t7654;
  double t7656;
  double t7643;
  double t7647;
  double t7648;
  double t7665;
  double t7667;
  double t7668;
  double t7660;
  double t7661;
  double t7663;
  double t7688;
  double t7689;
  double t7690;
  double t7698;
  double t7700;
  double t7701;
  double t7716;
  double t7718;
  double t7721;
  double t7711;
  double t7713;
  double t7714;
  double t7650;
  double t7657;
  double t7659;
  double t7664;
  double t7671;
  double t7672;
  double t7673;
  double t7674;
  double t7676;
  double t7677;
  double t7679;
  double t7680;
  double t7682;
  double t7683;
  double t7685;
  double t7691;
  double t7695;
  double t7710;
  double t7715;
  double t7723;
  double t7726;
  double t7727;
  double t7729;
  double t7732;
  double t7734;
  double t7735;
  double t7736;
  double t7737;
  double t7739;
  double t7743;
  double t7687;
  double t7744;
  double t7745;
  double t7746;
  double t7747;
  double t7750;
  t1135 = Cos(var1[16]);
  t350 = Cos(var1[17]);
  t486 = Sin(var1[16]);
  t1358 = Sin(var1[17]);
  t1721 = Cos(var1[15]);
  t490 = t350*t486;
  t1558 = t1135*t1358;
  t1691 = 0. + t490 + t1558;
  t109 = Sin(var1[15]);
  t1727 = t1135*t350;
  t1969 = -1.*t486*t1358;
  t1985 = 0. + t1727 + t1969;
  t1720 = -1.*t109*t1691;
  t2084 = t1721*t1985;
  t2112 = 0. + t1720 + t2084;
  t3127 = Sin(var1[13]);
  t2908 = t1721*t1691;
  t2912 = t109*t1985;
  t2995 = 0. + t2908 + t2912;
  t2539 = Cos(var1[13]);
  t3198 = Sin(var1[14]);
  t3449 = t3198*t2112;
  t3640 = 0. + t3449;
  t10 = Cos(var1[4]);
  t62 = Cos(var1[14]);
  t2398 = Sin(var1[4]);
  t2534 = Cos(var1[5]);
  t5164 = -1.*t1135*t350;
  t5416 = t486*t1358;
  t5648 = 0. + t5164 + t5416;
  t5676 = -1.*t109*t5648;
  t5765 = 0. + t2908 + t5676;
  t6071 = t109*t1691;
  t6097 = t1721*t5648;
  t6241 = 0. + t6071 + t6097;
  t6391 = t3198*t5765;
  t6459 = 0. + t6391;
  t4349 = Sin(var1[5]);
  t2143 = t62*t2112;
  t2149 = 0. + t2143;
  t2166 = -1.*t10*t2149;
  t3083 = t2539*t2995;
  t3764 = t3127*t3640;
  t3887 = 0. + t3083 + t3764;
  t3974 = t2534*t3887;
  t4174 = -1.*t3127*t2995;
  t4231 = t2539*t3640;
  t4314 = 0. + t4174 + t4231;
  t4487 = t4314*t4349;
  t4866 = 0. + t3974 + t4487;
  t4928 = -1.*t2398*t4866;
  t5018 = t2166 + t4928;
  t5831 = t62*t5765;
  t5962 = 0. + t5831;
  t6041 = -1.*t10*t5962;
  t6327 = t2539*t6241;
  t6514 = t3127*t6459;
  t6611 = 0. + t6327 + t6514;
  t6612 = t2534*t6611;
  t6617 = -1.*t3127*t6241;
  t6626 = t2539*t6459;
  t6662 = 0. + t6617 + t6626;
  t6676 = t6662*t4349;
  t6682 = 0. + t6612 + t6676;
  t6692 = -1.*t2398*t6682;
  t6702 = t6041 + t6692;
  t6953 = -1.*t62;
  t6954 = 0. + t6953;
  t7087 = -1.*t2534*t3887;
  t7094 = -1.*t4314*t4349;
  t7097 = t7087 + t7094;
  t7098 = var2[4]*t7097;
  t7099 = t2534*t4314;
  t7105 = -1.*t3887*t4349;
  t7118 = t7099 + t7105;
  t7125 = var2[3]*t10*t7118;
  t7127 = t7098 + t7125;
  t7136 = -1.*t2534*t6611;
  t7138 = -1.*t6662*t4349;
  t7140 = t7136 + t7138;
  t7142 = var2[4]*t7140;
  t7154 = t2534*t6662;
  t7155 = -1.*t6611*t4349;
  t7162 = t7154 + t7155;
  t7174 = var2[3]*t10*t7162;
  t7184 = t7142 + t7174;
  t6989 = t6954*t3127;
  t6995 = 0. + t6989;
  t7019 = t2539*t6954;
  t7027 = 0. + t7019;
  t7343 = t4174 + t4231;
  t7334 = -1.*t2539*t2995;
  t7338 = -1.*t3127*t3640;
  t7339 = t7334 + t7338;
  t7364 = t6617 + t6626;
  t7359 = -1.*t2539*t6241;
  t7360 = -1.*t3127*t6459;
  t7361 = t7359 + t7360;
  t7342 = t2534*t7339;
  t7344 = -1.*t7343*t4349;
  t7347 = t7342 + t7344;
  t7349 = var2[4]*t7347;
  t7351 = t2534*t7343;
  t7352 = t7339*t4349;
  t7353 = t7351 + t7352;
  t7354 = var2[3]*t10*t7353;
  t7357 = t7349 + t7354;
  t7362 = t2534*t7361;
  t7365 = -1.*t7364*t4349;
  t7368 = t7362 + t7365;
  t7374 = var2[4]*t7368;
  t7375 = t2534*t7364;
  t7376 = t7361*t4349;
  t7378 = t7375 + t7376;
  t7380 = var2[3]*t10*t7378;
  t7381 = t7374 + t7380;
  t7412 = -1.*var2[13]*t3198*t2112;
  t7414 = -1.*var2[5]*t3198*t2112;
  t7415 = t2539*t62*t2534*t2112;
  t7418 = -1.*t62*t3127*t2112*t4349;
  t7419 = t7415 + t7418;
  t7420 = var2[4]*t7419;
  t7421 = t3198*t2112*t2398;
  t7422 = t62*t2534*t3127*t2112;
  t7423 = t2539*t62*t2112*t4349;
  t7425 = t7422 + t7423;
  t7431 = t10*t7425;
  t7432 = t7421 + t7431;
  t7434 = var2[3]*t7432;
  t7435 = t7412 + t7414 + t7420 + t7434;
  t7439 = -1.*var2[13]*t3198*t5765;
  t7441 = -1.*var2[5]*t3198*t5765;
  t7444 = t2539*t62*t2534*t5765;
  t7447 = -1.*t62*t3127*t5765*t4349;
  t7453 = t7444 + t7447;
  t7454 = var2[4]*t7453;
  t7456 = t3198*t5765*t2398;
  t7460 = t62*t2534*t3127*t5765;
  t7463 = t2539*t62*t5765*t4349;
  t7466 = t7460 + t7463;
  t7467 = t10*t7466;
  t7469 = t7456 + t7467;
  t7471 = var2[3]*t7469;
  t7473 = t7439 + t7441 + t7454 + t7471;
  t7536 = -1.*t1721*t1691;
  t7537 = -1.*t109*t1985;
  t7538 = t7536 + t7537;
  t7531 = t1720 + t2084;
  t7548 = t2539*t7531;
  t7550 = t3127*t3198*t7538;
  t7552 = t7548 + t7550;
  t7544 = -1.*t3127*t7531;
  t7545 = t2539*t3198*t7538;
  t7546 = t7544 + t7545;
  t7591 = -1.*t1721*t5648;
  t7592 = t1720 + t7591;
  t7596 = t2908 + t5676;
  t7606 = t3127*t3198*t7592;
  t7607 = t2539*t7596;
  t7608 = t7606 + t7607;
  t7599 = t2539*t3198*t7592;
  t7600 = -1.*t3127*t7596;
  t7601 = t7599 + t7600;
  t7533 = var2[14]*t7531;
  t7539 = var2[13]*t62*t7538;
  t7540 = var2[5]*t62*t7538;
  t7547 = t2534*t7546;
  t7556 = -1.*t7552*t4349;
  t7558 = t7547 + t7556;
  t7560 = var2[4]*t7558;
  t7565 = -1.*t62*t7538*t2398;
  t7568 = t2534*t7552;
  t7574 = t7546*t4349;
  t7575 = t7568 + t7574;
  t7577 = t10*t7575;
  t7583 = t7565 + t7577;
  t7584 = var2[3]*t7583;
  t7587 = t7533 + t7539 + t7540 + t7560 + t7584;
  t7594 = var2[13]*t62*t7592;
  t7595 = var2[5]*t62*t7592;
  t7597 = var2[14]*t7596;
  t7602 = t2534*t7601;
  t7609 = -1.*t7608*t4349;
  t7612 = t7602 + t7609;
  t7613 = var2[4]*t7612;
  t7615 = -1.*t62*t7592*t2398;
  t7617 = t2534*t7608;
  t7618 = t7601*t4349;
  t7619 = t7617 + t7618;
  t7624 = t10*t7619;
  t7626 = t7615 + t7624;
  t7628 = var2[3]*t7626;
  t7629 = t7594 + t7595 + t7597 + t7613 + t7628;
  t7635 = -1.*t350*t486;
  t7638 = -1.*t1135*t1358;
  t7642 = t7635 + t7638;
  t7646 = t1727 + t1969;
  t7651 = t1721*t7642;
  t7654 = -1.*t109*t7646;
  t7656 = t7651 + t7654;
  t7643 = t109*t7642;
  t7647 = t1721*t7646;
  t7648 = t7643 + t7647;
  t7665 = t2539*t7648;
  t7667 = t3127*t3198*t7656;
  t7668 = t7665 + t7667;
  t7660 = -1.*t3127*t7648;
  t7661 = t2539*t3198*t7656;
  t7663 = t7660 + t7661;
  t7688 = t490 + t1558;
  t7689 = -1.*t109*t7688;
  t7690 = t7689 + t7647;
  t7698 = t1721*t7688;
  t7700 = t109*t7646;
  t7701 = t7698 + t7700;
  t7716 = t3127*t3198*t7690;
  t7718 = t2539*t7701;
  t7721 = t7716 + t7718;
  t7711 = t2539*t3198*t7690;
  t7713 = -1.*t3127*t7701;
  t7714 = t7711 + t7713;
  t7650 = var2[14]*t7648;
  t7657 = var2[13]*t62*t7656;
  t7659 = var2[5]*t62*t7656;
  t7664 = t2534*t7663;
  t7671 = -1.*t7668*t4349;
  t7672 = t7664 + t7671;
  t7673 = var2[4]*t7672;
  t7674 = -1.*t62*t7656*t2398;
  t7676 = t2534*t7668;
  t7677 = t7663*t4349;
  t7679 = t7676 + t7677;
  t7680 = t10*t7679;
  t7682 = t7674 + t7680;
  t7683 = var2[3]*t7682;
  t7685 = t7650 + t7657 + t7659 + t7673 + t7683;
  t7691 = var2[13]*t62*t7690;
  t7695 = var2[5]*t62*t7690;
  t7710 = var2[14]*t7701;
  t7715 = t2534*t7714;
  t7723 = -1.*t7721*t4349;
  t7726 = t7715 + t7723;
  t7727 = var2[4]*t7726;
  t7729 = -1.*t62*t7690*t2398;
  t7732 = t2534*t7721;
  t7734 = t7714*t4349;
  t7735 = t7732 + t7734;
  t7736 = t10*t7735;
  t7737 = t7729 + t7736;
  t7739 = var2[3]*t7737;
  t7743 = t7691 + t7695 + t7710 + t7727 + t7739;
  t7687 = 0.000334*t7685;
  t7744 = 0.00036*t7743;
  t7745 = t7687 + t7744;
  t7746 = 0.0341*t7685;
  t7747 = 0.000334*t7743;
  t7750 = t7746 + t7747;
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
  p_output1[12]=0.000334*t5018*var2[3] + 0.00036*t6702*var2[3];
  p_output1[13]=0.0341*t5018*var2[3] + 0.000334*t6702*var2[3];
  p_output1[14]=0.0341*(-1.*t10*(0. + t3198) - 1.*t2398*(0. + t2534*t6995 + t4349*t7027))*var2[3];
  p_output1[15]=0.000334*t7127 + 0.00036*t7184;
  p_output1[16]=0.0341*t7127 + 0.000334*t7184;
  p_output1[17]=0.0341*(t10*(-1.*t4349*t6995 + t2534*t7027)*var2[3] + (-1.*t2534*t6995 - 1.*t4349*t7027)*var2[4]);
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
  p_output1[39]=0.000334*t7357 + 0.00036*t7381;
  p_output1[40]=0.0341*t7357 + 0.000334*t7381;
  p_output1[41]=0.0341*(t10*(t2534*t2539*t6954 - 1.*t3127*t4349*t6954)*var2[3] + (-1.*t2534*t3127*t6954 - 1.*t2539*t4349*t6954)*var2[4]);
  p_output1[42]=0.000334*t7435 + 0.00036*t7473;
  p_output1[43]=0.0341*t7435 + 0.000334*t7473;
  p_output1[44]=0.0341*((t10*(t2534*t3127*t3198 + t2539*t3198*t4349) - 1.*t2398*t62)*var2[3] + (t2534*t2539*t3198 - 1.*t3127*t3198*t4349)*var2[4] + t62*var2[5] + t62*var2[13]);
  p_output1[45]=0.000334*t7587 + 0.00036*t7629;
  p_output1[46]=0.0341*t7587 + 0.000334*t7629;
  p_output1[47]=0;
  p_output1[48]=t7745;
  p_output1[49]=t7750;
  p_output1[50]=0;
  p_output1[51]=t7745;
  p_output1[52]=t7750;
  p_output1[53]=0;
  p_output1[54]=0;
  p_output1[55]=0;
  p_output1[56]=0;
  p_output1[57]=0;
  p_output1[58]=0;
  p_output1[59]=0;
}



void Jq_AMBody_RightShin_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
