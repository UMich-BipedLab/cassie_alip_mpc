/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:21:11 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_RightRotationJoint_src.h"

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
  double t22;
  double t374;
  double t969;
  double t1128;
  double t1086;
  double t1144;
  double t1168;
  double t1173;
  double t2373;
  double t2405;
  double t1296;
  double t1416;
  double t1485;
  double t1654;
  double t2577;
  double t2596;
  double t2628;
  double t2904;
  double t2937;
  double t2943;
  double t1793;
  double t1801;
  double t1885;
  double t1894;
  double t2035;
  double t2051;
  double t2055;
  double t2066;
  double t2207;
  double t2215;
  double t2216;
  double t2278;
  double t2290;
  double t2304;
  double t2311;
  double t3765;
  double t3317;
  double t3370;
  double t3459;
  double t3792;
  double t3789;
  double t3795;
  double t3816;
  double t4020;
  double t4048;
  double t3180;
  double t3190;
  double t3218;
  double t4053;
  double t4167;
  double t4171;
  double t4258;
  double t4262;
  double t4293;
  double t2838;
  double t2845;
  double t2868;
  double t4448;
  double t4449;
  double t4454;
  double t4405;
  double t4430;
  double t4432;
  double t4436;
  double t3888;
  double t3894;
  double t3939;
  double t4628;
  double t4639;
  double t4652;
  double t4667;
  double t4669;
  double t2701;
  double t2704;
  double t2711;
  double t4545;
  double t4482;
  double t4698;
  double t4706;
  double t4714;
  double t4730;
  double t4743;
  double t4745;
  double t4759;
  double t4837;
  double t4889;
  double t4890;
  double t5371;
  double t5379;
  double t5382;
  double t5676;
  double t5721;
  double t5770;
  double t5821;
  double t5824;
  double t5848;
  double t5849;
  double t6242;
  double t6412;
  double t5354;
  double t5358;
  double t5363;
  double t4239;
  double t4301;
  double t5772;
  double t5798;
  double t5799;
  double t7236;
  double t5045;
  double t6249;
  double t6270;
  double t7308;
  double t7309;
  double t7317;
  double t7395;
  double t7700;
  double t4592;
  double t4603;
  double t6609;
  double t6659;
  double t6150;
  double t6177;
  double t6189;
  t22 = Cos(var1[3]);
  t374 = Sin(var1[3]);
  t969 = Cos(var1[4]);
  t1128 = Sin(var1[4]);
  t1086 = -1.*var2[2]*t969*t374;
  t1144 = -1.*var2[1]*t1128;
  t1168 = -1.*var1[1]*t969;
  t1173 = var1[2]*t374*t1128;
  t2373 = Cos(var1[5]);
  t2405 = Sin(var1[5]);
  t1296 = var2[2]*t22*t969;
  t1416 = var2[0]*t1128;
  t1485 = var1[0]*t969;
  t1654 = -1.*var1[2]*t22*t1128;
  t2577 = t22*t2373*t1128;
  t2596 = t374*t2405;
  t2628 = t2577 + t2596;
  t2904 = -1.*t22*t2373;
  t2937 = -1.*t374*t1128*t2405;
  t2943 = t2904 + t2937;
  t1793 = -1.*var2[1]*t22*t969;
  t1801 = var2[0]*t969*t374;
  t1885 = var1[0]*t22*t969;
  t1894 = var1[1]*t969*t374;
  t2035 = t1885 + t1894;
  t2051 = var2[3]*t2035;
  t2055 = var1[1]*t22*t1128;
  t2066 = -1.*var1[0]*t374*t1128;
  t2207 = -1.*var2[3]*t969*t374;
  t2215 = -1.*var2[4]*t22*t1128;
  t2216 = t2207 + t2215;
  t2278 = var2[3]*t22*t969;
  t2290 = -1.*var2[4]*t374*t1128;
  t2304 = t2278 + t2290;
  t2311 = -1.*var2[4]*t969;
  t3765 = Cos(var1[13]);
  t3317 = t2373*t374*t1128;
  t3370 = -1.*t22*t2405;
  t3459 = t3317 + t3370;
  t3792 = Sin(var1[13]);
  t3789 = t3765*t969*t2373;
  t3795 = -1.*t969*t3792*t2405;
  t3816 = t3789 + t3795;
  t4020 = -1.*t3765;
  t4048 = 1. + t4020;
  t3180 = -1.*t2373*t374;
  t3190 = t22*t1128*t2405;
  t3218 = t3180 + t3190;
  t4053 = 0.07996*t4048;
  t4167 = 0.135*t3792;
  t4171 = 0. + t4053 + t4167;
  t4258 = -0.135*t4048;
  t4262 = 0.07996*t3792;
  t4293 = 0. + t4258 + t4262;
  t2838 = -1.*t2373*t374*t1128;
  t2845 = t22*t2405;
  t2868 = t2838 + t2845;
  t4448 = t3765*t2628;
  t4449 = -1.*t3792*t3218;
  t4454 = t4448 + t4449;
  t4405 = -1.*var1[2];
  t4430 = -1.*t969*t2373*t4171;
  t4432 = -1.*t969*t4293*t2405;
  t4436 = 0. + t4405 + t4430 + t4432;
  t3888 = t22*t2373;
  t3894 = t374*t1128*t2405;
  t3939 = t3888 + t3894;
  t4628 = 0.135*t3765;
  t4639 = t4628 + t4262;
  t4652 = 0.07996*t3765;
  t4667 = -0.135*t3792;
  t4669 = t4652 + t4667;
  t2701 = t2373*t374;
  t2704 = -1.*t22*t1128*t2405;
  t2711 = t2701 + t2704;
  t4545 = -1.*t3792*t3459;
  t4482 = t3765*t2943;
  t4698 = -1.*t969*t2373*t3792;
  t4706 = -1.*t3765*t969*t2405;
  t4714 = t4698 + t4706;
  t4730 = t4171*t3459;
  t4743 = t4293*t3939;
  t4745 = 0. + var1[1] + t4730 + t4743;
  t4759 = t4714*t4745;
  t4837 = t3765*t3459;
  t4889 = -1.*t3792*t3939;
  t4890 = t4837 + t4889;
  t5371 = -1.*t3765*t2373*t1128;
  t5379 = t3792*t1128*t2405;
  t5382 = t5371 + t5379;
  t5676 = t969*t2373*t4171;
  t5721 = t969*t4293*t2405;
  t5770 = 0. + var1[2] + t5676 + t5721;
  t5821 = -1.*var1[0];
  t5824 = -1.*t4171*t2628;
  t5848 = -1.*t4293*t3218;
  t5849 = 0. + t5821 + t5824 + t5848;
  t6242 = -1.*t3792*t2628;
  t6412 = t4714*t5849;
  t5354 = t3765*t969*t2373*t374;
  t5358 = -1.*t969*t3792*t374*t2405;
  t5363 = t5354 + t5358;
  t4239 = t4171*t2628;
  t4301 = t4293*t3218;
  t5772 = t3765*t22*t969*t2373;
  t5798 = -1.*t22*t969*t3792*t2405;
  t5799 = t5772 + t5798;
  t7236 = 0. + var1[0] + t4239 + t4301;
  t5045 = t4545 + t4482;
  t6249 = t3765*t2711;
  t6270 = t6242 + t6249;
  t7308 = -1.*var1[1];
  t7309 = -1.*t4171*t3459;
  t7317 = -1.*t4293*t3939;
  t7395 = 0. + t7308 + t7309 + t7317;
  t7700 = 0.08055*t3816;
  t4592 = -1.*t3765*t3939;
  t4603 = t4545 + t4592;
  t6609 = -1.*t3765*t3218;
  t6659 = t6242 + t6609;
  t6150 = t3765*t2868;
  t6177 = -1.*t3792*t2943;
  t6189 = t6150 + t6177;
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
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=var2[1];
  p_output1[19]=-1.*var2[0];
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=0;
  p_output1[23]=0;
  p_output1[24]=-1.*t22*var2[2] + t374*var1[2]*var2[3];
  p_output1[25]=-1.*t374*var2[2] - 1.*t22*var1[2]*var2[3];
  p_output1[26]=t22*var2[0] + t374*var2[1] + (-1.*t374*var1[0] + t22*var1[1])*var2[3];
  p_output1[27]=-1.*t22*var2[3];
  p_output1[28]=-1.*t374*var2[3];
  p_output1[29]=0;
  p_output1[30]=t1086 + t1144 - 1.*t22*t969*var1[2]*var2[3] + (t1168 + t1173)*var2[4];
  p_output1[31]=t1296 + t1416 - 1.*t374*t969*var1[2]*var2[3] + (t1485 + t1654)*var2[4];
  p_output1[32]=t1793 + t1801 + t2051 + (t2055 + t2066)*var2[4];
  p_output1[33]=t2216;
  p_output1[34]=t2304;
  p_output1[35]=t2311;
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
  p_output1[78]=t1086 + t1144 + (0.135*t2868 + 0.07996*t2943 - 1.*t22*t969*var1[2])*var2[3] + (t1168 + t1173 + 0.135*t22*t2373*t969 + 0.07996*t22*t2405*t969)*var2[4] + (0.07996*t2628 + 0.135*t2711)*var2[5];
  p_output1[79]=t1296 + t1416 + (0.135*t2628 + 0.07996*t3218 - 1.*t374*t969*var1[2])*var2[3] + (t1485 + t1654 + 0.135*t2373*t374*t969 + 0.07996*t2405*t374*t969)*var2[4] + (0.135*t2943 + 0.07996*t3459)*var2[5];
  p_output1[80]=t1793 + t1801 + t2051 + (t2055 + t2066 - 0.135*t1128*t2373 - 0.07996*t1128*t2405)*var2[4] + (0.07996*t2373*t969 - 0.135*t2405*t969)*var2[5];
  p_output1[81]=t2216;
  p_output1[82]=t2304;
  p_output1[83]=t2311;
  p_output1[84]=t3816*var2[1] + (-1.*t3459*t3765 + t3792*t3939)*var2[2] + (t3816*(t4239 + t4301) + t4436*t4454 + 0.08055*(t2868*t3792 + t4482) + 0.135*t374*t969)*var2[3] + (0.135*t1128*t22 + (t1128*t2373*t4171 + t1128*t2405*t4293)*t4890 + t4436*t5363 + t4745*t5382 + 0.08055*(t22*t2405*t3765*t969 + t22*t2373*t3792*t969) + t3816*(t2373*t374*t4171*t969 + t2405*t374*t4293*t969))*var2[4] + (t3816*(t2943*t4171 + t3459*t4293) + 0.08055*(t2711*t3792 + t4448) + t4759 + t4436*t5045 + t4890*(t2405*t4171*t969 - 1.*t2373*t4293*t969))*var2[5] + (0.08055*t4454 + t4436*t4603 + t3816*(t3459*t4639 + t3939*t4669) + t4759 + t4890*(-1.*t2373*t4639*t969 - 1.*t2405*t4669*t969))*var2[13];
  p_output1[85]=(-1.*t2373*t3765*t969 + t2405*t3792*t969)*var2[0] + t4454*var2[2] + (0.08055*(t3218*t3765 + t2628*t3792) + t3816*(-1.*t2868*t4171 - 1.*t2943*t4293) + t5770*t6189 - 0.135*t22*t969)*var2[3] + (0.135*t1128*t374 + (-1.*t1128*t2373*t4171 - 1.*t1128*t2405*t4293)*t4454 + t5770*t5799 + t5382*t5849 + 0.08055*(t2405*t374*t3765*t969 + t2373*t374*t3792*t969) + t3816*(-1.*t22*t2373*t4171*t969 - 1.*t22*t2405*t4293*t969))*var2[4] + (t3816*(-1.*t2711*t4171 - 1.*t2628*t4293) + 0.08055*(t2943*t3792 + t4837) + t5770*t6270 + t6412 + t4454*(-1.*t2405*t4171*t969 + t2373*t4293*t969))*var2[5] + (t3816*(-1.*t2628*t4639 - 1.*t3218*t4669) + 0.08055*t4890 + t6412 + t5770*t6659 + t4454*(t2373*t4639*t969 + t2405*t4669*t969))*var2[13];
  p_output1[86]=t4890*var2[0] + (-1.*t2628*t3765 + t3218*t3792)*var2[1] + ((t2868*t4171 + t2943*t4293)*t4890 + t4454*(t5824 + t5848) + t4454*t7236 + t6189*t7395)*var2[3] + (0.08055*(-1.*t1128*t2405*t3765 - 1.*t1128*t2373*t3792) + t5363*t7236 + t5799*t7395 + 0.135*t969 + t4890*(t22*t2373*t4171*t969 + t22*t2405*t4293*t969) + t4454*(-1.*t2373*t374*t4171*t969 - 1.*t2405*t374*t4293*t969))*var2[4] + ((-1.*t2943*t4171 - 1.*t3459*t4293)*t4454 + (t2711*t4171 + t2628*t4293)*t4890 + t5045*t7236 + t6270*t7395 + t7700)*var2[5] + (t4454*(-1.*t3459*t4639 - 1.*t3939*t4669) + (t2628*t4639 + t3218*t4669)*t4890 + t4603*t7236 + t6659*t7395 + t7700)*var2[13];
  p_output1[87]=t6189*var2[3] + t5799*var2[4] + t6270*var2[5] + t6659*var2[13];
  p_output1[88]=t4454*var2[3] + t5363*var2[4] + t5045*var2[5] + t4603*var2[13];
  p_output1[89]=t5382*var2[4] + t4714*var2[5] + t4714*var2[13];
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



void dJs_RightRotationJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
