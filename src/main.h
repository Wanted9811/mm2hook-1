#pragma once

#include "common.h"
#include "patch.h"

#include <DbgHelp.h>

#include "mm2.h"
#include "mm2_lua.h"

EXTERN_C LPFNDIRECTINPUTCREATE lpDICreate;
EXTERN_C HRESULT DirectInputCreate_Impl(HINSTANCE hinst, DWORD dwVersion, LPVOID *ppDI, LPUNKNOWN punkOuter);

LuaState L;