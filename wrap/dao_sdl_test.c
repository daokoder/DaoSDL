#include"dao_sdl_test.h"

DaoVmSpace *__daoVmSpace = NULL;
extern char** DaoStringList_ToStaticCStringArray( DaoList *slist );
#ifdef __cplusplus
extern "C"{
#endif
static void dao__SDLTest_CommonCreateState( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDLTest_CommonArg( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDLTest_CommonUsage( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDLTest_CommonInit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDLTest_CommonEvent( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDLTest_CommonQuit( DaoProcess *_proc, DaoValue *_p[], int _n );
static DaoFuncItem dao__Funcs[] = 
{
  { dao__SDLTest_CommonCreateState, "SDLTest_CommonCreateState( argv:list<string>, flags: int )=>SDLTest_CommonState" },
  { dao__SDLTest_CommonArg, "SDLTest_CommonArg( state: SDLTest_CommonState, index: int )=>int" },
  { dao__SDLTest_CommonUsage, "SDLTest_CommonUsage( state: SDLTest_CommonState )=>string" },
  { dao__SDLTest_CommonInit, "SDLTest_CommonInit( state: SDLTest_CommonState )=>int" },
  { dao__SDLTest_CommonEvent, "SDLTest_CommonEvent( state: SDLTest_CommonState, event: SDL_Event, done: int )=>int" },
  { dao__SDLTest_CommonQuit, "SDLTest_CommonQuit( state: SDLTest_CommonState )" },
  { NULL, NULL }
};
/* /usr/local/include/SDL2/SDL_test_common.h */
static void dao__SDLTest_CommonCreateState( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  static char **__argv = NULL;
  char **argv = __argv ? __argv : (__argv = DaoStringList_ToStaticCStringArray( (DaoList*)_p[0] ));
  unsigned int flags = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  SDLTest_CommonState* _CommonCreateState = SDLTest_CommonCreateState( argv, flags );
  DaoProcess_WrapCdata( _proc, (void*) _CommonCreateState, dao_type_SDLTest_CommonState );
}
/* /usr/local/include/SDL2/SDL_test_common.h */
static void dao__SDLTest_CommonArg( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState* state = (SDLTest_CommonState*) DaoValue_TryCastCdata( _p[0], dao_type_SDLTest_CommonState );
  int index = (int) DaoValue_TryGetInteger( _p[1] );

  int _SDLTest_CommonArg = SDLTest_CommonArg( state, index );
  DaoProcess_PutInteger( _proc, (daoint) _SDLTest_CommonArg );
}
/* /usr/local/include/SDL2/SDL_test_common.h */
static void dao__SDLTest_CommonUsage( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState* state = (SDLTest_CommonState*) DaoValue_TryCastCdata( _p[0], dao_type_SDLTest_CommonState );

  const char* _SDLTest_CommonUsage = SDLTest_CommonUsage( state );
  DaoProcess_PutChars( _proc, (char*) _SDLTest_CommonUsage );
}
/* /usr/local/include/SDL2/SDL_test_common.h */
static void dao__SDLTest_CommonInit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState* state = (SDLTest_CommonState*) DaoValue_TryCastCdata( _p[0], dao_type_SDLTest_CommonState );

  SDL_bool _SDLTest_CommonInit = SDLTest_CommonInit( state );
  DaoProcess_PutInteger( _proc, (daoint) _SDLTest_CommonInit );
}
/* /usr/local/include/SDL2/SDL_test_common.h */
static void dao__SDLTest_CommonEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState* state = (SDLTest_CommonState*) DaoValue_TryCastCdata( _p[0], dao_type_SDLTest_CommonState );
  SDL_Event* event = (SDL_Event*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Event );
  int done = (int) DaoValue_TryGetInteger( _p[2] );

  SDLTest_CommonEvent( state, event, &done );
  DaoProcess_PutInteger( _proc, (daoint) done );
}
/* /usr/local/include/SDL2/SDL_test_common.h */
static void dao__SDLTest_CommonQuit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDLTest_CommonState* state = (SDLTest_CommonState*) DaoValue_TryCastCdata( _p[0], dao_type_SDLTest_CommonState );

  SDLTest_CommonQuit( state );
}
#ifdef __cplusplus
}
#endif
static DaoNumItem dao__Nums[] = 
{
  {  "SDLTEST_MAX_LOGMESSAGE_LENGTH", DAO_DOUBLE, SDLTEST_MAX_LOGMESSAGE_LENGTH},
  { NULL, 0, 0 }
};
static const char *dao__Aliases[] = 
{
	NULL
};
#ifdef __cplusplus
extern "C"{
#endif
int DaoOnLoad( DaoVmSpace *vms, DaoNamespace *ns )
{
	__daoVmSpace = vms;
	DaoNamespace *aux = DaoVmSpace_LinkModule( vms, ns, "aux" );
	if( aux == NULL ) return 1;
	DaoNamespace *sdl = DaoVmSpace_LinkModule( vms, ns, "sdl" );
	if( sdl == NULL ) return 1;
	DaoNamespace_AddConstNumbers( ns, dao__Nums );
	dao_type_SDLTest_CommonState = DaoNamespace_WrapType( ns, dao_SDLTest_CommonState_Typer, 1 );
	DaoNamespace_TypeDefines( ns, dao__Aliases );
	DaoNamespace_WrapFunctions( ns, dao__Funcs );
	return 0;
}
#ifdef __cplusplus
}
#endif
