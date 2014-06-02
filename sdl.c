
#define module_name sdl
#undef module_name

#define X_dao_hint_unsupported() sigevent
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() sigvec
#undef X_dao_hint_unsupported

#define X_dao_hint_callbackdata_context( context, offset, whence ) SDL_RWops::seek(SDL_RWops*,long,int)
#undef X_dao_hint_callbackdata_context

#define X_dao_hint_callbackdata_context( context, ptr, size, maxnum ) SDL_RWops::read(SDL_RWops*,void*,size_t,size_t)
#undef X_dao_hint_callbackdata_context

#define X_dao_hint_callbackdata_context( context, ptr, size, maxnum ) SDL_RWops::write(SDL_RWops*,const void*,size_t,size_t)
#undef X_dao_hint_callbackdata_context

#define X_dao_hint_callbackdata_context( context ) SDL_RWops::close(SDL_RWops*)
#undef X_dao_hint_callbackdata_context

#define X_dao_hint_callbackdata_touch( touch ) SDL_Touch::FreeTouch(SDL_Touch*)
#undef X_dao_hint_callbackdata_touch

#define X_dao_hint_unsupported() SDL_AudioDeviceConnected(SDL_AudioDeviceID)
#undef X_dao_hint_unsupported

#define dao_SDL_RenderCopy( renderer, texture, srcrect_dao_hint_nullable, dstrect_dao_hint_nullable ) SDL_RenderCopy(SDL_Renderer*,SDL_Texture*,const SDL_Rect*,const SDL_Rect*)
#undef dao_SDL_RenderCopy

#define flags_dao_hint_readonly_flags() SDL_Surface::flags
#undef  flags_dao_hint_readonly_flags

#define w_dao_hint_readonly() SDL_Surface::w
#undef  w_dao_hint_readonly

#define h_dao_hint_readonly() SDL_Surface::h
#undef  h_dao_hint_readonly

#define pitch_dao_hint_readonly() SDL_Surface::pitch
#undef  pitch_dao_hint_readonly

#define locked_dao_hint_readonly() SDL_Surface::locked
#undef  locked_dao_hint_readonly

#define refcount_dao_hint_readonly() SDL_Surface::refcount
#undef  refcount_dao_hint_readonly

#define X_dao_hint_unsupported() SDL_WindowEvent::padding1
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_WindowEvent::padding2
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_WindowEvent::padding3
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_KeyboardEvent::padding2
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_KeyboardEvent::padding3
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_MouseButtonEvent::padding1
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_MouseButtonEvent::padding2
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_JoyAxisEvent::padding1
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_JoyAxisEvent::padding2
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_JoyAxisEvent::padding3
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_JoyAxisEvent::padding4
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_JoyBallEvent::padding1
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_JoyBallEvent::padding2
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_JoyBallEvent::padding3
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_JoyHatEvent::padding1
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_JoyHatEvent::padding2
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_JoyButtonEvent::padding1
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_JoyButtonEvent::padding2
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_ControllerAxisEvent::padding1
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_ControllerAxisEvent::padding2
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_ControllerAxisEvent::padding3
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_ControllerAxisEvent::padding4
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_ControllerButtonEvent::padding1
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_ControllerButtonEvent::padding2
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_MultiGestureEvent::padding
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_Event::padding
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_AudioSpec::padding
#undef X_dao_hint_unsupported

#define X_dao_hint_unsupported() SDL_PixelFormat::padding
#undef X_dao_hint_unsupported

// hints for image pixel data: dao_hint_pixels_pitch_width_height
#define pixels_dao_hint_pixels_pitch_w_h() SDL_Surface::pixels
#undef  pixels_dao_hint_pixels_pitch_w_h


#include"SDL.h"

#if 1
#include "SDL_main.h"
#include "SDL_stdinc.h"
#include "SDL_assert.h"
#include "SDL_atomic.h"
#include "SDL_audio.h"
#include "SDL_clipboard.h"
#include "SDL_cpuinfo.h"
#include "SDL_endian.h"
#include "SDL_error.h"
#include "SDL_events.h"
#include "SDL_hints.h"
#include "SDL_loadso.h"
#include "SDL_log.h"
#include "SDL_mutex.h"
#include "SDL_power.h"
#include "SDL_render.h"
#include "SDL_rwops.h"
#include "SDL_thread.h"
#include "SDL_timer.h"
#include "SDL_version.h"
#include "SDL_video.h"
#endif

#include "SDL_rect.h"
#include "SDL_surface.h"
#include "SDL_keycode.h"
#include "SDL_keyboard.h"
#include "SDL_mouse.h"
#include "SDL_joystick.h"
#include "SDL_gesture.h"
#include "SDL_touch.h"
#include "SDL_scancode.h"
#include "SDL_quit.h"
#include "SDL_blendmode.h"
#include "SDL_pixels.h"
