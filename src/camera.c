#include "string.h"
#include "player.h"
#include "team.h"
#include "camera.h"

#if (LIBDL_NTSC_U)
#define GAME_CAMERA                         ((GameCamera*)0x0022CDC0)
#else if (LIBDL_PAL)
#define GAME_CAMERA                         ((GameCamera*)0x0022CEC0)
#endif

//--------------------------------------------------------------------------------
GameCamera* cameraGetGameCamera(int cameraIndex)
{
    return GAME_CAMERA + cameraIndex;
}
