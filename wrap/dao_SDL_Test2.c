#include"dao_sdl_test.h"
extern char** DaoStringList_ToStaticCStringArray( DaoList *slist );
#ifdef __cplusplus
extern "C"{
#endif
/* /usr/local/include/SDL2/SDL_test_common.h */


static DaoNumItem dao_SDLTest_CommonState_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDLTest_CommonState_GETF_flags( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_flags( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_videodriver( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_display( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_display( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_window_title( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_window_icon( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_window_flags( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_window_flags( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_window_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_window_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_window_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_window_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_window_w( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_window_w( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_window_h( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_window_h( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_window_minW( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_window_minW( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_window_minH( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_window_minH( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_window_maxW( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_window_maxW( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_window_maxH( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_window_maxH( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_logical_w( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_logical_w( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_logical_h( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_logical_h( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_scale( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_scale( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_depth( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_depth( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_refresh_rate( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_refresh_rate( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_num_windows( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_num_windows( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_windows( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_renderdriver( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_render_flags( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_render_flags( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_skip_renderer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_skip_renderer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_renderers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_audiodriver( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_audiospec( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_red_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_red_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_green_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_green_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_blue_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_blue_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_alpha_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_alpha_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_buffer_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_buffer_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_depth_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_depth_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_stencil_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_stencil_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_double_buffer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_double_buffer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_accum_red_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_accum_red_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_accum_green_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_accum_green_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_accum_blue_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_accum_blue_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_accum_alpha_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_accum_alpha_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_stereo( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_stereo( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_multisamplebuffers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_multisamplebuffers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_multisamplesamples( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_multisamplesamples( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_retained_backing( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_retained_backing( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_accelerated( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_accelerated( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_major_version( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_major_version( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_minor_version( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_minor_version( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_GETF_gl_debug( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SETF_gl_debug( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDLTest_CommonState_SDLTest_CommonState( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDLTest_CommonState_Meths[] = 
{
  { dao_SDLTest_CommonState_GETF_flags, ".flags( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_flags, ".flags=( self :SDLTest_CommonState, flags :int )" },
  { dao_SDLTest_CommonState_GETF_verbose, ".verbose( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_verbose, ".verbose=( self :SDLTest_CommonState, verbose :int )" },
  { dao_SDLTest_CommonState_GETF_videodriver, ".videodriver( self :SDLTest_CommonState )=>string" },
  { dao_SDLTest_CommonState_GETF_display, ".display( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_display, ".display=( self :SDLTest_CommonState, display :int )" },
  { dao_SDLTest_CommonState_GETF_window_title, ".window_title( self :SDLTest_CommonState )=>string" },
  { dao_SDLTest_CommonState_GETF_window_icon, ".window_icon( self :SDLTest_CommonState )=>string" },
  { dao_SDLTest_CommonState_GETF_window_flags, ".window_flags( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_window_flags, ".window_flags=( self :SDLTest_CommonState, window_flags :int )" },
  { dao_SDLTest_CommonState_GETF_window_x, ".window_x( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_window_x, ".window_x=( self :SDLTest_CommonState, window_x :int )" },
  { dao_SDLTest_CommonState_GETF_window_y, ".window_y( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_window_y, ".window_y=( self :SDLTest_CommonState, window_y :int )" },
  { dao_SDLTest_CommonState_GETF_window_w, ".window_w( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_window_w, ".window_w=( self :SDLTest_CommonState, window_w :int )" },
  { dao_SDLTest_CommonState_GETF_window_h, ".window_h( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_window_h, ".window_h=( self :SDLTest_CommonState, window_h :int )" },
  { dao_SDLTest_CommonState_GETF_window_minW, ".window_minW( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_window_minW, ".window_minW=( self :SDLTest_CommonState, window_minW :int )" },
  { dao_SDLTest_CommonState_GETF_window_minH, ".window_minH( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_window_minH, ".window_minH=( self :SDLTest_CommonState, window_minH :int )" },
  { dao_SDLTest_CommonState_GETF_window_maxW, ".window_maxW( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_window_maxW, ".window_maxW=( self :SDLTest_CommonState, window_maxW :int )" },
  { dao_SDLTest_CommonState_GETF_window_maxH, ".window_maxH( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_window_maxH, ".window_maxH=( self :SDLTest_CommonState, window_maxH :int )" },
  { dao_SDLTest_CommonState_GETF_logical_w, ".logical_w( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_logical_w, ".logical_w=( self :SDLTest_CommonState, logical_w :int )" },
  { dao_SDLTest_CommonState_GETF_logical_h, ".logical_h( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_logical_h, ".logical_h=( self :SDLTest_CommonState, logical_h :int )" },
  { dao_SDLTest_CommonState_GETF_scale, ".scale( self :SDLTest_CommonState )=>float" },
  { dao_SDLTest_CommonState_SETF_scale, ".scale=( self :SDLTest_CommonState, scale :float )" },
  { dao_SDLTest_CommonState_GETF_depth, ".depth( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_depth, ".depth=( self :SDLTest_CommonState, depth :int )" },
  { dao_SDLTest_CommonState_GETF_refresh_rate, ".refresh_rate( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_refresh_rate, ".refresh_rate=( self :SDLTest_CommonState, refresh_rate :int )" },
  { dao_SDLTest_CommonState_GETF_num_windows, ".num_windows( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_num_windows, ".num_windows=( self :SDLTest_CommonState, num_windows :int )" },
  { dao_SDLTest_CommonState_GETF_windows, ".windows( self :SDLTest_CommonState )=>list<SDL_Window>" },
  { dao_SDLTest_CommonState_GETF_renderdriver, ".renderdriver( self :SDLTest_CommonState )=>string" },
  { dao_SDLTest_CommonState_GETF_render_flags, ".render_flags( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_render_flags, ".render_flags=( self :SDLTest_CommonState, render_flags :int )" },
  { dao_SDLTest_CommonState_GETF_skip_renderer, ".skip_renderer( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_skip_renderer, ".skip_renderer=( self :SDLTest_CommonState, skip_renderer :int )" },
  { dao_SDLTest_CommonState_GETF_renderers, ".renderers( self :SDLTest_CommonState )=>list<SDL_Renderer>" },
  { dao_SDLTest_CommonState_GETF_audiodriver, ".audiodriver( self :SDLTest_CommonState )=>string" },
  { dao_SDLTest_CommonState_GETF_audiospec, ".audiospec( self :SDLTest_CommonState )=>SDL_AudioSpec" },
  { dao_SDLTest_CommonState_GETF_gl_red_size, ".gl_red_size( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_red_size, ".gl_red_size=( self :SDLTest_CommonState, gl_red_size :int )" },
  { dao_SDLTest_CommonState_GETF_gl_green_size, ".gl_green_size( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_green_size, ".gl_green_size=( self :SDLTest_CommonState, gl_green_size :int )" },
  { dao_SDLTest_CommonState_GETF_gl_blue_size, ".gl_blue_size( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_blue_size, ".gl_blue_size=( self :SDLTest_CommonState, gl_blue_size :int )" },
  { dao_SDLTest_CommonState_GETF_gl_alpha_size, ".gl_alpha_size( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_alpha_size, ".gl_alpha_size=( self :SDLTest_CommonState, gl_alpha_size :int )" },
  { dao_SDLTest_CommonState_GETF_gl_buffer_size, ".gl_buffer_size( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_buffer_size, ".gl_buffer_size=( self :SDLTest_CommonState, gl_buffer_size :int )" },
  { dao_SDLTest_CommonState_GETF_gl_depth_size, ".gl_depth_size( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_depth_size, ".gl_depth_size=( self :SDLTest_CommonState, gl_depth_size :int )" },
  { dao_SDLTest_CommonState_GETF_gl_stencil_size, ".gl_stencil_size( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_stencil_size, ".gl_stencil_size=( self :SDLTest_CommonState, gl_stencil_size :int )" },
  { dao_SDLTest_CommonState_GETF_gl_double_buffer, ".gl_double_buffer( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_double_buffer, ".gl_double_buffer=( self :SDLTest_CommonState, gl_double_buffer :int )" },
  { dao_SDLTest_CommonState_GETF_gl_accum_red_size, ".gl_accum_red_size( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_accum_red_size, ".gl_accum_red_size=( self :SDLTest_CommonState, gl_accum_red_size :int )" },
  { dao_SDLTest_CommonState_GETF_gl_accum_green_size, ".gl_accum_green_size( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_accum_green_size, ".gl_accum_green_size=( self :SDLTest_CommonState, gl_accum_green_size :int )" },
  { dao_SDLTest_CommonState_GETF_gl_accum_blue_size, ".gl_accum_blue_size( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_accum_blue_size, ".gl_accum_blue_size=( self :SDLTest_CommonState, gl_accum_blue_size :int )" },
  { dao_SDLTest_CommonState_GETF_gl_accum_alpha_size, ".gl_accum_alpha_size( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_accum_alpha_size, ".gl_accum_alpha_size=( self :SDLTest_CommonState, gl_accum_alpha_size :int )" },
  { dao_SDLTest_CommonState_GETF_gl_stereo, ".gl_stereo( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_stereo, ".gl_stereo=( self :SDLTest_CommonState, gl_stereo :int )" },
  { dao_SDLTest_CommonState_GETF_gl_multisamplebuffers, ".gl_multisamplebuffers( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_multisamplebuffers, ".gl_multisamplebuffers=( self :SDLTest_CommonState, gl_multisamplebuffers :int )" },
  { dao_SDLTest_CommonState_GETF_gl_multisamplesamples, ".gl_multisamplesamples( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_multisamplesamples, ".gl_multisamplesamples=( self :SDLTest_CommonState, gl_multisamplesamples :int )" },
  { dao_SDLTest_CommonState_GETF_gl_retained_backing, ".gl_retained_backing( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_retained_backing, ".gl_retained_backing=( self :SDLTest_CommonState, gl_retained_backing :int )" },
  { dao_SDLTest_CommonState_GETF_gl_accelerated, ".gl_accelerated( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_accelerated, ".gl_accelerated=( self :SDLTest_CommonState, gl_accelerated :int )" },
  { dao_SDLTest_CommonState_GETF_gl_major_version, ".gl_major_version( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_major_version, ".gl_major_version=( self :SDLTest_CommonState, gl_major_version :int )" },
  { dao_SDLTest_CommonState_GETF_gl_minor_version, ".gl_minor_version( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_minor_version, ".gl_minor_version=( self :SDLTest_CommonState, gl_minor_version :int )" },
  { dao_SDLTest_CommonState_GETF_gl_debug, ".gl_debug( self :SDLTest_CommonState )=>int" },
  { dao_SDLTest_CommonState_SETF_gl_debug, ".gl_debug=( self :SDLTest_CommonState, gl_debug :int )" },
  { dao_SDLTest_CommonState_SDLTest_CommonState, "SDLTest_CommonState(  )=>SDLTest_CommonState" },
  { NULL, NULL }
};
static void Dao_SDLTest_CommonState_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDLTest_CommonState_Typer = 
{ "SDLTest_CommonState", NULL,
  dao_SDLTest_CommonState_Nums,
  dao_SDLTest_CommonState_Meths,
  { NULL },
  { NULL },
  Dao_SDLTest_CommonState_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL_TEST *dao_SDLTest_CommonState_Typer = & SDLTest_CommonState_Typer;
DaoType *dao_type_SDLTest_CommonState = NULL;
static void dao_SDLTest_CommonState_GETF_flags( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->flags );
}
static void dao_SDLTest_CommonState_SETF_flags( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->flags = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->verbose );
}
static void dao_SDLTest_CommonState_SETF_verbose( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->verbose = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_videodriver( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutChars( _proc, (char*) self->videodriver );
}
static void dao_SDLTest_CommonState_GETF_display( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->display );
}
static void dao_SDLTest_CommonState_SETF_display( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->display = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_window_title( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutChars( _proc, (char*) self->window_title );
}
static void dao_SDLTest_CommonState_GETF_window_icon( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutChars( _proc, (char*) self->window_icon );
}
static void dao_SDLTest_CommonState_GETF_window_flags( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->window_flags );
}
static void dao_SDLTest_CommonState_SETF_window_flags( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->window_flags = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_window_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->window_x );
}
static void dao_SDLTest_CommonState_SETF_window_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->window_x = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_window_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->window_y );
}
static void dao_SDLTest_CommonState_SETF_window_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->window_y = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_window_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->window_w );
}
static void dao_SDLTest_CommonState_SETF_window_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->window_w = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_window_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->window_h );
}
static void dao_SDLTest_CommonState_SETF_window_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->window_h = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_window_minW( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->window_minW );
}
static void dao_SDLTest_CommonState_SETF_window_minW( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->window_minW = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_window_minH( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->window_minH );
}
static void dao_SDLTest_CommonState_SETF_window_minH( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->window_minH = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_window_maxW( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->window_maxW );
}
static void dao_SDLTest_CommonState_SETF_window_maxW( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->window_maxW = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_window_maxH( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->window_maxH );
}
static void dao_SDLTest_CommonState_SETF_window_maxH( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->window_maxH = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_logical_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->logical_w );
}
static void dao_SDLTest_CommonState_SETF_logical_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->logical_w = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_logical_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->logical_h );
}
static void dao_SDLTest_CommonState_SETF_logical_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->logical_h = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_scale( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutFloat( _proc, (float) self->scale );
}
static void dao_SDLTest_CommonState_SETF_scale( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->scale = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_depth( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->depth );
}
static void dao_SDLTest_CommonState_SETF_depth( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->depth = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_refresh_rate( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->refresh_rate );
}
static void dao_SDLTest_CommonState_SETF_refresh_rate( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->refresh_rate = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_num_windows( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->num_windows );
}
static void dao_SDLTest_CommonState_SETF_num_windows( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->num_windows = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_windows( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoList *list = DaoProcess_PutList( _proc );
  daoint i, n = self->num_windows;
  for(i=0; i<n; i++){
    DaoCdata *it = DaoProcess_NewCdata( _proc, dao_type_SDL_Window, self->windows[i], 0 );
    DaoList_PushBack( list, (DaoValue*) it );
  }
}
static void dao_SDLTest_CommonState_GETF_renderdriver( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutChars( _proc, (char*) self->renderdriver );
}
static void dao_SDLTest_CommonState_GETF_render_flags( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->render_flags );
}
static void dao_SDLTest_CommonState_SETF_render_flags( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->render_flags = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_skip_renderer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->skip_renderer );
}
static void dao_SDLTest_CommonState_SETF_skip_renderer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->skip_renderer = (SDL_bool) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_renderers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoList *list = DaoProcess_PutList( _proc );
  daoint i, n = self->num_windows;
  for(i=0; i<n; i++){
    DaoCdata *it = DaoProcess_NewCdata( _proc, dao_type_SDL_Renderer, self->renderers[i], 0 );
    DaoList_PushBack( list, (DaoValue*) it );
  }
}
static void dao_SDLTest_CommonState_GETF_audiodriver( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutChars( _proc, (char*) self->audiodriver );
}
static void dao_SDLTest_CommonState_GETF_audiospec( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_WrapCdata( _proc, (void*)&self->audiospec, dao_type_SDL_AudioSpec );
}
static void dao_SDLTest_CommonState_GETF_gl_red_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_red_size );
}
static void dao_SDLTest_CommonState_SETF_gl_red_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_red_size = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_green_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_green_size );
}
static void dao_SDLTest_CommonState_SETF_gl_green_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_green_size = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_blue_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_blue_size );
}
static void dao_SDLTest_CommonState_SETF_gl_blue_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_blue_size = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_alpha_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_alpha_size );
}
static void dao_SDLTest_CommonState_SETF_gl_alpha_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_alpha_size = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_buffer_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_buffer_size );
}
static void dao_SDLTest_CommonState_SETF_gl_buffer_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_buffer_size = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_depth_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_depth_size );
}
static void dao_SDLTest_CommonState_SETF_gl_depth_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_depth_size = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_stencil_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_stencil_size );
}
static void dao_SDLTest_CommonState_SETF_gl_stencil_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_stencil_size = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_double_buffer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_double_buffer );
}
static void dao_SDLTest_CommonState_SETF_gl_double_buffer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_double_buffer = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_accum_red_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_accum_red_size );
}
static void dao_SDLTest_CommonState_SETF_gl_accum_red_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_accum_red_size = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_accum_green_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_accum_green_size );
}
static void dao_SDLTest_CommonState_SETF_gl_accum_green_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_accum_green_size = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_accum_blue_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_accum_blue_size );
}
static void dao_SDLTest_CommonState_SETF_gl_accum_blue_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_accum_blue_size = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_accum_alpha_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_accum_alpha_size );
}
static void dao_SDLTest_CommonState_SETF_gl_accum_alpha_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_accum_alpha_size = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_stereo( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_stereo );
}
static void dao_SDLTest_CommonState_SETF_gl_stereo( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_stereo = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_multisamplebuffers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_multisamplebuffers );
}
static void dao_SDLTest_CommonState_SETF_gl_multisamplebuffers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_multisamplebuffers = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_multisamplesamples( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_multisamplesamples );
}
static void dao_SDLTest_CommonState_SETF_gl_multisamplesamples( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_multisamplesamples = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_retained_backing( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_retained_backing );
}
static void dao_SDLTest_CommonState_SETF_gl_retained_backing( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_retained_backing = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_accelerated( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_accelerated );
}
static void dao_SDLTest_CommonState_SETF_gl_accelerated( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_accelerated = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_major_version( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_major_version );
}
static void dao_SDLTest_CommonState_SETF_gl_major_version( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_major_version = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_minor_version( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_minor_version );
}
static void dao_SDLTest_CommonState_SETF_gl_minor_version( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_minor_version = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_GETF_gl_debug( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  DaoProcess_PutInteger( _proc, (daoint) self->gl_debug );
}
static void dao_SDLTest_CommonState_SETF_gl_debug( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState *self = (SDLTest_CommonState*)DaoValue_TryCastCdata(_p[0],dao_type_SDLTest_CommonState);
  self->gl_debug = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDLTest_CommonState_SDLTest_CommonState( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDLTest_CommonState *self = Dao_SDLTest_CommonState_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDLTest_CommonState );
}
#ifdef __cplusplus
}
#endif
