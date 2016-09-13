#ifndef __DAO_SDL_H__
#define __DAO_SDL_H__
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
#include"SDL.h"
#include"SDL_main.h"
#include"SDL_stdinc.h"
#include"SDL_assert.h"
#include"SDL_atomic.h"
#include"SDL_audio.h"
#include"SDL_clipboard.h"
#include"SDL_cpuinfo.h"
#include"SDL_endian.h"
#include"SDL_error.h"
#include"SDL_events.h"
#include"SDL_hints.h"
#include"SDL_loadso.h"
#include"SDL_log.h"
#include"SDL_mutex.h"
#include"SDL_power.h"
#include"SDL_render.h"
#include"SDL_rwops.h"
#include"SDL_thread.h"
#include"SDL_timer.h"
#include"SDL_version.h"
#include"SDL_video.h"
#include"SDL_rect.h"
#include"SDL_surface.h"
#include"SDL_keycode.h"
#include"SDL_keyboard.h"
#include"SDL_mouse.h"
#include"SDL_joystick.h"
#include"SDL_gesture.h"
#include"SDL_touch.h"
#include"SDL_scancode.h"
#include"SDL_quit.h"
#include"SDL_blendmode.h"
#include"SDL_pixels.h"


#ifndef DAO_SDL_STATIC
#ifndef DAO_DLL_SDL
#define DAO_DLL_SDL DAO_DLL_EXPORT
#endif
#else
#define DAO_DLL_SDL
#endif

#ifdef WIN32
#define DAO_DLL2_SDL DAO_DLL_SDL
#else
#define DAO_DLL2_SDL
#endif

