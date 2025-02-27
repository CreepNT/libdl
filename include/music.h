/***************************************************
 * FILENAME :		music.h
 * 
 * DESCRIPTION :
 * 		Contains music specific offsets and structures for Deadlocked.
 * 
 * NOTES :
 * 
 * 		
 * AUTHOR :			Troy "Agent Moose" Pruitt
 */

#ifndef _LIBDL_MUSIC_H_
#define _LIBDL_MUSIC_H_

#include <tamtypes.h>
#include "common.h"

enum TrackNumbers
{
    MUSIC_TRACK_ONLINE_LOBBY = 0x0,
    MUSIC_TRACK_GAME_LOBBY = 0x2,
    MUSIC_TRACK_VICTORY = 0x4,
    MUSIC_TRACK_LOSS = 0x6,
    MUSIC_TRACK_MARAUDER_ADVANCED_QUALIFIER = 0x8,
    MUSIC_TRACK_AVENGER_TOWER_OF_POWER = 0xA,
    MUSIC_TRACK_CATACROM_ON_THE_PROWL = 0xC,
    MUSIC_TRACK_SARATHOS_SARATHOS_SPIRIT = 0xE,
    MUSIC_TRACK_ORXON_NODE_OVERLOAD = 0x10,
    MUSIC_TRACK_STYGIA_ENERGY_COLLECTOR = 0x12,
    MUSIC_TRACK_MARAXUS_TOTAL_CONTROL = 0x14,
    MUSIC_TRACK_GHOST_STATION_GRINDING_CHASE = 0x16,
    MUSIC_TRACK_DREADZONE_WEST_GENERATOR = 0x18,
    MUSIC_TRACK_DREADZONE_EAST_GENERATOR = 0x1A,

    // The following tracks are only available if single player music is turned on.
    MUSIC_TRACK_DREADZONE_STATION = 0x1C,
    MUSIC_TRACK_DREADZONE_TRAINING = 0x1E,
    MUSIC_TRACK_DREADZONE_GRIST_FOR_THE_MILL = 0x20,
    MUSIC_TRACK_DREADZONE_AVENGER_SPEED_DEMON = 0x22,
    MUSIC_TRACK_DREADZONE_ZOMBIE_ATTACK = 0x24,
    MUSIC_TRACK_DREADZONE_CRUSADER_DEATH_TRAP = 0x26,
    MUSIC_TRACK_DREADZONE_CRUSADER_MARATHON = 0x28,
    MUSIC_TRACK_DREADZONE_HEAVY_METAL = 0x2A,
    MUSIC_TRACK_DREADZONE_END_ZONE = 0x2C,
    MUSIC_TRACK_DREADZONE_VINDICATOR_AIR_DROP = 0x2E,
    MUSIC_TRACK_CATACROM_VALLEY_OF_HEROES = 0x30,
    MUSIC_TRACK_CATACROM_ALL_ABOARD_THE_LANDSTALKER = 0x32,
    MUSIC_TRACK_CATACROM_RISE_UP = 0x34,
    MUSIC_TRACK_SARATHOS_ALIEN_SOIL = 0x38,
    MUSIC_TRACK_SARATHOS_WHERE_THE_LAVIATHANS_ROAM = 0x3A,
    MUSIC_TRACK_SARATHOS_KING_OF_THE_LEVIATHANS = 0x3C,
    MUSIC_TRACK_KRONOS_INFILTRATE_THE_CATHEDRAL = 0x3E,
    MUSIC_TRACK_KRONOS_INTRODUCING_SHELLSHOCK = 0x40,
    MUSIC_TRACK_KRONOS_ENEMIES_ARE_SUCH_A_GRIND = 0x42,
    MUSIC_TRACK_KRONOS_SHOWDOWN_WITH_SHELLSHOCK = 0x44,
    MUSIC_TRACK_SHAAR_DEATHBOWL = 0x46,
    MUSIC_TRACK_SHAAR_LANDSTALKER_STALKIN = 0x48,
    MUSIC_TRACK_SHAAR_AS_THE_WRENCH_TURNS = 0x4A,
    MUSIC_TRACK_SHAAR_FROZEN_TUNDRA = 0x4C,
    MUSIC_TRACK_ORXON_LABYRINTH_OF_DEATH = 0x4E,
    MUSIC_TRACK_ORXON_REFINERY_AMBUSH = 0x50,
    MUSIC_TRACK_ORXON_CHAINS_OF_VILLAINY = 0x52,
    MUSIC_TRACK_VALIX_LOST_AND_FOUND = 0x54,
    MUSIC_TRACK_VALIX_SPACE_ACE = 0x56,
    MUSIC_TRACK_VALIX_POWER_UP = 0x58,
    MUSIC_TRACK_VALIX_LET_THE_LIGHT_SHINE_THROUGH = 0x5A,
    MUSIC_TRACK_TORVAL_HOVERBIKE_OR_BUST = 0x5C,
    MUSIC_TRACK_TORVAL_SEEK_AND_DESTROY = 0x5E,
    MUSIC_TRACK_TORVAL_THE_TURN_ON = 0x60,
    MUSIC_TRACK_TORVAL_BLAST_OF_FRESH_AIR = 0x62,
    MUSIC_TRACK_STYGIA_JUNKING_THE_JAMMERS = 0x64,
    MUSIC_TRACK_STYGIA_SHIELDS_UP = 0x66,
    MUSIC_TRACK_STYGIA_SHIELD_SURVIVAL = 0x68,
    MUSIC_TRACK_MARAXUS_JAIL_BREAK = 0x6A,
    MUSIC_TRACK_MARAXUS_LEAVE_NO_MAN_BEHIND = 0x6C,
    MUSIC_TRACK_MARAXUS_DELTA_BLOCK = 0x6E,
    MUSIC_TRACK_GHOST_STATION_RUNNING_THE_GAUNTLET = 0x70,
    MUSIC_TRACK_GHOST_STATION_PRISON_BREAK = 0x72,
    MUSIC_TRACK_GHOST_STATION_ESCAPE = 0x74,
    MUSIC_TRACK_DREADZONE_CREDITS = 0x76,
    MUSIC_TRACK_DREADZONE_DEFEAT_GLEEMON_VOX = 0x78
};

