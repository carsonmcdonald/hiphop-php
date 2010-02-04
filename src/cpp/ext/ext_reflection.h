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

#ifndef __EXT_REFLECTION_H__
#define __EXT_REFLECTION_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <cpp/base/base_includes.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

Array f_hphp_get_extension_info(CStrRef name);
Array f_hphp_get_class_info(CVarRef name);
Array f_hphp_get_function_info(CStrRef name);
Variant f_hphp_invoke(CStrRef name, CArrRef params);
Variant f_hphp_invoke_method(CVarRef obj, CStrRef cls, CStrRef name, CArrRef params);
bool f_hphp_instanceof(CObjRef obj, CStrRef name);
Object f_hphp_create_object(CStrRef name, CArrRef params);
Variant f_hphp_get_property(CObjRef obj, CStrRef cls, CStrRef prop);
void f_hphp_set_property(CObjRef obj, CStrRef cls, CStrRef prop, CVarRef value);
Variant f_hphp_get_static_property(CStrRef cls, CStrRef prop);
void f_hphp_set_static_property(CStrRef cls, CStrRef prop, CVarRef value);

///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXT_REFLECTION_H__