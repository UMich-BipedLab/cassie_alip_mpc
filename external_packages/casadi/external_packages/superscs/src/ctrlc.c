/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Pantelis Sopasakis (https://alphaville.github.io),
 *                    Krina Menounou (https://www.linkedin.com/in/krinamenounou), 
 *                    Panagiotis Patrinos (http://homes.esat.kuleuven.be/~ppatrino)
 * Copyright (c) 2012 Brendan O'Donoghue (bodonoghue85@gmail.com)
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

/*
 * Implements signal handling (ctrl-c) for SCS.
 *
 * Under Windows, we use SetConsoleCtrlHandler.
 * Under Unix systems, we use sigaction.
 * For Mex files, we use utSetInterruptEnabled/utIsInterruptPending.
 *
 */

#include "ctrlc.h"

#if CTRLC > 0

#ifdef MATLAB_MEX_FILE

static int istate;
void startInterruptListener(void) {
    istate = utSetInterruptEnabled(1);
}

void endInterruptListener(void) {
    utSetInterruptEnabled(istate);
}

int isInterrupted(void) {
    return utIsInterruptPending();
}

#elif defined _WIN32 || defined _WIN64

static int int_detected = 0;
BOOL WINAPI handle_ctrlc(DWORD dwCtrlType) {
    if (dwCtrlType != CTRL_C_EVENT)
        return FALSE;
    int_detected = 1;
    return TRUE;
}

void startInterruptListener(void) {
    int_detected = 0;
    SetConsoleCtrlHandler(handle_ctrlc, TRUE);
}

void endInterruptListener(void) {
    SetConsoleCtrlHandler(handle_ctrlc, FALSE);
}

int isInterrupted(void) {
    return int_detected;
}

#else /* Unix */

#include <signal.h>
static int int_detected;
struct sigaction oact;
void handle_ctrlc(int dummy) {
    int_detected = dummy ? dummy : -1;
}

void startInterruptListener(void) {
    struct sigaction act;
    int_detected = 0;
    act.sa_flags = 0;
    sigemptyset(&act.sa_mask);
    act.sa_handler = handle_ctrlc;
    sigaction(SIGINT, &act, &oact);
}

void endInterruptListener(void) {
    struct sigaction act;
    sigaction(SIGINT, &oact, &act);
}

int isInterrupted(void) {
    return int_detected;
}

#endif /* END IF MATLAB_MEX_FILE / WIN32 */

#endif /* END IF CTRLC > 0 */
