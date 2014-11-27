
#include "wrap/dao_sdl.h"
#include "daoNumtype.h"
#include "daoProcess.h"

void dao_SDL_RendererInfo_GETF_texture_formats( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	DaoType *type = dao_type_SDL_RendererInfo;
	SDL_RendererInfo *self = (SDL_RendererInfo*)DaoValue_TryCastCdata( _p[0], type );
	DaoArray *array = DaoProcess_PutArray( _proc );
	daoint i;

	DaoArray_ResizeVector( array, 16 );
	for(i=0; i<16; ++i) array->data.i[i] = self->texture_formats[i];
}

int dao_HandleAppEvents( void *userdata, SDL_Event *event )
{
	DaoProcess *process = DaoVmSpace_AcquireProcess( __daoVmSpace );
	DaoTuple *tuple = (DaoTuple*) userdata;
	DaoValue *params[2];
	int ret;

	params[0] = tuple->values[1];
	params[1] = (DaoValue*) DaoProcess_NewCdata( process, dao_type_SDL_Event, event, 0 );
	DaoProcess_Call( process, (DaoRoutine*) tuple->values[0], NULL, params, 2 );
	ret = DaoValue_TryGetBoolean( process->stackValues[0] );
	DaoVmSpace_ReleaseProcess( __daoVmSpace, process );
	return ret;
}

void dao__SDL_SetEventFilter( DaoProcess *_proc, DaoValue *_p[], int _n )
{
	DaoTuple *tuple = DaoTuple_New(2);
	DaoTuple_SetItem( tuple, _p[0], 0 );
	DaoTuple_SetItem( tuple, _p[1], 1 );
	SDL_SetEventFilter( dao_HandleAppEvents, tuple );
}
