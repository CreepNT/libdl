#include "game.h"
#include "color.h"

u32 FastTweenColor_inGame(u32, u32, float);
u32 FastTweenColor_inLobby(u32, u32, float);

/*
 * NAME :		colorLerp
 * 
 * DESCRIPTION :
 * 			Interpolates the color from a to b by t.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          a     :           Start color.
 *          b     :           End color.
 *          t     :           Amount to interpolate by.
 * 
 * RETURN :
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
u32 colorLerp(u32 a, u32 b, float t)
{
    if (isInGame())
    {
        return FastTweenColor_inGame(a, b, t);
    }
    else if (isInMenus())
    {
        return FastTweenColor_inLobby(a, b, t);
    }

    return a;
}
