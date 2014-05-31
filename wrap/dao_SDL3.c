#include"dao_sdl.h"
DaoRoutine* Dao_Get_Object_Method( DaoCdata *cd, DaoObject **obj, const char *name )
{
  DaoRoutine *meth;
  if( cd == NULL ) return NULL;
  *obj = DaoCdata_GetObject( cd );
  if( *obj == NULL ) return NULL;
  meth = DaoObject_GetMethod( *obj, name );
  if( meth == NULL ) return NULL;
  if( DaoRoutine_IsWrapper( meth ) ) return NULL; /*do not call C function*/
  return meth;
}
static int DaoPF10006( int *_cs, DaoRoutine *_ro, DaoObject *_ob, DaoValue *context )
{
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  int X = (int) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_CacheValue( _proc, context );
  _dp = DaoProcess_GetLastValues( _proc, 1 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 1 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) X=(int)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( __daoVmSpace, _proc );
  return X;
}
static size_t DaoPF10005( int *_cs, DaoRoutine *_ro, DaoObject *_ob, DaoValue *context, const void* ptr, size_t size, size_t maxnum )
{
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  size_t X = (size_t) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_CacheValue( _proc, context );
  DaoProcess_NewCdata( _proc, NULL, (void*) ptr, 0 );
  DaoProcess_NewInteger( _proc, (daoint) size );
  DaoProcess_NewInteger( _proc, (daoint) maxnum );
  _dp = DaoProcess_GetLastValues( _proc, 4 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 4 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 4 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) X=(unsigned long)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( __daoVmSpace, _proc );
  return X;
}
static size_t DaoPF10004( int *_cs, DaoRoutine *_ro, DaoObject *_ob, DaoValue *context, void* ptr, size_t size, size_t maxnum )
{
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  size_t X = (size_t) 0;
  if( _ro == NULL ) goto EndCall;
  DaoProcess_CacheValue( _proc, context );
  DaoProcess_NewCdata( _proc, NULL, (void*) ptr, 0 );
  DaoProcess_NewInteger( _proc, (daoint) size );
  DaoProcess_NewInteger( _proc, (daoint) maxnum );
  _dp = DaoProcess_GetLastValues( _proc, 4 );
  _ro = DaoRoutine_ResolveByValue( _ro, (DaoValue*) _ob, _dp, 4 );
  if( _ro == NULL || DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 4 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) X=(unsigned long)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( __daoVmSpace, _proc );
  return X;
}
SDL_assert_data* Dao_SDL_assert_data_New()
{
	SDL_assert_data *self = (SDL_assert_data*) calloc( 1, sizeof(SDL_assert_data) );
	return self;
}
SDL_atomic_t* Dao_SDL_atomic_t_New()
{
	SDL_atomic_t *self = (SDL_atomic_t*) calloc( 1, sizeof(SDL_atomic_t) );
	return self;
}
static size_t Dao_SDL_RWops_read( struct SDL_RWops* context, void* ptr, size_t size, size_t maxnum )
{
  Dao_SDL_RWops *_self = (Dao_SDL_RWops*) context;
  SDL_RWops *_self2 = _self->object;
  DaoCdata *_cdata = _self->_cdata;
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( _cdata, & _obj, "read" );
  size_t X = (size_t) 0;
  if( _ro == NULL || _obj == NULL ) return X;
  return (size_t)DaoPF10004( & _cs, _ro, _obj, (DaoValue*)_cdata, ptr, size, maxnum );
}
static size_t Dao_SDL_RWops_write( struct SDL_RWops* context, const void* ptr, size_t size, size_t maxnum )
{
  Dao_SDL_RWops *_self = (Dao_SDL_RWops*) context;
  SDL_RWops *_self2 = _self->object;
  DaoCdata *_cdata = _self->_cdata;
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( _cdata, & _obj, "write" );
  size_t X = (size_t) 0;
  if( _ro == NULL || _obj == NULL ) return X;
  return (size_t)DaoPF10005( & _cs, _ro, _obj, (DaoValue*)_cdata, ptr, size, maxnum );
}
static int Dao_SDL_RWops_close( struct SDL_RWops* context )
{
  Dao_SDL_RWops *_self = (Dao_SDL_RWops*) context;
  SDL_RWops *_self2 = _self->object;
  DaoCdata *_cdata = _self->_cdata;
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( _cdata, & _obj, "close" );
  int X = (int) 0;
  if( _ro == NULL || _obj == NULL ) return X;
  return (int)DaoPF10006( & _cs, _ro, _obj, (DaoValue*)_cdata );
}
Dao_SDL_RWops* Dao_SDL_RWops_New()
{
	Dao_SDL_RWops *wrap = calloc( 1, sizeof(Dao_SDL_RWops) );
	SDL_RWops *self = (SDL_RWops*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_SDL_RWops, wrap );
	wrap->object = self;
	self->read = Dao_SDL_RWops_read;
	self->write = Dao_SDL_RWops_write;
	self->close = Dao_SDL_RWops_close;
	return wrap;
}
SDL_AudioSpec* Dao_SDL_AudioSpec_New()
{
	SDL_AudioSpec *self = (SDL_AudioSpec*) calloc( 1, sizeof(SDL_AudioSpec) );
	return self;
}
SDL_AudioCVT* Dao_SDL_AudioCVT_New()
{
	SDL_AudioCVT *self = (SDL_AudioCVT*) calloc( 1, sizeof(SDL_AudioCVT) );
	return self;
}
SDL_Color* Dao_SDL_Color_New()
{
	SDL_Color *self = (SDL_Color*) calloc( 1, sizeof(SDL_Color) );
	return self;
}
SDL_Palette* Dao_SDL_Palette_New()
{
	SDL_Palette *self = (SDL_Palette*) calloc( 1, sizeof(SDL_Palette) );
	return self;
}
SDL_PixelFormat* Dao_SDL_PixelFormat_New()
{
	SDL_PixelFormat *self = (SDL_PixelFormat*) calloc( 1, sizeof(SDL_PixelFormat) );
	return self;
}
SDL_Point* Dao_SDL_Point_New()
{
	SDL_Point *self = (SDL_Point*) calloc( 1, sizeof(SDL_Point) );
	return self;
}
SDL_Rect* Dao_SDL_Rect_New()
{
	SDL_Rect *self = (SDL_Rect*) calloc( 1, sizeof(SDL_Rect) );
	return self;
}
SDL_Surface* Dao_SDL_Surface_New()
{
	SDL_Surface *self = (SDL_Surface*) calloc( 1, sizeof(SDL_Surface) );
	return self;
}
SDL_DisplayMode* Dao_SDL_DisplayMode_New()
{
	SDL_DisplayMode *self = (SDL_DisplayMode*) calloc( 1, sizeof(SDL_DisplayMode) );
	return self;
}
SDL_Keysym* Dao_SDL_Keysym_New()
{
	SDL_Keysym *self = (SDL_Keysym*) calloc( 1, sizeof(SDL_Keysym) );
	return self;
}
SDL_JoystickGUID* Dao_SDL_JoystickGUID_New()
{
	SDL_JoystickGUID *self = (SDL_JoystickGUID*) calloc( 1, sizeof(SDL_JoystickGUID) );
	return self;
}
SDL_Finger* Dao_SDL_Finger_New()
{
	SDL_Finger *self = (SDL_Finger*) calloc( 1, sizeof(SDL_Finger) );
	return self;
}
SDL_CommonEvent* Dao_SDL_CommonEvent_New()
{
	SDL_CommonEvent *self = (SDL_CommonEvent*) calloc( 1, sizeof(SDL_CommonEvent) );
	return self;
}
SDL_WindowEvent* Dao_SDL_WindowEvent_New()
{
	SDL_WindowEvent *self = (SDL_WindowEvent*) calloc( 1, sizeof(SDL_WindowEvent) );
	return self;
}
SDL_KeyboardEvent* Dao_SDL_KeyboardEvent_New()
{
	SDL_KeyboardEvent *self = (SDL_KeyboardEvent*) calloc( 1, sizeof(SDL_KeyboardEvent) );
	return self;
}
SDL_TextEditingEvent* Dao_SDL_TextEditingEvent_New()
{
	SDL_TextEditingEvent *self = (SDL_TextEditingEvent*) calloc( 1, sizeof(SDL_TextEditingEvent) );
	return self;
}
SDL_TextInputEvent* Dao_SDL_TextInputEvent_New()
{
	SDL_TextInputEvent *self = (SDL_TextInputEvent*) calloc( 1, sizeof(SDL_TextInputEvent) );
	return self;
}
SDL_MouseMotionEvent* Dao_SDL_MouseMotionEvent_New()
{
	SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*) calloc( 1, sizeof(SDL_MouseMotionEvent) );
	return self;
}
SDL_MouseButtonEvent* Dao_SDL_MouseButtonEvent_New()
{
	SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*) calloc( 1, sizeof(SDL_MouseButtonEvent) );
	return self;
}
SDL_MouseWheelEvent* Dao_SDL_MouseWheelEvent_New()
{
	SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*) calloc( 1, sizeof(SDL_MouseWheelEvent) );
	return self;
}
SDL_JoyAxisEvent* Dao_SDL_JoyAxisEvent_New()
{
	SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*) calloc( 1, sizeof(SDL_JoyAxisEvent) );
	return self;
}
SDL_JoyBallEvent* Dao_SDL_JoyBallEvent_New()
{
	SDL_JoyBallEvent *self = (SDL_JoyBallEvent*) calloc( 1, sizeof(SDL_JoyBallEvent) );
	return self;
}
SDL_JoyHatEvent* Dao_SDL_JoyHatEvent_New()
{
	SDL_JoyHatEvent *self = (SDL_JoyHatEvent*) calloc( 1, sizeof(SDL_JoyHatEvent) );
	return self;
}
SDL_JoyButtonEvent* Dao_SDL_JoyButtonEvent_New()
{
	SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*) calloc( 1, sizeof(SDL_JoyButtonEvent) );
	return self;
}
SDL_JoyDeviceEvent* Dao_SDL_JoyDeviceEvent_New()
{
	SDL_JoyDeviceEvent *self = (SDL_JoyDeviceEvent*) calloc( 1, sizeof(SDL_JoyDeviceEvent) );
	return self;
}
SDL_ControllerAxisEvent* Dao_SDL_ControllerAxisEvent_New()
{
	SDL_ControllerAxisEvent *self = (SDL_ControllerAxisEvent*) calloc( 1, sizeof(SDL_ControllerAxisEvent) );
	return self;
}
SDL_ControllerButtonEvent* Dao_SDL_ControllerButtonEvent_New()
{
	SDL_ControllerButtonEvent *self = (SDL_ControllerButtonEvent*) calloc( 1, sizeof(SDL_ControllerButtonEvent) );
	return self;
}
SDL_ControllerDeviceEvent* Dao_SDL_ControllerDeviceEvent_New()
{
	SDL_ControllerDeviceEvent *self = (SDL_ControllerDeviceEvent*) calloc( 1, sizeof(SDL_ControllerDeviceEvent) );
	return self;
}
SDL_TouchFingerEvent* Dao_SDL_TouchFingerEvent_New()
{
	SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*) calloc( 1, sizeof(SDL_TouchFingerEvent) );
	return self;
}
SDL_MultiGestureEvent* Dao_SDL_MultiGestureEvent_New()
{
	SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*) calloc( 1, sizeof(SDL_MultiGestureEvent) );
	return self;
}
SDL_DollarGestureEvent* Dao_SDL_DollarGestureEvent_New()
{
	SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*) calloc( 1, sizeof(SDL_DollarGestureEvent) );
	return self;
}
SDL_DropEvent* Dao_SDL_DropEvent_New()
{
	SDL_DropEvent *self = (SDL_DropEvent*) calloc( 1, sizeof(SDL_DropEvent) );
	return self;
}
SDL_QuitEvent* Dao_SDL_QuitEvent_New()
{
	SDL_QuitEvent *self = (SDL_QuitEvent*) calloc( 1, sizeof(SDL_QuitEvent) );
	return self;
}
SDL_OSEvent* Dao_SDL_OSEvent_New()
{
	SDL_OSEvent *self = (SDL_OSEvent*) calloc( 1, sizeof(SDL_OSEvent) );
	return self;
}
SDL_UserEvent* Dao_SDL_UserEvent_New()
{
	SDL_UserEvent *self = (SDL_UserEvent*) calloc( 1, sizeof(SDL_UserEvent) );
	return self;
}
SDL_SysWMEvent* Dao_SDL_SysWMEvent_New()
{
	SDL_SysWMEvent *self = (SDL_SysWMEvent*) calloc( 1, sizeof(SDL_SysWMEvent) );
	return self;
}
SDL_Event* Dao_SDL_Event_New()
{
	SDL_Event *self = (SDL_Event*) calloc( 1, sizeof(SDL_Event) );
	return self;
}
SDL_RendererInfo* Dao_SDL_RendererInfo_New()
{
	SDL_RendererInfo *self = (SDL_RendererInfo*) calloc( 1, sizeof(SDL_RendererInfo) );
	return self;
}
SDL_version* Dao_SDL_version_New()
{
	SDL_version *self = (SDL_version*) calloc( 1, sizeof(SDL_version) );
	return self;
}
