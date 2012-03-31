#include"dao_SDL.h"
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
static int DaoPF100E0( int *_cs, DaoRoutine *_ro, DaoObject *_ob, DaoValue *context )
{
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  DaoFactory *_fac = DaoProcess_GetFactory( _proc );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  int X = (int) 0;
  if( _ro == NULL ) goto EndCall;
  DaoFactory_CacheValue( _fac, context );
  _dp = DaoFactory_GetLastValues( _fac, 1 );
  _ro = DaoRoutine_Resolve( _ro, (DaoValue*) _ob, _dp, 1 );
  if( DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) X=(int)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( __daoVmSpace, _proc );
  return X;
}
static long DaoPF100DD( int *_cs, DaoRoutine *_ro, DaoObject *_ob, DaoValue *context, long offset, int whence )
{
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  DaoFactory *_fac = DaoProcess_GetFactory( _proc );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  long X = (long) 0;
  if( _ro == NULL ) goto EndCall;
  DaoFactory_CacheValue( _fac, context );
  DaoFactory_NewInteger( _fac, (int) offset );
  DaoFactory_NewInteger( _fac, (int) whence );
  _dp = DaoFactory_GetLastValues( _fac, 3 );
  _ro = DaoRoutine_Resolve( _ro, (DaoValue*) _ob, _dp, 3 );
  if( DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 3 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) X=(long)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( __daoVmSpace, _proc );
  return X;
}
static size_t DaoPF100DF( int *_cs, DaoRoutine *_ro, DaoObject *_ob, DaoValue *context, const void* ptr, size_t size, size_t maxnum )
{
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  DaoFactory *_fac = DaoProcess_GetFactory( _proc );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  size_t X = (size_t) 0;
  if( _ro == NULL ) goto EndCall;
  DaoFactory_CacheValue( _fac, context );
  DaoFactory_NewCdata( _fac, NULL, (void*) ptr, 0 );
  DaoFactory_NewInteger( _fac, (int) size );
  DaoFactory_NewInteger( _fac, (int) maxnum );
  _dp = DaoFactory_GetLastValues( _fac, 4 );
  _ro = DaoRoutine_Resolve( _ro, (DaoValue*) _ob, _dp, 4 );
  if( DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 4 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) X=(unsigned long)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( __daoVmSpace, _proc );
  return X;
}
static size_t DaoPF100DE( int *_cs, DaoRoutine *_ro, DaoObject *_ob, DaoValue *context, void* ptr, size_t size, size_t maxnum )
{
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  DaoFactory *_fac = DaoProcess_GetFactory( _proc );
  DaoValue *_res, **_dp;
  DaoCdata *_cd;
  size_t X = (size_t) 0;
  if( _ro == NULL ) goto EndCall;
  DaoFactory_CacheValue( _fac, context );
  DaoFactory_NewCdata( _fac, NULL, (void*) ptr, 0 );
  DaoFactory_NewInteger( _fac, (int) size );
  DaoFactory_NewInteger( _fac, (int) maxnum );
  _dp = DaoFactory_GetLastValues( _fac, 4 );
  _ro = DaoRoutine_Resolve( _ro, (DaoValue*) _ob, _dp, 4 );
  if( DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  if( (*_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 4 )) ) goto EndCall;
  _res = DaoProcess_GetReturned( _proc );
  if(DaoValue_CastInteger(_res)) X=(unsigned long)DaoValue_TryGetInteger(_res);
EndCall:
  DaoVmSpace_ReleaseProcess( __daoVmSpace, _proc );
  return X;
}
static void DaoPF10163( int *_cs, DaoRoutine *_ro, DaoObject *_ob, DaoValue *touch )
{
  DaoProcess *_proc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  DaoFactory *_fac = DaoProcess_GetFactory( _proc );
  DaoValue **_dp;
  if( _ro == NULL ) goto EndCall;
  DaoFactory_CacheValue( _fac, touch );
  _dp = DaoFactory_GetLastValues( _fac, 1 );
  _ro = DaoRoutine_Resolve( _ro, (DaoValue*) _ob, _dp, 1 );
  if( DaoRoutine_IsWrapper( _ro ) ) goto EndCall;
  *_cs = DaoProcess_Call( _proc, _ro, (DaoValue*)_ob, _dp, 1 );
EndCall:
  DaoVmSpace_ReleaseProcess( __daoVmSpace, _proc );
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
static long Dao_SDL_RWops_seek( struct SDL_RWops* context, long offset, int whence )
{
  Dao_SDL_RWops *_self = (Dao_SDL_RWops*) context;
  SDL_RWops *_self2 = _self->object;
  DaoCdata *_cdata = _self->_cdata;
  DaoProcess *vmproc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( _cdata, & _obj, "seek" );
  long X = (long) 0;
  if( _ro == NULL || _obj == NULL ) return X;
  return (long)DaoPF100DD( & _cs, _ro, _obj, (DaoValue*)_cdata, offset, whence );
}
static size_t Dao_SDL_RWops_read( struct SDL_RWops* context, void* ptr, size_t size, size_t maxnum )
{
  Dao_SDL_RWops *_self = (Dao_SDL_RWops*) context;
  SDL_RWops *_self2 = _self->object;
  DaoCdata *_cdata = _self->_cdata;
  DaoProcess *vmproc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( _cdata, & _obj, "read" );
  size_t X = (size_t) 0;
  if( _ro == NULL || _obj == NULL ) return X;
  return (size_t)DaoPF100DE( & _cs, _ro, _obj, (DaoValue*)_cdata, ptr, size, maxnum );
}
static size_t Dao_SDL_RWops_write( struct SDL_RWops* context, const void* ptr, size_t size, size_t maxnum )
{
  Dao_SDL_RWops *_self = (Dao_SDL_RWops*) context;
  SDL_RWops *_self2 = _self->object;
  DaoCdata *_cdata = _self->_cdata;
  DaoProcess *vmproc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( _cdata, & _obj, "write" );
  size_t X = (size_t) 0;
  if( _ro == NULL || _obj == NULL ) return X;
  return (size_t)DaoPF100DF( & _cs, _ro, _obj, (DaoValue*)_cdata, ptr, size, maxnum );
}
static int Dao_SDL_RWops_close( struct SDL_RWops* context )
{
  Dao_SDL_RWops *_self = (Dao_SDL_RWops*) context;
  SDL_RWops *_self2 = _self->object;
  DaoCdata *_cdata = _self->_cdata;
  DaoProcess *vmproc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( _cdata, & _obj, "close" );
  int X = (int) 0;
  if( _ro == NULL || _obj == NULL ) return X;
  return (int)DaoPF100E0( & _cs, _ro, _obj, (DaoValue*)_cdata );
}
Dao_SDL_RWops* Dao_SDL_RWops_New()
{
	Dao_SDL_RWops *wrap = calloc( 1, sizeof(Dao_SDL_RWops) );
	SDL_RWops *self = (SDL_RWops*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_SDL_RWops, wrap );
	wrap->object = self;
	self->seek = Dao_SDL_RWops_seek;
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
struct SDL_Keysym* Dao_SDL_Keysym_New()
{
	struct SDL_Keysym *self = (struct SDL_Keysym*) calloc( 1, sizeof(SDL_Keysym) );
	return self;
}
SDL_Finger* Dao_SDL_Finger_New()
{
	SDL_Finger *self = (SDL_Finger*) calloc( 1, sizeof(SDL_Finger) );
	return self;
}
static void Dao_SDL_Touch_FreeTouch( struct SDL_Touch* touch )
{
  Dao_SDL_Touch *_self = (Dao_SDL_Touch*) touch;
  SDL_Touch *_self2 = _self->object;
  DaoCdata *_cdata = _self->_cdata;
  DaoProcess *vmproc = DaoVmSpace_AcquireProcess( __daoVmSpace );
  int _cs = 1;
  DaoObject *_obj = NULL;
  DaoRoutine *_ro = Dao_Get_Object_Method( _cdata, & _obj, "FreeTouch" );
  if( _ro == NULL || _obj == NULL ) return;
  DaoPF10163( & _cs, _ro, _obj, (DaoValue*)_cdata );
}
Dao_SDL_Touch* Dao_SDL_Touch_New()
{
	Dao_SDL_Touch *wrap = calloc( 1, sizeof(Dao_SDL_Touch) );
	SDL_Touch *self = (SDL_Touch*) wrap;
	wrap->_cdata = DaoCdata_New( dao_type_SDL_Touch, wrap );
	wrap->object = self;
	self->FreeTouch = Dao_SDL_Touch_FreeTouch;
	return wrap;
}
struct SDL_WindowEvent* Dao_SDL_WindowEvent_New()
{
	struct SDL_WindowEvent *self = (struct SDL_WindowEvent*) calloc( 1, sizeof(SDL_WindowEvent) );
	return self;
}
struct SDL_KeyboardEvent* Dao_SDL_KeyboardEvent_New()
{
	struct SDL_KeyboardEvent *self = (struct SDL_KeyboardEvent*) calloc( 1, sizeof(SDL_KeyboardEvent) );
	return self;
}
struct SDL_TextEditingEvent* Dao_SDL_TextEditingEvent_New()
{
	struct SDL_TextEditingEvent *self = (struct SDL_TextEditingEvent*) calloc( 1, sizeof(SDL_TextEditingEvent) );
	return self;
}
struct SDL_TextInputEvent* Dao_SDL_TextInputEvent_New()
{
	struct SDL_TextInputEvent *self = (struct SDL_TextInputEvent*) calloc( 1, sizeof(SDL_TextInputEvent) );
	return self;
}
struct SDL_MouseMotionEvent* Dao_SDL_MouseMotionEvent_New()
{
	struct SDL_MouseMotionEvent *self = (struct SDL_MouseMotionEvent*) calloc( 1, sizeof(SDL_MouseMotionEvent) );
	return self;
}
struct SDL_MouseButtonEvent* Dao_SDL_MouseButtonEvent_New()
{
	struct SDL_MouseButtonEvent *self = (struct SDL_MouseButtonEvent*) calloc( 1, sizeof(SDL_MouseButtonEvent) );
	return self;
}
struct SDL_MouseWheelEvent* Dao_SDL_MouseWheelEvent_New()
{
	struct SDL_MouseWheelEvent *self = (struct SDL_MouseWheelEvent*) calloc( 1, sizeof(SDL_MouseWheelEvent) );
	return self;
}
struct SDL_JoyAxisEvent* Dao_SDL_JoyAxisEvent_New()
{
	struct SDL_JoyAxisEvent *self = (struct SDL_JoyAxisEvent*) calloc( 1, sizeof(SDL_JoyAxisEvent) );
	return self;
}
struct SDL_JoyBallEvent* Dao_SDL_JoyBallEvent_New()
{
	struct SDL_JoyBallEvent *self = (struct SDL_JoyBallEvent*) calloc( 1, sizeof(SDL_JoyBallEvent) );
	return self;
}
struct SDL_JoyHatEvent* Dao_SDL_JoyHatEvent_New()
{
	struct SDL_JoyHatEvent *self = (struct SDL_JoyHatEvent*) calloc( 1, sizeof(SDL_JoyHatEvent) );
	return self;
}
struct SDL_JoyButtonEvent* Dao_SDL_JoyButtonEvent_New()
{
	struct SDL_JoyButtonEvent *self = (struct SDL_JoyButtonEvent*) calloc( 1, sizeof(SDL_JoyButtonEvent) );
	return self;
}
struct SDL_TouchFingerEvent* Dao_SDL_TouchFingerEvent_New()
{
	struct SDL_TouchFingerEvent *self = (struct SDL_TouchFingerEvent*) calloc( 1, sizeof(SDL_TouchFingerEvent) );
	return self;
}
struct SDL_TouchButtonEvent* Dao_SDL_TouchButtonEvent_New()
{
	struct SDL_TouchButtonEvent *self = (struct SDL_TouchButtonEvent*) calloc( 1, sizeof(SDL_TouchButtonEvent) );
	return self;
}
struct SDL_MultiGestureEvent* Dao_SDL_MultiGestureEvent_New()
{
	struct SDL_MultiGestureEvent *self = (struct SDL_MultiGestureEvent*) calloc( 1, sizeof(SDL_MultiGestureEvent) );
	return self;
}
struct SDL_DollarGestureEvent* Dao_SDL_DollarGestureEvent_New()
{
	struct SDL_DollarGestureEvent *self = (struct SDL_DollarGestureEvent*) calloc( 1, sizeof(SDL_DollarGestureEvent) );
	return self;
}
struct SDL_DropEvent* Dao_SDL_DropEvent_New()
{
	struct SDL_DropEvent *self = (struct SDL_DropEvent*) calloc( 1, sizeof(SDL_DropEvent) );
	return self;
}
struct SDL_QuitEvent* Dao_SDL_QuitEvent_New()
{
	struct SDL_QuitEvent *self = (struct SDL_QuitEvent*) calloc( 1, sizeof(SDL_QuitEvent) );
	return self;
}
struct SDL_UserEvent* Dao_SDL_UserEvent_New()
{
	struct SDL_UserEvent *self = (struct SDL_UserEvent*) calloc( 1, sizeof(SDL_UserEvent) );
	return self;
}
struct SDL_SysWMEvent* Dao_SDL_SysWMEvent_New()
{
	struct SDL_SysWMEvent *self = (struct SDL_SysWMEvent*) calloc( 1, sizeof(SDL_SysWMEvent) );
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
