/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:49 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "dJs_LeftRotationJoint_src.h"

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
  double t194;
  double t258;
  double t1348;
  double t1558;
  double t1384;
  double t1562;
  double t1671;
  double t1718;
  double t3402;
  double t3443;
  double t1820;
  double t1852;
  double t1857;
  double t1863;
  double t3517;
  double t3629;
  double t3700;
  double t4339;
  double t4362;
  double t4365;
  double t2049;
  double t2095;
  double t2231;
  double t2455;
  double t2583;
  double t2614;
  double t2666;
  double t2676;
  double t2882;
  double t2966;
  double t3157;
  double t3202;
  double t3208;
  double t3349;
  double t3378;
  double t5039;
  double t4854;
  double t4875;
  double t4877;
  double t5048;
  double t4694;
  double t4700;
  double t4731;
  double t5083;
  double t5084;
  double t5045;
  double t5049;
  double t5051;
  double t4049;
  double t4195;
  double t4231;
  double t5089;
  double t5090;
  double t5092;
  double t5102;
  double t5108;
  double t5110;
  double t5065;
  double t5066;
  double t5067;
  double t5137;
  double t5144;
  double t5145;
  double t5146;
  double t5121;
  double t5153;
  double t3879;
  double t3884;
  double t3909;
  double t5173;
  double t5185;
  double t5196;
  double t5344;
  double t5346;
  double t5347;
  double t5212;
  double t5214;
  double t5215;
  double t5227;
  double t5279;
  double t5156;
  double t5160;
  double t5480;
  double t5493;
  double t5495;
  double t5509;
  double t5512;
  double t5455;
  double t5458;
  double t5461;
  double t5594;
  double t5597;
  double t5608;
  double t5616;
  double t5617;
  double t5618;
  double t5620;
  double t5695;
  double t5707;
  double t5609;
  double t5611;
  double t5612;
  double t5094;
  double t5111;
  double t5436;
  double t5437;
  double t5445;
  double t5796;
  double t5284;
  double t5790;
  double t5791;
  double t5792;
  double t5794;
  double t5706;
  double t5708;
  double t5668;
  double t5670;
  double t5678;
  double t5828;
  double t5527;
  double t5534;
  double t5731;
  double t5732;
  t194 = Cos(var1[3]);
  t258 = Sin(var1[3]);
  t1348 = Cos(var1[4]);
  t1558 = Sin(var1[4]);
  t1384 = -1.*var2[2]*t1348*t258;
  t1562 = -1.*var2[1]*t1558;
  t1671 = -1.*var1[1]*t1348;
  t1718 = var1[2]*t258*t1558;
  t3402 = Cos(var1[5]);
  t3443 = Sin(var1[5]);
  t1820 = var2[2]*t194*t1348;
  t1852 = var2[0]*t1558;
  t1857 = var1[0]*t1348;
  t1863 = -1.*var1[2]*t194*t1558;
  t3517 = t194*t3402*t1558;
  t3629 = t258*t3443;
  t3700 = t3517 + t3629;
  t4339 = -1.*t194*t3402;
  t4362 = -1.*t258*t1558*t3443;
  t4365 = t4339 + t4362;
  t2049 = -1.*var2[1]*t194*t1348;
  t2095 = var2[0]*t1348*t258;
  t2231 = var1[0]*t194*t1348;
  t2455 = var1[1]*t1348*t258;
  t2583 = t2231 + t2455;
  t2614 = var2[3]*t2583;
  t2666 = var1[1]*t194*t1558;
  t2676 = -1.*var1[0]*t258*t1558;
  t2882 = -1.*var2[3]*t1348*t258;
  t2966 = -1.*var2[4]*t194*t1558;
  t3157 = t2882 + t2966;
  t3202 = var2[3]*t194*t1348;
  t3208 = -1.*var2[4]*t258*t1558;
  t3349 = t3202 + t3208;
  t3378 = -1.*var2[4]*t1348;
  t5039 = Cos(var1[6]);
  t4854 = t3402*t258*t1558;
  t4875 = -1.*t194*t3443;
  t4877 = t4854 + t4875;
  t5048 = Sin(var1[6]);
  t4694 = -1.*t3402*t258;
  t4700 = t194*t1558*t3443;
  t4731 = t4694 + t4700;
  t5083 = -1.*t5039;
  t5084 = 1. + t5083;
  t5045 = t1348*t3402*t5039;
  t5049 = -1.*t1348*t3443*t5048;
  t5051 = t5045 + t5049;
  t4049 = -1.*t3402*t258*t1558;
  t4195 = t194*t3443;
  t4231 = t4049 + t4195;
  t5089 = 0.07996*t5084;
  t5090 = -0.135*t5048;
  t5092 = 0. + t5089 + t5090;
  t5102 = 0.135*t5084;
  t5108 = 0.07996*t5048;
  t5110 = 0. + t5102 + t5108;
  t5065 = t194*t3402;
  t5066 = t258*t1558*t3443;
  t5067 = t5065 + t5066;
  t5137 = -1.*var1[2];
  t5144 = -1.*t1348*t3402*t5092;
  t5145 = -1.*t1348*t3443*t5110;
  t5146 = 0. + t5137 + t5144 + t5145;
  t5121 = t5039*t4365;
  t5153 = t5039*t3700;
  t3879 = t3402*t258;
  t3884 = -1.*t194*t1558*t3443;
  t3909 = t3879 + t3884;
  t5173 = t4877*t5092;
  t5185 = t5067*t5110;
  t5196 = 0. + var1[1] + t5173 + t5185;
  t5344 = t5039*t4877;
  t5346 = -1.*t5067*t5048;
  t5347 = t5344 + t5346;
  t5212 = -1.*t1348*t5039*t3443;
  t5214 = -1.*t1348*t3402*t5048;
  t5215 = t5212 + t5214;
  t5227 = t5196*t5215;
  t5279 = -1.*t4877*t5048;
  t5156 = -1.*t4731*t5048;
  t5160 = t5153 + t5156;
  t5480 = -0.135*t5039;
  t5493 = t5480 + t5108;
  t5495 = 0.07996*t5039;
  t5509 = 0.135*t5048;
  t5512 = t5495 + t5509;
  t5455 = -1.*t3402*t5039*t1558;
  t5458 = t1558*t3443*t5048;
  t5461 = t5455 + t5458;
  t5594 = t1348*t3402*t5092;
  t5597 = t1348*t3443*t5110;
  t5608 = 0. + var1[2] + t5594 + t5597;
  t5616 = -1.*var1[0];
  t5617 = -1.*t3700*t5092;
  t5618 = -1.*t4731*t5110;
  t5620 = 0. + t5616 + t5617 + t5618;
  t5695 = t5620*t5215;
  t5707 = -1.*t3700*t5048;
  t5609 = t194*t1348*t3402*t5039;
  t5611 = -1.*t194*t1348*t3443*t5048;
  t5612 = t5609 + t5611;
  t5094 = t3700*t5092;
  t5111 = t4731*t5110;
  t5436 = t1348*t3402*t5039*t258;
  t5437 = -1.*t1348*t258*t3443*t5048;
  t5445 = t5436 + t5437;
  t5796 = 0. + var1[0] + t5094 + t5111;
  t5284 = t5121 + t5279;
  t5790 = -1.*var1[1];
  t5791 = -1.*t4877*t5092;
  t5792 = -1.*t5067*t5110;
  t5794 = 0. + t5790 + t5791 + t5792;
  t5706 = t5039*t3909;
  t5708 = t5706 + t5707;
  t5668 = t5039*t4231;
  t5670 = -1.*t4365*t5048;
  t5678 = t5668 + t5670;
  t5828 = 0.08055*t5051;
  t5527 = -1.*t5039*t5067;
  t5534 = t5527 + t5279;
  t5731 = -1.*t5039*t4731;
  t5732 = t5731 + t5707;
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
  p_output1[24]=-1.*t194*var2[2] + t258*var1[2]*var2[3];
  p_output1[25]=-1.*t258*var2[2] - 1.*t194*var1[2]*var2[3];
  p_output1[26]=t194*var2[0] + t258*var2[1] + (-1.*t258*var1[0] + t194*var1[1])*var2[3];
  p_output1[27]=-1.*t194*var2[3];
  p_output1[28]=-1.*t258*var2[3];
  p_output1[29]=0;
  p_output1[30]=t1384 + t1562 - 1.*t1348*t194*var1[2]*var2[3] + (t1671 + t1718)*var2[4];
  p_output1[31]=t1820 + t1852 - 1.*t1348*t258*var1[2]*var2[3] + (t1857 + t1863)*var2[4];
  p_output1[32]=t2049 + t2095 + t2614 + (t2666 + t2676)*var2[4];
  p_output1[33]=t3157;
  p_output1[34]=t3349;
  p_output1[35]=t3378;
  p_output1[36]=t1384 + t1562 + (-0.135*t4231 + 0.07996*t4365 - 1.*t1348*t194*var1[2])*var2[3] + (t1671 + t1718 - 0.135*t1348*t194*t3402 + 0.07996*t1348*t194*t3443)*var2[4] + (0.07996*t3700 - 0.135*t3909)*var2[5];
  p_output1[37]=t1820 + t1852 + (-0.135*t3700 + 0.07996*t4731 - 1.*t1348*t258*var1[2])*var2[3] + (t1857 + t1863 - 0.135*t1348*t258*t3402 + 0.07996*t1348*t258*t3443)*var2[4] + (-0.135*t4365 + 0.07996*t4877)*var2[5];
  p_output1[38]=t2049 + t2095 + t2614 + (t2666 + t2676 + 0.135*t1558*t3402 - 0.07996*t1558*t3443)*var2[4] + (0.07996*t1348*t3402 + 0.135*t1348*t3443)*var2[5];
  p_output1[39]=t3157;
  p_output1[40]=t3349;
  p_output1[41]=t3378;
  p_output1[42]=t5051*var2[1] + (-1.*t4877*t5039 + t5048*t5067)*var2[2] + (-0.135*t1348*t258 + t5051*(t5094 + t5111) + 0.08055*(t4231*t5048 + t5121) + t5146*t5160)*var2[3] + (-0.135*t1558*t194 + 0.08055*(t1348*t194*t3443*t5039 + t1348*t194*t3402*t5048) + t5051*(t1348*t258*t3402*t5092 + t1348*t258*t3443*t5110) + (t1558*t3402*t5092 + t1558*t3443*t5110)*t5347 + t5146*t5445 + t5196*t5461)*var2[4] + (t5051*(t4365*t5092 + t4877*t5110) + 0.08055*(t3909*t5048 + t5153) + t5227 + t5146*t5284 + (t1348*t3443*t5092 - 1.*t1348*t3402*t5110)*t5347)*var2[5] + (0.08055*t5160 + t5227 + t5347*(-1.*t1348*t3402*t5493 - 1.*t1348*t3443*t5512) + t5051*(t4877*t5493 + t5067*t5512) + t5146*t5534)*var2[6];
  p_output1[43]=(-1.*t1348*t3402*t5039 + t1348*t3443*t5048)*var2[0] + t5160*var2[2] + (0.135*t1348*t194 + 0.08055*(t4731*t5039 + t3700*t5048) + t5051*(-1.*t4231*t5092 - 1.*t4365*t5110) + t5608*t5678)*var2[3] + (-0.135*t1558*t258 + 0.08055*(t1348*t258*t3443*t5039 + t1348*t258*t3402*t5048) + t5051*(-1.*t1348*t194*t3402*t5092 - 1.*t1348*t194*t3443*t5110) + (-1.*t1558*t3402*t5092 - 1.*t1558*t3443*t5110)*t5160 + t5608*t5612 + t5461*t5620)*var2[4] + (t5051*(-1.*t3909*t5092 - 1.*t3700*t5110) + (-1.*t1348*t3443*t5092 + t1348*t3402*t5110)*t5160 + 0.08055*(t4365*t5048 + t5344) + t5695 + t5608*t5708)*var2[5] + (0.08055*t5347 + t5160*(t1348*t3402*t5493 + t1348*t3443*t5512) + t5051*(-1.*t3700*t5493 - 1.*t4731*t5512) + t5695 + t5608*t5732)*var2[6];
  p_output1[44]=t5347*var2[0] + (-1.*t3700*t5039 + t4731*t5048)*var2[1] + ((t4231*t5092 + t4365*t5110)*t5347 + t5160*(t5617 + t5618) + t5678*t5794 + t5160*t5796)*var2[3] + (-0.135*t1348 + 0.08055*(-1.*t1558*t3443*t5039 - 1.*t1558*t3402*t5048) + (-1.*t1348*t258*t3402*t5092 - 1.*t1348*t258*t3443*t5110)*t5160 + (t1348*t194*t3402*t5092 + t1348*t194*t3443*t5110)*t5347 + t5612*t5794 + t5445*t5796)*var2[4] + ((-1.*t4365*t5092 - 1.*t4877*t5110)*t5160 + (t3909*t5092 + t3700*t5110)*t5347 + t5708*t5794 + t5284*t5796 + t5828)*var2[5] + (t5347*(t3700*t5493 + t4731*t5512) + t5160*(-1.*t4877*t5493 - 1.*t5067*t5512) + t5732*t5794 + t5534*t5796 + t5828)*var2[6];
  p_output1[45]=t5678*var2[3] + t5612*var2[4] + t5708*var2[5] + t5732*var2[6];
  p_output1[46]=t5160*var2[3] + t5445*var2[4] + t5284*var2[5] + t5534*var2[6];
  p_output1[47]=t5461*var2[4] + t5215*var2[5] + t5215*var2[6];
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



void dJs_LeftRotationJoint_src(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}
