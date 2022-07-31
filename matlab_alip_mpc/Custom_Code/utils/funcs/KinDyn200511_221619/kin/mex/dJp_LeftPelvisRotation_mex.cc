/*
 * Automatically Generated from Mathematica.
 * Mon 11 May 2020 22:23:35 GMT-04:00
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
  double t66;
  double t1025;
  double t1327;
  double t1896;
  double t2758;
  double t3374;
  double t4329;
  double t1152;
  double t8233;
  double t857;
  double t3155;
  double t4240;
  double t4254;
  double t4503;
  double t4920;
  double t4921;
  double t8576;
  double t8582;
  double t8630;
  double t8440;
  double t8443;
  double t8526;
  double t8861;
  double t8862;
  double t8863;
  double t8826;
  double t8827;
  double t8844;
  double t8983;
  double t8984;
  double t8985;
  double t8908;
  double t8931;
  double t8740;
  double t9141;
  double t9143;
  double t9146;
  double t8848;
  double t8849;
  double t8868;
  double t8869;
  double t8870;
  double t9175;
  double t9177;
  double t9178;
  double t9153;
  double t9159;
  double t8947;
  double t8948;
  double t9121;
  double t9127;
  double t9131;
  double t9205;
  double t9206;
  double t9207;
  double t9208;
  double t9212;
  double t858;
  double t4272;
  double t5328;
  double t5684;
  double t6044;
  double t6411;
  double t6532;
  double t6533;
  double t7024;
  double t7817;
  double t7988;
  double t8068;
  double t8291;
  double t9064;
  double t9065;
  double t9066;
  double t9102;
  double t9108;
  double t9116;
  double t9120;
  double t9134;
  double t9135;
  double t9237;
  double t9238;
  double t9240;
  double t9241;
  double t9242;
  double t9190;
  double t9280;
  double t9281;
  double t9282;
  double t9283;
  double t9284;
  double t9285;
  double t9286;
  double t9287;
  double t9203;
  double t9204;
  double t9213;
  double t8555;
  double t8712;
  double t8752;
  double t8756;
  double t8759;
  double t8791;
  double t8797;
  double t8800;
  double t8817;
  double t9154;
  double t9004;
  double t9008;
  double t9009;
  double t9011;
  double t9023;
  double t9039;
  double t9040;
  double t9051;
  double t9056;
  double t9235;
  double t9236;
  double t9243;
  double t9139;
  double t9149;
  double t9157;
  double t9160;
  double t9161;
  double t9163;
  double t9164;
  double t9193;
  double t9314;
  double t9315;
  double t9316;
  double t9191;
  double t9192;
  double t9194;
  double t9197;
  double t9198;
  double t9199;
  double t9266;
  double t9267;
  double t9268;
  double t9269;
  double t9270;
  double t9271;
  double t9272;
  double t9273;
  double t9274;
  double t9275;
  double t9278;
  double t9279;
  double t9288;
  double t9215;
  double t9216;
  double t9217;
  double t9300;
  double t9301;
  double t9302;
  double t9303;
  double t9304;
  double t9305;
  double t9306;
  double t9181;
  double t9182;
  double t8852;
  double t8871;
  double t8903;
  double t8909;
  double t8910;
  double t8971;
  double t8976;
  double t9245;
  double t9246;
  double t9247;
  double t9173;
  double t9179;
  double t9183;
  double t9184;
  double t9185;
  double t9186;
  double t9188;
  double t9313;
  double t9317;
  double t9318;
  double t9319;
  double t9320;
  double t9321;
  double t9322;
  double t9323;
  double t9324;
  double t9340;
  double t9341;
  double t9343;
  double t9333;
  double t9332;
  double t9334;
  double t9290;
  double t9291;
  double t9292;
  t66 = Sin(var1[3]);
  t1025 = Cos(var1[4]);
  t1327 = Cos(var1[6]);
  t1896 = -1.*t1327;
  t2758 = 1. + t1896;
  t3374 = Sin(var1[6]);
  t4329 = Sin(var1[5]);
  t1152 = Cos(var1[5]);
  t8233 = Cos(var1[3]);
  t857 = Sin(var1[4]);
  t3155 = 0.07996*t2758;
  t4240 = -0.135*t3374;
  t4254 = 0. + t3155 + t4240;
  t4503 = 0.135*t2758;
  t4920 = 0.07996*t3374;
  t4921 = 0. + t4503 + t4920;
  t8576 = t1152*t66;
  t8582 = -1.*t8233*t857*t4329;
  t8630 = t8576 + t8582;
  t8440 = -1.*t8233*t1152*t857;
  t8443 = -1.*t66*t4329;
  t8526 = t8440 + t8443;
  t8861 = -1.*t8233*t1152;
  t8862 = -1.*t66*t857*t4329;
  t8863 = t8861 + t8862;
  t8826 = -1.*t1152*t66*t857;
  t8827 = t8233*t4329;
  t8844 = t8826 + t8827;
  t8983 = t8233*t1152;
  t8984 = t66*t857*t4329;
  t8985 = t8983 + t8984;
  t8908 = -1.*t8844*t3374;
  t8931 = t1327*t8844;
  t8740 = t1327*t8630;
  t9141 = t8233*t1152*t857;
  t9143 = t66*t4329;
  t9146 = t9141 + t9143;
  t8848 = -0.135*t1327;
  t8849 = t8848 + t4920;
  t8868 = 0.07996*t1327;
  t8869 = 0.135*t3374;
  t8870 = t8868 + t8869;
  t9175 = -1.*t1152*t66;
  t9177 = t8233*t857*t4329;
  t9178 = t9175 + t9177;
  t9153 = -1.*t9146*t3374;
  t9159 = t1327*t9146;
  t8947 = -1.*t8863*t3374;
  t8948 = t8931 + t8947;
  t9121 = t8233*t1025*t1152*t1327;
  t9127 = -1.*t8233*t1025*t4329*t3374;
  t9131 = t9121 + t9127;
  t9205 = -1.*t8233*t1025*t1327*t4329;
  t9206 = -1.*t8233*t1025*t1152*t3374;
  t9207 = t9205 + t9206;
  t9208 = 0.09786*t9207;
  t9212 = 0.1351*t9131;
  t858 = -0.05485*t66*t857;
  t4272 = -1.*t1025*t1152*t66*t4254;
  t5328 = -1.*t1025*t66*t4329*t4921;
  t5684 = -1.*t1025*t1327*t66*t4329;
  t6044 = -1.*t1025*t1152*t66*t3374;
  t6411 = t5684 + t6044;
  t6532 = 0.1351*t6411;
  t6533 = -1.*t1025*t1152*t1327*t66;
  t7024 = t1025*t66*t4329*t3374;
  t7817 = t6533 + t7024;
  t7988 = 0.09786*t7817;
  t8068 = t858 + t4272 + t5328 + t6532 + t7988;
  t8291 = 0.05485*t8233*t1025;
  t9064 = 0.05485*t8233*t857;
  t9065 = t8233*t1025*t1152*t4254;
  t9066 = t8233*t1025*t4329*t4921;
  t9102 = t8233*t1025*t1327*t4329;
  t9108 = t8233*t1025*t1152*t3374;
  t9116 = t9102 + t9108;
  t9120 = 0.1351*t9116;
  t9134 = 0.09786*t9131;
  t9135 = t9064 + t9065 + t9066 + t9120 + t9134;
  t9237 = 0.09786*t6411;
  t9238 = t1025*t1152*t1327*t66;
  t9240 = -1.*t1025*t66*t4329*t3374;
  t9241 = t9238 + t9240;
  t9242 = 0.1351*t9241;
  t9190 = 0.05485*t1025*t66;
  t9280 = t1327*t857*t4329;
  t9281 = t1152*t857*t3374;
  t9282 = t9280 + t9281;
  t9283 = 0.09786*t9282;
  t9284 = -1.*t1152*t1327*t857;
  t9285 = t857*t4329*t3374;
  t9286 = t9284 + t9285;
  t9287 = 0.1351*t9286;
  t9203 = -1.*t8233*t1025*t4329*t4254;
  t9204 = t8233*t1025*t1152*t4921;
  t9213 = t9203 + t9204 + t9208 + t9212;
  t8555 = t8526*t4254;
  t8712 = t8630*t4921;
  t8752 = t8526*t3374;
  t8756 = t8740 + t8752;
  t8759 = 0.1351*t8756;
  t8791 = t1327*t8526;
  t8797 = -1.*t8630*t3374;
  t8800 = t8791 + t8797;
  t8817 = 0.09786*t8800;
  t9154 = t8740 + t9153;
  t9004 = t8985*t4254;
  t9008 = t8844*t4921;
  t9009 = t1327*t8985;
  t9011 = t9009 + t8908;
  t9023 = 0.09786*t9011;
  t9039 = t8985*t3374;
  t9040 = t8931 + t9039;
  t9051 = 0.1351*t9040;
  t9056 = t9004 + t9008 + t9023 + t9051;
  t9235 = -1.*t1025*t66*t4329*t4254;
  t9236 = t1025*t1152*t66*t4921;
  t9243 = t9235 + t9236 + t9237 + t9242;
  t9139 = t8630*t4254;
  t9149 = t9146*t4921;
  t9157 = 0.09786*t9154;
  t9160 = t8630*t3374;
  t9161 = t9159 + t9160;
  t9163 = 0.1351*t9161;
  t9164 = t9139 + t9149 + t9157 + t9163;
  t9193 = t1327*t8863;
  t9314 = t1152*t66*t857;
  t9315 = -1.*t8233*t4329;
  t9316 = t9314 + t9315;
  t9191 = t8844*t4254;
  t9192 = t8863*t4921;
  t9194 = t8844*t3374;
  t9197 = t9193 + t9194;
  t9198 = 0.1351*t9197;
  t9199 = 0.09786*t8948;
  t9266 = -1.*t1025*t1152*t4254;
  t9267 = -1.*t1025*t4329*t4921;
  t9268 = -1.*t1025*t1327*t4329;
  t9269 = -1.*t1025*t1152*t3374;
  t9270 = t9268 + t9269;
  t9271 = 0.1351*t9270;
  t9272 = -1.*t1025*t1152*t1327;
  t9273 = t1025*t4329*t3374;
  t9274 = t9272 + t9273;
  t9275 = 0.09786*t9274;
  t9278 = t857*t4329*t4254;
  t9279 = -1.*t1152*t857*t4921;
  t9288 = t9278 + t9279 + t9283 + t9287;
  t9215 = t8233*t1025*t1152*t8849;
  t9216 = t8233*t1025*t4329*t8870;
  t9217 = t9215 + t9216 + t9208 + t9212;
  t9300 = t8630*t8849;
  t9301 = t9146*t8870;
  t9302 = 0.1351*t9154;
  t9303 = -1.*t1327*t9146;
  t9304 = t9303 + t8797;
  t9305 = 0.09786*t9304;
  t9306 = t9300 + t9301 + t9302 + t9305;
  t9181 = -1.*t1327*t9178;
  t9182 = t9181 + t9153;
  t8852 = t8844*t8849;
  t8871 = t8863*t8870;
  t8903 = -1.*t1327*t8863;
  t8909 = t8903 + t8908;
  t8910 = 0.09786*t8909;
  t8971 = 0.1351*t8948;
  t8976 = t8852 + t8871 + t8910 + t8971;
  t9245 = t1025*t1152*t66*t8849;
  t9246 = t1025*t66*t4329*t8870;
  t9247 = t9245 + t9246 + t9237 + t9242;
  t9173 = t9146*t8849;
  t9179 = t9178*t8870;
  t9183 = 0.09786*t9182;
  t9184 = -1.*t9178*t3374;
  t9185 = t9159 + t9184;
  t9186 = 0.1351*t9185;
  t9188 = t9173 + t9179 + t9183 + t9186;
  t9313 = t8863*t8849;
  t9317 = t9316*t8870;
  t9318 = -1.*t9316*t3374;
  t9319 = t9193 + t9318;
  t9320 = 0.1351*t9319;
  t9321 = -1.*t1327*t9316;
  t9322 = t9321 + t8947;
  t9323 = 0.09786*t9322;
  t9324 = t9313 + t9317 + t9320 + t9323;
  t9340 = 0.135*t1327;
  t9341 = -0.07996*t3374;
  t9343 = t9340 + t9341;
  t9333 = t1025*t1152*t8870;
  t9332 = -1.*t1025*t4329*t8849;
  t9334 = t9332 + t9333 + t9271 + t9275;
  t9290 = -1.*t1152*t857*t8849;
  t9291 = -1.*t857*t4329*t8870;
  t9292 = t9290 + t9291 + t9283 + t9287;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=(t8291 + t8555 + t8712 + t8759 + t8817)*var2[3] + t8068*var2[4] + t9056*var2[5] + t8976*var2[6];
  p_output1[10]=(t9190 + t9191 + t9192 + t9198 + t9199)*var2[3] + t9135*var2[4] + t9164*var2[5] + t9188*var2[6];
  p_output1[11]=0;
  p_output1[12]=t8068*var2[3] + (t8291 - 1.*t1152*t4254*t8233*t857 - 1.*t4329*t4921*t8233*t857 + 0.1351*(-1.*t1152*t3374*t8233*t857 - 1.*t1327*t4329*t8233*t857) + 0.09786*(-1.*t1152*t1327*t8233*t857 + t3374*t4329*t8233*t857))*var2[4] + t9213*var2[5] + t9217*var2[6];
  p_output1[13]=t9135*var2[3] + (-1.*t1152*t4254*t66*t857 - 1.*t4329*t4921*t66*t857 + 0.1351*(-1.*t1152*t3374*t66*t857 - 1.*t1327*t4329*t66*t857) + 0.09786*(-1.*t1152*t1327*t66*t857 + t3374*t4329*t66*t857) + t9190)*var2[4] + t9243*var2[5] + t9247*var2[6];
  p_output1[14]=(-0.05485*t857 + t9266 + t9267 + t9271 + t9275)*var2[4] + t9288*var2[5] + t9292*var2[6];
  p_output1[15]=t9056*var2[3] + t9213*var2[4] + (t8555 + t8712 + t8759 + t8817)*var2[5] + t9306*var2[6];
  p_output1[16]=t9164*var2[3] + t9243*var2[4] + (t9191 + t9192 + t9198 + t9199)*var2[5] + t9324*var2[6];
  p_output1[17]=t9288*var2[4] + (t9266 + t9267 + t9271 + t9275)*var2[5] + t9334*var2[6];
  p_output1[18]=t8976*var2[3] + t9217*var2[4] + t9306*var2[5] + (0.1351*t9182 + t9301 + 0.09786*(t3374*t9178 + t9303) + t9178*t9343)*var2[6];
  p_output1[19]=t9188*var2[3] + t9247*var2[4] + t9324*var2[5] + (t9317 + 0.1351*(-1.*t1327*t8985 + t9318) + 0.09786*(t9039 + t9321) + t8985*t9343)*var2[6];
  p_output1[20]=t9292*var2[4] + t9334*var2[5] + (t9271 + t9275 + t9333 + t1025*t4329*t9343)*var2[6];
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

#include "dJp_LeftPelvisRotation_mex.hh"

namespace SymExpression
{

void dJp_LeftPelvisRotation_mex_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
