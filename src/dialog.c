#include "game.h"
#include "dialog.h"

bool Help_QueueMessage_inLobby(u16 id, u16 flag, u16 priority, void* pMoby, float min_vol, float max_vol, float min_range, float max_range);
bool Help_QueueMessage_inGame(u16 id, u16 flag, u16 priority, void* pMoby, float min_vol, float max_vol, float min_range, float max_range);
bool Help_QueueMessageOnce_inLobby(u16 id, u16 flag, u16 priority);
bool Help_QueueMessageOnce_inGame(u16 id, u16 flag, u16 priority);

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
    //Arguments are identical to what Help_QueueMessageOnce would pass
    if (isInGame())
    {
        Help_QueueMessage_inGame(dialogId, 0, 2, NULL, 0.0f, 1.0f, 0.0f, 64.0f);
    }
    else if (isInMenus())
    {
        Help_QueueMessage_inLobby(dialogId, 0, 2, NULL, 0.0f, 1.0f, 0.0f, 64.0f);
    }
}

/*
 * NAME :		dialogPlaySoundEx
 * 
 * DESCRIPTION :
 * 			Plays the given dialog sound with
 *          the specified configuration.
 * 
 * NOTES :
 * 
 * ARGS : 
 *          dialogId :          Dialog sound id.
 *          flag     :          Unknown.
 *          priority :          Priority (0 = highest, 3 = lowest)
 *          pMoby    :          Moby playing the dialog (or NULL)
 *          min_vol  :          Minimum volume
 *          max_vol  :          Maximum volume
 *          min_range:          Minimum range (distance from Moby?)
 *          max_range:          Maximum range (distance from Moby?)
 * 
 * RETURN :         true if sound was queued - false otherwise
 * 
 * AUTHOR :			CreepNT
 */
void dialogPlaySoundEx(ushort dialogId, ushort flag,
    ushort priority, void* pMoby, float min_vol, float max_vol,
    float min_range, float max_range)
{
    if (isInGame())
    {
        return Help_QueueMessage_inGame(dialogId, flag, priority, pMoby, min_vol, max_vol, min_range, max_range);
    }
    else if (isInMenus())
    {
        return Help_QueueMessage_inLobby(dialogId, flag, priority, pMoby, min_vol, max_vol, min_range, max_range);
    }
    
    return false;
}

/*
 * NAME :		dialogPlaySoundOnce
 * 
 * DESCRIPTION :
 * 			Plays the given dialog sound if it has
 *          not been played before during this session.
 * 
 * NOTES :
 *          A session ends when the player exits the multiplayer mode.
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
