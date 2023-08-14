#include "hud.h"
#include "game.h"
#include <tamtypes.h>

//TODO: port me

/*
 * Player 1's hud.
 */
#define HUD_P1			((PlayerHUDFlags*)0x0030D8E0)

/*
 * Player 2's hud.
 */
#define HUD_P2			((PlayerHUDFlags*)0x0030D8F0)


void* GetCanvas(u32 canvas);
u32 GetCurrentCanvas(void);
struct HUDObject* Canvas_GetObject(void* canvas, u32 objId);


PlayerHUDFlags * hudGetPlayerFlags(int localPlayerIndex)
{
    if (localPlayerIndex == 0)
        return HUD_P1;
    else if (localPlayerIndex == 1)
        return HUD_P2;

    return 0;
}

void* hudGetCanvas(u32 canvas)
{
    if (isInGame()) {
        return GetCanvas(canvas);
    }

    return NULL;
}

u32 hudGetCurrentCanvas(void)
{
    if (isInGame()) {
        return GetCurrentCanvas();
    }

    return NULL;
}

struct HUDObject* hudCanvasGetObject(void* canvas, u32 objId)
{
    if (isInGame()) {
        return Canvas_GetObject(canvas, objId);
    }

    return NULL;
}
