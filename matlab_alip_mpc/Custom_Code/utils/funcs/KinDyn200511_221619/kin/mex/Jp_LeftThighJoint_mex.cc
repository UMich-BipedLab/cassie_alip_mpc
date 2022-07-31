/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:18:57 GMT-04:00
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
  double t1797;
  double t839;
  double t1076;
  double t1186;
  double t1821;
  double t2230;
  double t2561;
  double t2664;
  double t2787;
  double t3239;
  double t3265;
  double t3357;
  double t1296;
  double t2100;
  double t2127;
  double t4911;
  double t5220;
  double t5543;
  double t5726;
  double t4723;
  double t4783;
  double t4818;
  double t5793;
  double t5997;
  double t5998;
  double t5999;
  double t6015;
  double t5991;
  double t5994;
  double t5995;
  double t6029;
  double t6032;
  double t6034;
  double t2681;
  double t2943;
  double t2945;
  double t3681;
  double t3997;
  double t4399;
  double t6097;
  double t6098;
  double t6099;
  double t6073;
  double t6077;
  double t6081;
  double t5706;
  double t5728;
  double t5729;
  double t5826;
  double t5856;
  double t5930;
  double t6101;
  double t6103;
  double t6104;
  double t6013;
  double t6021;
  double t6027;
  double t6047;
  double t6049;
  double t6051;
  double t6114;
  double t6115;
  double t6118;
  double t6120;
  double t6121;
  double t6122;
  double t6143;
  double t6145;
  double t6146;
  double t6158;
  double t6159;
  double t6160;
  double t6162;
  double t6163;
  double t6164;
  double t6181;
  double t6182;
  double t6183;
  double t6193;
  double t6194;
  double t6195;
  double t6197;
  double t6198;
  double t6199;
  double t6219;
  double t6220;
  double t6222;
  double t6231;
  double t6232;
  double t6233;
  double t6235;
  double t6236;
  double t6237;
  double t6252;
  double t6253;
  double t6254;
  double t6257;
  double t6258;
  double t6262;
  double t6263;
  double t6264;
  double t6278;
  double t6279;
  double t6280;
  double t6282;
  double t6284;
  double t6285;
  double t6292;
  double t6294;
  double t6309;
  double t6310;
  double t6311;
  double t6315;
  double t6316;
  double t6317;
  double t6342;
  double t6343;
  double t6330;
  double t6331;
  double t6334;
  double t6335;
  double t6336;
  double t6356;
  double t6357;
  double t6359;
  double t6363;
  double t6364;
  double t6368;
  double t6369;
  double t6312;
  double t6313;
  double t6314;
  double t6318;
  double t6320;
  double t6321;
  double t6322;
  double t6324;
  double t6325;
  double t6326;
  double t6327;
  double t6328;
  double t6109;
  double t6110;
  double t6111;
  double t6383;
  double t6384;
  double t6385;
  double t6387;
  double t6388;
  double t6401;
  double t6403;
  double t6404;
  double t6407;
  double t6408;
  double t6409;
  double t6429;
  double t6430;
  double t6431;
  double t6433;
  double t6434;
  double t6436;
  double t6135;
  double t6136;
  double t6137;
  double t6451;
  double t6452;
  double t6453;
  double t6456;
  double t6457;
  double t6469;
  double t6470;
  double t6471;
  double t6490;
  double t6491;
  double t6492;
  t1797 = Cos(var1[3]);
  t839 = Cos(var1[5]);
  t1076 = Sin(var1[3]);
  t1186 = Sin(var1[4]);
  t1821 = Sin(var1[5]);
  t2230 = Cos(var1[6]);
  t2561 = -1.*t2230;
  t2664 = 1. + t2561;
  t2787 = Sin(var1[6]);
  t3239 = -1.*t1797*t839;
  t3265 = -1.*t1076*t1186*t1821;
  t3357 = t3239 + t3265;
  t1296 = -1.*t839*t1076*t1186;
  t2100 = t1797*t1821;
  t2127 = t1296 + t2100;
  t4911 = Cos(var1[7]);
  t5220 = -1.*t4911;
  t5543 = 1. + t5220;
  t5726 = Sin(var1[7]);
  t4723 = t2230*t3357;
  t4783 = t2127*t2787;
  t4818 = t4723 + t4783;
  t5793 = Cos(var1[4]);
  t5997 = Cos(var1[8]);
  t5998 = -1.*t5997;
  t5999 = 1. + t5998;
  t6015 = Sin(var1[8]);
  t5991 = -1.*t5793*t4911*t1076;
  t5994 = t4818*t5726;
  t5995 = t5991 + t5994;
  t6029 = t2230*t2127;
  t6032 = -1.*t3357*t2787;
  t6034 = t6029 + t6032;
  t2681 = 0.07996*t2664;
  t2943 = -0.135*t2787;
  t2945 = 0. + t2681 + t2943;
  t3681 = 0.135*t2664;
  t3997 = 0.07996*t2787;
  t4399 = 0. + t3681 + t3997;
  t6097 = -1.*t839*t1076;
  t6098 = t1797*t1186*t1821;
  t6099 = t6097 + t6098;
  t6073 = t1797*t839*t1186;
  t6077 = t1076*t1821;
  t6081 = t6073 + t6077;
  t5706 = 0.135*t5543;
  t5728 = 0.08055*t5726;
  t5729 = 0. + t5706 + t5728;
  t5826 = -0.08055*t5543;
  t5856 = 0.135*t5726;
  t5930 = 0. + t5826 + t5856;
  t6101 = t2230*t6099;
  t6103 = t6081*t2787;
  t6104 = t6101 + t6103;
  t6013 = -0.08055*t5999;
  t6021 = -0.01004*t6015;
  t6027 = 0. + t6013 + t6021;
  t6047 = -0.01004*t5999;
  t6049 = 0.08055*t6015;
  t6051 = 0. + t6047 + t6049;
  t6114 = t1797*t5793*t4911;
  t6115 = t6104*t5726;
  t6118 = t6114 + t6115;
  t6120 = t2230*t6081;
  t6121 = -1.*t6099*t2787;
  t6122 = t6120 + t6121;
  t6143 = t1797*t5793*t2230*t1821;
  t6145 = t1797*t5793*t839*t2787;
  t6146 = t6143 + t6145;
  t6158 = -1.*t1797*t4911*t1186;
  t6159 = t6146*t5726;
  t6160 = t6158 + t6159;
  t6162 = t1797*t5793*t839*t2230;
  t6163 = -1.*t1797*t5793*t1821*t2787;
  t6164 = t6162 + t6163;
  t6181 = t5793*t2230*t1076*t1821;
  t6182 = t5793*t839*t1076*t2787;
  t6183 = t6181 + t6182;
  t6193 = -1.*t4911*t1076*t1186;
  t6194 = t6183*t5726;
  t6195 = t6193 + t6194;
  t6197 = t5793*t839*t2230*t1076;
  t6198 = -1.*t5793*t1076*t1821*t2787;
  t6199 = t6197 + t6198;
  t6219 = -1.*t2230*t1186*t1821;
  t6220 = -1.*t839*t1186*t2787;
  t6222 = t6219 + t6220;
  t6231 = -1.*t5793*t4911;
  t6232 = t6222*t5726;
  t6233 = t6231 + t6232;
  t6235 = -1.*t839*t2230*t1186;
  t6236 = t1186*t1821*t2787;
  t6237 = t6235 + t6236;
  t6252 = t839*t1076;
  t6253 = -1.*t1797*t1186*t1821;
  t6254 = t6252 + t6253;
  t6257 = t6254*t2787;
  t6258 = t6120 + t6257;
  t6262 = t2230*t6254;
  t6263 = -1.*t6081*t2787;
  t6264 = t6262 + t6263;
  t6278 = t839*t1076*t1186;
  t6279 = -1.*t1797*t1821;
  t6280 = t6278 + t6279;
  t6282 = t2230*t6280;
  t6284 = t3357*t2787;
  t6285 = t6282 + t6284;
  t6292 = -1.*t6280*t2787;
  t6294 = t4723 + t6292;
  t6309 = t5793*t839*t2230;
  t6310 = -1.*t5793*t1821*t2787;
  t6311 = t6309 + t6310;
  t6315 = -1.*t5793*t2230*t1821;
  t6316 = -1.*t5793*t839*t2787;
  t6317 = t6315 + t6316;
  t6342 = -1.*t2230*t6099;
  t6343 = t6342 + t6263;
  t6330 = -0.135*t2230;
  t6331 = t6330 + t3997;
  t6334 = 0.07996*t2230;
  t6335 = 0.135*t2787;
  t6336 = t6334 + t6335;
  t6356 = t1797*t839;
  t6357 = t1076*t1186*t1821;
  t6359 = t6356 + t6357;
  t6363 = -1.*t6359*t2787;
  t6364 = t6282 + t6363;
  t6368 = -1.*t2230*t6359;
  t6369 = t6368 + t6292;
  t6312 = 0.135*t4911*t6311;
  t6313 = t6311*t5729;
  t6314 = t6311*t5726*t6027;
  t6318 = t6317*t6051;
  t6320 = t5997*t6311*t5726;
  t6321 = t6317*t6015;
  t6322 = t6320 + t6321;
  t6324 = -0.08055*t6322;
  t6325 = t5997*t6317;
  t6326 = -1.*t6311*t5726*t6015;
  t6327 = t6325 + t6326;
  t6328 = -0.01004*t6327;
  t6109 = t4911*t6104;
  t6110 = -1.*t1797*t5793*t5726;
  t6111 = t6109 + t6110;
  t6383 = 0.135*t4911;
  t6384 = -0.08055*t5726;
  t6385 = t6383 + t6384;
  t6387 = 0.08055*t4911;
  t6388 = t6387 + t5856;
  t6401 = t2230*t6359;
  t6403 = t6280*t2787;
  t6404 = t6401 + t6403;
  t6407 = t4911*t6404;
  t6408 = -1.*t5793*t1076*t5726;
  t6409 = t6407 + t6408;
  t6429 = t5793*t2230*t1821;
  t6430 = t5793*t839*t2787;
  t6431 = t6429 + t6430;
  t6433 = t4911*t6431;
  t6434 = t1186*t5726;
  t6436 = t6433 + t6434;
  t6135 = t5997*t6122;
  t6136 = -1.*t6118*t6015;
  t6137 = t6135 + t6136;
  t6451 = -0.01004*t5997;
  t6452 = -0.08055*t6015;
  t6453 = t6451 + t6452;
  t6456 = 0.08055*t5997;
  t6457 = t6456 + t6021;
  t6469 = t5793*t4911*t1076;
  t6470 = t6404*t5726;
  t6471 = t6469 + t6470;
  t6490 = -1.*t4911*t1186;
  t6491 = t6431*t5726;
  t6492 = t6490 + t6491;
  p_output1[0]=1.;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=1.;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=1.;
  p_output1[9]=t2127*t2945 + t3357*t4399 + t4818*t5729 + 0.135*(t4818*t4911 + t1076*t5726*t5793) - 1.*t1076*t5793*t5930 + t5995*t6027 - 0.01004*(-1.*t5995*t6015 + t5997*t6034) - 0.08055*(t5995*t5997 + t6015*t6034) + t6034*t6051;
  p_output1[10]=t1797*t5793*t5930 + t2945*t6081 + t4399*t6099 + t5729*t6104 + 0.135*t6111 + t6027*t6118 + t6051*t6122 - 0.08055*(t5997*t6118 + t6015*t6122) - 0.01004*t6137;
  p_output1[11]=0;
  p_output1[12]=t1797*t1821*t4399*t5793 - 1.*t1186*t1797*t5930 + t5729*t6146 + 0.135*(t1186*t1797*t5726 + t4911*t6146) + t6027*t6160 + t6051*t6164 - 0.01004*(-1.*t6015*t6160 + t5997*t6164) - 0.08055*(t5997*t6160 + t6015*t6164) + t1797*t2945*t5793*t839;
  p_output1[13]=t1076*t1821*t4399*t5793 - 1.*t1076*t1186*t5930 + t5729*t6183 + 0.135*(t1076*t1186*t5726 + t4911*t6183) + t6027*t6195 + t6051*t6199 - 0.01004*(-1.*t6015*t6195 + t5997*t6199) - 0.08055*(t5997*t6195 + t6015*t6199) + t1076*t2945*t5793*t839;
  p_output1[14]=-1.*t1186*t1821*t4399 - 1.*t5793*t5930 + t5729*t6222 + 0.135*(t5726*t5793 + t4911*t6222) + t6027*t6233 + t6051*t6237 - 0.01004*(-1.*t6015*t6233 + t5997*t6237) - 0.08055*(t5997*t6233 + t6015*t6237) - 1.*t1186*t2945*t839;
  p_output1[15]=t4399*t6081 + t2945*t6254 + 0.135*t4911*t6258 + t5729*t6258 + t5726*t6027*t6258 + t6051*t6264 - 0.01004*(-1.*t5726*t6015*t6258 + t5997*t6264) - 0.08055*(t5726*t5997*t6258 + t6015*t6264);
  p_output1[16]=t2945*t3357 + t4399*t6280 + 0.135*t4911*t6285 + t5729*t6285 + t5726*t6027*t6285 + t6051*t6294 - 0.01004*(-1.*t5726*t6015*t6285 + t5997*t6294) - 0.08055*(t5726*t5997*t6285 + t6015*t6294);
  p_output1[17]=-1.*t1821*t2945*t5793 + t6312 + t6313 + t6314 + t6318 + t6324 + t6328 + t4399*t5793*t839;
  p_output1[18]=0.135*t4911*t6122 + t5729*t6122 + t5726*t6027*t6122 + t6081*t6331 + t6099*t6336 + t6051*t6343 - 0.01004*(-1.*t5726*t6015*t6122 + t5997*t6343) - 0.08055*(t5726*t5997*t6122 + t6015*t6343);
  p_output1[19]=t6280*t6331 + t6336*t6359 + 0.135*t4911*t6364 + t5729*t6364 + t5726*t6027*t6364 + t6051*t6369 - 0.01004*(-1.*t5726*t6015*t6364 + t5997*t6369) - 0.08055*(t5726*t5997*t6364 + t6015*t6369);
  p_output1[20]=t6312 + t6313 + t6314 + t6318 + t6324 + t6328 + t1821*t5793*t6336 + t5793*t6331*t839;
  p_output1[21]=0.135*(-1.*t1797*t4911*t5793 - 1.*t5726*t6104) - 0.08055*t5997*t6111 + 0.01004*t6015*t6111 + t6027*t6111 + t1797*t5793*t6385 + t6104*t6388;
  p_output1[22]=t1076*t5793*t6385 + t6388*t6404 + 0.135*(t5991 - 1.*t5726*t6404) - 0.08055*t5997*t6409 + 0.01004*t6015*t6409 + t6027*t6409;
  p_output1[23]=-1.*t1186*t6385 + t6388*t6431 + 0.135*(t1186*t4911 - 1.*t5726*t6431) - 0.08055*t5997*t6436 + 0.01004*t6015*t6436 + t6027*t6436;
  p_output1[24]=-0.01004*(-1.*t5997*t6118 - 1.*t6015*t6122) - 0.08055*t6137 + t6118*t6453 + t6122*t6457;
  p_output1[25]=t6364*t6457 + t6453*t6471 - 0.01004*(-1.*t6015*t6364 - 1.*t5997*t6471) - 0.08055*(t5997*t6364 - 1.*t6015*t6471);
  p_output1[26]=t6311*t6457 + t6453*t6492 - 0.01004*(-1.*t6015*t6311 - 1.*t5997*t6492) - 0.08055*(t5997*t6311 - 1.*t6015*t6492);
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

#include "Jp_LeftThighJoint_mex.hh"

namespace SymExpression
{

void Jp_LeftThighJoint_mex_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
