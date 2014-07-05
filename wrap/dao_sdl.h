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

#include<daoList.h>

#ifdef __cplusplus
}
#endif
#include"SDL.h"
#include"SDL_main.h"
#include"SDL_assert.h"
#include"SDL_stdinc.h"
#include"SDL_audio.h"
#include"SDL_atomic.h"
#include"SDL_clipboard.h"
#include"SDL_error.h"
#include"SDL_endian.h"
#include"SDL_mutex.h"
#include"SDL_thread.h"
#include"SDL_rwops.h"
#include"SDL_cpuinfo.h"
#include"SDL_events.h"
#include"SDL_video.h"
#include"SDL_keyboard.h"
#include"SDL_pixels.h"
#include"SDL_rect.h"
#include"SDL_surface.h"
#include"SDL_blendmode.h"
#include"SDL_mouse.h"
#include"SDL_keycode.h"
#include"SDL_scancode.h"
#include"SDL_joystick.h"
#include"SDL_gesture.h"
#include"SDL_quit.h"
#include"SDL_touch.h"
#include"SDL_hints.h"
#include"SDL_loadso.h"
#include"SDL_log.h"
#include"SDL_power.h"
#include"SDL_render.h"
#include"SDL_timer.h"
#include"SDL_version.h"


#ifndef DAO_SDL_STATIC
#ifndef DAO_DLL_SDL
#define DAO_DLL_SDL DAO_DLL_EXPORT
#endif
#else
#define DAO_DLL_SDL
#endif

