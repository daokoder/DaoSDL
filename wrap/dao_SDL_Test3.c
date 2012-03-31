#include"dao_SDL_Test.h"
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
char** DaoStringList_ToStaticCStringArray( DaoList *slist )
{
  daoint i, size = DaoList_Size( slist );
  char **argv = (char**)calloc( size + 1, sizeof(char*) );
  for(i=0; i<size; i++){
    DString *ds = DaoValue_TryGetString( DaoList_GetItem( slist, i ) );
    daoint len = DString_Size( ds );
    argv[i] = (char*)malloc( (len+1) * sizeof(char) );
    strncpy( argv[i], DString_GetMBS( ds ), len );
	argv[i][len] = '\0';
  }
  return argv;
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
CommonState* Dao_CommonState_New()
{
	CommonState *self = (CommonState*) calloc( 1, sizeof(CommonState) );
	return self;
}
