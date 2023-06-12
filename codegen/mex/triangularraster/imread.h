//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// imread.h
//
// Code generation for function 'imread'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "covrt.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
namespace coder {
void imread(const emlrtStack &sp, const ::coder::array<char_T, 2U> &varargin_1,
            ::coder::array<uint8_T, 3U> &X);

}

// End of code generation (imread.h)
