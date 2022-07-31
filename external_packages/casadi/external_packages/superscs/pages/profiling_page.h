/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Pantelis Sopasakis (https://alphaville.github.io),
 *                    Krina Menounou (https://www.linkedin.com/in/krinamenounou), 
 *                    Panagiotis Patrinos (http://homes.esat.kuleuven.be/~ppatrino)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * 
 */
/*! \page page_profiling Profiling
 * 
 * \tableofcontents
 * 
 * 
 * \section profile_results_1_Ofast Profile 1 with -Ofast
 * 
 * \subsection profile_1_scs_Ofast Standard SCS
 * \htmlonly
 * <div class="image" id="image_scs_Ofast">
 * <a href="images/profiling/graph_scs_Ofast.png"><img src="images/profiling/graph_scs_Ofast.png"/></a>
 * </div>
 * \endhtmlonly
 *
 * \subsection profile_1_aa_Ofast Anderson's Acceleration
 * 
 * <div id="aa_Ofast">
 * <table>
 * <tr>
 *     <th>Memory: 3</th> 
 *     <th>Memory: 5</th> 
 *     <th>Memory: 10</th> 
 *     <th>Memory: 30</th> 
 * </tr>
 *  <tr>
 *      <td style="padding:1px">\htmlonly<a href="images/profiling/graph_aa3_Ofast.png"><img src="images/profiling/graph_aa3_Ofast.png"/></a>\endhtmlonly </td>
 *      <td style="padding:1px">\htmlonly<a href="images/profiling/graph_aa5_Ofast.png"><img src="images/profiling/graph_aa5_Ofast.png"/></a>\endhtmlonly </td>
 *      <td style="padding:1px">\htmlonly<a href="images/profiling/graph_aa10_Ofast.png"><img src="images/profiling/graph_aa10_Ofast.png"/></a>\endhtmlonly </td>
 *      <td style="padding:1px">\htmlonly<a href="images/profiling/graph_aa40_Ofast.png"><img src="images/profiling/graph_aa40_Ofast.png"/></a>\endhtmlonly </td>
 *  </tr>
 * </table>
 * </div>
 * 
 * \subsection profile_1_bro_Ofast Broyden directions
 * 
 * <div>
 * <table>
 * <tr>
 *     <th>Memory: 50</th> 
 *     <th>Memory: 100</th> 
 *     <th>Memory: 150</th> 
 * </tr>
 *  <tr>
 *      <td style="padding:1px">\htmlonly<a href="images/profiling/graph_bro50_Ofast.png"><img src="images/profiling/graph_bro50_Ofast.png"/></a>\endhtmlonly </td>
 *      <td style="padding:1px">\htmlonly<a href="images/profiling/graph_bro100_Ofast.png"><img src="images/profiling/graph_bro100_Ofast.png"/></a>\endhtmlonly </td>
 *      <td style="padding:1px">\htmlonly<a href="images/profiling/graph_bro150_Ofast.png"><img src="images/profiling/graph_bro150_Ofast.png"/></a>\endhtmlonly </td>
 *  </tr>
 * </table>
 * </div>
 * 
 * 
 * 
 *
 * 
 * 
 *  
 * \section profile_results_1_O0 Profile 1 with -O0
 * 
 * Here we ran the profiler having deactivated all compiler optimizations.
 * 
 * \subsection profile_1_scs Standard SCS
 * \htmlonly
 * <div class="image" id="image_scs_O0">
 * <a href="images/profiling/graph_scs.png"><img src="images/profiling/graph_scs.png" width="30%"/></a>
 * </div>
 * \endhtmlonly
 * 
 * \subsection profile_1_aa Anderson's Acceleration
 * <div>
 * <table>
 * <tr>
 *     <th>Memory: 3</th> 
 *     <th>Memory: 5</th> 
 *     <th>Memory: 10</th> 
 *     <th>Memory: 40</th> 
 * </tr>
 *  <tr>
 *      <td>\htmlonly<a href="images/profiling/graph_aa3.png"><img src="images/profiling/graph_aa3.png" width="80%"/></a>\endhtmlonly</td>
 *      <td>\htmlonly<a href="images/profiling/graph_aa5.png"><img src="images/profiling/graph_aa5.png" width="80%"/></a>\endhtmlonly</td>
 *      <td>\htmlonly<a href="images/profiling/graph_aa10.png"><img src="images/profiling/graph_aa10.png" width="80%"/></a>\endhtmlonly</td>
 *      <td>\htmlonly<a href="images/profiling/graph_aa40_O0.png"><img src="images/profiling/graph_aa40_O0.png" width="80%"/></a>\endhtmlonly</td>
 *  </tr>
 * </table>
 * </div>
 * 
 * \subsection profile_1_bro Broyden directions
 * With memory = 100, k0: deactivated
 * <img src="images/profiling/graph_bro100.png"/> 
 * With memory = 100, Only k2 steps...
 * <img src="images/profiling/graph_bro100_k2only.png"/> 
 */