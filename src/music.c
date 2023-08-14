#include "game.h"
#include "music.h"

//--------------------------------------------------------
void music_StartTrack_inGame(u64, u64, u64);
void music_StartTrack_inLobby(u64, u64, u64);
void music_Stop_inGame(void);
void music_Stop_inLobby(void);
void music_Pause_inGame(u64);
void music_Pause_inLobby(u64);
void music_Unpause_inGame(void);
void music_Unpause_inLobby(void);
void music_Transition_inGame(u64, u64, u64, u64);
void music_Transition_inLobby(u64, u64, u64, u64);
void wad_GetSectors(u64, u64, u64);

//TODO: port me

/*
 * Games music volume setting.
 */
#define MUSIC_VOLUME (*(u32*)0x00171D44)

/*
 * This is what is used to figure out where to load the tracks from.
 */
#define MUSIC_LOCATION (*(u32*)0x001CF85C)

/*
 * Defines which track to start on.
 */
#define TRACK_RANGE_MIN (*(u8*)0x0021EC08)

/*
 * How many tracks to play, starting at TRACK_RANGE_MIN
 */
#define TRACK_RANGE_MAX (*(u8*)0x0021EC0C)

#define CURRENT_TRACK (*(u16*)0x00206990)

/*
 * how long the track is.
 * Counts down to 0.  If 0, track is done playing.
 * if 0xBB80, game is loading next track.
 */
#define TRACK_DURATION (*(u32*)0x002069A4)

//--------------------------------------------------------------------------------
void musicPlayTrack(int TrackNumber, int KeepPlaying)
{
    musicStopTrack();
    if (isInGame())
    {
        music_StartTrack_inGame(TrackNumber, KeepPlaying, 0x400);
    }
    else if (isInMenus())
    {
        music_StartTrack_inLobby(TrackNumber, KeepPlaying, 0x400);
    }
}

//--------------------------------------------------------------------------------
void musicStopTrack(void)
{
    if (isInGame())
    {
        music_Stop_inGame();
    }
    else if (isInMenus())
    {
        music_Stop_inLobby();
    }
}

//--------------------------------------------------------------------------------
void musicPauseTrack(int arg1)
{
    if (isInGame())
    {
        music_Pause_inGame(arg1);
    }
    else if (isInMenus())
    {
        music_Pause_inLobby(arg1);
    }
}

//--------------------------------------------------------------------------------
void musicUnpauseTrack(void)
{
    if (isInGame())
    {
        music_Unpause_inGame();
    }
    else if (isInMenus())
    {
        music_Unpause_inLobby();
    }
}

//--------------------------------------------------------------------------------
void musicTransitionTrack(short arg1, short CueTrack, short arg3, short arg4)
{
    if (isInGame())
    {
        music_Transition_inGame(arg1, CueTrack, arg3, arg4);
    }
    else if (isInMenus())
    {
        music_Transition_inLobby(arg1, CueTrack, arg3, arg4);
    }
}

//--------------------------------------------------------------------------------
int musicIsLoaded(void)
{
  return MUSIC_LOCATION == 0xF8D29;
}
