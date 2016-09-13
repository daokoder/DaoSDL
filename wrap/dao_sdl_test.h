#ifndef __DAO_SDL_TEST_H__
#define __DAO_SDL_TEST_H__
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<dao.h>

#ifdef __cplusplus
extern "C"{
#endif
#include<modules/auxlib/dao_aux.h>

#include<modules/stream/dao_stream.h>

#include<daoList.h>

#ifdef __cplusplus
}
#endif
#include"SDL_test.h"
#include"SDL_test_common.h"

#ifndef DAO_SDL_STATIC
#define DAO_DLL_SDL DAO_DLL_IMPORT
#ifdef WIN32
#define DAO_DLL2_SDL DAO_DLL_IMPORT
#else
#define DAO_DLL2_SDL
#endif

#include"dao_sdl.h"
#else
#define DAO_DLL_SDL
#define DAO_DLL2_SDL
#include"dao_sdl.h"
#endif

#ifndef DAO_SDL_TEST_STATIC
#ifndef DAO_DLL_SDL_TEST
#define DAO_DLL_SDL_TEST DAO_DLL_EXPORT
#endif
#else
#define DAO_DLL_SDL_TEST
#endif

#ifdef WIN32
#define DAO_DLL2_SDL_TEST DAO_DLL_SDL_TEST
#else
#define DAO_DLL2_SDL_TEST
#endif

