#include"dao_SDL.h"
#ifdef __cplusplus
extern "C"{
#endif
/* /usr/include/sys/_types.h */
static DaoTypeBase _opaque_pthread_attr_t_Typer = 
{ "_opaque_pthread_attr_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao__opaque_pthread_attr_t_Typer = & _opaque_pthread_attr_t_Typer;
DaoType *dao_type__opaque_pthread_attr_t = NULL;
/* /usr/include/sys/_structs.h */
static DaoTypeBase fd_set_Typer = 
{ "fd_set", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_fd_set_Typer = & fd_set_Typer;
DaoType *dao_type_fd_set = NULL;
/* /usr/include/stdio.h */
static DaoTypeBase __sFILE_Typer = 
{ "__sFILE", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao___sFILE_Typer = & __sFILE_Typer;
DaoType *dao_type___sFILE = NULL;
/* /usr/include/sys/signal.h */
static DaoTypeBase sigval_Typer = 
{ "sigval", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_sigval_Typer = & sigval_Typer;
DaoType *dao_type_sigval = NULL;
/* /usr/include/sys/signal.h */
static DaoTypeBase sigevent_Typer = 
{ "sigevent", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_sigevent_Typer = & sigevent_Typer;
DaoType *dao_type_sigevent = NULL;
/* /usr/include/sys/signal.h */
static DaoTypeBase __siginfo_Typer = 
{ "__siginfo", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao___siginfo_Typer = & __siginfo_Typer;
DaoType *dao_type___siginfo = NULL;
/* /usr/include/sys/signal.h */
static DaoTypeBase sigvec_Typer = 
{ "sigvec", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_sigvec_Typer = & sigvec_Typer;
DaoType *dao_type_sigvec = NULL;
/* /usr/include/sys/_structs.h */
static DaoTypeBase timeval_Typer = 
{ "timeval", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_timeval_Typer = & timeval_Typer;
DaoType *dao_type_timeval = NULL;
/* /usr/include/sys/resource.h */
static DaoTypeBase rusage_Typer = 
{ "rusage", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_rusage_Typer = & rusage_Typer;
DaoType *dao_type_rusage = NULL;
/* /usr/include/sys/resource.h */
static DaoTypeBase rlimit_Typer = 
{ "rlimit", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_rlimit_Typer = & rlimit_Typer;
DaoType *dao_type_rlimit = NULL;
/* /usr/include/stdlib.h */
static DaoTypeBase div_t_Typer = 
{ "div_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_div_t_Typer = & div_t_Typer;
DaoType *dao_type_div_t = NULL;
/* /usr/include/stdlib.h */
static DaoTypeBase ldiv_t_Typer = 
{ "ldiv_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_ldiv_t_Typer = & ldiv_t_Typer;
DaoType *dao_type_ldiv_t = NULL;
/* /usr/include/stdlib.h */
static DaoTypeBase lldiv_t_Typer = 
{ "lldiv_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_lldiv_t_Typer = & lldiv_t_Typer;
DaoType *dao_type_lldiv_t = NULL;
/* /usr/include/inttypes.h */
static DaoTypeBase imaxdiv_t_Typer = 
{ "imaxdiv_t", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_imaxdiv_t_Typer = & imaxdiv_t_Typer;
DaoType *dao_type_imaxdiv_t = NULL;
/* /usr/include/architecture/i386/math.h */
static DaoTypeBase exception_Typer = 
{ "exception", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_exception_Typer = & exception_Typer;
DaoType *dao_type_exception = NULL;
/* /usr/local/include/SDL2/SDL_assert.h */


static DaoNumItem dao_SDL_assert_data_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_assert_data_GETF_always_ignore( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_assert_data_SETF_always_ignore( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_assert_data_GETF_trigger_count( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_assert_data_SETF_trigger_count( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_assert_data_GETF_condition( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_assert_data_GETF_filename( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_assert_data_GETF_linenum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_assert_data_SETF_linenum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_assert_data_GETF_function( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_assert_data_GETF_next( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_assert_data_SDL_assert_data( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_assert_data_Meths[] = 
{
  { dao_SDL_assert_data_GETF_always_ignore, ".always_ignore( self :SDL_assert_data )=>int" },
  { dao_SDL_assert_data_SETF_always_ignore, ".always_ignore=( self :SDL_assert_data, always_ignore :int )" },
  { dao_SDL_assert_data_GETF_trigger_count, ".trigger_count( self :SDL_assert_data )=>int" },
  { dao_SDL_assert_data_SETF_trigger_count, ".trigger_count=( self :SDL_assert_data, trigger_count :int )" },
  { dao_SDL_assert_data_GETF_condition, ".condition( self :SDL_assert_data )=>string" },
  { dao_SDL_assert_data_GETF_filename, ".filename( self :SDL_assert_data )=>string" },
  { dao_SDL_assert_data_GETF_linenum, ".linenum( self :SDL_assert_data )=>int" },
  { dao_SDL_assert_data_SETF_linenum, ".linenum=( self :SDL_assert_data, linenum :int )" },
  { dao_SDL_assert_data_GETF_function, ".function( self :SDL_assert_data )=>string" },
  { dao_SDL_assert_data_GETF_next, ".next( self :SDL_assert_data )=>SDL_assert_data" },
  { dao_SDL_assert_data_SDL_assert_data, "SDL_assert_data(  )=>SDL_assert_data" },
  { NULL, NULL }
};
static void Dao_SDL_assert_data_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_assert_data_Typer = 
{ "SDL_assert_data", NULL,
  dao_SDL_assert_data_Nums,
  dao_SDL_assert_data_Meths,
  { NULL },
  { NULL },
  Dao_SDL_assert_data_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_assert_data_Typer = & SDL_assert_data_Typer;
DaoType *dao_type_SDL_assert_data = NULL;
static void dao_SDL_assert_data_GETF_always_ignore( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_assert_data *self = (SDL_assert_data*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_assert_data);
  DaoProcess_PutInteger( _proc, (daoint) self->always_ignore );
}
static void dao_SDL_assert_data_SETF_always_ignore( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_assert_data *self = (SDL_assert_data*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_assert_data);
  self->always_ignore = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_assert_data_GETF_trigger_count( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_assert_data *self = (SDL_assert_data*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_assert_data);
  DaoProcess_PutInteger( _proc, (daoint) self->trigger_count );
}
static void dao_SDL_assert_data_SETF_trigger_count( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_assert_data *self = (SDL_assert_data*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_assert_data);
  self->trigger_count = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_assert_data_GETF_condition( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_assert_data *self = (SDL_assert_data*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_assert_data);
  DaoProcess_PutMBString( _proc, (char*) self->condition );
}
static void dao_SDL_assert_data_GETF_filename( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_assert_data *self = (SDL_assert_data*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_assert_data);
  DaoProcess_PutMBString( _proc, (char*) self->filename );
}
static void dao_SDL_assert_data_GETF_linenum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_assert_data *self = (SDL_assert_data*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_assert_data);
  DaoProcess_PutInteger( _proc, (daoint) self->linenum );
}
static void dao_SDL_assert_data_SETF_linenum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_assert_data *self = (SDL_assert_data*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_assert_data);
  self->linenum = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_assert_data_GETF_function( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_assert_data *self = (SDL_assert_data*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_assert_data);
  DaoProcess_PutMBString( _proc, (char*) self->function );
}
static void dao_SDL_assert_data_GETF_next( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_assert_data *self = (SDL_assert_data*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_assert_data);
  DaoProcess_WrapCdata( _proc, (void*) self->next, dao_type_SDL_assert_data );
}
static void dao_SDL_assert_data_SDL_assert_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_assert_data *self = Dao_SDL_assert_data_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_assert_data );
}
/* /usr/include/libkern/OSAtomic.h */
static DaoTypeBase OSQueueHead_Typer = 
{ "OSQueueHead", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_OSQueueHead_Typer = & OSQueueHead_Typer;
DaoType *dao_type_OSQueueHead = NULL;
/* /usr/local/include/SDL2/SDL_atomic.h */


static DaoNumItem dao_SDL_atomic_t_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_atomic_t_GETF_value( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_atomic_t_SETF_value( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_atomic_t_SDL_atomic_t( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_atomic_t_Meths[] = 
{
  { dao_SDL_atomic_t_GETF_value, ".value( self :SDL_atomic_t )=>int" },
  { dao_SDL_atomic_t_SETF_value, ".value=( self :SDL_atomic_t, value :int )" },
  { dao_SDL_atomic_t_SDL_atomic_t, "SDL_atomic_t(  )=>SDL_atomic_t" },
  { NULL, NULL }
};
static void Dao_SDL_atomic_t_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_atomic_t_Typer = 
{ "SDL_atomic_t", NULL,
  dao_SDL_atomic_t_Nums,
  dao_SDL_atomic_t_Meths,
  { NULL },
  { NULL },
  Dao_SDL_atomic_t_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_atomic_t_Typer = & SDL_atomic_t_Typer;
DaoType *dao_type_SDL_atomic_t = NULL;
static void dao_SDL_atomic_t_GETF_value( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_atomic_t *self = (SDL_atomic_t*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_atomic_t);
  DaoProcess_PutInteger( _proc, (daoint) self->value );
}
static void dao_SDL_atomic_t_SETF_value( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_atomic_t *self = (SDL_atomic_t*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_atomic_t);
  self->value = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_atomic_t_SDL_atomic_t( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_atomic_t *self = Dao_SDL_atomic_t_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_atomic_t );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static DaoTypeBase SDL_mutex_Typer = 
{ "SDL_mutex", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_SDL_mutex_Typer = & SDL_mutex_Typer;
DaoType *dao_type_SDL_mutex = NULL;
/* /usr/local/include/SDL2/SDL_mutex.h */
static DaoTypeBase SDL_semaphore_Typer = 
{ "SDL_semaphore", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_SDL_semaphore_Typer = & SDL_semaphore_Typer;
DaoType *dao_type_SDL_semaphore = NULL;
/* /usr/local/include/SDL2/SDL_mutex.h */
static DaoTypeBase SDL_cond_Typer = 
{ "SDL_cond", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_SDL_cond_Typer = & SDL_cond_Typer;
DaoType *dao_type_SDL_cond = NULL;
/* /usr/local/include/SDL2/SDL_thread.h */
static DaoTypeBase SDL_Thread_Typer = 
{ "SDL_Thread", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_SDL_Thread_Typer = & SDL_Thread_Typer;
DaoType *dao_type_SDL_Thread = NULL;
/* /usr/local/include/SDL2/SDL_rwops.h */


static DaoNumItem dao_SDL_RWops_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_RWops_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RWops_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RWops_SDL_RWops( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_RWops_Meths[] = 
{
  { dao_SDL_RWops_GETF_type, ".type( self :SDL_RWops )=>int" },
  { dao_SDL_RWops_SETF_type, ".type=( self :SDL_RWops, type :int )" },
  { dao_SDL_RWops_SDL_RWops, "SDL_RWops(  )=>SDL_RWops" },
  { NULL, NULL }
};
static void Dao_SDL_RWops_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_RWops_Typer = 
{ "SDL_RWops", NULL,
  dao_SDL_RWops_Nums,
  dao_SDL_RWops_Meths,
  { NULL },
  { NULL },
  Dao_SDL_RWops_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_RWops_Typer = & SDL_RWops_Typer;
DaoType *dao_type_SDL_RWops = NULL;
static void dao_SDL_RWops_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops *self = (SDL_RWops*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RWops);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_RWops_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops *self = (SDL_RWops*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RWops);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_RWops_SDL_RWops( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_SDL_RWops *self = Dao_SDL_RWops_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/SDL2/SDL_audio.h */


static DaoNumItem dao_SDL_AudioSpec_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_AudioSpec_GETF_freq( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_SETF_freq( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_GETF_format( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_SETF_format( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_GETF_channels( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_SETF_channels( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_GETF_silence( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_SETF_silence( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_GETF_samples( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_SETF_samples( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_GETF_padding( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_SETF_padding( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_GETF_userdata( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_SDL_AudioSpec( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_AudioSpec_Meths[] = 
{
  { dao_SDL_AudioSpec_GETF_freq, ".freq( self :SDL_AudioSpec )=>int" },
  { dao_SDL_AudioSpec_SETF_freq, ".freq=( self :SDL_AudioSpec, freq :int )" },
  { dao_SDL_AudioSpec_GETF_format, ".format( self :SDL_AudioSpec )=>int" },
  { dao_SDL_AudioSpec_SETF_format, ".format=( self :SDL_AudioSpec, format :int )" },
  { dao_SDL_AudioSpec_GETF_channels, ".channels( self :SDL_AudioSpec )=>int" },
  { dao_SDL_AudioSpec_SETF_channels, ".channels=( self :SDL_AudioSpec, channels :int )" },
  { dao_SDL_AudioSpec_GETF_silence, ".silence( self :SDL_AudioSpec )=>int" },
  { dao_SDL_AudioSpec_SETF_silence, ".silence=( self :SDL_AudioSpec, silence :int )" },
  { dao_SDL_AudioSpec_GETF_samples, ".samples( self :SDL_AudioSpec )=>int" },
  { dao_SDL_AudioSpec_SETF_samples, ".samples=( self :SDL_AudioSpec, samples :int )" },
  { dao_SDL_AudioSpec_GETF_padding, ".padding( self :SDL_AudioSpec )=>int" },
  { dao_SDL_AudioSpec_SETF_padding, ".padding=( self :SDL_AudioSpec, padding :int )" },
  { dao_SDL_AudioSpec_GETF_size, ".size( self :SDL_AudioSpec )=>int" },
  { dao_SDL_AudioSpec_SETF_size, ".size=( self :SDL_AudioSpec, size :int )" },
  { dao_SDL_AudioSpec_GETF_userdata, ".userdata( self :SDL_AudioSpec )=>cdata" },
  { dao_SDL_AudioSpec_SDL_AudioSpec, "SDL_AudioSpec(  )=>SDL_AudioSpec" },
  { NULL, NULL }
};
static void Dao_SDL_AudioSpec_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_AudioSpec_Typer = 
{ "SDL_AudioSpec", NULL,
  dao_SDL_AudioSpec_Nums,
  dao_SDL_AudioSpec_Meths,
  { NULL },
  { NULL },
  Dao_SDL_AudioSpec_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_AudioSpec_Typer = & SDL_AudioSpec_Typer;
DaoType *dao_type_SDL_AudioSpec = NULL;
static void dao_SDL_AudioSpec_GETF_freq( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_PutInteger( _proc, (daoint) self->freq );
}
static void dao_SDL_AudioSpec_SETF_freq( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  self->freq = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioSpec_GETF_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_PutInteger( _proc, (daoint) self->format );
}
static void dao_SDL_AudioSpec_SETF_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  self->format = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioSpec_GETF_channels( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_PutInteger( _proc, (daoint) self->channels );
}
static void dao_SDL_AudioSpec_SETF_channels( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  self->channels = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioSpec_GETF_silence( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_PutInteger( _proc, (daoint) self->silence );
}
static void dao_SDL_AudioSpec_SETF_silence( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  self->silence = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioSpec_GETF_samples( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_PutInteger( _proc, (daoint) self->samples );
}
static void dao_SDL_AudioSpec_SETF_samples( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  self->samples = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioSpec_GETF_padding( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_PutInteger( _proc, (daoint) self->padding );
}
static void dao_SDL_AudioSpec_SETF_padding( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  self->padding = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioSpec_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_PutInteger( _proc, (daoint) self->size );
}
static void dao_SDL_AudioSpec_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  self->size = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioSpec_GETF_userdata( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_PutCdata( _proc, (void*) self->userdata, NULL );
}
static void dao_SDL_AudioSpec_SDL_AudioSpec( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_AudioSpec *self = Dao_SDL_AudioSpec_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_AudioSpec );
}
/* /usr/local/include/SDL2/SDL_audio.h */


static DaoNumItem dao_SDL_AudioCVT_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_AudioCVT_GETF_needed( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_SETF_needed( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_GETF_src_format( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_SETF_src_format( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_GETF_dst_format( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_SETF_dst_format( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_GETF_rate_incr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_SETF_rate_incr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_GETF_buf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_GETF_len( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_SETF_len( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_GETF_len_cvt( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_SETF_len_cvt( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_GETF_len_mult( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_SETF_len_mult( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_GETF_len_ratio( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_SETF_len_ratio( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_GETF_filter_index( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_SETF_filter_index( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioCVT_SDL_AudioCVT( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_AudioCVT_Meths[] = 
{
  { dao_SDL_AudioCVT_GETF_needed, ".needed( self :SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_SETF_needed, ".needed=( self :SDL_AudioCVT, needed :int )" },
  { dao_SDL_AudioCVT_GETF_src_format, ".src_format( self :SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_SETF_src_format, ".src_format=( self :SDL_AudioCVT, src_format :int )" },
  { dao_SDL_AudioCVT_GETF_dst_format, ".dst_format( self :SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_SETF_dst_format, ".dst_format=( self :SDL_AudioCVT, dst_format :int )" },
  { dao_SDL_AudioCVT_GETF_rate_incr, ".rate_incr( self :SDL_AudioCVT )=>double" },
  { dao_SDL_AudioCVT_SETF_rate_incr, ".rate_incr=( self :SDL_AudioCVT, rate_incr :double )" },
  { dao_SDL_AudioCVT_GETF_buf, ".buf( self :SDL_AudioCVT )=>string" },
  { dao_SDL_AudioCVT_GETF_len, ".len( self :SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_SETF_len, ".len=( self :SDL_AudioCVT, len :int )" },
  { dao_SDL_AudioCVT_GETF_len_cvt, ".len_cvt( self :SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_SETF_len_cvt, ".len_cvt=( self :SDL_AudioCVT, len_cvt :int )" },
  { dao_SDL_AudioCVT_GETF_len_mult, ".len_mult( self :SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_SETF_len_mult, ".len_mult=( self :SDL_AudioCVT, len_mult :int )" },
  { dao_SDL_AudioCVT_GETF_len_ratio, ".len_ratio( self :SDL_AudioCVT )=>double" },
  { dao_SDL_AudioCVT_SETF_len_ratio, ".len_ratio=( self :SDL_AudioCVT, len_ratio :double )" },
  { dao_SDL_AudioCVT_GETF_filter_index, ".filter_index( self :SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_SETF_filter_index, ".filter_index=( self :SDL_AudioCVT, filter_index :int )" },
  { dao_SDL_AudioCVT_SDL_AudioCVT, "SDL_AudioCVT(  )=>SDL_AudioCVT" },
  { NULL, NULL }
};
static void Dao_SDL_AudioCVT_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_AudioCVT_Typer = 
{ "SDL_AudioCVT", NULL,
  dao_SDL_AudioCVT_Nums,
  dao_SDL_AudioCVT_Meths,
  { NULL },
  { NULL },
  Dao_SDL_AudioCVT_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_AudioCVT_Typer = & SDL_AudioCVT_Typer;
DaoType *dao_type_SDL_AudioCVT = NULL;
static void dao_SDL_AudioCVT_GETF_needed( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutInteger( _proc, (daoint) self->needed );
}
static void dao_SDL_AudioCVT_SETF_needed( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->needed = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_src_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutInteger( _proc, (daoint) self->src_format );
}
static void dao_SDL_AudioCVT_SETF_src_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->src_format = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_dst_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutInteger( _proc, (daoint) self->dst_format );
}
static void dao_SDL_AudioCVT_SETF_dst_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->dst_format = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_rate_incr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutDouble( _proc, (double) self->rate_incr );
}
static void dao_SDL_AudioCVT_SETF_rate_incr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->rate_incr = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_buf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutMBString( _proc, (char*) self->buf );
}
static void dao_SDL_AudioCVT_GETF_len( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutInteger( _proc, (daoint) self->len );
}
static void dao_SDL_AudioCVT_SETF_len( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->len = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_len_cvt( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutInteger( _proc, (daoint) self->len_cvt );
}
static void dao_SDL_AudioCVT_SETF_len_cvt( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->len_cvt = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_len_mult( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutInteger( _proc, (daoint) self->len_mult );
}
static void dao_SDL_AudioCVT_SETF_len_mult( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->len_mult = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_len_ratio( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutDouble( _proc, (double) self->len_ratio );
}
static void dao_SDL_AudioCVT_SETF_len_ratio( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->len_ratio = (double) DaoValue_TryGetDouble(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_filter_index( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutInteger( _proc, (daoint) self->filter_index );
}
static void dao_SDL_AudioCVT_SETF_filter_index( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->filter_index = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioCVT_SDL_AudioCVT( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_AudioCVT *self = Dao_SDL_AudioCVT_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_AudioCVT );
}
/* /usr/local/include/SDL2/SDL_pixels.h */


static DaoNumItem dao_SDL_Color_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_Color_GETF_r( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_SETF_r( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_GETF_g( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_SETF_g( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_GETF_b( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_SETF_b( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_GETF_unused( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_SETF_unused( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_SDL_Color( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_Color_Meths[] = 
{
  { dao_SDL_Color_GETF_r, ".r( self :SDL_Color )=>int" },
  { dao_SDL_Color_SETF_r, ".r=( self :SDL_Color, r :int )" },
  { dao_SDL_Color_GETF_g, ".g( self :SDL_Color )=>int" },
  { dao_SDL_Color_SETF_g, ".g=( self :SDL_Color, g :int )" },
  { dao_SDL_Color_GETF_b, ".b( self :SDL_Color )=>int" },
  { dao_SDL_Color_SETF_b, ".b=( self :SDL_Color, b :int )" },
  { dao_SDL_Color_GETF_unused, ".unused( self :SDL_Color )=>int" },
  { dao_SDL_Color_SETF_unused, ".unused=( self :SDL_Color, unused :int )" },
  { dao_SDL_Color_SDL_Color, "SDL_Color(  )=>SDL_Color" },
  { NULL, NULL }
};
static void Dao_SDL_Color_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_Color_Typer = 
{ "SDL_Color", NULL,
  dao_SDL_Color_Nums,
  dao_SDL_Color_Meths,
  { NULL },
  { NULL },
  Dao_SDL_Color_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_Color_Typer = & SDL_Color_Typer;
DaoType *dao_type_SDL_Color = NULL;
static void dao_SDL_Color_GETF_r( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  DaoProcess_PutInteger( _proc, (daoint) self->r );
}
static void dao_SDL_Color_SETF_r( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  self->r = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Color_GETF_g( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  DaoProcess_PutInteger( _proc, (daoint) self->g );
}
static void dao_SDL_Color_SETF_g( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  self->g = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Color_GETF_b( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  DaoProcess_PutInteger( _proc, (daoint) self->b );
}
static void dao_SDL_Color_SETF_b( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  self->b = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Color_GETF_unused( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  DaoProcess_PutInteger( _proc, (daoint) self->unused );
}
static void dao_SDL_Color_SETF_unused( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  self->unused = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Color_SDL_Color( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_Color *self = Dao_SDL_Color_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_Color );
}
/* /usr/local/include/SDL2/SDL_pixels.h */


static DaoNumItem dao_SDL_Palette_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_Palette_GETF_ncolors( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Palette_SETF_ncolors( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Palette_GETF_colors( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Palette_GETF_version( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Palette_SETF_version( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Palette_GETF_refcount( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Palette_SETF_refcount( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Palette_SDL_Palette( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_Palette_Meths[] = 
{
  { dao_SDL_Palette_GETF_ncolors, ".ncolors( self :SDL_Palette )=>int" },
  { dao_SDL_Palette_SETF_ncolors, ".ncolors=( self :SDL_Palette, ncolors :int )" },
  { dao_SDL_Palette_GETF_colors, ".colors( self :SDL_Palette )=>SDL_Color" },
  { dao_SDL_Palette_GETF_version, ".version( self :SDL_Palette )=>int" },
  { dao_SDL_Palette_SETF_version, ".version=( self :SDL_Palette, version :int )" },
  { dao_SDL_Palette_GETF_refcount, ".refcount( self :SDL_Palette )=>int" },
  { dao_SDL_Palette_SETF_refcount, ".refcount=( self :SDL_Palette, refcount :int )" },
  { dao_SDL_Palette_SDL_Palette, "SDL_Palette(  )=>SDL_Palette" },
  { NULL, NULL }
};
static void Dao_SDL_Palette_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_Palette_Typer = 
{ "SDL_Palette", NULL,
  dao_SDL_Palette_Nums,
  dao_SDL_Palette_Meths,
  { NULL },
  { NULL },
  Dao_SDL_Palette_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_Palette_Typer = & SDL_Palette_Typer;
DaoType *dao_type_SDL_Palette = NULL;
static void dao_SDL_Palette_GETF_ncolors( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Palette *self = (SDL_Palette*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Palette);
  DaoProcess_PutInteger( _proc, (daoint) self->ncolors );
}
static void dao_SDL_Palette_SETF_ncolors( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Palette *self = (SDL_Palette*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Palette);
  self->ncolors = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Palette_GETF_colors( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Palette *self = (SDL_Palette*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Palette);
  DaoProcess_WrapCdata( _proc, (void*) self->colors, dao_type_SDL_Color );
}
static void dao_SDL_Palette_GETF_version( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Palette *self = (SDL_Palette*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Palette);
  DaoProcess_PutInteger( _proc, (daoint) self->version );
}
static void dao_SDL_Palette_SETF_version( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Palette *self = (SDL_Palette*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Palette);
  self->version = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Palette_GETF_refcount( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Palette *self = (SDL_Palette*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Palette);
  DaoProcess_PutInteger( _proc, (daoint) self->refcount );
}
static void dao_SDL_Palette_SETF_refcount( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Palette *self = (SDL_Palette*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Palette);
  self->refcount = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Palette_SDL_Palette( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_Palette *self = Dao_SDL_Palette_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_Palette );
}
/* /usr/local/include/SDL2/SDL_pixels.h */


static DaoNumItem dao_SDL_PixelFormat_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_PixelFormat_GETF_format( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_format( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_palette( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_BitsPerPixel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_BitsPerPixel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_BytesPerPixel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_BytesPerPixel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_padding( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_padding( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_Rmask( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_Rmask( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_Gmask( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_Gmask( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_Bmask( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_Bmask( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_Amask( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_Amask( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_Rloss( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_Rloss( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_Gloss( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_Gloss( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_Bloss( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_Bloss( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_Aloss( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_Aloss( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_Rshift( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_Rshift( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_Gshift( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_Gshift( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_Bshift( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_Bshift( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_Ashift( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_Ashift( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_refcount( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SETF_refcount( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_GETF_next( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_PixelFormat_SDL_PixelFormat( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_PixelFormat_Meths[] = 
{
  { dao_SDL_PixelFormat_GETF_format, ".format( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_format, ".format=( self :SDL_PixelFormat, format :int )" },
  { dao_SDL_PixelFormat_GETF_palette, ".palette( self :SDL_PixelFormat )=>SDL_Palette" },
  { dao_SDL_PixelFormat_GETF_BitsPerPixel, ".BitsPerPixel( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_BitsPerPixel, ".BitsPerPixel=( self :SDL_PixelFormat, BitsPerPixel :int )" },
  { dao_SDL_PixelFormat_GETF_BytesPerPixel, ".BytesPerPixel( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_BytesPerPixel, ".BytesPerPixel=( self :SDL_PixelFormat, BytesPerPixel :int )" },
  { dao_SDL_PixelFormat_GETF_padding, ".padding( self :SDL_PixelFormat )=>array<int>" },
  { dao_SDL_PixelFormat_SETF_padding, ".padding=( self :SDL_PixelFormat, padding :array<int> )" },
  { dao_SDL_PixelFormat_GETF_Rmask, ".Rmask( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Rmask, ".Rmask=( self :SDL_PixelFormat, Rmask :int )" },
  { dao_SDL_PixelFormat_GETF_Gmask, ".Gmask( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Gmask, ".Gmask=( self :SDL_PixelFormat, Gmask :int )" },
  { dao_SDL_PixelFormat_GETF_Bmask, ".Bmask( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Bmask, ".Bmask=( self :SDL_PixelFormat, Bmask :int )" },
  { dao_SDL_PixelFormat_GETF_Amask, ".Amask( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Amask, ".Amask=( self :SDL_PixelFormat, Amask :int )" },
  { dao_SDL_PixelFormat_GETF_Rloss, ".Rloss( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Rloss, ".Rloss=( self :SDL_PixelFormat, Rloss :int )" },
  { dao_SDL_PixelFormat_GETF_Gloss, ".Gloss( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Gloss, ".Gloss=( self :SDL_PixelFormat, Gloss :int )" },
  { dao_SDL_PixelFormat_GETF_Bloss, ".Bloss( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Bloss, ".Bloss=( self :SDL_PixelFormat, Bloss :int )" },
  { dao_SDL_PixelFormat_GETF_Aloss, ".Aloss( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Aloss, ".Aloss=( self :SDL_PixelFormat, Aloss :int )" },
  { dao_SDL_PixelFormat_GETF_Rshift, ".Rshift( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Rshift, ".Rshift=( self :SDL_PixelFormat, Rshift :int )" },
  { dao_SDL_PixelFormat_GETF_Gshift, ".Gshift( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Gshift, ".Gshift=( self :SDL_PixelFormat, Gshift :int )" },
  { dao_SDL_PixelFormat_GETF_Bshift, ".Bshift( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Bshift, ".Bshift=( self :SDL_PixelFormat, Bshift :int )" },
  { dao_SDL_PixelFormat_GETF_Ashift, ".Ashift( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Ashift, ".Ashift=( self :SDL_PixelFormat, Ashift :int )" },
  { dao_SDL_PixelFormat_GETF_refcount, ".refcount( self :SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_refcount, ".refcount=( self :SDL_PixelFormat, refcount :int )" },
  { dao_SDL_PixelFormat_GETF_next, ".next( self :SDL_PixelFormat )=>SDL_PixelFormat" },
  { dao_SDL_PixelFormat_SDL_PixelFormat, "SDL_PixelFormat(  )=>SDL_PixelFormat" },
  { NULL, NULL }
};
static void Dao_SDL_PixelFormat_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_PixelFormat_Typer = 
{ "SDL_PixelFormat", NULL,
  dao_SDL_PixelFormat_Nums,
  dao_SDL_PixelFormat_Meths,
  { NULL },
  { NULL },
  Dao_SDL_PixelFormat_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_PixelFormat_Typer = & SDL_PixelFormat_Typer;
DaoType *dao_type_SDL_PixelFormat = NULL;
static void dao_SDL_PixelFormat_GETF_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->format );
}
static void dao_SDL_PixelFormat_SETF_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->format = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_palette( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_WrapCdata( _proc, (void*) self->palette, dao_type_SDL_Palette );
}
static void dao_SDL_PixelFormat_GETF_BitsPerPixel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->BitsPerPixel );
}
static void dao_SDL_PixelFormat_SETF_BitsPerPixel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->BitsPerPixel = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_BytesPerPixel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->BytesPerPixel );
}
static void dao_SDL_PixelFormat_SETF_BytesPerPixel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->BytesPerPixel = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_padding( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutBytes( _proc, (char*) self->padding, 2 );
}
static void dao_SDL_PixelFormat_SETF_padding( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  int size = DaoString_Size( (DaoString*)_p[1] );
  if( size > 2 ) size = 2;
  memmove( self->padding, DaoValue_TryGetMBString( _p[1] ), size );
}
static void dao_SDL_PixelFormat_GETF_Rmask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->Rmask );
}
static void dao_SDL_PixelFormat_SETF_Rmask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Rmask = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Gmask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->Gmask );
}
static void dao_SDL_PixelFormat_SETF_Gmask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Gmask = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Bmask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->Bmask );
}
static void dao_SDL_PixelFormat_SETF_Bmask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Bmask = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Amask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->Amask );
}
static void dao_SDL_PixelFormat_SETF_Amask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Amask = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Rloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->Rloss );
}
static void dao_SDL_PixelFormat_SETF_Rloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Rloss = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Gloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->Gloss );
}
static void dao_SDL_PixelFormat_SETF_Gloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Gloss = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Bloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->Bloss );
}
static void dao_SDL_PixelFormat_SETF_Bloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Bloss = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Aloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->Aloss );
}
static void dao_SDL_PixelFormat_SETF_Aloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Aloss = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Rshift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->Rshift );
}
static void dao_SDL_PixelFormat_SETF_Rshift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Rshift = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Gshift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->Gshift );
}
static void dao_SDL_PixelFormat_SETF_Gshift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Gshift = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Bshift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->Bshift );
}
static void dao_SDL_PixelFormat_SETF_Bshift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Bshift = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Ashift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->Ashift );
}
static void dao_SDL_PixelFormat_SETF_Ashift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Ashift = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_refcount( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (daoint) self->refcount );
}
static void dao_SDL_PixelFormat_SETF_refcount( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->refcount = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_next( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_WrapCdata( _proc, (void*) self->next, dao_type_SDL_PixelFormat );
}
static void dao_SDL_PixelFormat_SDL_PixelFormat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_PixelFormat *self = Dao_SDL_PixelFormat_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_PixelFormat );
}
/* /usr/local/include/SDL2/SDL_rect.h */


static DaoNumItem dao_SDL_Point_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_Point_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Point_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Point_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Point_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Point_SDL_Point( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_Point_Meths[] = 
{
  { dao_SDL_Point_GETF_x, ".x( self :SDL_Point )=>int" },
  { dao_SDL_Point_SETF_x, ".x=( self :SDL_Point, x :int )" },
  { dao_SDL_Point_GETF_y, ".y( self :SDL_Point )=>int" },
  { dao_SDL_Point_SETF_y, ".y=( self :SDL_Point, y :int )" },
  { dao_SDL_Point_SDL_Point, "SDL_Point(  )=>SDL_Point" },
  { NULL, NULL }
};
static void Dao_SDL_Point_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_Point_Typer = 
{ "SDL_Point", NULL,
  dao_SDL_Point_Nums,
  dao_SDL_Point_Meths,
  { NULL },
  { NULL },
  Dao_SDL_Point_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_Point_Typer = & SDL_Point_Typer;
DaoType *dao_type_SDL_Point = NULL;
static void dao_SDL_Point_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Point *self = (SDL_Point*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Point);
  DaoProcess_PutInteger( _proc, (daoint) self->x );
}
static void dao_SDL_Point_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Point *self = (SDL_Point*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Point);
  self->x = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Point_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Point *self = (SDL_Point*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Point);
  DaoProcess_PutInteger( _proc, (daoint) self->y );
}
static void dao_SDL_Point_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Point *self = (SDL_Point*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Point);
  self->y = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Point_SDL_Point( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_Point *self = Dao_SDL_Point_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_Point );
}
/* /usr/local/include/SDL2/SDL_rect.h */


static DaoNumItem dao_SDL_Rect_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_Rect_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Rect_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Rect_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Rect_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Rect_GETF_w( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Rect_SETF_w( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Rect_GETF_h( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Rect_SETF_h( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Rect_SDL_Rect( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_Rect_Meths[] = 
{
  { dao_SDL_Rect_GETF_x, ".x( self :SDL_Rect )=>int" },
  { dao_SDL_Rect_SETF_x, ".x=( self :SDL_Rect, x :int )" },
  { dao_SDL_Rect_GETF_y, ".y( self :SDL_Rect )=>int" },
  { dao_SDL_Rect_SETF_y, ".y=( self :SDL_Rect, y :int )" },
  { dao_SDL_Rect_GETF_w, ".w( self :SDL_Rect )=>int" },
  { dao_SDL_Rect_SETF_w, ".w=( self :SDL_Rect, w :int )" },
  { dao_SDL_Rect_GETF_h, ".h( self :SDL_Rect )=>int" },
  { dao_SDL_Rect_SETF_h, ".h=( self :SDL_Rect, h :int )" },
  { dao_SDL_Rect_SDL_Rect, "SDL_Rect(  )=>SDL_Rect" },
  { NULL, NULL }
};
static void Dao_SDL_Rect_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_Rect_Typer = 
{ "SDL_Rect", NULL,
  dao_SDL_Rect_Nums,
  dao_SDL_Rect_Meths,
  { NULL },
  { NULL },
  Dao_SDL_Rect_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_Rect_Typer = & SDL_Rect_Typer;
DaoType *dao_type_SDL_Rect = NULL;
static void dao_SDL_Rect_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  DaoProcess_PutInteger( _proc, (daoint) self->x );
}
static void dao_SDL_Rect_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  self->x = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Rect_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  DaoProcess_PutInteger( _proc, (daoint) self->y );
}
static void dao_SDL_Rect_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  self->y = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Rect_GETF_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  DaoProcess_PutInteger( _proc, (daoint) self->w );
}
static void dao_SDL_Rect_SETF_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  self->w = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Rect_GETF_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  DaoProcess_PutInteger( _proc, (daoint) self->h );
}
static void dao_SDL_Rect_SETF_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  self->h = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Rect_SDL_Rect( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_Rect *self = Dao_SDL_Rect_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_Rect );
}
/* /usr/local/include/SDL2/SDL_surface.h */


static DaoNumItem dao_SDL_Surface_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_Surface_GETF_flags( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Surface_GETF_format( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Surface_GETF_w( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Surface_GETF_h( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Surface_GETF_pitch( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Surface_GETF_pixels( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Surface_GETI_Pixel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Surface_SETI_Pixel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Surface_GETF_userdata( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Surface_GETF_locked( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Surface_GETF_lock_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Surface_GETF_clip_rect( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Surface_GETF_map( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Surface_GETF_refcount( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Surface_SDL_Surface( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_Surface_Meths[] = 
{
  { dao_SDL_Surface_GETF_flags, ".flags( self :SDL_Surface )=>int" },
  { dao_SDL_Surface_GETF_format, ".format( self :SDL_Surface )=>SDL_PixelFormat" },
  { dao_SDL_Surface_GETF_w, ".w( self :SDL_Surface )=>int" },
  { dao_SDL_Surface_GETF_h, ".h( self :SDL_Surface )=>int" },
  { dao_SDL_Surface_GETF_pitch, ".pitch( self :SDL_Surface )=>int" },
  { dao_SDL_Surface_GETF_pixels, ".pixels( self :SDL_Surface )=>cdata" },
  { dao_SDL_Surface_GETI_Pixel, "[]( self :SDL_Surface, i :int, j :int, pixel :enum<uint8,uint16,uint32>=$uint8 )=>int" },
  { dao_SDL_Surface_SETI_Pixel, "[]=( self :SDL_Surface, value :int, i :int, j :int, pixel :enum<uint8,uint16,uint32>=$uint8 )" },
  { dao_SDL_Surface_GETF_userdata, ".userdata( self :SDL_Surface )=>cdata" },
  { dao_SDL_Surface_GETF_locked, ".locked( self :SDL_Surface )=>int" },
  { dao_SDL_Surface_GETF_lock_data, ".lock_data( self :SDL_Surface )=>cdata" },
  { dao_SDL_Surface_GETF_clip_rect, ".clip_rect( self :SDL_Surface )=>SDL_Rect" },
  { dao_SDL_Surface_GETF_map, ".map( self :SDL_Surface )=>SDL_BlitMap" },
  { dao_SDL_Surface_GETF_refcount, ".refcount( self :SDL_Surface )=>int" },
  { dao_SDL_Surface_SDL_Surface, "SDL_Surface(  )=>SDL_Surface" },
  { NULL, NULL }
};
static void Dao_SDL_Surface_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_Surface_Typer = 
{ "SDL_Surface", NULL,
  dao_SDL_Surface_Nums,
  dao_SDL_Surface_Meths,
  { NULL },
  { NULL },
  Dao_SDL_Surface_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_Surface_Typer = & SDL_Surface_Typer;
DaoType *dao_type_SDL_Surface = NULL;
static void dao_SDL_Surface_GETF_flags( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_PutInteger( _proc, (daoint) self->flags );
}
static void dao_SDL_Surface_GETF_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_WrapCdata( _proc, (void*) self->format, dao_type_SDL_PixelFormat );
}
static void dao_SDL_Surface_GETF_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_PutInteger( _proc, (daoint) self->w );
}
static void dao_SDL_Surface_GETF_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_PutInteger( _proc, (daoint) self->h );
}
static void dao_SDL_Surface_GETF_pitch( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_PutInteger( _proc, (daoint) self->pitch );
}
static void dao_SDL_Surface_GETF_pixels( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_PutCdata( _proc, (void*) self->pixels, NULL );
}
static void dao_SDL_Surface_GETI_Pixel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  daoint i = DaoValue_TryGetInteger( _p[1] );
  daoint j = DaoValue_TryGetInteger( _p[2] );
  daoint pixel = 0;
  switch( DaoValue_TryGetEnum( _p[3] ) ){
  case 0:
  {
    unsigned char *pixels = (unsigned char*) self->pixels;
    pixel = pixels[i*self->pitch + j];
    break;
  }
  case 1:
  {
    unsigned short *pixels = (unsigned short*) self->pixels;
    pixel = pixels[i*self->pitch + j];
    break;
  }
  case 2:
  {
    unsigned int *pixels = (unsigned int*) self->pixels;
    pixel = pixels[i*self->pitch + j];
    break;
  }
  default: break;
  }
  DaoProcess_PutInteger( _proc, pixel );
}
static void dao_SDL_Surface_SETI_Pixel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  daoint i = DaoValue_TryGetInteger( _p[1] );
  daoint j = DaoValue_TryGetInteger( _p[2] );
  daoint pixel = DaoValue_TryGetInteger( _p[0] );
  switch( DaoValue_TryGetEnum( _p[3] ) ){
  case 0:
  {
    unsigned char *pixels = (unsigned char*) self->pixels;
    pixels[i*self->pitch + j] = pixel;
    break;
  }
  case 1:
  {
    unsigned short *pixels = (unsigned short*) self->pixels;
    pixels[i*self->pitch + j] = pixel;
    break;
  }
  case 2:
  {
    unsigned int *pixels = (unsigned int*) self->pixels;
    pixels[i*self->pitch + j] = pixel;
    break;
  }
  default: break;
  }
  DaoProcess_PutInteger( _proc, pixel );
}
static void dao_SDL_Surface_GETF_userdata( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_PutCdata( _proc, (void*) self->userdata, NULL );
}
static void dao_SDL_Surface_GETF_locked( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_PutInteger( _proc, (daoint) self->locked );
}
static void dao_SDL_Surface_GETF_lock_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_PutCdata( _proc, (void*) self->lock_data, NULL );
}
static void dao_SDL_Surface_GETF_clip_rect( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_WrapCdata( _proc, (void*)&self->clip_rect, dao_type_SDL_Rect );
}
static void dao_SDL_Surface_GETF_map( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_WrapCdata( _proc, (void*) self->map, dao_type_SDL_BlitMap );
}
static void dao_SDL_Surface_GETF_refcount( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_PutInteger( _proc, (daoint) self->refcount );
}
static void dao_SDL_Surface_SDL_Surface( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_Surface *self = Dao_SDL_Surface_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_Surface );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static DaoTypeBase SDL_BlitMap_Typer = 
{ "SDL_BlitMap", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_SDL_BlitMap_Typer = & SDL_BlitMap_Typer;
DaoType *dao_type_SDL_BlitMap = NULL;
/* /usr/local/include/SDL2/SDL_video.h */


static DaoNumItem dao_SDL_DisplayMode_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_DisplayMode_GETF_format( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DisplayMode_SETF_format( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DisplayMode_GETF_w( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DisplayMode_SETF_w( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DisplayMode_GETF_h( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DisplayMode_SETF_h( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DisplayMode_GETF_refresh_rate( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DisplayMode_SETF_refresh_rate( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DisplayMode_GETF_driverdata( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DisplayMode_SDL_DisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_DisplayMode_Meths[] = 
{
  { dao_SDL_DisplayMode_GETF_format, ".format( self :SDL_DisplayMode )=>int" },
  { dao_SDL_DisplayMode_SETF_format, ".format=( self :SDL_DisplayMode, format :int )" },
  { dao_SDL_DisplayMode_GETF_w, ".w( self :SDL_DisplayMode )=>int" },
  { dao_SDL_DisplayMode_SETF_w, ".w=( self :SDL_DisplayMode, w :int )" },
  { dao_SDL_DisplayMode_GETF_h, ".h( self :SDL_DisplayMode )=>int" },
  { dao_SDL_DisplayMode_SETF_h, ".h=( self :SDL_DisplayMode, h :int )" },
  { dao_SDL_DisplayMode_GETF_refresh_rate, ".refresh_rate( self :SDL_DisplayMode )=>int" },
  { dao_SDL_DisplayMode_SETF_refresh_rate, ".refresh_rate=( self :SDL_DisplayMode, refresh_rate :int )" },
  { dao_SDL_DisplayMode_GETF_driverdata, ".driverdata( self :SDL_DisplayMode )=>cdata" },
  { dao_SDL_DisplayMode_SDL_DisplayMode, "SDL_DisplayMode(  )=>SDL_DisplayMode" },
  { NULL, NULL }
};
static void Dao_SDL_DisplayMode_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_DisplayMode_Typer = 
{ "SDL_DisplayMode", NULL,
  dao_SDL_DisplayMode_Nums,
  dao_SDL_DisplayMode_Meths,
  { NULL },
  { NULL },
  Dao_SDL_DisplayMode_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_DisplayMode_Typer = & SDL_DisplayMode_Typer;
DaoType *dao_type_SDL_DisplayMode = NULL;
static void dao_SDL_DisplayMode_GETF_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  DaoProcess_PutInteger( _proc, (daoint) self->format );
}
static void dao_SDL_DisplayMode_SETF_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  self->format = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DisplayMode_GETF_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  DaoProcess_PutInteger( _proc, (daoint) self->w );
}
static void dao_SDL_DisplayMode_SETF_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  self->w = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DisplayMode_GETF_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  DaoProcess_PutInteger( _proc, (daoint) self->h );
}
static void dao_SDL_DisplayMode_SETF_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  self->h = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DisplayMode_GETF_refresh_rate( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  DaoProcess_PutInteger( _proc, (daoint) self->refresh_rate );
}
static void dao_SDL_DisplayMode_SETF_refresh_rate( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  self->refresh_rate = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DisplayMode_GETF_driverdata( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  DaoProcess_PutCdata( _proc, (void*) self->driverdata, NULL );
}
static void dao_SDL_DisplayMode_SDL_DisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_DisplayMode *self = Dao_SDL_DisplayMode_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_DisplayMode );
}
/* /usr/local/include/SDL2/SDL_video.h */
static DaoTypeBase SDL_Window_Typer = 
{ "SDL_Window", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_SDL_Window_Typer = & SDL_Window_Typer;
DaoType *dao_type_SDL_Window = NULL;
/* /usr/local/include/SDL2/SDL_keyboard.h */


static DaoNumItem dao_SDL_Keysym_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_Keysym_GETF_scancode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_SETF_scancode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_GETF_sym( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_SETF_sym( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_GETF_mod( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_SETF_mod( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_GETF_unicode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_SETF_unicode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_SDL_Keysym( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_Keysym_Meths[] = 
{
  { dao_SDL_Keysym_GETF_scancode, ".scancode( self :SDL_Keysym )=>int" },
  { dao_SDL_Keysym_SETF_scancode, ".scancode=( self :SDL_Keysym, scancode :int )" },
  { dao_SDL_Keysym_GETF_sym, ".sym( self :SDL_Keysym )=>int" },
  { dao_SDL_Keysym_SETF_sym, ".sym=( self :SDL_Keysym, sym :int )" },
  { dao_SDL_Keysym_GETF_mod, ".mod( self :SDL_Keysym )=>int" },
  { dao_SDL_Keysym_SETF_mod, ".mod=( self :SDL_Keysym, mod :int )" },
  { dao_SDL_Keysym_GETF_unicode, ".unicode( self :SDL_Keysym )=>int" },
  { dao_SDL_Keysym_SETF_unicode, ".unicode=( self :SDL_Keysym, unicode :int )" },
  { dao_SDL_Keysym_SDL_Keysym, "SDL_Keysym(  )=>SDL_Keysym" },
  { NULL, NULL }
};
static void Dao_SDL_Keysym_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_Keysym_Typer = 
{ "SDL_Keysym", NULL,
  dao_SDL_Keysym_Nums,
  dao_SDL_Keysym_Meths,
  { NULL },
  { NULL },
  Dao_SDL_Keysym_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_Keysym_Typer = & SDL_Keysym_Typer;
DaoType *dao_type_SDL_Keysym = NULL;
static void dao_SDL_Keysym_GETF_scancode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  DaoProcess_PutInteger( _proc, (daoint) self->scancode );
}
static void dao_SDL_Keysym_SETF_scancode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  self->scancode = (SDL_Scancode) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Keysym_GETF_sym( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  DaoProcess_PutInteger( _proc, (daoint) self->sym );
}
static void dao_SDL_Keysym_SETF_sym( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  self->sym = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Keysym_GETF_mod( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  DaoProcess_PutInteger( _proc, (daoint) self->mod );
}
static void dao_SDL_Keysym_SETF_mod( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  self->mod = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Keysym_GETF_unicode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  DaoProcess_PutInteger( _proc, (daoint) self->unicode );
}
static void dao_SDL_Keysym_SETF_unicode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  self->unicode = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Keysym_SDL_Keysym( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_Keysym *self = Dao_SDL_Keysym_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_Keysym );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static DaoTypeBase SDL_Cursor_Typer = 
{ "SDL_Cursor", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_SDL_Cursor_Typer = & SDL_Cursor_Typer;
DaoType *dao_type_SDL_Cursor = NULL;
/* /usr/local/include/SDL2/SDL_joystick.h */
static DaoTypeBase _SDL_Joystick_Typer = 
{ "_SDL_Joystick", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao__SDL_Joystick_Typer = & _SDL_Joystick_Typer;
DaoType *dao_type__SDL_Joystick = NULL;
/* /usr/local/include/SDL2/SDL_touch.h */


static DaoNumItem dao_SDL_Finger_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_Finger_GETF_id( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_SETF_id( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_GETF_pressure( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_SETF_pressure( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_GETF_xdelta( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_SETF_xdelta( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_GETF_ydelta( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_SETF_ydelta( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_GETF_last_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_SETF_last_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_GETF_last_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_SETF_last_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_GETF_last_pressure( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_SETF_last_pressure( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_GETF_down( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_SETF_down( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Finger_SDL_Finger( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_Finger_Meths[] = 
{
  { dao_SDL_Finger_GETF_id, ".id( self :SDL_Finger )=>int" },
  { dao_SDL_Finger_SETF_id, ".id=( self :SDL_Finger, id :int )" },
  { dao_SDL_Finger_GETF_x, ".x( self :SDL_Finger )=>int" },
  { dao_SDL_Finger_SETF_x, ".x=( self :SDL_Finger, x :int )" },
  { dao_SDL_Finger_GETF_y, ".y( self :SDL_Finger )=>int" },
  { dao_SDL_Finger_SETF_y, ".y=( self :SDL_Finger, y :int )" },
  { dao_SDL_Finger_GETF_pressure, ".pressure( self :SDL_Finger )=>int" },
  { dao_SDL_Finger_SETF_pressure, ".pressure=( self :SDL_Finger, pressure :int )" },
  { dao_SDL_Finger_GETF_xdelta, ".xdelta( self :SDL_Finger )=>int" },
  { dao_SDL_Finger_SETF_xdelta, ".xdelta=( self :SDL_Finger, xdelta :int )" },
  { dao_SDL_Finger_GETF_ydelta, ".ydelta( self :SDL_Finger )=>int" },
  { dao_SDL_Finger_SETF_ydelta, ".ydelta=( self :SDL_Finger, ydelta :int )" },
  { dao_SDL_Finger_GETF_last_x, ".last_x( self :SDL_Finger )=>int" },
  { dao_SDL_Finger_SETF_last_x, ".last_x=( self :SDL_Finger, last_x :int )" },
  { dao_SDL_Finger_GETF_last_y, ".last_y( self :SDL_Finger )=>int" },
  { dao_SDL_Finger_SETF_last_y, ".last_y=( self :SDL_Finger, last_y :int )" },
  { dao_SDL_Finger_GETF_last_pressure, ".last_pressure( self :SDL_Finger )=>int" },
  { dao_SDL_Finger_SETF_last_pressure, ".last_pressure=( self :SDL_Finger, last_pressure :int )" },
  { dao_SDL_Finger_GETF_down, ".down( self :SDL_Finger )=>int" },
  { dao_SDL_Finger_SETF_down, ".down=( self :SDL_Finger, down :int )" },
  { dao_SDL_Finger_SDL_Finger, "SDL_Finger(  )=>SDL_Finger" },
  { NULL, NULL }
};
static void Dao_SDL_Finger_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_Finger_Typer = 
{ "SDL_Finger", NULL,
  dao_SDL_Finger_Nums,
  dao_SDL_Finger_Meths,
  { NULL },
  { NULL },
  Dao_SDL_Finger_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_Finger_Typer = & SDL_Finger_Typer;
DaoType *dao_type_SDL_Finger = NULL;
static void dao_SDL_Finger_GETF_id( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  DaoProcess_PutInteger( _proc, (daoint) self->id );
}
static void dao_SDL_Finger_SETF_id( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  self->id = (long long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Finger_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  DaoProcess_PutInteger( _proc, (daoint) self->x );
}
static void dao_SDL_Finger_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  self->x = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Finger_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  DaoProcess_PutInteger( _proc, (daoint) self->y );
}
static void dao_SDL_Finger_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  self->y = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Finger_GETF_pressure( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  DaoProcess_PutInteger( _proc, (daoint) self->pressure );
}
static void dao_SDL_Finger_SETF_pressure( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  self->pressure = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Finger_GETF_xdelta( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  DaoProcess_PutInteger( _proc, (daoint) self->xdelta );
}
static void dao_SDL_Finger_SETF_xdelta( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  self->xdelta = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Finger_GETF_ydelta( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  DaoProcess_PutInteger( _proc, (daoint) self->ydelta );
}
static void dao_SDL_Finger_SETF_ydelta( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  self->ydelta = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Finger_GETF_last_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  DaoProcess_PutInteger( _proc, (daoint) self->last_x );
}
static void dao_SDL_Finger_SETF_last_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  self->last_x = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Finger_GETF_last_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  DaoProcess_PutInteger( _proc, (daoint) self->last_y );
}
static void dao_SDL_Finger_SETF_last_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  self->last_y = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Finger_GETF_last_pressure( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  DaoProcess_PutInteger( _proc, (daoint) self->last_pressure );
}
static void dao_SDL_Finger_SETF_last_pressure( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  self->last_pressure = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Finger_GETF_down( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  DaoProcess_PutInteger( _proc, (daoint) self->down );
}
static void dao_SDL_Finger_SETF_down( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  self->down = (SDL_bool) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Finger_SDL_Finger( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_Finger *self = Dao_SDL_Finger_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_Finger );
}
/* /usr/local/include/SDL2/SDL_touch.h */


static DaoNumItem dao_SDL_Touch_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_Touch_GETF_pressure_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_pressure_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_pressure_min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_pressure_min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_x_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_x_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_x_min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_x_min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_y_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_y_max( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_y_min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_y_min( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_xres( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_xres( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_yres( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_yres( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_pressureres( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_pressureres( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_native_xres( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_native_xres( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_native_yres( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_native_yres( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_native_pressureres( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_native_pressureres( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_tilt( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_tilt( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_rotation( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_rotation( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_id( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_id( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_focus( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_buttonstate( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_buttonstate( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_relative_mode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_relative_mode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_flush_motion( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_flush_motion( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_num_fingers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_num_fingers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_max_fingers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SETF_max_fingers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_GETF_driverdata( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Touch_SDL_Touch( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_Touch_Meths[] = 
{
  { dao_SDL_Touch_GETF_pressure_max, ".pressure_max( self :SDL_Touch )=>float" },
  { dao_SDL_Touch_SETF_pressure_max, ".pressure_max=( self :SDL_Touch, pressure_max :float )" },
  { dao_SDL_Touch_GETF_pressure_min, ".pressure_min( self :SDL_Touch )=>float" },
  { dao_SDL_Touch_SETF_pressure_min, ".pressure_min=( self :SDL_Touch, pressure_min :float )" },
  { dao_SDL_Touch_GETF_x_max, ".x_max( self :SDL_Touch )=>float" },
  { dao_SDL_Touch_SETF_x_max, ".x_max=( self :SDL_Touch, x_max :float )" },
  { dao_SDL_Touch_GETF_x_min, ".x_min( self :SDL_Touch )=>float" },
  { dao_SDL_Touch_SETF_x_min, ".x_min=( self :SDL_Touch, x_min :float )" },
  { dao_SDL_Touch_GETF_y_max, ".y_max( self :SDL_Touch )=>float" },
  { dao_SDL_Touch_SETF_y_max, ".y_max=( self :SDL_Touch, y_max :float )" },
  { dao_SDL_Touch_GETF_y_min, ".y_min( self :SDL_Touch )=>float" },
  { dao_SDL_Touch_SETF_y_min, ".y_min=( self :SDL_Touch, y_min :float )" },
  { dao_SDL_Touch_GETF_xres, ".xres( self :SDL_Touch )=>int" },
  { dao_SDL_Touch_SETF_xres, ".xres=( self :SDL_Touch, xres :int )" },
  { dao_SDL_Touch_GETF_yres, ".yres( self :SDL_Touch )=>int" },
  { dao_SDL_Touch_SETF_yres, ".yres=( self :SDL_Touch, yres :int )" },
  { dao_SDL_Touch_GETF_pressureres, ".pressureres( self :SDL_Touch )=>int" },
  { dao_SDL_Touch_SETF_pressureres, ".pressureres=( self :SDL_Touch, pressureres :int )" },
  { dao_SDL_Touch_GETF_native_xres, ".native_xres( self :SDL_Touch )=>float" },
  { dao_SDL_Touch_SETF_native_xres, ".native_xres=( self :SDL_Touch, native_xres :float )" },
  { dao_SDL_Touch_GETF_native_yres, ".native_yres( self :SDL_Touch )=>float" },
  { dao_SDL_Touch_SETF_native_yres, ".native_yres=( self :SDL_Touch, native_yres :float )" },
  { dao_SDL_Touch_GETF_native_pressureres, ".native_pressureres( self :SDL_Touch )=>float" },
  { dao_SDL_Touch_SETF_native_pressureres, ".native_pressureres=( self :SDL_Touch, native_pressureres :float )" },
  { dao_SDL_Touch_GETF_tilt, ".tilt( self :SDL_Touch )=>float" },
  { dao_SDL_Touch_SETF_tilt, ".tilt=( self :SDL_Touch, tilt :float )" },
  { dao_SDL_Touch_GETF_rotation, ".rotation( self :SDL_Touch )=>float" },
  { dao_SDL_Touch_SETF_rotation, ".rotation=( self :SDL_Touch, rotation :float )" },
  { dao_SDL_Touch_GETF_id, ".id( self :SDL_Touch )=>int" },
  { dao_SDL_Touch_SETF_id, ".id=( self :SDL_Touch, id :int )" },
  { dao_SDL_Touch_GETF_focus, ".focus( self :SDL_Touch )=>SDL_Window" },
  { dao_SDL_Touch_GETF_name, ".name( self :SDL_Touch )=>string" },
  { dao_SDL_Touch_GETF_buttonstate, ".buttonstate( self :SDL_Touch )=>int" },
  { dao_SDL_Touch_SETF_buttonstate, ".buttonstate=( self :SDL_Touch, buttonstate :int )" },
  { dao_SDL_Touch_GETF_relative_mode, ".relative_mode( self :SDL_Touch )=>int" },
  { dao_SDL_Touch_SETF_relative_mode, ".relative_mode=( self :SDL_Touch, relative_mode :int )" },
  { dao_SDL_Touch_GETF_flush_motion, ".flush_motion( self :SDL_Touch )=>int" },
  { dao_SDL_Touch_SETF_flush_motion, ".flush_motion=( self :SDL_Touch, flush_motion :int )" },
  { dao_SDL_Touch_GETF_num_fingers, ".num_fingers( self :SDL_Touch )=>int" },
  { dao_SDL_Touch_SETF_num_fingers, ".num_fingers=( self :SDL_Touch, num_fingers :int )" },
  { dao_SDL_Touch_GETF_max_fingers, ".max_fingers( self :SDL_Touch )=>int" },
  { dao_SDL_Touch_SETF_max_fingers, ".max_fingers=( self :SDL_Touch, max_fingers :int )" },
  { dao_SDL_Touch_GETF_driverdata, ".driverdata( self :SDL_Touch )=>cdata" },
  { dao_SDL_Touch_SDL_Touch, "SDL_Touch(  )=>SDL_Touch" },
  { NULL, NULL }
};
static void Dao_SDL_Touch_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_Touch_Typer = 
{ "SDL_Touch", NULL,
  dao_SDL_Touch_Nums,
  dao_SDL_Touch_Meths,
  { NULL },
  { NULL },
  Dao_SDL_Touch_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_Touch_Typer = & SDL_Touch_Typer;
DaoType *dao_type_SDL_Touch = NULL;
static void dao_SDL_Touch_GETF_pressure_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutFloat( _proc, (float) self->pressure_max );
}
static void dao_SDL_Touch_SETF_pressure_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->pressure_max = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_Touch_GETF_pressure_min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutFloat( _proc, (float) self->pressure_min );
}
static void dao_SDL_Touch_SETF_pressure_min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->pressure_min = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_Touch_GETF_x_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutFloat( _proc, (float) self->x_max );
}
static void dao_SDL_Touch_SETF_x_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->x_max = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_Touch_GETF_x_min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutFloat( _proc, (float) self->x_min );
}
static void dao_SDL_Touch_SETF_x_min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->x_min = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_Touch_GETF_y_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutFloat( _proc, (float) self->y_max );
}
static void dao_SDL_Touch_SETF_y_max( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->y_max = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_Touch_GETF_y_min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutFloat( _proc, (float) self->y_min );
}
static void dao_SDL_Touch_SETF_y_min( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->y_min = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_Touch_GETF_xres( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutInteger( _proc, (daoint) self->xres );
}
static void dao_SDL_Touch_SETF_xres( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->xres = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Touch_GETF_yres( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutInteger( _proc, (daoint) self->yres );
}
static void dao_SDL_Touch_SETF_yres( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->yres = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Touch_GETF_pressureres( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutInteger( _proc, (daoint) self->pressureres );
}
static void dao_SDL_Touch_SETF_pressureres( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->pressureres = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Touch_GETF_native_xres( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutFloat( _proc, (float) self->native_xres );
}
static void dao_SDL_Touch_SETF_native_xres( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->native_xres = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_Touch_GETF_native_yres( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutFloat( _proc, (float) self->native_yres );
}
static void dao_SDL_Touch_SETF_native_yres( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->native_yres = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_Touch_GETF_native_pressureres( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutFloat( _proc, (float) self->native_pressureres );
}
static void dao_SDL_Touch_SETF_native_pressureres( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->native_pressureres = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_Touch_GETF_tilt( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutFloat( _proc, (float) self->tilt );
}
static void dao_SDL_Touch_SETF_tilt( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->tilt = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_Touch_GETF_rotation( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutFloat( _proc, (float) self->rotation );
}
static void dao_SDL_Touch_SETF_rotation( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->rotation = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_Touch_GETF_id( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutInteger( _proc, (daoint) self->id );
}
static void dao_SDL_Touch_SETF_id( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->id = (long long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Touch_GETF_focus( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_WrapCdata( _proc, (void*) self->focus, dao_type_SDL_Window );
}
static void dao_SDL_Touch_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_SDL_Touch_GETF_buttonstate( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutInteger( _proc, (daoint) self->buttonstate );
}
static void dao_SDL_Touch_SETF_buttonstate( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->buttonstate = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Touch_GETF_relative_mode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutInteger( _proc, (daoint) self->relative_mode );
}
static void dao_SDL_Touch_SETF_relative_mode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->relative_mode = (SDL_bool) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Touch_GETF_flush_motion( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutInteger( _proc, (daoint) self->flush_motion );
}
static void dao_SDL_Touch_SETF_flush_motion( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->flush_motion = (SDL_bool) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Touch_GETF_num_fingers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutInteger( _proc, (daoint) self->num_fingers );
}
static void dao_SDL_Touch_SETF_num_fingers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->num_fingers = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Touch_GETF_max_fingers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutInteger( _proc, (daoint) self->max_fingers );
}
static void dao_SDL_Touch_SETF_max_fingers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  self->max_fingers = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Touch_GETF_driverdata( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_Touch *self = (struct SDL_Touch*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Touch);
  DaoProcess_PutCdata( _proc, (void*) self->driverdata, NULL );
}
static void dao_SDL_Touch_SDL_Touch( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_SDL_Touch *self = Dao_SDL_Touch_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_WindowEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_WindowEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_GETF_event( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_SETF_event( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_GETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_SETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_GETF_data1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_SETF_data1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_GETF_data2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_SETF_data2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_SDL_WindowEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_WindowEvent_Meths[] = 
{
  { dao_SDL_WindowEvent_GETF_type, ".type( self :SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_type, ".type=( self :SDL_WindowEvent, type :int )" },
  { dao_SDL_WindowEvent_GETF_timestamp, ".timestamp( self :SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_timestamp, ".timestamp=( self :SDL_WindowEvent, timestamp :int )" },
  { dao_SDL_WindowEvent_GETF_windowID, ".windowID( self :SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_windowID, ".windowID=( self :SDL_WindowEvent, windowID :int )" },
  { dao_SDL_WindowEvent_GETF_event, ".event( self :SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_event, ".event=( self :SDL_WindowEvent, event :int )" },
  { dao_SDL_WindowEvent_GETF_padding1, ".padding1( self :SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_padding1, ".padding1=( self :SDL_WindowEvent, padding1 :int )" },
  { dao_SDL_WindowEvent_GETF_padding2, ".padding2( self :SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_padding2, ".padding2=( self :SDL_WindowEvent, padding2 :int )" },
  { dao_SDL_WindowEvent_GETF_padding3, ".padding3( self :SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_padding3, ".padding3=( self :SDL_WindowEvent, padding3 :int )" },
  { dao_SDL_WindowEvent_GETF_data1, ".data1( self :SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_data1, ".data1=( self :SDL_WindowEvent, data1 :int )" },
  { dao_SDL_WindowEvent_GETF_data2, ".data2( self :SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_data2, ".data2=( self :SDL_WindowEvent, data2 :int )" },
  { dao_SDL_WindowEvent_SDL_WindowEvent, "SDL_WindowEvent(  )=>SDL_WindowEvent" },
  { NULL, NULL }
};
static void Dao_SDL_WindowEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_WindowEvent_Typer = 
{ "SDL_WindowEvent", NULL,
  dao_SDL_WindowEvent_Nums,
  dao_SDL_WindowEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_WindowEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_WindowEvent_Typer = & SDL_WindowEvent_Typer;
DaoType *dao_type_SDL_WindowEvent = NULL;
static void dao_SDL_WindowEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_WindowEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_WindowEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_WindowEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_WindowEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->windowID );
}
static void dao_SDL_WindowEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  self->windowID = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_WindowEvent_GETF_event( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->event );
}
static void dao_SDL_WindowEvent_SETF_event( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  self->event = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_WindowEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding1 );
}
static void dao_SDL_WindowEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  self->padding1 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_WindowEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding2 );
}
static void dao_SDL_WindowEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  self->padding2 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_WindowEvent_GETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding3 );
}
static void dao_SDL_WindowEvent_SETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  self->padding3 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_WindowEvent_GETF_data1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->data1 );
}
static void dao_SDL_WindowEvent_SETF_data1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  self->data1 = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_WindowEvent_GETF_data2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->data2 );
}
static void dao_SDL_WindowEvent_SETF_data2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  self->data2 = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_WindowEvent_SDL_WindowEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_WindowEvent *self = Dao_SDL_WindowEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_WindowEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_KeyboardEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_KeyboardEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_GETF_repeat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_SETF_repeat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_GETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_SETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_GETF_keysym( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_SDL_KeyboardEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_KeyboardEvent_Meths[] = 
{
  { dao_SDL_KeyboardEvent_GETF_type, ".type( self :SDL_KeyboardEvent )=>int" },
  { dao_SDL_KeyboardEvent_SETF_type, ".type=( self :SDL_KeyboardEvent, type :int )" },
  { dao_SDL_KeyboardEvent_GETF_timestamp, ".timestamp( self :SDL_KeyboardEvent )=>int" },
  { dao_SDL_KeyboardEvent_SETF_timestamp, ".timestamp=( self :SDL_KeyboardEvent, timestamp :int )" },
  { dao_SDL_KeyboardEvent_GETF_windowID, ".windowID( self :SDL_KeyboardEvent )=>int" },
  { dao_SDL_KeyboardEvent_SETF_windowID, ".windowID=( self :SDL_KeyboardEvent, windowID :int )" },
  { dao_SDL_KeyboardEvent_GETF_state, ".state( self :SDL_KeyboardEvent )=>int" },
  { dao_SDL_KeyboardEvent_SETF_state, ".state=( self :SDL_KeyboardEvent, state :int )" },
  { dao_SDL_KeyboardEvent_GETF_repeat, ".repeat( self :SDL_KeyboardEvent )=>int" },
  { dao_SDL_KeyboardEvent_SETF_repeat, ".repeat=( self :SDL_KeyboardEvent, repeat :int )" },
  { dao_SDL_KeyboardEvent_GETF_padding2, ".padding2( self :SDL_KeyboardEvent )=>int" },
  { dao_SDL_KeyboardEvent_SETF_padding2, ".padding2=( self :SDL_KeyboardEvent, padding2 :int )" },
  { dao_SDL_KeyboardEvent_GETF_padding3, ".padding3( self :SDL_KeyboardEvent )=>int" },
  { dao_SDL_KeyboardEvent_SETF_padding3, ".padding3=( self :SDL_KeyboardEvent, padding3 :int )" },
  { dao_SDL_KeyboardEvent_GETF_keysym, ".keysym( self :SDL_KeyboardEvent )=>SDL_Keysym" },
  { dao_SDL_KeyboardEvent_SDL_KeyboardEvent, "SDL_KeyboardEvent(  )=>SDL_KeyboardEvent" },
  { NULL, NULL }
};
static void Dao_SDL_KeyboardEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_KeyboardEvent_Typer = 
{ "SDL_KeyboardEvent", NULL,
  dao_SDL_KeyboardEvent_Nums,
  dao_SDL_KeyboardEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_KeyboardEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_KeyboardEvent_Typer = & SDL_KeyboardEvent_Typer;
DaoType *dao_type_SDL_KeyboardEvent = NULL;
static void dao_SDL_KeyboardEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_KeyboardEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_KeyboardEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_KeyboardEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_KeyboardEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->windowID );
}
static void dao_SDL_KeyboardEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  self->windowID = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_KeyboardEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->state );
}
static void dao_SDL_KeyboardEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  self->state = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_KeyboardEvent_GETF_repeat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->repeat );
}
static void dao_SDL_KeyboardEvent_SETF_repeat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  self->repeat = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_KeyboardEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding2 );
}
static void dao_SDL_KeyboardEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  self->padding2 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_KeyboardEvent_GETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding3 );
}
static void dao_SDL_KeyboardEvent_SETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  self->padding3 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_KeyboardEvent_GETF_keysym( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  DaoProcess_WrapCdata( _proc, (void*)&self->keysym, dao_type_SDL_Keysym );
}
static void dao_SDL_KeyboardEvent_SDL_KeyboardEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_KeyboardEvent *self = Dao_SDL_KeyboardEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_KeyboardEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_TextEditingEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_TextEditingEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextEditingEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextEditingEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextEditingEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextEditingEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextEditingEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextEditingEvent_GETF_text( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextEditingEvent_SETF_text( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextEditingEvent_GETF_start( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextEditingEvent_SETF_start( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextEditingEvent_GETF_length( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextEditingEvent_SETF_length( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextEditingEvent_SDL_TextEditingEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_TextEditingEvent_Meths[] = 
{
  { dao_SDL_TextEditingEvent_GETF_type, ".type( self :SDL_TextEditingEvent )=>int" },
  { dao_SDL_TextEditingEvent_SETF_type, ".type=( self :SDL_TextEditingEvent, type :int )" },
  { dao_SDL_TextEditingEvent_GETF_timestamp, ".timestamp( self :SDL_TextEditingEvent )=>int" },
  { dao_SDL_TextEditingEvent_SETF_timestamp, ".timestamp=( self :SDL_TextEditingEvent, timestamp :int )" },
  { dao_SDL_TextEditingEvent_GETF_windowID, ".windowID( self :SDL_TextEditingEvent )=>int" },
  { dao_SDL_TextEditingEvent_SETF_windowID, ".windowID=( self :SDL_TextEditingEvent, windowID :int )" },
  { dao_SDL_TextEditingEvent_GETF_text, ".text( self :SDL_TextEditingEvent )=>array<int>" },
  { dao_SDL_TextEditingEvent_SETF_text, ".text=( self :SDL_TextEditingEvent, text :array<int> )" },
  { dao_SDL_TextEditingEvent_GETF_start, ".start( self :SDL_TextEditingEvent )=>int" },
  { dao_SDL_TextEditingEvent_SETF_start, ".start=( self :SDL_TextEditingEvent, start :int )" },
  { dao_SDL_TextEditingEvent_GETF_length, ".length( self :SDL_TextEditingEvent )=>int" },
  { dao_SDL_TextEditingEvent_SETF_length, ".length=( self :SDL_TextEditingEvent, length :int )" },
  { dao_SDL_TextEditingEvent_SDL_TextEditingEvent, "SDL_TextEditingEvent(  )=>SDL_TextEditingEvent" },
  { NULL, NULL }
};
static void Dao_SDL_TextEditingEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_TextEditingEvent_Typer = 
{ "SDL_TextEditingEvent", NULL,
  dao_SDL_TextEditingEvent_Nums,
  dao_SDL_TextEditingEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_TextEditingEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_TextEditingEvent_Typer = & SDL_TextEditingEvent_Typer;
DaoType *dao_type_SDL_TextEditingEvent = NULL;
static void dao_SDL_TextEditingEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_TextEditingEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TextEditingEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_TextEditingEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TextEditingEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->windowID );
}
static void dao_SDL_TextEditingEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  self->windowID = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TextEditingEvent_GETF_text( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  DaoProcess_PutBytes( _proc, (char*) self->text, 32 );
}
static void dao_SDL_TextEditingEvent_SETF_text( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  int size = DaoString_Size( (DaoString*)_p[1] );
  if( size > 32 ) size = 32;
  memmove( self->text, DaoValue_TryGetMBString( _p[1] ), size );
}
static void dao_SDL_TextEditingEvent_GETF_start( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->start );
}
static void dao_SDL_TextEditingEvent_SETF_start( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  self->start = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TextEditingEvent_GETF_length( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->length );
}
static void dao_SDL_TextEditingEvent_SETF_length( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  self->length = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TextEditingEvent_SDL_TextEditingEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_TextEditingEvent *self = Dao_SDL_TextEditingEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_TextEditingEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_TextInputEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_TextInputEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextInputEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextInputEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextInputEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextInputEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextInputEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextInputEvent_GETF_text( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextInputEvent_SETF_text( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TextInputEvent_SDL_TextInputEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_TextInputEvent_Meths[] = 
{
  { dao_SDL_TextInputEvent_GETF_type, ".type( self :SDL_TextInputEvent )=>int" },
  { dao_SDL_TextInputEvent_SETF_type, ".type=( self :SDL_TextInputEvent, type :int )" },
  { dao_SDL_TextInputEvent_GETF_timestamp, ".timestamp( self :SDL_TextInputEvent )=>int" },
  { dao_SDL_TextInputEvent_SETF_timestamp, ".timestamp=( self :SDL_TextInputEvent, timestamp :int )" },
  { dao_SDL_TextInputEvent_GETF_windowID, ".windowID( self :SDL_TextInputEvent )=>int" },
  { dao_SDL_TextInputEvent_SETF_windowID, ".windowID=( self :SDL_TextInputEvent, windowID :int )" },
  { dao_SDL_TextInputEvent_GETF_text, ".text( self :SDL_TextInputEvent )=>array<int>" },
  { dao_SDL_TextInputEvent_SETF_text, ".text=( self :SDL_TextInputEvent, text :array<int> )" },
  { dao_SDL_TextInputEvent_SDL_TextInputEvent, "SDL_TextInputEvent(  )=>SDL_TextInputEvent" },
  { NULL, NULL }
};
static void Dao_SDL_TextInputEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_TextInputEvent_Typer = 
{ "SDL_TextInputEvent", NULL,
  dao_SDL_TextInputEvent_Nums,
  dao_SDL_TextInputEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_TextInputEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_TextInputEvent_Typer = & SDL_TextInputEvent_Typer;
DaoType *dao_type_SDL_TextInputEvent = NULL;
static void dao_SDL_TextInputEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextInputEvent *self = (SDL_TextInputEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextInputEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_TextInputEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextInputEvent *self = (SDL_TextInputEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextInputEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TextInputEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextInputEvent *self = (SDL_TextInputEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextInputEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_TextInputEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextInputEvent *self = (SDL_TextInputEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextInputEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TextInputEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextInputEvent *self = (SDL_TextInputEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextInputEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->windowID );
}
static void dao_SDL_TextInputEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextInputEvent *self = (SDL_TextInputEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextInputEvent);
  self->windowID = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TextInputEvent_GETF_text( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextInputEvent *self = (SDL_TextInputEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextInputEvent);
  DaoProcess_PutBytes( _proc, (char*) self->text, 32 );
}
static void dao_SDL_TextInputEvent_SETF_text( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextInputEvent *self = (SDL_TextInputEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextInputEvent);
  int size = DaoString_Size( (DaoString*)_p[1] );
  if( size > 32 ) size = 32;
  memmove( self->text, DaoValue_TryGetMBString( _p[1] ), size );
}
static void dao_SDL_TextInputEvent_SDL_TextInputEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_TextInputEvent *self = Dao_SDL_TextInputEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_TextInputEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_MouseMotionEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_MouseMotionEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_yrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_yrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SDL_MouseMotionEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_MouseMotionEvent_Meths[] = 
{
  { dao_SDL_MouseMotionEvent_GETF_type, ".type( self :SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_type, ".type=( self :SDL_MouseMotionEvent, type :int )" },
  { dao_SDL_MouseMotionEvent_GETF_timestamp, ".timestamp( self :SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_timestamp, ".timestamp=( self :SDL_MouseMotionEvent, timestamp :int )" },
  { dao_SDL_MouseMotionEvent_GETF_windowID, ".windowID( self :SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_windowID, ".windowID=( self :SDL_MouseMotionEvent, windowID :int )" },
  { dao_SDL_MouseMotionEvent_GETF_state, ".state( self :SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_state, ".state=( self :SDL_MouseMotionEvent, state :int )" },
  { dao_SDL_MouseMotionEvent_GETF_padding1, ".padding1( self :SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_padding1, ".padding1=( self :SDL_MouseMotionEvent, padding1 :int )" },
  { dao_SDL_MouseMotionEvent_GETF_padding2, ".padding2( self :SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_padding2, ".padding2=( self :SDL_MouseMotionEvent, padding2 :int )" },
  { dao_SDL_MouseMotionEvent_GETF_padding3, ".padding3( self :SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_padding3, ".padding3=( self :SDL_MouseMotionEvent, padding3 :int )" },
  { dao_SDL_MouseMotionEvent_GETF_x, ".x( self :SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_x, ".x=( self :SDL_MouseMotionEvent, x :int )" },
  { dao_SDL_MouseMotionEvent_GETF_y, ".y( self :SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_y, ".y=( self :SDL_MouseMotionEvent, y :int )" },
  { dao_SDL_MouseMotionEvent_GETF_xrel, ".xrel( self :SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_xrel, ".xrel=( self :SDL_MouseMotionEvent, xrel :int )" },
  { dao_SDL_MouseMotionEvent_GETF_yrel, ".yrel( self :SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_yrel, ".yrel=( self :SDL_MouseMotionEvent, yrel :int )" },
  { dao_SDL_MouseMotionEvent_SDL_MouseMotionEvent, "SDL_MouseMotionEvent(  )=>SDL_MouseMotionEvent" },
  { NULL, NULL }
};
static void Dao_SDL_MouseMotionEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_MouseMotionEvent_Typer = 
{ "SDL_MouseMotionEvent", NULL,
  dao_SDL_MouseMotionEvent_Nums,
  dao_SDL_MouseMotionEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_MouseMotionEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_MouseMotionEvent_Typer = & SDL_MouseMotionEvent_Typer;
DaoType *dao_type_SDL_MouseMotionEvent = NULL;
static void dao_SDL_MouseMotionEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_MouseMotionEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_MouseMotionEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->windowID );
}
static void dao_SDL_MouseMotionEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->windowID = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->state );
}
static void dao_SDL_MouseMotionEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->state = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding1 );
}
static void dao_SDL_MouseMotionEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->padding1 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding2 );
}
static void dao_SDL_MouseMotionEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->padding2 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding3 );
}
static void dao_SDL_MouseMotionEvent_SETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->padding3 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->x );
}
static void dao_SDL_MouseMotionEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->x = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->y );
}
static void dao_SDL_MouseMotionEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->y = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->xrel );
}
static void dao_SDL_MouseMotionEvent_SETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->xrel = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_yrel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->yrel );
}
static void dao_SDL_MouseMotionEvent_SETF_yrel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->yrel = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_SDL_MouseMotionEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_MouseMotionEvent *self = Dao_SDL_MouseMotionEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_MouseMotionEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_MouseButtonEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_MouseButtonEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_button( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_button( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SDL_MouseButtonEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_MouseButtonEvent_Meths[] = 
{
  { dao_SDL_MouseButtonEvent_GETF_type, ".type( self :SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_type, ".type=( self :SDL_MouseButtonEvent, type :int )" },
  { dao_SDL_MouseButtonEvent_GETF_timestamp, ".timestamp( self :SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_timestamp, ".timestamp=( self :SDL_MouseButtonEvent, timestamp :int )" },
  { dao_SDL_MouseButtonEvent_GETF_windowID, ".windowID( self :SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_windowID, ".windowID=( self :SDL_MouseButtonEvent, windowID :int )" },
  { dao_SDL_MouseButtonEvent_GETF_button, ".button( self :SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_button, ".button=( self :SDL_MouseButtonEvent, button :int )" },
  { dao_SDL_MouseButtonEvent_GETF_state, ".state( self :SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_state, ".state=( self :SDL_MouseButtonEvent, state :int )" },
  { dao_SDL_MouseButtonEvent_GETF_padding1, ".padding1( self :SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_padding1, ".padding1=( self :SDL_MouseButtonEvent, padding1 :int )" },
  { dao_SDL_MouseButtonEvent_GETF_padding2, ".padding2( self :SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_padding2, ".padding2=( self :SDL_MouseButtonEvent, padding2 :int )" },
  { dao_SDL_MouseButtonEvent_GETF_x, ".x( self :SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_x, ".x=( self :SDL_MouseButtonEvent, x :int )" },
  { dao_SDL_MouseButtonEvent_GETF_y, ".y( self :SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_y, ".y=( self :SDL_MouseButtonEvent, y :int )" },
  { dao_SDL_MouseButtonEvent_SDL_MouseButtonEvent, "SDL_MouseButtonEvent(  )=>SDL_MouseButtonEvent" },
  { NULL, NULL }
};
static void Dao_SDL_MouseButtonEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_MouseButtonEvent_Typer = 
{ "SDL_MouseButtonEvent", NULL,
  dao_SDL_MouseButtonEvent_Nums,
  dao_SDL_MouseButtonEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_MouseButtonEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_MouseButtonEvent_Typer = & SDL_MouseButtonEvent_Typer;
DaoType *dao_type_SDL_MouseButtonEvent = NULL;
static void dao_SDL_MouseButtonEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_MouseButtonEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_MouseButtonEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->windowID );
}
static void dao_SDL_MouseButtonEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->windowID = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_button( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->button );
}
static void dao_SDL_MouseButtonEvent_SETF_button( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->button = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->state );
}
static void dao_SDL_MouseButtonEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->state = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding1 );
}
static void dao_SDL_MouseButtonEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->padding1 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding2 );
}
static void dao_SDL_MouseButtonEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->padding2 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->x );
}
static void dao_SDL_MouseButtonEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->x = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->y );
}
static void dao_SDL_MouseButtonEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->y = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_SDL_MouseButtonEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_MouseButtonEvent *self = Dao_SDL_MouseButtonEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_MouseButtonEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_MouseWheelEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_MouseWheelEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_SDL_MouseWheelEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_MouseWheelEvent_Meths[] = 
{
  { dao_SDL_MouseWheelEvent_GETF_type, ".type( self :SDL_MouseWheelEvent )=>int" },
  { dao_SDL_MouseWheelEvent_SETF_type, ".type=( self :SDL_MouseWheelEvent, type :int )" },
  { dao_SDL_MouseWheelEvent_GETF_timestamp, ".timestamp( self :SDL_MouseWheelEvent )=>int" },
  { dao_SDL_MouseWheelEvent_SETF_timestamp, ".timestamp=( self :SDL_MouseWheelEvent, timestamp :int )" },
  { dao_SDL_MouseWheelEvent_GETF_windowID, ".windowID( self :SDL_MouseWheelEvent )=>int" },
  { dao_SDL_MouseWheelEvent_SETF_windowID, ".windowID=( self :SDL_MouseWheelEvent, windowID :int )" },
  { dao_SDL_MouseWheelEvent_GETF_x, ".x( self :SDL_MouseWheelEvent )=>int" },
  { dao_SDL_MouseWheelEvent_SETF_x, ".x=( self :SDL_MouseWheelEvent, x :int )" },
  { dao_SDL_MouseWheelEvent_GETF_y, ".y( self :SDL_MouseWheelEvent )=>int" },
  { dao_SDL_MouseWheelEvent_SETF_y, ".y=( self :SDL_MouseWheelEvent, y :int )" },
  { dao_SDL_MouseWheelEvent_SDL_MouseWheelEvent, "SDL_MouseWheelEvent(  )=>SDL_MouseWheelEvent" },
  { NULL, NULL }
};
static void Dao_SDL_MouseWheelEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_MouseWheelEvent_Typer = 
{ "SDL_MouseWheelEvent", NULL,
  dao_SDL_MouseWheelEvent_Nums,
  dao_SDL_MouseWheelEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_MouseWheelEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_MouseWheelEvent_Typer = & SDL_MouseWheelEvent_Typer;
DaoType *dao_type_SDL_MouseWheelEvent = NULL;
static void dao_SDL_MouseWheelEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_MouseWheelEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseWheelEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_MouseWheelEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseWheelEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->windowID );
}
static void dao_SDL_MouseWheelEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  self->windowID = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseWheelEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->x );
}
static void dao_SDL_MouseWheelEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  self->x = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseWheelEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->y );
}
static void dao_SDL_MouseWheelEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  self->y = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseWheelEvent_SDL_MouseWheelEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_MouseWheelEvent *self = Dao_SDL_MouseWheelEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_MouseWheelEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_JoyAxisEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_JoyAxisEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_GETF_axis( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_SETF_axis( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_GETF_value( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_SETF_value( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_SDL_JoyAxisEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_JoyAxisEvent_Meths[] = 
{
  { dao_SDL_JoyAxisEvent_GETF_type, ".type( self :SDL_JoyAxisEvent )=>int" },
  { dao_SDL_JoyAxisEvent_SETF_type, ".type=( self :SDL_JoyAxisEvent, type :int )" },
  { dao_SDL_JoyAxisEvent_GETF_timestamp, ".timestamp( self :SDL_JoyAxisEvent )=>int" },
  { dao_SDL_JoyAxisEvent_SETF_timestamp, ".timestamp=( self :SDL_JoyAxisEvent, timestamp :int )" },
  { dao_SDL_JoyAxisEvent_GETF_which, ".which( self :SDL_JoyAxisEvent )=>int" },
  { dao_SDL_JoyAxisEvent_SETF_which, ".which=( self :SDL_JoyAxisEvent, which :int )" },
  { dao_SDL_JoyAxisEvent_GETF_axis, ".axis( self :SDL_JoyAxisEvent )=>int" },
  { dao_SDL_JoyAxisEvent_SETF_axis, ".axis=( self :SDL_JoyAxisEvent, axis :int )" },
  { dao_SDL_JoyAxisEvent_GETF_padding1, ".padding1( self :SDL_JoyAxisEvent )=>int" },
  { dao_SDL_JoyAxisEvent_SETF_padding1, ".padding1=( self :SDL_JoyAxisEvent, padding1 :int )" },
  { dao_SDL_JoyAxisEvent_GETF_padding2, ".padding2( self :SDL_JoyAxisEvent )=>int" },
  { dao_SDL_JoyAxisEvent_SETF_padding2, ".padding2=( self :SDL_JoyAxisEvent, padding2 :int )" },
  { dao_SDL_JoyAxisEvent_GETF_value, ".value( self :SDL_JoyAxisEvent )=>int" },
  { dao_SDL_JoyAxisEvent_SETF_value, ".value=( self :SDL_JoyAxisEvent, value :int )" },
  { dao_SDL_JoyAxisEvent_SDL_JoyAxisEvent, "SDL_JoyAxisEvent(  )=>SDL_JoyAxisEvent" },
  { NULL, NULL }
};
static void Dao_SDL_JoyAxisEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_JoyAxisEvent_Typer = 
{ "SDL_JoyAxisEvent", NULL,
  dao_SDL_JoyAxisEvent_Nums,
  dao_SDL_JoyAxisEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_JoyAxisEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_JoyAxisEvent_Typer = & SDL_JoyAxisEvent_Typer;
DaoType *dao_type_SDL_JoyAxisEvent = NULL;
static void dao_SDL_JoyAxisEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_JoyAxisEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyAxisEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_JoyAxisEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyAxisEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->which );
}
static void dao_SDL_JoyAxisEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  self->which = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyAxisEvent_GETF_axis( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->axis );
}
static void dao_SDL_JoyAxisEvent_SETF_axis( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  self->axis = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyAxisEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding1 );
}
static void dao_SDL_JoyAxisEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  self->padding1 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyAxisEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding2 );
}
static void dao_SDL_JoyAxisEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  self->padding2 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyAxisEvent_GETF_value( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->value );
}
static void dao_SDL_JoyAxisEvent_SETF_value( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  self->value = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyAxisEvent_SDL_JoyAxisEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_JoyAxisEvent *self = Dao_SDL_JoyAxisEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_JoyAxisEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_JoyBallEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_JoyBallEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_GETF_ball( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_SETF_ball( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_GETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_SETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_GETF_yrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_SETF_yrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_SDL_JoyBallEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_JoyBallEvent_Meths[] = 
{
  { dao_SDL_JoyBallEvent_GETF_type, ".type( self :SDL_JoyBallEvent )=>int" },
  { dao_SDL_JoyBallEvent_SETF_type, ".type=( self :SDL_JoyBallEvent, type :int )" },
  { dao_SDL_JoyBallEvent_GETF_timestamp, ".timestamp( self :SDL_JoyBallEvent )=>int" },
  { dao_SDL_JoyBallEvent_SETF_timestamp, ".timestamp=( self :SDL_JoyBallEvent, timestamp :int )" },
  { dao_SDL_JoyBallEvent_GETF_which, ".which( self :SDL_JoyBallEvent )=>int" },
  { dao_SDL_JoyBallEvent_SETF_which, ".which=( self :SDL_JoyBallEvent, which :int )" },
  { dao_SDL_JoyBallEvent_GETF_ball, ".ball( self :SDL_JoyBallEvent )=>int" },
  { dao_SDL_JoyBallEvent_SETF_ball, ".ball=( self :SDL_JoyBallEvent, ball :int )" },
  { dao_SDL_JoyBallEvent_GETF_padding1, ".padding1( self :SDL_JoyBallEvent )=>int" },
  { dao_SDL_JoyBallEvent_SETF_padding1, ".padding1=( self :SDL_JoyBallEvent, padding1 :int )" },
  { dao_SDL_JoyBallEvent_GETF_padding2, ".padding2( self :SDL_JoyBallEvent )=>int" },
  { dao_SDL_JoyBallEvent_SETF_padding2, ".padding2=( self :SDL_JoyBallEvent, padding2 :int )" },
  { dao_SDL_JoyBallEvent_GETF_xrel, ".xrel( self :SDL_JoyBallEvent )=>int" },
  { dao_SDL_JoyBallEvent_SETF_xrel, ".xrel=( self :SDL_JoyBallEvent, xrel :int )" },
  { dao_SDL_JoyBallEvent_GETF_yrel, ".yrel( self :SDL_JoyBallEvent )=>int" },
  { dao_SDL_JoyBallEvent_SETF_yrel, ".yrel=( self :SDL_JoyBallEvent, yrel :int )" },
  { dao_SDL_JoyBallEvent_SDL_JoyBallEvent, "SDL_JoyBallEvent(  )=>SDL_JoyBallEvent" },
  { NULL, NULL }
};
static void Dao_SDL_JoyBallEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_JoyBallEvent_Typer = 
{ "SDL_JoyBallEvent", NULL,
  dao_SDL_JoyBallEvent_Nums,
  dao_SDL_JoyBallEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_JoyBallEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_JoyBallEvent_Typer = & SDL_JoyBallEvent_Typer;
DaoType *dao_type_SDL_JoyBallEvent = NULL;
static void dao_SDL_JoyBallEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_JoyBallEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyBallEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_JoyBallEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyBallEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->which );
}
static void dao_SDL_JoyBallEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  self->which = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyBallEvent_GETF_ball( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->ball );
}
static void dao_SDL_JoyBallEvent_SETF_ball( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  self->ball = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyBallEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding1 );
}
static void dao_SDL_JoyBallEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  self->padding1 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyBallEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding2 );
}
static void dao_SDL_JoyBallEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  self->padding2 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyBallEvent_GETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->xrel );
}
static void dao_SDL_JoyBallEvent_SETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  self->xrel = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyBallEvent_GETF_yrel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->yrel );
}
static void dao_SDL_JoyBallEvent_SETF_yrel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  self->yrel = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyBallEvent_SDL_JoyBallEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_JoyBallEvent *self = Dao_SDL_JoyBallEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_JoyBallEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_JoyHatEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_JoyHatEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyHatEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyHatEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyHatEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyHatEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyHatEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyHatEvent_GETF_hat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyHatEvent_SETF_hat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyHatEvent_GETF_value( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyHatEvent_SETF_value( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyHatEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyHatEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyHatEvent_SDL_JoyHatEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_JoyHatEvent_Meths[] = 
{
  { dao_SDL_JoyHatEvent_GETF_type, ".type( self :SDL_JoyHatEvent )=>int" },
  { dao_SDL_JoyHatEvent_SETF_type, ".type=( self :SDL_JoyHatEvent, type :int )" },
  { dao_SDL_JoyHatEvent_GETF_timestamp, ".timestamp( self :SDL_JoyHatEvent )=>int" },
  { dao_SDL_JoyHatEvent_SETF_timestamp, ".timestamp=( self :SDL_JoyHatEvent, timestamp :int )" },
  { dao_SDL_JoyHatEvent_GETF_which, ".which( self :SDL_JoyHatEvent )=>int" },
  { dao_SDL_JoyHatEvent_SETF_which, ".which=( self :SDL_JoyHatEvent, which :int )" },
  { dao_SDL_JoyHatEvent_GETF_hat, ".hat( self :SDL_JoyHatEvent )=>int" },
  { dao_SDL_JoyHatEvent_SETF_hat, ".hat=( self :SDL_JoyHatEvent, hat :int )" },
  { dao_SDL_JoyHatEvent_GETF_value, ".value( self :SDL_JoyHatEvent )=>int" },
  { dao_SDL_JoyHatEvent_SETF_value, ".value=( self :SDL_JoyHatEvent, value :int )" },
  { dao_SDL_JoyHatEvent_GETF_padding1, ".padding1( self :SDL_JoyHatEvent )=>int" },
  { dao_SDL_JoyHatEvent_SETF_padding1, ".padding1=( self :SDL_JoyHatEvent, padding1 :int )" },
  { dao_SDL_JoyHatEvent_SDL_JoyHatEvent, "SDL_JoyHatEvent(  )=>SDL_JoyHatEvent" },
  { NULL, NULL }
};
static void Dao_SDL_JoyHatEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_JoyHatEvent_Typer = 
{ "SDL_JoyHatEvent", NULL,
  dao_SDL_JoyHatEvent_Nums,
  dao_SDL_JoyHatEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_JoyHatEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_JoyHatEvent_Typer = & SDL_JoyHatEvent_Typer;
DaoType *dao_type_SDL_JoyHatEvent = NULL;
static void dao_SDL_JoyHatEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_JoyHatEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyHatEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_JoyHatEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyHatEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->which );
}
static void dao_SDL_JoyHatEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  self->which = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyHatEvent_GETF_hat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->hat );
}
static void dao_SDL_JoyHatEvent_SETF_hat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  self->hat = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyHatEvent_GETF_value( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->value );
}
static void dao_SDL_JoyHatEvent_SETF_value( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  self->value = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyHatEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding1 );
}
static void dao_SDL_JoyHatEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  self->padding1 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyHatEvent_SDL_JoyHatEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_JoyHatEvent *self = Dao_SDL_JoyHatEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_JoyHatEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_JoyButtonEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_JoyButtonEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyButtonEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyButtonEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyButtonEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyButtonEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyButtonEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyButtonEvent_GETF_button( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyButtonEvent_SETF_button( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyButtonEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyButtonEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyButtonEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyButtonEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyButtonEvent_SDL_JoyButtonEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_JoyButtonEvent_Meths[] = 
{
  { dao_SDL_JoyButtonEvent_GETF_type, ".type( self :SDL_JoyButtonEvent )=>int" },
  { dao_SDL_JoyButtonEvent_SETF_type, ".type=( self :SDL_JoyButtonEvent, type :int )" },
  { dao_SDL_JoyButtonEvent_GETF_timestamp, ".timestamp( self :SDL_JoyButtonEvent )=>int" },
  { dao_SDL_JoyButtonEvent_SETF_timestamp, ".timestamp=( self :SDL_JoyButtonEvent, timestamp :int )" },
  { dao_SDL_JoyButtonEvent_GETF_which, ".which( self :SDL_JoyButtonEvent )=>int" },
  { dao_SDL_JoyButtonEvent_SETF_which, ".which=( self :SDL_JoyButtonEvent, which :int )" },
  { dao_SDL_JoyButtonEvent_GETF_button, ".button( self :SDL_JoyButtonEvent )=>int" },
  { dao_SDL_JoyButtonEvent_SETF_button, ".button=( self :SDL_JoyButtonEvent, button :int )" },
  { dao_SDL_JoyButtonEvent_GETF_state, ".state( self :SDL_JoyButtonEvent )=>int" },
  { dao_SDL_JoyButtonEvent_SETF_state, ".state=( self :SDL_JoyButtonEvent, state :int )" },
  { dao_SDL_JoyButtonEvent_GETF_padding1, ".padding1( self :SDL_JoyButtonEvent )=>int" },
  { dao_SDL_JoyButtonEvent_SETF_padding1, ".padding1=( self :SDL_JoyButtonEvent, padding1 :int )" },
  { dao_SDL_JoyButtonEvent_SDL_JoyButtonEvent, "SDL_JoyButtonEvent(  )=>SDL_JoyButtonEvent" },
  { NULL, NULL }
};
static void Dao_SDL_JoyButtonEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_JoyButtonEvent_Typer = 
{ "SDL_JoyButtonEvent", NULL,
  dao_SDL_JoyButtonEvent_Nums,
  dao_SDL_JoyButtonEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_JoyButtonEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_JoyButtonEvent_Typer = & SDL_JoyButtonEvent_Typer;
DaoType *dao_type_SDL_JoyButtonEvent = NULL;
static void dao_SDL_JoyButtonEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_JoyButtonEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyButtonEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_JoyButtonEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyButtonEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->which );
}
static void dao_SDL_JoyButtonEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  self->which = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyButtonEvent_GETF_button( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->button );
}
static void dao_SDL_JoyButtonEvent_SETF_button( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  self->button = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyButtonEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->state );
}
static void dao_SDL_JoyButtonEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  self->state = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyButtonEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding1 );
}
static void dao_SDL_JoyButtonEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  self->padding1 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyButtonEvent_SDL_JoyButtonEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_JoyButtonEvent *self = Dao_SDL_JoyButtonEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_JoyButtonEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_TouchFingerEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_TouchFingerEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_fingerId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_fingerId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_dy( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_dy( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_pressure( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_pressure( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SDL_TouchFingerEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_TouchFingerEvent_Meths[] = 
{
  { dao_SDL_TouchFingerEvent_GETF_type, ".type( self :SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_type, ".type=( self :SDL_TouchFingerEvent, type :int )" },
  { dao_SDL_TouchFingerEvent_GETF_timestamp, ".timestamp( self :SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_timestamp, ".timestamp=( self :SDL_TouchFingerEvent, timestamp :int )" },
  { dao_SDL_TouchFingerEvent_GETF_windowID, ".windowID( self :SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_windowID, ".windowID=( self :SDL_TouchFingerEvent, windowID :int )" },
  { dao_SDL_TouchFingerEvent_GETF_touchId, ".touchId( self :SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_touchId, ".touchId=( self :SDL_TouchFingerEvent, touchId :int )" },
  { dao_SDL_TouchFingerEvent_GETF_fingerId, ".fingerId( self :SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_fingerId, ".fingerId=( self :SDL_TouchFingerEvent, fingerId :int )" },
  { dao_SDL_TouchFingerEvent_GETF_state, ".state( self :SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_state, ".state=( self :SDL_TouchFingerEvent, state :int )" },
  { dao_SDL_TouchFingerEvent_GETF_padding1, ".padding1( self :SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_padding1, ".padding1=( self :SDL_TouchFingerEvent, padding1 :int )" },
  { dao_SDL_TouchFingerEvent_GETF_padding2, ".padding2( self :SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_padding2, ".padding2=( self :SDL_TouchFingerEvent, padding2 :int )" },
  { dao_SDL_TouchFingerEvent_GETF_padding3, ".padding3( self :SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_padding3, ".padding3=( self :SDL_TouchFingerEvent, padding3 :int )" },
  { dao_SDL_TouchFingerEvent_GETF_x, ".x( self :SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_x, ".x=( self :SDL_TouchFingerEvent, x :int )" },
  { dao_SDL_TouchFingerEvent_GETF_y, ".y( self :SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_y, ".y=( self :SDL_TouchFingerEvent, y :int )" },
  { dao_SDL_TouchFingerEvent_GETF_dx, ".dx( self :SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_dx, ".dx=( self :SDL_TouchFingerEvent, dx :int )" },
  { dao_SDL_TouchFingerEvent_GETF_dy, ".dy( self :SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_dy, ".dy=( self :SDL_TouchFingerEvent, dy :int )" },
  { dao_SDL_TouchFingerEvent_GETF_pressure, ".pressure( self :SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_pressure, ".pressure=( self :SDL_TouchFingerEvent, pressure :int )" },
  { dao_SDL_TouchFingerEvent_SDL_TouchFingerEvent, "SDL_TouchFingerEvent(  )=>SDL_TouchFingerEvent" },
  { NULL, NULL }
};
static void Dao_SDL_TouchFingerEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_TouchFingerEvent_Typer = 
{ "SDL_TouchFingerEvent", NULL,
  dao_SDL_TouchFingerEvent_Nums,
  dao_SDL_TouchFingerEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_TouchFingerEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_TouchFingerEvent_Typer = & SDL_TouchFingerEvent_Typer;
DaoType *dao_type_SDL_TouchFingerEvent = NULL;
static void dao_SDL_TouchFingerEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_TouchFingerEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_TouchFingerEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->windowID );
}
static void dao_SDL_TouchFingerEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->windowID = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->touchId );
}
static void dao_SDL_TouchFingerEvent_SETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->touchId = (long long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_fingerId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->fingerId );
}
static void dao_SDL_TouchFingerEvent_SETF_fingerId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->fingerId = (long long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->state );
}
static void dao_SDL_TouchFingerEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->state = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding1 );
}
static void dao_SDL_TouchFingerEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->padding1 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding2 );
}
static void dao_SDL_TouchFingerEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->padding2 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding3 );
}
static void dao_SDL_TouchFingerEvent_SETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->padding3 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->x );
}
static void dao_SDL_TouchFingerEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->x = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->y );
}
static void dao_SDL_TouchFingerEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->y = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->dx );
}
static void dao_SDL_TouchFingerEvent_SETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->dx = (short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_dy( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->dy );
}
static void dao_SDL_TouchFingerEvent_SETF_dy( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->dy = (short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_pressure( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->pressure );
}
static void dao_SDL_TouchFingerEvent_SETF_pressure( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->pressure = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_SDL_TouchFingerEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_TouchFingerEvent *self = Dao_SDL_TouchFingerEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_TouchFingerEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_TouchButtonEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_TouchButtonEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_GETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_SETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_GETF_button( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_SETF_button( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchButtonEvent_SDL_TouchButtonEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_TouchButtonEvent_Meths[] = 
{
  { dao_SDL_TouchButtonEvent_GETF_type, ".type( self :SDL_TouchButtonEvent )=>int" },
  { dao_SDL_TouchButtonEvent_SETF_type, ".type=( self :SDL_TouchButtonEvent, type :int )" },
  { dao_SDL_TouchButtonEvent_GETF_timestamp, ".timestamp( self :SDL_TouchButtonEvent )=>int" },
  { dao_SDL_TouchButtonEvent_SETF_timestamp, ".timestamp=( self :SDL_TouchButtonEvent, timestamp :int )" },
  { dao_SDL_TouchButtonEvent_GETF_windowID, ".windowID( self :SDL_TouchButtonEvent )=>int" },
  { dao_SDL_TouchButtonEvent_SETF_windowID, ".windowID=( self :SDL_TouchButtonEvent, windowID :int )" },
  { dao_SDL_TouchButtonEvent_GETF_touchId, ".touchId( self :SDL_TouchButtonEvent )=>int" },
  { dao_SDL_TouchButtonEvent_SETF_touchId, ".touchId=( self :SDL_TouchButtonEvent, touchId :int )" },
  { dao_SDL_TouchButtonEvent_GETF_state, ".state( self :SDL_TouchButtonEvent )=>int" },
  { dao_SDL_TouchButtonEvent_SETF_state, ".state=( self :SDL_TouchButtonEvent, state :int )" },
  { dao_SDL_TouchButtonEvent_GETF_button, ".button( self :SDL_TouchButtonEvent )=>int" },
  { dao_SDL_TouchButtonEvent_SETF_button, ".button=( self :SDL_TouchButtonEvent, button :int )" },
  { dao_SDL_TouchButtonEvent_GETF_padding1, ".padding1( self :SDL_TouchButtonEvent )=>int" },
  { dao_SDL_TouchButtonEvent_SETF_padding1, ".padding1=( self :SDL_TouchButtonEvent, padding1 :int )" },
  { dao_SDL_TouchButtonEvent_GETF_padding2, ".padding2( self :SDL_TouchButtonEvent )=>int" },
  { dao_SDL_TouchButtonEvent_SETF_padding2, ".padding2=( self :SDL_TouchButtonEvent, padding2 :int )" },
  { dao_SDL_TouchButtonEvent_SDL_TouchButtonEvent, "SDL_TouchButtonEvent(  )=>SDL_TouchButtonEvent" },
  { NULL, NULL }
};
static void Dao_SDL_TouchButtonEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_TouchButtonEvent_Typer = 
{ "SDL_TouchButtonEvent", NULL,
  dao_SDL_TouchButtonEvent_Nums,
  dao_SDL_TouchButtonEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_TouchButtonEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_TouchButtonEvent_Typer = & SDL_TouchButtonEvent_Typer;
DaoType *dao_type_SDL_TouchButtonEvent = NULL;
static void dao_SDL_TouchButtonEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_TouchButtonEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchButtonEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_TouchButtonEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchButtonEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->windowID );
}
static void dao_SDL_TouchButtonEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  self->windowID = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchButtonEvent_GETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->touchId );
}
static void dao_SDL_TouchButtonEvent_SETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  self->touchId = (long long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchButtonEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->state );
}
static void dao_SDL_TouchButtonEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  self->state = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchButtonEvent_GETF_button( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->button );
}
static void dao_SDL_TouchButtonEvent_SETF_button( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  self->button = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchButtonEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding1 );
}
static void dao_SDL_TouchButtonEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  self->padding1 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchButtonEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding2 );
}
static void dao_SDL_TouchButtonEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchButtonEvent *self = (SDL_TouchButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchButtonEvent);
  self->padding2 = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchButtonEvent_SDL_TouchButtonEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_TouchButtonEvent *self = Dao_SDL_TouchButtonEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_TouchButtonEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_MultiGestureEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_MultiGestureEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_GETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_SETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_GETF_dTheta( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_SETF_dTheta( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_GETF_dDist( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_SETF_dDist( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_GETF_numFingers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_SETF_numFingers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_GETF_padding( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_SETF_padding( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_SDL_MultiGestureEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_MultiGestureEvent_Meths[] = 
{
  { dao_SDL_MultiGestureEvent_GETF_type, ".type( self :SDL_MultiGestureEvent )=>int" },
  { dao_SDL_MultiGestureEvent_SETF_type, ".type=( self :SDL_MultiGestureEvent, type :int )" },
  { dao_SDL_MultiGestureEvent_GETF_timestamp, ".timestamp( self :SDL_MultiGestureEvent )=>int" },
  { dao_SDL_MultiGestureEvent_SETF_timestamp, ".timestamp=( self :SDL_MultiGestureEvent, timestamp :int )" },
  { dao_SDL_MultiGestureEvent_GETF_windowID, ".windowID( self :SDL_MultiGestureEvent )=>int" },
  { dao_SDL_MultiGestureEvent_SETF_windowID, ".windowID=( self :SDL_MultiGestureEvent, windowID :int )" },
  { dao_SDL_MultiGestureEvent_GETF_touchId, ".touchId( self :SDL_MultiGestureEvent )=>int" },
  { dao_SDL_MultiGestureEvent_SETF_touchId, ".touchId=( self :SDL_MultiGestureEvent, touchId :int )" },
  { dao_SDL_MultiGestureEvent_GETF_dTheta, ".dTheta( self :SDL_MultiGestureEvent )=>float" },
  { dao_SDL_MultiGestureEvent_SETF_dTheta, ".dTheta=( self :SDL_MultiGestureEvent, dTheta :float )" },
  { dao_SDL_MultiGestureEvent_GETF_dDist, ".dDist( self :SDL_MultiGestureEvent )=>float" },
  { dao_SDL_MultiGestureEvent_SETF_dDist, ".dDist=( self :SDL_MultiGestureEvent, dDist :float )" },
  { dao_SDL_MultiGestureEvent_GETF_x, ".x( self :SDL_MultiGestureEvent )=>float" },
  { dao_SDL_MultiGestureEvent_SETF_x, ".x=( self :SDL_MultiGestureEvent, x :float )" },
  { dao_SDL_MultiGestureEvent_GETF_y, ".y( self :SDL_MultiGestureEvent )=>float" },
  { dao_SDL_MultiGestureEvent_SETF_y, ".y=( self :SDL_MultiGestureEvent, y :float )" },
  { dao_SDL_MultiGestureEvent_GETF_numFingers, ".numFingers( self :SDL_MultiGestureEvent )=>int" },
  { dao_SDL_MultiGestureEvent_SETF_numFingers, ".numFingers=( self :SDL_MultiGestureEvent, numFingers :int )" },
  { dao_SDL_MultiGestureEvent_GETF_padding, ".padding( self :SDL_MultiGestureEvent )=>int" },
  { dao_SDL_MultiGestureEvent_SETF_padding, ".padding=( self :SDL_MultiGestureEvent, padding :int )" },
  { dao_SDL_MultiGestureEvent_SDL_MultiGestureEvent, "SDL_MultiGestureEvent(  )=>SDL_MultiGestureEvent" },
  { NULL, NULL }
};
static void Dao_SDL_MultiGestureEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_MultiGestureEvent_Typer = 
{ "SDL_MultiGestureEvent", NULL,
  dao_SDL_MultiGestureEvent_Nums,
  dao_SDL_MultiGestureEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_MultiGestureEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_MultiGestureEvent_Typer = & SDL_MultiGestureEvent_Typer;
DaoType *dao_type_SDL_MultiGestureEvent = NULL;
static void dao_SDL_MultiGestureEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_MultiGestureEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_MultiGestureEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->windowID );
}
static void dao_SDL_MultiGestureEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->windowID = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->touchId );
}
static void dao_SDL_MultiGestureEvent_SETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->touchId = (long long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_dTheta( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutFloat( _proc, (float) self->dTheta );
}
static void dao_SDL_MultiGestureEvent_SETF_dTheta( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->dTheta = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_dDist( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutFloat( _proc, (float) self->dDist );
}
static void dao_SDL_MultiGestureEvent_SETF_dDist( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->dDist = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutFloat( _proc, (float) self->x );
}
static void dao_SDL_MultiGestureEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->x = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutFloat( _proc, (float) self->y );
}
static void dao_SDL_MultiGestureEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->y = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_numFingers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->numFingers );
}
static void dao_SDL_MultiGestureEvent_SETF_numFingers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->numFingers = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_padding( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->padding );
}
static void dao_SDL_MultiGestureEvent_SETF_padding( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->padding = (unsigned short) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MultiGestureEvent_SDL_MultiGestureEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_MultiGestureEvent *self = Dao_SDL_MultiGestureEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_MultiGestureEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_DollarGestureEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_DollarGestureEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_GETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_GETF_gestureId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_gestureId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_GETF_numFingers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_numFingers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_GETF_error( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_error( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SDL_DollarGestureEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_DollarGestureEvent_Meths[] = 
{
  { dao_SDL_DollarGestureEvent_GETF_type, ".type( self :SDL_DollarGestureEvent )=>int" },
  { dao_SDL_DollarGestureEvent_SETF_type, ".type=( self :SDL_DollarGestureEvent, type :int )" },
  { dao_SDL_DollarGestureEvent_GETF_timestamp, ".timestamp( self :SDL_DollarGestureEvent )=>int" },
  { dao_SDL_DollarGestureEvent_SETF_timestamp, ".timestamp=( self :SDL_DollarGestureEvent, timestamp :int )" },
  { dao_SDL_DollarGestureEvent_GETF_windowID, ".windowID( self :SDL_DollarGestureEvent )=>int" },
  { dao_SDL_DollarGestureEvent_SETF_windowID, ".windowID=( self :SDL_DollarGestureEvent, windowID :int )" },
  { dao_SDL_DollarGestureEvent_GETF_touchId, ".touchId( self :SDL_DollarGestureEvent )=>int" },
  { dao_SDL_DollarGestureEvent_SETF_touchId, ".touchId=( self :SDL_DollarGestureEvent, touchId :int )" },
  { dao_SDL_DollarGestureEvent_GETF_gestureId, ".gestureId( self :SDL_DollarGestureEvent )=>int" },
  { dao_SDL_DollarGestureEvent_SETF_gestureId, ".gestureId=( self :SDL_DollarGestureEvent, gestureId :int )" },
  { dao_SDL_DollarGestureEvent_GETF_numFingers, ".numFingers( self :SDL_DollarGestureEvent )=>int" },
  { dao_SDL_DollarGestureEvent_SETF_numFingers, ".numFingers=( self :SDL_DollarGestureEvent, numFingers :int )" },
  { dao_SDL_DollarGestureEvent_GETF_error, ".error( self :SDL_DollarGestureEvent )=>float" },
  { dao_SDL_DollarGestureEvent_SETF_error, ".error=( self :SDL_DollarGestureEvent, error :float )" },
  { dao_SDL_DollarGestureEvent_SDL_DollarGestureEvent, "SDL_DollarGestureEvent(  )=>SDL_DollarGestureEvent" },
  { NULL, NULL }
};
static void Dao_SDL_DollarGestureEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_DollarGestureEvent_Typer = 
{ "SDL_DollarGestureEvent", NULL,
  dao_SDL_DollarGestureEvent_Nums,
  dao_SDL_DollarGestureEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_DollarGestureEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_DollarGestureEvent_Typer = & SDL_DollarGestureEvent_Typer;
DaoType *dao_type_SDL_DollarGestureEvent = NULL;
static void dao_SDL_DollarGestureEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_DollarGestureEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DollarGestureEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_DollarGestureEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DollarGestureEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->windowID );
}
static void dao_SDL_DollarGestureEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->windowID = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DollarGestureEvent_GETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->touchId );
}
static void dao_SDL_DollarGestureEvent_SETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->touchId = (long long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DollarGestureEvent_GETF_gestureId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->gestureId );
}
static void dao_SDL_DollarGestureEvent_SETF_gestureId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->gestureId = (long long) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DollarGestureEvent_GETF_numFingers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->numFingers );
}
static void dao_SDL_DollarGestureEvent_SETF_numFingers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->numFingers = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DollarGestureEvent_GETF_error( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutFloat( _proc, (float) self->error );
}
static void dao_SDL_DollarGestureEvent_SETF_error( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->error = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_DollarGestureEvent_SDL_DollarGestureEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_DollarGestureEvent *self = Dao_SDL_DollarGestureEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_DollarGestureEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_DropEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_DropEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DropEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DropEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DropEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DropEvent_GETF_file( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DropEvent_SDL_DropEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_DropEvent_Meths[] = 
{
  { dao_SDL_DropEvent_GETF_type, ".type( self :SDL_DropEvent )=>int" },
  { dao_SDL_DropEvent_SETF_type, ".type=( self :SDL_DropEvent, type :int )" },
  { dao_SDL_DropEvent_GETF_timestamp, ".timestamp( self :SDL_DropEvent )=>int" },
  { dao_SDL_DropEvent_SETF_timestamp, ".timestamp=( self :SDL_DropEvent, timestamp :int )" },
  { dao_SDL_DropEvent_GETF_file, ".file( self :SDL_DropEvent )=>string" },
  { dao_SDL_DropEvent_SDL_DropEvent, "SDL_DropEvent(  )=>SDL_DropEvent" },
  { NULL, NULL }
};
static void Dao_SDL_DropEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_DropEvent_Typer = 
{ "SDL_DropEvent", NULL,
  dao_SDL_DropEvent_Nums,
  dao_SDL_DropEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_DropEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_DropEvent_Typer = & SDL_DropEvent_Typer;
DaoType *dao_type_SDL_DropEvent = NULL;
static void dao_SDL_DropEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DropEvent *self = (SDL_DropEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DropEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_DropEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DropEvent *self = (SDL_DropEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DropEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DropEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DropEvent *self = (SDL_DropEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DropEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_DropEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DropEvent *self = (SDL_DropEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DropEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DropEvent_GETF_file( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DropEvent *self = (SDL_DropEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DropEvent);
  DaoProcess_PutMBString( _proc, (char*) self->file );
}
static void dao_SDL_DropEvent_SDL_DropEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_DropEvent *self = Dao_SDL_DropEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_DropEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_QuitEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_QuitEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_QuitEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_QuitEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_QuitEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_QuitEvent_SDL_QuitEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_QuitEvent_Meths[] = 
{
  { dao_SDL_QuitEvent_GETF_type, ".type( self :SDL_QuitEvent )=>int" },
  { dao_SDL_QuitEvent_SETF_type, ".type=( self :SDL_QuitEvent, type :int )" },
  { dao_SDL_QuitEvent_GETF_timestamp, ".timestamp( self :SDL_QuitEvent )=>int" },
  { dao_SDL_QuitEvent_SETF_timestamp, ".timestamp=( self :SDL_QuitEvent, timestamp :int )" },
  { dao_SDL_QuitEvent_SDL_QuitEvent, "SDL_QuitEvent(  )=>SDL_QuitEvent" },
  { NULL, NULL }
};
static void Dao_SDL_QuitEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_QuitEvent_Typer = 
{ "SDL_QuitEvent", NULL,
  dao_SDL_QuitEvent_Nums,
  dao_SDL_QuitEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_QuitEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_QuitEvent_Typer = & SDL_QuitEvent_Typer;
DaoType *dao_type_SDL_QuitEvent = NULL;
static void dao_SDL_QuitEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_QuitEvent *self = (SDL_QuitEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_QuitEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_QuitEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_QuitEvent *self = (SDL_QuitEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_QuitEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_QuitEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_QuitEvent *self = (SDL_QuitEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_QuitEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_QuitEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_QuitEvent *self = (SDL_QuitEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_QuitEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_QuitEvent_SDL_QuitEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_QuitEvent *self = Dao_SDL_QuitEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_QuitEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_UserEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_UserEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_UserEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_UserEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_UserEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_UserEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_UserEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_UserEvent_GETF_code( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_UserEvent_SETF_code( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_UserEvent_GETF_data1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_UserEvent_GETF_data2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_UserEvent_SDL_UserEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_UserEvent_Meths[] = 
{
  { dao_SDL_UserEvent_GETF_type, ".type( self :SDL_UserEvent )=>int" },
  { dao_SDL_UserEvent_SETF_type, ".type=( self :SDL_UserEvent, type :int )" },
  { dao_SDL_UserEvent_GETF_timestamp, ".timestamp( self :SDL_UserEvent )=>int" },
  { dao_SDL_UserEvent_SETF_timestamp, ".timestamp=( self :SDL_UserEvent, timestamp :int )" },
  { dao_SDL_UserEvent_GETF_windowID, ".windowID( self :SDL_UserEvent )=>int" },
  { dao_SDL_UserEvent_SETF_windowID, ".windowID=( self :SDL_UserEvent, windowID :int )" },
  { dao_SDL_UserEvent_GETF_code, ".code( self :SDL_UserEvent )=>int" },
  { dao_SDL_UserEvent_SETF_code, ".code=( self :SDL_UserEvent, code :int )" },
  { dao_SDL_UserEvent_GETF_data1, ".data1( self :SDL_UserEvent )=>cdata" },
  { dao_SDL_UserEvent_GETF_data2, ".data2( self :SDL_UserEvent )=>cdata" },
  { dao_SDL_UserEvent_SDL_UserEvent, "SDL_UserEvent(  )=>SDL_UserEvent" },
  { NULL, NULL }
};
static void Dao_SDL_UserEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_UserEvent_Typer = 
{ "SDL_UserEvent", NULL,
  dao_SDL_UserEvent_Nums,
  dao_SDL_UserEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_UserEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_UserEvent_Typer = & SDL_UserEvent_Typer;
DaoType *dao_type_SDL_UserEvent = NULL;
static void dao_SDL_UserEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_UserEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_UserEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_UserEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_UserEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->windowID );
}
static void dao_SDL_UserEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  self->windowID = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_UserEvent_GETF_code( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->code );
}
static void dao_SDL_UserEvent_SETF_code( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  self->code = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_UserEvent_GETF_data1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  DaoProcess_PutCdata( _proc, (void*) self->data1, NULL );
}
static void dao_SDL_UserEvent_GETF_data2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  DaoProcess_PutCdata( _proc, (void*) self->data2, NULL );
}
static void dao_SDL_UserEvent_SDL_UserEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_UserEvent *self = Dao_SDL_UserEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_UserEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */
static DaoTypeBase SDL_SysWMmsg_Typer = 
{ "SDL_SysWMmsg", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_SDL_SysWMmsg_Typer = & SDL_SysWMmsg_Typer;
DaoType *dao_type_SDL_SysWMmsg = NULL;
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_SysWMEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_SysWMEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_SysWMEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_SysWMEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_SysWMEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_SysWMEvent_GETF_msg( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_SysWMEvent_SDL_SysWMEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_SysWMEvent_Meths[] = 
{
  { dao_SDL_SysWMEvent_GETF_type, ".type( self :SDL_SysWMEvent )=>int" },
  { dao_SDL_SysWMEvent_SETF_type, ".type=( self :SDL_SysWMEvent, type :int )" },
  { dao_SDL_SysWMEvent_GETF_timestamp, ".timestamp( self :SDL_SysWMEvent )=>int" },
  { dao_SDL_SysWMEvent_SETF_timestamp, ".timestamp=( self :SDL_SysWMEvent, timestamp :int )" },
  { dao_SDL_SysWMEvent_GETF_msg, ".msg( self :SDL_SysWMEvent )=>SDL_SysWMmsg" },
  { dao_SDL_SysWMEvent_SDL_SysWMEvent, "SDL_SysWMEvent(  )=>SDL_SysWMEvent" },
  { NULL, NULL }
};
static void Dao_SDL_SysWMEvent_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_SysWMEvent_Typer = 
{ "SDL_SysWMEvent", NULL,
  dao_SDL_SysWMEvent_Nums,
  dao_SDL_SysWMEvent_Meths,
  { NULL },
  { NULL },
  Dao_SDL_SysWMEvent_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_SysWMEvent_Typer = & SDL_SysWMEvent_Typer;
DaoType *dao_type_SDL_SysWMEvent = NULL;
static void dao_SDL_SysWMEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_SysWMEvent *self = (SDL_SysWMEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_SysWMEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_SysWMEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_SysWMEvent *self = (SDL_SysWMEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_SysWMEvent);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_SysWMEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_SysWMEvent *self = (SDL_SysWMEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_SysWMEvent);
  DaoProcess_PutInteger( _proc, (daoint) self->timestamp );
}
static void dao_SDL_SysWMEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_SysWMEvent *self = (SDL_SysWMEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_SysWMEvent);
  self->timestamp = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_SysWMEvent_GETF_msg( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_SysWMEvent *self = (SDL_SysWMEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_SysWMEvent);
  DaoProcess_WrapCdata( _proc, (void*) self->msg, dao_type_SDL_SysWMmsg );
}
static void dao_SDL_SysWMEvent_SDL_SysWMEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_SysWMEvent *self = Dao_SDL_SysWMEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_SysWMEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumItem dao_SDL_Event_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_Event_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_window( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_key( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_edit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_text( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_motion( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_button( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_wheel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_jaxis( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_jball( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_jhat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_jbutton( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_quit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_user( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_syswm( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_tfinger( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_tbutton( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_mgesture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_dgesture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_drop( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_SDL_Event( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_Event_Meths[] = 
{
  { dao_SDL_Event_GETF_type, ".type( self :SDL_Event )=>int" },
  { dao_SDL_Event_SETF_type, ".type=( self :SDL_Event, type :int )" },
  { dao_SDL_Event_GETF_window, ".window( self :SDL_Event )=>SDL_WindowEvent" },
  { dao_SDL_Event_GETF_key, ".key( self :SDL_Event )=>SDL_KeyboardEvent" },
  { dao_SDL_Event_GETF_edit, ".edit( self :SDL_Event )=>SDL_TextEditingEvent" },
  { dao_SDL_Event_GETF_text, ".text( self :SDL_Event )=>SDL_TextInputEvent" },
  { dao_SDL_Event_GETF_motion, ".motion( self :SDL_Event )=>SDL_MouseMotionEvent" },
  { dao_SDL_Event_GETF_button, ".button( self :SDL_Event )=>SDL_MouseButtonEvent" },
  { dao_SDL_Event_GETF_wheel, ".wheel( self :SDL_Event )=>SDL_MouseWheelEvent" },
  { dao_SDL_Event_GETF_jaxis, ".jaxis( self :SDL_Event )=>SDL_JoyAxisEvent" },
  { dao_SDL_Event_GETF_jball, ".jball( self :SDL_Event )=>SDL_JoyBallEvent" },
  { dao_SDL_Event_GETF_jhat, ".jhat( self :SDL_Event )=>SDL_JoyHatEvent" },
  { dao_SDL_Event_GETF_jbutton, ".jbutton( self :SDL_Event )=>SDL_JoyButtonEvent" },
  { dao_SDL_Event_GETF_quit, ".quit( self :SDL_Event )=>SDL_QuitEvent" },
  { dao_SDL_Event_GETF_user, ".user( self :SDL_Event )=>SDL_UserEvent" },
  { dao_SDL_Event_GETF_syswm, ".syswm( self :SDL_Event )=>SDL_SysWMEvent" },
  { dao_SDL_Event_GETF_tfinger, ".tfinger( self :SDL_Event )=>SDL_TouchFingerEvent" },
  { dao_SDL_Event_GETF_tbutton, ".tbutton( self :SDL_Event )=>SDL_TouchButtonEvent" },
  { dao_SDL_Event_GETF_mgesture, ".mgesture( self :SDL_Event )=>SDL_MultiGestureEvent" },
  { dao_SDL_Event_GETF_dgesture, ".dgesture( self :SDL_Event )=>SDL_DollarGestureEvent" },
  { dao_SDL_Event_GETF_drop, ".drop( self :SDL_Event )=>SDL_DropEvent" },
  { dao_SDL_Event_SDL_Event, "SDL_Event(  )=>SDL_Event" },
  { NULL, NULL }
};
static void Dao_SDL_Event_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_Event_Typer = 
{ "SDL_Event", NULL,
  dao_SDL_Event_Nums,
  dao_SDL_Event_Meths,
  { NULL },
  { NULL },
  Dao_SDL_Event_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_Event_Typer = & SDL_Event_Typer;
DaoType *dao_type_SDL_Event = NULL;
static void dao_SDL_Event_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_PutInteger( _proc, (daoint) self->type );
}
static void dao_SDL_Event_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  self->type = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Event_GETF_window( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->window, dao_type_SDL_WindowEvent );
}
static void dao_SDL_Event_GETF_key( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->key, dao_type_SDL_KeyboardEvent );
}
static void dao_SDL_Event_GETF_edit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->edit, dao_type_SDL_TextEditingEvent );
}
static void dao_SDL_Event_GETF_text( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->text, dao_type_SDL_TextInputEvent );
}
static void dao_SDL_Event_GETF_motion( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->motion, dao_type_SDL_MouseMotionEvent );
}
static void dao_SDL_Event_GETF_button( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->button, dao_type_SDL_MouseButtonEvent );
}
static void dao_SDL_Event_GETF_wheel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->wheel, dao_type_SDL_MouseWheelEvent );
}
static void dao_SDL_Event_GETF_jaxis( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->jaxis, dao_type_SDL_JoyAxisEvent );
}
static void dao_SDL_Event_GETF_jball( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->jball, dao_type_SDL_JoyBallEvent );
}
static void dao_SDL_Event_GETF_jhat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->jhat, dao_type_SDL_JoyHatEvent );
}
static void dao_SDL_Event_GETF_jbutton( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->jbutton, dao_type_SDL_JoyButtonEvent );
}
static void dao_SDL_Event_GETF_quit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->quit, dao_type_SDL_QuitEvent );
}
static void dao_SDL_Event_GETF_user( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->user, dao_type_SDL_UserEvent );
}
static void dao_SDL_Event_GETF_syswm( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->syswm, dao_type_SDL_SysWMEvent );
}
static void dao_SDL_Event_GETF_tfinger( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->tfinger, dao_type_SDL_TouchFingerEvent );
}
static void dao_SDL_Event_GETF_tbutton( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->tbutton, dao_type_SDL_TouchButtonEvent );
}
static void dao_SDL_Event_GETF_mgesture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->mgesture, dao_type_SDL_MultiGestureEvent );
}
static void dao_SDL_Event_GETF_dgesture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->dgesture, dao_type_SDL_DollarGestureEvent );
}
static void dao_SDL_Event_GETF_drop( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->drop, dao_type_SDL_DropEvent );
}
static void dao_SDL_Event_SDL_Event( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_Event *self = Dao_SDL_Event_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_Event );
}
/* /usr/local/include/SDL2/SDL_render.h */


static DaoNumItem dao_SDL_RendererInfo_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_RendererInfo_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RendererInfo_GETF_flags( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RendererInfo_SETF_flags( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RendererInfo_GETF_num_texture_formats( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RendererInfo_SETF_num_texture_formats( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RendererInfo_GETF_texture_formats( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RendererInfo_SETF_texture_formats( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RendererInfo_GETF_max_texture_width( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RendererInfo_SETF_max_texture_width( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RendererInfo_GETF_max_texture_height( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RendererInfo_SETF_max_texture_height( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RendererInfo_SDL_RendererInfo( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_RendererInfo_Meths[] = 
{
  { dao_SDL_RendererInfo_GETF_name, ".name( self :SDL_RendererInfo )=>string" },
  { dao_SDL_RendererInfo_GETF_flags, ".flags( self :SDL_RendererInfo )=>int" },
  { dao_SDL_RendererInfo_SETF_flags, ".flags=( self :SDL_RendererInfo, flags :int )" },
  { dao_SDL_RendererInfo_GETF_num_texture_formats, ".num_texture_formats( self :SDL_RendererInfo )=>int" },
  { dao_SDL_RendererInfo_SETF_num_texture_formats, ".num_texture_formats=( self :SDL_RendererInfo, num_texture_formats :int )" },
  { dao_SDL_RendererInfo_GETF_texture_formats, ".texture_formats( self :SDL_RendererInfo )=>array<int>" },
  { dao_SDL_RendererInfo_SETF_texture_formats, ".texture_formats=( self :SDL_RendererInfo, texture_formats :array<int> )" },
  { dao_SDL_RendererInfo_GETF_max_texture_width, ".max_texture_width( self :SDL_RendererInfo )=>int" },
  { dao_SDL_RendererInfo_SETF_max_texture_width, ".max_texture_width=( self :SDL_RendererInfo, max_texture_width :int )" },
  { dao_SDL_RendererInfo_GETF_max_texture_height, ".max_texture_height( self :SDL_RendererInfo )=>int" },
  { dao_SDL_RendererInfo_SETF_max_texture_height, ".max_texture_height=( self :SDL_RendererInfo, max_texture_height :int )" },
  { dao_SDL_RendererInfo_SDL_RendererInfo, "SDL_RendererInfo(  )=>SDL_RendererInfo" },
  { NULL, NULL }
};
static void Dao_SDL_RendererInfo_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_RendererInfo_Typer = 
{ "SDL_RendererInfo", NULL,
  dao_SDL_RendererInfo_Nums,
  dao_SDL_RendererInfo_Meths,
  { NULL },
  { NULL },
  Dao_SDL_RendererInfo_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_RendererInfo_Typer = & SDL_RendererInfo_Typer;
DaoType *dao_type_SDL_RendererInfo = NULL;
static void dao_SDL_RendererInfo_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  DaoProcess_PutMBString( _proc, (char*) self->name );
}
static void dao_SDL_RendererInfo_GETF_flags( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  DaoProcess_PutInteger( _proc, (daoint) self->flags );
}
static void dao_SDL_RendererInfo_SETF_flags( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  self->flags = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_RendererInfo_GETF_num_texture_formats( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  DaoProcess_PutInteger( _proc, (daoint) self->num_texture_formats );
}
static void dao_SDL_RendererInfo_SETF_num_texture_formats( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  self->num_texture_formats = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_RendererInfo_GETF_texture_formats( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  DaoProcess_PutVectorUI( _proc, (unsigned int*) self->texture_formats, 16 );
}
static void dao_SDL_RendererInfo_SETF_texture_formats( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  int size = DaoArray_Size( (DaoArray*)_p[1] );
  if( size > 16 ) size = 16;
  memmove( self->texture_formats, DaoArray_ToUInt( (DaoArray*)_p[1] ), size*sizeof(unsigned int) );
}
static void dao_SDL_RendererInfo_GETF_max_texture_width( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  DaoProcess_PutInteger( _proc, (daoint) self->max_texture_width );
}
static void dao_SDL_RendererInfo_SETF_max_texture_width( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  self->max_texture_width = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_RendererInfo_GETF_max_texture_height( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  DaoProcess_PutInteger( _proc, (daoint) self->max_texture_height );
}
static void dao_SDL_RendererInfo_SETF_max_texture_height( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  self->max_texture_height = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_RendererInfo_SDL_RendererInfo( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_RendererInfo *self = Dao_SDL_RendererInfo_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_RendererInfo );
}
/* /usr/local/include/SDL2/SDL_render.h */
static DaoTypeBase SDL_Renderer_Typer = 
{ "SDL_Renderer", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_SDL_Renderer_Typer = & SDL_Renderer_Typer;
DaoType *dao_type_SDL_Renderer = NULL;
/* /usr/local/include/SDL2/SDL_render.h */
static DaoTypeBase SDL_Texture_Typer = 
{ "SDL_Texture", NULL, NULL, NULL, { NULL }, { NULL }, NULL, NULL };
DaoTypeBase DAO_DLL_SDL *dao_SDL_Texture_Typer = & SDL_Texture_Typer;
DaoType *dao_type_SDL_Texture = NULL;
/* /usr/local/include/SDL2/SDL_version.h */


static DaoNumItem dao_SDL_version_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_version_GETF_major( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_version_SETF_major( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_version_GETF_minor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_version_SETF_minor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_version_GETF_patch( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_version_SETF_patch( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_version_SDL_version( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFuncItem dao_SDL_version_Meths[] = 
{
  { dao_SDL_version_GETF_major, ".major( self :SDL_version )=>int" },
  { dao_SDL_version_SETF_major, ".major=( self :SDL_version, major :int )" },
  { dao_SDL_version_GETF_minor, ".minor( self :SDL_version )=>int" },
  { dao_SDL_version_SETF_minor, ".minor=( self :SDL_version, minor :int )" },
  { dao_SDL_version_GETF_patch, ".patch( self :SDL_version )=>int" },
  { dao_SDL_version_SETF_patch, ".patch=( self :SDL_version, patch :int )" },
  { dao_SDL_version_SDL_version, "SDL_version(  )=>SDL_version" },
  { NULL, NULL }
};
static void Dao_SDL_version_Delete( void *self )
{
	free( self );
}

static DaoTypeBase SDL_version_Typer = 
{ "SDL_version", NULL,
  dao_SDL_version_Nums,
  dao_SDL_version_Meths,
  { NULL },
  { NULL },
  Dao_SDL_version_Delete,
  NULL
};
DaoTypeBase DAO_DLL_SDL *dao_SDL_version_Typer = & SDL_version_Typer;
DaoType *dao_type_SDL_version = NULL;
static void dao_SDL_version_GETF_major( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_version *self = (SDL_version*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_version);
  DaoProcess_PutInteger( _proc, (daoint) self->major );
}
static void dao_SDL_version_SETF_major( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_version *self = (SDL_version*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_version);
  self->major = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_version_GETF_minor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_version *self = (SDL_version*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_version);
  DaoProcess_PutInteger( _proc, (daoint) self->minor );
}
static void dao_SDL_version_SETF_minor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_version *self = (SDL_version*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_version);
  self->minor = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_version_GETF_patch( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_version *self = (SDL_version*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_version);
  DaoProcess_PutInteger( _proc, (daoint) self->patch );
}
static void dao_SDL_version_SETF_patch( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_version *self = (SDL_version*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_version);
  self->patch = (unsigned char) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_version_SDL_version( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_version *self = Dao_SDL_version_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_version );
}
#ifdef __cplusplus
}
#endif
