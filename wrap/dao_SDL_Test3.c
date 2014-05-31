#include"dao_sdl_test.h"
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
    strncpy( argv[i], DString_GetData( ds ), len );
	argv[i][len] = '\0';
  }
  return argv;
}
SDLTest_CommonState* Dao_SDLTest_CommonState_New()
{
	SDLTest_CommonState *self = (SDLTest_CommonState*) calloc( 1, sizeof(SDLTest_CommonState) );
	return self;
}