/*
 * NAME :		             musicPlayTrack
 * 
 * DESCRIPTION :
 * 			                 Plays the given Music Track
 * 
 * NOTES :                   In order to play a new track, the current track must finish
 *                           or be stopped with musicStopTrack.
 * 
 * ARGS : 
 *          TrackNumber:     Music track
 *          KeepPlaying:     0 = don't play another track when current is finished.
 *                           1 = play random track when current is finished.
 *          arg3       :     No Idea.  Default is 0x400.
 * 
 * RETURN :
 * 
 * AUTHOR :			         Troy "Agent Moose" Pruitt
 */
void musicPlayTrack(int TrackNumber, int KeepPlaying);

/*
 * NAME :		             musicStopTrack
 * 
 * DESCRIPTION :
 * 			                 Stops the current Music Track
 * 
 * NOTES :
 * 
 * ARGS :                    None
 * 
 * RETURN :
 * 
 * AUTHOR :			         Troy "Agent Moose" Pruitt
 */
void musicStopTrack(void);

/*
 * NAME :		             musicPauseTrack
 * 
 * DESCRIPTION :
 * 			                 Pauses the current Music Track
 * 
 * NOTES :
 * 
 * ARGS :                    arg1: No clue.
 * 
 * RETURN :
 * 
 * AUTHOR :			         Troy "Agent Moose" Pruitt
 */
void musicPauseTrack(int arg1);

/*
 * NAME :		             musicUnpauseTrack
 * 
 * DESCRIPTION :
 * 			                 Unpauses the currently paused Music Track
 * 
 * NOTES :
 * 
 * ARGS :                    None.
 * 
 * RETURN :
 * 
 * AUTHOR :			         Troy "Agent Moose" Pruitt
 */
void musicUnpauseTrack(void);

/*
 * NAME :		             musicTransitionTrack
 * 
 * DESCRIPTION :
 * 			                 Transitions to another track.
 * 
 * NOTES :                   This function is better used to fade-out the current track, so it
 *                           can transition to the next track without doing a hacky job of
 *                           manually changing the music volume.
 * 
 * ARGS : 
 *          arg1     :       No Idea.
 *          CudeTrack:       Transition to this track.
 *                           This will cue the track duration and other things.
 *          arg3     :       No Idea, but if set to 0x400, cued track will play.  If set to 0, cued track will will but have no sound.
 *          arg4     :       No Idea, but if set to 0x400, cued track will play.  If set to 0, cued track will will but have no sound.
 * 
 * RETURN :
 * 
 * AUTHOR :			         Troy "Agent Moose" Pruitt
 */
void musicTransitionTrack(short arg1, short CueTrack, short arg3, short arg4);

/*
 * NAME :		             musicIsLoaded
 * 
 * DESCRIPTION :
 * 			                 Returns non-zero if the game has loaded the music data.
 * 
 * NOTES :                   
 * 
 * ARGS : 
 * 
 * RETURN :
 * 
 * AUTHOR :			         Troy "Agent Moose" Pruitt
 */
int musicIsLoaded(void);

#endif // _LIBDL_MUSIC_H_
