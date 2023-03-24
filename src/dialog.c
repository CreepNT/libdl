#include "game.h"
#include "dialog.h"

//TODO: add Help_QueueMessage offsets

bool Help_QueueMessageOnce_inGame(u16, u16, u16);
bool Help_QueueMessageOnce_inLobby(u16, u16, u16);

/*
 * NAME :		dialogPlaySound
 * 
 * DESCRIPTION :
 * 			Plays the given dialog sound.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          dialogId:           Dialog sound id.
 * 
 * RETURN :         true if sound was queued - false otherwise
 * 
 * AUTHOR :			Daniel "Dnawrkshp" Gerendasy
 */
void dialogPlaySound(int dialogId)
{
    if (isInGame())
    {
        Help_QueueMessage_inGame(dialogId, arg2);
    }
    else if (isInMenus())
    {
        Help_QueueMessage_inLobby(dialogId, arg2);
    }
}

void dialogPlaySoundEx(ushort dialogId, ushort flag,
    ushort priority, void* pMoby, float min_vol, float max_vol,
    float min_range, float max_range) {

}

/*
 * NAME :		dialogPlaySoundOnce
 * 
 * DESCRIPTION :
 * 			Plays the given dialog sound if it has
 *          not been played yet during ?this game?
 * 
 * NOTES :
 * 
 * ARGS : 
 *          dialogId:           Dialog sound id.
 *          flag    :           Used to identify if sound has been played.
 *          priority:           Priority (0 = highest, 3 = lowest)
 * 
 * RETURN :         true if sound was queued - false otherwise
 * 
 * AUTHOR :			CreepNT
 */
bool dialogPlaySoundOnce(ushort dialogId, ushort flag, int priority) {
    if (isInGame())
    {
        return Help_QueueMessageOnce_inGame(dialogId, flag, priority);
    }
    else if (isInMenus())
    {
        return Help_QueueMessageOnce_inLobby(dialogId, flag, priority);
    }
    return false;
}