extern DaoVmSpace *__daoVmSpace;
#ifdef __cplusplus
extern "C"{
#endif
extern DaoTypeCore *dao__SDL_iconv_t_Core;
extern DaoTypeCore *dao_SDL_AssertData_Core;
extern DaoTypeCore *dao_SDL_atomic_t_Core;
extern DaoTypeCore *dao_SDL_mutex_Core;
extern DaoTypeCore *dao_SDL_semaphore_Core;
extern DaoTypeCore *dao_SDL_cond_Core;
extern DaoTypeCore *dao_SDL_Thread_Core;
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
extern DaoTypeCore *dao_SDL_Cursor_Core;
extern DaoTypeCore *dao__SDL_Joystick_Core;
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
extern DaoTypeCore *dao_SDL_Texture_Core;
extern DaoTypeCore *dao_SDL_version_Core;
extern DaoType *dao_type__SDL_iconv_t;
extern DaoType *dao_type_SDL_AssertData;
extern DaoType *dao_type_SDL_atomic_t;
extern DaoType *dao_type_SDL_mutex;
extern DaoType *dao_type_SDL_semaphore;
extern DaoType *dao_type_SDL_cond;
extern DaoType *dao_type_SDL_Thread;
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
extern DaoType *dao_type_SDL_Cursor;
extern DaoType *dao_type__SDL_Joystick;
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
extern DaoType *dao_type_SDL_Texture;
extern DaoType *dao_type_SDL_version;
#ifdef __cplusplus
}
#endif
DAO_DLL_SDL SDL_AssertData* Dao_SDL_AssertData_New();
DAO_DLL_SDL SDL_atomic_t* Dao_SDL_atomic_t_New();
static int Dao_SDL_RWops_close( struct SDL_RWops* context );
typedef struct Dao_SDL_RWops Dao_SDL_RWops;
struct DAO_DLL2_SDL Dao_SDL_RWops
{
	SDL_RWops  nested;
	SDL_RWops *object;
	DaoCdata *_cdata;
};
DAO_DLL_SDL Dao_SDL_RWops* Dao_SDL_RWops_New();
DAO_DLL_SDL SDL_AudioSpec* Dao_SDL_AudioSpec_New();
DAO_DLL_SDL SDL_AudioCVT* Dao_SDL_AudioCVT_New();
DAO_DLL_SDL SDL_Color* Dao_SDL_Color_New();
DAO_DLL_SDL SDL_Palette* Dao_SDL_Palette_New();
DAO_DLL_SDL SDL_PixelFormat* Dao_SDL_PixelFormat_New();
DAO_DLL_SDL SDL_Point* Dao_SDL_Point_New();
DAO_DLL_SDL SDL_Rect* Dao_SDL_Rect_New();
DAO_DLL_SDL SDL_Surface* Dao_SDL_Surface_New();
DAO_DLL_SDL SDL_DisplayMode* Dao_SDL_DisplayMode_New();
DAO_DLL_SDL SDL_Keysym* Dao_SDL_Keysym_New();
DAO_DLL_SDL SDL_JoystickGUID* Dao_SDL_JoystickGUID_New();
DAO_DLL_SDL SDL_Finger* Dao_SDL_Finger_New();
DAO_DLL_SDL SDL_CommonEvent* Dao_SDL_CommonEvent_New();
DAO_DLL_SDL SDL_WindowEvent* Dao_SDL_WindowEvent_New();
DAO_DLL_SDL SDL_KeyboardEvent* Dao_SDL_KeyboardEvent_New();
DAO_DLL_SDL SDL_TextEditingEvent* Dao_SDL_TextEditingEvent_New();
DAO_DLL_SDL SDL_TextInputEvent* Dao_SDL_TextInputEvent_New();
DAO_DLL_SDL SDL_MouseMotionEvent* Dao_SDL_MouseMotionEvent_New();
DAO_DLL_SDL SDL_MouseButtonEvent* Dao_SDL_MouseButtonEvent_New();
DAO_DLL_SDL SDL_MouseWheelEvent* Dao_SDL_MouseWheelEvent_New();
DAO_DLL_SDL SDL_JoyAxisEvent* Dao_SDL_JoyAxisEvent_New();
DAO_DLL_SDL SDL_JoyBallEvent* Dao_SDL_JoyBallEvent_New();
DAO_DLL_SDL SDL_JoyHatEvent* Dao_SDL_JoyHatEvent_New();
DAO_DLL_SDL SDL_JoyButtonEvent* Dao_SDL_JoyButtonEvent_New();
DAO_DLL_SDL SDL_JoyDeviceEvent* Dao_SDL_JoyDeviceEvent_New();
DAO_DLL_SDL SDL_ControllerAxisEvent* Dao_SDL_ControllerAxisEvent_New();
DAO_DLL_SDL SDL_ControllerButtonEvent* Dao_SDL_ControllerButtonEvent_New();
DAO_DLL_SDL SDL_ControllerDeviceEvent* Dao_SDL_ControllerDeviceEvent_New();
DAO_DLL_SDL SDL_AudioDeviceEvent* Dao_SDL_AudioDeviceEvent_New();
DAO_DLL_SDL SDL_TouchFingerEvent* Dao_SDL_TouchFingerEvent_New();
DAO_DLL_SDL SDL_MultiGestureEvent* Dao_SDL_MultiGestureEvent_New();
DAO_DLL_SDL SDL_DollarGestureEvent* Dao_SDL_DollarGestureEvent_New();
DAO_DLL_SDL SDL_DropEvent* Dao_SDL_DropEvent_New();
DAO_DLL_SDL SDL_QuitEvent* Dao_SDL_QuitEvent_New();
DAO_DLL_SDL SDL_OSEvent* Dao_SDL_OSEvent_New();
DAO_DLL_SDL SDL_UserEvent* Dao_SDL_UserEvent_New();
DAO_DLL_SDL SDL_SysWMEvent* Dao_SDL_SysWMEvent_New();
DAO_DLL_SDL SDL_Event* Dao_SDL_Event_New();
DAO_DLL_SDL SDL_RendererInfo* Dao_SDL_RendererInfo_New();
DAO_DLL_SDL SDL_version* Dao_SDL_version_New();
#ifdef __cplusplus
extern "C"{
#endif
#ifdef __cplusplus
}
#endif
#endif