extern DaoVmSpace *__daoVmSpace;
#ifdef __cplusplus
extern "C"{
#endif
extern DaoTypeBase *dao__opaque_pthread_attr_t_Typer;
extern DaoTypeBase *dao___sFILE_Typer;
extern DaoTypeBase *dao_sigval_Typer;
extern DaoTypeBase *dao_timeval_Typer;
extern DaoTypeBase *dao__SDL_iconv_t_Typer;
extern DaoTypeBase *dao_SDL_assert_data_Typer;
extern DaoTypeBase *dao_SDL_atomic_t_Typer;
extern DaoTypeBase *dao_SDL_mutex_Typer;
extern DaoTypeBase *dao_SDL_semaphore_Typer;
extern DaoTypeBase *dao_SDL_cond_Typer;
extern DaoTypeBase *dao_SDL_Thread_Typer;
extern DaoTypeBase *dao_SDL_RWops_Typer;
extern DaoTypeBase *dao_SDL_AudioSpec_Typer;
extern DaoTypeBase *dao_SDL_AudioCVT_Typer;
extern DaoTypeBase *dao_SDL_Color_Typer;
extern DaoTypeBase *dao_SDL_Palette_Typer;
extern DaoTypeBase *dao_SDL_PixelFormat_Typer;
extern DaoTypeBase *dao_SDL_Point_Typer;
extern DaoTypeBase *dao_SDL_Rect_Typer;
extern DaoTypeBase *dao_SDL_Surface_Typer;
extern DaoTypeBase *dao_SDL_BlitMap_Typer;
extern DaoTypeBase *dao_SDL_DisplayMode_Typer;
extern DaoTypeBase *dao_SDL_Window_Typer;
extern DaoTypeBase *dao_SDL_Keysym_Typer;
extern DaoTypeBase *dao_SDL_Cursor_Typer;
extern DaoTypeBase *dao__SDL_Joystick_Typer;
extern DaoTypeBase *dao_SDL_JoystickGUID_Typer;
extern DaoTypeBase *dao_SDL_Finger_Typer;
extern DaoTypeBase *dao_SDL_CommonEvent_Typer;
extern DaoTypeBase *dao_SDL_WindowEvent_Typer;
extern DaoTypeBase *dao_SDL_KeyboardEvent_Typer;
extern DaoTypeBase *dao_SDL_TextEditingEvent_Typer;
extern DaoTypeBase *dao_SDL_TextInputEvent_Typer;
extern DaoTypeBase *dao_SDL_MouseMotionEvent_Typer;
extern DaoTypeBase *dao_SDL_MouseButtonEvent_Typer;
extern DaoTypeBase *dao_SDL_MouseWheelEvent_Typer;
extern DaoTypeBase *dao_SDL_JoyAxisEvent_Typer;
extern DaoTypeBase *dao_SDL_JoyBallEvent_Typer;
extern DaoTypeBase *dao_SDL_JoyHatEvent_Typer;
extern DaoTypeBase *dao_SDL_JoyButtonEvent_Typer;
extern DaoTypeBase *dao_SDL_JoyDeviceEvent_Typer;
extern DaoTypeBase *dao_SDL_ControllerAxisEvent_Typer;
extern DaoTypeBase *dao_SDL_ControllerButtonEvent_Typer;
extern DaoTypeBase *dao_SDL_ControllerDeviceEvent_Typer;
extern DaoTypeBase *dao_SDL_TouchFingerEvent_Typer;
extern DaoTypeBase *dao_SDL_MultiGestureEvent_Typer;
extern DaoTypeBase *dao_SDL_DollarGestureEvent_Typer;
extern DaoTypeBase *dao_SDL_DropEvent_Typer;
extern DaoTypeBase *dao_SDL_QuitEvent_Typer;
extern DaoTypeBase *dao_SDL_OSEvent_Typer;
extern DaoTypeBase *dao_SDL_UserEvent_Typer;
extern DaoTypeBase *dao_SDL_SysWMmsg_Typer;
extern DaoTypeBase *dao_SDL_SysWMEvent_Typer;
extern DaoTypeBase *dao_SDL_Event_Typer;
extern DaoTypeBase *dao_SDL_HapticDirection_Typer;
extern DaoTypeBase *dao_SDL_HapticConstant_Typer;
extern DaoTypeBase *dao_SDL_HapticPeriodic_Typer;
extern DaoTypeBase *dao_SDL_HapticCondition_Typer;
extern DaoTypeBase *dao_SDL_HapticRamp_Typer;
extern DaoTypeBase *dao_SDL_HapticLeftRight_Typer;
extern DaoTypeBase *dao_SDL_HapticCustom_Typer;
extern DaoTypeBase *dao_SDL_RendererInfo_Typer;
extern DaoTypeBase *dao_SDL_Renderer_Typer;
extern DaoTypeBase *dao_SDL_Texture_Typer;
extern DaoTypeBase *dao_SDL_version_Typer;
extern DaoType *dao_type__opaque_pthread_attr_t;
extern DaoType *dao_type___sFILE;
extern DaoType *dao_type_sigval;
extern DaoType *dao_type_timeval;
extern DaoType *dao_type__SDL_iconv_t;
extern DaoType *dao_type_SDL_assert_data;
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
SDL_assert_data* DAO_DLL_SDL Dao_SDL_assert_data_New();
SDL_atomic_t* DAO_DLL_SDL Dao_SDL_atomic_t_New();
static size_t Dao_SDL_RWops_read( struct SDL_RWops* context, void* ptr, size_t size, size_t maxnum );
static size_t Dao_SDL_RWops_write( struct SDL_RWops* context, const void* ptr, size_t size, size_t maxnum );
static int Dao_SDL_RWops_close( struct SDL_RWops* context );
typedef struct Dao_SDL_RWops Dao_SDL_RWops;
struct DAO_DLL_SDL Dao_SDL_RWops
{
	SDL_RWops  nested;
	SDL_RWops *object;
	DaoCdata *_cdata;
};
Dao_SDL_RWops* DAO_DLL_SDL Dao_SDL_RWops_New();
SDL_AudioSpec* DAO_DLL_SDL Dao_SDL_AudioSpec_New();
SDL_AudioCVT* DAO_DLL_SDL Dao_SDL_AudioCVT_New();
SDL_Color* DAO_DLL_SDL Dao_SDL_Color_New();
SDL_Palette* DAO_DLL_SDL Dao_SDL_Palette_New();
SDL_PixelFormat* DAO_DLL_SDL Dao_SDL_PixelFormat_New();
SDL_Point* DAO_DLL_SDL Dao_SDL_Point_New();
SDL_Rect* DAO_DLL_SDL Dao_SDL_Rect_New();
SDL_Surface* DAO_DLL_SDL Dao_SDL_Surface_New();
SDL_DisplayMode* DAO_DLL_SDL Dao_SDL_DisplayMode_New();
SDL_Keysym* DAO_DLL_SDL Dao_SDL_Keysym_New();
SDL_JoystickGUID* DAO_DLL_SDL Dao_SDL_JoystickGUID_New();
SDL_Finger* DAO_DLL_SDL Dao_SDL_Finger_New();
SDL_CommonEvent* DAO_DLL_SDL Dao_SDL_CommonEvent_New();
SDL_WindowEvent* DAO_DLL_SDL Dao_SDL_WindowEvent_New();
SDL_KeyboardEvent* DAO_DLL_SDL Dao_SDL_KeyboardEvent_New();
SDL_TextEditingEvent* DAO_DLL_SDL Dao_SDL_TextEditingEvent_New();
SDL_TextInputEvent* DAO_DLL_SDL Dao_SDL_TextInputEvent_New();
SDL_MouseMotionEvent* DAO_DLL_SDL Dao_SDL_MouseMotionEvent_New();
SDL_MouseButtonEvent* DAO_DLL_SDL Dao_SDL_MouseButtonEvent_New();
SDL_MouseWheelEvent* DAO_DLL_SDL Dao_SDL_MouseWheelEvent_New();
SDL_JoyAxisEvent* DAO_DLL_SDL Dao_SDL_JoyAxisEvent_New();
SDL_JoyBallEvent* DAO_DLL_SDL Dao_SDL_JoyBallEvent_New();
SDL_JoyHatEvent* DAO_DLL_SDL Dao_SDL_JoyHatEvent_New();
SDL_JoyButtonEvent* DAO_DLL_SDL Dao_SDL_JoyButtonEvent_New();
SDL_JoyDeviceEvent* DAO_DLL_SDL Dao_SDL_JoyDeviceEvent_New();
SDL_ControllerAxisEvent* DAO_DLL_SDL Dao_SDL_ControllerAxisEvent_New();
SDL_ControllerButtonEvent* DAO_DLL_SDL Dao_SDL_ControllerButtonEvent_New();
SDL_ControllerDeviceEvent* DAO_DLL_SDL Dao_SDL_ControllerDeviceEvent_New();
SDL_TouchFingerEvent* DAO_DLL_SDL Dao_SDL_TouchFingerEvent_New();
SDL_MultiGestureEvent* DAO_DLL_SDL Dao_SDL_MultiGestureEvent_New();
SDL_DollarGestureEvent* DAO_DLL_SDL Dao_SDL_DollarGestureEvent_New();
SDL_DropEvent* DAO_DLL_SDL Dao_SDL_DropEvent_New();
SDL_QuitEvent* DAO_DLL_SDL Dao_SDL_QuitEvent_New();
SDL_OSEvent* DAO_DLL_SDL Dao_SDL_OSEvent_New();
SDL_UserEvent* DAO_DLL_SDL Dao_SDL_UserEvent_New();
SDL_SysWMEvent* DAO_DLL_SDL Dao_SDL_SysWMEvent_New();
SDL_Event* DAO_DLL_SDL Dao_SDL_Event_New();
SDL_RendererInfo* DAO_DLL_SDL Dao_SDL_RendererInfo_New();
SDL_version* DAO_DLL_SDL Dao_SDL_version_New();
#ifdef __cplusplus
extern "C"{
#endif
#ifdef __cplusplus
}
#endif
#endif
