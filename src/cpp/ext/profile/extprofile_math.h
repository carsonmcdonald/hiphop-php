/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010 Facebook, Inc. (http://www.facebook.com)          |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_MATH_H__
#define __EXTPROFILE_MATH_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <cpp/ext/ext_math.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline double x_pi() {
  FUNCTION_INJECTION_BUILTIN(pi);
  return f_pi();
}

inline Variant x_min(int _argc, CVarRef value, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(min);
  return f_min(_argc, value, _argv);
}

inline Variant x_max(int _argc, CVarRef value, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(max);
  return f_max(_argc, value, _argv);
}

inline Variant x_abs(CVarRef number) {
  FUNCTION_INJECTION_BUILTIN(abs);
  return f_abs(number);
}

inline bool x_is_finite(double val) {
  FUNCTION_INJECTION_BUILTIN(is_finite);
  return f_is_finite(val);
}

inline bool x_is_infinite(double val) {
  FUNCTION_INJECTION_BUILTIN(is_infinite);
  return f_is_infinite(val);
}

inline bool x_is_nan(double val) {
  FUNCTION_INJECTION_BUILTIN(is_nan);
  return f_is_nan(val);
}

inline double x_ceil(double value) {
  FUNCTION_INJECTION_BUILTIN(ceil);
  return f_ceil(value);
}

inline double x_floor(double value) {
  FUNCTION_INJECTION_BUILTIN(floor);
  return f_floor(value);
}

inline double x_round(CVarRef val, int64 precision = 0) {
  FUNCTION_INJECTION_BUILTIN(round);
  return f_round(val, precision);
}

inline double x_deg2rad(double number) {
  FUNCTION_INJECTION_BUILTIN(deg2rad);
  return f_deg2rad(number);
}

inline double x_rad2deg(double number) {
  FUNCTION_INJECTION_BUILTIN(rad2deg);
  return f_rad2deg(number);
}

inline String x_decbin(int64 number) {
  FUNCTION_INJECTION_BUILTIN(decbin);
  return f_decbin(number);
}

inline String x_dechex(int64 number) {
  FUNCTION_INJECTION_BUILTIN(dechex);
  return f_dechex(number);
}

inline String x_decoct(int64 number) {
  FUNCTION_INJECTION_BUILTIN(decoct);
  return f_decoct(number);
}

inline Variant x_bindec(CStrRef binary_string) {
  FUNCTION_INJECTION_BUILTIN(bindec);
  return f_bindec(binary_string);
}

inline Variant x_hexdec(CStrRef hex_string) {
  FUNCTION_INJECTION_BUILTIN(hexdec);
  return f_hexdec(hex_string);
}

inline Variant x_octdec(CStrRef octal_string) {
  FUNCTION_INJECTION_BUILTIN(octdec);
  return f_octdec(octal_string);
}

inline String x_base_convert(CStrRef number, int64 frombase, int64 tobase) {
  FUNCTION_INJECTION_BUILTIN(base_convert);
  return f_base_convert(number, frombase, tobase);
}

inline Numeric x_pow(CVarRef base, CVarRef exp) {
  FUNCTION_INJECTION_BUILTIN(pow);
  return f_pow(base, exp);
}

inline double x_exp(double arg) {
  FUNCTION_INJECTION_BUILTIN(exp);
  return f_exp(arg);
}

inline double x_expm1(double arg) {
  FUNCTION_INJECTION_BUILTIN(expm1);
  return f_expm1(arg);
}

inline double x_log10(double arg) {
  FUNCTION_INJECTION_BUILTIN(log10);
  return f_log10(arg);
}

inline double x_log1p(double number) {
  FUNCTION_INJECTION_BUILTIN(log1p);
  return f_log1p(number);
}

inline double x_log(double arg, double base = 0) {
  FUNCTION_INJECTION_BUILTIN(log);
  return f_log(arg, base);
}

inline double x_cos(double arg) {
  FUNCTION_INJECTION_BUILTIN(cos);
  return f_cos(arg);
}

inline double x_cosh(double arg) {
  FUNCTION_INJECTION_BUILTIN(cosh);
  return f_cosh(arg);
}

inline double x_sin(double arg) {
  FUNCTION_INJECTION_BUILTIN(sin);
  return f_sin(arg);
}

inline double x_sinh(double arg) {
  FUNCTION_INJECTION_BUILTIN(sinh);
  return f_sinh(arg);
}

inline double x_tan(double arg) {
  FUNCTION_INJECTION_BUILTIN(tan);
  return f_tan(arg);
}

inline double x_tanh(double arg) {
  FUNCTION_INJECTION_BUILTIN(tanh);
  return f_tanh(arg);
}

inline double x_acos(double arg) {
  FUNCTION_INJECTION_BUILTIN(acos);
  return f_acos(arg);
}

inline double x_acosh(double arg) {
  FUNCTION_INJECTION_BUILTIN(acosh);
  return f_acosh(arg);
}

inline double x_asin(double arg) {
  FUNCTION_INJECTION_BUILTIN(asin);
  return f_asin(arg);
}

inline double x_asinh(double arg) {
  FUNCTION_INJECTION_BUILTIN(asinh);
  return f_asinh(arg);
}

inline double x_atan(double arg) {
  FUNCTION_INJECTION_BUILTIN(atan);
  return f_atan(arg);
}

inline double x_atanh(double arg) {
  FUNCTION_INJECTION_BUILTIN(atanh);
  return f_atanh(arg);
}

inline double x_atan2(double y, double x) {
  FUNCTION_INJECTION_BUILTIN(atan2);
  return f_atan2(y, x);
}

inline double x_hypot(double x, double y) {
  FUNCTION_INJECTION_BUILTIN(hypot);
  return f_hypot(x, y);
}

inline double x_fmod(double x, double y) {
  FUNCTION_INJECTION_BUILTIN(fmod);
  return f_fmod(x, y);
}

inline double x_sqrt(double arg) {
  FUNCTION_INJECTION_BUILTIN(sqrt);
  return f_sqrt(arg);
}

inline int64 x_getrandmax() {
  FUNCTION_INJECTION_BUILTIN(getrandmax);
  return f_getrandmax();
}

inline void x_srand(CVarRef seed = null_variant) {
  FUNCTION_INJECTION_BUILTIN(srand);
  f_srand(seed);
}

inline int64 x_rand(int64 min = 0, int64 max = RAND_MAX) {
  FUNCTION_INJECTION_BUILTIN(rand);
  return f_rand(min, max);
}

inline int64 x_mt_getrandmax() {
  FUNCTION_INJECTION_BUILTIN(mt_getrandmax);
  return f_mt_getrandmax();
}

inline void x_mt_srand(CVarRef seed = null_variant) {
  FUNCTION_INJECTION_BUILTIN(mt_srand);
  f_mt_srand(seed);
}

inline int64 x_mt_rand(int64 min = 0, int64 max = RAND_MAX) {
  FUNCTION_INJECTION_BUILTIN(mt_rand);
  return f_mt_rand(min, max);
}

inline double x_lcg_value() {
  FUNCTION_INJECTION_BUILTIN(lcg_value);
  return f_lcg_value();
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_MATH_H__
