
#define module_name SDL_Test
#undef module_name

#define _CommonCreateState( argv_dao_hint_argv, flags ) CommonCreateState(char**,Uint32)
#undef _CommonCreateState

#define windows_dao_hint_array_num_UNDERSCORE_windows() CommonState::windows
#undef  windows_dao_hint_array_num_UNDERSCORE_windows

#define renderers_dao_hint_array_num_UNDERSCORE_windows() CommonState::renderers
#undef  renderers_dao_hint_array_num_UNDERSCORE_windows

#include "sdl.c"

#include "common.h"
