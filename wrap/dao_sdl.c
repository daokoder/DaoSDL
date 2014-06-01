#include"dao_sdl.h"

DaoVmSpace *__daoVmSpace = NULL;
#ifdef __cplusplus
extern "C"{
#endif
static void dao__SDL_malloc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_calloc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_realloc( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_free( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_getenv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_setenv( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_abs( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_isdigit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_isspace( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_toupper( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_tolower( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_memset( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_memset4( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_memcpy( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_memcpy4( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_memmove( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_memcmp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_wcslen( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_wcslcpy( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_wcslcat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_strlen( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_strlcpy( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_utf8strlcpy( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_strlcat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_strdup( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_strrev( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_strupr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_strlwr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_strchr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_strrchr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_strstr( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_itoa( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_uitoa( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ltoa( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ultoa( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_lltoa( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ulltoa( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_atoi( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_atof( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_strcmp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_strncmp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_strcasecmp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_strncasecmp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_sscanf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_snprintf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_atan( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_atan2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ceil( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_copysign( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_cos( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_cosf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_fabs( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_floor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_log( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_pow( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_scalbn( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_sin( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_sinf( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_sqrt( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_iconv_open( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_iconv_close( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_iconv_string( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetMainReady( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ReportAssertion( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetAssertionReport( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ResetAssertionReport( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_AtomicTryLock( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_AtomicLock( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_AtomicUnlock( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_AtomicGet( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetError( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetError( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ClearError( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_Error( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_Swap16( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_Swap32( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_Swap64( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SwapFloat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateMutex( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LockMutex( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_TryLockMutex( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_UnlockMutex( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_DestroyMutex( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateSemaphore( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_DestroySemaphore( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SemWait( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SemTryWait( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SemWaitTimeout( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SemPost( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SemValue( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateCond( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_DestroyCond( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CondSignal( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CondBroadcast( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CondWait( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CondWaitTimeout( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetThreadName( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ThreadID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetThreadID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetThreadPriority( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_WaitThread( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_TLSCreate( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_TLSGet( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RWFromFile( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RWFromFP( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RWFromMem( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RWFromConstMem( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_AllocRW( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_FreeRW( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ReadU8( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ReadLE16( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ReadBE16( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ReadLE32( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ReadBE32( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ReadLE64( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ReadBE64( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_WriteU8( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_WriteLE16( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_WriteBE16( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_WriteLE32( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_WriteBE32( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_WriteLE64( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_WriteBE64( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetNumAudioDrivers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetAudioDriver( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_AudioInit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_AudioQuit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetCurrentAudioDriver( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_OpenAudio( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetNumAudioDevices( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetAudioDeviceName( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_OpenAudioDevice( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetAudioStatus( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetAudioDeviceStatus( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_PauseAudio( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_PauseAudioDevice( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_FreeWAV( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_BuildAudioCVT( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ConvertAudio( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_MixAudio( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_MixAudioFormat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LockAudio( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LockAudioDevice( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_UnlockAudio( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_UnlockAudioDevice( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CloseAudio( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CloseAudioDevice( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetClipboardText( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetClipboardText( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_HasClipboardText( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetCPUCount( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetCPUCacheLineSize( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_HasRDTSC( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_HasAltiVec( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_HasMMX( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_Has3DNow( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_HasSSE( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_HasSSE2( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_HasSSE3( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_HasSSE41( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_HasSSE42( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetPixelFormatName( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_PixelFormatEnumToMasks( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_MasksToPixelFormatEnum( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_AllocFormat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_FreeFormat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_AllocPalette( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetPixelFormatPalette( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetPaletteColors( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_FreePalette( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_MapRGB( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_MapRGBA( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetRGB( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetRGBA( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CalculateGammaRamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RectEmpty( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RectEquals( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_HasIntersection( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_IntersectRect( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_UnionRect( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_EnclosePoints( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_IntersectRectAndLine( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateRGBSurface( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateRGBSurfaceFrom( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_FreeSurface( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetSurfacePalette( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LockSurface( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_UnlockSurface( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LoadBMP_RW( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SaveBMP_RW( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetSurfaceRLE( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetColorKey( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetColorKey( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetSurfaceColorMod( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetSurfaceColorMod( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetSurfaceAlphaMod( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetSurfaceAlphaMod( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetSurfaceBlendMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetSurfaceBlendMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetClipRect( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetClipRect( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ConvertSurface( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ConvertSurfaceFormat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ConvertPixels( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_FillRect( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_FillRects( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_UpperBlit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LowerBlit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SoftStretch( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_UpperBlitScaled( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LowerBlitScaled( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetNumVideoDrivers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetVideoDriver( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_VideoInit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_VideoQuit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetCurrentVideoDriver( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetNumVideoDisplays( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetDisplayName( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetDisplayBounds( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetNumDisplayModes( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetDisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetDesktopDisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetCurrentDisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetClosestDisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowDisplayIndex( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetWindowDisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowDisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowPixelFormat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateWindow( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateWindowFrom( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowFromID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowFlags( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetWindowTitle( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowTitle( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetWindowIcon( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetWindowData( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowData( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetWindowPosition( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowPosition( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetWindowSize( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowSize( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetWindowMinimumSize( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowMinimumSize( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetWindowMaximumSize( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowMaximumSize( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetWindowBordered( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ShowWindow( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_HideWindow( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RaiseWindow( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_MaximizeWindow( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_MinimizeWindow( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RestoreWindow( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetWindowFullscreen( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowSurface( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_UpdateWindowSurface( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_UpdateWindowSurfaceRects( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetWindowGrab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowGrab( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetWindowBrightness( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowBrightness( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetWindowGammaRamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetWindowGammaRamp( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_DestroyWindow( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_IsScreenSaverEnabled( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_EnableScreenSaver( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_DisableScreenSaver( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_LoadLibrary( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_GetProcAddress( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_UnloadLibrary( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_ExtensionSupported( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_SetAttribute( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_GetAttribute( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_CreateContext( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_MakeCurrent( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_GetCurrentWindow( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_GetCurrentContext( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_SetSwapInterval( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_GetSwapInterval( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_SwapWindow( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_DeleteContext( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetKeyboardFocus( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetKeyboardState( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetModState( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetModState( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetKeyFromScancode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetScancodeFromKey( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetScancodeName( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetScancodeFromName( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetKeyName( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetKeyFromName( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_StartTextInput( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_IsTextInputActive( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_StopTextInput( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetTextInputRect( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_HasScreenKeyboardSupport( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_IsScreenKeyboardShown( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetMouseFocus( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetMouseState( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetRelativeMouseState( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_WarpMouseInWindow( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetRelativeMouseMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetRelativeMouseMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateCursor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateColorCursor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateSystemCursor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetCursor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetCursor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetDefaultCursor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_FreeCursor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ShowCursor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_NumJoysticks( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickNameForIndex( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickOpen( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickName( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickGetDeviceGUID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickGetGUID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickGetGUIDString( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickGetGUIDFromString( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickGetAttached( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickInstanceID( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickNumAxes( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickNumBalls( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickNumHats( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickNumButtons( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickUpdate( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickEventState( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickGetAxis( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickGetHat( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickGetBall( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickGetButton( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_JoystickClose( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetNumTouchDevices( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetTouchDevice( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetNumTouchFingers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetTouchFinger( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RecordGesture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SaveAllDollarTemplates( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SaveDollarTemplate( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LoadDollarTemplates( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_PumpEvents( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_PeepEvents( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_HasEvent( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_HasEvents( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_FlushEvent( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_FlushEvents( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_PollEvent( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_WaitEvent( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_WaitEventTimeout( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_PushEvent( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_EventState( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RegisterEvents( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetHintWithPriority( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetHint( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetHint( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_ClearHints( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LoadObject( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LoadFunction( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_UnloadObject( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LogSetAllPriority( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LogSetPriority( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LogGetPriority( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LogResetPriorities( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_Log( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LogVerbose( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LogDebug( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LogInfo( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LogWarn( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LogError( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LogCritical( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_LogMessage( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetPowerInfo( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetNumRenderDrivers( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetRenderDriverInfo( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateWindowAndRenderer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateRenderer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateSoftwareRenderer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetRenderer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetRendererInfo( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetRendererOutputSize( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateTexture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_CreateTextureFromSurface( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_QueryTexture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetTextureColorMod( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetTextureColorMod( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetTextureAlphaMod( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetTextureAlphaMod( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetTextureBlendMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetTextureBlendMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_UpdateTexture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_UnlockTexture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderTargetSupported( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetRenderTarget( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetRenderTarget( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderSetLogicalSize( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderGetLogicalSize( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderSetViewport( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderGetViewport( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderSetClipRect( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderGetClipRect( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderSetScale( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderGetScale( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetRenderDrawColor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetRenderDrawColor( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_SetRenderDrawBlendMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetRenderDrawBlendMode( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderClear( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderDrawPoint( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderDrawPoints( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderDrawLine( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderDrawLines( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderDrawRect( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderDrawRects( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderFillRect( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderFillRects( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderCopy( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderCopyEx( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderReadPixels( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RenderPresent( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_DestroyTexture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_DestroyRenderer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_BindTexture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GL_UnbindTexture( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetTicks( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetPerformanceCounter( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetPerformanceFrequency( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_Delay( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_RemoveTimer( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetVersion( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetRevision( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_GetRevisionNumber( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_Init( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_InitSubSystem( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_QuitSubSystem( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_WasInit( DaoProcess *_proc, DaoValue *_p[], int _n );
static void dao__SDL_Quit( DaoProcess *_proc, DaoValue *_p[], int _n );
static DaoFuncItem dao__Funcs[] = 
{
  { dao__SDL_malloc, "SDL_malloc( size: int )=>cdata" },
  { dao__SDL_calloc, "SDL_calloc( nmemb: int, size: int )=>cdata" },
  { dao__SDL_realloc, "SDL_realloc( mem: cdata, size: int )=>cdata" },
  { dao__SDL_free, "SDL_free( mem: cdata )" },
  { dao__SDL_getenv, "SDL_getenv( name: string )=>string" },
  { dao__SDL_setenv, "SDL_setenv( name: string, value: string, overwrite: int )=>int" },
  { dao__SDL_abs, "SDL_abs( x: int )=>int" },
  { dao__SDL_isdigit, "SDL_isdigit( x: int )=>int" },
  { dao__SDL_isspace, "SDL_isspace( x: int )=>int" },
  { dao__SDL_toupper, "SDL_toupper( x: int )=>int" },
  { dao__SDL_tolower, "SDL_tolower( x: int )=>int" },
  { dao__SDL_memset, "SDL_memset( dst: cdata, c: int, len: int )=>cdata" },
  { dao__SDL_memset4, "SDL_memset4( dst: cdata, val: int, dwords: int )" },
  { dao__SDL_memcpy, "SDL_memcpy( dst: cdata, src: cdata, len: int )=>cdata" },
  { dao__SDL_memcpy4, "SDL_memcpy4( dst: cdata, src: cdata, dwords: int )=>cdata" },
  { dao__SDL_memmove, "SDL_memmove( dst: cdata, src: cdata, len: int )=>cdata" },
  { dao__SDL_memcmp, "SDL_memcmp( s1: cdata, s2: cdata, len: int )=>int" },
  { dao__SDL_wcslen, "SDL_wcslen( wstr: array<int> )=>int" },
  { dao__SDL_wcslcpy, "SDL_wcslcpy( dst: int, src: array<int>, maxlen: int )=>tuple<int,int>" },
  { dao__SDL_wcslcat, "SDL_wcslcat( dst: int, src: array<int>, maxlen: int )=>tuple<int,int>" },
  { dao__SDL_strlen, "SDL_strlen( str: string )=>int" },
  { dao__SDL_strlcpy, "SDL_strlcpy( dst: string, src: string, maxlen: int )=>int" },
  { dao__SDL_utf8strlcpy, "SDL_utf8strlcpy( dst: string, src: string, dst_bytes: int )=>int" },
  { dao__SDL_strlcat, "SDL_strlcat( dst: string, src: string, maxlen: int )=>int" },
  { dao__SDL_strdup, "SDL_strdup( str: string )=>string" },
  { dao__SDL_strrev, "SDL_strrev( str: string )=>string" },
  { dao__SDL_strupr, "SDL_strupr( str: string )=>string" },
  { dao__SDL_strlwr, "SDL_strlwr( str: string )=>string" },
  { dao__SDL_strchr, "SDL_strchr( str: string, c: int )=>string" },
  { dao__SDL_strrchr, "SDL_strrchr( str: string, c: int )=>string" },
  { dao__SDL_strstr, "SDL_strstr( haystack: string, needle: string )=>string" },
  { dao__SDL_itoa, "SDL_itoa( value: int, str: string, radix: int )=>string" },
  { dao__SDL_uitoa, "SDL_uitoa( value: int, str: string, radix: int )=>string" },
  { dao__SDL_ltoa, "SDL_ltoa( value: int, str: string, radix: int )=>string" },
  { dao__SDL_ultoa, "SDL_ultoa( value: int, str: string, radix: int )=>string" },
  { dao__SDL_lltoa, "SDL_lltoa( value: int, str: string, radix: int )=>string" },
  { dao__SDL_ulltoa, "SDL_ulltoa( value: int, str: string, radix: int )=>string" },
  { dao__SDL_atoi, "SDL_atoi( str: string )=>int" },
  { dao__SDL_atof, "SDL_atof( str: string )=>double" },
  { dao__SDL_strcmp, "SDL_strcmp( str1: string, str2: string )=>int" },
  { dao__SDL_strncmp, "SDL_strncmp( str1: string, str2: string, maxlen: int )=>int" },
  { dao__SDL_strcasecmp, "SDL_strcasecmp( str1: string, str2: string )=>int" },
  { dao__SDL_strncasecmp, "SDL_strncasecmp( str1: string, str2: string, len: int )=>int" },
  { dao__SDL_sscanf, "SDL_sscanf( text: string, fmt: string )=>int" },
  { dao__SDL_snprintf, "SDL_snprintf( text: string, maxlen: int, fmt: string )=>int" },
  { dao__SDL_atan, "SDL_atan( x: double )=>double" },
  { dao__SDL_atan2, "SDL_atan2( x: double, y: double )=>double" },
  { dao__SDL_ceil, "SDL_ceil( x: double )=>double" },
  { dao__SDL_copysign, "SDL_copysign( x: double, y: double )=>double" },
  { dao__SDL_cos, "SDL_cos( x: double )=>double" },
  { dao__SDL_cosf, "SDL_cosf( x: float )=>float" },
  { dao__SDL_fabs, "SDL_fabs( x: double )=>double" },
  { dao__SDL_floor, "SDL_floor( x: double )=>double" },
  { dao__SDL_log, "SDL_log( x: double )=>double" },
  { dao__SDL_pow, "SDL_pow( x: double, y: double )=>double" },
  { dao__SDL_scalbn, "SDL_scalbn( x: double, n: int )=>double" },
  { dao__SDL_sin, "SDL_sin( x: double )=>double" },
  { dao__SDL_sinf, "SDL_sinf( x: float )=>float" },
  { dao__SDL_sqrt, "SDL_sqrt( x: double )=>double" },
  { dao__SDL_iconv_open, "SDL_iconv_open( tocode: string, fromcode: string )=>_SDL_iconv_t" },
  { dao__SDL_iconv_close, "SDL_iconv_close( cd: _SDL_iconv_t )=>int" },
  { dao__SDL_iconv_string, "SDL_iconv_string( tocode: string, fromcode: string, inbuf: string, inbytesleft: int )=>string" },
  { dao__SDL_SetMainReady, "SDL_SetMainReady(  )" },
  { dao__SDL_ReportAssertion, "SDL_ReportAssertion( _p0: SDL_assert_data, _p1: string, _p2: string, _p3: int )=>int" },
  { dao__SDL_GetAssertionReport, "SDL_GetAssertionReport(  )=>SDL_assert_data" },
  { dao__SDL_ResetAssertionReport, "SDL_ResetAssertionReport(  )" },
  { dao__SDL_AtomicTryLock, "SDL_AtomicTryLock( lock: int )=>tuple<int,int>" },
  { dao__SDL_AtomicLock, "SDL_AtomicLock( lock: int )=>int" },
  { dao__SDL_AtomicUnlock, "SDL_AtomicUnlock( lock: int )=>int" },
  { dao__SDL_AtomicGet, "SDL_AtomicGet( a: SDL_atomic_t )=>int" },
  { dao__SDL_SetError, "SDL_SetError( fmt: string )=>int" },
  { dao__SDL_GetError, "SDL_GetError(  )=>string" },
  { dao__SDL_ClearError, "SDL_ClearError(  )" },
  { dao__SDL_Error, "SDL_Error( code: int )=>int" },
  { dao__SDL_Swap16, "SDL_Swap16( x: int )=>int" },
  { dao__SDL_Swap32, "SDL_Swap32( x: int )=>int" },
  { dao__SDL_Swap64, "SDL_Swap64( x: int )=>int" },
  { dao__SDL_SwapFloat, "SDL_SwapFloat( x: float )=>float" },
  { dao__SDL_CreateMutex, "SDL_CreateMutex(  )=>SDL_mutex" },
  { dao__SDL_LockMutex, "SDL_LockMutex( mutex: SDL_mutex )=>int" },
  { dao__SDL_TryLockMutex, "SDL_TryLockMutex( mutex: SDL_mutex )=>int" },
  { dao__SDL_UnlockMutex, "SDL_UnlockMutex( mutex: SDL_mutex )=>int" },
  { dao__SDL_DestroyMutex, "SDL_DestroyMutex( mutex: SDL_mutex )" },
  { dao__SDL_CreateSemaphore, "SDL_CreateSemaphore( initial_value: int )=>SDL_semaphore" },
  { dao__SDL_DestroySemaphore, "SDL_DestroySemaphore( sem: SDL_semaphore )" },
  { dao__SDL_SemWait, "SDL_SemWait( sem: SDL_semaphore )=>int" },
  { dao__SDL_SemTryWait, "SDL_SemTryWait( sem: SDL_semaphore )=>int" },
  { dao__SDL_SemWaitTimeout, "SDL_SemWaitTimeout( sem: SDL_semaphore, ms: int )=>int" },
  { dao__SDL_SemPost, "SDL_SemPost( sem: SDL_semaphore )=>int" },
  { dao__SDL_SemValue, "SDL_SemValue( sem: SDL_semaphore )=>int" },
  { dao__SDL_CreateCond, "SDL_CreateCond(  )=>SDL_cond" },
  { dao__SDL_DestroyCond, "SDL_DestroyCond( cond: SDL_cond )" },
  { dao__SDL_CondSignal, "SDL_CondSignal( cond: SDL_cond )=>int" },
  { dao__SDL_CondBroadcast, "SDL_CondBroadcast( cond: SDL_cond )=>int" },
  { dao__SDL_CondWait, "SDL_CondWait( cond: SDL_cond, mutex: SDL_mutex )=>int" },
  { dao__SDL_CondWaitTimeout, "SDL_CondWaitTimeout( cond: SDL_cond, mutex: SDL_mutex, ms: int )=>int" },
  { dao__SDL_GetThreadName, "SDL_GetThreadName( thread: SDL_Thread )=>string" },
  { dao__SDL_ThreadID, "SDL_ThreadID(  )=>int" },
  { dao__SDL_GetThreadID, "SDL_GetThreadID( thread: SDL_Thread )=>int" },
  { dao__SDL_SetThreadPriority, "SDL_SetThreadPriority( priority: int )=>int" },
  { dao__SDL_WaitThread, "SDL_WaitThread( thread: SDL_Thread, status: int )=>int" },
  { dao__SDL_TLSCreate, "SDL_TLSCreate(  )=>int" },
  { dao__SDL_TLSGet, "SDL_TLSGet( id: int )=>cdata" },
  { dao__SDL_RWFromFile, "SDL_RWFromFile( file: string, mode: string )=>SDL_RWops" },
  { dao__SDL_RWFromFP, "SDL_RWFromFP( fp: dao::io::stream, autoclose: int )=>SDL_RWops" },
  { dao__SDL_RWFromMem, "SDL_RWFromMem( mem: cdata, size: int )=>SDL_RWops" },
  { dao__SDL_RWFromConstMem, "SDL_RWFromConstMem( mem: cdata, size: int )=>SDL_RWops" },
  { dao__SDL_AllocRW, "SDL_AllocRW(  )=>SDL_RWops" },
  { dao__SDL_FreeRW, "SDL_FreeRW( area: SDL_RWops )" },
  { dao__SDL_ReadU8, "SDL_ReadU8( src: SDL_RWops )=>int" },
  { dao__SDL_ReadLE16, "SDL_ReadLE16( src: SDL_RWops )=>int" },
  { dao__SDL_ReadBE16, "SDL_ReadBE16( src: SDL_RWops )=>int" },
  { dao__SDL_ReadLE32, "SDL_ReadLE32( src: SDL_RWops )=>int" },
  { dao__SDL_ReadBE32, "SDL_ReadBE32( src: SDL_RWops )=>int" },
  { dao__SDL_ReadLE64, "SDL_ReadLE64( src: SDL_RWops )=>int" },
  { dao__SDL_ReadBE64, "SDL_ReadBE64( src: SDL_RWops )=>int" },
  { dao__SDL_WriteU8, "SDL_WriteU8( dst: SDL_RWops, value: int )=>int" },
  { dao__SDL_WriteLE16, "SDL_WriteLE16( dst: SDL_RWops, value: int )=>int" },
  { dao__SDL_WriteBE16, "SDL_WriteBE16( dst: SDL_RWops, value: int )=>int" },
  { dao__SDL_WriteLE32, "SDL_WriteLE32( dst: SDL_RWops, value: int )=>int" },
  { dao__SDL_WriteBE32, "SDL_WriteBE32( dst: SDL_RWops, value: int )=>int" },
  { dao__SDL_WriteLE64, "SDL_WriteLE64( dst: SDL_RWops, value: int )=>int" },
  { dao__SDL_WriteBE64, "SDL_WriteBE64( dst: SDL_RWops, value: int )=>int" },
  { dao__SDL_GetNumAudioDrivers, "SDL_GetNumAudioDrivers(  )=>int" },
  { dao__SDL_GetAudioDriver, "SDL_GetAudioDriver( index: int )=>string" },
  { dao__SDL_AudioInit, "SDL_AudioInit( driver_name: string )=>int" },
  { dao__SDL_AudioQuit, "SDL_AudioQuit(  )" },
  { dao__SDL_GetCurrentAudioDriver, "SDL_GetCurrentAudioDriver(  )=>string" },
  { dao__SDL_OpenAudio, "SDL_OpenAudio( desired: SDL_AudioSpec, obtained: SDL_AudioSpec )=>int" },
  { dao__SDL_GetNumAudioDevices, "SDL_GetNumAudioDevices( iscapture: int )=>int" },
  { dao__SDL_GetAudioDeviceName, "SDL_GetAudioDeviceName( index: int, iscapture: int )=>string" },
  { dao__SDL_OpenAudioDevice, "SDL_OpenAudioDevice( device: string, iscapture: int, desired: SDL_AudioSpec, obtained: SDL_AudioSpec, allowed_changes: int )=>int" },
  { dao__SDL_GetAudioStatus, "SDL_GetAudioStatus(  )=>int" },
  { dao__SDL_GetAudioDeviceStatus, "SDL_GetAudioDeviceStatus( dev: int )=>int" },
  { dao__SDL_PauseAudio, "SDL_PauseAudio( pause_on: int )" },
  { dao__SDL_PauseAudioDevice, "SDL_PauseAudioDevice( dev: int, pause_on: int )" },
  { dao__SDL_FreeWAV, "SDL_FreeWAV( audio_buf: string )" },
  { dao__SDL_BuildAudioCVT, "SDL_BuildAudioCVT( cvt: SDL_AudioCVT, src_format: int, src_channels: int, src_rate: int, dst_format: int, dst_channels: int, dst_rate: int )=>int" },
  { dao__SDL_ConvertAudio, "SDL_ConvertAudio( cvt: SDL_AudioCVT )=>int" },
  { dao__SDL_MixAudio, "SDL_MixAudio( dst: string, src: string, len: int, volume: int )" },
  { dao__SDL_MixAudioFormat, "SDL_MixAudioFormat( dst: string, src: string, format: int, len: int, volume: int )" },
  { dao__SDL_LockAudio, "SDL_LockAudio(  )" },
  { dao__SDL_LockAudioDevice, "SDL_LockAudioDevice( dev: int )" },
  { dao__SDL_UnlockAudio, "SDL_UnlockAudio(  )" },
  { dao__SDL_UnlockAudioDevice, "SDL_UnlockAudioDevice( dev: int )" },
  { dao__SDL_CloseAudio, "SDL_CloseAudio(  )" },
  { dao__SDL_CloseAudioDevice, "SDL_CloseAudioDevice( dev: int )" },
  { dao__SDL_SetClipboardText, "SDL_SetClipboardText( text: string )=>int" },
  { dao__SDL_GetClipboardText, "SDL_GetClipboardText(  )=>string" },
  { dao__SDL_HasClipboardText, "SDL_HasClipboardText(  )=>int" },
  { dao__SDL_GetCPUCount, "SDL_GetCPUCount(  )=>int" },
  { dao__SDL_GetCPUCacheLineSize, "SDL_GetCPUCacheLineSize(  )=>int" },
  { dao__SDL_HasRDTSC, "SDL_HasRDTSC(  )=>int" },
  { dao__SDL_HasAltiVec, "SDL_HasAltiVec(  )=>int" },
  { dao__SDL_HasMMX, "SDL_HasMMX(  )=>int" },
  { dao__SDL_Has3DNow, "SDL_Has3DNow(  )=>int" },
  { dao__SDL_HasSSE, "SDL_HasSSE(  )=>int" },
  { dao__SDL_HasSSE2, "SDL_HasSSE2(  )=>int" },
  { dao__SDL_HasSSE3, "SDL_HasSSE3(  )=>int" },
  { dao__SDL_HasSSE41, "SDL_HasSSE41(  )=>int" },
  { dao__SDL_HasSSE42, "SDL_HasSSE42(  )=>int" },
  { dao__SDL_GetPixelFormatName, "SDL_GetPixelFormatName( format: int )=>string" },
  { dao__SDL_PixelFormatEnumToMasks, "SDL_PixelFormatEnumToMasks( format: int, bpp: int, Rmask: int, Gmask: int, Bmask: int, Amask: int )=>tuple<int,int,int,int,int,int>" },
  { dao__SDL_MasksToPixelFormatEnum, "SDL_MasksToPixelFormatEnum( bpp: int, Rmask: int, Gmask: int, Bmask: int, Amask: int )=>int" },
  { dao__SDL_AllocFormat, "SDL_AllocFormat( pixel_format: int )=>SDL_PixelFormat" },
  { dao__SDL_FreeFormat, "SDL_FreeFormat( format: SDL_PixelFormat )" },
  { dao__SDL_AllocPalette, "SDL_AllocPalette( ncolors: int )=>SDL_Palette" },
  { dao__SDL_SetPixelFormatPalette, "SDL_SetPixelFormatPalette( format: SDL_PixelFormat, palette: SDL_Palette )=>int" },
  { dao__SDL_SetPaletteColors, "SDL_SetPaletteColors( palette: SDL_Palette, colors: SDL_Color, firstcolor: int, ncolors: int )=>int" },
  { dao__SDL_FreePalette, "SDL_FreePalette( palette: SDL_Palette )" },
  { dao__SDL_MapRGB, "SDL_MapRGB( format: SDL_PixelFormat, r: int, g: int, b: int )=>int" },
  { dao__SDL_MapRGBA, "SDL_MapRGBA( format: SDL_PixelFormat, r: int, g: int, b: int, a: int )=>int" },
  { dao__SDL_GetRGB, "SDL_GetRGB( pixel: int, format: SDL_PixelFormat, r: string, g: string, b: string )" },
  { dao__SDL_GetRGBA, "SDL_GetRGBA( pixel: int, format: SDL_PixelFormat, r: string, g: string, b: string, a: string )" },
  { dao__SDL_CalculateGammaRamp, "SDL_CalculateGammaRamp( gamma: float, ramp: int )=>int" },
  { dao__SDL_RectEmpty, "SDL_RectEmpty( r: SDL_Rect )=>int" },
  { dao__SDL_RectEquals, "SDL_RectEquals( a: SDL_Rect, b: SDL_Rect )=>int" },
  { dao__SDL_HasIntersection, "SDL_HasIntersection( A: SDL_Rect, B: SDL_Rect )=>int" },
  { dao__SDL_IntersectRect, "SDL_IntersectRect( A: SDL_Rect, B: SDL_Rect, result: SDL_Rect )=>int" },
  { dao__SDL_UnionRect, "SDL_UnionRect( A: SDL_Rect, B: SDL_Rect, result: SDL_Rect )" },
  { dao__SDL_EnclosePoints, "SDL_EnclosePoints( points: SDL_Point, count: int, clip: SDL_Rect, result: SDL_Rect )=>int" },
  { dao__SDL_IntersectRectAndLine, "SDL_IntersectRectAndLine( rect: SDL_Rect, X1: int, Y1: int, X2: int, Y2: int )=>tuple<int,int,int,int,int>" },
  { dao__SDL_CreateRGBSurface, "SDL_CreateRGBSurface( flags: int, width: int, height: int, depth: int, Rmask: int, Gmask: int, Bmask: int, Amask: int )=>SDL_Surface" },
  { dao__SDL_CreateRGBSurfaceFrom, "SDL_CreateRGBSurfaceFrom( pixels: cdata, width: int, height: int, depth: int, pitch: int, Rmask: int, Gmask: int, Bmask: int, Amask: int )=>SDL_Surface" },
  { dao__SDL_FreeSurface, "SDL_FreeSurface( surface: SDL_Surface )" },
  { dao__SDL_SetSurfacePalette, "SDL_SetSurfacePalette( surface: SDL_Surface, palette: SDL_Palette )=>int" },
  { dao__SDL_LockSurface, "SDL_LockSurface( surface: SDL_Surface )=>int" },
  { dao__SDL_UnlockSurface, "SDL_UnlockSurface( surface: SDL_Surface )" },
  { dao__SDL_LoadBMP_RW, "SDL_LoadBMP_RW( src: SDL_RWops, freesrc: int )=>SDL_Surface" },
  { dao__SDL_SaveBMP_RW, "SDL_SaveBMP_RW( surface: SDL_Surface, dst: SDL_RWops, freedst: int )=>int" },
  { dao__SDL_SetSurfaceRLE, "SDL_SetSurfaceRLE( surface: SDL_Surface, flag: int )=>int" },
  { dao__SDL_SetColorKey, "SDL_SetColorKey( surface: SDL_Surface, flag: int, key: int )=>int" },
  { dao__SDL_GetColorKey, "SDL_GetColorKey( surface: SDL_Surface, key: int )=>tuple<int,int>" },
  { dao__SDL_SetSurfaceColorMod, "SDL_SetSurfaceColorMod( surface: SDL_Surface, r: int, g: int, b: int )=>int" },
  { dao__SDL_GetSurfaceColorMod, "SDL_GetSurfaceColorMod( surface: SDL_Surface, r: string, g: string, b: string )=>int" },
  { dao__SDL_SetSurfaceAlphaMod, "SDL_SetSurfaceAlphaMod( surface: SDL_Surface, alpha: int )=>int" },
  { dao__SDL_GetSurfaceAlphaMod, "SDL_GetSurfaceAlphaMod( surface: SDL_Surface, alpha: string )=>int" },
  { dao__SDL_SetSurfaceBlendMode, "SDL_SetSurfaceBlendMode( surface: SDL_Surface, blendMode: int )=>int" },
  { dao__SDL_GetSurfaceBlendMode, "SDL_GetSurfaceBlendMode( surface: SDL_Surface, blendMode: int )=>int" },
  { dao__SDL_SetClipRect, "SDL_SetClipRect( surface: SDL_Surface, rect: SDL_Rect )=>int" },
  { dao__SDL_GetClipRect, "SDL_GetClipRect( surface: SDL_Surface, rect: SDL_Rect )" },
  { dao__SDL_ConvertSurface, "SDL_ConvertSurface( src: SDL_Surface, fmt: SDL_PixelFormat, flags: int )=>SDL_Surface" },
  { dao__SDL_ConvertSurfaceFormat, "SDL_ConvertSurfaceFormat( src: SDL_Surface, pixel_format: int, flags: int )=>SDL_Surface" },
  { dao__SDL_ConvertPixels, "SDL_ConvertPixels( width: int, height: int, src_format: int, src: cdata, src_pitch: int, dst_format: int, dst: cdata, dst_pitch: int )=>int" },
  { dao__SDL_FillRect, "SDL_FillRect( dst: SDL_Surface, rect: SDL_Rect, color: int )=>int" },
  { dao__SDL_FillRects, "SDL_FillRects( dst: SDL_Surface, rects: SDL_Rect, count: int, color: int )=>int" },
  { dao__SDL_UpperBlit, "SDL_UpperBlit( src: SDL_Surface, srcrect: SDL_Rect, dst: SDL_Surface, dstrect: SDL_Rect )=>int" },
  { dao__SDL_LowerBlit, "SDL_LowerBlit( src: SDL_Surface, srcrect: SDL_Rect, dst: SDL_Surface, dstrect: SDL_Rect )=>int" },
  { dao__SDL_SoftStretch, "SDL_SoftStretch( src: SDL_Surface, srcrect: SDL_Rect, dst: SDL_Surface, dstrect: SDL_Rect )=>int" },
  { dao__SDL_UpperBlitScaled, "SDL_UpperBlitScaled( src: SDL_Surface, srcrect: SDL_Rect, dst: SDL_Surface, dstrect: SDL_Rect )=>int" },
  { dao__SDL_LowerBlitScaled, "SDL_LowerBlitScaled( src: SDL_Surface, srcrect: SDL_Rect, dst: SDL_Surface, dstrect: SDL_Rect )=>int" },
  { dao__SDL_GetNumVideoDrivers, "SDL_GetNumVideoDrivers(  )=>int" },
  { dao__SDL_GetVideoDriver, "SDL_GetVideoDriver( index: int )=>string" },
  { dao__SDL_VideoInit, "SDL_VideoInit( driver_name: string )=>int" },
  { dao__SDL_VideoQuit, "SDL_VideoQuit(  )" },
  { dao__SDL_GetCurrentVideoDriver, "SDL_GetCurrentVideoDriver(  )=>string" },
  { dao__SDL_GetNumVideoDisplays, "SDL_GetNumVideoDisplays(  )=>int" },
  { dao__SDL_GetDisplayName, "SDL_GetDisplayName( displayIndex: int )=>string" },
  { dao__SDL_GetDisplayBounds, "SDL_GetDisplayBounds( displayIndex: int, rect: SDL_Rect )=>int" },
  { dao__SDL_GetNumDisplayModes, "SDL_GetNumDisplayModes( displayIndex: int )=>int" },
  { dao__SDL_GetDisplayMode, "SDL_GetDisplayMode( displayIndex: int, modeIndex: int, mode: SDL_DisplayMode )=>int" },
  { dao__SDL_GetDesktopDisplayMode, "SDL_GetDesktopDisplayMode( displayIndex: int, mode: SDL_DisplayMode )=>int" },
  { dao__SDL_GetCurrentDisplayMode, "SDL_GetCurrentDisplayMode( displayIndex: int, mode: SDL_DisplayMode )=>int" },
  { dao__SDL_GetClosestDisplayMode, "SDL_GetClosestDisplayMode( displayIndex: int, mode: SDL_DisplayMode, closest: SDL_DisplayMode )=>SDL_DisplayMode" },
  { dao__SDL_GetWindowDisplayIndex, "SDL_GetWindowDisplayIndex( window: SDL_Window )=>int" },
  { dao__SDL_SetWindowDisplayMode, "SDL_SetWindowDisplayMode( window: SDL_Window, mode: SDL_DisplayMode )=>int" },
  { dao__SDL_GetWindowDisplayMode, "SDL_GetWindowDisplayMode( window: SDL_Window, mode: SDL_DisplayMode )=>int" },
  { dao__SDL_GetWindowPixelFormat, "SDL_GetWindowPixelFormat( window: SDL_Window )=>int" },
  { dao__SDL_CreateWindow, "SDL_CreateWindow( title: string, x: int, y: int, w: int, h: int, flags: int )=>SDL_Window" },
  { dao__SDL_CreateWindowFrom, "SDL_CreateWindowFrom( data: cdata )=>SDL_Window" },
  { dao__SDL_GetWindowID, "SDL_GetWindowID( window: SDL_Window )=>int" },
  { dao__SDL_GetWindowFromID, "SDL_GetWindowFromID( id: int )=>SDL_Window" },
  { dao__SDL_GetWindowFlags, "SDL_GetWindowFlags( window: SDL_Window )=>int" },
  { dao__SDL_SetWindowTitle, "SDL_SetWindowTitle( window: SDL_Window, title: string )" },
  { dao__SDL_GetWindowTitle, "SDL_GetWindowTitle( window: SDL_Window )=>string" },
  { dao__SDL_SetWindowIcon, "SDL_SetWindowIcon( window: SDL_Window, icon: SDL_Surface )" },
  { dao__SDL_SetWindowData, "SDL_SetWindowData( window: SDL_Window, name: string, userdata: cdata )=>cdata" },
  { dao__SDL_GetWindowData, "SDL_GetWindowData( window: SDL_Window, name: string )=>cdata" },
  { dao__SDL_SetWindowPosition, "SDL_SetWindowPosition( window: SDL_Window, x: int, y: int )" },
  { dao__SDL_GetWindowPosition, "SDL_GetWindowPosition( window: SDL_Window, x: int, y: int )=>tuple<int,int>" },
  { dao__SDL_SetWindowSize, "SDL_SetWindowSize( window: SDL_Window, w: int, h: int )" },
  { dao__SDL_GetWindowSize, "SDL_GetWindowSize( window: SDL_Window, w: int, h: int )=>tuple<int,int>" },
  { dao__SDL_SetWindowMinimumSize, "SDL_SetWindowMinimumSize( window: SDL_Window, min_w: int, min_h: int )" },
  { dao__SDL_GetWindowMinimumSize, "SDL_GetWindowMinimumSize( window: SDL_Window, w: int, h: int )=>tuple<int,int>" },
  { dao__SDL_SetWindowMaximumSize, "SDL_SetWindowMaximumSize( window: SDL_Window, max_w: int, max_h: int )" },
  { dao__SDL_GetWindowMaximumSize, "SDL_GetWindowMaximumSize( window: SDL_Window, w: int, h: int )=>tuple<int,int>" },
  { dao__SDL_SetWindowBordered, "SDL_SetWindowBordered( window: SDL_Window, bordered: int )" },
  { dao__SDL_ShowWindow, "SDL_ShowWindow( window: SDL_Window )" },
  { dao__SDL_HideWindow, "SDL_HideWindow( window: SDL_Window )" },
  { dao__SDL_RaiseWindow, "SDL_RaiseWindow( window: SDL_Window )" },
  { dao__SDL_MaximizeWindow, "SDL_MaximizeWindow( window: SDL_Window )" },
  { dao__SDL_MinimizeWindow, "SDL_MinimizeWindow( window: SDL_Window )" },
  { dao__SDL_RestoreWindow, "SDL_RestoreWindow( window: SDL_Window )" },
  { dao__SDL_SetWindowFullscreen, "SDL_SetWindowFullscreen( window: SDL_Window, flags: int )=>int" },
  { dao__SDL_GetWindowSurface, "SDL_GetWindowSurface( window: SDL_Window )=>SDL_Surface" },
  { dao__SDL_UpdateWindowSurface, "SDL_UpdateWindowSurface( window: SDL_Window )=>int" },
  { dao__SDL_UpdateWindowSurfaceRects, "SDL_UpdateWindowSurfaceRects( window: SDL_Window, rects: SDL_Rect, numrects: int )=>int" },
  { dao__SDL_SetWindowGrab, "SDL_SetWindowGrab( window: SDL_Window, grabbed: int )" },
  { dao__SDL_GetWindowGrab, "SDL_GetWindowGrab( window: SDL_Window )=>int" },
  { dao__SDL_SetWindowBrightness, "SDL_SetWindowBrightness( window: SDL_Window, brightness: float )=>int" },
  { dao__SDL_GetWindowBrightness, "SDL_GetWindowBrightness( window: SDL_Window )=>float" },
  { dao__SDL_SetWindowGammaRamp, "SDL_SetWindowGammaRamp( window: SDL_Window, red: array<int>, green: array<int>, blue: array<int> )=>int" },
  { dao__SDL_GetWindowGammaRamp, "SDL_GetWindowGammaRamp( window: SDL_Window, red: int, green: int, blue: int )=>tuple<int,int,int,int>" },
  { dao__SDL_DestroyWindow, "SDL_DestroyWindow( window: SDL_Window )" },
  { dao__SDL_IsScreenSaverEnabled, "SDL_IsScreenSaverEnabled(  )=>int" },
  { dao__SDL_EnableScreenSaver, "SDL_EnableScreenSaver(  )" },
  { dao__SDL_DisableScreenSaver, "SDL_DisableScreenSaver(  )" },
  { dao__SDL_GL_LoadLibrary, "SDL_GL_LoadLibrary( path: string )=>int" },
  { dao__SDL_GL_GetProcAddress, "SDL_GL_GetProcAddress( proc: string )=>cdata" },
  { dao__SDL_GL_UnloadLibrary, "SDL_GL_UnloadLibrary(  )" },
  { dao__SDL_GL_ExtensionSupported, "SDL_GL_ExtensionSupported( extension: string )=>int" },
  { dao__SDL_GL_SetAttribute, "SDL_GL_SetAttribute( attr: int, value: int )=>int" },
  { dao__SDL_GL_GetAttribute, "SDL_GL_GetAttribute( attr: int, value: int )=>tuple<int,int>" },
  { dao__SDL_GL_CreateContext, "SDL_GL_CreateContext( window: SDL_Window )=>cdata" },
  { dao__SDL_GL_MakeCurrent, "SDL_GL_MakeCurrent( window: SDL_Window, context: cdata )=>int" },
  { dao__SDL_GL_GetCurrentWindow, "SDL_GL_GetCurrentWindow(  )=>SDL_Window" },
  { dao__SDL_GL_GetCurrentContext, "SDL_GL_GetCurrentContext(  )=>cdata" },
  { dao__SDL_GL_SetSwapInterval, "SDL_GL_SetSwapInterval( interval: int )=>int" },
  { dao__SDL_GL_GetSwapInterval, "SDL_GL_GetSwapInterval(  )=>int" },
  { dao__SDL_GL_SwapWindow, "SDL_GL_SwapWindow( window: SDL_Window )" },
  { dao__SDL_GL_DeleteContext, "SDL_GL_DeleteContext( context: cdata )" },
  { dao__SDL_GetKeyboardFocus, "SDL_GetKeyboardFocus(  )=>SDL_Window" },
  { dao__SDL_GetKeyboardState, "SDL_GetKeyboardState( numkeys: int )=>tuple<string,int>" },
  { dao__SDL_GetModState, "SDL_GetModState(  )=>int" },
  { dao__SDL_SetModState, "SDL_SetModState( modstate: int )" },
  { dao__SDL_GetKeyFromScancode, "SDL_GetKeyFromScancode( scancode: int )=>int" },
  { dao__SDL_GetScancodeFromKey, "SDL_GetScancodeFromKey( key: int )=>int" },
  { dao__SDL_GetScancodeName, "SDL_GetScancodeName( scancode: int )=>string" },
  { dao__SDL_GetScancodeFromName, "SDL_GetScancodeFromName( name: string )=>int" },
  { dao__SDL_GetKeyName, "SDL_GetKeyName( key: int )=>string" },
  { dao__SDL_GetKeyFromName, "SDL_GetKeyFromName( name: string )=>int" },
  { dao__SDL_StartTextInput, "SDL_StartTextInput(  )" },
  { dao__SDL_IsTextInputActive, "SDL_IsTextInputActive(  )=>int" },
  { dao__SDL_StopTextInput, "SDL_StopTextInput(  )" },
  { dao__SDL_SetTextInputRect, "SDL_SetTextInputRect( rect: SDL_Rect )" },
  { dao__SDL_HasScreenKeyboardSupport, "SDL_HasScreenKeyboardSupport(  )=>int" },
  { dao__SDL_IsScreenKeyboardShown, "SDL_IsScreenKeyboardShown( window: SDL_Window )=>int" },
  { dao__SDL_GetMouseFocus, "SDL_GetMouseFocus(  )=>SDL_Window" },
  { dao__SDL_GetMouseState, "SDL_GetMouseState( x: int, y: int )=>tuple<int,int,int>" },
  { dao__SDL_GetRelativeMouseState, "SDL_GetRelativeMouseState( x: int, y: int )=>tuple<int,int,int>" },
  { dao__SDL_WarpMouseInWindow, "SDL_WarpMouseInWindow( window: SDL_Window, x: int, y: int )" },
  { dao__SDL_SetRelativeMouseMode, "SDL_SetRelativeMouseMode( enabled: int )=>int" },
  { dao__SDL_GetRelativeMouseMode, "SDL_GetRelativeMouseMode(  )=>int" },
  { dao__SDL_CreateCursor, "SDL_CreateCursor( data: string, mask: string, w: int, h: int, hot_x: int, hot_y: int )=>SDL_Cursor" },
  { dao__SDL_CreateColorCursor, "SDL_CreateColorCursor( surface: SDL_Surface, hot_x: int, hot_y: int )=>SDL_Cursor" },
  { dao__SDL_CreateSystemCursor, "SDL_CreateSystemCursor( id: int )=>SDL_Cursor" },
  { dao__SDL_SetCursor, "SDL_SetCursor( cursor: SDL_Cursor )" },
  { dao__SDL_GetCursor, "SDL_GetCursor(  )=>SDL_Cursor" },
  { dao__SDL_GetDefaultCursor, "SDL_GetDefaultCursor(  )=>SDL_Cursor" },
  { dao__SDL_FreeCursor, "SDL_FreeCursor( cursor: SDL_Cursor )" },
  { dao__SDL_ShowCursor, "SDL_ShowCursor( toggle: int )=>int" },
  { dao__SDL_NumJoysticks, "SDL_NumJoysticks(  )=>int" },
  { dao__SDL_JoystickNameForIndex, "SDL_JoystickNameForIndex( device_index: int )=>string" },
  { dao__SDL_JoystickOpen, "SDL_JoystickOpen( device_index: int )=>_SDL_Joystick" },
  { dao__SDL_JoystickName, "SDL_JoystickName( joystick: _SDL_Joystick )=>string" },
  { dao__SDL_JoystickGetDeviceGUID, "SDL_JoystickGetDeviceGUID( device_index: int )=>SDL_JoystickGUID" },
  { dao__SDL_JoystickGetGUID, "SDL_JoystickGetGUID( joystick: _SDL_Joystick )=>SDL_JoystickGUID" },
  { dao__SDL_JoystickGetGUIDString, "SDL_JoystickGetGUIDString( guid: SDL_JoystickGUID, pszGUID: string, cbGUID: int )" },
  { dao__SDL_JoystickGetGUIDFromString, "SDL_JoystickGetGUIDFromString( pchGUID: string )=>SDL_JoystickGUID" },
  { dao__SDL_JoystickGetAttached, "SDL_JoystickGetAttached( joystick: _SDL_Joystick )=>int" },
  { dao__SDL_JoystickInstanceID, "SDL_JoystickInstanceID( joystick: _SDL_Joystick )=>int" },
  { dao__SDL_JoystickNumAxes, "SDL_JoystickNumAxes( joystick: _SDL_Joystick )=>int" },
  { dao__SDL_JoystickNumBalls, "SDL_JoystickNumBalls( joystick: _SDL_Joystick )=>int" },
  { dao__SDL_JoystickNumHats, "SDL_JoystickNumHats( joystick: _SDL_Joystick )=>int" },
  { dao__SDL_JoystickNumButtons, "SDL_JoystickNumButtons( joystick: _SDL_Joystick )=>int" },
  { dao__SDL_JoystickUpdate, "SDL_JoystickUpdate(  )" },
  { dao__SDL_JoystickEventState, "SDL_JoystickEventState( state: int )=>int" },
  { dao__SDL_JoystickGetAxis, "SDL_JoystickGetAxis( joystick: _SDL_Joystick, axis: int )=>int" },
  { dao__SDL_JoystickGetHat, "SDL_JoystickGetHat( joystick: _SDL_Joystick, hat: int )=>int" },
  { dao__SDL_JoystickGetBall, "SDL_JoystickGetBall( joystick: _SDL_Joystick, ball: int, dx: int, dy: int )=>tuple<int,int,int>" },
  { dao__SDL_JoystickGetButton, "SDL_JoystickGetButton( joystick: _SDL_Joystick, button: int )=>int" },
  { dao__SDL_JoystickClose, "SDL_JoystickClose( joystick: _SDL_Joystick )" },
  { dao__SDL_GetNumTouchDevices, "SDL_GetNumTouchDevices(  )=>int" },
  { dao__SDL_GetTouchDevice, "SDL_GetTouchDevice( index: int )=>int" },
  { dao__SDL_GetNumTouchFingers, "SDL_GetNumTouchFingers( touchID: int )=>int" },
  { dao__SDL_GetTouchFinger, "SDL_GetTouchFinger( touchID: int, index: int )=>SDL_Finger" },
  { dao__SDL_RecordGesture, "SDL_RecordGesture( touchId: int )=>int" },
  { dao__SDL_SaveAllDollarTemplates, "SDL_SaveAllDollarTemplates( src: SDL_RWops )=>int" },
  { dao__SDL_SaveDollarTemplate, "SDL_SaveDollarTemplate( gestureId: int, src: SDL_RWops )=>int" },
  { dao__SDL_LoadDollarTemplates, "SDL_LoadDollarTemplates( touchId: int, src: SDL_RWops )=>int" },
  { dao__SDL_PumpEvents, "SDL_PumpEvents(  )" },
  { dao__SDL_PeepEvents, "SDL_PeepEvents( events: SDL_Event, numevents: int, action: int, minType: int, maxType: int )=>int" },
  { dao__SDL_HasEvent, "SDL_HasEvent( type: int )=>int" },
  { dao__SDL_HasEvents, "SDL_HasEvents( minType: int, maxType: int )=>int" },
  { dao__SDL_FlushEvent, "SDL_FlushEvent( type: int )" },
  { dao__SDL_FlushEvents, "SDL_FlushEvents( minType: int, maxType: int )" },
  { dao__SDL_PollEvent, "SDL_PollEvent( event: SDL_Event )=>int" },
  { dao__SDL_WaitEvent, "SDL_WaitEvent( event: SDL_Event )=>int" },
  { dao__SDL_WaitEventTimeout, "SDL_WaitEventTimeout( event: SDL_Event, timeout: int )=>int" },
  { dao__SDL_PushEvent, "SDL_PushEvent( event: SDL_Event )=>int" },
  { dao__SDL_EventState, "SDL_EventState( type: int, state: int )=>int" },
  { dao__SDL_RegisterEvents, "SDL_RegisterEvents( numevents: int )=>int" },
  { dao__SDL_SetHintWithPriority, "SDL_SetHintWithPriority( name: string, value: string, priority: int )=>int" },
  { dao__SDL_SetHint, "SDL_SetHint( name: string, value: string )=>int" },
  { dao__SDL_GetHint, "SDL_GetHint( name: string )=>string" },
  { dao__SDL_ClearHints, "SDL_ClearHints(  )" },
  { dao__SDL_LoadObject, "SDL_LoadObject( sofile: string )=>cdata" },
  { dao__SDL_LoadFunction, "SDL_LoadFunction( handle: cdata, name: string )=>cdata" },
  { dao__SDL_UnloadObject, "SDL_UnloadObject( handle: cdata )" },
  { dao__SDL_LogSetAllPriority, "SDL_LogSetAllPriority( priority: int )" },
  { dao__SDL_LogSetPriority, "SDL_LogSetPriority( category: int, priority: int )" },
  { dao__SDL_LogGetPriority, "SDL_LogGetPriority( category: int )=>int" },
  { dao__SDL_LogResetPriorities, "SDL_LogResetPriorities(  )" },
  { dao__SDL_Log, "SDL_Log( fmt: string )" },
  { dao__SDL_LogVerbose, "SDL_LogVerbose( category: int, fmt: string )" },
  { dao__SDL_LogDebug, "SDL_LogDebug( category: int, fmt: string )" },
  { dao__SDL_LogInfo, "SDL_LogInfo( category: int, fmt: string )" },
  { dao__SDL_LogWarn, "SDL_LogWarn( category: int, fmt: string )" },
  { dao__SDL_LogError, "SDL_LogError( category: int, fmt: string )" },
  { dao__SDL_LogCritical, "SDL_LogCritical( category: int, fmt: string )" },
  { dao__SDL_LogMessage, "SDL_LogMessage( category: int, priority: int, fmt: string )" },
  { dao__SDL_GetPowerInfo, "SDL_GetPowerInfo( secs: int, pct: int )=>tuple<int,int,int>" },
  { dao__SDL_GetNumRenderDrivers, "SDL_GetNumRenderDrivers(  )=>int" },
  { dao__SDL_GetRenderDriverInfo, "SDL_GetRenderDriverInfo( index: int, info: SDL_RendererInfo )=>int" },
  { dao__SDL_CreateWindowAndRenderer, "SDL_CreateWindowAndRenderer( width: int, height: int, window_flags: int, window: SDL_Window, renderer: SDL_Renderer )=>tuple<int,SDL_Window,SDL_Renderer>" },
  { dao__SDL_CreateRenderer, "SDL_CreateRenderer( window: SDL_Window, index: int, flags: int )=>SDL_Renderer" },
  { dao__SDL_CreateSoftwareRenderer, "SDL_CreateSoftwareRenderer( surface: SDL_Surface )=>SDL_Renderer" },
  { dao__SDL_GetRenderer, "SDL_GetRenderer( window: SDL_Window )=>SDL_Renderer" },
  { dao__SDL_GetRendererInfo, "SDL_GetRendererInfo( renderer: SDL_Renderer, info: SDL_RendererInfo )=>int" },
  { dao__SDL_GetRendererOutputSize, "SDL_GetRendererOutputSize( renderer: SDL_Renderer, w: int, h: int )=>tuple<int,int,int>" },
  { dao__SDL_CreateTexture, "SDL_CreateTexture( renderer: SDL_Renderer, format: int, access: int, w: int, h: int )=>SDL_Texture" },
  { dao__SDL_CreateTextureFromSurface, "SDL_CreateTextureFromSurface( renderer: SDL_Renderer, surface: SDL_Surface )=>SDL_Texture" },
  { dao__SDL_QueryTexture, "SDL_QueryTexture( texture: SDL_Texture, format: int, access: int, w: int, h: int )=>tuple<int,int,int,int,int>" },
  { dao__SDL_SetTextureColorMod, "SDL_SetTextureColorMod( texture: SDL_Texture, r: int, g: int, b: int )=>int" },
  { dao__SDL_GetTextureColorMod, "SDL_GetTextureColorMod( texture: SDL_Texture, r: string, g: string, b: string )=>int" },
  { dao__SDL_SetTextureAlphaMod, "SDL_SetTextureAlphaMod( texture: SDL_Texture, alpha: int )=>int" },
  { dao__SDL_GetTextureAlphaMod, "SDL_GetTextureAlphaMod( texture: SDL_Texture, alpha: string )=>int" },
  { dao__SDL_SetTextureBlendMode, "SDL_SetTextureBlendMode( texture: SDL_Texture, blendMode: int )=>int" },
  { dao__SDL_GetTextureBlendMode, "SDL_GetTextureBlendMode( texture: SDL_Texture, blendMode: int )=>int" },
  { dao__SDL_UpdateTexture, "SDL_UpdateTexture( texture: SDL_Texture, rect: SDL_Rect, pixels: cdata, pitch: int )=>int" },
  { dao__SDL_UnlockTexture, "SDL_UnlockTexture( texture: SDL_Texture )" },
  { dao__SDL_RenderTargetSupported, "SDL_RenderTargetSupported( renderer: SDL_Renderer )=>int" },
  { dao__SDL_SetRenderTarget, "SDL_SetRenderTarget( renderer: SDL_Renderer, texture: SDL_Texture )=>int" },
  { dao__SDL_GetRenderTarget, "SDL_GetRenderTarget( renderer: SDL_Renderer )=>SDL_Texture" },
  { dao__SDL_RenderSetLogicalSize, "SDL_RenderSetLogicalSize( renderer: SDL_Renderer, w: int, h: int )=>int" },
  { dao__SDL_RenderGetLogicalSize, "SDL_RenderGetLogicalSize( renderer: SDL_Renderer, w: int, h: int )=>tuple<int,int>" },
  { dao__SDL_RenderSetViewport, "SDL_RenderSetViewport( renderer: SDL_Renderer, rect: SDL_Rect )=>int" },
  { dao__SDL_RenderGetViewport, "SDL_RenderGetViewport( renderer: SDL_Renderer, rect: SDL_Rect )" },
  { dao__SDL_RenderSetClipRect, "SDL_RenderSetClipRect( renderer: SDL_Renderer, rect: SDL_Rect )=>int" },
  { dao__SDL_RenderGetClipRect, "SDL_RenderGetClipRect( renderer: SDL_Renderer, rect: SDL_Rect )" },
  { dao__SDL_RenderSetScale, "SDL_RenderSetScale( renderer: SDL_Renderer, scaleX: float, scaleY: float )=>int" },
  { dao__SDL_RenderGetScale, "SDL_RenderGetScale( renderer: SDL_Renderer, scaleX: float, scaleY: float )=>tuple<float,float>" },
  { dao__SDL_SetRenderDrawColor, "SDL_SetRenderDrawColor( renderer: SDL_Renderer, r: int, g: int, b: int, a: int )=>int" },
  { dao__SDL_GetRenderDrawColor, "SDL_GetRenderDrawColor( renderer: SDL_Renderer, r: string, g: string, b: string, a: string )=>int" },
  { dao__SDL_SetRenderDrawBlendMode, "SDL_SetRenderDrawBlendMode( renderer: SDL_Renderer, blendMode: int )=>int" },
  { dao__SDL_GetRenderDrawBlendMode, "SDL_GetRenderDrawBlendMode( renderer: SDL_Renderer, blendMode: int )=>int" },
  { dao__SDL_RenderClear, "SDL_RenderClear( renderer: SDL_Renderer )=>int" },
  { dao__SDL_RenderDrawPoint, "SDL_RenderDrawPoint( renderer: SDL_Renderer, x: int, y: int )=>int" },
  { dao__SDL_RenderDrawPoints, "SDL_RenderDrawPoints( renderer: SDL_Renderer, points: SDL_Point, count: int )=>int" },
  { dao__SDL_RenderDrawLine, "SDL_RenderDrawLine( renderer: SDL_Renderer, x1: int, y1: int, x2: int, y2: int )=>int" },
  { dao__SDL_RenderDrawLines, "SDL_RenderDrawLines( renderer: SDL_Renderer, points: SDL_Point, count: int )=>int" },
  { dao__SDL_RenderDrawRect, "SDL_RenderDrawRect( renderer: SDL_Renderer, rect: SDL_Rect )=>int" },
  { dao__SDL_RenderDrawRects, "SDL_RenderDrawRects( renderer: SDL_Renderer, rects: SDL_Rect, count: int )=>int" },
  { dao__SDL_RenderFillRect, "SDL_RenderFillRect( renderer: SDL_Renderer, rect: SDL_Rect )=>int" },
  { dao__SDL_RenderFillRects, "SDL_RenderFillRects( renderer: SDL_Renderer, rects: SDL_Rect, count: int )=>int" },
  { dao__SDL_RenderCopy, "SDL_RenderCopy( renderer: SDL_Renderer, texture: SDL_Texture, srcrect: SDL_Rect|none, dstrect: SDL_Rect|none )=>int" },
  { dao__SDL_RenderCopyEx, "SDL_RenderCopyEx( renderer: SDL_Renderer, texture: SDL_Texture, srcrect: SDL_Rect, dstrect: SDL_Rect, angle: double, center: SDL_Point, flip: int )=>int" },
  { dao__SDL_RenderReadPixels, "SDL_RenderReadPixels( renderer: SDL_Renderer, rect: SDL_Rect, format: int, pixels: cdata, pitch: int )=>int" },
  { dao__SDL_RenderPresent, "SDL_RenderPresent( renderer: SDL_Renderer )" },
  { dao__SDL_DestroyTexture, "SDL_DestroyTexture( texture: SDL_Texture )" },
  { dao__SDL_DestroyRenderer, "SDL_DestroyRenderer( renderer: SDL_Renderer )" },
  { dao__SDL_GL_BindTexture, "SDL_GL_BindTexture( texture: SDL_Texture, texw: float, texh: float )=>tuple<int,float,float>" },
  { dao__SDL_GL_UnbindTexture, "SDL_GL_UnbindTexture( texture: SDL_Texture )=>int" },
  { dao__SDL_GetTicks, "SDL_GetTicks(  )=>int" },
  { dao__SDL_GetPerformanceCounter, "SDL_GetPerformanceCounter(  )=>int" },
  { dao__SDL_GetPerformanceFrequency, "SDL_GetPerformanceFrequency(  )=>int" },
  { dao__SDL_Delay, "SDL_Delay( ms: int )" },
  { dao__SDL_RemoveTimer, "SDL_RemoveTimer( id: int )=>int" },
  { dao__SDL_GetVersion, "SDL_GetVersion( ver: SDL_version )" },
  { dao__SDL_GetRevision, "SDL_GetRevision(  )=>string" },
  { dao__SDL_GetRevisionNumber, "SDL_GetRevisionNumber(  )=>int" },
  { dao__SDL_Init, "SDL_Init( flags: int )=>int" },
  { dao__SDL_InitSubSystem, "SDL_InitSubSystem( flags: int )=>int" },
  { dao__SDL_QuitSubSystem, "SDL_QuitSubSystem( flags: int )" },
  { dao__SDL_WasInit, "SDL_WasInit( flags: int )=>int" },
  { dao__SDL_Quit, "SDL_Quit(  )" },
  { NULL, NULL }
};
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_malloc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned long size = (unsigned long) DaoValue_TryGetInteger( _p[0] );

  void* _SDL_malloc = SDL_malloc( size );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_malloc, NULL );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_calloc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned long nmemb = (unsigned long) DaoValue_TryGetInteger( _p[0] );
  unsigned long size = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  void* _SDL_calloc = SDL_calloc( nmemb, size );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_calloc, NULL );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_realloc( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* mem = (void*) DaoValue_TryGetCdata( _p[0] );
  unsigned long size = (unsigned long) DaoValue_TryGetInteger( _p[1] );

  void* _SDL_realloc = SDL_realloc( mem, size );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_realloc, NULL );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_free( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* mem = (void*) DaoValue_TryGetCdata( _p[0] );

  SDL_free( mem );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_getenv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* name = (const char*) DaoValue_TryGetChars( _p[0] );

  char* _SDL_getenv = SDL_getenv( name );
  DaoProcess_PutChars( _proc, (char*) _SDL_getenv );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_setenv( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* name = (const char*) DaoValue_TryGetChars( _p[0] );
  const char* value = (const char*) DaoValue_TryGetChars( _p[1] );
  int overwrite = (int) DaoValue_TryGetInteger( _p[2] );

  int _SDL_setenv = SDL_setenv( name, value, overwrite );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_setenv );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_abs( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );

  int _SDL_abs = SDL_abs( x );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_abs );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_isdigit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );

  int _SDL_isdigit = SDL_isdigit( x );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_isdigit );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_isspace( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );

  int _SDL_isspace = SDL_isspace( x );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_isspace );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_toupper( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );

  int _SDL_toupper = SDL_toupper( x );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_toupper );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_tolower( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );

  int _SDL_tolower = SDL_tolower( x );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_tolower );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_memset( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* dst = (void*) DaoValue_TryGetCdata( _p[0] );
  int c = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned long len = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  void* _SDL_memset = SDL_memset( dst, c, len );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_memset, NULL );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_memset4( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* dst = (void*) DaoValue_TryGetCdata( _p[0] );
  int val = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned long dwords = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  SDL_memset4( dst, val, dwords );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_memcpy( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* dst = (void*) DaoValue_TryGetCdata( _p[0] );
  const void* src = (const void*) DaoValue_TryGetCdata( _p[1] );
  unsigned long len = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  void* _SDL_memcpy = SDL_memcpy( dst, src, len );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_memcpy, NULL );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_memcpy4( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* dst = (void*) DaoValue_TryGetCdata( _p[0] );
  const void* src = (const void*) DaoValue_TryGetCdata( _p[1] );
  unsigned long dwords = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  void* _SDL_memcpy4 = SDL_memcpy4( dst, src, dwords );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_memcpy4, NULL );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_memmove( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* dst = (void*) DaoValue_TryGetCdata( _p[0] );
  const void* src = (const void*) DaoValue_TryGetCdata( _p[1] );
  unsigned long len = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  void* _SDL_memmove = SDL_memmove( dst, src, len );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_memmove, NULL );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_memcmp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const void* s1 = (const void*) DaoValue_TryGetCdata( _p[0] );
  const void* s2 = (const void*) DaoValue_TryGetCdata( _p[1] );
  unsigned long len = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  int _SDL_memcmp = SDL_memcmp( s1, s2, len );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_memcmp );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_wcslen( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const int* wstr = (const int*) DaoArray_ToSInt( (DaoArray*)_p[0] );

  size_t _SDL_wcslen = SDL_wcslen( wstr );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_wcslen );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_wcslcpy( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int dst = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned long maxlen = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  const int* src = (const int*) DaoArray_ToSInt( (DaoArray*)_p[1] );

  size_t _SDL_wcslcpy = SDL_wcslcpy( &dst, src, maxlen );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_wcslcpy );
  DaoProcess_NewInteger( _proc, (daoint)dst );
  DaoProcess_PutTuple( _proc, -2 );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_wcslcat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int dst = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned long maxlen = (unsigned long) DaoValue_TryGetInteger( _p[2] );
  const int* src = (const int*) DaoArray_ToSInt( (DaoArray*)_p[1] );

  size_t _SDL_wcslcat = SDL_wcslcat( &dst, src, maxlen );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_wcslcat );
  DaoProcess_NewInteger( _proc, (daoint)dst );
  DaoProcess_PutTuple( _proc, -2 );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_strlen( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* str = (const char*) DaoValue_TryGetChars( _p[0] );

  size_t _SDL_strlen = SDL_strlen( str );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_strlen );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_strlcpy( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char* dst = (char*) DaoValue_TryGetChars( _p[0] );
  const char* src = (const char*) DaoValue_TryGetChars( _p[1] );
  unsigned long maxlen = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  size_t _SDL_strlcpy = SDL_strlcpy( dst, src, maxlen );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_strlcpy );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_utf8strlcpy( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char* dst = (char*) DaoValue_TryGetChars( _p[0] );
  const char* src = (const char*) DaoValue_TryGetChars( _p[1] );
  unsigned long dst_bytes = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  size_t _SDL_utf8strlcpy = SDL_utf8strlcpy( dst, src, dst_bytes );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_utf8strlcpy );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_strlcat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char* dst = (char*) DaoValue_TryGetChars( _p[0] );
  const char* src = (const char*) DaoValue_TryGetChars( _p[1] );
  unsigned long maxlen = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  size_t _SDL_strlcat = SDL_strlcat( dst, src, maxlen );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_strlcat );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_strdup( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* str = (const char*) DaoValue_TryGetChars( _p[0] );

  char* _SDL_strdup = SDL_strdup( str );
  DaoProcess_PutChars( _proc, (char*) _SDL_strdup );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_strrev( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char* str = (char*) DaoValue_TryGetChars( _p[0] );

  char* _SDL_strrev = SDL_strrev( str );
  DaoProcess_PutChars( _proc, (char*) _SDL_strrev );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_strupr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char* str = (char*) DaoValue_TryGetChars( _p[0] );

  char* _SDL_strupr = SDL_strupr( str );
  DaoProcess_PutChars( _proc, (char*) _SDL_strupr );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_strlwr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char* str = (char*) DaoValue_TryGetChars( _p[0] );

  char* _SDL_strlwr = SDL_strlwr( str );
  DaoProcess_PutChars( _proc, (char*) _SDL_strlwr );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_strchr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* str = (const char*) DaoValue_TryGetChars( _p[0] );
  int c = (int) DaoValue_TryGetInteger( _p[1] );

  char* _SDL_strchr = SDL_strchr( str, c );
  DaoProcess_PutChars( _proc, (char*) _SDL_strchr );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_strrchr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* str = (const char*) DaoValue_TryGetChars( _p[0] );
  int c = (int) DaoValue_TryGetInteger( _p[1] );

  char* _SDL_strrchr = SDL_strrchr( str, c );
  DaoProcess_PutChars( _proc, (char*) _SDL_strrchr );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_strstr( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* haystack = (const char*) DaoValue_TryGetChars( _p[0] );
  const char* needle = (const char*) DaoValue_TryGetChars( _p[1] );

  char* _SDL_strstr = SDL_strstr( haystack, needle );
  DaoProcess_PutChars( _proc, (char*) _SDL_strstr );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_itoa( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int value = (int) DaoValue_TryGetInteger( _p[0] );
  char* str = (char*) DaoValue_TryGetChars( _p[1] );
  int radix = (int) DaoValue_TryGetInteger( _p[2] );

  char* _SDL_itoa = SDL_itoa( value, str, radix );
  DaoProcess_PutChars( _proc, (char*) _SDL_itoa );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_uitoa( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int value = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  char* str = (char*) DaoValue_TryGetChars( _p[1] );
  int radix = (int) DaoValue_TryGetInteger( _p[2] );

  char* _SDL_uitoa = SDL_uitoa( value, str, radix );
  DaoProcess_PutChars( _proc, (char*) _SDL_uitoa );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_ltoa( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  long value = (long) DaoValue_TryGetInteger( _p[0] );
  char* str = (char*) DaoValue_TryGetChars( _p[1] );
  int radix = (int) DaoValue_TryGetInteger( _p[2] );

  char* _SDL_ltoa = SDL_ltoa( value, str, radix );
  DaoProcess_PutChars( _proc, (char*) _SDL_ltoa );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_ultoa( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned long value = (unsigned long) DaoValue_TryGetInteger( _p[0] );
  char* str = (char*) DaoValue_TryGetChars( _p[1] );
  int radix = (int) DaoValue_TryGetInteger( _p[2] );

  char* _SDL_ultoa = SDL_ultoa( value, str, radix );
  DaoProcess_PutChars( _proc, (char*) _SDL_ultoa );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_lltoa( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  long long value = (long long) DaoValue_TryGetInteger( _p[0] );
  char* str = (char*) DaoValue_TryGetChars( _p[1] );
  int radix = (int) DaoValue_TryGetInteger( _p[2] );

  char* _SDL_lltoa = SDL_lltoa( value, str, radix );
  DaoProcess_PutChars( _proc, (char*) _SDL_lltoa );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_ulltoa( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned long long value = (unsigned long long) DaoValue_TryGetInteger( _p[0] );
  char* str = (char*) DaoValue_TryGetChars( _p[1] );
  int radix = (int) DaoValue_TryGetInteger( _p[2] );

  char* _SDL_ulltoa = SDL_ulltoa( value, str, radix );
  DaoProcess_PutChars( _proc, (char*) _SDL_ulltoa );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_atoi( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* str = (const char*) DaoValue_TryGetChars( _p[0] );

  int _SDL_atoi = SDL_atoi( str );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_atoi );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_atof( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* str = (const char*) DaoValue_TryGetChars( _p[0] );

  double _SDL_atof = SDL_atof( str );
  DaoProcess_PutDouble( _proc, (double) _SDL_atof );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_strcmp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* str1 = (const char*) DaoValue_TryGetChars( _p[0] );
  const char* str2 = (const char*) DaoValue_TryGetChars( _p[1] );

  int _SDL_strcmp = SDL_strcmp( str1, str2 );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_strcmp );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_strncmp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* str1 = (const char*) DaoValue_TryGetChars( _p[0] );
  const char* str2 = (const char*) DaoValue_TryGetChars( _p[1] );
  unsigned long maxlen = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  int _SDL_strncmp = SDL_strncmp( str1, str2, maxlen );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_strncmp );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_strcasecmp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* str1 = (const char*) DaoValue_TryGetChars( _p[0] );
  const char* str2 = (const char*) DaoValue_TryGetChars( _p[1] );

  int _SDL_strcasecmp = SDL_strcasecmp( str1, str2 );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_strcasecmp );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_strncasecmp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* str1 = (const char*) DaoValue_TryGetChars( _p[0] );
  const char* str2 = (const char*) DaoValue_TryGetChars( _p[1] );
  unsigned long len = (unsigned long) DaoValue_TryGetInteger( _p[2] );

  int _SDL_strncasecmp = SDL_strncasecmp( str1, str2, len );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_strncasecmp );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_sscanf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* text = (const char*) DaoValue_TryGetChars( _p[0] );
  const char* fmt = (const char*) DaoValue_TryGetChars( _p[1] );

  int _SDL_sscanf = SDL_sscanf( text, fmt );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_sscanf );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_snprintf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  char* text = (char*) DaoValue_TryGetChars( _p[0] );
  unsigned long maxlen = (unsigned long) DaoValue_TryGetInteger( _p[1] );
  const char* fmt = (const char*) DaoValue_TryGetChars( _p[2] );

  int _SDL_snprintf = SDL_snprintf( text, maxlen, fmt );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_snprintf );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_atan( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );

  double _SDL_atan = SDL_atan( x );
  DaoProcess_PutDouble( _proc, (double) _SDL_atan );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_atan2( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );
  double y = (double) DaoValue_TryGetDouble( _p[1] );

  double _SDL_atan2 = SDL_atan2( x, y );
  DaoProcess_PutDouble( _proc, (double) _SDL_atan2 );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_ceil( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );

  double _SDL_ceil = SDL_ceil( x );
  DaoProcess_PutDouble( _proc, (double) _SDL_ceil );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_copysign( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );
  double y = (double) DaoValue_TryGetDouble( _p[1] );

  double _SDL_copysign = SDL_copysign( x, y );
  DaoProcess_PutDouble( _proc, (double) _SDL_copysign );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_cos( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );

  double _SDL_cos = SDL_cos( x );
  DaoProcess_PutDouble( _proc, (double) _SDL_cos );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_cosf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );

  float _SDL_cosf = SDL_cosf( x );
  DaoProcess_PutFloat( _proc, (float) _SDL_cosf );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_fabs( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );

  double _SDL_fabs = SDL_fabs( x );
  DaoProcess_PutDouble( _proc, (double) _SDL_fabs );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_floor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );

  double _SDL_floor = SDL_floor( x );
  DaoProcess_PutDouble( _proc, (double) _SDL_floor );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_log( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );

  double _SDL_log = SDL_log( x );
  DaoProcess_PutDouble( _proc, (double) _SDL_log );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_pow( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );
  double y = (double) DaoValue_TryGetDouble( _p[1] );

  double _SDL_pow = SDL_pow( x, y );
  DaoProcess_PutDouble( _proc, (double) _SDL_pow );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_scalbn( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );
  int n = (int) DaoValue_TryGetInteger( _p[1] );

  double _SDL_scalbn = SDL_scalbn( x, n );
  DaoProcess_PutDouble( _proc, (double) _SDL_scalbn );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_sin( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );

  double _SDL_sin = SDL_sin( x );
  DaoProcess_PutDouble( _proc, (double) _SDL_sin );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_sinf( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );

  float _SDL_sinf = SDL_sinf( x );
  DaoProcess_PutFloat( _proc, (float) _SDL_sinf );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_sqrt( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  double x = (double) DaoValue_TryGetDouble( _p[0] );

  double _SDL_sqrt = SDL_sqrt( x );
  DaoProcess_PutDouble( _proc, (double) _SDL_sqrt );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_iconv_open( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* tocode = (const char*) DaoValue_TryGetChars( _p[0] );
  const char* fromcode = (const char*) DaoValue_TryGetChars( _p[1] );

  SDL_iconv_t _SDL_iconv_open = SDL_iconv_open( tocode, fromcode );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_iconv_open, dao_type__SDL_iconv_t );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_iconv_close( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _SDL_iconv_t* cd = (struct _SDL_iconv_t*) DaoValue_TryCastCdata( _p[0], dao_type__SDL_iconv_t );

  int _SDL_iconv_close = SDL_iconv_close( cd );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_iconv_close );
}
/* /usr/local/include/SDL2/SDL_stdinc.h */
static void dao__SDL_iconv_string( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* tocode = (const char*) DaoValue_TryGetChars( _p[0] );
  const char* fromcode = (const char*) DaoValue_TryGetChars( _p[1] );
  const char* inbuf = (const char*) DaoValue_TryGetChars( _p[2] );
  unsigned long inbytesleft = (unsigned long) DaoValue_TryGetInteger( _p[3] );

  char* _SDL_iconv_string = SDL_iconv_string( tocode, fromcode, inbuf, inbytesleft );
  DaoProcess_PutChars( _proc, (char*) _SDL_iconv_string );
}
/* /usr/local/include/SDL2/SDL_main.h */
static void dao__SDL_SetMainReady( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_SetMainReady(  );
}
/* /usr/local/include/SDL2/SDL_assert.h */
static void dao__SDL_ReportAssertion( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_assert_data* _p0 = (SDL_assert_data*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_assert_data );
  const char* _p1 = (const char*) DaoValue_TryGetChars( _p[1] );
  const char* _p2 = (const char*) DaoValue_TryGetChars( _p[2] );
  int _p3 = (int) DaoValue_TryGetInteger( _p[3] );

  SDL_assert_state _SDL_ReportAssertion = SDL_ReportAssertion( _p0, _p1, _p2, _p3 );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_ReportAssertion );
}
/* /usr/local/include/SDL2/SDL_assert.h */
static void dao__SDL_GetAssertionReport( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  const struct SDL_assert_data* _SDL_GetAssertionReport = SDL_GetAssertionReport(  );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GetAssertionReport, dao_type_SDL_assert_data );
}
/* /usr/local/include/SDL2/SDL_assert.h */
static void dao__SDL_ResetAssertionReport( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_ResetAssertionReport(  );
}
/* /usr/local/include/SDL2/SDL_atomic.h */
static void dao__SDL_AtomicTryLock( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int lock = (int) DaoValue_TryGetInteger( _p[0] );

  SDL_bool _SDL_AtomicTryLock = SDL_AtomicTryLock( &lock );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_AtomicTryLock );
  DaoProcess_NewInteger( _proc, (daoint)lock );
  DaoProcess_PutTuple( _proc, -2 );
}
/* /usr/local/include/SDL2/SDL_atomic.h */
static void dao__SDL_AtomicLock( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int lock = (int) DaoValue_TryGetInteger( _p[0] );

  SDL_AtomicLock( &lock );
  DaoProcess_PutInteger( _proc, (daoint) lock );
}
/* /usr/local/include/SDL2/SDL_atomic.h */
static void dao__SDL_AtomicUnlock( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int lock = (int) DaoValue_TryGetInteger( _p[0] );

  SDL_AtomicUnlock( &lock );
  DaoProcess_PutInteger( _proc, (daoint) lock );
}
/* /usr/local/include/SDL2/SDL_atomic.h */
static void dao__SDL_AtomicGet( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_atomic_t* a = (SDL_atomic_t*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_atomic_t );

  int _SDL_AtomicGet = SDL_AtomicGet( a );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_AtomicGet );
}
/* /usr/local/include/SDL2/SDL_error.h */
static void dao__SDL_SetError( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* fmt = (const char*) DaoValue_TryGetChars( _p[0] );

  int _SDL_SetError = SDL_SetError( fmt );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetError );
}
/* /usr/local/include/SDL2/SDL_error.h */
static void dao__SDL_GetError( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  const char* _SDL_GetError = SDL_GetError(  );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetError );
}
/* /usr/local/include/SDL2/SDL_error.h */
static void dao__SDL_ClearError( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_ClearError(  );
}
/* /usr/local/include/SDL2/SDL_error.h */
static void dao__SDL_Error( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_errorcode code = (SDL_errorcode) DaoValue_TryGetInteger( _p[0] );

  int _SDL_Error = SDL_Error( code );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_Error );
}
/* /usr/local/include/SDL2/SDL_endian.h */
static void dao__SDL_Swap16( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned short x = (unsigned short) DaoValue_TryGetInteger( _p[0] );

  Uint16 _SDL_Swap16 = SDL_Swap16( x );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_Swap16 );
}
/* /usr/local/include/SDL2/SDL_endian.h */
static void dao__SDL_Swap32( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int x = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  Uint32 _SDL_Swap32 = SDL_Swap32( x );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_Swap32 );
}
/* /usr/local/include/SDL2/SDL_endian.h */
static void dao__SDL_Swap64( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned long long x = (unsigned long long) DaoValue_TryGetInteger( _p[0] );

  Uint64 _SDL_Swap64 = SDL_Swap64( x );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_Swap64 );
}
/* /usr/local/include/SDL2/SDL_endian.h */
static void dao__SDL_SwapFloat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float x = (float) DaoValue_TryGetFloat( _p[0] );

  float _SDL_SwapFloat = SDL_SwapFloat( x );
  DaoProcess_PutFloat( _proc, (float) _SDL_SwapFloat );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_CreateMutex( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct SDL_mutex* _SDL_CreateMutex = SDL_CreateMutex(  );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_CreateMutex, dao_type_SDL_mutex );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_LockMutex( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_mutex* mutex = (SDL_mutex*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_mutex );

  int _SDL_LockMutex = SDL_LockMutex( mutex );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_LockMutex );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_TryLockMutex( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_mutex* mutex = (SDL_mutex*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_mutex );

  int _SDL_TryLockMutex = SDL_TryLockMutex( mutex );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_TryLockMutex );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_UnlockMutex( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_mutex* mutex = (SDL_mutex*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_mutex );

  int _SDL_UnlockMutex = SDL_UnlockMutex( mutex );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_UnlockMutex );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_DestroyMutex( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_mutex* mutex = (SDL_mutex*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_mutex );

  SDL_DestroyMutex( mutex );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_CreateSemaphore( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int initial_value = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  struct SDL_semaphore* _SDL_CreateSemaphore = SDL_CreateSemaphore( initial_value );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_CreateSemaphore, dao_type_SDL_semaphore );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_DestroySemaphore( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_semaphore* sem = (struct SDL_semaphore*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_semaphore );

  SDL_DestroySemaphore( sem );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_SemWait( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_semaphore* sem = (struct SDL_semaphore*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_semaphore );

  int _SDL_SemWait = SDL_SemWait( sem );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SemWait );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_SemTryWait( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_semaphore* sem = (struct SDL_semaphore*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_semaphore );

  int _SDL_SemTryWait = SDL_SemTryWait( sem );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SemTryWait );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_SemWaitTimeout( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_semaphore* sem = (struct SDL_semaphore*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_semaphore );
  unsigned int ms = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  int _SDL_SemWaitTimeout = SDL_SemWaitTimeout( sem, ms );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SemWaitTimeout );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_SemPost( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_semaphore* sem = (struct SDL_semaphore*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_semaphore );

  int _SDL_SemPost = SDL_SemPost( sem );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SemPost );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_SemValue( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct SDL_semaphore* sem = (struct SDL_semaphore*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_semaphore );

  Uint32 _SDL_SemValue = SDL_SemValue( sem );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SemValue );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_CreateCond( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct SDL_cond* _SDL_CreateCond = SDL_CreateCond(  );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_CreateCond, dao_type_SDL_cond );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_DestroyCond( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_cond* cond = (SDL_cond*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_cond );

  SDL_DestroyCond( cond );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_CondSignal( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_cond* cond = (SDL_cond*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_cond );

  int _SDL_CondSignal = SDL_CondSignal( cond );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_CondSignal );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_CondBroadcast( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_cond* cond = (SDL_cond*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_cond );

  int _SDL_CondBroadcast = SDL_CondBroadcast( cond );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_CondBroadcast );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_CondWait( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_cond* cond = (SDL_cond*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_cond );
  SDL_mutex* mutex = (SDL_mutex*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_mutex );

  int _SDL_CondWait = SDL_CondWait( cond, mutex );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_CondWait );
}
/* /usr/local/include/SDL2/SDL_mutex.h */
static void dao__SDL_CondWaitTimeout( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_cond* cond = (SDL_cond*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_cond );
  SDL_mutex* mutex = (SDL_mutex*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_mutex );
  unsigned int ms = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  int _SDL_CondWaitTimeout = SDL_CondWaitTimeout( cond, mutex, ms );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_CondWaitTimeout );
}
/* /usr/local/include/SDL2/SDL_thread.h */
static void dao__SDL_GetThreadName( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Thread* thread = (SDL_Thread*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Thread );

  const char* _SDL_GetThreadName = SDL_GetThreadName( thread );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetThreadName );
}
/* /usr/local/include/SDL2/SDL_thread.h */
static void dao__SDL_ThreadID( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_threadID _SDL_ThreadID = SDL_ThreadID(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_ThreadID );
}
/* /usr/local/include/SDL2/SDL_thread.h */
static void dao__SDL_GetThreadID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Thread* thread = (SDL_Thread*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Thread );

  SDL_threadID _SDL_GetThreadID = SDL_GetThreadID( thread );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetThreadID );
}
/* /usr/local/include/SDL2/SDL_thread.h */
static void dao__SDL_SetThreadPriority( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_ThreadPriority priority = (SDL_ThreadPriority) DaoValue_TryGetInteger( _p[0] );

  int _SDL_SetThreadPriority = SDL_SetThreadPriority( priority );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetThreadPriority );
}
/* /usr/local/include/SDL2/SDL_thread.h */
static void dao__SDL_WaitThread( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Thread* thread = (SDL_Thread*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Thread );
  int status = (int) DaoValue_TryGetInteger( _p[1] );

  SDL_WaitThread( thread, &status );
  DaoProcess_PutInteger( _proc, (daoint) status );
}
/* /usr/local/include/SDL2/SDL_thread.h */
static void dao__SDL_TLSCreate( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_TLSID _SDL_TLSCreate = SDL_TLSCreate(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_TLSCreate );
}
/* /usr/local/include/SDL2/SDL_thread.h */
static void dao__SDL_TLSGet( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int id = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  void* _SDL_TLSGet = SDL_TLSGet( id );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_TLSGet, NULL );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_RWFromFile( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* file = (const char*) DaoValue_TryGetChars( _p[0] );
  const char* mode = (const char*) DaoValue_TryGetChars( _p[1] );

  struct SDL_RWops* _SDL_RWFromFile = SDL_RWFromFile( file, mode );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_RWFromFile, dao_type_SDL_RWops );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_RWFromFP( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct __sFILE* fp = (struct __sFILE*) DaoStream_GetFile( (DaoStream*)_p[0] );
  SDL_bool autoclose = (SDL_bool) DaoValue_TryGetInteger( _p[1] );

  struct SDL_RWops* _SDL_RWFromFP = SDL_RWFromFP( fp, autoclose );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_RWFromFP, dao_type_SDL_RWops );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_RWFromMem( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* mem = (void*) DaoValue_TryGetCdata( _p[0] );
  int size = (int) DaoValue_TryGetInteger( _p[1] );

  struct SDL_RWops* _SDL_RWFromMem = SDL_RWFromMem( mem, size );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_RWFromMem, dao_type_SDL_RWops );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_RWFromConstMem( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const void* mem = (const void*) DaoValue_TryGetCdata( _p[0] );
  int size = (int) DaoValue_TryGetInteger( _p[1] );

  struct SDL_RWops* _SDL_RWFromConstMem = SDL_RWFromConstMem( mem, size );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_RWFromConstMem, dao_type_SDL_RWops );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_AllocRW( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct SDL_RWops* _SDL_AllocRW = SDL_AllocRW(  );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_AllocRW, dao_type_SDL_RWops );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_FreeRW( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* area = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );

  SDL_FreeRW( area );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_ReadU8( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* src = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );

  Uint8 _SDL_ReadU8 = SDL_ReadU8( src );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_ReadU8 );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_ReadLE16( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* src = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );

  Uint16 _SDL_ReadLE16 = SDL_ReadLE16( src );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_ReadLE16 );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_ReadBE16( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* src = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );

  Uint16 _SDL_ReadBE16 = SDL_ReadBE16( src );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_ReadBE16 );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_ReadLE32( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* src = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );

  Uint32 _SDL_ReadLE32 = SDL_ReadLE32( src );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_ReadLE32 );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_ReadBE32( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* src = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );

  Uint32 _SDL_ReadBE32 = SDL_ReadBE32( src );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_ReadBE32 );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_ReadLE64( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* src = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );

  Uint64 _SDL_ReadLE64 = SDL_ReadLE64( src );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_ReadLE64 );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_ReadBE64( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* src = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );

  Uint64 _SDL_ReadBE64 = SDL_ReadBE64( src );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_ReadBE64 );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_WriteU8( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* dst = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );
  unsigned char value = (unsigned char) DaoValue_TryGetInteger( _p[1] );

  size_t _SDL_WriteU8 = SDL_WriteU8( dst, value );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_WriteU8 );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_WriteLE16( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* dst = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );
  unsigned short value = (unsigned short) DaoValue_TryGetInteger( _p[1] );

  size_t _SDL_WriteLE16 = SDL_WriteLE16( dst, value );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_WriteLE16 );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_WriteBE16( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* dst = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );
  unsigned short value = (unsigned short) DaoValue_TryGetInteger( _p[1] );

  size_t _SDL_WriteBE16 = SDL_WriteBE16( dst, value );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_WriteBE16 );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_WriteLE32( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* dst = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );
  unsigned int value = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  size_t _SDL_WriteLE32 = SDL_WriteLE32( dst, value );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_WriteLE32 );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_WriteBE32( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* dst = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );
  unsigned int value = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  size_t _SDL_WriteBE32 = SDL_WriteBE32( dst, value );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_WriteBE32 );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_WriteLE64( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* dst = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );
  unsigned long long value = (unsigned long long) DaoValue_TryGetInteger( _p[1] );

  size_t _SDL_WriteLE64 = SDL_WriteLE64( dst, value );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_WriteLE64 );
}
/* /usr/local/include/SDL2/SDL_rwops.h */
static void dao__SDL_WriteBE64( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* dst = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );
  unsigned long long value = (unsigned long long) DaoValue_TryGetInteger( _p[1] );

  size_t _SDL_WriteBE64 = SDL_WriteBE64( dst, value );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_WriteBE64 );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_GetNumAudioDrivers( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  int _SDL_GetNumAudioDrivers = SDL_GetNumAudioDrivers(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetNumAudioDrivers );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_GetAudioDriver( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int index = (int) DaoValue_TryGetInteger( _p[0] );

  const char* _SDL_GetAudioDriver = SDL_GetAudioDriver( index );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetAudioDriver );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_AudioInit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* driver_name = (const char*) DaoValue_TryGetChars( _p[0] );

  int _SDL_AudioInit = SDL_AudioInit( driver_name );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_AudioInit );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_AudioQuit( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_AudioQuit(  );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_GetCurrentAudioDriver( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  const char* _SDL_GetCurrentAudioDriver = SDL_GetCurrentAudioDriver(  );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetCurrentAudioDriver );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_OpenAudio( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioSpec* desired = (SDL_AudioSpec*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_AudioSpec );
  SDL_AudioSpec* obtained = (SDL_AudioSpec*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_AudioSpec );

  int _SDL_OpenAudio = SDL_OpenAudio( desired, obtained );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_OpenAudio );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_GetNumAudioDevices( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int iscapture = (int) DaoValue_TryGetInteger( _p[0] );

  int _SDL_GetNumAudioDevices = SDL_GetNumAudioDevices( iscapture );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetNumAudioDevices );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_GetAudioDeviceName( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int index = (int) DaoValue_TryGetInteger( _p[0] );
  int iscapture = (int) DaoValue_TryGetInteger( _p[1] );

  const char* _SDL_GetAudioDeviceName = SDL_GetAudioDeviceName( index, iscapture );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetAudioDeviceName );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_OpenAudioDevice( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* device = (const char*) DaoValue_TryGetChars( _p[0] );
  int iscapture = (int) DaoValue_TryGetInteger( _p[1] );
  SDL_AudioSpec* desired = (SDL_AudioSpec*) DaoValue_TryCastCdata( _p[2], dao_type_SDL_AudioSpec );
  SDL_AudioSpec* obtained = (SDL_AudioSpec*) DaoValue_TryCastCdata( _p[3], dao_type_SDL_AudioSpec );
  int allowed_changes = (int) DaoValue_TryGetInteger( _p[4] );

  SDL_AudioDeviceID _SDL_OpenAudioDevice = SDL_OpenAudioDevice( device, iscapture, desired, obtained, allowed_changes );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_OpenAudioDevice );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_GetAudioStatus( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_AudioStatus _SDL_GetAudioStatus = SDL_GetAudioStatus(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetAudioStatus );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_GetAudioDeviceStatus( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int dev = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  SDL_AudioStatus _SDL_GetAudioDeviceStatus = SDL_GetAudioDeviceStatus( dev );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetAudioDeviceStatus );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_PauseAudio( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int pause_on = (int) DaoValue_TryGetInteger( _p[0] );

  SDL_PauseAudio( pause_on );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_PauseAudioDevice( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int dev = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int pause_on = (int) DaoValue_TryGetInteger( _p[1] );

  SDL_PauseAudioDevice( dev, pause_on );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_FreeWAV( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned char* audio_buf = (unsigned char*) DaoValue_TryGetChars( _p[0] );

  SDL_FreeWAV( audio_buf );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_BuildAudioCVT( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT* cvt = (SDL_AudioCVT*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_AudioCVT );
  unsigned short src_format = (unsigned short) DaoValue_TryGetInteger( _p[1] );
  unsigned char src_channels = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  int src_rate = (int) DaoValue_TryGetInteger( _p[3] );
  unsigned short dst_format = (unsigned short) DaoValue_TryGetInteger( _p[4] );
  unsigned char dst_channels = (unsigned char) DaoValue_TryGetInteger( _p[5] );
  int dst_rate = (int) DaoValue_TryGetInteger( _p[6] );

  int _SDL_BuildAudioCVT = SDL_BuildAudioCVT( cvt, src_format, src_channels, src_rate, dst_format, dst_channels, dst_rate );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_BuildAudioCVT );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_ConvertAudio( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_AudioCVT* cvt = (SDL_AudioCVT*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_AudioCVT );

  int _SDL_ConvertAudio = SDL_ConvertAudio( cvt );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_ConvertAudio );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_MixAudio( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned char* dst = (unsigned char*) DaoValue_TryGetChars( _p[0] );
  const unsigned char* src = (const unsigned char*) DaoValue_TryGetChars( _p[1] );
  unsigned int len = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  int volume = (int) DaoValue_TryGetInteger( _p[3] );

  SDL_MixAudio( dst, src, len, volume );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_MixAudioFormat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned char* dst = (unsigned char*) DaoValue_TryGetChars( _p[0] );
  const unsigned char* src = (const unsigned char*) DaoValue_TryGetChars( _p[1] );
  unsigned short format = (unsigned short) DaoValue_TryGetInteger( _p[2] );
  unsigned int len = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  int volume = (int) DaoValue_TryGetInteger( _p[4] );

  SDL_MixAudioFormat( dst, src, format, len, volume );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_LockAudio( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_LockAudio(  );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_LockAudioDevice( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int dev = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  SDL_LockAudioDevice( dev );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_UnlockAudio( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_UnlockAudio(  );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_UnlockAudioDevice( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int dev = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  SDL_UnlockAudioDevice( dev );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_CloseAudio( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_CloseAudio(  );
}
/* /usr/local/include/SDL2/SDL_audio.h */
static void dao__SDL_CloseAudioDevice( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int dev = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  SDL_CloseAudioDevice( dev );
}
/* /usr/local/include/SDL2/SDL_clipboard.h */
static void dao__SDL_SetClipboardText( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* text = (const char*) DaoValue_TryGetChars( _p[0] );

  int _SDL_SetClipboardText = SDL_SetClipboardText( text );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetClipboardText );
}
/* /usr/local/include/SDL2/SDL_clipboard.h */
static void dao__SDL_GetClipboardText( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  char* _SDL_GetClipboardText = SDL_GetClipboardText(  );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetClipboardText );
}
/* /usr/local/include/SDL2/SDL_clipboard.h */
static void dao__SDL_HasClipboardText( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_bool _SDL_HasClipboardText = SDL_HasClipboardText(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_HasClipboardText );
}
/* /usr/local/include/SDL2/SDL_cpuinfo.h */
static void dao__SDL_GetCPUCount( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  int _SDL_GetCPUCount = SDL_GetCPUCount(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetCPUCount );
}
/* /usr/local/include/SDL2/SDL_cpuinfo.h */
static void dao__SDL_GetCPUCacheLineSize( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  int _SDL_GetCPUCacheLineSize = SDL_GetCPUCacheLineSize(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetCPUCacheLineSize );
}
/* /usr/local/include/SDL2/SDL_cpuinfo.h */
static void dao__SDL_HasRDTSC( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_bool _SDL_HasRDTSC = SDL_HasRDTSC(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_HasRDTSC );
}
/* /usr/local/include/SDL2/SDL_cpuinfo.h */
static void dao__SDL_HasAltiVec( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_bool _SDL_HasAltiVec = SDL_HasAltiVec(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_HasAltiVec );
}
/* /usr/local/include/SDL2/SDL_cpuinfo.h */
static void dao__SDL_HasMMX( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_bool _SDL_HasMMX = SDL_HasMMX(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_HasMMX );
}
/* /usr/local/include/SDL2/SDL_cpuinfo.h */
static void dao__SDL_Has3DNow( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_bool _SDL_Has3DNow = SDL_Has3DNow(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_Has3DNow );
}
/* /usr/local/include/SDL2/SDL_cpuinfo.h */
static void dao__SDL_HasSSE( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_bool _SDL_HasSSE = SDL_HasSSE(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_HasSSE );
}
/* /usr/local/include/SDL2/SDL_cpuinfo.h */
static void dao__SDL_HasSSE2( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_bool _SDL_HasSSE2 = SDL_HasSSE2(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_HasSSE2 );
}
/* /usr/local/include/SDL2/SDL_cpuinfo.h */
static void dao__SDL_HasSSE3( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_bool _SDL_HasSSE3 = SDL_HasSSE3(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_HasSSE3 );
}
/* /usr/local/include/SDL2/SDL_cpuinfo.h */
static void dao__SDL_HasSSE41( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_bool _SDL_HasSSE41 = SDL_HasSSE41(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_HasSSE41 );
}
/* /usr/local/include/SDL2/SDL_cpuinfo.h */
static void dao__SDL_HasSSE42( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_bool _SDL_HasSSE42 = SDL_HasSSE42(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_HasSSE42 );
}
/* /usr/local/include/SDL2/SDL_pixels.h */
static void dao__SDL_GetPixelFormatName( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  const char* _SDL_GetPixelFormatName = SDL_GetPixelFormatName( format );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetPixelFormatName );
}
/* /usr/local/include/SDL2/SDL_pixels.h */
static void dao__SDL_PixelFormatEnumToMasks( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int bpp = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int Rmask = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned int Gmask = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  unsigned int Bmask = (unsigned int) DaoValue_TryGetInteger( _p[4] );
  unsigned int Amask = (unsigned int) DaoValue_TryGetInteger( _p[5] );

  SDL_bool _SDL_PixelFormatEnumToMasks = SDL_PixelFormatEnumToMasks( format, &bpp, &Rmask, &Gmask, &Bmask, &Amask );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_PixelFormatEnumToMasks );
  DaoProcess_NewInteger( _proc, (daoint)bpp );
  DaoProcess_NewInteger( _proc, (daoint)Rmask );
  DaoProcess_NewInteger( _proc, (daoint)Gmask );
  DaoProcess_NewInteger( _proc, (daoint)Bmask );
  DaoProcess_NewInteger( _proc, (daoint)Amask );
  DaoProcess_PutTuple( _proc, -6 );
}
/* /usr/local/include/SDL2/SDL_pixels.h */
static void dao__SDL_MasksToPixelFormatEnum( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int bpp = (int) DaoValue_TryGetInteger( _p[0] );
  unsigned int Rmask = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int Gmask = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  unsigned int Bmask = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  unsigned int Amask = (unsigned int) DaoValue_TryGetInteger( _p[4] );

  Uint32 _SDL_MasksToPixelFormatEnum = SDL_MasksToPixelFormatEnum( bpp, Rmask, Gmask, Bmask, Amask );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_MasksToPixelFormatEnum );
}
/* /usr/local/include/SDL2/SDL_pixels.h */
static void dao__SDL_AllocFormat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pixel_format = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  struct SDL_PixelFormat* _SDL_AllocFormat = SDL_AllocFormat( pixel_format );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_AllocFormat, dao_type_SDL_PixelFormat );
}
/* /usr/local/include/SDL2/SDL_pixels.h */
static void dao__SDL_FreeFormat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat* format = (SDL_PixelFormat*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_PixelFormat );

  SDL_FreeFormat( format );
}
/* /usr/local/include/SDL2/SDL_pixels.h */
static void dao__SDL_AllocPalette( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int ncolors = (int) DaoValue_TryGetInteger( _p[0] );

  struct SDL_Palette* _SDL_AllocPalette = SDL_AllocPalette( ncolors );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_AllocPalette, dao_type_SDL_Palette );
}
/* /usr/local/include/SDL2/SDL_pixels.h */
static void dao__SDL_SetPixelFormatPalette( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat* format = (SDL_PixelFormat*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_PixelFormat );
  SDL_Palette* palette = (SDL_Palette*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Palette );

  int _SDL_SetPixelFormatPalette = SDL_SetPixelFormatPalette( format, palette );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetPixelFormatPalette );
}
/* /usr/local/include/SDL2/SDL_pixels.h */
static void dao__SDL_SetPaletteColors( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Palette* palette = (SDL_Palette*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Palette );
  SDL_Color* colors = (SDL_Color*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Color );
  int firstcolor = (int) DaoValue_TryGetInteger( _p[2] );
  int ncolors = (int) DaoValue_TryGetInteger( _p[3] );

  int _SDL_SetPaletteColors = SDL_SetPaletteColors( palette, colors, firstcolor, ncolors );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetPaletteColors );
}
/* /usr/local/include/SDL2/SDL_pixels.h */
static void dao__SDL_FreePalette( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Palette* palette = (SDL_Palette*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Palette );

  SDL_FreePalette( palette );
}
/* /usr/local/include/SDL2/SDL_pixels.h */
static void dao__SDL_MapRGB( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat* format = (SDL_PixelFormat*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_PixelFormat );
  unsigned char r = (unsigned char) DaoValue_TryGetInteger( _p[1] );
  unsigned char g = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  unsigned char b = (unsigned char) DaoValue_TryGetInteger( _p[3] );

  Uint32 _SDL_MapRGB = SDL_MapRGB( format, r, g, b );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_MapRGB );
}
/* /usr/local/include/SDL2/SDL_pixels.h */
static void dao__SDL_MapRGBA( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_PixelFormat* format = (SDL_PixelFormat*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_PixelFormat );
  unsigned char r = (unsigned char) DaoValue_TryGetInteger( _p[1] );
  unsigned char g = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  unsigned char b = (unsigned char) DaoValue_TryGetInteger( _p[3] );
  unsigned char a = (unsigned char) DaoValue_TryGetInteger( _p[4] );

  Uint32 _SDL_MapRGBA = SDL_MapRGBA( format, r, g, b, a );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_MapRGBA );
}
/* /usr/local/include/SDL2/SDL_pixels.h */
static void dao__SDL_GetRGB( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pixel = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  SDL_PixelFormat* format = (SDL_PixelFormat*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_PixelFormat );
  unsigned char* r = (unsigned char*) DaoValue_TryGetChars( _p[2] );
  unsigned char* g = (unsigned char*) DaoValue_TryGetChars( _p[3] );
  unsigned char* b = (unsigned char*) DaoValue_TryGetChars( _p[4] );

  SDL_GetRGB( pixel, format, r, g, b );
}
/* /usr/local/include/SDL2/SDL_pixels.h */
static void dao__SDL_GetRGBA( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int pixel = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  SDL_PixelFormat* format = (SDL_PixelFormat*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_PixelFormat );
  unsigned char* r = (unsigned char*) DaoValue_TryGetChars( _p[2] );
  unsigned char* g = (unsigned char*) DaoValue_TryGetChars( _p[3] );
  unsigned char* b = (unsigned char*) DaoValue_TryGetChars( _p[4] );
  unsigned char* a = (unsigned char*) DaoValue_TryGetChars( _p[5] );

  SDL_GetRGBA( pixel, format, r, g, b, a );
}
/* /usr/local/include/SDL2/SDL_pixels.h */
static void dao__SDL_CalculateGammaRamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  float gamma = (float) DaoValue_TryGetFloat( _p[0] );
  unsigned short ramp = (unsigned short) DaoValue_TryGetInteger( _p[1] );

  SDL_CalculateGammaRamp( gamma, &ramp );
  DaoProcess_PutInteger( _proc, (daoint) ramp );
}
/* /usr/local/include/SDL2/SDL_rect.h */
static void dao__SDL_RectEmpty( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect* r = (SDL_Rect*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Rect );

  SDL_bool _SDL_RectEmpty = SDL_RectEmpty( r );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RectEmpty );
}
/* /usr/local/include/SDL2/SDL_rect.h */
static void dao__SDL_RectEquals( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect* a = (SDL_Rect*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Rect );
  SDL_Rect* b = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );

  SDL_bool _SDL_RectEquals = SDL_RectEquals( a, b );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RectEquals );
}
/* /usr/local/include/SDL2/SDL_rect.h */
static void dao__SDL_HasIntersection( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect* A = (SDL_Rect*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Rect );
  SDL_Rect* B = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );

  SDL_bool _SDL_HasIntersection = SDL_HasIntersection( A, B );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_HasIntersection );
}
/* /usr/local/include/SDL2/SDL_rect.h */
static void dao__SDL_IntersectRect( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect* A = (SDL_Rect*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Rect );
  SDL_Rect* B = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );
  SDL_Rect* result = (SDL_Rect*) DaoValue_TryCastCdata( _p[2], dao_type_SDL_Rect );

  SDL_bool _SDL_IntersectRect = SDL_IntersectRect( A, B, result );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_IntersectRect );
}
/* /usr/local/include/SDL2/SDL_rect.h */
static void dao__SDL_UnionRect( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect* A = (SDL_Rect*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Rect );
  SDL_Rect* B = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );
  SDL_Rect* result = (SDL_Rect*) DaoValue_TryCastCdata( _p[2], dao_type_SDL_Rect );

  SDL_UnionRect( A, B, result );
}
/* /usr/local/include/SDL2/SDL_rect.h */
static void dao__SDL_EnclosePoints( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Point* points = (SDL_Point*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Point );
  int count = (int) DaoValue_TryGetInteger( _p[1] );
  SDL_Rect* clip = (SDL_Rect*) DaoValue_TryCastCdata( _p[2], dao_type_SDL_Rect );
  SDL_Rect* result = (SDL_Rect*) DaoValue_TryCastCdata( _p[3], dao_type_SDL_Rect );

  SDL_bool _SDL_EnclosePoints = SDL_EnclosePoints( points, count, clip, result );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_EnclosePoints );
}
/* /usr/local/include/SDL2/SDL_rect.h */
static void dao__SDL_IntersectRectAndLine( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect* rect = (SDL_Rect*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Rect );
  int X1 = (int) DaoValue_TryGetInteger( _p[1] );
  int Y1 = (int) DaoValue_TryGetInteger( _p[2] );
  int X2 = (int) DaoValue_TryGetInteger( _p[3] );
  int Y2 = (int) DaoValue_TryGetInteger( _p[4] );

  SDL_bool _SDL_IntersectRectAndLine = SDL_IntersectRectAndLine( rect, &X1, &Y1, &X2, &Y2 );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_IntersectRectAndLine );
  DaoProcess_NewInteger( _proc, (daoint)X1 );
  DaoProcess_NewInteger( _proc, (daoint)Y1 );
  DaoProcess_NewInteger( _proc, (daoint)X2 );
  DaoProcess_NewInteger( _proc, (daoint)Y2 );
  DaoProcess_PutTuple( _proc, -5 );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_CreateRGBSurface( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int flags = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int width = (int) DaoValue_TryGetInteger( _p[1] );
  int height = (int) DaoValue_TryGetInteger( _p[2] );
  int depth = (int) DaoValue_TryGetInteger( _p[3] );
  unsigned int Rmask = (unsigned int) DaoValue_TryGetInteger( _p[4] );
  unsigned int Gmask = (unsigned int) DaoValue_TryGetInteger( _p[5] );
  unsigned int Bmask = (unsigned int) DaoValue_TryGetInteger( _p[6] );
  unsigned int Amask = (unsigned int) DaoValue_TryGetInteger( _p[7] );

  struct SDL_Surface* _SDL_CreateRGBSurface = SDL_CreateRGBSurface( flags, width, height, depth, Rmask, Gmask, Bmask, Amask );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_CreateRGBSurface, dao_type_SDL_Surface );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_CreateRGBSurfaceFrom( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* pixels = (void*) DaoValue_TryGetCdata( _p[0] );
  int width = (int) DaoValue_TryGetInteger( _p[1] );
  int height = (int) DaoValue_TryGetInteger( _p[2] );
  int depth = (int) DaoValue_TryGetInteger( _p[3] );
  int pitch = (int) DaoValue_TryGetInteger( _p[4] );
  unsigned int Rmask = (unsigned int) DaoValue_TryGetInteger( _p[5] );
  unsigned int Gmask = (unsigned int) DaoValue_TryGetInteger( _p[6] );
  unsigned int Bmask = (unsigned int) DaoValue_TryGetInteger( _p[7] );
  unsigned int Amask = (unsigned int) DaoValue_TryGetInteger( _p[8] );

  struct SDL_Surface* _SDL_CreateRGBSurfaceFrom = SDL_CreateRGBSurfaceFrom( pixels, width, height, depth, pitch, Rmask, Gmask, Bmask, Amask );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_CreateRGBSurfaceFrom, dao_type_SDL_Surface );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_FreeSurface( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );

  SDL_FreeSurface( surface );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_SetSurfacePalette( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  SDL_Palette* palette = (SDL_Palette*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Palette );

  int _SDL_SetSurfacePalette = SDL_SetSurfacePalette( surface, palette );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetSurfacePalette );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_LockSurface( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );

  int _SDL_LockSurface = SDL_LockSurface( surface );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_LockSurface );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_UnlockSurface( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );

  SDL_UnlockSurface( surface );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_LoadBMP_RW( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* src = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );
  int freesrc = (int) DaoValue_TryGetInteger( _p[1] );

  struct SDL_Surface* _SDL_LoadBMP_RW = SDL_LoadBMP_RW( src, freesrc );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_LoadBMP_RW, dao_type_SDL_Surface );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_SaveBMP_RW( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  SDL_RWops* dst = (SDL_RWops*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_RWops );
  int freedst = (int) DaoValue_TryGetInteger( _p[2] );

  int _SDL_SaveBMP_RW = SDL_SaveBMP_RW( surface, dst, freedst );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SaveBMP_RW );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_SetSurfaceRLE( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  int flag = (int) DaoValue_TryGetInteger( _p[1] );

  int _SDL_SetSurfaceRLE = SDL_SetSurfaceRLE( surface, flag );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetSurfaceRLE );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_SetColorKey( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  int flag = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int key = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  int _SDL_SetColorKey = SDL_SetColorKey( surface, flag, key );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetColorKey );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_GetColorKey( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  unsigned int key = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  int _SDL_GetColorKey = SDL_GetColorKey( surface, &key );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_GetColorKey );
  DaoProcess_NewInteger( _proc, (daoint)key );
  DaoProcess_PutTuple( _proc, -2 );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_SetSurfaceColorMod( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  unsigned char r = (unsigned char) DaoValue_TryGetInteger( _p[1] );
  unsigned char g = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  unsigned char b = (unsigned char) DaoValue_TryGetInteger( _p[3] );

  int _SDL_SetSurfaceColorMod = SDL_SetSurfaceColorMod( surface, r, g, b );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetSurfaceColorMod );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_GetSurfaceColorMod( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  unsigned char* r = (unsigned char*) DaoValue_TryGetChars( _p[1] );
  unsigned char* g = (unsigned char*) DaoValue_TryGetChars( _p[2] );
  unsigned char* b = (unsigned char*) DaoValue_TryGetChars( _p[3] );

  int _SDL_GetSurfaceColorMod = SDL_GetSurfaceColorMod( surface, r, g, b );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetSurfaceColorMod );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_SetSurfaceAlphaMod( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  unsigned char alpha = (unsigned char) DaoValue_TryGetInteger( _p[1] );

  int _SDL_SetSurfaceAlphaMod = SDL_SetSurfaceAlphaMod( surface, alpha );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetSurfaceAlphaMod );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_GetSurfaceAlphaMod( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  unsigned char* alpha = (unsigned char*) DaoValue_TryGetChars( _p[1] );

  int _SDL_GetSurfaceAlphaMod = SDL_GetSurfaceAlphaMod( surface, alpha );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetSurfaceAlphaMod );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_SetSurfaceBlendMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  SDL_BlendMode blendMode = (SDL_BlendMode) DaoValue_TryGetInteger( _p[1] );

  int _SDL_SetSurfaceBlendMode = SDL_SetSurfaceBlendMode( surface, blendMode );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetSurfaceBlendMode );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_GetSurfaceBlendMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  SDL_BlendMode blendMode = (SDL_BlendMode) DaoValue_TryGetInteger( _p[1] );

  int _SDL_GetSurfaceBlendMode = SDL_GetSurfaceBlendMode( surface, &blendMode );
  DaoProcess_NewInteger( _proc, (daoint)blendMode );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetSurfaceBlendMode );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_SetClipRect( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  SDL_Rect* rect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );

  SDL_bool _SDL_SetClipRect = SDL_SetClipRect( surface, rect );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetClipRect );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_GetClipRect( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  SDL_Rect* rect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );

  SDL_GetClipRect( surface, rect );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_ConvertSurface( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* src = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  SDL_PixelFormat* fmt = (SDL_PixelFormat*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_PixelFormat );
  unsigned int flags = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  struct SDL_Surface* _SDL_ConvertSurface = SDL_ConvertSurface( src, fmt, flags );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_ConvertSurface, dao_type_SDL_Surface );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_ConvertSurfaceFormat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* src = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  unsigned int pixel_format = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  unsigned int flags = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  struct SDL_Surface* _SDL_ConvertSurfaceFormat = SDL_ConvertSurfaceFormat( src, pixel_format, flags );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_ConvertSurfaceFormat, dao_type_SDL_Surface );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_ConvertPixels( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int width = (int) DaoValue_TryGetInteger( _p[0] );
  int height = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int src_format = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  const void* src = (const void*) DaoValue_TryGetCdata( _p[3] );
  int src_pitch = (int) DaoValue_TryGetInteger( _p[4] );
  unsigned int dst_format = (unsigned int) DaoValue_TryGetInteger( _p[5] );
  void* dst = (void*) DaoValue_TryGetCdata( _p[6] );
  int dst_pitch = (int) DaoValue_TryGetInteger( _p[7] );

  int _SDL_ConvertPixels = SDL_ConvertPixels( width, height, src_format, src, src_pitch, dst_format, dst, dst_pitch );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_ConvertPixels );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_FillRect( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* dst = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  SDL_Rect* rect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );
  unsigned int color = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  int _SDL_FillRect = SDL_FillRect( dst, rect, color );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_FillRect );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_FillRects( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* dst = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  SDL_Rect* rects = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );
  int count = (int) DaoValue_TryGetInteger( _p[2] );
  unsigned int color = (unsigned int) DaoValue_TryGetInteger( _p[3] );

  int _SDL_FillRects = SDL_FillRects( dst, rects, count, color );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_FillRects );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_UpperBlit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* src = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  SDL_Rect* srcrect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );
  SDL_Surface* dst = (SDL_Surface*) DaoValue_TryCastCdata( _p[2], dao_type_SDL_Surface );
  SDL_Rect* dstrect = (SDL_Rect*) DaoValue_TryCastCdata( _p[3], dao_type_SDL_Rect );

  int _SDL_UpperBlit = SDL_UpperBlit( src, srcrect, dst, dstrect );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_UpperBlit );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_LowerBlit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* src = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  SDL_Rect* srcrect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );
  SDL_Surface* dst = (SDL_Surface*) DaoValue_TryCastCdata( _p[2], dao_type_SDL_Surface );
  SDL_Rect* dstrect = (SDL_Rect*) DaoValue_TryCastCdata( _p[3], dao_type_SDL_Rect );

  int _SDL_LowerBlit = SDL_LowerBlit( src, srcrect, dst, dstrect );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_LowerBlit );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_SoftStretch( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* src = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  SDL_Rect* srcrect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );
  SDL_Surface* dst = (SDL_Surface*) DaoValue_TryCastCdata( _p[2], dao_type_SDL_Surface );
  SDL_Rect* dstrect = (SDL_Rect*) DaoValue_TryCastCdata( _p[3], dao_type_SDL_Rect );

  int _SDL_SoftStretch = SDL_SoftStretch( src, srcrect, dst, dstrect );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SoftStretch );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_UpperBlitScaled( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* src = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  SDL_Rect* srcrect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );
  SDL_Surface* dst = (SDL_Surface*) DaoValue_TryCastCdata( _p[2], dao_type_SDL_Surface );
  SDL_Rect* dstrect = (SDL_Rect*) DaoValue_TryCastCdata( _p[3], dao_type_SDL_Rect );

  int _SDL_UpperBlitScaled = SDL_UpperBlitScaled( src, srcrect, dst, dstrect );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_UpperBlitScaled );
}
/* /usr/local/include/SDL2/SDL_surface.h */
static void dao__SDL_LowerBlitScaled( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* src = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  SDL_Rect* srcrect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );
  SDL_Surface* dst = (SDL_Surface*) DaoValue_TryCastCdata( _p[2], dao_type_SDL_Surface );
  SDL_Rect* dstrect = (SDL_Rect*) DaoValue_TryCastCdata( _p[3], dao_type_SDL_Rect );

  int _SDL_LowerBlitScaled = SDL_LowerBlitScaled( src, srcrect, dst, dstrect );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_LowerBlitScaled );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetNumVideoDrivers( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  int _SDL_GetNumVideoDrivers = SDL_GetNumVideoDrivers(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetNumVideoDrivers );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetVideoDriver( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int index = (int) DaoValue_TryGetInteger( _p[0] );

  const char* _SDL_GetVideoDriver = SDL_GetVideoDriver( index );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetVideoDriver );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_VideoInit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* driver_name = (const char*) DaoValue_TryGetChars( _p[0] );

  int _SDL_VideoInit = SDL_VideoInit( driver_name );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_VideoInit );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_VideoQuit( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_VideoQuit(  );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetCurrentVideoDriver( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  const char* _SDL_GetCurrentVideoDriver = SDL_GetCurrentVideoDriver(  );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetCurrentVideoDriver );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetNumVideoDisplays( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  int _SDL_GetNumVideoDisplays = SDL_GetNumVideoDisplays(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetNumVideoDisplays );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetDisplayName( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int displayIndex = (int) DaoValue_TryGetInteger( _p[0] );

  const char* _SDL_GetDisplayName = SDL_GetDisplayName( displayIndex );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetDisplayName );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetDisplayBounds( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int displayIndex = (int) DaoValue_TryGetInteger( _p[0] );
  SDL_Rect* rect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );

  int _SDL_GetDisplayBounds = SDL_GetDisplayBounds( displayIndex, rect );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetDisplayBounds );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetNumDisplayModes( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int displayIndex = (int) DaoValue_TryGetInteger( _p[0] );

  int _SDL_GetNumDisplayModes = SDL_GetNumDisplayModes( displayIndex );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetNumDisplayModes );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetDisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int displayIndex = (int) DaoValue_TryGetInteger( _p[0] );
  int modeIndex = (int) DaoValue_TryGetInteger( _p[1] );
  SDL_DisplayMode* mode = (SDL_DisplayMode*) DaoValue_TryCastCdata( _p[2], dao_type_SDL_DisplayMode );

  int _SDL_GetDisplayMode = SDL_GetDisplayMode( displayIndex, modeIndex, mode );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetDisplayMode );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetDesktopDisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int displayIndex = (int) DaoValue_TryGetInteger( _p[0] );
  SDL_DisplayMode* mode = (SDL_DisplayMode*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_DisplayMode );

  int _SDL_GetDesktopDisplayMode = SDL_GetDesktopDisplayMode( displayIndex, mode );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetDesktopDisplayMode );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetCurrentDisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int displayIndex = (int) DaoValue_TryGetInteger( _p[0] );
  SDL_DisplayMode* mode = (SDL_DisplayMode*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_DisplayMode );

  int _SDL_GetCurrentDisplayMode = SDL_GetCurrentDisplayMode( displayIndex, mode );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetCurrentDisplayMode );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetClosestDisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int displayIndex = (int) DaoValue_TryGetInteger( _p[0] );
  SDL_DisplayMode* mode = (SDL_DisplayMode*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_DisplayMode );
  SDL_DisplayMode* closest = (SDL_DisplayMode*) DaoValue_TryCastCdata( _p[2], dao_type_SDL_DisplayMode );

  SDL_DisplayMode* _SDL_GetClosestDisplayMode = SDL_GetClosestDisplayMode( displayIndex, mode, closest );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GetClosestDisplayMode, dao_type_SDL_DisplayMode );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowDisplayIndex( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  int _SDL_GetWindowDisplayIndex = SDL_GetWindowDisplayIndex( window );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetWindowDisplayIndex );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_SetWindowDisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  SDL_DisplayMode* mode = (SDL_DisplayMode*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_DisplayMode );

  int _SDL_SetWindowDisplayMode = SDL_SetWindowDisplayMode( window, mode );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetWindowDisplayMode );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowDisplayMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  SDL_DisplayMode* mode = (SDL_DisplayMode*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_DisplayMode );

  int _SDL_GetWindowDisplayMode = SDL_GetWindowDisplayMode( window, mode );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetWindowDisplayMode );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowPixelFormat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  Uint32 _SDL_GetWindowPixelFormat = SDL_GetWindowPixelFormat( window );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetWindowPixelFormat );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_CreateWindow( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* title = (const char*) DaoValue_TryGetChars( _p[0] );
  int x = (int) DaoValue_TryGetInteger( _p[1] );
  int y = (int) DaoValue_TryGetInteger( _p[2] );
  int w = (int) DaoValue_TryGetInteger( _p[3] );
  int h = (int) DaoValue_TryGetInteger( _p[4] );
  unsigned int flags = (unsigned int) DaoValue_TryGetInteger( _p[5] );

  struct SDL_Window* _SDL_CreateWindow = SDL_CreateWindow( title, x, y, w, h, flags );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_CreateWindow, dao_type_SDL_Window );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_CreateWindowFrom( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const void* data = (const void*) DaoValue_TryGetCdata( _p[0] );

  struct SDL_Window* _SDL_CreateWindowFrom = SDL_CreateWindowFrom( data );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_CreateWindowFrom, dao_type_SDL_Window );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  Uint32 _SDL_GetWindowID = SDL_GetWindowID( window );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetWindowID );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowFromID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int id = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  struct SDL_Window* _SDL_GetWindowFromID = SDL_GetWindowFromID( id );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GetWindowFromID, dao_type_SDL_Window );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowFlags( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  Uint32 _SDL_GetWindowFlags = SDL_GetWindowFlags( window );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetWindowFlags );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_SetWindowTitle( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  const char* title = (const char*) DaoValue_TryGetChars( _p[1] );

  SDL_SetWindowTitle( window, title );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowTitle( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  const char* _SDL_GetWindowTitle = SDL_GetWindowTitle( window );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetWindowTitle );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_SetWindowIcon( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  SDL_Surface* icon = (SDL_Surface*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Surface );

  SDL_SetWindowIcon( window, icon );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_SetWindowData( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  const char* name = (const char*) DaoValue_TryGetChars( _p[1] );
  void* userdata = (void*) DaoValue_TryGetCdata( _p[2] );

  void* _SDL_SetWindowData = SDL_SetWindowData( window, name, userdata );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_SetWindowData, NULL );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowData( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  const char* name = (const char*) DaoValue_TryGetChars( _p[1] );

  void* _SDL_GetWindowData = SDL_GetWindowData( window, name );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GetWindowData, NULL );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_SetWindowPosition( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  int x = (int) DaoValue_TryGetInteger( _p[1] );
  int y = (int) DaoValue_TryGetInteger( _p[2] );

  SDL_SetWindowPosition( window, x, y );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowPosition( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  int x = (int) DaoValue_TryGetInteger( _p[1] );
  int y = (int) DaoValue_TryGetInteger( _p[2] );

  SDL_GetWindowPosition( window, &x, &y );
  DaoProcess_NewInteger( _proc, (daoint)x );
  DaoProcess_NewInteger( _proc, (daoint)y );
  DaoProcess_PutTuple( _proc, -2 );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_SetWindowSize( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  int w = (int) DaoValue_TryGetInteger( _p[1] );
  int h = (int) DaoValue_TryGetInteger( _p[2] );

  SDL_SetWindowSize( window, w, h );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowSize( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  int w = (int) DaoValue_TryGetInteger( _p[1] );
  int h = (int) DaoValue_TryGetInteger( _p[2] );

  SDL_GetWindowSize( window, &w, &h );
  DaoProcess_NewInteger( _proc, (daoint)w );
  DaoProcess_NewInteger( _proc, (daoint)h );
  DaoProcess_PutTuple( _proc, -2 );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_SetWindowMinimumSize( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  int min_w = (int) DaoValue_TryGetInteger( _p[1] );
  int min_h = (int) DaoValue_TryGetInteger( _p[2] );

  SDL_SetWindowMinimumSize( window, min_w, min_h );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowMinimumSize( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  int w = (int) DaoValue_TryGetInteger( _p[1] );
  int h = (int) DaoValue_TryGetInteger( _p[2] );

  SDL_GetWindowMinimumSize( window, &w, &h );
  DaoProcess_NewInteger( _proc, (daoint)w );
  DaoProcess_NewInteger( _proc, (daoint)h );
  DaoProcess_PutTuple( _proc, -2 );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_SetWindowMaximumSize( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  int max_w = (int) DaoValue_TryGetInteger( _p[1] );
  int max_h = (int) DaoValue_TryGetInteger( _p[2] );

  SDL_SetWindowMaximumSize( window, max_w, max_h );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowMaximumSize( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  int w = (int) DaoValue_TryGetInteger( _p[1] );
  int h = (int) DaoValue_TryGetInteger( _p[2] );

  SDL_GetWindowMaximumSize( window, &w, &h );
  DaoProcess_NewInteger( _proc, (daoint)w );
  DaoProcess_NewInteger( _proc, (daoint)h );
  DaoProcess_PutTuple( _proc, -2 );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_SetWindowBordered( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  SDL_bool bordered = (SDL_bool) DaoValue_TryGetInteger( _p[1] );

  SDL_SetWindowBordered( window, bordered );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_ShowWindow( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  SDL_ShowWindow( window );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_HideWindow( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  SDL_HideWindow( window );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_RaiseWindow( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  SDL_RaiseWindow( window );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_MaximizeWindow( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  SDL_MaximizeWindow( window );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_MinimizeWindow( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  SDL_MinimizeWindow( window );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_RestoreWindow( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  SDL_RestoreWindow( window );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_SetWindowFullscreen( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  unsigned int flags = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  int _SDL_SetWindowFullscreen = SDL_SetWindowFullscreen( window, flags );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetWindowFullscreen );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowSurface( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  struct SDL_Surface* _SDL_GetWindowSurface = SDL_GetWindowSurface( window );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GetWindowSurface, dao_type_SDL_Surface );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_UpdateWindowSurface( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  int _SDL_UpdateWindowSurface = SDL_UpdateWindowSurface( window );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_UpdateWindowSurface );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_UpdateWindowSurfaceRects( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  SDL_Rect* rects = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );
  int numrects = (int) DaoValue_TryGetInteger( _p[2] );

  int _SDL_UpdateWindowSurfaceRects = SDL_UpdateWindowSurfaceRects( window, rects, numrects );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_UpdateWindowSurfaceRects );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_SetWindowGrab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  SDL_bool grabbed = (SDL_bool) DaoValue_TryGetInteger( _p[1] );

  SDL_SetWindowGrab( window, grabbed );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowGrab( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  SDL_bool _SDL_GetWindowGrab = SDL_GetWindowGrab( window );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetWindowGrab );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_SetWindowBrightness( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  float brightness = (float) DaoValue_TryGetFloat( _p[1] );

  int _SDL_SetWindowBrightness = SDL_SetWindowBrightness( window, brightness );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetWindowBrightness );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowBrightness( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  float _SDL_GetWindowBrightness = SDL_GetWindowBrightness( window );
  DaoProcess_PutFloat( _proc, (float) _SDL_GetWindowBrightness );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_SetWindowGammaRamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  const unsigned short* blue = (const unsigned short*) DaoArray_ToUShort( (DaoArray*)_p[3] );
  const unsigned short* green = (const unsigned short*) DaoArray_ToUShort( (DaoArray*)_p[2] );
  const unsigned short* red = (const unsigned short*) DaoArray_ToUShort( (DaoArray*)_p[1] );

  int _SDL_SetWindowGammaRamp = SDL_SetWindowGammaRamp( window, red, green, blue );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetWindowGammaRamp );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GetWindowGammaRamp( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  unsigned short red = (unsigned short) DaoValue_TryGetInteger( _p[1] );
  unsigned short green = (unsigned short) DaoValue_TryGetInteger( _p[2] );
  unsigned short blue = (unsigned short) DaoValue_TryGetInteger( _p[3] );

  int _SDL_GetWindowGammaRamp = SDL_GetWindowGammaRamp( window, &red, &green, &blue );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_GetWindowGammaRamp );
  DaoProcess_NewInteger( _proc, (daoint)red );
  DaoProcess_NewInteger( _proc, (daoint)green );
  DaoProcess_NewInteger( _proc, (daoint)blue );
  DaoProcess_PutTuple( _proc, -4 );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_DestroyWindow( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  SDL_DestroyWindow( window );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_IsScreenSaverEnabled( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_bool _SDL_IsScreenSaverEnabled = SDL_IsScreenSaverEnabled(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_IsScreenSaverEnabled );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_EnableScreenSaver( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_EnableScreenSaver(  );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_DisableScreenSaver( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_DisableScreenSaver(  );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GL_LoadLibrary( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* path = (const char*) DaoValue_TryGetChars( _p[0] );

  int _SDL_GL_LoadLibrary = SDL_GL_LoadLibrary( path );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GL_LoadLibrary );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GL_GetProcAddress( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* proc = (const char*) DaoValue_TryGetChars( _p[0] );

  void* _SDL_GL_GetProcAddress = SDL_GL_GetProcAddress( proc );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GL_GetProcAddress, NULL );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GL_UnloadLibrary( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_GL_UnloadLibrary(  );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GL_ExtensionSupported( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* extension = (const char*) DaoValue_TryGetChars( _p[0] );

  SDL_bool _SDL_GL_ExtensionSupported = SDL_GL_ExtensionSupported( extension );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GL_ExtensionSupported );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GL_SetAttribute( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_GLattr attr = (SDL_GLattr) DaoValue_TryGetInteger( _p[0] );
  int value = (int) DaoValue_TryGetInteger( _p[1] );

  int _SDL_GL_SetAttribute = SDL_GL_SetAttribute( attr, value );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GL_SetAttribute );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GL_GetAttribute( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_GLattr attr = (SDL_GLattr) DaoValue_TryGetInteger( _p[0] );
  int value = (int) DaoValue_TryGetInteger( _p[1] );

  int _SDL_GL_GetAttribute = SDL_GL_GetAttribute( attr, &value );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_GL_GetAttribute );
  DaoProcess_NewInteger( _proc, (daoint)value );
  DaoProcess_PutTuple( _proc, -2 );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GL_CreateContext( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  SDL_GLContext _SDL_GL_CreateContext = SDL_GL_CreateContext( window );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GL_CreateContext, NULL );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GL_MakeCurrent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  void* context = (void*) DaoValue_TryGetCdata( _p[1] );

  int _SDL_GL_MakeCurrent = SDL_GL_MakeCurrent( window, context );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GL_MakeCurrent );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GL_GetCurrentWindow( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct SDL_Window* _SDL_GL_GetCurrentWindow = SDL_GL_GetCurrentWindow(  );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GL_GetCurrentWindow, dao_type_SDL_Window );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GL_GetCurrentContext( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_GLContext _SDL_GL_GetCurrentContext = SDL_GL_GetCurrentContext(  );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GL_GetCurrentContext, NULL );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GL_SetSwapInterval( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int interval = (int) DaoValue_TryGetInteger( _p[0] );

  int _SDL_GL_SetSwapInterval = SDL_GL_SetSwapInterval( interval );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GL_SetSwapInterval );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GL_GetSwapInterval( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  int _SDL_GL_GetSwapInterval = SDL_GL_GetSwapInterval(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GL_GetSwapInterval );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GL_SwapWindow( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  SDL_GL_SwapWindow( window );
}
/* /usr/local/include/SDL2/SDL_video.h */
static void dao__SDL_GL_DeleteContext( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* context = (void*) DaoValue_TryGetCdata( _p[0] );

  SDL_GL_DeleteContext( context );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_GetKeyboardFocus( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct SDL_Window* _SDL_GetKeyboardFocus = SDL_GetKeyboardFocus(  );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GetKeyboardFocus, dao_type_SDL_Window );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_GetKeyboardState( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int numkeys = (int) DaoValue_TryGetInteger( _p[0] );

  const unsigned char* _SDL_GetKeyboardState = SDL_GetKeyboardState( &numkeys );
  DaoProcess_NewString( _proc, (char*) _SDL_GetKeyboardState, -1 );
  DaoProcess_NewInteger( _proc, (daoint)numkeys );
  DaoProcess_PutTuple( _proc, -2 );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_GetModState( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_Keymod _SDL_GetModState = SDL_GetModState(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetModState );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_SetModState( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Keymod modstate = (SDL_Keymod) DaoValue_TryGetInteger( _p[0] );

  SDL_SetModState( modstate );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_GetKeyFromScancode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Scancode scancode = (SDL_Scancode) DaoValue_TryGetInteger( _p[0] );

  SDL_Keycode _SDL_GetKeyFromScancode = SDL_GetKeyFromScancode( scancode );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetKeyFromScancode );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_GetScancodeFromKey( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int key = (int) DaoValue_TryGetInteger( _p[0] );

  SDL_Scancode _SDL_GetScancodeFromKey = SDL_GetScancodeFromKey( key );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetScancodeFromKey );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_GetScancodeName( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Scancode scancode = (SDL_Scancode) DaoValue_TryGetInteger( _p[0] );

  const char* _SDL_GetScancodeName = SDL_GetScancodeName( scancode );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetScancodeName );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_GetScancodeFromName( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* name = (const char*) DaoValue_TryGetChars( _p[0] );

  SDL_Scancode _SDL_GetScancodeFromName = SDL_GetScancodeFromName( name );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetScancodeFromName );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_GetKeyName( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int key = (int) DaoValue_TryGetInteger( _p[0] );

  const char* _SDL_GetKeyName = SDL_GetKeyName( key );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetKeyName );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_GetKeyFromName( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* name = (const char*) DaoValue_TryGetChars( _p[0] );

  SDL_Keycode _SDL_GetKeyFromName = SDL_GetKeyFromName( name );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetKeyFromName );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_StartTextInput( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_StartTextInput(  );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_IsTextInputActive( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_bool _SDL_IsTextInputActive = SDL_IsTextInputActive(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_IsTextInputActive );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_StopTextInput( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_StopTextInput(  );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_SetTextInputRect( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Rect* rect = (SDL_Rect*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Rect );

  SDL_SetTextInputRect( rect );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_HasScreenKeyboardSupport( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_bool _SDL_HasScreenKeyboardSupport = SDL_HasScreenKeyboardSupport(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_HasScreenKeyboardSupport );
}
/* /usr/local/include/SDL2/SDL_keyboard.h */
static void dao__SDL_IsScreenKeyboardShown( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  SDL_bool _SDL_IsScreenKeyboardShown = SDL_IsScreenKeyboardShown( window );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_IsScreenKeyboardShown );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static void dao__SDL_GetMouseFocus( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct SDL_Window* _SDL_GetMouseFocus = SDL_GetMouseFocus(  );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GetMouseFocus, dao_type_SDL_Window );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static void dao__SDL_GetMouseState( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );
  int y = (int) DaoValue_TryGetInteger( _p[1] );

  Uint32 _SDL_GetMouseState = SDL_GetMouseState( &x, &y );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_GetMouseState );
  DaoProcess_NewInteger( _proc, (daoint)x );
  DaoProcess_NewInteger( _proc, (daoint)y );
  DaoProcess_PutTuple( _proc, -3 );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static void dao__SDL_GetRelativeMouseState( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int x = (int) DaoValue_TryGetInteger( _p[0] );
  int y = (int) DaoValue_TryGetInteger( _p[1] );

  Uint32 _SDL_GetRelativeMouseState = SDL_GetRelativeMouseState( &x, &y );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_GetRelativeMouseState );
  DaoProcess_NewInteger( _proc, (daoint)x );
  DaoProcess_NewInteger( _proc, (daoint)y );
  DaoProcess_PutTuple( _proc, -3 );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static void dao__SDL_WarpMouseInWindow( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  int x = (int) DaoValue_TryGetInteger( _p[1] );
  int y = (int) DaoValue_TryGetInteger( _p[2] );

  SDL_WarpMouseInWindow( window, x, y );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static void dao__SDL_SetRelativeMouseMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_bool enabled = (SDL_bool) DaoValue_TryGetInteger( _p[0] );

  int _SDL_SetRelativeMouseMode = SDL_SetRelativeMouseMode( enabled );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetRelativeMouseMode );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static void dao__SDL_GetRelativeMouseMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_bool _SDL_GetRelativeMouseMode = SDL_GetRelativeMouseMode(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetRelativeMouseMode );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static void dao__SDL_CreateCursor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const unsigned char* data = (const unsigned char*) DaoValue_TryGetChars( _p[0] );
  const unsigned char* mask = (const unsigned char*) DaoValue_TryGetChars( _p[1] );
  int w = (int) DaoValue_TryGetInteger( _p[2] );
  int h = (int) DaoValue_TryGetInteger( _p[3] );
  int hot_x = (int) DaoValue_TryGetInteger( _p[4] );
  int hot_y = (int) DaoValue_TryGetInteger( _p[5] );

  struct SDL_Cursor* _SDL_CreateCursor = SDL_CreateCursor( data, mask, w, h, hot_x, hot_y );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_CreateCursor, dao_type_SDL_Cursor );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static void dao__SDL_CreateColorCursor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );
  int hot_x = (int) DaoValue_TryGetInteger( _p[1] );
  int hot_y = (int) DaoValue_TryGetInteger( _p[2] );

  struct SDL_Cursor* _SDL_CreateColorCursor = SDL_CreateColorCursor( surface, hot_x, hot_y );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_CreateColorCursor, dao_type_SDL_Cursor );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static void dao__SDL_CreateSystemCursor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_SystemCursor id = (SDL_SystemCursor) DaoValue_TryGetInteger( _p[0] );

  struct SDL_Cursor* _SDL_CreateSystemCursor = SDL_CreateSystemCursor( id );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_CreateSystemCursor, dao_type_SDL_Cursor );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static void dao__SDL_SetCursor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Cursor* cursor = (SDL_Cursor*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Cursor );

  SDL_SetCursor( cursor );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static void dao__SDL_GetCursor( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct SDL_Cursor* _SDL_GetCursor = SDL_GetCursor(  );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GetCursor, dao_type_SDL_Cursor );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static void dao__SDL_GetDefaultCursor( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  struct SDL_Cursor* _SDL_GetDefaultCursor = SDL_GetDefaultCursor(  );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GetDefaultCursor, dao_type_SDL_Cursor );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static void dao__SDL_FreeCursor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Cursor* cursor = (SDL_Cursor*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Cursor );

  SDL_FreeCursor( cursor );
}
/* /usr/local/include/SDL2/SDL_mouse.h */
static void dao__SDL_ShowCursor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int toggle = (int) DaoValue_TryGetInteger( _p[0] );

  int _SDL_ShowCursor = SDL_ShowCursor( toggle );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_ShowCursor );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_NumJoysticks( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  int _SDL_NumJoysticks = SDL_NumJoysticks(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_NumJoysticks );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickNameForIndex( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int device_index = (int) DaoValue_TryGetInteger( _p[0] );

  const char* _SDL_JoystickNameForIndex = SDL_JoystickNameForIndex( device_index );
  DaoProcess_PutChars( _proc, (char*) _SDL_JoystickNameForIndex );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickOpen( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int device_index = (int) DaoValue_TryGetInteger( _p[0] );

  struct _SDL_Joystick* _SDL_JoystickOpen = SDL_JoystickOpen( device_index );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_JoystickOpen, dao_type__SDL_Joystick );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickName( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _SDL_Joystick* joystick = (struct _SDL_Joystick*) DaoValue_TryCastCdata( _p[0], dao_type__SDL_Joystick );

  const char* _SDL_JoystickName = SDL_JoystickName( joystick );
  DaoProcess_PutChars( _proc, (char*) _SDL_JoystickName );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickGetDeviceGUID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int device_index = (int) DaoValue_TryGetInteger( _p[0] );

  SDL_JoystickGUID _SDL_JoystickGetDeviceGUID = SDL_JoystickGetDeviceGUID( device_index );
  DaoProcess_CopyCdata( _proc, (void*)&_SDL_JoystickGetDeviceGUID, sizeof(SDL_JoystickGUID), dao_type_SDL_JoystickGUID );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickGetGUID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _SDL_Joystick* joystick = (struct _SDL_Joystick*) DaoValue_TryCastCdata( _p[0], dao_type__SDL_Joystick );

  SDL_JoystickGUID _SDL_JoystickGetGUID = SDL_JoystickGetGUID( joystick );
  DaoProcess_CopyCdata( _proc, (void*)&_SDL_JoystickGetGUID, sizeof(SDL_JoystickGUID), dao_type_SDL_JoystickGUID );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickGetGUIDString( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_JoystickGUID* guid = (SDL_JoystickGUID*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_JoystickGUID );
  char* pszGUID = (char*) DaoValue_TryGetChars( _p[1] );
  int cbGUID = (int) DaoValue_TryGetInteger( _p[2] );

  SDL_JoystickGetGUIDString( *guid, pszGUID, cbGUID );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickGetGUIDFromString( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* pchGUID = (const char*) DaoValue_TryGetChars( _p[0] );

  SDL_JoystickGUID _SDL_JoystickGetGUIDFromString = SDL_JoystickGetGUIDFromString( pchGUID );
  DaoProcess_CopyCdata( _proc, (void*)&_SDL_JoystickGetGUIDFromString, sizeof(SDL_JoystickGUID), dao_type_SDL_JoystickGUID );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickGetAttached( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _SDL_Joystick* joystick = (struct _SDL_Joystick*) DaoValue_TryCastCdata( _p[0], dao_type__SDL_Joystick );

  SDL_bool _SDL_JoystickGetAttached = SDL_JoystickGetAttached( joystick );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_JoystickGetAttached );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickInstanceID( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _SDL_Joystick* joystick = (struct _SDL_Joystick*) DaoValue_TryCastCdata( _p[0], dao_type__SDL_Joystick );

  SDL_JoystickID _SDL_JoystickInstanceID = SDL_JoystickInstanceID( joystick );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_JoystickInstanceID );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickNumAxes( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _SDL_Joystick* joystick = (struct _SDL_Joystick*) DaoValue_TryCastCdata( _p[0], dao_type__SDL_Joystick );

  int _SDL_JoystickNumAxes = SDL_JoystickNumAxes( joystick );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_JoystickNumAxes );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickNumBalls( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _SDL_Joystick* joystick = (struct _SDL_Joystick*) DaoValue_TryCastCdata( _p[0], dao_type__SDL_Joystick );

  int _SDL_JoystickNumBalls = SDL_JoystickNumBalls( joystick );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_JoystickNumBalls );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickNumHats( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _SDL_Joystick* joystick = (struct _SDL_Joystick*) DaoValue_TryCastCdata( _p[0], dao_type__SDL_Joystick );

  int _SDL_JoystickNumHats = SDL_JoystickNumHats( joystick );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_JoystickNumHats );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickNumButtons( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _SDL_Joystick* joystick = (struct _SDL_Joystick*) DaoValue_TryCastCdata( _p[0], dao_type__SDL_Joystick );

  int _SDL_JoystickNumButtons = SDL_JoystickNumButtons( joystick );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_JoystickNumButtons );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickUpdate( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_JoystickUpdate(  );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickEventState( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int state = (int) DaoValue_TryGetInteger( _p[0] );

  int _SDL_JoystickEventState = SDL_JoystickEventState( state );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_JoystickEventState );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickGetAxis( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _SDL_Joystick* joystick = (struct _SDL_Joystick*) DaoValue_TryCastCdata( _p[0], dao_type__SDL_Joystick );
  int axis = (int) DaoValue_TryGetInteger( _p[1] );

  Sint16 _SDL_JoystickGetAxis = SDL_JoystickGetAxis( joystick, axis );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_JoystickGetAxis );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickGetHat( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _SDL_Joystick* joystick = (struct _SDL_Joystick*) DaoValue_TryCastCdata( _p[0], dao_type__SDL_Joystick );
  int hat = (int) DaoValue_TryGetInteger( _p[1] );

  Uint8 _SDL_JoystickGetHat = SDL_JoystickGetHat( joystick, hat );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_JoystickGetHat );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickGetBall( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _SDL_Joystick* joystick = (struct _SDL_Joystick*) DaoValue_TryCastCdata( _p[0], dao_type__SDL_Joystick );
  int ball = (int) DaoValue_TryGetInteger( _p[1] );
  int dx = (int) DaoValue_TryGetInteger( _p[2] );
  int dy = (int) DaoValue_TryGetInteger( _p[3] );

  int _SDL_JoystickGetBall = SDL_JoystickGetBall( joystick, ball, &dx, &dy );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_JoystickGetBall );
  DaoProcess_NewInteger( _proc, (daoint)dx );
  DaoProcess_NewInteger( _proc, (daoint)dy );
  DaoProcess_PutTuple( _proc, -3 );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickGetButton( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _SDL_Joystick* joystick = (struct _SDL_Joystick*) DaoValue_TryCastCdata( _p[0], dao_type__SDL_Joystick );
  int button = (int) DaoValue_TryGetInteger( _p[1] );

  Uint8 _SDL_JoystickGetButton = SDL_JoystickGetButton( joystick, button );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_JoystickGetButton );
}
/* /usr/local/include/SDL2/SDL_joystick.h */
static void dao__SDL_JoystickClose( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  struct _SDL_Joystick* joystick = (struct _SDL_Joystick*) DaoValue_TryCastCdata( _p[0], dao_type__SDL_Joystick );

  SDL_JoystickClose( joystick );
}
/* /usr/local/include/SDL2/SDL_touch.h */
static void dao__SDL_GetNumTouchDevices( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  int _SDL_GetNumTouchDevices = SDL_GetNumTouchDevices(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetNumTouchDevices );
}
/* /usr/local/include/SDL2/SDL_touch.h */
static void dao__SDL_GetTouchDevice( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int index = (int) DaoValue_TryGetInteger( _p[0] );

  SDL_TouchID _SDL_GetTouchDevice = SDL_GetTouchDevice( index );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetTouchDevice );
}
/* /usr/local/include/SDL2/SDL_touch.h */
static void dao__SDL_GetNumTouchFingers( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  long long touchID = (long long) DaoValue_TryGetInteger( _p[0] );

  int _SDL_GetNumTouchFingers = SDL_GetNumTouchFingers( touchID );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetNumTouchFingers );
}
/* /usr/local/include/SDL2/SDL_touch.h */
static void dao__SDL_GetTouchFinger( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  long long touchID = (long long) DaoValue_TryGetInteger( _p[0] );
  int index = (int) DaoValue_TryGetInteger( _p[1] );

  struct SDL_Finger* _SDL_GetTouchFinger = SDL_GetTouchFinger( touchID, index );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GetTouchFinger, dao_type_SDL_Finger );
}
/* /usr/local/include/SDL2/SDL_gesture.h */
static void dao__SDL_RecordGesture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  long long touchId = (long long) DaoValue_TryGetInteger( _p[0] );

  int _SDL_RecordGesture = SDL_RecordGesture( touchId );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RecordGesture );
}
/* /usr/local/include/SDL2/SDL_gesture.h */
static void dao__SDL_SaveAllDollarTemplates( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_RWops* src = (SDL_RWops*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_RWops );

  int _SDL_SaveAllDollarTemplates = SDL_SaveAllDollarTemplates( src );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SaveAllDollarTemplates );
}
/* /usr/local/include/SDL2/SDL_gesture.h */
static void dao__SDL_SaveDollarTemplate( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  long long gestureId = (long long) DaoValue_TryGetInteger( _p[0] );
  SDL_RWops* src = (SDL_RWops*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_RWops );

  int _SDL_SaveDollarTemplate = SDL_SaveDollarTemplate( gestureId, src );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SaveDollarTemplate );
}
/* /usr/local/include/SDL2/SDL_gesture.h */
static void dao__SDL_LoadDollarTemplates( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  long long touchId = (long long) DaoValue_TryGetInteger( _p[0] );
  SDL_RWops* src = (SDL_RWops*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_RWops );

  int _SDL_LoadDollarTemplates = SDL_LoadDollarTemplates( touchId, src );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_LoadDollarTemplates );
}
/* /usr/local/include/SDL2/SDL_events.h */
static void dao__SDL_PumpEvents( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_PumpEvents(  );
}
/* /usr/local/include/SDL2/SDL_events.h */
static void dao__SDL_PeepEvents( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event* events = (SDL_Event*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Event );
  int numevents = (int) DaoValue_TryGetInteger( _p[1] );
  SDL_eventaction action = (SDL_eventaction) DaoValue_TryGetInteger( _p[2] );
  unsigned int minType = (unsigned int) DaoValue_TryGetInteger( _p[3] );
  unsigned int maxType = (unsigned int) DaoValue_TryGetInteger( _p[4] );

  int _SDL_PeepEvents = SDL_PeepEvents( events, numevents, action, minType, maxType );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_PeepEvents );
}
/* /usr/local/include/SDL2/SDL_events.h */
static void dao__SDL_HasEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  SDL_bool _SDL_HasEvent = SDL_HasEvent( type );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_HasEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */
static void dao__SDL_HasEvents( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int minType = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int maxType = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  SDL_bool _SDL_HasEvents = SDL_HasEvents( minType, maxType );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_HasEvents );
}
/* /usr/local/include/SDL2/SDL_events.h */
static void dao__SDL_FlushEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  SDL_FlushEvent( type );
}
/* /usr/local/include/SDL2/SDL_events.h */
static void dao__SDL_FlushEvents( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int minType = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  unsigned int maxType = (unsigned int) DaoValue_TryGetInteger( _p[1] );

  SDL_FlushEvents( minType, maxType );
}
/* /usr/local/include/SDL2/SDL_events.h */
static void dao__SDL_PollEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event* event = (SDL_Event*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Event );

  int _SDL_PollEvent = SDL_PollEvent( event );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_PollEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */
static void dao__SDL_WaitEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event* event = (SDL_Event*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Event );

  int _SDL_WaitEvent = SDL_WaitEvent( event );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_WaitEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */
static void dao__SDL_WaitEventTimeout( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event* event = (SDL_Event*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Event );
  int timeout = (int) DaoValue_TryGetInteger( _p[1] );

  int _SDL_WaitEventTimeout = SDL_WaitEventTimeout( event, timeout );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_WaitEventTimeout );
}
/* /usr/local/include/SDL2/SDL_events.h */
static void dao__SDL_PushEvent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Event* event = (SDL_Event*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Event );

  int _SDL_PushEvent = SDL_PushEvent( event );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_PushEvent );
}
/* /usr/local/include/SDL2/SDL_events.h */
static void dao__SDL_EventState( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int type = (unsigned int) DaoValue_TryGetInteger( _p[0] );
  int state = (int) DaoValue_TryGetInteger( _p[1] );

  Uint8 _SDL_EventState = SDL_EventState( type, state );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_EventState );
}
/* /usr/local/include/SDL2/SDL_events.h */
static void dao__SDL_RegisterEvents( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int numevents = (int) DaoValue_TryGetInteger( _p[0] );

  Uint32 _SDL_RegisterEvents = SDL_RegisterEvents( numevents );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RegisterEvents );
}
/* /usr/local/include/SDL2/SDL_hints.h */
static void dao__SDL_SetHintWithPriority( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* name = (const char*) DaoValue_TryGetChars( _p[0] );
  const char* value = (const char*) DaoValue_TryGetChars( _p[1] );
  SDL_HintPriority priority = (SDL_HintPriority) DaoValue_TryGetInteger( _p[2] );

  SDL_bool _SDL_SetHintWithPriority = SDL_SetHintWithPriority( name, value, priority );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetHintWithPriority );
}
/* /usr/local/include/SDL2/SDL_hints.h */
static void dao__SDL_SetHint( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* name = (const char*) DaoValue_TryGetChars( _p[0] );
  const char* value = (const char*) DaoValue_TryGetChars( _p[1] );

  SDL_bool _SDL_SetHint = SDL_SetHint( name, value );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetHint );
}
/* /usr/local/include/SDL2/SDL_hints.h */
static void dao__SDL_GetHint( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* name = (const char*) DaoValue_TryGetChars( _p[0] );

  const char* _SDL_GetHint = SDL_GetHint( name );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetHint );
}
/* /usr/local/include/SDL2/SDL_hints.h */
static void dao__SDL_ClearHints( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_ClearHints(  );
}
/* /usr/local/include/SDL2/SDL_loadso.h */
static void dao__SDL_LoadObject( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* sofile = (const char*) DaoValue_TryGetChars( _p[0] );

  void* _SDL_LoadObject = SDL_LoadObject( sofile );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_LoadObject, NULL );
}
/* /usr/local/include/SDL2/SDL_loadso.h */
static void dao__SDL_LoadFunction( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* handle = (void*) DaoValue_TryGetCdata( _p[0] );
  const char* name = (const char*) DaoValue_TryGetChars( _p[1] );

  void* _SDL_LoadFunction = SDL_LoadFunction( handle, name );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_LoadFunction, NULL );
}
/* /usr/local/include/SDL2/SDL_loadso.h */
static void dao__SDL_UnloadObject( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  void* handle = (void*) DaoValue_TryGetCdata( _p[0] );

  SDL_UnloadObject( handle );
}
/* /usr/local/include/SDL2/SDL_log.h */
static void dao__SDL_LogSetAllPriority( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_LogPriority priority = (SDL_LogPriority) DaoValue_TryGetInteger( _p[0] );

  SDL_LogSetAllPriority( priority );
}
/* /usr/local/include/SDL2/SDL_log.h */
static void dao__SDL_LogSetPriority( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int category = (int) DaoValue_TryGetInteger( _p[0] );
  SDL_LogPriority priority = (SDL_LogPriority) DaoValue_TryGetInteger( _p[1] );

  SDL_LogSetPriority( category, priority );
}
/* /usr/local/include/SDL2/SDL_log.h */
static void dao__SDL_LogGetPriority( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int category = (int) DaoValue_TryGetInteger( _p[0] );

  SDL_LogPriority _SDL_LogGetPriority = SDL_LogGetPriority( category );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_LogGetPriority );
}
/* /usr/local/include/SDL2/SDL_log.h */
static void dao__SDL_LogResetPriorities( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_LogResetPriorities(  );
}
/* /usr/local/include/SDL2/SDL_log.h */
static void dao__SDL_Log( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  const char* fmt = (const char*) DaoValue_TryGetChars( _p[0] );

  SDL_Log( fmt );
}
/* /usr/local/include/SDL2/SDL_log.h */
static void dao__SDL_LogVerbose( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int category = (int) DaoValue_TryGetInteger( _p[0] );
  const char* fmt = (const char*) DaoValue_TryGetChars( _p[1] );

  SDL_LogVerbose( category, fmt );
}
/* /usr/local/include/SDL2/SDL_log.h */
static void dao__SDL_LogDebug( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int category = (int) DaoValue_TryGetInteger( _p[0] );
  const char* fmt = (const char*) DaoValue_TryGetChars( _p[1] );

  SDL_LogDebug( category, fmt );
}
/* /usr/local/include/SDL2/SDL_log.h */
static void dao__SDL_LogInfo( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int category = (int) DaoValue_TryGetInteger( _p[0] );
  const char* fmt = (const char*) DaoValue_TryGetChars( _p[1] );

  SDL_LogInfo( category, fmt );
}
/* /usr/local/include/SDL2/SDL_log.h */
static void dao__SDL_LogWarn( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int category = (int) DaoValue_TryGetInteger( _p[0] );
  const char* fmt = (const char*) DaoValue_TryGetChars( _p[1] );

  SDL_LogWarn( category, fmt );
}
/* /usr/local/include/SDL2/SDL_log.h */
static void dao__SDL_LogError( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int category = (int) DaoValue_TryGetInteger( _p[0] );
  const char* fmt = (const char*) DaoValue_TryGetChars( _p[1] );

  SDL_LogError( category, fmt );
}
/* /usr/local/include/SDL2/SDL_log.h */
static void dao__SDL_LogCritical( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int category = (int) DaoValue_TryGetInteger( _p[0] );
  const char* fmt = (const char*) DaoValue_TryGetChars( _p[1] );

  SDL_LogCritical( category, fmt );
}
/* /usr/local/include/SDL2/SDL_log.h */
static void dao__SDL_LogMessage( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int category = (int) DaoValue_TryGetInteger( _p[0] );
  SDL_LogPriority priority = (SDL_LogPriority) DaoValue_TryGetInteger( _p[1] );
  const char* fmt = (const char*) DaoValue_TryGetChars( _p[2] );

  SDL_LogMessage( category, priority, fmt );
}
/* /usr/local/include/SDL2/SDL_power.h */
static void dao__SDL_GetPowerInfo( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int secs = (int) DaoValue_TryGetInteger( _p[0] );
  int pct = (int) DaoValue_TryGetInteger( _p[1] );

  SDL_PowerState _SDL_GetPowerInfo = SDL_GetPowerInfo( &secs, &pct );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_GetPowerInfo );
  DaoProcess_NewInteger( _proc, (daoint)secs );
  DaoProcess_NewInteger( _proc, (daoint)pct );
  DaoProcess_PutTuple( _proc, -3 );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_GetNumRenderDrivers( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  int _SDL_GetNumRenderDrivers = SDL_GetNumRenderDrivers(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetNumRenderDrivers );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_GetRenderDriverInfo( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int index = (int) DaoValue_TryGetInteger( _p[0] );
  SDL_RendererInfo* info = (SDL_RendererInfo*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_RendererInfo );

  int _SDL_GetRenderDriverInfo = SDL_GetRenderDriverInfo( index, info );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetRenderDriverInfo );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_CreateWindowAndRenderer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int width = (int) DaoValue_TryGetInteger( _p[0] );
  int height = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int window_flags = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[3], dao_type_SDL_Window );
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[4], dao_type_SDL_Renderer );

  int _SDL_CreateWindowAndRenderer = SDL_CreateWindowAndRenderer( width, height, window_flags, &window, &renderer );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_CreateWindowAndRenderer );
  DaoProcess_PutTuple( _proc, -3 );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_CreateRenderer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );
  int index = (int) DaoValue_TryGetInteger( _p[1] );
  unsigned int flags = (unsigned int) DaoValue_TryGetInteger( _p[2] );

  struct SDL_Renderer* _SDL_CreateRenderer = SDL_CreateRenderer( window, index, flags );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_CreateRenderer, dao_type_SDL_Renderer );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_CreateSoftwareRenderer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Surface );

  struct SDL_Renderer* _SDL_CreateSoftwareRenderer = SDL_CreateSoftwareRenderer( surface );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_CreateSoftwareRenderer, dao_type_SDL_Renderer );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_GetRenderer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Window* window = (SDL_Window*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Window );

  struct SDL_Renderer* _SDL_GetRenderer = SDL_GetRenderer( window );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GetRenderer, dao_type_SDL_Renderer );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_GetRendererInfo( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_RendererInfo* info = (SDL_RendererInfo*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_RendererInfo );

  int _SDL_GetRendererInfo = SDL_GetRendererInfo( renderer, info );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetRendererInfo );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_GetRendererOutputSize( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  int w = (int) DaoValue_TryGetInteger( _p[1] );
  int h = (int) DaoValue_TryGetInteger( _p[2] );

  int _SDL_GetRendererOutputSize = SDL_GetRendererOutputSize( renderer, &w, &h );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_GetRendererOutputSize );
  DaoProcess_NewInteger( _proc, (daoint)w );
  DaoProcess_NewInteger( _proc, (daoint)h );
  DaoProcess_PutTuple( _proc, -3 );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_CreateTexture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int access = (int) DaoValue_TryGetInteger( _p[2] );
  int w = (int) DaoValue_TryGetInteger( _p[3] );
  int h = (int) DaoValue_TryGetInteger( _p[4] );

  struct SDL_Texture* _SDL_CreateTexture = SDL_CreateTexture( renderer, format, access, w, h );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_CreateTexture, dao_type_SDL_Texture );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_CreateTextureFromSurface( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Surface* surface = (SDL_Surface*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Surface );

  struct SDL_Texture* _SDL_CreateTextureFromSurface = SDL_CreateTextureFromSurface( renderer, surface );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_CreateTextureFromSurface, dao_type_SDL_Texture );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_QueryTexture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Texture );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[1] );
  int access = (int) DaoValue_TryGetInteger( _p[2] );
  int w = (int) DaoValue_TryGetInteger( _p[3] );
  int h = (int) DaoValue_TryGetInteger( _p[4] );

  int _SDL_QueryTexture = SDL_QueryTexture( texture, &format, &access, &w, &h );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_QueryTexture );
  DaoProcess_NewInteger( _proc, (daoint)format );
  DaoProcess_NewInteger( _proc, (daoint)access );
  DaoProcess_NewInteger( _proc, (daoint)w );
  DaoProcess_NewInteger( _proc, (daoint)h );
  DaoProcess_PutTuple( _proc, -5 );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_SetTextureColorMod( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Texture );
  unsigned char r = (unsigned char) DaoValue_TryGetInteger( _p[1] );
  unsigned char g = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  unsigned char b = (unsigned char) DaoValue_TryGetInteger( _p[3] );

  int _SDL_SetTextureColorMod = SDL_SetTextureColorMod( texture, r, g, b );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetTextureColorMod );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_GetTextureColorMod( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Texture );
  unsigned char* r = (unsigned char*) DaoValue_TryGetChars( _p[1] );
  unsigned char* g = (unsigned char*) DaoValue_TryGetChars( _p[2] );
  unsigned char* b = (unsigned char*) DaoValue_TryGetChars( _p[3] );

  int _SDL_GetTextureColorMod = SDL_GetTextureColorMod( texture, r, g, b );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetTextureColorMod );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_SetTextureAlphaMod( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Texture );
  unsigned char alpha = (unsigned char) DaoValue_TryGetInteger( _p[1] );

  int _SDL_SetTextureAlphaMod = SDL_SetTextureAlphaMod( texture, alpha );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetTextureAlphaMod );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_GetTextureAlphaMod( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Texture );
  unsigned char* alpha = (unsigned char*) DaoValue_TryGetChars( _p[1] );

  int _SDL_GetTextureAlphaMod = SDL_GetTextureAlphaMod( texture, alpha );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetTextureAlphaMod );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_SetTextureBlendMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Texture );
  SDL_BlendMode blendMode = (SDL_BlendMode) DaoValue_TryGetInteger( _p[1] );

  int _SDL_SetTextureBlendMode = SDL_SetTextureBlendMode( texture, blendMode );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetTextureBlendMode );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_GetTextureBlendMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Texture );
  SDL_BlendMode blendMode = (SDL_BlendMode) DaoValue_TryGetInteger( _p[1] );

  int _SDL_GetTextureBlendMode = SDL_GetTextureBlendMode( texture, &blendMode );
  DaoProcess_NewInteger( _proc, (daoint)blendMode );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetTextureBlendMode );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_UpdateTexture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Texture );
  SDL_Rect* rect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );
  const void* pixels = (const void*) DaoValue_TryGetCdata( _p[2] );
  int pitch = (int) DaoValue_TryGetInteger( _p[3] );

  int _SDL_UpdateTexture = SDL_UpdateTexture( texture, rect, pixels, pitch );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_UpdateTexture );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_UnlockTexture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Texture );

  SDL_UnlockTexture( texture );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderTargetSupported( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );

  SDL_bool _SDL_RenderTargetSupported = SDL_RenderTargetSupported( renderer );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderTargetSupported );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_SetRenderTarget( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Texture );

  int _SDL_SetRenderTarget = SDL_SetRenderTarget( renderer, texture );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetRenderTarget );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_GetRenderTarget( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );

  struct SDL_Texture* _SDL_GetRenderTarget = SDL_GetRenderTarget( renderer );
  DaoProcess_WrapCdata( _proc, (void*) _SDL_GetRenderTarget, dao_type_SDL_Texture );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderSetLogicalSize( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  int w = (int) DaoValue_TryGetInteger( _p[1] );
  int h = (int) DaoValue_TryGetInteger( _p[2] );

  int _SDL_RenderSetLogicalSize = SDL_RenderSetLogicalSize( renderer, w, h );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderSetLogicalSize );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderGetLogicalSize( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  int w = (int) DaoValue_TryGetInteger( _p[1] );
  int h = (int) DaoValue_TryGetInteger( _p[2] );

  SDL_RenderGetLogicalSize( renderer, &w, &h );
  DaoProcess_NewInteger( _proc, (daoint)w );
  DaoProcess_NewInteger( _proc, (daoint)h );
  DaoProcess_PutTuple( _proc, -2 );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderSetViewport( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Rect* rect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );

  int _SDL_RenderSetViewport = SDL_RenderSetViewport( renderer, rect );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderSetViewport );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderGetViewport( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Rect* rect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );

  SDL_RenderGetViewport( renderer, rect );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderSetClipRect( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Rect* rect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );

  int _SDL_RenderSetClipRect = SDL_RenderSetClipRect( renderer, rect );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderSetClipRect );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderGetClipRect( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Rect* rect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );

  SDL_RenderGetClipRect( renderer, rect );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderSetScale( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  float scaleX = (float) DaoValue_TryGetFloat( _p[1] );
  float scaleY = (float) DaoValue_TryGetFloat( _p[2] );

  int _SDL_RenderSetScale = SDL_RenderSetScale( renderer, scaleX, scaleY );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderSetScale );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderGetScale( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  float scaleX = (float) DaoValue_TryGetFloat( _p[1] );
  float scaleY = (float) DaoValue_TryGetFloat( _p[2] );

  SDL_RenderGetScale( renderer, &scaleX, &scaleY );
  DaoProcess_NewFloat( _proc, (float)scaleX );
  DaoProcess_NewFloat( _proc, (float)scaleY );
  DaoProcess_PutTuple( _proc, -2 );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_SetRenderDrawColor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  unsigned char r = (unsigned char) DaoValue_TryGetInteger( _p[1] );
  unsigned char g = (unsigned char) DaoValue_TryGetInteger( _p[2] );
  unsigned char b = (unsigned char) DaoValue_TryGetInteger( _p[3] );
  unsigned char a = (unsigned char) DaoValue_TryGetInteger( _p[4] );

  int _SDL_SetRenderDrawColor = SDL_SetRenderDrawColor( renderer, r, g, b, a );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetRenderDrawColor );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_GetRenderDrawColor( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  unsigned char* r = (unsigned char*) DaoValue_TryGetChars( _p[1] );
  unsigned char* g = (unsigned char*) DaoValue_TryGetChars( _p[2] );
  unsigned char* b = (unsigned char*) DaoValue_TryGetChars( _p[3] );
  unsigned char* a = (unsigned char*) DaoValue_TryGetChars( _p[4] );

  int _SDL_GetRenderDrawColor = SDL_GetRenderDrawColor( renderer, r, g, b, a );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetRenderDrawColor );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_SetRenderDrawBlendMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_BlendMode blendMode = (SDL_BlendMode) DaoValue_TryGetInteger( _p[1] );

  int _SDL_SetRenderDrawBlendMode = SDL_SetRenderDrawBlendMode( renderer, blendMode );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_SetRenderDrawBlendMode );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_GetRenderDrawBlendMode( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_BlendMode blendMode = (SDL_BlendMode) DaoValue_TryGetInteger( _p[1] );

  int _SDL_GetRenderDrawBlendMode = SDL_GetRenderDrawBlendMode( renderer, &blendMode );
  DaoProcess_NewInteger( _proc, (daoint)blendMode );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetRenderDrawBlendMode );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderClear( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );

  int _SDL_RenderClear = SDL_RenderClear( renderer );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderClear );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderDrawPoint( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  int x = (int) DaoValue_TryGetInteger( _p[1] );
  int y = (int) DaoValue_TryGetInteger( _p[2] );

  int _SDL_RenderDrawPoint = SDL_RenderDrawPoint( renderer, x, y );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderDrawPoint );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderDrawPoints( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Point* points = (SDL_Point*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Point );
  int count = (int) DaoValue_TryGetInteger( _p[2] );

  int _SDL_RenderDrawPoints = SDL_RenderDrawPoints( renderer, points, count );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderDrawPoints );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderDrawLine( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  int x1 = (int) DaoValue_TryGetInteger( _p[1] );
  int y1 = (int) DaoValue_TryGetInteger( _p[2] );
  int x2 = (int) DaoValue_TryGetInteger( _p[3] );
  int y2 = (int) DaoValue_TryGetInteger( _p[4] );

  int _SDL_RenderDrawLine = SDL_RenderDrawLine( renderer, x1, y1, x2, y2 );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderDrawLine );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderDrawLines( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Point* points = (SDL_Point*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Point );
  int count = (int) DaoValue_TryGetInteger( _p[2] );

  int _SDL_RenderDrawLines = SDL_RenderDrawLines( renderer, points, count );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderDrawLines );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderDrawRect( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Rect* rect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );

  int _SDL_RenderDrawRect = SDL_RenderDrawRect( renderer, rect );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderDrawRect );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderDrawRects( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Rect* rects = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );
  int count = (int) DaoValue_TryGetInteger( _p[2] );

  int _SDL_RenderDrawRects = SDL_RenderDrawRects( renderer, rects, count );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderDrawRects );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderFillRect( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Rect* rect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );

  int _SDL_RenderFillRect = SDL_RenderFillRect( renderer, rect );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderFillRect );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderFillRects( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Rect* rects = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );
  int count = (int) DaoValue_TryGetInteger( _p[2] );

  int _SDL_RenderFillRects = SDL_RenderFillRects( renderer, rects, count );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderFillRects );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderCopy( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Texture );
  SDL_Rect* srcrect = (SDL_Rect*) DaoValue_TryCastCdata( _p[2], dao_type_SDL_Rect );
  SDL_Rect* dstrect = (SDL_Rect*) DaoValue_TryCastCdata( _p[3], dao_type_SDL_Rect );

  int dao_SDL_RenderCopy = SDL_RenderCopy( renderer, texture, srcrect, dstrect );
  DaoProcess_PutInteger( _proc, (daoint) dao_SDL_RenderCopy );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderCopyEx( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Texture );
  SDL_Rect* srcrect = (SDL_Rect*) DaoValue_TryCastCdata( _p[2], dao_type_SDL_Rect );
  SDL_Rect* dstrect = (SDL_Rect*) DaoValue_TryCastCdata( _p[3], dao_type_SDL_Rect );
  const double angle = (const double) DaoValue_TryGetDouble( _p[4] );
  SDL_Point* center = (SDL_Point*) DaoValue_TryCastCdata( _p[5], dao_type_SDL_Point );
  const SDL_RendererFlip flip = (const SDL_RendererFlip) DaoValue_TryGetInteger( _p[6] );

  int _SDL_RenderCopyEx = SDL_RenderCopyEx( renderer, texture, srcrect, dstrect, angle, center, flip );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderCopyEx );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderReadPixels( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );
  SDL_Rect* rect = (SDL_Rect*) DaoValue_TryCastCdata( _p[1], dao_type_SDL_Rect );
  unsigned int format = (unsigned int) DaoValue_TryGetInteger( _p[2] );
  void* pixels = (void*) DaoValue_TryGetCdata( _p[3] );
  int pitch = (int) DaoValue_TryGetInteger( _p[4] );

  int _SDL_RenderReadPixels = SDL_RenderReadPixels( renderer, rect, format, pixels, pitch );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RenderReadPixels );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_RenderPresent( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );

  SDL_RenderPresent( renderer );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_DestroyTexture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Texture );

  SDL_DestroyTexture( texture );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_DestroyRenderer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Renderer* renderer = (SDL_Renderer*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Renderer );

  SDL_DestroyRenderer( renderer );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_GL_BindTexture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Texture );
  float texw = (float) DaoValue_TryGetFloat( _p[1] );
  float texh = (float) DaoValue_TryGetFloat( _p[2] );

  int _SDL_GL_BindTexture = SDL_GL_BindTexture( texture, &texw, &texh );
  DaoProcess_NewInteger( _proc, (daoint) _SDL_GL_BindTexture );
  DaoProcess_NewFloat( _proc, (float)texw );
  DaoProcess_NewFloat( _proc, (float)texh );
  DaoProcess_PutTuple( _proc, -3 );
}
/* /usr/local/include/SDL2/SDL_render.h */
static void dao__SDL_GL_UnbindTexture( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_Texture* texture = (SDL_Texture*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_Texture );

  int _SDL_GL_UnbindTexture = SDL_GL_UnbindTexture( texture );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GL_UnbindTexture );
}
/* /usr/local/include/SDL2/SDL_timer.h */
static void dao__SDL_GetTicks( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  Uint32 _SDL_GetTicks = SDL_GetTicks(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetTicks );
}
/* /usr/local/include/SDL2/SDL_timer.h */
static void dao__SDL_GetPerformanceCounter( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  Uint64 _SDL_GetPerformanceCounter = SDL_GetPerformanceCounter(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetPerformanceCounter );
}
/* /usr/local/include/SDL2/SDL_timer.h */
static void dao__SDL_GetPerformanceFrequency( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  Uint64 _SDL_GetPerformanceFrequency = SDL_GetPerformanceFrequency(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetPerformanceFrequency );
}
/* /usr/local/include/SDL2/SDL_timer.h */
static void dao__SDL_Delay( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int ms = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  SDL_Delay( ms );
}
/* /usr/local/include/SDL2/SDL_timer.h */
static void dao__SDL_RemoveTimer( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  int id = (int) DaoValue_TryGetInteger( _p[0] );

  SDL_bool _SDL_RemoveTimer = SDL_RemoveTimer( id );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_RemoveTimer );
}
/* /usr/local/include/SDL2/SDL_version.h */
static void dao__SDL_GetVersion( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  SDL_version* ver = (SDL_version*) DaoValue_TryCastCdata( _p[0], dao_type_SDL_version );

  SDL_GetVersion( ver );
}
/* /usr/local/include/SDL2/SDL_version.h */
static void dao__SDL_GetRevision( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  const char* _SDL_GetRevision = SDL_GetRevision(  );
  DaoProcess_PutChars( _proc, (char*) _SDL_GetRevision );
}
/* /usr/local/include/SDL2/SDL_version.h */
static void dao__SDL_GetRevisionNumber( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  int _SDL_GetRevisionNumber = SDL_GetRevisionNumber(  );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_GetRevisionNumber );
}
/* /usr/local/include/SDL2/SDL.h */
static void dao__SDL_Init( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int flags = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  int _SDL_Init = SDL_Init( flags );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_Init );
}
/* /usr/local/include/SDL2/SDL.h */
static void dao__SDL_InitSubSystem( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int flags = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  int _SDL_InitSubSystem = SDL_InitSubSystem( flags );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_InitSubSystem );
}
/* /usr/local/include/SDL2/SDL.h */
static void dao__SDL_QuitSubSystem( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int flags = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  SDL_QuitSubSystem( flags );
}
/* /usr/local/include/SDL2/SDL.h */
static void dao__SDL_WasInit( DaoProcess *_proc, DaoValue *_p[], int _n )
{
  unsigned int flags = (unsigned int) DaoValue_TryGetInteger( _p[0] );

  Uint32 _SDL_WasInit = SDL_WasInit( flags );
  DaoProcess_PutInteger( _proc, (daoint) _SDL_WasInit );
}
/* /usr/local/include/SDL2/SDL.h */
static void dao__SDL_Quit( DaoProcess *_proc, DaoValue *_p[], int _n )
{

  SDL_Quit(  );
}
#ifdef __cplusplus
}
#endif
static DaoNumItem dao__Nums[] = 
{
  {  "SDL_INIT_AUDIO", DAO_DOUBLE, SDL_INIT_AUDIO},
  {  "SDL_INIT_EVENTS", DAO_DOUBLE, SDL_INIT_EVENTS},
  {  "SDL_INIT_GAMECONTROLLER", DAO_DOUBLE, SDL_INIT_GAMECONTROLLER},
  {  "SDL_INIT_HAPTIC", DAO_DOUBLE, SDL_INIT_HAPTIC},
  {  "SDL_INIT_JOYSTICK", DAO_DOUBLE, SDL_INIT_JOYSTICK},
  {  "SDL_INIT_NOPARACHUTE", DAO_DOUBLE, SDL_INIT_NOPARACHUTE},
  {  "SDL_INIT_TIMER", DAO_DOUBLE, SDL_INIT_TIMER},
  {  "SDL_INIT_VIDEO", DAO_DOUBLE, SDL_INIT_VIDEO},
  { "SDL_FALSE", DAO_INTEGER, SDL_FALSE },
  { "SDL_TRUE", DAO_INTEGER, SDL_TRUE },
  { "DUMMY_ENUM_VALUE", DAO_INTEGER, DUMMY_ENUM_VALUE },
  { "SDL_ASSERTION_RETRY", DAO_INTEGER, SDL_ASSERTION_RETRY },
  { "SDL_ASSERTION_BREAK", DAO_INTEGER, SDL_ASSERTION_BREAK },
  { "SDL_ASSERTION_ABORT", DAO_INTEGER, SDL_ASSERTION_ABORT },
  { "SDL_ASSERTION_IGNORE", DAO_INTEGER, SDL_ASSERTION_IGNORE },
  { "SDL_ASSERTION_ALWAYS_IGNORE", DAO_INTEGER, SDL_ASSERTION_ALWAYS_IGNORE },
  { "SDL_ENOMEM", DAO_INTEGER, SDL_ENOMEM },
  { "SDL_EFREAD", DAO_INTEGER, SDL_EFREAD },
  { "SDL_EFWRITE", DAO_INTEGER, SDL_EFWRITE },
  { "SDL_EFSEEK", DAO_INTEGER, SDL_EFSEEK },
  { "SDL_UNSUPPORTED", DAO_INTEGER, SDL_UNSUPPORTED },
  { "SDL_LASTERROR", DAO_INTEGER, SDL_LASTERROR },
  { "SDL_THREAD_PRIORITY_LOW", DAO_INTEGER, SDL_THREAD_PRIORITY_LOW },
  { "SDL_THREAD_PRIORITY_NORMAL", DAO_INTEGER, SDL_THREAD_PRIORITY_NORMAL },
  { "SDL_THREAD_PRIORITY_HIGH", DAO_INTEGER, SDL_THREAD_PRIORITY_HIGH },
  { "SDL_AUDIO_STOPPED", DAO_INTEGER, SDL_AUDIO_STOPPED },
  { "SDL_AUDIO_PLAYING", DAO_INTEGER, SDL_AUDIO_PLAYING },
  { "SDL_AUDIO_PAUSED", DAO_INTEGER, SDL_AUDIO_PAUSED },
  { "SDL_PIXELTYPE_UNKNOWN", DAO_INTEGER, SDL_PIXELTYPE_UNKNOWN },
  { "SDL_PIXELTYPE_INDEX1", DAO_INTEGER, SDL_PIXELTYPE_INDEX1 },
  { "SDL_PIXELTYPE_INDEX4", DAO_INTEGER, SDL_PIXELTYPE_INDEX4 },
  { "SDL_PIXELTYPE_INDEX8", DAO_INTEGER, SDL_PIXELTYPE_INDEX8 },
  { "SDL_PIXELTYPE_PACKED8", DAO_INTEGER, SDL_PIXELTYPE_PACKED8 },
  { "SDL_PIXELTYPE_PACKED16", DAO_INTEGER, SDL_PIXELTYPE_PACKED16 },
  { "SDL_PIXELTYPE_PACKED32", DAO_INTEGER, SDL_PIXELTYPE_PACKED32 },
  { "SDL_PIXELTYPE_ARRAYU8", DAO_INTEGER, SDL_PIXELTYPE_ARRAYU8 },
  { "SDL_PIXELTYPE_ARRAYU16", DAO_INTEGER, SDL_PIXELTYPE_ARRAYU16 },
  { "SDL_PIXELTYPE_ARRAYU32", DAO_INTEGER, SDL_PIXELTYPE_ARRAYU32 },
  { "SDL_PIXELTYPE_ARRAYF16", DAO_INTEGER, SDL_PIXELTYPE_ARRAYF16 },
  { "SDL_PIXELTYPE_ARRAYF32", DAO_INTEGER, SDL_PIXELTYPE_ARRAYF32 },
  { "SDL_BITMAPORDER_NONE", DAO_INTEGER, SDL_BITMAPORDER_NONE },
  { "SDL_BITMAPORDER_4321", DAO_INTEGER, SDL_BITMAPORDER_4321 },
  { "SDL_BITMAPORDER_1234", DAO_INTEGER, SDL_BITMAPORDER_1234 },
  { "SDL_PACKEDORDER_NONE", DAO_INTEGER, SDL_PACKEDORDER_NONE },
  { "SDL_PACKEDORDER_XRGB", DAO_INTEGER, SDL_PACKEDORDER_XRGB },
  { "SDL_PACKEDORDER_RGBX", DAO_INTEGER, SDL_PACKEDORDER_RGBX },
  { "SDL_PACKEDORDER_ARGB", DAO_INTEGER, SDL_PACKEDORDER_ARGB },
  { "SDL_PACKEDORDER_RGBA", DAO_INTEGER, SDL_PACKEDORDER_RGBA },
  { "SDL_PACKEDORDER_XBGR", DAO_INTEGER, SDL_PACKEDORDER_XBGR },
  { "SDL_PACKEDORDER_BGRX", DAO_INTEGER, SDL_PACKEDORDER_BGRX },
  { "SDL_PACKEDORDER_ABGR", DAO_INTEGER, SDL_PACKEDORDER_ABGR },
  { "SDL_PACKEDORDER_BGRA", DAO_INTEGER, SDL_PACKEDORDER_BGRA },
  { "SDL_ARRAYORDER_NONE", DAO_INTEGER, SDL_ARRAYORDER_NONE },
  { "SDL_ARRAYORDER_RGB", DAO_INTEGER, SDL_ARRAYORDER_RGB },
  { "SDL_ARRAYORDER_RGBA", DAO_INTEGER, SDL_ARRAYORDER_RGBA },
  { "SDL_ARRAYORDER_ARGB", DAO_INTEGER, SDL_ARRAYORDER_ARGB },
  { "SDL_ARRAYORDER_BGR", DAO_INTEGER, SDL_ARRAYORDER_BGR },
  { "SDL_ARRAYORDER_BGRA", DAO_INTEGER, SDL_ARRAYORDER_BGRA },
  { "SDL_ARRAYORDER_ABGR", DAO_INTEGER, SDL_ARRAYORDER_ABGR },
  { "SDL_PACKEDLAYOUT_NONE", DAO_INTEGER, SDL_PACKEDLAYOUT_NONE },
  { "SDL_PACKEDLAYOUT_332", DAO_INTEGER, SDL_PACKEDLAYOUT_332 },
  { "SDL_PACKEDLAYOUT_4444", DAO_INTEGER, SDL_PACKEDLAYOUT_4444 },
  { "SDL_PACKEDLAYOUT_1555", DAO_INTEGER, SDL_PACKEDLAYOUT_1555 },
  { "SDL_PACKEDLAYOUT_5551", DAO_INTEGER, SDL_PACKEDLAYOUT_5551 },
  { "SDL_PACKEDLAYOUT_565", DAO_INTEGER, SDL_PACKEDLAYOUT_565 },
  { "SDL_PACKEDLAYOUT_8888", DAO_INTEGER, SDL_PACKEDLAYOUT_8888 },
  { "SDL_PACKEDLAYOUT_2101010", DAO_INTEGER, SDL_PACKEDLAYOUT_2101010 },
  { "SDL_PACKEDLAYOUT_1010102", DAO_INTEGER, SDL_PACKEDLAYOUT_1010102 },
  { "SDL_PIXELFORMAT_UNKNOWN", DAO_INTEGER, SDL_PIXELFORMAT_UNKNOWN },
  { "SDL_PIXELFORMAT_INDEX1LSB", DAO_INTEGER, SDL_PIXELFORMAT_INDEX1LSB },
  { "SDL_PIXELFORMAT_INDEX1MSB", DAO_INTEGER, SDL_PIXELFORMAT_INDEX1MSB },
  { "SDL_PIXELFORMAT_INDEX4LSB", DAO_INTEGER, SDL_PIXELFORMAT_INDEX4LSB },
  { "SDL_PIXELFORMAT_INDEX4MSB", DAO_INTEGER, SDL_PIXELFORMAT_INDEX4MSB },
  { "SDL_PIXELFORMAT_INDEX8", DAO_INTEGER, SDL_PIXELFORMAT_INDEX8 },
  { "SDL_PIXELFORMAT_RGB332", DAO_INTEGER, SDL_PIXELFORMAT_RGB332 },
  { "SDL_PIXELFORMAT_RGB444", DAO_INTEGER, SDL_PIXELFORMAT_RGB444 },
  { "SDL_PIXELFORMAT_RGB555", DAO_INTEGER, SDL_PIXELFORMAT_RGB555 },
  { "SDL_PIXELFORMAT_BGR555", DAO_INTEGER, SDL_PIXELFORMAT_BGR555 },
  { "SDL_PIXELFORMAT_ARGB4444", DAO_INTEGER, SDL_PIXELFORMAT_ARGB4444 },
  { "SDL_PIXELFORMAT_RGBA4444", DAO_INTEGER, SDL_PIXELFORMAT_RGBA4444 },
  { "SDL_PIXELFORMAT_ABGR4444", DAO_INTEGER, SDL_PIXELFORMAT_ABGR4444 },
  { "SDL_PIXELFORMAT_BGRA4444", DAO_INTEGER, SDL_PIXELFORMAT_BGRA4444 },
  { "SDL_PIXELFORMAT_ARGB1555", DAO_INTEGER, SDL_PIXELFORMAT_ARGB1555 },
  { "SDL_PIXELFORMAT_RGBA5551", DAO_INTEGER, SDL_PIXELFORMAT_RGBA5551 },
  { "SDL_PIXELFORMAT_ABGR1555", DAO_INTEGER, SDL_PIXELFORMAT_ABGR1555 },
  { "SDL_PIXELFORMAT_BGRA5551", DAO_INTEGER, SDL_PIXELFORMAT_BGRA5551 },
  { "SDL_PIXELFORMAT_RGB565", DAO_INTEGER, SDL_PIXELFORMAT_RGB565 },
  { "SDL_PIXELFORMAT_BGR565", DAO_INTEGER, SDL_PIXELFORMAT_BGR565 },
  { "SDL_PIXELFORMAT_RGB24", DAO_INTEGER, SDL_PIXELFORMAT_RGB24 },
  { "SDL_PIXELFORMAT_BGR24", DAO_INTEGER, SDL_PIXELFORMAT_BGR24 },
  { "SDL_PIXELFORMAT_RGB888", DAO_INTEGER, SDL_PIXELFORMAT_RGB888 },
  { "SDL_PIXELFORMAT_RGBX8888", DAO_INTEGER, SDL_PIXELFORMAT_RGBX8888 },
  { "SDL_PIXELFORMAT_BGR888", DAO_INTEGER, SDL_PIXELFORMAT_BGR888 },
  { "SDL_PIXELFORMAT_BGRX8888", DAO_INTEGER, SDL_PIXELFORMAT_BGRX8888 },
  { "SDL_PIXELFORMAT_ARGB8888", DAO_INTEGER, SDL_PIXELFORMAT_ARGB8888 },
  { "SDL_PIXELFORMAT_RGBA8888", DAO_INTEGER, SDL_PIXELFORMAT_RGBA8888 },
  { "SDL_PIXELFORMAT_ABGR8888", DAO_INTEGER, SDL_PIXELFORMAT_ABGR8888 },
  { "SDL_PIXELFORMAT_BGRA8888", DAO_INTEGER, SDL_PIXELFORMAT_BGRA8888 },
  { "SDL_PIXELFORMAT_ARGB2101010", DAO_INTEGER, SDL_PIXELFORMAT_ARGB2101010 },
  { "SDL_PIXELFORMAT_YV12", DAO_INTEGER, SDL_PIXELFORMAT_YV12 },
  { "SDL_PIXELFORMAT_IYUV", DAO_INTEGER, SDL_PIXELFORMAT_IYUV },
  { "SDL_PIXELFORMAT_YUY2", DAO_INTEGER, SDL_PIXELFORMAT_YUY2 },
  { "SDL_PIXELFORMAT_UYVY", DAO_INTEGER, SDL_PIXELFORMAT_UYVY },
  { "SDL_PIXELFORMAT_YVYU", DAO_INTEGER, SDL_PIXELFORMAT_YVYU },
  { "SDL_BLENDMODE_NONE", DAO_INTEGER, SDL_BLENDMODE_NONE },
  { "SDL_BLENDMODE_BLEND", DAO_INTEGER, SDL_BLENDMODE_BLEND },
  { "SDL_BLENDMODE_ADD", DAO_INTEGER, SDL_BLENDMODE_ADD },
  { "SDL_BLENDMODE_MOD", DAO_INTEGER, SDL_BLENDMODE_MOD },
  { "SDL_WINDOW_FULLSCREEN", DAO_INTEGER, SDL_WINDOW_FULLSCREEN },
  { "SDL_WINDOW_OPENGL", DAO_INTEGER, SDL_WINDOW_OPENGL },
  { "SDL_WINDOW_SHOWN", DAO_INTEGER, SDL_WINDOW_SHOWN },
  { "SDL_WINDOW_HIDDEN", DAO_INTEGER, SDL_WINDOW_HIDDEN },
  { "SDL_WINDOW_BORDERLESS", DAO_INTEGER, SDL_WINDOW_BORDERLESS },
  { "SDL_WINDOW_RESIZABLE", DAO_INTEGER, SDL_WINDOW_RESIZABLE },
  { "SDL_WINDOW_MINIMIZED", DAO_INTEGER, SDL_WINDOW_MINIMIZED },
  { "SDL_WINDOW_MAXIMIZED", DAO_INTEGER, SDL_WINDOW_MAXIMIZED },
  { "SDL_WINDOW_INPUT_GRABBED", DAO_INTEGER, SDL_WINDOW_INPUT_GRABBED },
  { "SDL_WINDOW_INPUT_FOCUS", DAO_INTEGER, SDL_WINDOW_INPUT_FOCUS },
  { "SDL_WINDOW_MOUSE_FOCUS", DAO_INTEGER, SDL_WINDOW_MOUSE_FOCUS },
  { "SDL_WINDOW_FULLSCREEN_DESKTOP", DAO_INTEGER, SDL_WINDOW_FULLSCREEN_DESKTOP },
  { "SDL_WINDOW_FOREIGN", DAO_INTEGER, SDL_WINDOW_FOREIGN },
  { "SDL_WINDOWEVENT_NONE", DAO_INTEGER, SDL_WINDOWEVENT_NONE },
  { "SDL_WINDOWEVENT_SHOWN", DAO_INTEGER, SDL_WINDOWEVENT_SHOWN },
  { "SDL_WINDOWEVENT_HIDDEN", DAO_INTEGER, SDL_WINDOWEVENT_HIDDEN },
  { "SDL_WINDOWEVENT_EXPOSED", DAO_INTEGER, SDL_WINDOWEVENT_EXPOSED },
  { "SDL_WINDOWEVENT_MOVED", DAO_INTEGER, SDL_WINDOWEVENT_MOVED },
  { "SDL_WINDOWEVENT_RESIZED", DAO_INTEGER, SDL_WINDOWEVENT_RESIZED },
  { "SDL_WINDOWEVENT_SIZE_CHANGED", DAO_INTEGER, SDL_WINDOWEVENT_SIZE_CHANGED },
  { "SDL_WINDOWEVENT_MINIMIZED", DAO_INTEGER, SDL_WINDOWEVENT_MINIMIZED },
  { "SDL_WINDOWEVENT_MAXIMIZED", DAO_INTEGER, SDL_WINDOWEVENT_MAXIMIZED },
  { "SDL_WINDOWEVENT_RESTORED", DAO_INTEGER, SDL_WINDOWEVENT_RESTORED },
  { "SDL_WINDOWEVENT_ENTER", DAO_INTEGER, SDL_WINDOWEVENT_ENTER },
  { "SDL_WINDOWEVENT_LEAVE", DAO_INTEGER, SDL_WINDOWEVENT_LEAVE },
  { "SDL_WINDOWEVENT_FOCUS_GAINED", DAO_INTEGER, SDL_WINDOWEVENT_FOCUS_GAINED },
  { "SDL_WINDOWEVENT_FOCUS_LOST", DAO_INTEGER, SDL_WINDOWEVENT_FOCUS_LOST },
  { "SDL_WINDOWEVENT_CLOSE", DAO_INTEGER, SDL_WINDOWEVENT_CLOSE },
  { "SDL_GL_RED_SIZE", DAO_INTEGER, SDL_GL_RED_SIZE },
  { "SDL_GL_GREEN_SIZE", DAO_INTEGER, SDL_GL_GREEN_SIZE },
  { "SDL_GL_BLUE_SIZE", DAO_INTEGER, SDL_GL_BLUE_SIZE },
  { "SDL_GL_ALPHA_SIZE", DAO_INTEGER, SDL_GL_ALPHA_SIZE },
  { "SDL_GL_BUFFER_SIZE", DAO_INTEGER, SDL_GL_BUFFER_SIZE },
  { "SDL_GL_DOUBLEBUFFER", DAO_INTEGER, SDL_GL_DOUBLEBUFFER },
  { "SDL_GL_DEPTH_SIZE", DAO_INTEGER, SDL_GL_DEPTH_SIZE },
  { "SDL_GL_STENCIL_SIZE", DAO_INTEGER, SDL_GL_STENCIL_SIZE },
  { "SDL_GL_ACCUM_RED_SIZE", DAO_INTEGER, SDL_GL_ACCUM_RED_SIZE },
  { "SDL_GL_ACCUM_GREEN_SIZE", DAO_INTEGER, SDL_GL_ACCUM_GREEN_SIZE },
  { "SDL_GL_ACCUM_BLUE_SIZE", DAO_INTEGER, SDL_GL_ACCUM_BLUE_SIZE },
  { "SDL_GL_ACCUM_ALPHA_SIZE", DAO_INTEGER, SDL_GL_ACCUM_ALPHA_SIZE },
  { "SDL_GL_STEREO", DAO_INTEGER, SDL_GL_STEREO },
  { "SDL_GL_MULTISAMPLEBUFFERS", DAO_INTEGER, SDL_GL_MULTISAMPLEBUFFERS },
  { "SDL_GL_MULTISAMPLESAMPLES", DAO_INTEGER, SDL_GL_MULTISAMPLESAMPLES },
  { "SDL_GL_ACCELERATED_VISUAL", DAO_INTEGER, SDL_GL_ACCELERATED_VISUAL },
  { "SDL_GL_RETAINED_BACKING", DAO_INTEGER, SDL_GL_RETAINED_BACKING },
  { "SDL_GL_CONTEXT_MAJOR_VERSION", DAO_INTEGER, SDL_GL_CONTEXT_MAJOR_VERSION },
  { "SDL_GL_CONTEXT_MINOR_VERSION", DAO_INTEGER, SDL_GL_CONTEXT_MINOR_VERSION },
  { "SDL_GL_CONTEXT_EGL", DAO_INTEGER, SDL_GL_CONTEXT_EGL },
  { "SDL_GL_CONTEXT_FLAGS", DAO_INTEGER, SDL_GL_CONTEXT_FLAGS },
  { "SDL_GL_CONTEXT_PROFILE_MASK", DAO_INTEGER, SDL_GL_CONTEXT_PROFILE_MASK },
  { "SDL_GL_SHARE_WITH_CURRENT_CONTEXT", DAO_INTEGER, SDL_GL_SHARE_WITH_CURRENT_CONTEXT },
  { "SDL_GL_CONTEXT_PROFILE_CORE", DAO_INTEGER, SDL_GL_CONTEXT_PROFILE_CORE },
  { "SDL_GL_CONTEXT_PROFILE_COMPATIBILITY", DAO_INTEGER, SDL_GL_CONTEXT_PROFILE_COMPATIBILITY },
  { "SDL_GL_CONTEXT_PROFILE_ES", DAO_INTEGER, SDL_GL_CONTEXT_PROFILE_ES },
  { "SDL_GL_CONTEXT_DEBUG_FLAG", DAO_INTEGER, SDL_GL_CONTEXT_DEBUG_FLAG },
  { "SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG", DAO_INTEGER, SDL_GL_CONTEXT_FORWARD_COMPATIBLE_FLAG },
  { "SDL_GL_CONTEXT_ROBUST_ACCESS_FLAG", DAO_INTEGER, SDL_GL_CONTEXT_ROBUST_ACCESS_FLAG },
  { "SDL_GL_CONTEXT_RESET_ISOLATION_FLAG", DAO_INTEGER, SDL_GL_CONTEXT_RESET_ISOLATION_FLAG },
  { "SDL_SCANCODE_UNKNOWN", DAO_INTEGER, SDL_SCANCODE_UNKNOWN },
  { "SDL_SCANCODE_A", DAO_INTEGER, SDL_SCANCODE_A },
  { "SDL_SCANCODE_B", DAO_INTEGER, SDL_SCANCODE_B },
  { "SDL_SCANCODE_C", DAO_INTEGER, SDL_SCANCODE_C },
  { "SDL_SCANCODE_D", DAO_INTEGER, SDL_SCANCODE_D },
  { "SDL_SCANCODE_E", DAO_INTEGER, SDL_SCANCODE_E },
  { "SDL_SCANCODE_F", DAO_INTEGER, SDL_SCANCODE_F },
  { "SDL_SCANCODE_G", DAO_INTEGER, SDL_SCANCODE_G },
  { "SDL_SCANCODE_H", DAO_INTEGER, SDL_SCANCODE_H },
  { "SDL_SCANCODE_I", DAO_INTEGER, SDL_SCANCODE_I },
  { "SDL_SCANCODE_J", DAO_INTEGER, SDL_SCANCODE_J },
  { "SDL_SCANCODE_K", DAO_INTEGER, SDL_SCANCODE_K },
  { "SDL_SCANCODE_L", DAO_INTEGER, SDL_SCANCODE_L },
  { "SDL_SCANCODE_M", DAO_INTEGER, SDL_SCANCODE_M },
  { "SDL_SCANCODE_N", DAO_INTEGER, SDL_SCANCODE_N },
  { "SDL_SCANCODE_O", DAO_INTEGER, SDL_SCANCODE_O },
  { "SDL_SCANCODE_P", DAO_INTEGER, SDL_SCANCODE_P },
  { "SDL_SCANCODE_Q", DAO_INTEGER, SDL_SCANCODE_Q },
  { "SDL_SCANCODE_R", DAO_INTEGER, SDL_SCANCODE_R },
  { "SDL_SCANCODE_S", DAO_INTEGER, SDL_SCANCODE_S },
  { "SDL_SCANCODE_T", DAO_INTEGER, SDL_SCANCODE_T },
  { "SDL_SCANCODE_U", DAO_INTEGER, SDL_SCANCODE_U },
  { "SDL_SCANCODE_V", DAO_INTEGER, SDL_SCANCODE_V },
  { "SDL_SCANCODE_W", DAO_INTEGER, SDL_SCANCODE_W },
  { "SDL_SCANCODE_X", DAO_INTEGER, SDL_SCANCODE_X },
  { "SDL_SCANCODE_Y", DAO_INTEGER, SDL_SCANCODE_Y },
  { "SDL_SCANCODE_Z", DAO_INTEGER, SDL_SCANCODE_Z },
  { "SDL_SCANCODE_1", DAO_INTEGER, SDL_SCANCODE_1 },
  { "SDL_SCANCODE_2", DAO_INTEGER, SDL_SCANCODE_2 },
  { "SDL_SCANCODE_3", DAO_INTEGER, SDL_SCANCODE_3 },
  { "SDL_SCANCODE_4", DAO_INTEGER, SDL_SCANCODE_4 },
  { "SDL_SCANCODE_5", DAO_INTEGER, SDL_SCANCODE_5 },
  { "SDL_SCANCODE_6", DAO_INTEGER, SDL_SCANCODE_6 },
  { "SDL_SCANCODE_7", DAO_INTEGER, SDL_SCANCODE_7 },
  { "SDL_SCANCODE_8", DAO_INTEGER, SDL_SCANCODE_8 },
  { "SDL_SCANCODE_9", DAO_INTEGER, SDL_SCANCODE_9 },
  { "SDL_SCANCODE_0", DAO_INTEGER, SDL_SCANCODE_0 },
  { "SDL_SCANCODE_RETURN", DAO_INTEGER, SDL_SCANCODE_RETURN },
  { "SDL_SCANCODE_ESCAPE", DAO_INTEGER, SDL_SCANCODE_ESCAPE },
  { "SDL_SCANCODE_BACKSPACE", DAO_INTEGER, SDL_SCANCODE_BACKSPACE },
  { "SDL_SCANCODE_TAB", DAO_INTEGER, SDL_SCANCODE_TAB },
  { "SDL_SCANCODE_SPACE", DAO_INTEGER, SDL_SCANCODE_SPACE },
  { "SDL_SCANCODE_MINUS", DAO_INTEGER, SDL_SCANCODE_MINUS },
  { "SDL_SCANCODE_EQUALS", DAO_INTEGER, SDL_SCANCODE_EQUALS },
  { "SDL_SCANCODE_LEFTBRACKET", DAO_INTEGER, SDL_SCANCODE_LEFTBRACKET },
  { "SDL_SCANCODE_RIGHTBRACKET", DAO_INTEGER, SDL_SCANCODE_RIGHTBRACKET },
  { "SDL_SCANCODE_BACKSLASH", DAO_INTEGER, SDL_SCANCODE_BACKSLASH },
  { "SDL_SCANCODE_NONUSHASH", DAO_INTEGER, SDL_SCANCODE_NONUSHASH },
  { "SDL_SCANCODE_SEMICOLON", DAO_INTEGER, SDL_SCANCODE_SEMICOLON },
  { "SDL_SCANCODE_APOSTROPHE", DAO_INTEGER, SDL_SCANCODE_APOSTROPHE },
  { "SDL_SCANCODE_GRAVE", DAO_INTEGER, SDL_SCANCODE_GRAVE },
  { "SDL_SCANCODE_COMMA", DAO_INTEGER, SDL_SCANCODE_COMMA },
  { "SDL_SCANCODE_PERIOD", DAO_INTEGER, SDL_SCANCODE_PERIOD },
  { "SDL_SCANCODE_SLASH", DAO_INTEGER, SDL_SCANCODE_SLASH },
  { "SDL_SCANCODE_CAPSLOCK", DAO_INTEGER, SDL_SCANCODE_CAPSLOCK },
  { "SDL_SCANCODE_F1", DAO_INTEGER, SDL_SCANCODE_F1 },
  { "SDL_SCANCODE_F2", DAO_INTEGER, SDL_SCANCODE_F2 },
  { "SDL_SCANCODE_F3", DAO_INTEGER, SDL_SCANCODE_F3 },
  { "SDL_SCANCODE_F4", DAO_INTEGER, SDL_SCANCODE_F4 },
  { "SDL_SCANCODE_F5", DAO_INTEGER, SDL_SCANCODE_F5 },
  { "SDL_SCANCODE_F6", DAO_INTEGER, SDL_SCANCODE_F6 },
  { "SDL_SCANCODE_F7", DAO_INTEGER, SDL_SCANCODE_F7 },
  { "SDL_SCANCODE_F8", DAO_INTEGER, SDL_SCANCODE_F8 },
  { "SDL_SCANCODE_F9", DAO_INTEGER, SDL_SCANCODE_F9 },
  { "SDL_SCANCODE_F10", DAO_INTEGER, SDL_SCANCODE_F10 },
  { "SDL_SCANCODE_F11", DAO_INTEGER, SDL_SCANCODE_F11 },
  { "SDL_SCANCODE_F12", DAO_INTEGER, SDL_SCANCODE_F12 },
  { "SDL_SCANCODE_PRINTSCREEN", DAO_INTEGER, SDL_SCANCODE_PRINTSCREEN },
  { "SDL_SCANCODE_SCROLLLOCK", DAO_INTEGER, SDL_SCANCODE_SCROLLLOCK },
  { "SDL_SCANCODE_PAUSE", DAO_INTEGER, SDL_SCANCODE_PAUSE },
  { "SDL_SCANCODE_INSERT", DAO_INTEGER, SDL_SCANCODE_INSERT },
  { "SDL_SCANCODE_HOME", DAO_INTEGER, SDL_SCANCODE_HOME },
  { "SDL_SCANCODE_PAGEUP", DAO_INTEGER, SDL_SCANCODE_PAGEUP },
  { "SDL_SCANCODE_DELETE", DAO_INTEGER, SDL_SCANCODE_DELETE },
  { "SDL_SCANCODE_END", DAO_INTEGER, SDL_SCANCODE_END },
  { "SDL_SCANCODE_PAGEDOWN", DAO_INTEGER, SDL_SCANCODE_PAGEDOWN },
  { "SDL_SCANCODE_RIGHT", DAO_INTEGER, SDL_SCANCODE_RIGHT },
  { "SDL_SCANCODE_LEFT", DAO_INTEGER, SDL_SCANCODE_LEFT },
  { "SDL_SCANCODE_DOWN", DAO_INTEGER, SDL_SCANCODE_DOWN },
  { "SDL_SCANCODE_UP", DAO_INTEGER, SDL_SCANCODE_UP },
  { "SDL_SCANCODE_NUMLOCKCLEAR", DAO_INTEGER, SDL_SCANCODE_NUMLOCKCLEAR },
  { "SDL_SCANCODE_KP_DIVIDE", DAO_INTEGER, SDL_SCANCODE_KP_DIVIDE },
  { "SDL_SCANCODE_KP_MULTIPLY", DAO_INTEGER, SDL_SCANCODE_KP_MULTIPLY },
  { "SDL_SCANCODE_KP_MINUS", DAO_INTEGER, SDL_SCANCODE_KP_MINUS },
  { "SDL_SCANCODE_KP_PLUS", DAO_INTEGER, SDL_SCANCODE_KP_PLUS },
  { "SDL_SCANCODE_KP_ENTER", DAO_INTEGER, SDL_SCANCODE_KP_ENTER },
  { "SDL_SCANCODE_KP_1", DAO_INTEGER, SDL_SCANCODE_KP_1 },
  { "SDL_SCANCODE_KP_2", DAO_INTEGER, SDL_SCANCODE_KP_2 },
  { "SDL_SCANCODE_KP_3", DAO_INTEGER, SDL_SCANCODE_KP_3 },
  { "SDL_SCANCODE_KP_4", DAO_INTEGER, SDL_SCANCODE_KP_4 },
  { "SDL_SCANCODE_KP_5", DAO_INTEGER, SDL_SCANCODE_KP_5 },
  { "SDL_SCANCODE_KP_6", DAO_INTEGER, SDL_SCANCODE_KP_6 },
  { "SDL_SCANCODE_KP_7", DAO_INTEGER, SDL_SCANCODE_KP_7 },
  { "SDL_SCANCODE_KP_8", DAO_INTEGER, SDL_SCANCODE_KP_8 },
  { "SDL_SCANCODE_KP_9", DAO_INTEGER, SDL_SCANCODE_KP_9 },
  { "SDL_SCANCODE_KP_0", DAO_INTEGER, SDL_SCANCODE_KP_0 },
  { "SDL_SCANCODE_KP_PERIOD", DAO_INTEGER, SDL_SCANCODE_KP_PERIOD },
  { "SDL_SCANCODE_NONUSBACKSLASH", DAO_INTEGER, SDL_SCANCODE_NONUSBACKSLASH },
  { "SDL_SCANCODE_APPLICATION", DAO_INTEGER, SDL_SCANCODE_APPLICATION },
  { "SDL_SCANCODE_POWER", DAO_INTEGER, SDL_SCANCODE_POWER },
  { "SDL_SCANCODE_KP_EQUALS", DAO_INTEGER, SDL_SCANCODE_KP_EQUALS },
  { "SDL_SCANCODE_F13", DAO_INTEGER, SDL_SCANCODE_F13 },
  { "SDL_SCANCODE_F14", DAO_INTEGER, SDL_SCANCODE_F14 },
  { "SDL_SCANCODE_F15", DAO_INTEGER, SDL_SCANCODE_F15 },
  { "SDL_SCANCODE_F16", DAO_INTEGER, SDL_SCANCODE_F16 },
  { "SDL_SCANCODE_F17", DAO_INTEGER, SDL_SCANCODE_F17 },
  { "SDL_SCANCODE_F18", DAO_INTEGER, SDL_SCANCODE_F18 },
  { "SDL_SCANCODE_F19", DAO_INTEGER, SDL_SCANCODE_F19 },
  { "SDL_SCANCODE_F20", DAO_INTEGER, SDL_SCANCODE_F20 },
  { "SDL_SCANCODE_F21", DAO_INTEGER, SDL_SCANCODE_F21 },
  { "SDL_SCANCODE_F22", DAO_INTEGER, SDL_SCANCODE_F22 },
  { "SDL_SCANCODE_F23", DAO_INTEGER, SDL_SCANCODE_F23 },
  { "SDL_SCANCODE_F24", DAO_INTEGER, SDL_SCANCODE_F24 },
  { "SDL_SCANCODE_EXECUTE", DAO_INTEGER, SDL_SCANCODE_EXECUTE },
  { "SDL_SCANCODE_HELP", DAO_INTEGER, SDL_SCANCODE_HELP },
  { "SDL_SCANCODE_MENU", DAO_INTEGER, SDL_SCANCODE_MENU },
  { "SDL_SCANCODE_SELECT", DAO_INTEGER, SDL_SCANCODE_SELECT },
  { "SDL_SCANCODE_STOP", DAO_INTEGER, SDL_SCANCODE_STOP },
  { "SDL_SCANCODE_AGAIN", DAO_INTEGER, SDL_SCANCODE_AGAIN },
  { "SDL_SCANCODE_UNDO", DAO_INTEGER, SDL_SCANCODE_UNDO },
  { "SDL_SCANCODE_CUT", DAO_INTEGER, SDL_SCANCODE_CUT },
  { "SDL_SCANCODE_COPY", DAO_INTEGER, SDL_SCANCODE_COPY },
  { "SDL_SCANCODE_PASTE", DAO_INTEGER, SDL_SCANCODE_PASTE },
  { "SDL_SCANCODE_FIND", DAO_INTEGER, SDL_SCANCODE_FIND },
  { "SDL_SCANCODE_MUTE", DAO_INTEGER, SDL_SCANCODE_MUTE },
  { "SDL_SCANCODE_VOLUMEUP", DAO_INTEGER, SDL_SCANCODE_VOLUMEUP },
  { "SDL_SCANCODE_VOLUMEDOWN", DAO_INTEGER, SDL_SCANCODE_VOLUMEDOWN },
  { "SDL_SCANCODE_KP_COMMA", DAO_INTEGER, SDL_SCANCODE_KP_COMMA },
  { "SDL_SCANCODE_KP_EQUALSAS400", DAO_INTEGER, SDL_SCANCODE_KP_EQUALSAS400 },
  { "SDL_SCANCODE_INTERNATIONAL1", DAO_INTEGER, SDL_SCANCODE_INTERNATIONAL1 },
  { "SDL_SCANCODE_INTERNATIONAL2", DAO_INTEGER, SDL_SCANCODE_INTERNATIONAL2 },
  { "SDL_SCANCODE_INTERNATIONAL3", DAO_INTEGER, SDL_SCANCODE_INTERNATIONAL3 },
  { "SDL_SCANCODE_INTERNATIONAL4", DAO_INTEGER, SDL_SCANCODE_INTERNATIONAL4 },
  { "SDL_SCANCODE_INTERNATIONAL5", DAO_INTEGER, SDL_SCANCODE_INTERNATIONAL5 },
  { "SDL_SCANCODE_INTERNATIONAL6", DAO_INTEGER, SDL_SCANCODE_INTERNATIONAL6 },
  { "SDL_SCANCODE_INTERNATIONAL7", DAO_INTEGER, SDL_SCANCODE_INTERNATIONAL7 },
  { "SDL_SCANCODE_INTERNATIONAL8", DAO_INTEGER, SDL_SCANCODE_INTERNATIONAL8 },
  { "SDL_SCANCODE_INTERNATIONAL9", DAO_INTEGER, SDL_SCANCODE_INTERNATIONAL9 },
  { "SDL_SCANCODE_LANG1", DAO_INTEGER, SDL_SCANCODE_LANG1 },
  { "SDL_SCANCODE_LANG2", DAO_INTEGER, SDL_SCANCODE_LANG2 },
  { "SDL_SCANCODE_LANG3", DAO_INTEGER, SDL_SCANCODE_LANG3 },
  { "SDL_SCANCODE_LANG4", DAO_INTEGER, SDL_SCANCODE_LANG4 },
  { "SDL_SCANCODE_LANG5", DAO_INTEGER, SDL_SCANCODE_LANG5 },
  { "SDL_SCANCODE_LANG6", DAO_INTEGER, SDL_SCANCODE_LANG6 },
  { "SDL_SCANCODE_LANG7", DAO_INTEGER, SDL_SCANCODE_LANG7 },
  { "SDL_SCANCODE_LANG8", DAO_INTEGER, SDL_SCANCODE_LANG8 },
  { "SDL_SCANCODE_LANG9", DAO_INTEGER, SDL_SCANCODE_LANG9 },
  { "SDL_SCANCODE_ALTERASE", DAO_INTEGER, SDL_SCANCODE_ALTERASE },
  { "SDL_SCANCODE_SYSREQ", DAO_INTEGER, SDL_SCANCODE_SYSREQ },
  { "SDL_SCANCODE_CANCEL", DAO_INTEGER, SDL_SCANCODE_CANCEL },
  { "SDL_SCANCODE_CLEAR", DAO_INTEGER, SDL_SCANCODE_CLEAR },
  { "SDL_SCANCODE_PRIOR", DAO_INTEGER, SDL_SCANCODE_PRIOR },
  { "SDL_SCANCODE_RETURN2", DAO_INTEGER, SDL_SCANCODE_RETURN2 },
  { "SDL_SCANCODE_SEPARATOR", DAO_INTEGER, SDL_SCANCODE_SEPARATOR },
  { "SDL_SCANCODE_OUT", DAO_INTEGER, SDL_SCANCODE_OUT },
  { "SDL_SCANCODE_OPER", DAO_INTEGER, SDL_SCANCODE_OPER },
  { "SDL_SCANCODE_CLEARAGAIN", DAO_INTEGER, SDL_SCANCODE_CLEARAGAIN },
  { "SDL_SCANCODE_CRSEL", DAO_INTEGER, SDL_SCANCODE_CRSEL },
  { "SDL_SCANCODE_EXSEL", DAO_INTEGER, SDL_SCANCODE_EXSEL },
  { "SDL_SCANCODE_KP_00", DAO_INTEGER, SDL_SCANCODE_KP_00 },
  { "SDL_SCANCODE_KP_000", DAO_INTEGER, SDL_SCANCODE_KP_000 },
  { "SDL_SCANCODE_THOUSANDSSEPARATOR", DAO_INTEGER, SDL_SCANCODE_THOUSANDSSEPARATOR },
  { "SDL_SCANCODE_DECIMALSEPARATOR", DAO_INTEGER, SDL_SCANCODE_DECIMALSEPARATOR },
  { "SDL_SCANCODE_CURRENCYUNIT", DAO_INTEGER, SDL_SCANCODE_CURRENCYUNIT },
  { "SDL_SCANCODE_CURRENCYSUBUNIT", DAO_INTEGER, SDL_SCANCODE_CURRENCYSUBUNIT },
  { "SDL_SCANCODE_KP_LEFTPAREN", DAO_INTEGER, SDL_SCANCODE_KP_LEFTPAREN },
  { "SDL_SCANCODE_KP_RIGHTPAREN", DAO_INTEGER, SDL_SCANCODE_KP_RIGHTPAREN },
  { "SDL_SCANCODE_KP_LEFTBRACE", DAO_INTEGER, SDL_SCANCODE_KP_LEFTBRACE },
  { "SDL_SCANCODE_KP_RIGHTBRACE", DAO_INTEGER, SDL_SCANCODE_KP_RIGHTBRACE },
  { "SDL_SCANCODE_KP_TAB", DAO_INTEGER, SDL_SCANCODE_KP_TAB },
  { "SDL_SCANCODE_KP_BACKSPACE", DAO_INTEGER, SDL_SCANCODE_KP_BACKSPACE },
  { "SDL_SCANCODE_KP_A", DAO_INTEGER, SDL_SCANCODE_KP_A },
  { "SDL_SCANCODE_KP_B", DAO_INTEGER, SDL_SCANCODE_KP_B },
  { "SDL_SCANCODE_KP_C", DAO_INTEGER, SDL_SCANCODE_KP_C },
  { "SDL_SCANCODE_KP_D", DAO_INTEGER, SDL_SCANCODE_KP_D },
  { "SDL_SCANCODE_KP_E", DAO_INTEGER, SDL_SCANCODE_KP_E },
  { "SDL_SCANCODE_KP_F", DAO_INTEGER, SDL_SCANCODE_KP_F },
  { "SDL_SCANCODE_KP_XOR", DAO_INTEGER, SDL_SCANCODE_KP_XOR },
  { "SDL_SCANCODE_KP_POWER", DAO_INTEGER, SDL_SCANCODE_KP_POWER },
  { "SDL_SCANCODE_KP_PERCENT", DAO_INTEGER, SDL_SCANCODE_KP_PERCENT },
  { "SDL_SCANCODE_KP_LESS", DAO_INTEGER, SDL_SCANCODE_KP_LESS },
  { "SDL_SCANCODE_KP_GREATER", DAO_INTEGER, SDL_SCANCODE_KP_GREATER },
  { "SDL_SCANCODE_KP_AMPERSAND", DAO_INTEGER, SDL_SCANCODE_KP_AMPERSAND },
  { "SDL_SCANCODE_KP_DBLAMPERSAND", DAO_INTEGER, SDL_SCANCODE_KP_DBLAMPERSAND },
  { "SDL_SCANCODE_KP_VERTICALBAR", DAO_INTEGER, SDL_SCANCODE_KP_VERTICALBAR },
  { "SDL_SCANCODE_KP_DBLVERTICALBAR", DAO_INTEGER, SDL_SCANCODE_KP_DBLVERTICALBAR },
  { "SDL_SCANCODE_KP_COLON", DAO_INTEGER, SDL_SCANCODE_KP_COLON },
  { "SDL_SCANCODE_KP_HASH", DAO_INTEGER, SDL_SCANCODE_KP_HASH },
  { "SDL_SCANCODE_KP_SPACE", DAO_INTEGER, SDL_SCANCODE_KP_SPACE },
  { "SDL_SCANCODE_KP_AT", DAO_INTEGER, SDL_SCANCODE_KP_AT },
  { "SDL_SCANCODE_KP_EXCLAM", DAO_INTEGER, SDL_SCANCODE_KP_EXCLAM },
  { "SDL_SCANCODE_KP_MEMSTORE", DAO_INTEGER, SDL_SCANCODE_KP_MEMSTORE },
  { "SDL_SCANCODE_KP_MEMRECALL", DAO_INTEGER, SDL_SCANCODE_KP_MEMRECALL },
  { "SDL_SCANCODE_KP_MEMCLEAR", DAO_INTEGER, SDL_SCANCODE_KP_MEMCLEAR },
  { "SDL_SCANCODE_KP_MEMADD", DAO_INTEGER, SDL_SCANCODE_KP_MEMADD },
  { "SDL_SCANCODE_KP_MEMSUBTRACT", DAO_INTEGER, SDL_SCANCODE_KP_MEMSUBTRACT },
  { "SDL_SCANCODE_KP_MEMMULTIPLY", DAO_INTEGER, SDL_SCANCODE_KP_MEMMULTIPLY },
  { "SDL_SCANCODE_KP_MEMDIVIDE", DAO_INTEGER, SDL_SCANCODE_KP_MEMDIVIDE },
  { "SDL_SCANCODE_KP_PLUSMINUS", DAO_INTEGER, SDL_SCANCODE_KP_PLUSMINUS },
  { "SDL_SCANCODE_KP_CLEAR", DAO_INTEGER, SDL_SCANCODE_KP_CLEAR },
  { "SDL_SCANCODE_KP_CLEARENTRY", DAO_INTEGER, SDL_SCANCODE_KP_CLEARENTRY },
  { "SDL_SCANCODE_KP_BINARY", DAO_INTEGER, SDL_SCANCODE_KP_BINARY },
  { "SDL_SCANCODE_KP_OCTAL", DAO_INTEGER, SDL_SCANCODE_KP_OCTAL },
  { "SDL_SCANCODE_KP_DECIMAL", DAO_INTEGER, SDL_SCANCODE_KP_DECIMAL },
  { "SDL_SCANCODE_KP_HEXADECIMAL", DAO_INTEGER, SDL_SCANCODE_KP_HEXADECIMAL },
  { "SDL_SCANCODE_LCTRL", DAO_INTEGER, SDL_SCANCODE_LCTRL },
  { "SDL_SCANCODE_LSHIFT", DAO_INTEGER, SDL_SCANCODE_LSHIFT },
  { "SDL_SCANCODE_LALT", DAO_INTEGER, SDL_SCANCODE_LALT },
  { "SDL_SCANCODE_LGUI", DAO_INTEGER, SDL_SCANCODE_LGUI },
  { "SDL_SCANCODE_RCTRL", DAO_INTEGER, SDL_SCANCODE_RCTRL },
  { "SDL_SCANCODE_RSHIFT", DAO_INTEGER, SDL_SCANCODE_RSHIFT },
  { "SDL_SCANCODE_RALT", DAO_INTEGER, SDL_SCANCODE_RALT },
  { "SDL_SCANCODE_RGUI", DAO_INTEGER, SDL_SCANCODE_RGUI },
  { "SDL_SCANCODE_MODE", DAO_INTEGER, SDL_SCANCODE_MODE },
  { "SDL_SCANCODE_AUDIONEXT", DAO_INTEGER, SDL_SCANCODE_AUDIONEXT },
  { "SDL_SCANCODE_AUDIOPREV", DAO_INTEGER, SDL_SCANCODE_AUDIOPREV },
  { "SDL_SCANCODE_AUDIOSTOP", DAO_INTEGER, SDL_SCANCODE_AUDIOSTOP },
  { "SDL_SCANCODE_AUDIOPLAY", DAO_INTEGER, SDL_SCANCODE_AUDIOPLAY },
  { "SDL_SCANCODE_AUDIOMUTE", DAO_INTEGER, SDL_SCANCODE_AUDIOMUTE },
  { "SDL_SCANCODE_MEDIASELECT", DAO_INTEGER, SDL_SCANCODE_MEDIASELECT },
  { "SDL_SCANCODE_WWW", DAO_INTEGER, SDL_SCANCODE_WWW },
  { "SDL_SCANCODE_MAIL", DAO_INTEGER, SDL_SCANCODE_MAIL },
  { "SDL_SCANCODE_CALCULATOR", DAO_INTEGER, SDL_SCANCODE_CALCULATOR },
  { "SDL_SCANCODE_COMPUTER", DAO_INTEGER, SDL_SCANCODE_COMPUTER },
  { "SDL_SCANCODE_AC_SEARCH", DAO_INTEGER, SDL_SCANCODE_AC_SEARCH },
  { "SDL_SCANCODE_AC_HOME", DAO_INTEGER, SDL_SCANCODE_AC_HOME },
  { "SDL_SCANCODE_AC_BACK", DAO_INTEGER, SDL_SCANCODE_AC_BACK },
  { "SDL_SCANCODE_AC_FORWARD", DAO_INTEGER, SDL_SCANCODE_AC_FORWARD },
  { "SDL_SCANCODE_AC_STOP", DAO_INTEGER, SDL_SCANCODE_AC_STOP },
  { "SDL_SCANCODE_AC_REFRESH", DAO_INTEGER, SDL_SCANCODE_AC_REFRESH },
  { "SDL_SCANCODE_AC_BOOKMARKS", DAO_INTEGER, SDL_SCANCODE_AC_BOOKMARKS },
  { "SDL_SCANCODE_BRIGHTNESSDOWN", DAO_INTEGER, SDL_SCANCODE_BRIGHTNESSDOWN },
  { "SDL_SCANCODE_BRIGHTNESSUP", DAO_INTEGER, SDL_SCANCODE_BRIGHTNESSUP },
  { "SDL_SCANCODE_DISPLAYSWITCH", DAO_INTEGER, SDL_SCANCODE_DISPLAYSWITCH },
  { "SDL_SCANCODE_KBDILLUMTOGGLE", DAO_INTEGER, SDL_SCANCODE_KBDILLUMTOGGLE },
  { "SDL_SCANCODE_KBDILLUMDOWN", DAO_INTEGER, SDL_SCANCODE_KBDILLUMDOWN },
  { "SDL_SCANCODE_KBDILLUMUP", DAO_INTEGER, SDL_SCANCODE_KBDILLUMUP },
  { "SDL_SCANCODE_EJECT", DAO_INTEGER, SDL_SCANCODE_EJECT },
  { "SDL_SCANCODE_SLEEP", DAO_INTEGER, SDL_SCANCODE_SLEEP },
  { "SDL_SCANCODE_APP1", DAO_INTEGER, SDL_SCANCODE_APP1 },
  { "SDL_SCANCODE_APP2", DAO_INTEGER, SDL_SCANCODE_APP2 },
  { "SDL_NUM_SCANCODES", DAO_INTEGER, SDL_NUM_SCANCODES },
  { "SDLK_UNKNOWN", DAO_INTEGER, SDLK_UNKNOWN },
  { "SDLK_RETURN", DAO_INTEGER, SDLK_RETURN },
  { "SDLK_ESCAPE", DAO_INTEGER, SDLK_ESCAPE },
  { "SDLK_BACKSPACE", DAO_INTEGER, SDLK_BACKSPACE },
  { "SDLK_TAB", DAO_INTEGER, SDLK_TAB },
  { "SDLK_SPACE", DAO_INTEGER, SDLK_SPACE },
  { "SDLK_EXCLAIM", DAO_INTEGER, SDLK_EXCLAIM },
  { "SDLK_QUOTEDBL", DAO_INTEGER, SDLK_QUOTEDBL },
  { "SDLK_HASH", DAO_INTEGER, SDLK_HASH },
  { "SDLK_PERCENT", DAO_INTEGER, SDLK_PERCENT },
  { "SDLK_DOLLAR", DAO_INTEGER, SDLK_DOLLAR },
  { "SDLK_AMPERSAND", DAO_INTEGER, SDLK_AMPERSAND },
  { "SDLK_QUOTE", DAO_INTEGER, SDLK_QUOTE },
  { "SDLK_LEFTPAREN", DAO_INTEGER, SDLK_LEFTPAREN },
  { "SDLK_RIGHTPAREN", DAO_INTEGER, SDLK_RIGHTPAREN },
  { "SDLK_ASTERISK", DAO_INTEGER, SDLK_ASTERISK },
  { "SDLK_PLUS", DAO_INTEGER, SDLK_PLUS },
  { "SDLK_COMMA", DAO_INTEGER, SDLK_COMMA },
  { "SDLK_MINUS", DAO_INTEGER, SDLK_MINUS },
  { "SDLK_PERIOD", DAO_INTEGER, SDLK_PERIOD },
  { "SDLK_SLASH", DAO_INTEGER, SDLK_SLASH },
  { "SDLK_0", DAO_INTEGER, SDLK_0 },
  { "SDLK_1", DAO_INTEGER, SDLK_1 },
  { "SDLK_2", DAO_INTEGER, SDLK_2 },
  { "SDLK_3", DAO_INTEGER, SDLK_3 },
  { "SDLK_4", DAO_INTEGER, SDLK_4 },
  { "SDLK_5", DAO_INTEGER, SDLK_5 },
  { "SDLK_6", DAO_INTEGER, SDLK_6 },
  { "SDLK_7", DAO_INTEGER, SDLK_7 },
  { "SDLK_8", DAO_INTEGER, SDLK_8 },
  { "SDLK_9", DAO_INTEGER, SDLK_9 },
  { "SDLK_COLON", DAO_INTEGER, SDLK_COLON },
  { "SDLK_SEMICOLON", DAO_INTEGER, SDLK_SEMICOLON },
  { "SDLK_LESS", DAO_INTEGER, SDLK_LESS },
  { "SDLK_EQUALS", DAO_INTEGER, SDLK_EQUALS },
  { "SDLK_GREATER", DAO_INTEGER, SDLK_GREATER },
  { "SDLK_QUESTION", DAO_INTEGER, SDLK_QUESTION },
  { "SDLK_AT", DAO_INTEGER, SDLK_AT },
  { "SDLK_LEFTBRACKET", DAO_INTEGER, SDLK_LEFTBRACKET },
  { "SDLK_BACKSLASH", DAO_INTEGER, SDLK_BACKSLASH },
  { "SDLK_RIGHTBRACKET", DAO_INTEGER, SDLK_RIGHTBRACKET },
  { "SDLK_CARET", DAO_INTEGER, SDLK_CARET },
  { "SDLK_UNDERSCORE", DAO_INTEGER, SDLK_UNDERSCORE },
  { "SDLK_BACKQUOTE", DAO_INTEGER, SDLK_BACKQUOTE },
  { "SDLK_a", DAO_INTEGER, SDLK_a },
  { "SDLK_b", DAO_INTEGER, SDLK_b },
  { "SDLK_c", DAO_INTEGER, SDLK_c },
  { "SDLK_d", DAO_INTEGER, SDLK_d },
  { "SDLK_e", DAO_INTEGER, SDLK_e },
  { "SDLK_f", DAO_INTEGER, SDLK_f },
  { "SDLK_g", DAO_INTEGER, SDLK_g },
  { "SDLK_h", DAO_INTEGER, SDLK_h },
  { "SDLK_i", DAO_INTEGER, SDLK_i },
  { "SDLK_j", DAO_INTEGER, SDLK_j },
  { "SDLK_k", DAO_INTEGER, SDLK_k },
  { "SDLK_l", DAO_INTEGER, SDLK_l },
  { "SDLK_m", DAO_INTEGER, SDLK_m },
  { "SDLK_n", DAO_INTEGER, SDLK_n },
  { "SDLK_o", DAO_INTEGER, SDLK_o },
  { "SDLK_p", DAO_INTEGER, SDLK_p },
  { "SDLK_q", DAO_INTEGER, SDLK_q },
  { "SDLK_r", DAO_INTEGER, SDLK_r },
  { "SDLK_s", DAO_INTEGER, SDLK_s },
  { "SDLK_t", DAO_INTEGER, SDLK_t },
  { "SDLK_u", DAO_INTEGER, SDLK_u },
  { "SDLK_v", DAO_INTEGER, SDLK_v },
  { "SDLK_w", DAO_INTEGER, SDLK_w },
  { "SDLK_x", DAO_INTEGER, SDLK_x },
  { "SDLK_y", DAO_INTEGER, SDLK_y },
  { "SDLK_z", DAO_INTEGER, SDLK_z },
  { "SDLK_CAPSLOCK", DAO_INTEGER, SDLK_CAPSLOCK },
  { "SDLK_F1", DAO_INTEGER, SDLK_F1 },
  { "SDLK_F2", DAO_INTEGER, SDLK_F2 },
  { "SDLK_F3", DAO_INTEGER, SDLK_F3 },
  { "SDLK_F4", DAO_INTEGER, SDLK_F4 },
  { "SDLK_F5", DAO_INTEGER, SDLK_F5 },
  { "SDLK_F6", DAO_INTEGER, SDLK_F6 },
  { "SDLK_F7", DAO_INTEGER, SDLK_F7 },
  { "SDLK_F8", DAO_INTEGER, SDLK_F8 },
  { "SDLK_F9", DAO_INTEGER, SDLK_F9 },
  { "SDLK_F10", DAO_INTEGER, SDLK_F10 },
  { "SDLK_F11", DAO_INTEGER, SDLK_F11 },
  { "SDLK_F12", DAO_INTEGER, SDLK_F12 },
  { "SDLK_PRINTSCREEN", DAO_INTEGER, SDLK_PRINTSCREEN },
  { "SDLK_SCROLLLOCK", DAO_INTEGER, SDLK_SCROLLLOCK },
  { "SDLK_PAUSE", DAO_INTEGER, SDLK_PAUSE },
  { "SDLK_INSERT", DAO_INTEGER, SDLK_INSERT },
  { "SDLK_HOME", DAO_INTEGER, SDLK_HOME },
  { "SDLK_PAGEUP", DAO_INTEGER, SDLK_PAGEUP },
  { "SDLK_DELETE", DAO_INTEGER, SDLK_DELETE },
  { "SDLK_END", DAO_INTEGER, SDLK_END },
  { "SDLK_PAGEDOWN", DAO_INTEGER, SDLK_PAGEDOWN },
  { "SDLK_RIGHT", DAO_INTEGER, SDLK_RIGHT },
  { "SDLK_LEFT", DAO_INTEGER, SDLK_LEFT },
  { "SDLK_DOWN", DAO_INTEGER, SDLK_DOWN },
  { "SDLK_UP", DAO_INTEGER, SDLK_UP },
  { "SDLK_NUMLOCKCLEAR", DAO_INTEGER, SDLK_NUMLOCKCLEAR },
  { "SDLK_KP_DIVIDE", DAO_INTEGER, SDLK_KP_DIVIDE },
  { "SDLK_KP_MULTIPLY", DAO_INTEGER, SDLK_KP_MULTIPLY },
  { "SDLK_KP_MINUS", DAO_INTEGER, SDLK_KP_MINUS },
  { "SDLK_KP_PLUS", DAO_INTEGER, SDLK_KP_PLUS },
  { "SDLK_KP_ENTER", DAO_INTEGER, SDLK_KP_ENTER },
  { "SDLK_KP_1", DAO_INTEGER, SDLK_KP_1 },
  { "SDLK_KP_2", DAO_INTEGER, SDLK_KP_2 },
  { "SDLK_KP_3", DAO_INTEGER, SDLK_KP_3 },
  { "SDLK_KP_4", DAO_INTEGER, SDLK_KP_4 },
  { "SDLK_KP_5", DAO_INTEGER, SDLK_KP_5 },
  { "SDLK_KP_6", DAO_INTEGER, SDLK_KP_6 },
  { "SDLK_KP_7", DAO_INTEGER, SDLK_KP_7 },
  { "SDLK_KP_8", DAO_INTEGER, SDLK_KP_8 },
  { "SDLK_KP_9", DAO_INTEGER, SDLK_KP_9 },
  { "SDLK_KP_0", DAO_INTEGER, SDLK_KP_0 },
  { "SDLK_KP_PERIOD", DAO_INTEGER, SDLK_KP_PERIOD },
  { "SDLK_APPLICATION", DAO_INTEGER, SDLK_APPLICATION },
  { "SDLK_POWER", DAO_INTEGER, SDLK_POWER },
  { "SDLK_KP_EQUALS", DAO_INTEGER, SDLK_KP_EQUALS },
  { "SDLK_F13", DAO_INTEGER, SDLK_F13 },
  { "SDLK_F14", DAO_INTEGER, SDLK_F14 },
  { "SDLK_F15", DAO_INTEGER, SDLK_F15 },
  { "SDLK_F16", DAO_INTEGER, SDLK_F16 },
  { "SDLK_F17", DAO_INTEGER, SDLK_F17 },
  { "SDLK_F18", DAO_INTEGER, SDLK_F18 },
  { "SDLK_F19", DAO_INTEGER, SDLK_F19 },
  { "SDLK_F20", DAO_INTEGER, SDLK_F20 },
  { "SDLK_F21", DAO_INTEGER, SDLK_F21 },
  { "SDLK_F22", DAO_INTEGER, SDLK_F22 },
  { "SDLK_F23", DAO_INTEGER, SDLK_F23 },
  { "SDLK_F24", DAO_INTEGER, SDLK_F24 },
  { "SDLK_EXECUTE", DAO_INTEGER, SDLK_EXECUTE },
  { "SDLK_HELP", DAO_INTEGER, SDLK_HELP },
  { "SDLK_MENU", DAO_INTEGER, SDLK_MENU },
  { "SDLK_SELECT", DAO_INTEGER, SDLK_SELECT },
  { "SDLK_STOP", DAO_INTEGER, SDLK_STOP },
  { "SDLK_AGAIN", DAO_INTEGER, SDLK_AGAIN },
  { "SDLK_UNDO", DAO_INTEGER, SDLK_UNDO },
  { "SDLK_CUT", DAO_INTEGER, SDLK_CUT },
  { "SDLK_COPY", DAO_INTEGER, SDLK_COPY },
  { "SDLK_PASTE", DAO_INTEGER, SDLK_PASTE },
  { "SDLK_FIND", DAO_INTEGER, SDLK_FIND },
  { "SDLK_MUTE", DAO_INTEGER, SDLK_MUTE },
  { "SDLK_VOLUMEUP", DAO_INTEGER, SDLK_VOLUMEUP },
  { "SDLK_VOLUMEDOWN", DAO_INTEGER, SDLK_VOLUMEDOWN },
  { "SDLK_KP_COMMA", DAO_INTEGER, SDLK_KP_COMMA },
  { "SDLK_KP_EQUALSAS400", DAO_INTEGER, SDLK_KP_EQUALSAS400 },
  { "SDLK_ALTERASE", DAO_INTEGER, SDLK_ALTERASE },
  { "SDLK_SYSREQ", DAO_INTEGER, SDLK_SYSREQ },
  { "SDLK_CANCEL", DAO_INTEGER, SDLK_CANCEL },
  { "SDLK_CLEAR", DAO_INTEGER, SDLK_CLEAR },
  { "SDLK_PRIOR", DAO_INTEGER, SDLK_PRIOR },
  { "SDLK_RETURN2", DAO_INTEGER, SDLK_RETURN2 },
  { "SDLK_SEPARATOR", DAO_INTEGER, SDLK_SEPARATOR },
  { "SDLK_OUT", DAO_INTEGER, SDLK_OUT },
  { "SDLK_OPER", DAO_INTEGER, SDLK_OPER },
  { "SDLK_CLEARAGAIN", DAO_INTEGER, SDLK_CLEARAGAIN },
  { "SDLK_CRSEL", DAO_INTEGER, SDLK_CRSEL },
  { "SDLK_EXSEL", DAO_INTEGER, SDLK_EXSEL },
  { "SDLK_KP_00", DAO_INTEGER, SDLK_KP_00 },
  { "SDLK_KP_000", DAO_INTEGER, SDLK_KP_000 },
  { "SDLK_THOUSANDSSEPARATOR", DAO_INTEGER, SDLK_THOUSANDSSEPARATOR },
  { "SDLK_DECIMALSEPARATOR", DAO_INTEGER, SDLK_DECIMALSEPARATOR },
  { "SDLK_CURRENCYUNIT", DAO_INTEGER, SDLK_CURRENCYUNIT },
  { "SDLK_CURRENCYSUBUNIT", DAO_INTEGER, SDLK_CURRENCYSUBUNIT },
  { "SDLK_KP_LEFTPAREN", DAO_INTEGER, SDLK_KP_LEFTPAREN },
  { "SDLK_KP_RIGHTPAREN", DAO_INTEGER, SDLK_KP_RIGHTPAREN },
  { "SDLK_KP_LEFTBRACE", DAO_INTEGER, SDLK_KP_LEFTBRACE },
  { "SDLK_KP_RIGHTBRACE", DAO_INTEGER, SDLK_KP_RIGHTBRACE },
  { "SDLK_KP_TAB", DAO_INTEGER, SDLK_KP_TAB },
  { "SDLK_KP_BACKSPACE", DAO_INTEGER, SDLK_KP_BACKSPACE },
  { "SDLK_KP_A", DAO_INTEGER, SDLK_KP_A },
  { "SDLK_KP_B", DAO_INTEGER, SDLK_KP_B },
  { "SDLK_KP_C", DAO_INTEGER, SDLK_KP_C },
  { "SDLK_KP_D", DAO_INTEGER, SDLK_KP_D },
  { "SDLK_KP_E", DAO_INTEGER, SDLK_KP_E },
  { "SDLK_KP_F", DAO_INTEGER, SDLK_KP_F },
  { "SDLK_KP_XOR", DAO_INTEGER, SDLK_KP_XOR },
  { "SDLK_KP_POWER", DAO_INTEGER, SDLK_KP_POWER },
  { "SDLK_KP_PERCENT", DAO_INTEGER, SDLK_KP_PERCENT },
  { "SDLK_KP_LESS", DAO_INTEGER, SDLK_KP_LESS },
  { "SDLK_KP_GREATER", DAO_INTEGER, SDLK_KP_GREATER },
  { "SDLK_KP_AMPERSAND", DAO_INTEGER, SDLK_KP_AMPERSAND },
  { "SDLK_KP_DBLAMPERSAND", DAO_INTEGER, SDLK_KP_DBLAMPERSAND },
  { "SDLK_KP_VERTICALBAR", DAO_INTEGER, SDLK_KP_VERTICALBAR },
  { "SDLK_KP_DBLVERTICALBAR", DAO_INTEGER, SDLK_KP_DBLVERTICALBAR },
  { "SDLK_KP_COLON", DAO_INTEGER, SDLK_KP_COLON },
  { "SDLK_KP_HASH", DAO_INTEGER, SDLK_KP_HASH },
  { "SDLK_KP_SPACE", DAO_INTEGER, SDLK_KP_SPACE },
  { "SDLK_KP_AT", DAO_INTEGER, SDLK_KP_AT },
  { "SDLK_KP_EXCLAM", DAO_INTEGER, SDLK_KP_EXCLAM },
  { "SDLK_KP_MEMSTORE", DAO_INTEGER, SDLK_KP_MEMSTORE },
  { "SDLK_KP_MEMRECALL", DAO_INTEGER, SDLK_KP_MEMRECALL },
  { "SDLK_KP_MEMCLEAR", DAO_INTEGER, SDLK_KP_MEMCLEAR },
  { "SDLK_KP_MEMADD", DAO_INTEGER, SDLK_KP_MEMADD },
  { "SDLK_KP_MEMSUBTRACT", DAO_INTEGER, SDLK_KP_MEMSUBTRACT },
  { "SDLK_KP_MEMMULTIPLY", DAO_INTEGER, SDLK_KP_MEMMULTIPLY },
  { "SDLK_KP_MEMDIVIDE", DAO_INTEGER, SDLK_KP_MEMDIVIDE },
  { "SDLK_KP_PLUSMINUS", DAO_INTEGER, SDLK_KP_PLUSMINUS },
  { "SDLK_KP_CLEAR", DAO_INTEGER, SDLK_KP_CLEAR },
  { "SDLK_KP_CLEARENTRY", DAO_INTEGER, SDLK_KP_CLEARENTRY },
  { "SDLK_KP_BINARY", DAO_INTEGER, SDLK_KP_BINARY },
  { "SDLK_KP_OCTAL", DAO_INTEGER, SDLK_KP_OCTAL },
  { "SDLK_KP_DECIMAL", DAO_INTEGER, SDLK_KP_DECIMAL },
  { "SDLK_KP_HEXADECIMAL", DAO_INTEGER, SDLK_KP_HEXADECIMAL },
  { "SDLK_LCTRL", DAO_INTEGER, SDLK_LCTRL },
  { "SDLK_LSHIFT", DAO_INTEGER, SDLK_LSHIFT },
  { "SDLK_LALT", DAO_INTEGER, SDLK_LALT },
  { "SDLK_LGUI", DAO_INTEGER, SDLK_LGUI },
  { "SDLK_RCTRL", DAO_INTEGER, SDLK_RCTRL },
  { "SDLK_RSHIFT", DAO_INTEGER, SDLK_RSHIFT },
  { "SDLK_RALT", DAO_INTEGER, SDLK_RALT },
  { "SDLK_RGUI", DAO_INTEGER, SDLK_RGUI },
  { "SDLK_MODE", DAO_INTEGER, SDLK_MODE },
  { "SDLK_AUDIONEXT", DAO_INTEGER, SDLK_AUDIONEXT },
  { "SDLK_AUDIOPREV", DAO_INTEGER, SDLK_AUDIOPREV },
  { "SDLK_AUDIOSTOP", DAO_INTEGER, SDLK_AUDIOSTOP },
  { "SDLK_AUDIOPLAY", DAO_INTEGER, SDLK_AUDIOPLAY },
  { "SDLK_AUDIOMUTE", DAO_INTEGER, SDLK_AUDIOMUTE },
  { "SDLK_MEDIASELECT", DAO_INTEGER, SDLK_MEDIASELECT },
  { "SDLK_WWW", DAO_INTEGER, SDLK_WWW },
  { "SDLK_MAIL", DAO_INTEGER, SDLK_MAIL },
  { "SDLK_CALCULATOR", DAO_INTEGER, SDLK_CALCULATOR },
  { "SDLK_COMPUTER", DAO_INTEGER, SDLK_COMPUTER },
  { "SDLK_AC_SEARCH", DAO_INTEGER, SDLK_AC_SEARCH },
  { "SDLK_AC_HOME", DAO_INTEGER, SDLK_AC_HOME },
  { "SDLK_AC_BACK", DAO_INTEGER, SDLK_AC_BACK },
  { "SDLK_AC_FORWARD", DAO_INTEGER, SDLK_AC_FORWARD },
  { "SDLK_AC_STOP", DAO_INTEGER, SDLK_AC_STOP },
  { "SDLK_AC_REFRESH", DAO_INTEGER, SDLK_AC_REFRESH },
  { "SDLK_AC_BOOKMARKS", DAO_INTEGER, SDLK_AC_BOOKMARKS },
  { "SDLK_BRIGHTNESSDOWN", DAO_INTEGER, SDLK_BRIGHTNESSDOWN },
  { "SDLK_BRIGHTNESSUP", DAO_INTEGER, SDLK_BRIGHTNESSUP },
  { "SDLK_DISPLAYSWITCH", DAO_INTEGER, SDLK_DISPLAYSWITCH },
  { "SDLK_KBDILLUMTOGGLE", DAO_INTEGER, SDLK_KBDILLUMTOGGLE },
  { "SDLK_KBDILLUMDOWN", DAO_INTEGER, SDLK_KBDILLUMDOWN },
  { "SDLK_KBDILLUMUP", DAO_INTEGER, SDLK_KBDILLUMUP },
  { "SDLK_EJECT", DAO_INTEGER, SDLK_EJECT },
  { "SDLK_SLEEP", DAO_INTEGER, SDLK_SLEEP },
  { "KMOD_NONE", DAO_INTEGER, KMOD_NONE },
  { "KMOD_LSHIFT", DAO_INTEGER, KMOD_LSHIFT },
  { "KMOD_RSHIFT", DAO_INTEGER, KMOD_RSHIFT },
  { "KMOD_LCTRL", DAO_INTEGER, KMOD_LCTRL },
  { "KMOD_RCTRL", DAO_INTEGER, KMOD_RCTRL },
  { "KMOD_LALT", DAO_INTEGER, KMOD_LALT },
  { "KMOD_RALT", DAO_INTEGER, KMOD_RALT },
  { "KMOD_LGUI", DAO_INTEGER, KMOD_LGUI },
  { "KMOD_RGUI", DAO_INTEGER, KMOD_RGUI },
  { "KMOD_NUM", DAO_INTEGER, KMOD_NUM },
  { "KMOD_CAPS", DAO_INTEGER, KMOD_CAPS },
  { "KMOD_MODE", DAO_INTEGER, KMOD_MODE },
  { "KMOD_RESERVED", DAO_INTEGER, KMOD_RESERVED },
  { "SDL_SYSTEM_CURSOR_ARROW", DAO_INTEGER, SDL_SYSTEM_CURSOR_ARROW },
  { "SDL_SYSTEM_CURSOR_IBEAM", DAO_INTEGER, SDL_SYSTEM_CURSOR_IBEAM },
  { "SDL_SYSTEM_CURSOR_WAIT", DAO_INTEGER, SDL_SYSTEM_CURSOR_WAIT },
  { "SDL_SYSTEM_CURSOR_CROSSHAIR", DAO_INTEGER, SDL_SYSTEM_CURSOR_CROSSHAIR },
  { "SDL_SYSTEM_CURSOR_WAITARROW", DAO_INTEGER, SDL_SYSTEM_CURSOR_WAITARROW },
  { "SDL_SYSTEM_CURSOR_SIZENWSE", DAO_INTEGER, SDL_SYSTEM_CURSOR_SIZENWSE },
  { "SDL_SYSTEM_CURSOR_SIZENESW", DAO_INTEGER, SDL_SYSTEM_CURSOR_SIZENESW },
  { "SDL_SYSTEM_CURSOR_SIZEWE", DAO_INTEGER, SDL_SYSTEM_CURSOR_SIZEWE },
  { "SDL_SYSTEM_CURSOR_SIZENS", DAO_INTEGER, SDL_SYSTEM_CURSOR_SIZENS },
  { "SDL_SYSTEM_CURSOR_SIZEALL", DAO_INTEGER, SDL_SYSTEM_CURSOR_SIZEALL },
  { "SDL_SYSTEM_CURSOR_NO", DAO_INTEGER, SDL_SYSTEM_CURSOR_NO },
  { "SDL_SYSTEM_CURSOR_HAND", DAO_INTEGER, SDL_SYSTEM_CURSOR_HAND },
  { "SDL_NUM_SYSTEM_CURSORS", DAO_INTEGER, SDL_NUM_SYSTEM_CURSORS },
  { "SDL_FIRSTEVENT", DAO_INTEGER, SDL_FIRSTEVENT },
  { "SDL_QUIT", DAO_INTEGER, SDL_QUIT },
  { "SDL_APP_TERMINATING", DAO_INTEGER, SDL_APP_TERMINATING },
  { "SDL_APP_LOWMEMORY", DAO_INTEGER, SDL_APP_LOWMEMORY },
  { "SDL_APP_WILLENTERBACKGROUND", DAO_INTEGER, SDL_APP_WILLENTERBACKGROUND },
  { "SDL_APP_DIDENTERBACKGROUND", DAO_INTEGER, SDL_APP_DIDENTERBACKGROUND },
  { "SDL_APP_WILLENTERFOREGROUND", DAO_INTEGER, SDL_APP_WILLENTERFOREGROUND },
  { "SDL_APP_DIDENTERFOREGROUND", DAO_INTEGER, SDL_APP_DIDENTERFOREGROUND },
  { "SDL_WINDOWEVENT", DAO_INTEGER, SDL_WINDOWEVENT },
  { "SDL_SYSWMEVENT", DAO_INTEGER, SDL_SYSWMEVENT },
  { "SDL_KEYDOWN", DAO_INTEGER, SDL_KEYDOWN },
  { "SDL_KEYUP", DAO_INTEGER, SDL_KEYUP },
  { "SDL_TEXTEDITING", DAO_INTEGER, SDL_TEXTEDITING },
  { "SDL_TEXTINPUT", DAO_INTEGER, SDL_TEXTINPUT },
  { "SDL_MOUSEMOTION", DAO_INTEGER, SDL_MOUSEMOTION },
  { "SDL_MOUSEBUTTONDOWN", DAO_INTEGER, SDL_MOUSEBUTTONDOWN },
  { "SDL_MOUSEBUTTONUP", DAO_INTEGER, SDL_MOUSEBUTTONUP },
  { "SDL_MOUSEWHEEL", DAO_INTEGER, SDL_MOUSEWHEEL },
  { "SDL_JOYAXISMOTION", DAO_INTEGER, SDL_JOYAXISMOTION },
  { "SDL_JOYBALLMOTION", DAO_INTEGER, SDL_JOYBALLMOTION },
  { "SDL_JOYHATMOTION", DAO_INTEGER, SDL_JOYHATMOTION },
  { "SDL_JOYBUTTONDOWN", DAO_INTEGER, SDL_JOYBUTTONDOWN },
  { "SDL_JOYBUTTONUP", DAO_INTEGER, SDL_JOYBUTTONUP },
  { "SDL_JOYDEVICEADDED", DAO_INTEGER, SDL_JOYDEVICEADDED },
  { "SDL_JOYDEVICEREMOVED", DAO_INTEGER, SDL_JOYDEVICEREMOVED },
  { "SDL_CONTROLLERAXISMOTION", DAO_INTEGER, SDL_CONTROLLERAXISMOTION },
  { "SDL_CONTROLLERBUTTONDOWN", DAO_INTEGER, SDL_CONTROLLERBUTTONDOWN },
  { "SDL_CONTROLLERBUTTONUP", DAO_INTEGER, SDL_CONTROLLERBUTTONUP },
  { "SDL_CONTROLLERDEVICEADDED", DAO_INTEGER, SDL_CONTROLLERDEVICEADDED },
  { "SDL_CONTROLLERDEVICEREMOVED", DAO_INTEGER, SDL_CONTROLLERDEVICEREMOVED },
  { "SDL_CONTROLLERDEVICEREMAPPED", DAO_INTEGER, SDL_CONTROLLERDEVICEREMAPPED },
  { "SDL_FINGERDOWN", DAO_INTEGER, SDL_FINGERDOWN },
  { "SDL_FINGERUP", DAO_INTEGER, SDL_FINGERUP },
  { "SDL_FINGERMOTION", DAO_INTEGER, SDL_FINGERMOTION },
  { "SDL_DOLLARGESTURE", DAO_INTEGER, SDL_DOLLARGESTURE },
  { "SDL_DOLLARRECORD", DAO_INTEGER, SDL_DOLLARRECORD },
  { "SDL_MULTIGESTURE", DAO_INTEGER, SDL_MULTIGESTURE },
  { "SDL_CLIPBOARDUPDATE", DAO_INTEGER, SDL_CLIPBOARDUPDATE },
  { "SDL_DROPFILE", DAO_INTEGER, SDL_DROPFILE },
  { "SDL_USEREVENT", DAO_INTEGER, SDL_USEREVENT },
  { "SDL_LASTEVENT", DAO_INTEGER, SDL_LASTEVENT },
  { "SDL_ADDEVENT", DAO_INTEGER, SDL_ADDEVENT },
  { "SDL_PEEKEVENT", DAO_INTEGER, SDL_PEEKEVENT },
  { "SDL_GETEVENT", DAO_INTEGER, SDL_GETEVENT },
  { "SDL_HINT_DEFAULT", DAO_INTEGER, SDL_HINT_DEFAULT },
  { "SDL_HINT_NORMAL", DAO_INTEGER, SDL_HINT_NORMAL },
  { "SDL_HINT_OVERRIDE", DAO_INTEGER, SDL_HINT_OVERRIDE },
  { "SDL_LOG_CATEGORY_APPLICATION", DAO_INTEGER, SDL_LOG_CATEGORY_APPLICATION },
  { "SDL_LOG_CATEGORY_ERROR", DAO_INTEGER, SDL_LOG_CATEGORY_ERROR },
  { "SDL_LOG_CATEGORY_ASSERT", DAO_INTEGER, SDL_LOG_CATEGORY_ASSERT },
  { "SDL_LOG_CATEGORY_SYSTEM", DAO_INTEGER, SDL_LOG_CATEGORY_SYSTEM },
  { "SDL_LOG_CATEGORY_AUDIO", DAO_INTEGER, SDL_LOG_CATEGORY_AUDIO },
  { "SDL_LOG_CATEGORY_VIDEO", DAO_INTEGER, SDL_LOG_CATEGORY_VIDEO },
  { "SDL_LOG_CATEGORY_RENDER", DAO_INTEGER, SDL_LOG_CATEGORY_RENDER },
  { "SDL_LOG_CATEGORY_INPUT", DAO_INTEGER, SDL_LOG_CATEGORY_INPUT },
  { "SDL_LOG_CATEGORY_TEST", DAO_INTEGER, SDL_LOG_CATEGORY_TEST },
  { "SDL_LOG_CATEGORY_RESERVED1", DAO_INTEGER, SDL_LOG_CATEGORY_RESERVED1 },
  { "SDL_LOG_CATEGORY_RESERVED2", DAO_INTEGER, SDL_LOG_CATEGORY_RESERVED2 },
  { "SDL_LOG_CATEGORY_RESERVED3", DAO_INTEGER, SDL_LOG_CATEGORY_RESERVED3 },
  { "SDL_LOG_CATEGORY_RESERVED4", DAO_INTEGER, SDL_LOG_CATEGORY_RESERVED4 },
  { "SDL_LOG_CATEGORY_RESERVED5", DAO_INTEGER, SDL_LOG_CATEGORY_RESERVED5 },
  { "SDL_LOG_CATEGORY_RESERVED6", DAO_INTEGER, SDL_LOG_CATEGORY_RESERVED6 },
  { "SDL_LOG_CATEGORY_RESERVED7", DAO_INTEGER, SDL_LOG_CATEGORY_RESERVED7 },
  { "SDL_LOG_CATEGORY_RESERVED8", DAO_INTEGER, SDL_LOG_CATEGORY_RESERVED8 },
  { "SDL_LOG_CATEGORY_RESERVED9", DAO_INTEGER, SDL_LOG_CATEGORY_RESERVED9 },
  { "SDL_LOG_CATEGORY_RESERVED10", DAO_INTEGER, SDL_LOG_CATEGORY_RESERVED10 },
  { "SDL_LOG_CATEGORY_CUSTOM", DAO_INTEGER, SDL_LOG_CATEGORY_CUSTOM },
  { "SDL_LOG_PRIORITY_VERBOSE", DAO_INTEGER, SDL_LOG_PRIORITY_VERBOSE },
  { "SDL_LOG_PRIORITY_DEBUG", DAO_INTEGER, SDL_LOG_PRIORITY_DEBUG },
  { "SDL_LOG_PRIORITY_INFO", DAO_INTEGER, SDL_LOG_PRIORITY_INFO },
  { "SDL_LOG_PRIORITY_WARN", DAO_INTEGER, SDL_LOG_PRIORITY_WARN },
  { "SDL_LOG_PRIORITY_ERROR", DAO_INTEGER, SDL_LOG_PRIORITY_ERROR },
  { "SDL_LOG_PRIORITY_CRITICAL", DAO_INTEGER, SDL_LOG_PRIORITY_CRITICAL },
  { "SDL_NUM_LOG_PRIORITIES", DAO_INTEGER, SDL_NUM_LOG_PRIORITIES },
  { "SDL_POWERSTATE_UNKNOWN", DAO_INTEGER, SDL_POWERSTATE_UNKNOWN },
  { "SDL_POWERSTATE_ON_BATTERY", DAO_INTEGER, SDL_POWERSTATE_ON_BATTERY },
  { "SDL_POWERSTATE_NO_BATTERY", DAO_INTEGER, SDL_POWERSTATE_NO_BATTERY },
  { "SDL_POWERSTATE_CHARGING", DAO_INTEGER, SDL_POWERSTATE_CHARGING },
  { "SDL_POWERSTATE_CHARGED", DAO_INTEGER, SDL_POWERSTATE_CHARGED },
  { "SDL_RENDERER_SOFTWARE", DAO_INTEGER, SDL_RENDERER_SOFTWARE },
  { "SDL_RENDERER_ACCELERATED", DAO_INTEGER, SDL_RENDERER_ACCELERATED },
  { "SDL_RENDERER_PRESENTVSYNC", DAO_INTEGER, SDL_RENDERER_PRESENTVSYNC },
  { "SDL_RENDERER_TARGETTEXTURE", DAO_INTEGER, SDL_RENDERER_TARGETTEXTURE },
  { "SDL_TEXTUREACCESS_STATIC", DAO_INTEGER, SDL_TEXTUREACCESS_STATIC },
  { "SDL_TEXTUREACCESS_STREAMING", DAO_INTEGER, SDL_TEXTUREACCESS_STREAMING },
  { "SDL_TEXTUREACCESS_TARGET", DAO_INTEGER, SDL_TEXTUREACCESS_TARGET },
  { "SDL_TEXTUREMODULATE_NONE", DAO_INTEGER, SDL_TEXTUREMODULATE_NONE },
  { "SDL_TEXTUREMODULATE_COLOR", DAO_INTEGER, SDL_TEXTUREMODULATE_COLOR },
  { "SDL_TEXTUREMODULATE_ALPHA", DAO_INTEGER, SDL_TEXTUREMODULATE_ALPHA },
  { "SDL_FLIP_NONE", DAO_INTEGER, SDL_FLIP_NONE },
  { "SDL_FLIP_HORIZONTAL", DAO_INTEGER, SDL_FLIP_HORIZONTAL },
  { "SDL_FLIP_VERTICAL", DAO_INTEGER, SDL_FLIP_VERTICAL },
  { NULL, 0, 0 }
};
static const char *dao__Aliases[] = 
{
	"int", "SDL_bool",
	"int", "Sint8",
	"int", "Uint8",
	"int", "Sint16",
	"int", "Uint16",
	"int", "Sint32",
	"int", "Uint32",
	"int", "Sint64",
	"int", "Uint64",
	"int", "SDL_DUMMY_ENUM",
	"int", "SDL_assert_state",
	"int", "SDL_SpinLock",
	"int", "SDL_errorcode",
	"int", "SDL_threadID",
	"int", "SDL_TLSID",
	"int", "SDL_ThreadPriority",
	"int", "SDL_AudioFormat",
	"int", "SDL_AudioDeviceID",
	"int", "SDL_AudioStatus",
	"int", "SDL_BlendMode",
	"int", "SDL_WindowFlags",
	"int", "SDL_WindowEventID",
	"int", "SDL_GLattr",
	"int", "SDL_GLprofile",
	"int", "SDL_GLcontextFlag",
	"int", "SDL_Scancode",
	"int", "SDL_Keycode",
	"int", "SDL_Keymod",
	"int", "SDL_SystemCursor",
	"int", "SDL_JoystickID",
	"int", "SDL_TouchID",
	"int", "SDL_FingerID",
	"int", "SDL_GestureID",
	"int", "SDL_EventType",
	"int", "SDL_eventaction",
	"int", "SDL_HintPriority",
	"int", "SDL_LogPriority",
	"int", "SDL_PowerState",
	"int", "SDL_RendererFlags",
	"int", "SDL_TextureAccess",
	"int", "SDL_TextureModulate",
	"int", "SDL_RendererFlip",
	"int", "SDL_TimerID",
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
	DaoNamespace_AddConstNumbers( ns, dao__Nums );
	dao_type__opaque_pthread_attr_t = DaoNamespace_WrapType( ns, dao__opaque_pthread_attr_t_Typer, 1 );
	dao_type___sFILE = DaoNamespace_WrapType( ns, dao___sFILE_Typer, 1 );
	dao_type_sigval = DaoNamespace_WrapType( ns, dao_sigval_Typer, 1 );
	dao_type_timeval = DaoNamespace_WrapType( ns, dao_timeval_Typer, 1 );
	dao_type__SDL_iconv_t = DaoNamespace_WrapType( ns, dao__SDL_iconv_t_Typer, 1 );
	dao_type_SDL_assert_data = DaoNamespace_WrapType( ns, dao_SDL_assert_data_Typer, 1 );
	dao_type_SDL_atomic_t = DaoNamespace_WrapType( ns, dao_SDL_atomic_t_Typer, 1 );
	dao_type_SDL_mutex = DaoNamespace_WrapType( ns, dao_SDL_mutex_Typer, 1 );
	dao_type_SDL_semaphore = DaoNamespace_WrapType( ns, dao_SDL_semaphore_Typer, 1 );
	dao_type_SDL_cond = DaoNamespace_WrapType( ns, dao_SDL_cond_Typer, 1 );
	dao_type_SDL_Thread = DaoNamespace_WrapType( ns, dao_SDL_Thread_Typer, 1 );
	dao_type_SDL_RWops = DaoNamespace_WrapType( ns, dao_SDL_RWops_Typer, 1 );
	dao_type_SDL_AudioSpec = DaoNamespace_WrapType( ns, dao_SDL_AudioSpec_Typer, 1 );
	dao_type_SDL_AudioCVT = DaoNamespace_WrapType( ns, dao_SDL_AudioCVT_Typer, 1 );
	dao_type_SDL_Color = DaoNamespace_WrapType( ns, dao_SDL_Color_Typer, 1 );
	dao_type_SDL_Palette = DaoNamespace_WrapType( ns, dao_SDL_Palette_Typer, 1 );
	dao_type_SDL_PixelFormat = DaoNamespace_WrapType( ns, dao_SDL_PixelFormat_Typer, 1 );
	dao_type_SDL_Point = DaoNamespace_WrapType( ns, dao_SDL_Point_Typer, 1 );
	dao_type_SDL_Rect = DaoNamespace_WrapType( ns, dao_SDL_Rect_Typer, 1 );
	dao_type_SDL_Surface = DaoNamespace_WrapType( ns, dao_SDL_Surface_Typer, 1 );
	dao_type_SDL_BlitMap = DaoNamespace_WrapType( ns, dao_SDL_BlitMap_Typer, 1 );
	dao_type_SDL_DisplayMode = DaoNamespace_WrapType( ns, dao_SDL_DisplayMode_Typer, 1 );
	dao_type_SDL_Window = DaoNamespace_WrapType( ns, dao_SDL_Window_Typer, 1 );
	dao_type_SDL_Keysym = DaoNamespace_WrapType( ns, dao_SDL_Keysym_Typer, 1 );
	dao_type_SDL_Cursor = DaoNamespace_WrapType( ns, dao_SDL_Cursor_Typer, 1 );
	dao_type__SDL_Joystick = DaoNamespace_WrapType( ns, dao__SDL_Joystick_Typer, 1 );
	dao_type_SDL_JoystickGUID = DaoNamespace_WrapType( ns, dao_SDL_JoystickGUID_Typer, 1 );
	dao_type_SDL_Finger = DaoNamespace_WrapType( ns, dao_SDL_Finger_Typer, 1 );
	dao_type_SDL_CommonEvent = DaoNamespace_WrapType( ns, dao_SDL_CommonEvent_Typer, 1 );
	dao_type_SDL_WindowEvent = DaoNamespace_WrapType( ns, dao_SDL_WindowEvent_Typer, 1 );
	dao_type_SDL_KeyboardEvent = DaoNamespace_WrapType( ns, dao_SDL_KeyboardEvent_Typer, 1 );
	dao_type_SDL_TextEditingEvent = DaoNamespace_WrapType( ns, dao_SDL_TextEditingEvent_Typer, 1 );
	dao_type_SDL_TextInputEvent = DaoNamespace_WrapType( ns, dao_SDL_TextInputEvent_Typer, 1 );
	dao_type_SDL_MouseMotionEvent = DaoNamespace_WrapType( ns, dao_SDL_MouseMotionEvent_Typer, 1 );
	dao_type_SDL_MouseButtonEvent = DaoNamespace_WrapType( ns, dao_SDL_MouseButtonEvent_Typer, 1 );
	dao_type_SDL_MouseWheelEvent = DaoNamespace_WrapType( ns, dao_SDL_MouseWheelEvent_Typer, 1 );
	dao_type_SDL_JoyAxisEvent = DaoNamespace_WrapType( ns, dao_SDL_JoyAxisEvent_Typer, 1 );
	dao_type_SDL_JoyBallEvent = DaoNamespace_WrapType( ns, dao_SDL_JoyBallEvent_Typer, 1 );
	dao_type_SDL_JoyHatEvent = DaoNamespace_WrapType( ns, dao_SDL_JoyHatEvent_Typer, 1 );
	dao_type_SDL_JoyButtonEvent = DaoNamespace_WrapType( ns, dao_SDL_JoyButtonEvent_Typer, 1 );
	dao_type_SDL_JoyDeviceEvent = DaoNamespace_WrapType( ns, dao_SDL_JoyDeviceEvent_Typer, 1 );
	dao_type_SDL_ControllerAxisEvent = DaoNamespace_WrapType( ns, dao_SDL_ControllerAxisEvent_Typer, 1 );
	dao_type_SDL_ControllerButtonEvent = DaoNamespace_WrapType( ns, dao_SDL_ControllerButtonEvent_Typer, 1 );
	dao_type_SDL_ControllerDeviceEvent = DaoNamespace_WrapType( ns, dao_SDL_ControllerDeviceEvent_Typer, 1 );
	dao_type_SDL_TouchFingerEvent = DaoNamespace_WrapType( ns, dao_SDL_TouchFingerEvent_Typer, 1 );
	dao_type_SDL_MultiGestureEvent = DaoNamespace_WrapType( ns, dao_SDL_MultiGestureEvent_Typer, 1 );
	dao_type_SDL_DollarGestureEvent = DaoNamespace_WrapType( ns, dao_SDL_DollarGestureEvent_Typer, 1 );
	dao_type_SDL_DropEvent = DaoNamespace_WrapType( ns, dao_SDL_DropEvent_Typer, 1 );
	dao_type_SDL_QuitEvent = DaoNamespace_WrapType( ns, dao_SDL_QuitEvent_Typer, 1 );
	dao_type_SDL_OSEvent = DaoNamespace_WrapType( ns, dao_SDL_OSEvent_Typer, 1 );
	dao_type_SDL_UserEvent = DaoNamespace_WrapType( ns, dao_SDL_UserEvent_Typer, 1 );
	dao_type_SDL_SysWMmsg = DaoNamespace_WrapType( ns, dao_SDL_SysWMmsg_Typer, 1 );
	dao_type_SDL_SysWMEvent = DaoNamespace_WrapType( ns, dao_SDL_SysWMEvent_Typer, 1 );
	dao_type_SDL_Event = DaoNamespace_WrapType( ns, dao_SDL_Event_Typer, 1 );
	dao_type_SDL_HapticDirection = DaoNamespace_WrapType( ns, dao_SDL_HapticDirection_Typer, 1 );
	dao_type_SDL_HapticConstant = DaoNamespace_WrapType( ns, dao_SDL_HapticConstant_Typer, 1 );
	dao_type_SDL_HapticPeriodic = DaoNamespace_WrapType( ns, dao_SDL_HapticPeriodic_Typer, 1 );
	dao_type_SDL_HapticCondition = DaoNamespace_WrapType( ns, dao_SDL_HapticCondition_Typer, 1 );
	dao_type_SDL_HapticRamp = DaoNamespace_WrapType( ns, dao_SDL_HapticRamp_Typer, 1 );
	dao_type_SDL_HapticLeftRight = DaoNamespace_WrapType( ns, dao_SDL_HapticLeftRight_Typer, 1 );
	dao_type_SDL_HapticCustom = DaoNamespace_WrapType( ns, dao_SDL_HapticCustom_Typer, 1 );
	dao_type_SDL_RendererInfo = DaoNamespace_WrapType( ns, dao_SDL_RendererInfo_Typer, 1 );
	dao_type_SDL_Renderer = DaoNamespace_WrapType( ns, dao_SDL_Renderer_Typer, 1 );
	dao_type_SDL_Texture = DaoNamespace_WrapType( ns, dao_SDL_Texture_Typer, 1 );
	dao_type_SDL_version = DaoNamespace_WrapType( ns, dao_SDL_version_Typer, 1 );
	DaoNamespace_TypeDefines( ns, dao__Aliases );
	DaoNamespace_WrapFunctions( ns, dao__Funcs );
	return 0;
}
#ifdef __cplusplus
}
#endif
