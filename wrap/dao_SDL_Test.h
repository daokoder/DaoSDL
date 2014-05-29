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

#include<daoArray.h>

#ifdef __cplusplus
}
#endif
#include"SDL_test.h"
#include"SDL_test_common.h"

#ifndef DAO_SDL_STATIC
#define DAO_DLL_SDL DAO_DLL_IMPORT
#include"dao_sdl.h"
#else
#define DAO_DLL_SDL
#include"dao_sdl.h"
#endif

#ifndef DAO_SDL_TEST_STATIC
#ifndef DAO_DLL_SDL_TEST
#define DAO_DLL_SDL_TEST DAO_DLL_EXPORT
#endif
#else
#define DAO_DLL_SDL_TEST
#endif

extern DaoVmSpace *__daoVmSpace;
#ifdef __cplusplus
extern "C"{
#endif
extern DaoTypeBase *dao__opaque_pthread_attr_t_Typer;
extern DaoTypeBase *dao_fd_set_Typer;
extern DaoTypeBase *dao___sFILE_Typer;
extern DaoTypeBase *dao_sigval_Typer;
extern DaoTypeBase *dao_sigevent_Typer;
extern DaoTypeBase *dao___siginfo_Typer;
extern DaoTypeBase *dao_sigvec_Typer;
extern DaoTypeBase *dao_timeval_Typer;
extern DaoTypeBase *dao_rusage_Typer;
extern DaoTypeBase *dao_rlimit_Typer;
extern DaoTypeBase *dao_div_t_Typer;
extern DaoTypeBase *dao_ldiv_t_Typer;
extern DaoTypeBase *dao_lldiv_t_Typer;
extern DaoTypeBase *dao_imaxdiv_t_Typer;
extern DaoTypeBase *dao_exception_Typer;
extern DaoTypeBase *dao__SDL_iconv_t_Typer;
extern DaoTypeBase *dao_SDL_assert_data_Typer;
extern DaoTypeBase *dao_OSQueueHead_Typer;
extern DaoTypeBase *dao_OSFifoQueueHead_Typer;
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
extern DaoTypeBase *dao__SDL_GameController_Typer;
extern DaoTypeBase *dao_SDL_GameControllerButtonBind_Typer;
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
extern DaoTypeBase *dao__SDL_Haptic_Typer;
extern DaoTypeBase *dao_SDL_HapticDirection_Typer;
extern DaoTypeBase *dao_SDL_HapticConstant_Typer;
extern DaoTypeBase *dao_SDL_HapticPeriodic_Typer;
extern DaoTypeBase *dao_SDL_HapticCondition_Typer;
extern DaoTypeBase *dao_SDL_HapticRamp_Typer;
extern DaoTypeBase *dao_SDL_HapticLeftRight_Typer;
extern DaoTypeBase *dao_SDL_HapticCustom_Typer;
extern DaoTypeBase *dao_SDL_HapticEffect_Typer;
extern DaoTypeBase *dao_SDL_MessageBoxData_Typer;
extern DaoTypeBase *dao_SDL_RendererInfo_Typer;
extern DaoTypeBase *dao_SDL_Renderer_Typer;
extern DaoTypeBase *dao_SDL_Texture_Typer;
extern DaoTypeBase *dao_SDL_version_Typer;
extern DaoTypeBase *dao_SDLTest_CommonState_Typer;
extern DaoTypeBase *dao_SDLTest_RandomContext_Typer;
extern DaoTypeBase *dao_SDLTest_Crc32Context_Typer;
extern DaoTypeBase *dao_SDLTest_Md5Context_Typer;
extern DaoType *dao_type__opaque_pthread_attr_t;
extern DaoType *dao_type_fd_set;
extern DaoType *dao_type___sFILE;
extern DaoType *dao_type_sigval;
extern DaoType *dao_type_sigevent;
extern DaoType *dao_type___siginfo;
extern DaoType *dao_type_sigvec;
extern DaoType *dao_type_timeval;
extern DaoType *dao_type_rusage;
extern DaoType *dao_type_rlimit;
extern DaoType *dao_type_div_t;
extern DaoType *dao_type_ldiv_t;
extern DaoType *dao_type_lldiv_t;
extern DaoType *dao_type_imaxdiv_t;
extern DaoType *dao_type_exception;
extern DaoType *dao_type__SDL_iconv_t;
extern DaoType *dao_type_SDL_assert_data;
extern DaoType *dao_type_OSQueueHead;
extern DaoType *dao_type_OSFifoQueueHead;
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
extern DaoType *dao_type__SDL_GameController;
extern DaoType *dao_type_SDL_GameControllerButtonBind;
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
extern DaoType *dao_type__SDL_Haptic;
extern DaoType *dao_type_SDL_HapticDirection;
extern DaoType *dao_type_SDL_HapticConstant;
extern DaoType *dao_type_SDL_HapticPeriodic;
extern DaoType *dao_type_SDL_HapticCondition;
extern DaoType *dao_type_SDL_HapticRamp;
extern DaoType *dao_type_SDL_HapticLeftRight;
extern DaoType *dao_type_SDL_HapticCustom;
extern DaoType *dao_type_SDL_HapticEffect;
extern DaoType *dao_type_SDL_MessageBoxData;
extern DaoType *dao_type_SDL_RendererInfo;
extern DaoType *dao_type_SDL_Renderer;
extern DaoType *dao_type_SDL_Texture;
extern DaoType *dao_type_SDL_version;
extern DaoType *dao_type_SDLTest_CommonState;
extern DaoType *dao_type_SDLTest_RandomContext;
extern DaoType *dao_type_SDLTest_Crc32Context;
extern DaoType *dao_type_SDLTest_Md5Context;
#ifdef __cplusplus
}
#endif
SDLTest_CommonState* DAO_DLL_SDL_TEST Dao_SDLTest_CommonState_New();
#ifdef __cplusplus
extern "C"{
#endif
#ifdef __cplusplus
}
#endif
#endif