extern DaoVmSpace *__daoVmSpace;
#ifdef __cplusplus
extern "C"{
#endif
extern DaoTypeCore *dao_SDL_AssertData_Core;
extern DaoTypeCore *dao_SDL_atomic_t_Core;
extern DaoTypeCore *dao_SDL_RWops_Core;
extern DaoTypeCore *dao_SDL_AudioSpec_Core;
extern DaoTypeCore *dao_SDL_AudioCVT_Core;
extern DaoTypeCore *dao_SDL_Color_Core;
extern DaoTypeCore *dao_SDL_Palette_Core;
extern DaoTypeCore *dao_SDL_PixelFormat_Core;
extern DaoTypeCore *dao_SDL_Point_Core;
extern DaoTypeCore *dao_SDL_Rect_Core;
extern DaoTypeCore *dao_SDL_Surface_Core;
extern DaoTypeCore *dao_SDL_BlitMap_Core;
extern DaoTypeCore *dao_SDL_DisplayMode_Core;
extern DaoTypeCore *dao_SDL_Window_Core;
extern DaoTypeCore *dao_SDL_Keysym_Core;
extern DaoTypeCore *dao_SDL_JoystickGUID_Core;
extern DaoTypeCore *dao_SDL_Finger_Core;
extern DaoTypeCore *dao_SDL_CommonEvent_Core;
extern DaoTypeCore *dao_SDL_WindowEvent_Core;
extern DaoTypeCore *dao_SDL_KeyboardEvent_Core;
extern DaoTypeCore *dao_SDL_TextEditingEvent_Core;
extern DaoTypeCore *dao_SDL_TextInputEvent_Core;
extern DaoTypeCore *dao_SDL_MouseMotionEvent_Core;
extern DaoTypeCore *dao_SDL_MouseButtonEvent_Core;
extern DaoTypeCore *dao_SDL_MouseWheelEvent_Core;
extern DaoTypeCore *dao_SDL_JoyAxisEvent_Core;
extern DaoTypeCore *dao_SDL_JoyBallEvent_Core;
extern DaoTypeCore *dao_SDL_JoyHatEvent_Core;
extern DaoTypeCore *dao_SDL_JoyButtonEvent_Core;
extern DaoTypeCore *dao_SDL_JoyDeviceEvent_Core;
extern DaoTypeCore *dao_SDL_ControllerAxisEvent_Core;
extern DaoTypeCore *dao_SDL_ControllerButtonEvent_Core;
extern DaoTypeCore *dao_SDL_ControllerDeviceEvent_Core;
extern DaoTypeCore *dao_SDL_AudioDeviceEvent_Core;
extern DaoTypeCore *dao_SDL_TouchFingerEvent_Core;
extern DaoTypeCore *dao_SDL_MultiGestureEvent_Core;
extern DaoTypeCore *dao_SDL_DollarGestureEvent_Core;
extern DaoTypeCore *dao_SDL_DropEvent_Core;
extern DaoTypeCore *dao_SDL_QuitEvent_Core;
extern DaoTypeCore *dao_SDL_OSEvent_Core;
extern DaoTypeCore *dao_SDL_UserEvent_Core;
extern DaoTypeCore *dao_SDL_SysWMmsg_Core;
extern DaoTypeCore *dao_SDL_SysWMEvent_Core;
extern DaoTypeCore *dao_SDL_Event_Core;
extern DaoTypeCore *dao_SDL_HapticDirection_Core;
extern DaoTypeCore *dao_SDL_HapticConstant_Core;
extern DaoTypeCore *dao_SDL_HapticPeriodic_Core;
extern DaoTypeCore *dao_SDL_HapticCondition_Core;
extern DaoTypeCore *dao_SDL_HapticRamp_Core;
extern DaoTypeCore *dao_SDL_HapticLeftRight_Core;
extern DaoTypeCore *dao_SDL_HapticCustom_Core;
extern DaoTypeCore *dao_SDL_RendererInfo_Core;
extern DaoTypeCore *dao_SDL_Renderer_Core;
extern DaoTypeCore *dao_SDL_version_Core;
extern DaoTypeCore *dao_SDLTest_CommonState_Core;
extern DaoType *dao_type_SDL_AssertData;
extern DaoType *dao_type_SDL_atomic_t;
extern DaoType *dao_type_SDL_RWops;
extern DaoType *dao_type_SDL_AudioSpec;
extern DaoType *dao_type_SDL_AudioCVT;
extern DaoType *dao_type_SDL_Color;
extern DaoType *dao_type_SDL_Palette;
extern DaoType *dao_type_SDL_PixelFormat;
extern DaoType *dao_type_SDL_Point;
extern DaoType *dao_type_SDL_Rect;
extern DaoType *dao_type_SDL_Surface;
extern DaoType *dao_type_SDL_BlitMap;
extern DaoType *dao_type_SDL_DisplayMode;
extern DaoType *dao_type_SDL_Window;
extern DaoType *dao_type_SDL_Keysym;
extern DaoType *dao_type_SDL_JoystickGUID;
extern DaoType *dao_type_SDL_Finger;
extern DaoType *dao_type_SDL_CommonEvent;
extern DaoType *dao_type_SDL_WindowEvent;
extern DaoType *dao_type_SDL_KeyboardEvent;
extern DaoType *dao_type_SDL_TextEditingEvent;
extern DaoType *dao_type_SDL_TextInputEvent;
extern DaoType *dao_type_SDL_MouseMotionEvent;
extern DaoType *dao_type_SDL_MouseButtonEvent;
extern DaoType *dao_type_SDL_MouseWheelEvent;
extern DaoType *dao_type_SDL_JoyAxisEvent;
extern DaoType *dao_type_SDL_JoyBallEvent;
extern DaoType *dao_type_SDL_JoyHatEvent;
extern DaoType *dao_type_SDL_JoyButtonEvent;
extern DaoType *dao_type_SDL_JoyDeviceEvent;
extern DaoType *dao_type_SDL_ControllerAxisEvent;
extern DaoType *dao_type_SDL_ControllerButtonEvent;
extern DaoType *dao_type_SDL_ControllerDeviceEvent;
extern DaoType *dao_type_SDL_AudioDeviceEvent;
extern DaoType *dao_type_SDL_TouchFingerEvent;
extern DaoType *dao_type_SDL_MultiGestureEvent;
extern DaoType *dao_type_SDL_DollarGestureEvent;
extern DaoType *dao_type_SDL_DropEvent;
extern DaoType *dao_type_SDL_QuitEvent;
extern DaoType *dao_type_SDL_OSEvent;
extern DaoType *dao_type_SDL_UserEvent;
extern DaoType *dao_type_SDL_SysWMmsg;
extern DaoType *dao_type_SDL_SysWMEvent;
extern DaoType *dao_type_SDL_Event;
extern DaoType *dao_type_SDL_HapticDirection;
extern DaoType *dao_type_SDL_HapticConstant;
extern DaoType *dao_type_SDL_HapticPeriodic;
extern DaoType *dao_type_SDL_HapticCondition;
extern DaoType *dao_type_SDL_HapticRamp;
extern DaoType *dao_type_SDL_HapticLeftRight;
extern DaoType *dao_type_SDL_HapticCustom;
extern DaoType *dao_type_SDL_RendererInfo;
extern DaoType *dao_type_SDL_Renderer;
extern DaoType *dao_type_SDL_version;
extern DaoType *dao_type_SDLTest_CommonState;
#ifdef __cplusplus
}
#endif
DAO_DLL_SDL_TEST SDLTest_CommonState* Dao_SDLTest_CommonState_New();
#ifdef __cplusplus
extern "C"{
#endif
#ifdef __cplusplus
}
#endif
#endif
