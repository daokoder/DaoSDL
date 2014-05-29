
#define module_name sdl_test
#undef module_name

#define _CommonCreateState( argv_dao_hint_argv, flags ) SDLTest_CommonCreateState(char**,Uint32)
#undef _CommonCreateState

#define windows_dao_hint_array_num_UNDERSCORE_windows() SDLTest_CommonState::windows
#undef  windows_dao_hint_array_num_UNDERSCORE_windows

#define renderers_dao_hint_array_num_UNDERSCORE_windows() SDLTest_CommonState::renderers
#undef  renderers_dao_hint_array_num_UNDERSCORE_windows

#include "sdl.c"

#include "SDL_test.h"
#include "SDL_test_common.h"
