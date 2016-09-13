#include"dao_sdl.h"
#ifdef __cplusplus
extern "C"{
#endif
/* /usr/local/include/SDL2/SDL_stdinc.h */
static DaoTypeCore _SDL_iconv_t_Core = 
{
  "_SDL_iconv_t",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao__SDL_iconv_t_Core = & _SDL_iconv_t_Core;
DaoType *dao_type__SDL_iconv_t = NULL;
/* /usr/local/include/SDL2/SDL_assert.h */


static DaoNumberEntry dao_SDL_AssertData_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_AssertData_GETF_always_ignore( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AssertData_SETF_always_ignore( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AssertData_GETF_trigger_count( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AssertData_SETF_trigger_count( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AssertData_GETF_condition( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AssertData_GETF_filename( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AssertData_GETF_linenum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AssertData_SETF_linenum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AssertData_GETF_function( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AssertData_GETF_next( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AssertData_SDL_AssertData( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_AssertData_Meths[] = 
{
  { dao_SDL_AssertData_GETF_always_ignore, ".always_ignore( self: SDL_AssertData )=>int" },
  { dao_SDL_AssertData_SETF_always_ignore, ".always_ignore=( self: SDL_AssertData, always_ignore: int )" },
  { dao_SDL_AssertData_GETF_trigger_count, ".trigger_count( self: SDL_AssertData )=>int" },
  { dao_SDL_AssertData_SETF_trigger_count, ".trigger_count=( self: SDL_AssertData, trigger_count: int )" },
  { dao_SDL_AssertData_GETF_condition, ".condition( self: SDL_AssertData )=>string" },
  { dao_SDL_AssertData_GETF_filename, ".filename( self: SDL_AssertData )=>string" },
  { dao_SDL_AssertData_GETF_linenum, ".linenum( self: SDL_AssertData )=>int" },
  { dao_SDL_AssertData_SETF_linenum, ".linenum=( self: SDL_AssertData, linenum: int )" },
  { dao_SDL_AssertData_GETF_function, ".function( self: SDL_AssertData )=>string" },
  { dao_SDL_AssertData_GETF_next, ".next( self: SDL_AssertData )=>SDL_AssertData" },
  { dao_SDL_AssertData_SDL_AssertData, "SDL_AssertData(  )=>SDL_AssertData" },
  { NULL, NULL }
};
static void Dao_SDL_AssertData_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_AssertData_Core = 
{
  "SDL_AssertData",
  sizeof(SDL_AssertData),
  { NULL },
  dao_SDL_AssertData_Nums,
  dao_SDL_AssertData_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_AssertData_Delete,
  NULL
};
DaoTypeCore *dao_SDL_AssertData_Core = & SDL_AssertData_Core;
DaoType *dao_type_SDL_AssertData = NULL;
static void dao_SDL_AssertData_GETF_always_ignore( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AssertData *self = (SDL_AssertData*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AssertData);
  DaoProcess_PutInteger( _proc, (dao_integer) self->always_ignore );
}
static void dao_SDL_AssertData_SETF_always_ignore( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AssertData *self = (SDL_AssertData*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AssertData);
  self->always_ignore = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AssertData_GETF_trigger_count( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AssertData *self = (SDL_AssertData*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AssertData);
  DaoProcess_PutInteger( _proc, (dao_integer) self->trigger_count );
}
static void dao_SDL_AssertData_SETF_trigger_count( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AssertData *self = (SDL_AssertData*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AssertData);
  self->trigger_count = (unsigned int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AssertData_GETF_condition( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AssertData *self = (SDL_AssertData*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AssertData);
  DaoProcess_PutChars( _proc, (char*) self->condition );
}
static void dao_SDL_AssertData_GETF_filename( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AssertData *self = (SDL_AssertData*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AssertData);
  DaoProcess_PutChars( _proc, (char*) self->filename );
}
static void dao_SDL_AssertData_GETF_linenum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AssertData *self = (SDL_AssertData*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AssertData);
  DaoProcess_PutInteger( _proc, (dao_integer) self->linenum );
}
static void dao_SDL_AssertData_SETF_linenum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AssertData *self = (SDL_AssertData*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AssertData);
  self->linenum = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AssertData_GETF_function( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AssertData *self = (SDL_AssertData*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AssertData);
  DaoProcess_PutChars( _proc, (char*) self->function );
}
static void dao_SDL_AssertData_GETF_next( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AssertData *self = (SDL_AssertData*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AssertData);
  DaoProcess_WrapCdata( _proc, (void*) self->next, dao_type_SDL_AssertData );
}
static void dao_SDL_AssertData_SDL_AssertData( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_AssertData *self = Dao_SDL_AssertData_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_AssertData );
}
/* /usr/local/include/SDL2/SDL_atomic.h */


static DaoNumberEntry dao_SDL_atomic_t_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_atomic_t_GETF_value( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_atomic_t_SETF_value( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_atomic_t_SDL_atomic_t( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_atomic_t_Meths[] = 
{
  { dao_SDL_atomic_t_GETF_value, ".value( self: SDL_atomic_t )=>int" },
  { dao_SDL_atomic_t_SETF_value, ".value=( self: SDL_atomic_t, value: int )" },
  { dao_SDL_atomic_t_SDL_atomic_t, "SDL_atomic_t(  )=>SDL_atomic_t" },
  { NULL, NULL }
};
static void Dao_SDL_atomic_t_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_atomic_t_Core = 
{
  "SDL_atomic_t",
  sizeof(SDL_atomic_t),
  { NULL },
  dao_SDL_atomic_t_Nums,
  dao_SDL_atomic_t_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_atomic_t_Delete,
  NULL
};
DaoTypeCore *dao_SDL_atomic_t_Core = & SDL_atomic_t_Core;
DaoType *dao_type_SDL_atomic_t = NULL;
static void dao_SDL_atomic_t_GETF_value( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_atomic_t *self = (SDL_atomic_t*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_atomic_t);
  DaoProcess_PutInteger( _proc, (dao_integer) self->value );
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
static DaoTypeCore SDL_mutex_Core = 
{
  "SDL_mutex",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_mutex_Core = & SDL_mutex_Core;
DaoType *dao_type_SDL_mutex = NULL;
/* /usr/local/include/SDL2/SDL_mutex.h */
static DaoTypeCore SDL_semaphore_Core = 
{
  "SDL_semaphore",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_semaphore_Core = & SDL_semaphore_Core;
DaoType *dao_type_SDL_semaphore = NULL;
/* /usr/local/include/SDL2/SDL_mutex.h */
static DaoTypeCore SDL_cond_Core = 
{
  "SDL_cond",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_cond_Core = & SDL_cond_Core;
DaoType *dao_type_SDL_cond = NULL;
/* /usr/local/include/SDL2/SDL_thread.h */
static DaoTypeCore SDL_Thread_Core = 
{
  "SDL_Thread",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_Thread_Core = & SDL_Thread_Core;
DaoType *dao_type_SDL_Thread = NULL;
/* /usr/local/include/SDL2/SDL_rwops.h */


static DaoNumberEntry dao_SDL_RWops_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_RWops_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RWops_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_RWops_SDL_RWops( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_RWops_Meths[] = 
{
  { dao_SDL_RWops_GETF_type, ".type( self: SDL_RWops )=>int" },
  { dao_SDL_RWops_SETF_type, ".type=( self: SDL_RWops, type: int )" },
  { dao_SDL_RWops_SDL_RWops, "SDL_RWops(  )=>SDL_RWops" },
  { NULL, NULL }
};
static void Dao_SDL_RWops_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_RWops_Core = 
{
  "SDL_RWops",
  sizeof(SDL_RWops),
  { NULL },
  dao_SDL_RWops_Nums,
  dao_SDL_RWops_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_RWops_Delete,
  NULL
};
DaoTypeCore *dao_SDL_RWops_Core = & SDL_RWops_Core;
DaoType *dao_type_SDL_RWops = NULL;
static void dao_SDL_RWops_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops *self = (SDL_RWops*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RWops);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_RWops_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops *self = (SDL_RWops*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RWops);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_RWops_SDL_RWops( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	Dao_SDL_RWops *self = Dao_SDL_RWops_New();
	DaoProcess_PutValue( _proc, (DaoValue*) self->_cdata );
}
/* /usr/local/include/SDL2/SDL_audio.h */


static DaoNumberEntry dao_SDL_AudioSpec_Nums[] = 
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
static void dao_SDL_AudioSpec_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_GETF_userdata( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioSpec_SDL_AudioSpec( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_AudioSpec_Meths[] = 
{
  { dao_SDL_AudioSpec_GETF_freq, ".freq( self: SDL_AudioSpec )=>int" },
  { dao_SDL_AudioSpec_SETF_freq, ".freq=( self: SDL_AudioSpec, freq: int )" },
  { dao_SDL_AudioSpec_GETF_format, ".format( self: SDL_AudioSpec )=>int" },
  { dao_SDL_AudioSpec_SETF_format, ".format=( self: SDL_AudioSpec, format: int )" },
  { dao_SDL_AudioSpec_GETF_channels, ".channels( self: SDL_AudioSpec )=>int" },
  { dao_SDL_AudioSpec_SETF_channels, ".channels=( self: SDL_AudioSpec, channels: int )" },
  { dao_SDL_AudioSpec_GETF_silence, ".silence( self: SDL_AudioSpec )=>int" },
  { dao_SDL_AudioSpec_SETF_silence, ".silence=( self: SDL_AudioSpec, silence: int )" },
  { dao_SDL_AudioSpec_GETF_samples, ".samples( self: SDL_AudioSpec )=>int" },
  { dao_SDL_AudioSpec_SETF_samples, ".samples=( self: SDL_AudioSpec, samples: int )" },
  { dao_SDL_AudioSpec_GETF_size, ".size( self: SDL_AudioSpec )=>int" },
  { dao_SDL_AudioSpec_SETF_size, ".size=( self: SDL_AudioSpec, size: int )" },
  { dao_SDL_AudioSpec_GETF_userdata, ".userdata( self: SDL_AudioSpec )=>cdata" },
  { dao_SDL_AudioSpec_SDL_AudioSpec, "SDL_AudioSpec(  )=>SDL_AudioSpec" },
  { NULL, NULL }
};
static void Dao_SDL_AudioSpec_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_AudioSpec_Core = 
{
  "SDL_AudioSpec",
  sizeof(SDL_AudioSpec),
  { NULL },
  dao_SDL_AudioSpec_Nums,
  dao_SDL_AudioSpec_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_AudioSpec_Delete,
  NULL
};
DaoTypeCore *dao_SDL_AudioSpec_Core = & SDL_AudioSpec_Core;
DaoType *dao_type_SDL_AudioSpec = NULL;
static void dao_SDL_AudioSpec_GETF_freq( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_PutInteger( _proc, (dao_integer) self->freq );
}
static void dao_SDL_AudioSpec_SETF_freq( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  self->freq = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioSpec_GETF_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_PutInteger( _proc, (dao_integer) self->format );
}
static void dao_SDL_AudioSpec_SETF_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  self->format = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioSpec_GETF_channels( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_PutInteger( _proc, (dao_integer) self->channels );
}
static void dao_SDL_AudioSpec_SETF_channels( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  self->channels = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioSpec_GETF_silence( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_PutInteger( _proc, (dao_integer) self->silence );
}
static void dao_SDL_AudioSpec_SETF_silence( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  self->silence = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioSpec_GETF_samples( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_PutInteger( _proc, (dao_integer) self->samples );
}
static void dao_SDL_AudioSpec_SETF_samples( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  self->samples = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioSpec_GETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_PutInteger( _proc, (dao_integer) self->size );
}
static void dao_SDL_AudioSpec_SETF_size( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  self->size = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioSpec_GETF_userdata( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec *self = (SDL_AudioSpec*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioSpec);
  DaoProcess_WrapCdata( _proc, (void*) self->userdata, NULL );
}
static void dao_SDL_AudioSpec_SDL_AudioSpec( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_AudioSpec *self = Dao_SDL_AudioSpec_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_AudioSpec );
}
/* /usr/local/include/SDL2/SDL_audio.h */


static DaoNumberEntry dao_SDL_AudioCVT_Nums[] = 
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

static DaoFunctionEntry dao_SDL_AudioCVT_Meths[] = 
{
  { dao_SDL_AudioCVT_GETF_needed, ".needed( self: SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_SETF_needed, ".needed=( self: SDL_AudioCVT, needed: int )" },
  { dao_SDL_AudioCVT_GETF_src_format, ".src_format( self: SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_SETF_src_format, ".src_format=( self: SDL_AudioCVT, src_format: int )" },
  { dao_SDL_AudioCVT_GETF_dst_format, ".dst_format( self: SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_SETF_dst_format, ".dst_format=( self: SDL_AudioCVT, dst_format: int )" },
  { dao_SDL_AudioCVT_GETF_rate_incr, ".rate_incr( self: SDL_AudioCVT )=>float" },
  { dao_SDL_AudioCVT_SETF_rate_incr, ".rate_incr=( self: SDL_AudioCVT, rate_incr: float )" },
  { dao_SDL_AudioCVT_GETF_buf, ".buf( self: SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_GETF_len, ".len( self: SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_SETF_len, ".len=( self: SDL_AudioCVT, len: int )" },
  { dao_SDL_AudioCVT_GETF_len_cvt, ".len_cvt( self: SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_SETF_len_cvt, ".len_cvt=( self: SDL_AudioCVT, len_cvt: int )" },
  { dao_SDL_AudioCVT_GETF_len_mult, ".len_mult( self: SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_SETF_len_mult, ".len_mult=( self: SDL_AudioCVT, len_mult: int )" },
  { dao_SDL_AudioCVT_GETF_len_ratio, ".len_ratio( self: SDL_AudioCVT )=>float" },
  { dao_SDL_AudioCVT_SETF_len_ratio, ".len_ratio=( self: SDL_AudioCVT, len_ratio: float )" },
  { dao_SDL_AudioCVT_GETF_filter_index, ".filter_index( self: SDL_AudioCVT )=>int" },
  { dao_SDL_AudioCVT_SETF_filter_index, ".filter_index=( self: SDL_AudioCVT, filter_index: int )" },
  { dao_SDL_AudioCVT_SDL_AudioCVT, "SDL_AudioCVT(  )=>SDL_AudioCVT" },
  { NULL, NULL }
};
static void Dao_SDL_AudioCVT_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_AudioCVT_Core = 
{
  "SDL_AudioCVT",
  sizeof(SDL_AudioCVT),
  { NULL },
  dao_SDL_AudioCVT_Nums,
  dao_SDL_AudioCVT_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_AudioCVT_Delete,
  NULL
};
DaoTypeCore *dao_SDL_AudioCVT_Core = & SDL_AudioCVT_Core;
DaoType *dao_type_SDL_AudioCVT = NULL;
static void dao_SDL_AudioCVT_GETF_needed( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutInteger( _proc, (dao_integer) self->needed );
}
static void dao_SDL_AudioCVT_SETF_needed( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->needed = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_src_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutInteger( _proc, (dao_integer) self->src_format );
}
static void dao_SDL_AudioCVT_SETF_src_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->src_format = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_dst_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutInteger( _proc, (dao_integer) self->dst_format );
}
static void dao_SDL_AudioCVT_SETF_dst_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->dst_format = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_rate_incr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutFloat( _proc, (dao_float) self->rate_incr );
}
static void dao_SDL_AudioCVT_SETF_rate_incr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->rate_incr = (double) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_buf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutVectorSInt32( _proc, (signed int*) self->buf, 0 );
}
static void dao_SDL_AudioCVT_GETF_len( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutInteger( _proc, (dao_integer) self->len );
}
static void dao_SDL_AudioCVT_SETF_len( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->len = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_len_cvt( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutInteger( _proc, (dao_integer) self->len_cvt );
}
static void dao_SDL_AudioCVT_SETF_len_cvt( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->len_cvt = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_len_mult( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutInteger( _proc, (dao_integer) self->len_mult );
}
static void dao_SDL_AudioCVT_SETF_len_mult( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->len_mult = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_len_ratio( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutFloat( _proc, (dao_float) self->len_ratio );
}
static void dao_SDL_AudioCVT_SETF_len_ratio( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  self->len_ratio = (double) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_AudioCVT_GETF_filter_index( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT *self = (SDL_AudioCVT*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioCVT);
  DaoProcess_PutInteger( _proc, (dao_integer) self->filter_index );
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


static DaoNumberEntry dao_SDL_Color_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_Color_GETF_r( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_SETF_r( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_GETF_g( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_SETF_g( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_GETF_b( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_SETF_b( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_GETF_a( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_SETF_a( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Color_SDL_Color( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_Color_Meths[] = 
{
  { dao_SDL_Color_GETF_r, ".r( self: SDL_Color )=>int" },
  { dao_SDL_Color_SETF_r, ".r=( self: SDL_Color, r: int )" },
  { dao_SDL_Color_GETF_g, ".g( self: SDL_Color )=>int" },
  { dao_SDL_Color_SETF_g, ".g=( self: SDL_Color, g: int )" },
  { dao_SDL_Color_GETF_b, ".b( self: SDL_Color )=>int" },
  { dao_SDL_Color_SETF_b, ".b=( self: SDL_Color, b: int )" },
  { dao_SDL_Color_GETF_a, ".a( self: SDL_Color )=>int" },
  { dao_SDL_Color_SETF_a, ".a=( self: SDL_Color, a: int )" },
  { dao_SDL_Color_SDL_Color, "SDL_Color(  )=>SDL_Color" },
  { NULL, NULL }
};
static void Dao_SDL_Color_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_Color_Core = 
{
  "SDL_Color",
  sizeof(SDL_Color),
  { NULL },
  dao_SDL_Color_Nums,
  dao_SDL_Color_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_Color_Delete,
  NULL
};
DaoTypeCore *dao_SDL_Color_Core = & SDL_Color_Core;
DaoType *dao_type_SDL_Color = NULL;
static void dao_SDL_Color_GETF_r( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  DaoProcess_PutInteger( _proc, (dao_integer) self->r );
}
static void dao_SDL_Color_SETF_r( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  self->r = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Color_GETF_g( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  DaoProcess_PutInteger( _proc, (dao_integer) self->g );
}
static void dao_SDL_Color_SETF_g( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  self->g = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Color_GETF_b( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  DaoProcess_PutInteger( _proc, (dao_integer) self->b );
}
static void dao_SDL_Color_SETF_b( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  self->b = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Color_GETF_a( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  DaoProcess_PutInteger( _proc, (dao_integer) self->a );
}
static void dao_SDL_Color_SETF_a( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Color *self = (SDL_Color*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Color);
  self->a = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Color_SDL_Color( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_Color *self = Dao_SDL_Color_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_Color );
}
/* /usr/local/include/SDL2/SDL_pixels.h */


static DaoNumberEntry dao_SDL_Palette_Nums[] = 
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

static DaoFunctionEntry dao_SDL_Palette_Meths[] = 
{
  { dao_SDL_Palette_GETF_ncolors, ".ncolors( self: SDL_Palette )=>int" },
  { dao_SDL_Palette_SETF_ncolors, ".ncolors=( self: SDL_Palette, ncolors: int )" },
  { dao_SDL_Palette_GETF_colors, ".colors( self: SDL_Palette )=>SDL_Color" },
  { dao_SDL_Palette_GETF_version, ".version( self: SDL_Palette )=>int" },
  { dao_SDL_Palette_SETF_version, ".version=( self: SDL_Palette, version: int )" },
  { dao_SDL_Palette_GETF_refcount, ".refcount( self: SDL_Palette )=>int" },
  { dao_SDL_Palette_SETF_refcount, ".refcount=( self: SDL_Palette, refcount: int )" },
  { dao_SDL_Palette_SDL_Palette, "SDL_Palette(  )=>SDL_Palette" },
  { NULL, NULL }
};
static void Dao_SDL_Palette_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_Palette_Core = 
{
  "SDL_Palette",
  sizeof(SDL_Palette),
  { NULL },
  dao_SDL_Palette_Nums,
  dao_SDL_Palette_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_Palette_Delete,
  NULL
};
DaoTypeCore *dao_SDL_Palette_Core = & SDL_Palette_Core;
DaoType *dao_type_SDL_Palette = NULL;
static void dao_SDL_Palette_GETF_ncolors( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Palette *self = (SDL_Palette*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Palette);
  DaoProcess_PutInteger( _proc, (dao_integer) self->ncolors );
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
  DaoProcess_PutInteger( _proc, (dao_integer) self->version );
}
static void dao_SDL_Palette_SETF_version( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Palette *self = (SDL_Palette*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Palette);
  self->version = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Palette_GETF_refcount( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Palette *self = (SDL_Palette*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Palette);
  DaoProcess_PutInteger( _proc, (dao_integer) self->refcount );
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


static DaoNumberEntry dao_SDL_PixelFormat_Nums[] = 
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

static DaoFunctionEntry dao_SDL_PixelFormat_Meths[] = 
{
  { dao_SDL_PixelFormat_GETF_format, ".format( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_format, ".format=( self: SDL_PixelFormat, format: int )" },
  { dao_SDL_PixelFormat_GETF_palette, ".palette( self: SDL_PixelFormat )=>SDL_Palette" },
  { dao_SDL_PixelFormat_GETF_BitsPerPixel, ".BitsPerPixel( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_BitsPerPixel, ".BitsPerPixel=( self: SDL_PixelFormat, BitsPerPixel: int )" },
  { dao_SDL_PixelFormat_GETF_BytesPerPixel, ".BytesPerPixel( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_BytesPerPixel, ".BytesPerPixel=( self: SDL_PixelFormat, BytesPerPixel: int )" },
  { dao_SDL_PixelFormat_GETF_Rmask, ".Rmask( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Rmask, ".Rmask=( self: SDL_PixelFormat, Rmask: int )" },
  { dao_SDL_PixelFormat_GETF_Gmask, ".Gmask( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Gmask, ".Gmask=( self: SDL_PixelFormat, Gmask: int )" },
  { dao_SDL_PixelFormat_GETF_Bmask, ".Bmask( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Bmask, ".Bmask=( self: SDL_PixelFormat, Bmask: int )" },
  { dao_SDL_PixelFormat_GETF_Amask, ".Amask( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Amask, ".Amask=( self: SDL_PixelFormat, Amask: int )" },
  { dao_SDL_PixelFormat_GETF_Rloss, ".Rloss( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Rloss, ".Rloss=( self: SDL_PixelFormat, Rloss: int )" },
  { dao_SDL_PixelFormat_GETF_Gloss, ".Gloss( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Gloss, ".Gloss=( self: SDL_PixelFormat, Gloss: int )" },
  { dao_SDL_PixelFormat_GETF_Bloss, ".Bloss( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Bloss, ".Bloss=( self: SDL_PixelFormat, Bloss: int )" },
  { dao_SDL_PixelFormat_GETF_Aloss, ".Aloss( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Aloss, ".Aloss=( self: SDL_PixelFormat, Aloss: int )" },
  { dao_SDL_PixelFormat_GETF_Rshift, ".Rshift( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Rshift, ".Rshift=( self: SDL_PixelFormat, Rshift: int )" },
  { dao_SDL_PixelFormat_GETF_Gshift, ".Gshift( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Gshift, ".Gshift=( self: SDL_PixelFormat, Gshift: int )" },
  { dao_SDL_PixelFormat_GETF_Bshift, ".Bshift( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Bshift, ".Bshift=( self: SDL_PixelFormat, Bshift: int )" },
  { dao_SDL_PixelFormat_GETF_Ashift, ".Ashift( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_Ashift, ".Ashift=( self: SDL_PixelFormat, Ashift: int )" },
  { dao_SDL_PixelFormat_GETF_refcount, ".refcount( self: SDL_PixelFormat )=>int" },
  { dao_SDL_PixelFormat_SETF_refcount, ".refcount=( self: SDL_PixelFormat, refcount: int )" },
  { dao_SDL_PixelFormat_GETF_next, ".next( self: SDL_PixelFormat )=>SDL_PixelFormat" },
  { dao_SDL_PixelFormat_SDL_PixelFormat, "SDL_PixelFormat(  )=>SDL_PixelFormat" },
  { NULL, NULL }
};
static void Dao_SDL_PixelFormat_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_PixelFormat_Core = 
{
  "SDL_PixelFormat",
  sizeof(SDL_PixelFormat),
  { NULL },
  dao_SDL_PixelFormat_Nums,
  dao_SDL_PixelFormat_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_PixelFormat_Delete,
  NULL
};
DaoTypeCore *dao_SDL_PixelFormat_Core = & SDL_PixelFormat_Core;
DaoType *dao_type_SDL_PixelFormat = NULL;
static void dao_SDL_PixelFormat_GETF_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->format );
}
static void dao_SDL_PixelFormat_SETF_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->format = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_palette( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_WrapCdata( _proc, (void*) self->palette, dao_type_SDL_Palette );
}
static void dao_SDL_PixelFormat_GETF_BitsPerPixel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->BitsPerPixel );
}
static void dao_SDL_PixelFormat_SETF_BitsPerPixel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->BitsPerPixel = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_BytesPerPixel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->BytesPerPixel );
}
static void dao_SDL_PixelFormat_SETF_BytesPerPixel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->BytesPerPixel = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Rmask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->Rmask );
}
static void dao_SDL_PixelFormat_SETF_Rmask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Rmask = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Gmask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->Gmask );
}
static void dao_SDL_PixelFormat_SETF_Gmask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Gmask = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Bmask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->Bmask );
}
static void dao_SDL_PixelFormat_SETF_Bmask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Bmask = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Amask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->Amask );
}
static void dao_SDL_PixelFormat_SETF_Amask( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Amask = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Rloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->Rloss );
}
static void dao_SDL_PixelFormat_SETF_Rloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Rloss = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Gloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->Gloss );
}
static void dao_SDL_PixelFormat_SETF_Gloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Gloss = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Bloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->Bloss );
}
static void dao_SDL_PixelFormat_SETF_Bloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Bloss = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Aloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->Aloss );
}
static void dao_SDL_PixelFormat_SETF_Aloss( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Aloss = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Rshift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->Rshift );
}
static void dao_SDL_PixelFormat_SETF_Rshift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Rshift = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Gshift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->Gshift );
}
static void dao_SDL_PixelFormat_SETF_Gshift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Gshift = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Bshift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->Bshift );
}
static void dao_SDL_PixelFormat_SETF_Bshift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Bshift = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_Ashift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->Ashift );
}
static void dao_SDL_PixelFormat_SETF_Ashift( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  self->Ashift = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_PixelFormat_GETF_refcount( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat *self = (SDL_PixelFormat*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_PixelFormat);
  DaoProcess_PutInteger( _proc, (dao_integer) self->refcount );
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


static DaoNumberEntry dao_SDL_Point_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_Point_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Point_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Point_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Point_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Point_SDL_Point( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_Point_Meths[] = 
{
  { dao_SDL_Point_GETF_x, ".x( self: SDL_Point )=>int" },
  { dao_SDL_Point_SETF_x, ".x=( self: SDL_Point, x: int )" },
  { dao_SDL_Point_GETF_y, ".y( self: SDL_Point )=>int" },
  { dao_SDL_Point_SETF_y, ".y=( self: SDL_Point, y: int )" },
  { dao_SDL_Point_SDL_Point, "SDL_Point(  )=>SDL_Point" },
  { NULL, NULL }
};
static void Dao_SDL_Point_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_Point_Core = 
{
  "SDL_Point",
  sizeof(SDL_Point),
  { NULL },
  dao_SDL_Point_Nums,
  dao_SDL_Point_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_Point_Delete,
  NULL
};
DaoTypeCore *dao_SDL_Point_Core = & SDL_Point_Core;
DaoType *dao_type_SDL_Point = NULL;
static void dao_SDL_Point_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Point *self = (SDL_Point*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Point);
  DaoProcess_PutInteger( _proc, (dao_integer) self->x );
}
static void dao_SDL_Point_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Point *self = (SDL_Point*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Point);
  self->x = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Point_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Point *self = (SDL_Point*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Point);
  DaoProcess_PutInteger( _proc, (dao_integer) self->y );
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


static DaoNumberEntry dao_SDL_Rect_Nums[] = 
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

static DaoFunctionEntry dao_SDL_Rect_Meths[] = 
{
  { dao_SDL_Rect_GETF_x, ".x( self: SDL_Rect )=>int" },
  { dao_SDL_Rect_SETF_x, ".x=( self: SDL_Rect, x: int )" },
  { dao_SDL_Rect_GETF_y, ".y( self: SDL_Rect )=>int" },
  { dao_SDL_Rect_SETF_y, ".y=( self: SDL_Rect, y: int )" },
  { dao_SDL_Rect_GETF_w, ".w( self: SDL_Rect )=>int" },
  { dao_SDL_Rect_SETF_w, ".w=( self: SDL_Rect, w: int )" },
  { dao_SDL_Rect_GETF_h, ".h( self: SDL_Rect )=>int" },
  { dao_SDL_Rect_SETF_h, ".h=( self: SDL_Rect, h: int )" },
  { dao_SDL_Rect_SDL_Rect, "SDL_Rect(  )=>SDL_Rect" },
  { NULL, NULL }
};
static void Dao_SDL_Rect_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_Rect_Core = 
{
  "SDL_Rect",
  sizeof(SDL_Rect),
  { NULL },
  dao_SDL_Rect_Nums,
  dao_SDL_Rect_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_Rect_Delete,
  NULL
};
DaoTypeCore *dao_SDL_Rect_Core = & SDL_Rect_Core;
DaoType *dao_type_SDL_Rect = NULL;
static void dao_SDL_Rect_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  DaoProcess_PutInteger( _proc, (dao_integer) self->x );
}
static void dao_SDL_Rect_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  self->x = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Rect_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  DaoProcess_PutInteger( _proc, (dao_integer) self->y );
}
static void dao_SDL_Rect_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  self->y = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Rect_GETF_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  DaoProcess_PutInteger( _proc, (dao_integer) self->w );
}
static void dao_SDL_Rect_SETF_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  self->w = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Rect_GETF_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect *self = (SDL_Rect*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Rect);
  DaoProcess_PutInteger( _proc, (dao_integer) self->h );
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


static DaoNumberEntry dao_SDL_Surface_Nums[] = 
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

static DaoFunctionEntry dao_SDL_Surface_Meths[] = 
{
  { dao_SDL_Surface_GETF_flags, ".flags( self: SDL_Surface )=>int" },
  { dao_SDL_Surface_GETF_format, ".format( self: SDL_Surface )=>SDL_PixelFormat" },
  { dao_SDL_Surface_GETF_w, ".w( self: SDL_Surface )=>int" },
  { dao_SDL_Surface_GETF_h, ".h( self: SDL_Surface )=>int" },
  { dao_SDL_Surface_GETF_pitch, ".pitch( self: SDL_Surface )=>int" },
  { dao_SDL_Surface_GETF_pixels, ".pixels( self: SDL_Surface )=>cdata" },
  { dao_SDL_Surface_GETI_Pixel, "[]( self: SDL_Surface, i: int, j: int, pixel: enum<uint8,uint16,uint32>=$uint8 )=>int" },
  { dao_SDL_Surface_SETI_Pixel, "[]=( self: SDL_Surface, value: int, i: int, j: int, pixel: enum<uint8,uint16,uint32>=$uint8 )" },
  { dao_SDL_Surface_GETF_userdata, ".userdata( self: SDL_Surface )=>cdata" },
  { dao_SDL_Surface_GETF_locked, ".locked( self: SDL_Surface )=>int" },
  { dao_SDL_Surface_GETF_lock_data, ".lock_data( self: SDL_Surface )=>cdata" },
  { dao_SDL_Surface_GETF_clip_rect, ".clip_rect( self: SDL_Surface )=>SDL_Rect" },
  { dao_SDL_Surface_GETF_map, ".map( self: SDL_Surface )=>SDL_BlitMap" },
  { dao_SDL_Surface_GETF_refcount, ".refcount( self: SDL_Surface )=>int" },
  { dao_SDL_Surface_SDL_Surface, "SDL_Surface(  )=>SDL_Surface" },
  { NULL, NULL }
};
static void Dao_SDL_Surface_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_Surface_Core = 
{
  "SDL_Surface",
  sizeof(SDL_Surface),
  { NULL },
  dao_SDL_Surface_Nums,
  dao_SDL_Surface_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_Surface_Delete,
  NULL
};
DaoTypeCore *dao_SDL_Surface_Core = & SDL_Surface_Core;
DaoType *dao_type_SDL_Surface = NULL;
static void dao_SDL_Surface_GETF_flags( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_PutInteger( _proc, (dao_integer) self->flags );
}
static void dao_SDL_Surface_GETF_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_WrapCdata( _proc, (void*) self->format, dao_type_SDL_PixelFormat );
}
static void dao_SDL_Surface_GETF_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_PutInteger( _proc, (dao_integer) self->w );
}
static void dao_SDL_Surface_GETF_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_PutInteger( _proc, (dao_integer) self->h );
}
static void dao_SDL_Surface_GETF_pitch( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_PutInteger( _proc, (dao_integer) self->pitch );
}
static void dao_SDL_Surface_GETF_pixels( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_WrapCdata( _proc, (void*) self->pixels, NULL );
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
  DaoProcess_WrapCdata( _proc, (void*) self->userdata, NULL );
}
static void dao_SDL_Surface_GETF_locked( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_PutInteger( _proc, (dao_integer) self->locked );
}
static void dao_SDL_Surface_GETF_lock_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface *self = (SDL_Surface*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Surface);
  DaoProcess_WrapCdata( _proc, (void*) self->lock_data, NULL );
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
  DaoProcess_PutInteger( _proc, (dao_integer) self->refcount );
}
static void dao_SDL_Surface_SDL_Surface( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_Surface *self = Dao_SDL_Surface_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_Surface );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static DaoTypeCore SDL_BlitMap_Core = 
{
  "SDL_BlitMap",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_BlitMap_Core = & SDL_BlitMap_Core;
DaoType *dao_type_SDL_BlitMap = NULL;
/* /usr/local/include/SDL2/SDL_video.h */


static DaoNumberEntry dao_SDL_DisplayMode_Nums[] = 
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

static DaoFunctionEntry dao_SDL_DisplayMode_Meths[] = 
{
  { dao_SDL_DisplayMode_GETF_format, ".format( self: SDL_DisplayMode )=>int" },
  { dao_SDL_DisplayMode_SETF_format, ".format=( self: SDL_DisplayMode, format: int )" },
  { dao_SDL_DisplayMode_GETF_w, ".w( self: SDL_DisplayMode )=>int" },
  { dao_SDL_DisplayMode_SETF_w, ".w=( self: SDL_DisplayMode, w: int )" },
  { dao_SDL_DisplayMode_GETF_h, ".h( self: SDL_DisplayMode )=>int" },
  { dao_SDL_DisplayMode_SETF_h, ".h=( self: SDL_DisplayMode, h: int )" },
  { dao_SDL_DisplayMode_GETF_refresh_rate, ".refresh_rate( self: SDL_DisplayMode )=>int" },
  { dao_SDL_DisplayMode_SETF_refresh_rate, ".refresh_rate=( self: SDL_DisplayMode, refresh_rate: int )" },
  { dao_SDL_DisplayMode_GETF_driverdata, ".driverdata( self: SDL_DisplayMode )=>cdata" },
  { dao_SDL_DisplayMode_SDL_DisplayMode, "SDL_DisplayMode(  )=>SDL_DisplayMode" },
  { NULL, NULL }
};
static void Dao_SDL_DisplayMode_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_DisplayMode_Core = 
{
  "SDL_DisplayMode",
  sizeof(SDL_DisplayMode),
  { NULL },
  dao_SDL_DisplayMode_Nums,
  dao_SDL_DisplayMode_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_DisplayMode_Delete,
  NULL
};
DaoTypeCore *dao_SDL_DisplayMode_Core = & SDL_DisplayMode_Core;
DaoType *dao_type_SDL_DisplayMode = NULL;
static void dao_SDL_DisplayMode_GETF_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  DaoProcess_PutInteger( _proc, (dao_integer) self->format );
}
static void dao_SDL_DisplayMode_SETF_format( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  self->format = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DisplayMode_GETF_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  DaoProcess_PutInteger( _proc, (dao_integer) self->w );
}
static void dao_SDL_DisplayMode_SETF_w( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  self->w = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DisplayMode_GETF_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  DaoProcess_PutInteger( _proc, (dao_integer) self->h );
}
static void dao_SDL_DisplayMode_SETF_h( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  self->h = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DisplayMode_GETF_refresh_rate( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  DaoProcess_PutInteger( _proc, (dao_integer) self->refresh_rate );
}
static void dao_SDL_DisplayMode_SETF_refresh_rate( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  self->refresh_rate = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DisplayMode_GETF_driverdata( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DisplayMode *self = (SDL_DisplayMode*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DisplayMode);
  DaoProcess_WrapCdata( _proc, (void*) self->driverdata, NULL );
}
static void dao_SDL_DisplayMode_SDL_DisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_DisplayMode *self = Dao_SDL_DisplayMode_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_DisplayMode );
}
/* /usr/local/include/SDL2/SDL_video.h */
static DaoTypeCore SDL_Window_Core = 
{
  "SDL_Window",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_Window_Core = & SDL_Window_Core;
DaoType *dao_type_SDL_Window = NULL;
/* /usr/local/include/SDL2/SDL_keyboard.h */


static DaoNumberEntry dao_SDL_Keysym_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_Keysym_GETF_scancode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_SETF_scancode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_GETF_sym( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_SETF_sym( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_GETF_mod( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_SETF_mod( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_GETF_unused( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_SETF_unused( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Keysym_SDL_Keysym( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_Keysym_Meths[] = 
{
  { dao_SDL_Keysym_GETF_scancode, ".scancode( self: SDL_Keysym )=>int" },
  { dao_SDL_Keysym_SETF_scancode, ".scancode=( self: SDL_Keysym, scancode: int )" },
  { dao_SDL_Keysym_GETF_sym, ".sym( self: SDL_Keysym )=>int" },
  { dao_SDL_Keysym_SETF_sym, ".sym=( self: SDL_Keysym, sym: int )" },
  { dao_SDL_Keysym_GETF_mod, ".mod( self: SDL_Keysym )=>int" },
  { dao_SDL_Keysym_SETF_mod, ".mod=( self: SDL_Keysym, mod: int )" },
  { dao_SDL_Keysym_GETF_unused, ".unused( self: SDL_Keysym )=>int" },
  { dao_SDL_Keysym_SETF_unused, ".unused=( self: SDL_Keysym, unused: int )" },
  { dao_SDL_Keysym_SDL_Keysym, "SDL_Keysym(  )=>SDL_Keysym" },
  { NULL, NULL }
};
static void Dao_SDL_Keysym_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_Keysym_Core = 
{
  "SDL_Keysym",
  sizeof(SDL_Keysym),
  { NULL },
  dao_SDL_Keysym_Nums,
  dao_SDL_Keysym_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_Keysym_Delete,
  NULL
};
DaoTypeCore *dao_SDL_Keysym_Core = & SDL_Keysym_Core;
DaoType *dao_type_SDL_Keysym = NULL;
static void dao_SDL_Keysym_GETF_scancode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  DaoProcess_PutInteger( _proc, (dao_integer) self->scancode );
}
static void dao_SDL_Keysym_SETF_scancode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  self->scancode = (SDL_Scancode) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Keysym_GETF_sym( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  DaoProcess_PutInteger( _proc, (dao_integer) self->sym );
}
static void dao_SDL_Keysym_SETF_sym( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  self->sym = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Keysym_GETF_mod( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  DaoProcess_PutInteger( _proc, (dao_integer) self->mod );
}
static void dao_SDL_Keysym_SETF_mod( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  self->mod = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Keysym_GETF_unused( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  DaoProcess_PutInteger( _proc, (dao_integer) self->unused );
}
static void dao_SDL_Keysym_SETF_unused( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keysym *self = (SDL_Keysym*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Keysym);
  self->unused = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Keysym_SDL_Keysym( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_Keysym *self = Dao_SDL_Keysym_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_Keysym );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static DaoTypeCore SDL_Cursor_Core = 
{
  "SDL_Cursor",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_Cursor_Core = & SDL_Cursor_Core;
DaoType *dao_type_SDL_Cursor = NULL;
/* /usr/local/include/SDL2/SDL_joystick.h */
static DaoTypeCore _SDL_Joystick_Core = 
{
  "_SDL_Joystick",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao__SDL_Joystick_Core = & _SDL_Joystick_Core;
DaoType *dao_type__SDL_Joystick = NULL;
/* /usr/local/include/SDL2/SDL_joystick.h */


static DaoNumberEntry dao_SDL_JoystickGUID_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_JoystickGUID_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoystickGUID_SETF_data( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoystickGUID_SDL_JoystickGUID( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_JoystickGUID_Meths[] = 
{
  { dao_SDL_JoystickGUID_GETF_data, ".data( self: SDL_JoystickGUID )=>array<int>" },
  { dao_SDL_JoystickGUID_SETF_data, ".data=( self: SDL_JoystickGUID, data: array<int> )" },
  { dao_SDL_JoystickGUID_SDL_JoystickGUID, "SDL_JoystickGUID(  )=>SDL_JoystickGUID" },
  { NULL, NULL }
};
static void Dao_SDL_JoystickGUID_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_JoystickGUID_Core = 
{
  "SDL_JoystickGUID",
  sizeof(SDL_JoystickGUID),
  { NULL },
  dao_SDL_JoystickGUID_Nums,
  dao_SDL_JoystickGUID_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_JoystickGUID_Delete,
  NULL
};
DaoTypeCore *dao_SDL_JoystickGUID_Core = & SDL_JoystickGUID_Core;
DaoType *dao_type_SDL_JoystickGUID = NULL;
static void dao_SDL_JoystickGUID_GETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoystickGUID *self = (SDL_JoystickGUID*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoystickGUID);
  DaoProcess_PutVectorSInt32( _proc, (signed int*) self->data, 16 );
}
static void dao_SDL_JoystickGUID_SETF_data( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoystickGUID *self = (SDL_JoystickGUID*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoystickGUID);
  DaoArray *array = (DaoArray*) _p[1];
  int size = DaoArray_Size( array );
  if( size > 16 ) size = 16;
  memmove( self->data, DaoArray_ToSInt32( array ), size*sizeof(signed int) );
  DaoArray_FromSInt32( array );
}
static void dao_SDL_JoystickGUID_SDL_JoystickGUID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_JoystickGUID *self = Dao_SDL_JoystickGUID_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_JoystickGUID );
}
/* /usr/local/include/SDL2/SDL_touch.h */


static DaoNumberEntry dao_SDL_Finger_Nums[] = 
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
static void dao_SDL_Finger_SDL_Finger( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_Finger_Meths[] = 
{
  { dao_SDL_Finger_GETF_id, ".id( self: SDL_Finger )=>int" },
  { dao_SDL_Finger_SETF_id, ".id=( self: SDL_Finger, id: int )" },
  { dao_SDL_Finger_GETF_x, ".x( self: SDL_Finger )=>float" },
  { dao_SDL_Finger_SETF_x, ".x=( self: SDL_Finger, x: float )" },
  { dao_SDL_Finger_GETF_y, ".y( self: SDL_Finger )=>float" },
  { dao_SDL_Finger_SETF_y, ".y=( self: SDL_Finger, y: float )" },
  { dao_SDL_Finger_GETF_pressure, ".pressure( self: SDL_Finger )=>float" },
  { dao_SDL_Finger_SETF_pressure, ".pressure=( self: SDL_Finger, pressure: float )" },
  { dao_SDL_Finger_SDL_Finger, "SDL_Finger(  )=>SDL_Finger" },
  { NULL, NULL }
};
static void Dao_SDL_Finger_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_Finger_Core = 
{
  "SDL_Finger",
  sizeof(SDL_Finger),
  { NULL },
  dao_SDL_Finger_Nums,
  dao_SDL_Finger_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_Finger_Delete,
  NULL
};
DaoTypeCore *dao_SDL_Finger_Core = & SDL_Finger_Core;
DaoType *dao_type_SDL_Finger = NULL;
static void dao_SDL_Finger_GETF_id( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  DaoProcess_PutInteger( _proc, (dao_integer) self->id );
}
static void dao_SDL_Finger_SETF_id( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  self->id = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Finger_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  DaoProcess_PutFloat( _proc, (dao_float) self->x );
}
static void dao_SDL_Finger_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  self->x = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_Finger_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  DaoProcess_PutFloat( _proc, (dao_float) self->y );
}
static void dao_SDL_Finger_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  self->y = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_Finger_GETF_pressure( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  DaoProcess_PutFloat( _proc, (dao_float) self->pressure );
}
static void dao_SDL_Finger_SETF_pressure( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Finger *self = (SDL_Finger*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Finger);
  self->pressure = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_Finger_SDL_Finger( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_Finger *self = Dao_SDL_Finger_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_Finger );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_CommonEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_CommonEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_CommonEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_CommonEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_CommonEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_CommonEvent_SDL_CommonEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_CommonEvent_Meths[] = 
{
  { dao_SDL_CommonEvent_GETF_type, ".type( self: SDL_CommonEvent )=>int" },
  { dao_SDL_CommonEvent_SETF_type, ".type=( self: SDL_CommonEvent, type: int )" },
  { dao_SDL_CommonEvent_GETF_timestamp, ".timestamp( self: SDL_CommonEvent )=>int" },
  { dao_SDL_CommonEvent_SETF_timestamp, ".timestamp=( self: SDL_CommonEvent, timestamp: int )" },
  { dao_SDL_CommonEvent_SDL_CommonEvent, "SDL_CommonEvent(  )=>SDL_CommonEvent" },
  { NULL, NULL }
};
static void Dao_SDL_CommonEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_CommonEvent_Core = 
{
  "SDL_CommonEvent",
  sizeof(SDL_CommonEvent),
  { NULL },
  dao_SDL_CommonEvent_Nums,
  dao_SDL_CommonEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_CommonEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_CommonEvent_Core = & SDL_CommonEvent_Core;
DaoType *dao_type_SDL_CommonEvent = NULL;
static void dao_SDL_CommonEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_CommonEvent *self = (SDL_CommonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_CommonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_CommonEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_CommonEvent *self = (SDL_CommonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_CommonEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_CommonEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_CommonEvent *self = (SDL_CommonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_CommonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_CommonEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_CommonEvent *self = (SDL_CommonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_CommonEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_CommonEvent_SDL_CommonEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_CommonEvent *self = Dao_SDL_CommonEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_CommonEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_WindowEvent_Nums[] = 
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
static void dao_SDL_WindowEvent_GETF_data1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_SETF_data1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_GETF_data2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_SETF_data2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_WindowEvent_SDL_WindowEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_WindowEvent_Meths[] = 
{
  { dao_SDL_WindowEvent_GETF_type, ".type( self: SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_type, ".type=( self: SDL_WindowEvent, type: int )" },
  { dao_SDL_WindowEvent_GETF_timestamp, ".timestamp( self: SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_timestamp, ".timestamp=( self: SDL_WindowEvent, timestamp: int )" },
  { dao_SDL_WindowEvent_GETF_windowID, ".windowID( self: SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_windowID, ".windowID=( self: SDL_WindowEvent, windowID: int )" },
  { dao_SDL_WindowEvent_GETF_event, ".event( self: SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_event, ".event=( self: SDL_WindowEvent, event: int )" },
  { dao_SDL_WindowEvent_GETF_data1, ".data1( self: SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_data1, ".data1=( self: SDL_WindowEvent, data1: int )" },
  { dao_SDL_WindowEvent_GETF_data2, ".data2( self: SDL_WindowEvent )=>int" },
  { dao_SDL_WindowEvent_SETF_data2, ".data2=( self: SDL_WindowEvent, data2: int )" },
  { dao_SDL_WindowEvent_SDL_WindowEvent, "SDL_WindowEvent(  )=>SDL_WindowEvent" },
  { NULL, NULL }
};
static void Dao_SDL_WindowEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_WindowEvent_Core = 
{
  "SDL_WindowEvent",
  sizeof(SDL_WindowEvent),
  { NULL },
  dao_SDL_WindowEvent_Nums,
  dao_SDL_WindowEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_WindowEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_WindowEvent_Core = & SDL_WindowEvent_Core;
DaoType *dao_type_SDL_WindowEvent = NULL;
static void dao_SDL_WindowEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_WindowEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_WindowEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_WindowEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_WindowEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->windowID );
}
static void dao_SDL_WindowEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  self->windowID = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_WindowEvent_GETF_event( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->event );
}
static void dao_SDL_WindowEvent_SETF_event( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  self->event = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_WindowEvent_GETF_data1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->data1 );
}
static void dao_SDL_WindowEvent_SETF_data1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  self->data1 = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_WindowEvent_GETF_data2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_WindowEvent *self = (SDL_WindowEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_WindowEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->data2 );
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


static DaoNumberEntry dao_SDL_KeyboardEvent_Nums[] = 
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
static void dao_SDL_KeyboardEvent_GETF_keysym( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_KeyboardEvent_SDL_KeyboardEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_KeyboardEvent_Meths[] = 
{
  { dao_SDL_KeyboardEvent_GETF_type, ".type( self: SDL_KeyboardEvent )=>int" },
  { dao_SDL_KeyboardEvent_SETF_type, ".type=( self: SDL_KeyboardEvent, type: int )" },
  { dao_SDL_KeyboardEvent_GETF_timestamp, ".timestamp( self: SDL_KeyboardEvent )=>int" },
  { dao_SDL_KeyboardEvent_SETF_timestamp, ".timestamp=( self: SDL_KeyboardEvent, timestamp: int )" },
  { dao_SDL_KeyboardEvent_GETF_windowID, ".windowID( self: SDL_KeyboardEvent )=>int" },
  { dao_SDL_KeyboardEvent_SETF_windowID, ".windowID=( self: SDL_KeyboardEvent, windowID: int )" },
  { dao_SDL_KeyboardEvent_GETF_state, ".state( self: SDL_KeyboardEvent )=>int" },
  { dao_SDL_KeyboardEvent_SETF_state, ".state=( self: SDL_KeyboardEvent, state: int )" },
  { dao_SDL_KeyboardEvent_GETF_repeat, ".repeat( self: SDL_KeyboardEvent )=>int" },
  { dao_SDL_KeyboardEvent_SETF_repeat, ".repeat=( self: SDL_KeyboardEvent, repeat: int )" },
  { dao_SDL_KeyboardEvent_GETF_keysym, ".keysym( self: SDL_KeyboardEvent )=>SDL_Keysym" },
  { dao_SDL_KeyboardEvent_SDL_KeyboardEvent, "SDL_KeyboardEvent(  )=>SDL_KeyboardEvent" },
  { NULL, NULL }
};
static void Dao_SDL_KeyboardEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_KeyboardEvent_Core = 
{
  "SDL_KeyboardEvent",
  sizeof(SDL_KeyboardEvent),
  { NULL },
  dao_SDL_KeyboardEvent_Nums,
  dao_SDL_KeyboardEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_KeyboardEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_KeyboardEvent_Core = & SDL_KeyboardEvent_Core;
DaoType *dao_type_SDL_KeyboardEvent = NULL;
static void dao_SDL_KeyboardEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_KeyboardEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_KeyboardEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_KeyboardEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_KeyboardEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->windowID );
}
static void dao_SDL_KeyboardEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  self->windowID = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_KeyboardEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->state );
}
static void dao_SDL_KeyboardEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  self->state = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_KeyboardEvent_GETF_repeat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->repeat );
}
static void dao_SDL_KeyboardEvent_SETF_repeat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_KeyboardEvent *self = (SDL_KeyboardEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_KeyboardEvent);
  self->repeat = (int) DaoValue_TryGetInteger(_p[1]);
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


static DaoNumberEntry dao_SDL_TextEditingEvent_Nums[] = 
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

static DaoFunctionEntry dao_SDL_TextEditingEvent_Meths[] = 
{
  { dao_SDL_TextEditingEvent_GETF_type, ".type( self: SDL_TextEditingEvent )=>int" },
  { dao_SDL_TextEditingEvent_SETF_type, ".type=( self: SDL_TextEditingEvent, type: int )" },
  { dao_SDL_TextEditingEvent_GETF_timestamp, ".timestamp( self: SDL_TextEditingEvent )=>int" },
  { dao_SDL_TextEditingEvent_SETF_timestamp, ".timestamp=( self: SDL_TextEditingEvent, timestamp: int )" },
  { dao_SDL_TextEditingEvent_GETF_windowID, ".windowID( self: SDL_TextEditingEvent )=>int" },
  { dao_SDL_TextEditingEvent_SETF_windowID, ".windowID=( self: SDL_TextEditingEvent, windowID: int )" },
  { dao_SDL_TextEditingEvent_GETF_text, ".text( self: SDL_TextEditingEvent )=>array<int>" },
  { dao_SDL_TextEditingEvent_SETF_text, ".text=( self: SDL_TextEditingEvent, text: array<int> )" },
  { dao_SDL_TextEditingEvent_GETF_start, ".start( self: SDL_TextEditingEvent )=>int" },
  { dao_SDL_TextEditingEvent_SETF_start, ".start=( self: SDL_TextEditingEvent, start: int )" },
  { dao_SDL_TextEditingEvent_GETF_length, ".length( self: SDL_TextEditingEvent )=>int" },
  { dao_SDL_TextEditingEvent_SETF_length, ".length=( self: SDL_TextEditingEvent, length: int )" },
  { dao_SDL_TextEditingEvent_SDL_TextEditingEvent, "SDL_TextEditingEvent(  )=>SDL_TextEditingEvent" },
  { NULL, NULL }
};
static void Dao_SDL_TextEditingEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_TextEditingEvent_Core = 
{
  "SDL_TextEditingEvent",
  sizeof(SDL_TextEditingEvent),
  { NULL },
  dao_SDL_TextEditingEvent_Nums,
  dao_SDL_TextEditingEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_TextEditingEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_TextEditingEvent_Core = & SDL_TextEditingEvent_Core;
DaoType *dao_type_SDL_TextEditingEvent = NULL;
static void dao_SDL_TextEditingEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_TextEditingEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TextEditingEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_TextEditingEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TextEditingEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->windowID );
}
static void dao_SDL_TextEditingEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  self->windowID = (int) DaoValue_TryGetInteger(_p[1]);
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
  memmove( self->text, DaoValue_TryGetChars( _p[1] ), size );
}
static void dao_SDL_TextEditingEvent_GETF_start( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->start );
}
static void dao_SDL_TextEditingEvent_SETF_start( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  self->start = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TextEditingEvent_GETF_length( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextEditingEvent *self = (SDL_TextEditingEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextEditingEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->length );
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


static DaoNumberEntry dao_SDL_TextInputEvent_Nums[] = 
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

static DaoFunctionEntry dao_SDL_TextInputEvent_Meths[] = 
{
  { dao_SDL_TextInputEvent_GETF_type, ".type( self: SDL_TextInputEvent )=>int" },
  { dao_SDL_TextInputEvent_SETF_type, ".type=( self: SDL_TextInputEvent, type: int )" },
  { dao_SDL_TextInputEvent_GETF_timestamp, ".timestamp( self: SDL_TextInputEvent )=>int" },
  { dao_SDL_TextInputEvent_SETF_timestamp, ".timestamp=( self: SDL_TextInputEvent, timestamp: int )" },
  { dao_SDL_TextInputEvent_GETF_windowID, ".windowID( self: SDL_TextInputEvent )=>int" },
  { dao_SDL_TextInputEvent_SETF_windowID, ".windowID=( self: SDL_TextInputEvent, windowID: int )" },
  { dao_SDL_TextInputEvent_GETF_text, ".text( self: SDL_TextInputEvent )=>array<int>" },
  { dao_SDL_TextInputEvent_SETF_text, ".text=( self: SDL_TextInputEvent, text: array<int> )" },
  { dao_SDL_TextInputEvent_SDL_TextInputEvent, "SDL_TextInputEvent(  )=>SDL_TextInputEvent" },
  { NULL, NULL }
};
static void Dao_SDL_TextInputEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_TextInputEvent_Core = 
{
  "SDL_TextInputEvent",
  sizeof(SDL_TextInputEvent),
  { NULL },
  dao_SDL_TextInputEvent_Nums,
  dao_SDL_TextInputEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_TextInputEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_TextInputEvent_Core = & SDL_TextInputEvent_Core;
DaoType *dao_type_SDL_TextInputEvent = NULL;
static void dao_SDL_TextInputEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextInputEvent *self = (SDL_TextInputEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextInputEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_TextInputEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextInputEvent *self = (SDL_TextInputEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextInputEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TextInputEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextInputEvent *self = (SDL_TextInputEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextInputEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_TextInputEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextInputEvent *self = (SDL_TextInputEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextInputEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TextInputEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextInputEvent *self = (SDL_TextInputEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextInputEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->windowID );
}
static void dao_SDL_TextInputEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TextInputEvent *self = (SDL_TextInputEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TextInputEvent);
  self->windowID = (int) DaoValue_TryGetInteger(_p[1]);
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
  memmove( self->text, DaoValue_TryGetChars( _p[1] ), size );
}
static void dao_SDL_TextInputEvent_SDL_TextInputEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_TextInputEvent *self = Dao_SDL_TextInputEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_TextInputEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_MouseMotionEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_MouseMotionEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_GETF_yrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SETF_yrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseMotionEvent_SDL_MouseMotionEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_MouseMotionEvent_Meths[] = 
{
  { dao_SDL_MouseMotionEvent_GETF_type, ".type( self: SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_type, ".type=( self: SDL_MouseMotionEvent, type: int )" },
  { dao_SDL_MouseMotionEvent_GETF_timestamp, ".timestamp( self: SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_timestamp, ".timestamp=( self: SDL_MouseMotionEvent, timestamp: int )" },
  { dao_SDL_MouseMotionEvent_GETF_windowID, ".windowID( self: SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_windowID, ".windowID=( self: SDL_MouseMotionEvent, windowID: int )" },
  { dao_SDL_MouseMotionEvent_GETF_which, ".which( self: SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_which, ".which=( self: SDL_MouseMotionEvent, which: int )" },
  { dao_SDL_MouseMotionEvent_GETF_state, ".state( self: SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_state, ".state=( self: SDL_MouseMotionEvent, state: int )" },
  { dao_SDL_MouseMotionEvent_GETF_x, ".x( self: SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_x, ".x=( self: SDL_MouseMotionEvent, x: int )" },
  { dao_SDL_MouseMotionEvent_GETF_y, ".y( self: SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_y, ".y=( self: SDL_MouseMotionEvent, y: int )" },
  { dao_SDL_MouseMotionEvent_GETF_xrel, ".xrel( self: SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_xrel, ".xrel=( self: SDL_MouseMotionEvent, xrel: int )" },
  { dao_SDL_MouseMotionEvent_GETF_yrel, ".yrel( self: SDL_MouseMotionEvent )=>int" },
  { dao_SDL_MouseMotionEvent_SETF_yrel, ".yrel=( self: SDL_MouseMotionEvent, yrel: int )" },
  { dao_SDL_MouseMotionEvent_SDL_MouseMotionEvent, "SDL_MouseMotionEvent(  )=>SDL_MouseMotionEvent" },
  { NULL, NULL }
};
static void Dao_SDL_MouseMotionEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_MouseMotionEvent_Core = 
{
  "SDL_MouseMotionEvent",
  sizeof(SDL_MouseMotionEvent),
  { NULL },
  dao_SDL_MouseMotionEvent_Nums,
  dao_SDL_MouseMotionEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_MouseMotionEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_MouseMotionEvent_Core = & SDL_MouseMotionEvent_Core;
DaoType *dao_type_SDL_MouseMotionEvent = NULL;
static void dao_SDL_MouseMotionEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_MouseMotionEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_MouseMotionEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->windowID );
}
static void dao_SDL_MouseMotionEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->windowID = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->which );
}
static void dao_SDL_MouseMotionEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->which = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->state );
}
static void dao_SDL_MouseMotionEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->state = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->x );
}
static void dao_SDL_MouseMotionEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->x = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->y );
}
static void dao_SDL_MouseMotionEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->y = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->xrel );
}
static void dao_SDL_MouseMotionEvent_SETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  self->xrel = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseMotionEvent_GETF_yrel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseMotionEvent *self = (SDL_MouseMotionEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseMotionEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->yrel );
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


static DaoNumberEntry dao_SDL_MouseButtonEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_MouseButtonEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_button( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_button( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_clicks( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_clicks( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseButtonEvent_SDL_MouseButtonEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_MouseButtonEvent_Meths[] = 
{
  { dao_SDL_MouseButtonEvent_GETF_type, ".type( self: SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_type, ".type=( self: SDL_MouseButtonEvent, type: int )" },
  { dao_SDL_MouseButtonEvent_GETF_timestamp, ".timestamp( self: SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_timestamp, ".timestamp=( self: SDL_MouseButtonEvent, timestamp: int )" },
  { dao_SDL_MouseButtonEvent_GETF_windowID, ".windowID( self: SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_windowID, ".windowID=( self: SDL_MouseButtonEvent, windowID: int )" },
  { dao_SDL_MouseButtonEvent_GETF_which, ".which( self: SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_which, ".which=( self: SDL_MouseButtonEvent, which: int )" },
  { dao_SDL_MouseButtonEvent_GETF_button, ".button( self: SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_button, ".button=( self: SDL_MouseButtonEvent, button: int )" },
  { dao_SDL_MouseButtonEvent_GETF_state, ".state( self: SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_state, ".state=( self: SDL_MouseButtonEvent, state: int )" },
  { dao_SDL_MouseButtonEvent_GETF_clicks, ".clicks( self: SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_clicks, ".clicks=( self: SDL_MouseButtonEvent, clicks: int )" },
  { dao_SDL_MouseButtonEvent_GETF_x, ".x( self: SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_x, ".x=( self: SDL_MouseButtonEvent, x: int )" },
  { dao_SDL_MouseButtonEvent_GETF_y, ".y( self: SDL_MouseButtonEvent )=>int" },
  { dao_SDL_MouseButtonEvent_SETF_y, ".y=( self: SDL_MouseButtonEvent, y: int )" },
  { dao_SDL_MouseButtonEvent_SDL_MouseButtonEvent, "SDL_MouseButtonEvent(  )=>SDL_MouseButtonEvent" },
  { NULL, NULL }
};
static void Dao_SDL_MouseButtonEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_MouseButtonEvent_Core = 
{
  "SDL_MouseButtonEvent",
  sizeof(SDL_MouseButtonEvent),
  { NULL },
  dao_SDL_MouseButtonEvent_Nums,
  dao_SDL_MouseButtonEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_MouseButtonEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_MouseButtonEvent_Core = & SDL_MouseButtonEvent_Core;
DaoType *dao_type_SDL_MouseButtonEvent = NULL;
static void dao_SDL_MouseButtonEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_MouseButtonEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_MouseButtonEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->windowID );
}
static void dao_SDL_MouseButtonEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->windowID = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->which );
}
static void dao_SDL_MouseButtonEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->which = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_button( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->button );
}
static void dao_SDL_MouseButtonEvent_SETF_button( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->button = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->state );
}
static void dao_SDL_MouseButtonEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->state = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_clicks( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->clicks );
}
static void dao_SDL_MouseButtonEvent_SETF_clicks( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->clicks = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->x );
}
static void dao_SDL_MouseButtonEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  self->x = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseButtonEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseButtonEvent *self = (SDL_MouseButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->y );
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


static DaoNumberEntry dao_SDL_MouseWheelEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_MouseWheelEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_GETF_direction( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_SETF_direction( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MouseWheelEvent_SDL_MouseWheelEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_MouseWheelEvent_Meths[] = 
{
  { dao_SDL_MouseWheelEvent_GETF_type, ".type( self: SDL_MouseWheelEvent )=>int" },
  { dao_SDL_MouseWheelEvent_SETF_type, ".type=( self: SDL_MouseWheelEvent, type: int )" },
  { dao_SDL_MouseWheelEvent_GETF_timestamp, ".timestamp( self: SDL_MouseWheelEvent )=>int" },
  { dao_SDL_MouseWheelEvent_SETF_timestamp, ".timestamp=( self: SDL_MouseWheelEvent, timestamp: int )" },
  { dao_SDL_MouseWheelEvent_GETF_windowID, ".windowID( self: SDL_MouseWheelEvent )=>int" },
  { dao_SDL_MouseWheelEvent_SETF_windowID, ".windowID=( self: SDL_MouseWheelEvent, windowID: int )" },
  { dao_SDL_MouseWheelEvent_GETF_which, ".which( self: SDL_MouseWheelEvent )=>int" },
  { dao_SDL_MouseWheelEvent_SETF_which, ".which=( self: SDL_MouseWheelEvent, which: int )" },
  { dao_SDL_MouseWheelEvent_GETF_x, ".x( self: SDL_MouseWheelEvent )=>int" },
  { dao_SDL_MouseWheelEvent_SETF_x, ".x=( self: SDL_MouseWheelEvent, x: int )" },
  { dao_SDL_MouseWheelEvent_GETF_y, ".y( self: SDL_MouseWheelEvent )=>int" },
  { dao_SDL_MouseWheelEvent_SETF_y, ".y=( self: SDL_MouseWheelEvent, y: int )" },
  { dao_SDL_MouseWheelEvent_GETF_direction, ".direction( self: SDL_MouseWheelEvent )=>int" },
  { dao_SDL_MouseWheelEvent_SETF_direction, ".direction=( self: SDL_MouseWheelEvent, direction: int )" },
  { dao_SDL_MouseWheelEvent_SDL_MouseWheelEvent, "SDL_MouseWheelEvent(  )=>SDL_MouseWheelEvent" },
  { NULL, NULL }
};
static void Dao_SDL_MouseWheelEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_MouseWheelEvent_Core = 
{
  "SDL_MouseWheelEvent",
  sizeof(SDL_MouseWheelEvent),
  { NULL },
  dao_SDL_MouseWheelEvent_Nums,
  dao_SDL_MouseWheelEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_MouseWheelEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_MouseWheelEvent_Core = & SDL_MouseWheelEvent_Core;
DaoType *dao_type_SDL_MouseWheelEvent = NULL;
static void dao_SDL_MouseWheelEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_MouseWheelEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseWheelEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_MouseWheelEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseWheelEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->windowID );
}
static void dao_SDL_MouseWheelEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  self->windowID = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseWheelEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->which );
}
static void dao_SDL_MouseWheelEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  self->which = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseWheelEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->x );
}
static void dao_SDL_MouseWheelEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  self->x = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseWheelEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->y );
}
static void dao_SDL_MouseWheelEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  self->y = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseWheelEvent_GETF_direction( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->direction );
}
static void dao_SDL_MouseWheelEvent_SETF_direction( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MouseWheelEvent *self = (SDL_MouseWheelEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MouseWheelEvent);
  self->direction = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MouseWheelEvent_SDL_MouseWheelEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_MouseWheelEvent *self = Dao_SDL_MouseWheelEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_MouseWheelEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_JoyAxisEvent_Nums[] = 
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
static void dao_SDL_JoyAxisEvent_GETF_value( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_SETF_value( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyAxisEvent_SDL_JoyAxisEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_JoyAxisEvent_Meths[] = 
{
  { dao_SDL_JoyAxisEvent_GETF_type, ".type( self: SDL_JoyAxisEvent )=>int" },
  { dao_SDL_JoyAxisEvent_SETF_type, ".type=( self: SDL_JoyAxisEvent, type: int )" },
  { dao_SDL_JoyAxisEvent_GETF_timestamp, ".timestamp( self: SDL_JoyAxisEvent )=>int" },
  { dao_SDL_JoyAxisEvent_SETF_timestamp, ".timestamp=( self: SDL_JoyAxisEvent, timestamp: int )" },
  { dao_SDL_JoyAxisEvent_GETF_which, ".which( self: SDL_JoyAxisEvent )=>int" },
  { dao_SDL_JoyAxisEvent_SETF_which, ".which=( self: SDL_JoyAxisEvent, which: int )" },
  { dao_SDL_JoyAxisEvent_GETF_axis, ".axis( self: SDL_JoyAxisEvent )=>int" },
  { dao_SDL_JoyAxisEvent_SETF_axis, ".axis=( self: SDL_JoyAxisEvent, axis: int )" },
  { dao_SDL_JoyAxisEvent_GETF_value, ".value( self: SDL_JoyAxisEvent )=>int" },
  { dao_SDL_JoyAxisEvent_SETF_value, ".value=( self: SDL_JoyAxisEvent, value: int )" },
  { dao_SDL_JoyAxisEvent_SDL_JoyAxisEvent, "SDL_JoyAxisEvent(  )=>SDL_JoyAxisEvent" },
  { NULL, NULL }
};
static void Dao_SDL_JoyAxisEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_JoyAxisEvent_Core = 
{
  "SDL_JoyAxisEvent",
  sizeof(SDL_JoyAxisEvent),
  { NULL },
  dao_SDL_JoyAxisEvent_Nums,
  dao_SDL_JoyAxisEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_JoyAxisEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_JoyAxisEvent_Core = & SDL_JoyAxisEvent_Core;
DaoType *dao_type_SDL_JoyAxisEvent = NULL;
static void dao_SDL_JoyAxisEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_JoyAxisEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyAxisEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_JoyAxisEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyAxisEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->which );
}
static void dao_SDL_JoyAxisEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  self->which = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyAxisEvent_GETF_axis( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->axis );
}
static void dao_SDL_JoyAxisEvent_SETF_axis( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  self->axis = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyAxisEvent_GETF_value( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyAxisEvent *self = (SDL_JoyAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyAxisEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->value );
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


static DaoNumberEntry dao_SDL_JoyBallEvent_Nums[] = 
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
static void dao_SDL_JoyBallEvent_GETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_SETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_GETF_yrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_SETF_yrel( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyBallEvent_SDL_JoyBallEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_JoyBallEvent_Meths[] = 
{
  { dao_SDL_JoyBallEvent_GETF_type, ".type( self: SDL_JoyBallEvent )=>int" },
  { dao_SDL_JoyBallEvent_SETF_type, ".type=( self: SDL_JoyBallEvent, type: int )" },
  { dao_SDL_JoyBallEvent_GETF_timestamp, ".timestamp( self: SDL_JoyBallEvent )=>int" },
  { dao_SDL_JoyBallEvent_SETF_timestamp, ".timestamp=( self: SDL_JoyBallEvent, timestamp: int )" },
  { dao_SDL_JoyBallEvent_GETF_which, ".which( self: SDL_JoyBallEvent )=>int" },
  { dao_SDL_JoyBallEvent_SETF_which, ".which=( self: SDL_JoyBallEvent, which: int )" },
  { dao_SDL_JoyBallEvent_GETF_ball, ".ball( self: SDL_JoyBallEvent )=>int" },
  { dao_SDL_JoyBallEvent_SETF_ball, ".ball=( self: SDL_JoyBallEvent, ball: int )" },
  { dao_SDL_JoyBallEvent_GETF_xrel, ".xrel( self: SDL_JoyBallEvent )=>int" },
  { dao_SDL_JoyBallEvent_SETF_xrel, ".xrel=( self: SDL_JoyBallEvent, xrel: int )" },
  { dao_SDL_JoyBallEvent_GETF_yrel, ".yrel( self: SDL_JoyBallEvent )=>int" },
  { dao_SDL_JoyBallEvent_SETF_yrel, ".yrel=( self: SDL_JoyBallEvent, yrel: int )" },
  { dao_SDL_JoyBallEvent_SDL_JoyBallEvent, "SDL_JoyBallEvent(  )=>SDL_JoyBallEvent" },
  { NULL, NULL }
};
static void Dao_SDL_JoyBallEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_JoyBallEvent_Core = 
{
  "SDL_JoyBallEvent",
  sizeof(SDL_JoyBallEvent),
  { NULL },
  dao_SDL_JoyBallEvent_Nums,
  dao_SDL_JoyBallEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_JoyBallEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_JoyBallEvent_Core = & SDL_JoyBallEvent_Core;
DaoType *dao_type_SDL_JoyBallEvent = NULL;
static void dao_SDL_JoyBallEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_JoyBallEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyBallEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_JoyBallEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyBallEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->which );
}
static void dao_SDL_JoyBallEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  self->which = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyBallEvent_GETF_ball( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->ball );
}
static void dao_SDL_JoyBallEvent_SETF_ball( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  self->ball = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyBallEvent_GETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->xrel );
}
static void dao_SDL_JoyBallEvent_SETF_xrel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  self->xrel = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyBallEvent_GETF_yrel( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyBallEvent *self = (SDL_JoyBallEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyBallEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->yrel );
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


static DaoNumberEntry dao_SDL_JoyHatEvent_Nums[] = 
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
static void dao_SDL_JoyHatEvent_SDL_JoyHatEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_JoyHatEvent_Meths[] = 
{
  { dao_SDL_JoyHatEvent_GETF_type, ".type( self: SDL_JoyHatEvent )=>int" },
  { dao_SDL_JoyHatEvent_SETF_type, ".type=( self: SDL_JoyHatEvent, type: int )" },
  { dao_SDL_JoyHatEvent_GETF_timestamp, ".timestamp( self: SDL_JoyHatEvent )=>int" },
  { dao_SDL_JoyHatEvent_SETF_timestamp, ".timestamp=( self: SDL_JoyHatEvent, timestamp: int )" },
  { dao_SDL_JoyHatEvent_GETF_which, ".which( self: SDL_JoyHatEvent )=>int" },
  { dao_SDL_JoyHatEvent_SETF_which, ".which=( self: SDL_JoyHatEvent, which: int )" },
  { dao_SDL_JoyHatEvent_GETF_hat, ".hat( self: SDL_JoyHatEvent )=>int" },
  { dao_SDL_JoyHatEvent_SETF_hat, ".hat=( self: SDL_JoyHatEvent, hat: int )" },
  { dao_SDL_JoyHatEvent_GETF_value, ".value( self: SDL_JoyHatEvent )=>int" },
  { dao_SDL_JoyHatEvent_SETF_value, ".value=( self: SDL_JoyHatEvent, value: int )" },
  { dao_SDL_JoyHatEvent_SDL_JoyHatEvent, "SDL_JoyHatEvent(  )=>SDL_JoyHatEvent" },
  { NULL, NULL }
};
static void Dao_SDL_JoyHatEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_JoyHatEvent_Core = 
{
  "SDL_JoyHatEvent",
  sizeof(SDL_JoyHatEvent),
  { NULL },
  dao_SDL_JoyHatEvent_Nums,
  dao_SDL_JoyHatEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_JoyHatEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_JoyHatEvent_Core = & SDL_JoyHatEvent_Core;
DaoType *dao_type_SDL_JoyHatEvent = NULL;
static void dao_SDL_JoyHatEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_JoyHatEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyHatEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_JoyHatEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyHatEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->which );
}
static void dao_SDL_JoyHatEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  self->which = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyHatEvent_GETF_hat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->hat );
}
static void dao_SDL_JoyHatEvent_SETF_hat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  self->hat = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyHatEvent_GETF_value( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->value );
}
static void dao_SDL_JoyHatEvent_SETF_value( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyHatEvent *self = (SDL_JoyHatEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyHatEvent);
  self->value = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyHatEvent_SDL_JoyHatEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_JoyHatEvent *self = Dao_SDL_JoyHatEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_JoyHatEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_JoyButtonEvent_Nums[] = 
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
static void dao_SDL_JoyButtonEvent_SDL_JoyButtonEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_JoyButtonEvent_Meths[] = 
{
  { dao_SDL_JoyButtonEvent_GETF_type, ".type( self: SDL_JoyButtonEvent )=>int" },
  { dao_SDL_JoyButtonEvent_SETF_type, ".type=( self: SDL_JoyButtonEvent, type: int )" },
  { dao_SDL_JoyButtonEvent_GETF_timestamp, ".timestamp( self: SDL_JoyButtonEvent )=>int" },
  { dao_SDL_JoyButtonEvent_SETF_timestamp, ".timestamp=( self: SDL_JoyButtonEvent, timestamp: int )" },
  { dao_SDL_JoyButtonEvent_GETF_which, ".which( self: SDL_JoyButtonEvent )=>int" },
  { dao_SDL_JoyButtonEvent_SETF_which, ".which=( self: SDL_JoyButtonEvent, which: int )" },
  { dao_SDL_JoyButtonEvent_GETF_button, ".button( self: SDL_JoyButtonEvent )=>int" },
  { dao_SDL_JoyButtonEvent_SETF_button, ".button=( self: SDL_JoyButtonEvent, button: int )" },
  { dao_SDL_JoyButtonEvent_GETF_state, ".state( self: SDL_JoyButtonEvent )=>int" },
  { dao_SDL_JoyButtonEvent_SETF_state, ".state=( self: SDL_JoyButtonEvent, state: int )" },
  { dao_SDL_JoyButtonEvent_SDL_JoyButtonEvent, "SDL_JoyButtonEvent(  )=>SDL_JoyButtonEvent" },
  { NULL, NULL }
};
static void Dao_SDL_JoyButtonEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_JoyButtonEvent_Core = 
{
  "SDL_JoyButtonEvent",
  sizeof(SDL_JoyButtonEvent),
  { NULL },
  dao_SDL_JoyButtonEvent_Nums,
  dao_SDL_JoyButtonEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_JoyButtonEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_JoyButtonEvent_Core = & SDL_JoyButtonEvent_Core;
DaoType *dao_type_SDL_JoyButtonEvent = NULL;
static void dao_SDL_JoyButtonEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_JoyButtonEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyButtonEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_JoyButtonEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyButtonEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->which );
}
static void dao_SDL_JoyButtonEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  self->which = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyButtonEvent_GETF_button( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->button );
}
static void dao_SDL_JoyButtonEvent_SETF_button( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  self->button = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyButtonEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->state );
}
static void dao_SDL_JoyButtonEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyButtonEvent *self = (SDL_JoyButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyButtonEvent);
  self->state = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyButtonEvent_SDL_JoyButtonEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_JoyButtonEvent *self = Dao_SDL_JoyButtonEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_JoyButtonEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_JoyDeviceEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_JoyDeviceEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyDeviceEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyDeviceEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyDeviceEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyDeviceEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyDeviceEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_JoyDeviceEvent_SDL_JoyDeviceEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_JoyDeviceEvent_Meths[] = 
{
  { dao_SDL_JoyDeviceEvent_GETF_type, ".type( self: SDL_JoyDeviceEvent )=>int" },
  { dao_SDL_JoyDeviceEvent_SETF_type, ".type=( self: SDL_JoyDeviceEvent, type: int )" },
  { dao_SDL_JoyDeviceEvent_GETF_timestamp, ".timestamp( self: SDL_JoyDeviceEvent )=>int" },
  { dao_SDL_JoyDeviceEvent_SETF_timestamp, ".timestamp=( self: SDL_JoyDeviceEvent, timestamp: int )" },
  { dao_SDL_JoyDeviceEvent_GETF_which, ".which( self: SDL_JoyDeviceEvent )=>int" },
  { dao_SDL_JoyDeviceEvent_SETF_which, ".which=( self: SDL_JoyDeviceEvent, which: int )" },
  { dao_SDL_JoyDeviceEvent_SDL_JoyDeviceEvent, "SDL_JoyDeviceEvent(  )=>SDL_JoyDeviceEvent" },
  { NULL, NULL }
};
static void Dao_SDL_JoyDeviceEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_JoyDeviceEvent_Core = 
{
  "SDL_JoyDeviceEvent",
  sizeof(SDL_JoyDeviceEvent),
  { NULL },
  dao_SDL_JoyDeviceEvent_Nums,
  dao_SDL_JoyDeviceEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_JoyDeviceEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_JoyDeviceEvent_Core = & SDL_JoyDeviceEvent_Core;
DaoType *dao_type_SDL_JoyDeviceEvent = NULL;
static void dao_SDL_JoyDeviceEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyDeviceEvent *self = (SDL_JoyDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyDeviceEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_JoyDeviceEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyDeviceEvent *self = (SDL_JoyDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyDeviceEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyDeviceEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyDeviceEvent *self = (SDL_JoyDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyDeviceEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_JoyDeviceEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyDeviceEvent *self = (SDL_JoyDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyDeviceEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyDeviceEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyDeviceEvent *self = (SDL_JoyDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyDeviceEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->which );
}
static void dao_SDL_JoyDeviceEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoyDeviceEvent *self = (SDL_JoyDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_JoyDeviceEvent);
  self->which = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_JoyDeviceEvent_SDL_JoyDeviceEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_JoyDeviceEvent *self = Dao_SDL_JoyDeviceEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_JoyDeviceEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_ControllerAxisEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_ControllerAxisEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerAxisEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerAxisEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerAxisEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerAxisEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerAxisEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerAxisEvent_GETF_axis( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerAxisEvent_SETF_axis( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerAxisEvent_GETF_value( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerAxisEvent_SETF_value( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerAxisEvent_SDL_ControllerAxisEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_ControllerAxisEvent_Meths[] = 
{
  { dao_SDL_ControllerAxisEvent_GETF_type, ".type( self: SDL_ControllerAxisEvent )=>int" },
  { dao_SDL_ControllerAxisEvent_SETF_type, ".type=( self: SDL_ControllerAxisEvent, type: int )" },
  { dao_SDL_ControllerAxisEvent_GETF_timestamp, ".timestamp( self: SDL_ControllerAxisEvent )=>int" },
  { dao_SDL_ControllerAxisEvent_SETF_timestamp, ".timestamp=( self: SDL_ControllerAxisEvent, timestamp: int )" },
  { dao_SDL_ControllerAxisEvent_GETF_which, ".which( self: SDL_ControllerAxisEvent )=>int" },
  { dao_SDL_ControllerAxisEvent_SETF_which, ".which=( self: SDL_ControllerAxisEvent, which: int )" },
  { dao_SDL_ControllerAxisEvent_GETF_axis, ".axis( self: SDL_ControllerAxisEvent )=>int" },
  { dao_SDL_ControllerAxisEvent_SETF_axis, ".axis=( self: SDL_ControllerAxisEvent, axis: int )" },
  { dao_SDL_ControllerAxisEvent_GETF_value, ".value( self: SDL_ControllerAxisEvent )=>int" },
  { dao_SDL_ControllerAxisEvent_SETF_value, ".value=( self: SDL_ControllerAxisEvent, value: int )" },
  { dao_SDL_ControllerAxisEvent_SDL_ControllerAxisEvent, "SDL_ControllerAxisEvent(  )=>SDL_ControllerAxisEvent" },
  { NULL, NULL }
};
static void Dao_SDL_ControllerAxisEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_ControllerAxisEvent_Core = 
{
  "SDL_ControllerAxisEvent",
  sizeof(SDL_ControllerAxisEvent),
  { NULL },
  dao_SDL_ControllerAxisEvent_Nums,
  dao_SDL_ControllerAxisEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_ControllerAxisEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_ControllerAxisEvent_Core = & SDL_ControllerAxisEvent_Core;
DaoType *dao_type_SDL_ControllerAxisEvent = NULL;
static void dao_SDL_ControllerAxisEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerAxisEvent *self = (SDL_ControllerAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerAxisEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_ControllerAxisEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerAxisEvent *self = (SDL_ControllerAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerAxisEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_ControllerAxisEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerAxisEvent *self = (SDL_ControllerAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerAxisEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_ControllerAxisEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerAxisEvent *self = (SDL_ControllerAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerAxisEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_ControllerAxisEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerAxisEvent *self = (SDL_ControllerAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerAxisEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->which );
}
static void dao_SDL_ControllerAxisEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerAxisEvent *self = (SDL_ControllerAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerAxisEvent);
  self->which = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_ControllerAxisEvent_GETF_axis( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerAxisEvent *self = (SDL_ControllerAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerAxisEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->axis );
}
static void dao_SDL_ControllerAxisEvent_SETF_axis( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerAxisEvent *self = (SDL_ControllerAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerAxisEvent);
  self->axis = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_ControllerAxisEvent_GETF_value( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerAxisEvent *self = (SDL_ControllerAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerAxisEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->value );
}
static void dao_SDL_ControllerAxisEvent_SETF_value( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerAxisEvent *self = (SDL_ControllerAxisEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerAxisEvent);
  self->value = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_ControllerAxisEvent_SDL_ControllerAxisEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_ControllerAxisEvent *self = Dao_SDL_ControllerAxisEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_ControllerAxisEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_ControllerButtonEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_ControllerButtonEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerButtonEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerButtonEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerButtonEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerButtonEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerButtonEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerButtonEvent_GETF_button( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerButtonEvent_SETF_button( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerButtonEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerButtonEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerButtonEvent_SDL_ControllerButtonEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_ControllerButtonEvent_Meths[] = 
{
  { dao_SDL_ControllerButtonEvent_GETF_type, ".type( self: SDL_ControllerButtonEvent )=>int" },
  { dao_SDL_ControllerButtonEvent_SETF_type, ".type=( self: SDL_ControllerButtonEvent, type: int )" },
  { dao_SDL_ControllerButtonEvent_GETF_timestamp, ".timestamp( self: SDL_ControllerButtonEvent )=>int" },
  { dao_SDL_ControllerButtonEvent_SETF_timestamp, ".timestamp=( self: SDL_ControllerButtonEvent, timestamp: int )" },
  { dao_SDL_ControllerButtonEvent_GETF_which, ".which( self: SDL_ControllerButtonEvent )=>int" },
  { dao_SDL_ControllerButtonEvent_SETF_which, ".which=( self: SDL_ControllerButtonEvent, which: int )" },
  { dao_SDL_ControllerButtonEvent_GETF_button, ".button( self: SDL_ControllerButtonEvent )=>int" },
  { dao_SDL_ControllerButtonEvent_SETF_button, ".button=( self: SDL_ControllerButtonEvent, button: int )" },
  { dao_SDL_ControllerButtonEvent_GETF_state, ".state( self: SDL_ControllerButtonEvent )=>int" },
  { dao_SDL_ControllerButtonEvent_SETF_state, ".state=( self: SDL_ControllerButtonEvent, state: int )" },
  { dao_SDL_ControllerButtonEvent_SDL_ControllerButtonEvent, "SDL_ControllerButtonEvent(  )=>SDL_ControllerButtonEvent" },
  { NULL, NULL }
};
static void Dao_SDL_ControllerButtonEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_ControllerButtonEvent_Core = 
{
  "SDL_ControllerButtonEvent",
  sizeof(SDL_ControllerButtonEvent),
  { NULL },
  dao_SDL_ControllerButtonEvent_Nums,
  dao_SDL_ControllerButtonEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_ControllerButtonEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_ControllerButtonEvent_Core = & SDL_ControllerButtonEvent_Core;
DaoType *dao_type_SDL_ControllerButtonEvent = NULL;
static void dao_SDL_ControllerButtonEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerButtonEvent *self = (SDL_ControllerButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_ControllerButtonEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerButtonEvent *self = (SDL_ControllerButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerButtonEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_ControllerButtonEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerButtonEvent *self = (SDL_ControllerButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_ControllerButtonEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerButtonEvent *self = (SDL_ControllerButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerButtonEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_ControllerButtonEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerButtonEvent *self = (SDL_ControllerButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->which );
}
static void dao_SDL_ControllerButtonEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerButtonEvent *self = (SDL_ControllerButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerButtonEvent);
  self->which = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_ControllerButtonEvent_GETF_button( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerButtonEvent *self = (SDL_ControllerButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->button );
}
static void dao_SDL_ControllerButtonEvent_SETF_button( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerButtonEvent *self = (SDL_ControllerButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerButtonEvent);
  self->button = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_ControllerButtonEvent_GETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerButtonEvent *self = (SDL_ControllerButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerButtonEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->state );
}
static void dao_SDL_ControllerButtonEvent_SETF_state( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerButtonEvent *self = (SDL_ControllerButtonEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerButtonEvent);
  self->state = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_ControllerButtonEvent_SDL_ControllerButtonEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_ControllerButtonEvent *self = Dao_SDL_ControllerButtonEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_ControllerButtonEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_ControllerDeviceEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_ControllerDeviceEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerDeviceEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerDeviceEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerDeviceEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerDeviceEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerDeviceEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_ControllerDeviceEvent_SDL_ControllerDeviceEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_ControllerDeviceEvent_Meths[] = 
{
  { dao_SDL_ControllerDeviceEvent_GETF_type, ".type( self: SDL_ControllerDeviceEvent )=>int" },
  { dao_SDL_ControllerDeviceEvent_SETF_type, ".type=( self: SDL_ControllerDeviceEvent, type: int )" },
  { dao_SDL_ControllerDeviceEvent_GETF_timestamp, ".timestamp( self: SDL_ControllerDeviceEvent )=>int" },
  { dao_SDL_ControllerDeviceEvent_SETF_timestamp, ".timestamp=( self: SDL_ControllerDeviceEvent, timestamp: int )" },
  { dao_SDL_ControllerDeviceEvent_GETF_which, ".which( self: SDL_ControllerDeviceEvent )=>int" },
  { dao_SDL_ControllerDeviceEvent_SETF_which, ".which=( self: SDL_ControllerDeviceEvent, which: int )" },
  { dao_SDL_ControllerDeviceEvent_SDL_ControllerDeviceEvent, "SDL_ControllerDeviceEvent(  )=>SDL_ControllerDeviceEvent" },
  { NULL, NULL }
};
static void Dao_SDL_ControllerDeviceEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_ControllerDeviceEvent_Core = 
{
  "SDL_ControllerDeviceEvent",
  sizeof(SDL_ControllerDeviceEvent),
  { NULL },
  dao_SDL_ControllerDeviceEvent_Nums,
  dao_SDL_ControllerDeviceEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_ControllerDeviceEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_ControllerDeviceEvent_Core = & SDL_ControllerDeviceEvent_Core;
DaoType *dao_type_SDL_ControllerDeviceEvent = NULL;
static void dao_SDL_ControllerDeviceEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerDeviceEvent *self = (SDL_ControllerDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerDeviceEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_ControllerDeviceEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerDeviceEvent *self = (SDL_ControllerDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerDeviceEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_ControllerDeviceEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerDeviceEvent *self = (SDL_ControllerDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerDeviceEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_ControllerDeviceEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerDeviceEvent *self = (SDL_ControllerDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerDeviceEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_ControllerDeviceEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerDeviceEvent *self = (SDL_ControllerDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerDeviceEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->which );
}
static void dao_SDL_ControllerDeviceEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ControllerDeviceEvent *self = (SDL_ControllerDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_ControllerDeviceEvent);
  self->which = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_ControllerDeviceEvent_SDL_ControllerDeviceEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_ControllerDeviceEvent *self = Dao_SDL_ControllerDeviceEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_ControllerDeviceEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_AudioDeviceEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_AudioDeviceEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioDeviceEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioDeviceEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioDeviceEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioDeviceEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioDeviceEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioDeviceEvent_GETF_iscapture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioDeviceEvent_SETF_iscapture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioDeviceEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioDeviceEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioDeviceEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioDeviceEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioDeviceEvent_GETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioDeviceEvent_SETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_AudioDeviceEvent_SDL_AudioDeviceEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_AudioDeviceEvent_Meths[] = 
{
  { dao_SDL_AudioDeviceEvent_GETF_type, ".type( self: SDL_AudioDeviceEvent )=>int" },
  { dao_SDL_AudioDeviceEvent_SETF_type, ".type=( self: SDL_AudioDeviceEvent, type: int )" },
  { dao_SDL_AudioDeviceEvent_GETF_timestamp, ".timestamp( self: SDL_AudioDeviceEvent )=>int" },
  { dao_SDL_AudioDeviceEvent_SETF_timestamp, ".timestamp=( self: SDL_AudioDeviceEvent, timestamp: int )" },
  { dao_SDL_AudioDeviceEvent_GETF_which, ".which( self: SDL_AudioDeviceEvent )=>int" },
  { dao_SDL_AudioDeviceEvent_SETF_which, ".which=( self: SDL_AudioDeviceEvent, which: int )" },
  { dao_SDL_AudioDeviceEvent_GETF_iscapture, ".iscapture( self: SDL_AudioDeviceEvent )=>int" },
  { dao_SDL_AudioDeviceEvent_SETF_iscapture, ".iscapture=( self: SDL_AudioDeviceEvent, iscapture: int )" },
  { dao_SDL_AudioDeviceEvent_GETF_padding1, ".padding1( self: SDL_AudioDeviceEvent )=>int" },
  { dao_SDL_AudioDeviceEvent_SETF_padding1, ".padding1=( self: SDL_AudioDeviceEvent, padding1: int )" },
  { dao_SDL_AudioDeviceEvent_GETF_padding2, ".padding2( self: SDL_AudioDeviceEvent )=>int" },
  { dao_SDL_AudioDeviceEvent_SETF_padding2, ".padding2=( self: SDL_AudioDeviceEvent, padding2: int )" },
  { dao_SDL_AudioDeviceEvent_GETF_padding3, ".padding3( self: SDL_AudioDeviceEvent )=>int" },
  { dao_SDL_AudioDeviceEvent_SETF_padding3, ".padding3=( self: SDL_AudioDeviceEvent, padding3: int )" },
  { dao_SDL_AudioDeviceEvent_SDL_AudioDeviceEvent, "SDL_AudioDeviceEvent(  )=>SDL_AudioDeviceEvent" },
  { NULL, NULL }
};
static void Dao_SDL_AudioDeviceEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_AudioDeviceEvent_Core = 
{
  "SDL_AudioDeviceEvent",
  sizeof(SDL_AudioDeviceEvent),
  { NULL },
  dao_SDL_AudioDeviceEvent_Nums,
  dao_SDL_AudioDeviceEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_AudioDeviceEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_AudioDeviceEvent_Core = & SDL_AudioDeviceEvent_Core;
DaoType *dao_type_SDL_AudioDeviceEvent = NULL;
static void dao_SDL_AudioDeviceEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioDeviceEvent *self = (SDL_AudioDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioDeviceEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_AudioDeviceEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioDeviceEvent *self = (SDL_AudioDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioDeviceEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioDeviceEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioDeviceEvent *self = (SDL_AudioDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioDeviceEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_AudioDeviceEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioDeviceEvent *self = (SDL_AudioDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioDeviceEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioDeviceEvent_GETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioDeviceEvent *self = (SDL_AudioDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioDeviceEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->which );
}
static void dao_SDL_AudioDeviceEvent_SETF_which( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioDeviceEvent *self = (SDL_AudioDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioDeviceEvent);
  self->which = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioDeviceEvent_GETF_iscapture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioDeviceEvent *self = (SDL_AudioDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioDeviceEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->iscapture );
}
static void dao_SDL_AudioDeviceEvent_SETF_iscapture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioDeviceEvent *self = (SDL_AudioDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioDeviceEvent);
  self->iscapture = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioDeviceEvent_GETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioDeviceEvent *self = (SDL_AudioDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioDeviceEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->padding1 );
}
static void dao_SDL_AudioDeviceEvent_SETF_padding1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioDeviceEvent *self = (SDL_AudioDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioDeviceEvent);
  self->padding1 = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioDeviceEvent_GETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioDeviceEvent *self = (SDL_AudioDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioDeviceEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->padding2 );
}
static void dao_SDL_AudioDeviceEvent_SETF_padding2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioDeviceEvent *self = (SDL_AudioDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioDeviceEvent);
  self->padding2 = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioDeviceEvent_GETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioDeviceEvent *self = (SDL_AudioDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioDeviceEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->padding3 );
}
static void dao_SDL_AudioDeviceEvent_SETF_padding3( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioDeviceEvent *self = (SDL_AudioDeviceEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_AudioDeviceEvent);
  self->padding3 = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_AudioDeviceEvent_SDL_AudioDeviceEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_AudioDeviceEvent *self = Dao_SDL_AudioDeviceEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_AudioDeviceEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_TouchFingerEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_TouchFingerEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_GETF_fingerId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_TouchFingerEvent_SETF_fingerId( DaoProcess *_proc, DaoValue *_p[], int _n );
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

static DaoFunctionEntry dao_SDL_TouchFingerEvent_Meths[] = 
{
  { dao_SDL_TouchFingerEvent_GETF_type, ".type( self: SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_type, ".type=( self: SDL_TouchFingerEvent, type: int )" },
  { dao_SDL_TouchFingerEvent_GETF_timestamp, ".timestamp( self: SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_timestamp, ".timestamp=( self: SDL_TouchFingerEvent, timestamp: int )" },
  { dao_SDL_TouchFingerEvent_GETF_touchId, ".touchId( self: SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_touchId, ".touchId=( self: SDL_TouchFingerEvent, touchId: int )" },
  { dao_SDL_TouchFingerEvent_GETF_fingerId, ".fingerId( self: SDL_TouchFingerEvent )=>int" },
  { dao_SDL_TouchFingerEvent_SETF_fingerId, ".fingerId=( self: SDL_TouchFingerEvent, fingerId: int )" },
  { dao_SDL_TouchFingerEvent_GETF_x, ".x( self: SDL_TouchFingerEvent )=>float" },
  { dao_SDL_TouchFingerEvent_SETF_x, ".x=( self: SDL_TouchFingerEvent, x: float )" },
  { dao_SDL_TouchFingerEvent_GETF_y, ".y( self: SDL_TouchFingerEvent )=>float" },
  { dao_SDL_TouchFingerEvent_SETF_y, ".y=( self: SDL_TouchFingerEvent, y: float )" },
  { dao_SDL_TouchFingerEvent_GETF_dx, ".dx( self: SDL_TouchFingerEvent )=>float" },
  { dao_SDL_TouchFingerEvent_SETF_dx, ".dx=( self: SDL_TouchFingerEvent, dx: float )" },
  { dao_SDL_TouchFingerEvent_GETF_dy, ".dy( self: SDL_TouchFingerEvent )=>float" },
  { dao_SDL_TouchFingerEvent_SETF_dy, ".dy=( self: SDL_TouchFingerEvent, dy: float )" },
  { dao_SDL_TouchFingerEvent_GETF_pressure, ".pressure( self: SDL_TouchFingerEvent )=>float" },
  { dao_SDL_TouchFingerEvent_SETF_pressure, ".pressure=( self: SDL_TouchFingerEvent, pressure: float )" },
  { dao_SDL_TouchFingerEvent_SDL_TouchFingerEvent, "SDL_TouchFingerEvent(  )=>SDL_TouchFingerEvent" },
  { NULL, NULL }
};
static void Dao_SDL_TouchFingerEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_TouchFingerEvent_Core = 
{
  "SDL_TouchFingerEvent",
  sizeof(SDL_TouchFingerEvent),
  { NULL },
  dao_SDL_TouchFingerEvent_Nums,
  dao_SDL_TouchFingerEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_TouchFingerEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_TouchFingerEvent_Core = & SDL_TouchFingerEvent_Core;
DaoType *dao_type_SDL_TouchFingerEvent = NULL;
static void dao_SDL_TouchFingerEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_TouchFingerEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_TouchFingerEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->touchId );
}
static void dao_SDL_TouchFingerEvent_SETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->touchId = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_fingerId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->fingerId );
}
static void dao_SDL_TouchFingerEvent_SETF_fingerId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->fingerId = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutFloat( _proc, (dao_float) self->x );
}
static void dao_SDL_TouchFingerEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->x = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutFloat( _proc, (dao_float) self->y );
}
static void dao_SDL_TouchFingerEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->y = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutFloat( _proc, (dao_float) self->dx );
}
static void dao_SDL_TouchFingerEvent_SETF_dx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->dx = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_dy( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutFloat( _proc, (dao_float) self->dy );
}
static void dao_SDL_TouchFingerEvent_SETF_dy( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->dy = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_TouchFingerEvent_GETF_pressure( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  DaoProcess_PutFloat( _proc, (dao_float) self->pressure );
}
static void dao_SDL_TouchFingerEvent_SETF_pressure( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_TouchFingerEvent *self = (SDL_TouchFingerEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_TouchFingerEvent);
  self->pressure = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_TouchFingerEvent_SDL_TouchFingerEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_TouchFingerEvent *self = Dao_SDL_TouchFingerEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_TouchFingerEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_MultiGestureEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_MultiGestureEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_MultiGestureEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
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
static void dao_SDL_MultiGestureEvent_SDL_MultiGestureEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_MultiGestureEvent_Meths[] = 
{
  { dao_SDL_MultiGestureEvent_GETF_type, ".type( self: SDL_MultiGestureEvent )=>int" },
  { dao_SDL_MultiGestureEvent_SETF_type, ".type=( self: SDL_MultiGestureEvent, type: int )" },
  { dao_SDL_MultiGestureEvent_GETF_timestamp, ".timestamp( self: SDL_MultiGestureEvent )=>int" },
  { dao_SDL_MultiGestureEvent_SETF_timestamp, ".timestamp=( self: SDL_MultiGestureEvent, timestamp: int )" },
  { dao_SDL_MultiGestureEvent_GETF_touchId, ".touchId( self: SDL_MultiGestureEvent )=>int" },
  { dao_SDL_MultiGestureEvent_SETF_touchId, ".touchId=( self: SDL_MultiGestureEvent, touchId: int )" },
  { dao_SDL_MultiGestureEvent_GETF_dTheta, ".dTheta( self: SDL_MultiGestureEvent )=>float" },
  { dao_SDL_MultiGestureEvent_SETF_dTheta, ".dTheta=( self: SDL_MultiGestureEvent, dTheta: float )" },
  { dao_SDL_MultiGestureEvent_GETF_dDist, ".dDist( self: SDL_MultiGestureEvent )=>float" },
  { dao_SDL_MultiGestureEvent_SETF_dDist, ".dDist=( self: SDL_MultiGestureEvent, dDist: float )" },
  { dao_SDL_MultiGestureEvent_GETF_x, ".x( self: SDL_MultiGestureEvent )=>float" },
  { dao_SDL_MultiGestureEvent_SETF_x, ".x=( self: SDL_MultiGestureEvent, x: float )" },
  { dao_SDL_MultiGestureEvent_GETF_y, ".y( self: SDL_MultiGestureEvent )=>float" },
  { dao_SDL_MultiGestureEvent_SETF_y, ".y=( self: SDL_MultiGestureEvent, y: float )" },
  { dao_SDL_MultiGestureEvent_GETF_numFingers, ".numFingers( self: SDL_MultiGestureEvent )=>int" },
  { dao_SDL_MultiGestureEvent_SETF_numFingers, ".numFingers=( self: SDL_MultiGestureEvent, numFingers: int )" },
  { dao_SDL_MultiGestureEvent_SDL_MultiGestureEvent, "SDL_MultiGestureEvent(  )=>SDL_MultiGestureEvent" },
  { NULL, NULL }
};
static void Dao_SDL_MultiGestureEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_MultiGestureEvent_Core = 
{
  "SDL_MultiGestureEvent",
  sizeof(SDL_MultiGestureEvent),
  { NULL },
  dao_SDL_MultiGestureEvent_Nums,
  dao_SDL_MultiGestureEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_MultiGestureEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_MultiGestureEvent_Core = & SDL_MultiGestureEvent_Core;
DaoType *dao_type_SDL_MultiGestureEvent = NULL;
static void dao_SDL_MultiGestureEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_MultiGestureEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_MultiGestureEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->touchId );
}
static void dao_SDL_MultiGestureEvent_SETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->touchId = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_dTheta( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutFloat( _proc, (dao_float) self->dTheta );
}
static void dao_SDL_MultiGestureEvent_SETF_dTheta( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->dTheta = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_dDist( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutFloat( _proc, (dao_float) self->dDist );
}
static void dao_SDL_MultiGestureEvent_SETF_dDist( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->dDist = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutFloat( _proc, (dao_float) self->x );
}
static void dao_SDL_MultiGestureEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->x = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutFloat( _proc, (dao_float) self->y );
}
static void dao_SDL_MultiGestureEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->y = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_MultiGestureEvent_GETF_numFingers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->numFingers );
}
static void dao_SDL_MultiGestureEvent_SETF_numFingers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_MultiGestureEvent *self = (SDL_MultiGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_MultiGestureEvent);
  self->numFingers = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_MultiGestureEvent_SDL_MultiGestureEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_MultiGestureEvent *self = Dao_SDL_MultiGestureEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_MultiGestureEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_DollarGestureEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_DollarGestureEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_GETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_GETF_gestureId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_gestureId( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_GETF_numFingers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_numFingers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_GETF_error( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_error( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DollarGestureEvent_SDL_DollarGestureEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_DollarGestureEvent_Meths[] = 
{
  { dao_SDL_DollarGestureEvent_GETF_type, ".type( self: SDL_DollarGestureEvent )=>int" },
  { dao_SDL_DollarGestureEvent_SETF_type, ".type=( self: SDL_DollarGestureEvent, type: int )" },
  { dao_SDL_DollarGestureEvent_GETF_timestamp, ".timestamp( self: SDL_DollarGestureEvent )=>int" },
  { dao_SDL_DollarGestureEvent_SETF_timestamp, ".timestamp=( self: SDL_DollarGestureEvent, timestamp: int )" },
  { dao_SDL_DollarGestureEvent_GETF_touchId, ".touchId( self: SDL_DollarGestureEvent )=>int" },
  { dao_SDL_DollarGestureEvent_SETF_touchId, ".touchId=( self: SDL_DollarGestureEvent, touchId: int )" },
  { dao_SDL_DollarGestureEvent_GETF_gestureId, ".gestureId( self: SDL_DollarGestureEvent )=>int" },
  { dao_SDL_DollarGestureEvent_SETF_gestureId, ".gestureId=( self: SDL_DollarGestureEvent, gestureId: int )" },
  { dao_SDL_DollarGestureEvent_GETF_numFingers, ".numFingers( self: SDL_DollarGestureEvent )=>int" },
  { dao_SDL_DollarGestureEvent_SETF_numFingers, ".numFingers=( self: SDL_DollarGestureEvent, numFingers: int )" },
  { dao_SDL_DollarGestureEvent_GETF_error, ".error( self: SDL_DollarGestureEvent )=>float" },
  { dao_SDL_DollarGestureEvent_SETF_error, ".error=( self: SDL_DollarGestureEvent, error: float )" },
  { dao_SDL_DollarGestureEvent_GETF_x, ".x( self: SDL_DollarGestureEvent )=>float" },
  { dao_SDL_DollarGestureEvent_SETF_x, ".x=( self: SDL_DollarGestureEvent, x: float )" },
  { dao_SDL_DollarGestureEvent_GETF_y, ".y( self: SDL_DollarGestureEvent )=>float" },
  { dao_SDL_DollarGestureEvent_SETF_y, ".y=( self: SDL_DollarGestureEvent, y: float )" },
  { dao_SDL_DollarGestureEvent_SDL_DollarGestureEvent, "SDL_DollarGestureEvent(  )=>SDL_DollarGestureEvent" },
  { NULL, NULL }
};
static void Dao_SDL_DollarGestureEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_DollarGestureEvent_Core = 
{
  "SDL_DollarGestureEvent",
  sizeof(SDL_DollarGestureEvent),
  { NULL },
  dao_SDL_DollarGestureEvent_Nums,
  dao_SDL_DollarGestureEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_DollarGestureEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_DollarGestureEvent_Core = & SDL_DollarGestureEvent_Core;
DaoType *dao_type_SDL_DollarGestureEvent = NULL;
static void dao_SDL_DollarGestureEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_DollarGestureEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DollarGestureEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_DollarGestureEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DollarGestureEvent_GETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->touchId );
}
static void dao_SDL_DollarGestureEvent_SETF_touchId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->touchId = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DollarGestureEvent_GETF_gestureId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->gestureId );
}
static void dao_SDL_DollarGestureEvent_SETF_gestureId( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->gestureId = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DollarGestureEvent_GETF_numFingers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->numFingers );
}
static void dao_SDL_DollarGestureEvent_SETF_numFingers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->numFingers = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DollarGestureEvent_GETF_error( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutFloat( _proc, (dao_float) self->error );
}
static void dao_SDL_DollarGestureEvent_SETF_error( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->error = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_DollarGestureEvent_GETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutFloat( _proc, (dao_float) self->x );
}
static void dao_SDL_DollarGestureEvent_SETF_x( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->x = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_DollarGestureEvent_GETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  DaoProcess_PutFloat( _proc, (dao_float) self->y );
}
static void dao_SDL_DollarGestureEvent_SETF_y( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DollarGestureEvent *self = (SDL_DollarGestureEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DollarGestureEvent);
  self->y = (float) DaoValue_TryGetFloat(_p[1]);
}
static void dao_SDL_DollarGestureEvent_SDL_DollarGestureEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_DollarGestureEvent *self = Dao_SDL_DollarGestureEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_DollarGestureEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_DropEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_DropEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DropEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DropEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DropEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DropEvent_GETF_file( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_DropEvent_SDL_DropEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_DropEvent_Meths[] = 
{
  { dao_SDL_DropEvent_GETF_type, ".type( self: SDL_DropEvent )=>int" },
  { dao_SDL_DropEvent_SETF_type, ".type=( self: SDL_DropEvent, type: int )" },
  { dao_SDL_DropEvent_GETF_timestamp, ".timestamp( self: SDL_DropEvent )=>int" },
  { dao_SDL_DropEvent_SETF_timestamp, ".timestamp=( self: SDL_DropEvent, timestamp: int )" },
  { dao_SDL_DropEvent_GETF_file, ".file( self: SDL_DropEvent )=>string" },
  { dao_SDL_DropEvent_SDL_DropEvent, "SDL_DropEvent(  )=>SDL_DropEvent" },
  { NULL, NULL }
};
static void Dao_SDL_DropEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_DropEvent_Core = 
{
  "SDL_DropEvent",
  sizeof(SDL_DropEvent),
  { NULL },
  dao_SDL_DropEvent_Nums,
  dao_SDL_DropEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_DropEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_DropEvent_Core = & SDL_DropEvent_Core;
DaoType *dao_type_SDL_DropEvent = NULL;
static void dao_SDL_DropEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DropEvent *self = (SDL_DropEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DropEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_DropEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DropEvent *self = (SDL_DropEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DropEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DropEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DropEvent *self = (SDL_DropEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DropEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_DropEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DropEvent *self = (SDL_DropEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DropEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_DropEvent_GETF_file( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_DropEvent *self = (SDL_DropEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_DropEvent);
  DaoProcess_PutChars( _proc, (char*) self->file );
}
static void dao_SDL_DropEvent_SDL_DropEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_DropEvent *self = Dao_SDL_DropEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_DropEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_QuitEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_QuitEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_QuitEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_QuitEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_QuitEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_QuitEvent_SDL_QuitEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_QuitEvent_Meths[] = 
{
  { dao_SDL_QuitEvent_GETF_type, ".type( self: SDL_QuitEvent )=>int" },
  { dao_SDL_QuitEvent_SETF_type, ".type=( self: SDL_QuitEvent, type: int )" },
  { dao_SDL_QuitEvent_GETF_timestamp, ".timestamp( self: SDL_QuitEvent )=>int" },
  { dao_SDL_QuitEvent_SETF_timestamp, ".timestamp=( self: SDL_QuitEvent, timestamp: int )" },
  { dao_SDL_QuitEvent_SDL_QuitEvent, "SDL_QuitEvent(  )=>SDL_QuitEvent" },
  { NULL, NULL }
};
static void Dao_SDL_QuitEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_QuitEvent_Core = 
{
  "SDL_QuitEvent",
  sizeof(SDL_QuitEvent),
  { NULL },
  dao_SDL_QuitEvent_Nums,
  dao_SDL_QuitEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_QuitEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_QuitEvent_Core = & SDL_QuitEvent_Core;
DaoType *dao_type_SDL_QuitEvent = NULL;
static void dao_SDL_QuitEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_QuitEvent *self = (SDL_QuitEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_QuitEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_QuitEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_QuitEvent *self = (SDL_QuitEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_QuitEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_QuitEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_QuitEvent *self = (SDL_QuitEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_QuitEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_QuitEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_QuitEvent *self = (SDL_QuitEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_QuitEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_QuitEvent_SDL_QuitEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_QuitEvent *self = Dao_SDL_QuitEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_QuitEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_OSEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_OSEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_OSEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_OSEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_OSEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_OSEvent_SDL_OSEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_OSEvent_Meths[] = 
{
  { dao_SDL_OSEvent_GETF_type, ".type( self: SDL_OSEvent )=>int" },
  { dao_SDL_OSEvent_SETF_type, ".type=( self: SDL_OSEvent, type: int )" },
  { dao_SDL_OSEvent_GETF_timestamp, ".timestamp( self: SDL_OSEvent )=>int" },
  { dao_SDL_OSEvent_SETF_timestamp, ".timestamp=( self: SDL_OSEvent, timestamp: int )" },
  { dao_SDL_OSEvent_SDL_OSEvent, "SDL_OSEvent(  )=>SDL_OSEvent" },
  { NULL, NULL }
};
static void Dao_SDL_OSEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_OSEvent_Core = 
{
  "SDL_OSEvent",
  sizeof(SDL_OSEvent),
  { NULL },
  dao_SDL_OSEvent_Nums,
  dao_SDL_OSEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_OSEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_OSEvent_Core = & SDL_OSEvent_Core;
DaoType *dao_type_SDL_OSEvent = NULL;
static void dao_SDL_OSEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_OSEvent *self = (SDL_OSEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_OSEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_OSEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_OSEvent *self = (SDL_OSEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_OSEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_OSEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_OSEvent *self = (SDL_OSEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_OSEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_OSEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_OSEvent *self = (SDL_OSEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_OSEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_OSEvent_SDL_OSEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_OSEvent *self = Dao_SDL_OSEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_OSEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_UserEvent_Nums[] = 
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

static DaoFunctionEntry dao_SDL_UserEvent_Meths[] = 
{
  { dao_SDL_UserEvent_GETF_type, ".type( self: SDL_UserEvent )=>int" },
  { dao_SDL_UserEvent_SETF_type, ".type=( self: SDL_UserEvent, type: int )" },
  { dao_SDL_UserEvent_GETF_timestamp, ".timestamp( self: SDL_UserEvent )=>int" },
  { dao_SDL_UserEvent_SETF_timestamp, ".timestamp=( self: SDL_UserEvent, timestamp: int )" },
  { dao_SDL_UserEvent_GETF_windowID, ".windowID( self: SDL_UserEvent )=>int" },
  { dao_SDL_UserEvent_SETF_windowID, ".windowID=( self: SDL_UserEvent, windowID: int )" },
  { dao_SDL_UserEvent_GETF_code, ".code( self: SDL_UserEvent )=>int" },
  { dao_SDL_UserEvent_SETF_code, ".code=( self: SDL_UserEvent, code: int )" },
  { dao_SDL_UserEvent_GETF_data1, ".data1( self: SDL_UserEvent )=>cdata" },
  { dao_SDL_UserEvent_GETF_data2, ".data2( self: SDL_UserEvent )=>cdata" },
  { dao_SDL_UserEvent_SDL_UserEvent, "SDL_UserEvent(  )=>SDL_UserEvent" },
  { NULL, NULL }
};
static void Dao_SDL_UserEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_UserEvent_Core = 
{
  "SDL_UserEvent",
  sizeof(SDL_UserEvent),
  { NULL },
  dao_SDL_UserEvent_Nums,
  dao_SDL_UserEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_UserEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_UserEvent_Core = & SDL_UserEvent_Core;
DaoType *dao_type_SDL_UserEvent = NULL;
static void dao_SDL_UserEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_UserEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_UserEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_UserEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_UserEvent_GETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->windowID );
}
static void dao_SDL_UserEvent_SETF_windowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  self->windowID = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_UserEvent_GETF_code( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->code );
}
static void dao_SDL_UserEvent_SETF_code( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  self->code = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_UserEvent_GETF_data1( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  DaoProcess_WrapCdata( _proc, (void*) self->data1, NULL );
}
static void dao_SDL_UserEvent_GETF_data2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_UserEvent *self = (SDL_UserEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_UserEvent);
  DaoProcess_WrapCdata( _proc, (void*) self->data2, NULL );
}
static void dao_SDL_UserEvent_SDL_UserEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_UserEvent *self = Dao_SDL_UserEvent_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_UserEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */
static DaoTypeCore SDL_SysWMmsg_Core = 
{
  "SDL_SysWMmsg",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_SysWMmsg_Core = & SDL_SysWMmsg_Core;
DaoType *dao_type_SDL_SysWMmsg = NULL;
/* /usr/local/include/SDL2/SDL_events.h */


static DaoNumberEntry dao_SDL_SysWMEvent_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_SysWMEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_SysWMEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_SysWMEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_SysWMEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_SysWMEvent_GETF_msg( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_SysWMEvent_SDL_SysWMEvent( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_SysWMEvent_Meths[] = 
{
  { dao_SDL_SysWMEvent_GETF_type, ".type( self: SDL_SysWMEvent )=>int" },
  { dao_SDL_SysWMEvent_SETF_type, ".type=( self: SDL_SysWMEvent, type: int )" },
  { dao_SDL_SysWMEvent_GETF_timestamp, ".timestamp( self: SDL_SysWMEvent )=>int" },
  { dao_SDL_SysWMEvent_SETF_timestamp, ".timestamp=( self: SDL_SysWMEvent, timestamp: int )" },
  { dao_SDL_SysWMEvent_GETF_msg, ".msg( self: SDL_SysWMEvent )=>SDL_SysWMmsg" },
  { dao_SDL_SysWMEvent_SDL_SysWMEvent, "SDL_SysWMEvent(  )=>SDL_SysWMEvent" },
  { NULL, NULL }
};
static void Dao_SDL_SysWMEvent_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_SysWMEvent_Core = 
{
  "SDL_SysWMEvent",
  sizeof(SDL_SysWMEvent),
  { NULL },
  dao_SDL_SysWMEvent_Nums,
  dao_SDL_SysWMEvent_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_SysWMEvent_Delete,
  NULL
};
DaoTypeCore *dao_SDL_SysWMEvent_Core = & SDL_SysWMEvent_Core;
DaoType *dao_type_SDL_SysWMEvent = NULL;
static void dao_SDL_SysWMEvent_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_SysWMEvent *self = (SDL_SysWMEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_SysWMEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_SysWMEvent_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_SysWMEvent *self = (SDL_SysWMEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_SysWMEvent);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_SysWMEvent_GETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_SysWMEvent *self = (SDL_SysWMEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_SysWMEvent);
  DaoProcess_PutInteger( _proc, (dao_integer) self->timestamp );
}
static void dao_SDL_SysWMEvent_SETF_timestamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_SysWMEvent *self = (SDL_SysWMEvent*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_SysWMEvent);
  self->timestamp = (int) DaoValue_TryGetInteger(_p[1]);
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


static DaoNumberEntry dao_SDL_Event_Nums[] = 
{
  { NULL, 0, 0 }
};


static void dao_SDL_Event_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_common( DaoProcess *_proc, DaoValue *_p[], int _n );
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
static void dao_SDL_Event_GETF_jdevice( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_caxis( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_cbutton( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_cdevice( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_adevice( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_quit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_user( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_syswm( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_tfinger( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_mgesture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_dgesture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_GETF_drop( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao_SDL_Event_SDL_Event( DaoProcess *_proc, DaoValue *_p[], int _n );

static DaoFunctionEntry dao_SDL_Event_Meths[] = 
{
  { dao_SDL_Event_GETF_type, ".type( self: SDL_Event )=>int" },
  { dao_SDL_Event_SETF_type, ".type=( self: SDL_Event, type: int )" },
  { dao_SDL_Event_GETF_common, ".common( self: SDL_Event )=>SDL_CommonEvent" },
  { dao_SDL_Event_GETF_window, ".window( self: SDL_Event )=>SDL_WindowEvent" },
  { dao_SDL_Event_GETF_key, ".key( self: SDL_Event )=>SDL_KeyboardEvent" },
  { dao_SDL_Event_GETF_edit, ".edit( self: SDL_Event )=>SDL_TextEditingEvent" },
  { dao_SDL_Event_GETF_text, ".text( self: SDL_Event )=>SDL_TextInputEvent" },
  { dao_SDL_Event_GETF_motion, ".motion( self: SDL_Event )=>SDL_MouseMotionEvent" },
  { dao_SDL_Event_GETF_button, ".button( self: SDL_Event )=>SDL_MouseButtonEvent" },
  { dao_SDL_Event_GETF_wheel, ".wheel( self: SDL_Event )=>SDL_MouseWheelEvent" },
  { dao_SDL_Event_GETF_jaxis, ".jaxis( self: SDL_Event )=>SDL_JoyAxisEvent" },
  { dao_SDL_Event_GETF_jball, ".jball( self: SDL_Event )=>SDL_JoyBallEvent" },
  { dao_SDL_Event_GETF_jhat, ".jhat( self: SDL_Event )=>SDL_JoyHatEvent" },
  { dao_SDL_Event_GETF_jbutton, ".jbutton( self: SDL_Event )=>SDL_JoyButtonEvent" },
  { dao_SDL_Event_GETF_jdevice, ".jdevice( self: SDL_Event )=>SDL_JoyDeviceEvent" },
  { dao_SDL_Event_GETF_caxis, ".caxis( self: SDL_Event )=>SDL_ControllerAxisEvent" },
  { dao_SDL_Event_GETF_cbutton, ".cbutton( self: SDL_Event )=>SDL_ControllerButtonEvent" },
  { dao_SDL_Event_GETF_cdevice, ".cdevice( self: SDL_Event )=>SDL_ControllerDeviceEvent" },
  { dao_SDL_Event_GETF_adevice, ".adevice( self: SDL_Event )=>SDL_AudioDeviceEvent" },
  { dao_SDL_Event_GETF_quit, ".quit( self: SDL_Event )=>SDL_QuitEvent" },
  { dao_SDL_Event_GETF_user, ".user( self: SDL_Event )=>SDL_UserEvent" },
  { dao_SDL_Event_GETF_syswm, ".syswm( self: SDL_Event )=>SDL_SysWMEvent" },
  { dao_SDL_Event_GETF_tfinger, ".tfinger( self: SDL_Event )=>SDL_TouchFingerEvent" },
  { dao_SDL_Event_GETF_mgesture, ".mgesture( self: SDL_Event )=>SDL_MultiGestureEvent" },
  { dao_SDL_Event_GETF_dgesture, ".dgesture( self: SDL_Event )=>SDL_DollarGestureEvent" },
  { dao_SDL_Event_GETF_drop, ".drop( self: SDL_Event )=>SDL_DropEvent" },
  { dao_SDL_Event_SDL_Event, "SDL_Event(  )=>SDL_Event" },
  { NULL, NULL }
};
static void Dao_SDL_Event_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_Event_Core = 
{
  "SDL_Event",
  sizeof(SDL_Event),
  { NULL },
  dao_SDL_Event_Nums,
  dao_SDL_Event_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_Event_Delete,
  NULL
};
DaoTypeCore *dao_SDL_Event_Core = & SDL_Event_Core;
DaoType *dao_type_SDL_Event = NULL;
static void dao_SDL_Event_GETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_PutInteger( _proc, (dao_integer) self->type );
}
static void dao_SDL_Event_SETF_type( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  self->type = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_Event_GETF_common( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->common, dao_type_SDL_CommonEvent );
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
static void dao_SDL_Event_GETF_jdevice( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->jdevice, dao_type_SDL_JoyDeviceEvent );
}
static void dao_SDL_Event_GETF_caxis( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->caxis, dao_type_SDL_ControllerAxisEvent );
}
static void dao_SDL_Event_GETF_cbutton( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->cbutton, dao_type_SDL_ControllerButtonEvent );
}
static void dao_SDL_Event_GETF_cdevice( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->cdevice, dao_type_SDL_ControllerDeviceEvent );
}
static void dao_SDL_Event_GETF_adevice( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event *self = (SDL_Event*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_Event);
  DaoProcess_WrapCdata( _proc, (void*)&self->adevice, dao_type_SDL_AudioDeviceEvent );
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
/* /usr/local/include/SDL2/SDL_haptic.h */
static DaoTypeCore SDL_HapticDirection_Core = 
{
  "SDL_HapticDirection",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_HapticDirection_Core = & SDL_HapticDirection_Core;
DaoType *dao_type_SDL_HapticDirection = NULL;
/* /usr/local/include/SDL2/SDL_haptic.h */
static DaoTypeCore SDL_HapticConstant_Core = 
{
  "SDL_HapticConstant",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_HapticConstant_Core = & SDL_HapticConstant_Core;
DaoType *dao_type_SDL_HapticConstant = NULL;
/* /usr/local/include/SDL2/SDL_haptic.h */
static DaoTypeCore SDL_HapticPeriodic_Core = 
{
  "SDL_HapticPeriodic",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_HapticPeriodic_Core = & SDL_HapticPeriodic_Core;
DaoType *dao_type_SDL_HapticPeriodic = NULL;
/* /usr/local/include/SDL2/SDL_haptic.h */
static DaoTypeCore SDL_HapticCondition_Core = 
{
  "SDL_HapticCondition",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_HapticCondition_Core = & SDL_HapticCondition_Core;
DaoType *dao_type_SDL_HapticCondition = NULL;
/* /usr/local/include/SDL2/SDL_haptic.h */
static DaoTypeCore SDL_HapticRamp_Core = 
{
  "SDL_HapticRamp",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_HapticRamp_Core = & SDL_HapticRamp_Core;
DaoType *dao_type_SDL_HapticRamp = NULL;
/* /usr/local/include/SDL2/SDL_haptic.h */
static DaoTypeCore SDL_HapticLeftRight_Core = 
{
  "SDL_HapticLeftRight",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_HapticLeftRight_Core = & SDL_HapticLeftRight_Core;
DaoType *dao_type_SDL_HapticLeftRight = NULL;
/* /usr/local/include/SDL2/SDL_haptic.h */
static DaoTypeCore SDL_HapticCustom_Core = 
{
  "SDL_HapticCustom",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_HapticCustom_Core = & SDL_HapticCustom_Core;
DaoType *dao_type_SDL_HapticCustom = NULL;
/* /usr/local/include/SDL2/SDL_render.h */


static DaoNumberEntry dao_SDL_RendererInfo_Nums[] = 
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

static DaoFunctionEntry dao_SDL_RendererInfo_Meths[] = 
{
  { dao_SDL_RendererInfo_GETF_name, ".name( self: SDL_RendererInfo )=>string" },
  { dao_SDL_RendererInfo_GETF_flags, ".flags( self: SDL_RendererInfo )=>int" },
  { dao_SDL_RendererInfo_SETF_flags, ".flags=( self: SDL_RendererInfo, flags: int )" },
  { dao_SDL_RendererInfo_GETF_num_texture_formats, ".num_texture_formats( self: SDL_RendererInfo )=>int" },
  { dao_SDL_RendererInfo_SETF_num_texture_formats, ".num_texture_formats=( self: SDL_RendererInfo, num_texture_formats: int )" },
  { dao_SDL_RendererInfo_GETF_texture_formats, ".texture_formats( self: SDL_RendererInfo )=>array<int>" },
  { dao_SDL_RendererInfo_SETF_texture_formats, ".texture_formats=( self: SDL_RendererInfo, texture_formats: array<int> )" },
  { dao_SDL_RendererInfo_GETF_max_texture_width, ".max_texture_width( self: SDL_RendererInfo )=>int" },
  { dao_SDL_RendererInfo_SETF_max_texture_width, ".max_texture_width=( self: SDL_RendererInfo, max_texture_width: int )" },
  { dao_SDL_RendererInfo_GETF_max_texture_height, ".max_texture_height( self: SDL_RendererInfo )=>int" },
  { dao_SDL_RendererInfo_SETF_max_texture_height, ".max_texture_height=( self: SDL_RendererInfo, max_texture_height: int )" },
  { dao_SDL_RendererInfo_SDL_RendererInfo, "SDL_RendererInfo(  )=>SDL_RendererInfo" },
  { NULL, NULL }
};
static void Dao_SDL_RendererInfo_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_RendererInfo_Core = 
{
  "SDL_RendererInfo",
  sizeof(SDL_RendererInfo),
  { NULL },
  dao_SDL_RendererInfo_Nums,
  dao_SDL_RendererInfo_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_RendererInfo_Delete,
  NULL
};
DaoTypeCore *dao_SDL_RendererInfo_Core = & SDL_RendererInfo_Core;
DaoType *dao_type_SDL_RendererInfo = NULL;
static void dao_SDL_RendererInfo_GETF_name( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  DaoProcess_PutChars( _proc, (char*) self->name );
}
static void dao_SDL_RendererInfo_GETF_flags( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  DaoProcess_PutInteger( _proc, (dao_integer) self->flags );
}
static void dao_SDL_RendererInfo_SETF_flags( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  self->flags = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_RendererInfo_GETF_num_texture_formats( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  DaoProcess_PutInteger( _proc, (dao_integer) self->num_texture_formats );
}
static void dao_SDL_RendererInfo_SETF_num_texture_formats( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  self->num_texture_formats = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_RendererInfo_GETF_texture_formats( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  DaoProcess_PutVectorSInt32( _proc, (signed int*) self->texture_formats, 16 );
}
static void dao_SDL_RendererInfo_SETF_texture_formats( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  DaoArray *array = (DaoArray*) _p[1];
  int size = DaoArray_Size( array );
  if( size > 16 ) size = 16;
  memmove( self->texture_formats, DaoArray_ToSInt32( array ), size*sizeof(signed int) );
  DaoArray_FromSInt32( array );
}
static void dao_SDL_RendererInfo_GETF_max_texture_width( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  DaoProcess_PutInteger( _proc, (dao_integer) self->max_texture_width );
}
static void dao_SDL_RendererInfo_SETF_max_texture_width( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  self->max_texture_width = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_RendererInfo_GETF_max_texture_height( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_RendererInfo);
  DaoProcess_PutInteger( _proc, (dao_integer) self->max_texture_height );
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
static DaoTypeCore SDL_Renderer_Core = 
{
  "SDL_Renderer",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_Renderer_Core = & SDL_Renderer_Core;
DaoType *dao_type_SDL_Renderer = NULL;
/* /usr/local/include/SDL2/SDL_render.h */
static DaoTypeCore SDL_Texture_Core = 
{
  "SDL_Texture",
  0,
  { NULL },
  NULL,
  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL
};

DaoTypeCore *dao_SDL_Texture_Core = & SDL_Texture_Core;
DaoType *dao_type_SDL_Texture = NULL;
/* /usr/local/include/SDL2/SDL_version.h */


static DaoNumberEntry dao_SDL_version_Nums[] = 
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

static DaoFunctionEntry dao_SDL_version_Meths[] = 
{
  { dao_SDL_version_GETF_major, ".major( self: SDL_version )=>int" },
  { dao_SDL_version_SETF_major, ".major=( self: SDL_version, major: int )" },
  { dao_SDL_version_GETF_minor, ".minor( self: SDL_version )=>int" },
  { dao_SDL_version_SETF_minor, ".minor=( self: SDL_version, minor: int )" },
  { dao_SDL_version_GETF_patch, ".patch( self: SDL_version )=>int" },
  { dao_SDL_version_SETF_patch, ".patch=( self: SDL_version, patch: int )" },
  { dao_SDL_version_SDL_version, "SDL_version(  )=>SDL_version" },
  { NULL, NULL }
};
static void Dao_SDL_version_Delete( DaoValue *self )
{
	if( DaoValue_TryGetCdata( self ) ) free( DaoValue_TryGetCdata( self ) );
	DaoCstruct_Delete( (DaoCstruct*) self );
}

static DaoTypeCore SDL_version_Core = 
{
  "SDL_version",
  sizeof(SDL_version),
  { NULL },
  dao_SDL_version_Nums,
  dao_SDL_version_Meths,
  DaoCstruct_CheckGetField,    DaoCstruct_DoGetField,
  DaoCstruct_CheckSetField,    DaoCstruct_DoSetField,
  DaoCstruct_CheckGetItem,     DaoCstruct_DoGetItem,
  DaoCstruct_CheckSetItem,     DaoCstruct_DoSetItem,
  DaoCstruct_CheckUnary,       DaoCstruct_DoUnary,
  DaoCstruct_CheckBinary,      DaoCstruct_DoBinary,
  DaoCstruct_CheckConversion,  DaoCstruct_DoConversion,
  DaoCstruct_CheckForEach,     DaoCstruct_DoForEach,
  DaoCstruct_Print,
  NULL,
  NULL,
  NULL,
  NULL,
  NULL,
  Dao_SDL_version_Delete,
  NULL
};
DaoTypeCore *dao_SDL_version_Core = & SDL_version_Core;
DaoType *dao_type_SDL_version = NULL;
static void dao_SDL_version_GETF_major( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_version *self = (SDL_version*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_version);
  DaoProcess_PutInteger( _proc, (dao_integer) self->major );
}
static void dao_SDL_version_SETF_major( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_version *self = (SDL_version*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_version);
  self->major = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_version_GETF_minor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_version *self = (SDL_version*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_version);
  DaoProcess_PutInteger( _proc, (dao_integer) self->minor );
}
static void dao_SDL_version_SETF_minor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_version *self = (SDL_version*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_version);
  self->minor = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_version_GETF_patch( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_version *self = (SDL_version*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_version);
  DaoProcess_PutInteger( _proc, (dao_integer) self->patch );
}
static void dao_SDL_version_SETF_patch( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_version *self = (SDL_version*)DaoValue_TryCastCdata(_p[0],dao_type_SDL_version);
  self->patch = (int) DaoValue_TryGetInteger(_p[1]);
}
static void dao_SDL_version_SDL_version( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	SDL_version *self = Dao_SDL_version_New();
	DaoProcess_WrapCdata( _proc, self, dao_type_SDL_version );
}
#ifdef __cplusplus
}
#endif
