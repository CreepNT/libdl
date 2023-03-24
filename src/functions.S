
#include <common_funcimport_addr.h>
#include <game_funcimport_addr.h>

#define FUNCTION(name) \
    .set	push;		        \
	.set	noreorder;	        \
	.section	.text.##name,"ax",@progbits; \
	.align 2;		            \
	.globl	name;		        \
	.type	name,@function;	    \
	.ent	name,0;		        \
name:	j name ##_ADDROF;       \
	nop;			            \
	.end	name;		        \
	.size	name,.-name;	    \
	.set	pop;


#--------------------------------------------------------
#------------------- STANDARD LIBRARY -------------------
#--------------------------------------------------------
FUNCTION(printf)
FUNCTION(sprintf)
FUNCTION(snprintf)
FUNCTION(sscanf)
FUNCTION(memset)
FUNCTION(memcpy)
FUNCTION(memmove)
FUNCTION(strncpy)
FUNCTION(strlen)
FUNCTION(strcmp)
FUNCTION(strstr)
FUNCTION(malloc)
FUNCTION(free)

#--------------------------------------------------------
#------------------------- MATH -------------------------
#--------------------------------------------------------
# FUNCTION(cosf)
FUNCTION(asinf)
FUNCTION(powf)
FUNCTION(fabsf)
FUNCTION(fptodp)
FUNCTION(floorf)
FUNCTION(__divdi3)
FUNCTION(ceilf)
FUNCTION(FastMod_inLobby)
FUNCTION(FastMod_inGame)

#--------------------------------------------------------
#------------------------ MATH 3D -----------------------
#--------------------------------------------------------
FUNCTION(matrix_unit)
FUNCTION(matrix_rotate_x)
FUNCTION(matrix_rotate_y)
FUNCTION(matrix_rotate_z)

#--------------------------------------------------------
#------------------------ COLOR -------------------------
#--------------------------------------------------------
FUNCTION(FastTweenColor_inLobby)
FUNCTION(FastTweenColor_inGame)

#--------------------------------------------------------
#------------------------ DIALOG ------------------------
#--------------------------------------------------------
FUNCTION(Help_QueueMessageOnce_inGame)
FUNCTION(Help_QueueMessageOnce_inLobby)

#--------------------------------------------------------
#------------------------- GAME -------------------------
#--------------------------------------------------------
FUNCTION(GB_GameControllerSessionMasterEndGame)
FUNCTION(gameScoreboardSetTeamScore)
FUNCTION(gameGetWorldId)


#--------------------------------------------------------
#----------------------- GRAPHICS -----------------------
#--------------------------------------------------------
FUNCTION(FontPrint_inGame)
FUNCTION(FontPrint_inLobby)
FUNCTION(FontStringLength_inGame)
FUNCTION(FontStringLength_inLobby)
FUNCTION(DrawQuad_inGame)
FUNCTION(DrawQuad_inLobby)
FUNCTION(DoGifPaging_inGame)
FUNCTION(DoGifPaging_inLobby)
FUNCTION(SetupGifPaging_inGame)
FUNCTION(SetupGifPaging_inLobby)
FUNCTION(GetFrameTex_inGame)
FUNCTION(GetFrameTex_inLobby)
FUNCTION(GetEffectTex_inGame)
FUNCTION(GetEffectTex_inLobby)
FUNCTION(DrawSprite_inGame)
FUNCTION(DrawSprite_inLobby)
FUNCTION(gfxDrawCubicLine)
FUNCTION(gfxRegisterDrawFunction)
FUNCTION(gfxDrawQuad)
FUNCTION(gfxResetQuad)
FUNCTION(gfxSetBlendMode)
FUNCTION(gfxSetTexture)

#--------------------------------------------------------
#---------------------- MEMORY CARD ---------------------
#--------------------------------------------------------
FUNCTION(McOpen)
FUNCTION(McClose)
FUNCTION(McSeek)
FUNCTION(McRead)
FUNCTION(McWrite)

#--------------------------------------------------------
#------------------------- MOBY -------------------------
#--------------------------------------------------------
FUNCTION(mobySpawn)
FUNCTION(mobyDestroy)
FUNCTION(mobyUpdateTransform)
FUNCTION(mobyGetFunctions)
FUNCTION(mobySetState)
FUNCTION(mobyGetDamage)
FUNCTION(mobyPlaySound)
FUNCTION(mobyBlowCorn)
FUNCTION(mobyAnimTransition)
FUNCTION(mobyCollDamageDirect)
FUNCTION(mobyIsHero)
FUNCTION(mobyMoveSystemUpdate)
FUNCTION(mobyMoveSystemInit)
FUNCTION(mobySetMoveDistanceThresholds)
FUNCTION(mobySetMoveSpeedLimits)
FUNCTION(mobySetMoveAngularSpeeds)
FUNCTION(mobySetAnimCache)
FUNCTION(mobyProcessDamage)
FUNCTION(mobyMove)
FUNCTION(mobyStand)
FUNCTION(mobyStartFlash)
FUNCTION(mobyUpdateFlash)
FUNCTION(mobyGetJointMatrix)
FUNCTION(mobySpawnExplosion)

#--------------------------------------------------------
#-------------------------- NET -------------------------
#--------------------------------------------------------
FUNCTION(internal_netSendMessage)
FUNCTION(internal_netSendAppMessage)
FUNCTION(internal_netUpdatetNWGameSettings)
FUNCTION(netSetSendAggregationInterval)

#--------------------------------------------------------
#------------------------- INET -------------------------
#--------------------------------------------------------
FUNCTION(inetAbort)
FUNCTION(inetClose)
FUNCTION(inetControl)
FUNCTION(inetCreate)
FUNCTION(inetGetInterfaceList)
FUNCTION(inetGetNameServers)
FUNCTION(inetInterfaceControl)
FUNCTION(inetName2Address)
FUNCTION(inetOpen)
FUNCTION(inetRecv)
FUNCTION(inetSend)

#--------------------------------------------------------
#------------------------ PLAYER ------------------------
#--------------------------------------------------------
FUNCTION(playerGiveWeapon)
FUNCTION(playerEquipWeapon)
FUNCTION(playerRespawn)
FUNCTION(playerDropFlag)
FUNCTION(playerGetFromUID)
FUNCTION(internal_playerSetPosRot)
FUNCTION(playerIncHealth)
FUNCTION(playerDecHealth)
FUNCTION(playerGetFromSlot)
FUNCTION(playerGetSpawnpoint)
FUNCTION(playerGetJuggSafeTeam)

#--------------------------------------------------------
#------------------------ MASTER ------------------------
#--------------------------------------------------------
FUNCTION(masterGet)
FUNCTION(masterDelete)
FUNCTION(masterCreate)

#--------------------------------------------------------
#------------------------ WEAPON ------------------------
#--------------------------------------------------------
FUNCTION(weaponTurnOnHoloshields)
FUNCTION(weaponTurnOffHoloshields)

#--------------------------------------------------------
#------------------------- SHA1 -------------------------
#--------------------------------------------------------
FUNCTION(sha1)

#--------------------------------------------------------
#-------------------------- UI --------------------------
#--------------------------------------------------------
FUNCTION(internal_uiDialog)
FUNCTION(internal_uiSelectDialog)
FUNCTION(internal_uiInputDialog)
FUNCTION(uiShowPopup)
FUNCTION(uiShowHelpPopup)
FUNCTION(msg_string_inGame)
FUNCTION(msg_string_inLobby)
FUNCTION(uiShowTimer)
FUNCTION(uiRunCallbacks)

#--------------------------------------------------------
#------------------------- TIME -------------------------
#--------------------------------------------------------
FUNCTION(timerGetSystemTime)

#--------------------------------------------------------
#------------------------ VEHICLE -----------------------
#--------------------------------------------------------
FUNCTION(vehicleRemovePlayer)
FUNCTION(vehicleAddPlayer)

#--------------------------------------------------------
#------------------------ GUBER -------------------------
#--------------------------------------------------------
FUNCTION(guberEventRead)
FUNCTION(guberEventWrite)
FUNCTION(guberEventCreateEvent)
FUNCTION(guberMobyCreateSpawned)
FUNCTION(guberGetObjectByUID)
FUNCTION(guberGetObjectByMoby)
FUNCTION(guberGetUID)
FUNCTION(guberMobyGetPlayerDamager)
FUNCTION(guberMobyDestroy)

#--------------------------------------------------------
#------------------------- FLAG -------------------------
#--------------------------------------------------------
FUNCTION(flagIsReturning)
FUNCTION(flagIsBeingPickedUp)
FUNCTION(flagIsAtBase)
FUNCTION(flagReturnToBase)
FUNCTION(flagIsOnSafeGround)
FUNCTION(flagPickup)

#--------------------------------------------------------
#------------------------ RADAR -------------------------
#--------------------------------------------------------
FUNCTION(radarGetBlipIndex)

#--------------------------------------------------------
#------------------------ SOUND -------------------------
#--------------------------------------------------------
FUNCTION(soundPlay)
FUNCTION(soundCreateHandle)
FUNCTION(soundKillByHandle)
FUNCTION(soundKillById)

#--------------------------------------------------------
#------------------------- HELP -------------------------
#--------------------------------------------------------
FUNCTION(GetMapName)
FUNCTION(internal_helpGetString_inLobby)
FUNCTION(internal_helpGetString_inGame)

#--------------------------------------------------------
#------------------------- SIF --------------------------
#--------------------------------------------------------
FUNCTION(SifInitRpc)
FUNCTION(SifExitRpc)
FUNCTION(SifRpcGetOtherData)
FUNCTION(SifBindRpc)
FUNCTION(SifCallRpc)

FUNCTION(SifCheckStatRpc)
FUNCTION(SifInitIopHeap)
FUNCTION(SifAllocIopHeap)
FUNCTION(SifFreeIopHeap)
FUNCTION(SifIopReset)
FUNCTION(SifIopSync)
FUNCTION(_SifLoadModuleBuffer)

FUNCTION(SifWriteBackDCache)
FUNCTION(SifSetDma)
FUNCTION(SifDmaStat)

#--------------------------------------------------------
#------------------------- MUSIC ------------------------
#--------------------------------------------------------
FUNCTION(music_StartTrack_inGame)
FUNCTION(music_StartTrack_inLobby)
FUNCTION(music_Stop_inGame)
FUNCTION(music_Stop_inLobby)
FUNCTION(music_Pause_inGame)
FUNCTION(music_Pause_inLobby)
FUNCTION(music_Unpause_inGame)
FUNCTION(music_Unpause_inLobby)
FUNCTION(music_Transition_inGame)
FUNCTION(music_Transition_inLobby)

#--------------------------------------------------------
#------------------------- WAD --------------------------
#--------------------------------------------------------
FUNCTION(wad_GetSectors)

#--------------------------------------------------------
#------------------------ VECTOR ------------------------
#--------------------------------------------------------
FUNCTION(VecReflect3)

#--------------------------------------------------------
#----------------------- COLLISION ----------------------
#--------------------------------------------------------
FUNCTION(CollMobysSphere_Fix)
FUNCTION(CollLine_Fix)

#--------------------------------------------------------
#------------------------ RANDOM ------------------------
#--------------------------------------------------------
FUNCTION(rand)
FUNCTION(randVector)
FUNCTION(randVectorRangeNeg)
FUNCTION(randVectorRange)
FUNCTION(randRange)
FUNCTION(randRangeNeg)
FUNCTION(randRangeInt)
FUNCTION(randRadian)

#--------------------------------------------------------
#------------------------- HUD --------------------------
#--------------------------------------------------------
FUNCTION(GetCanvas)
FUNCTION(GetCurrentCanvas)
FUNCTION(Canvas_GetObject)
FUNCTION(hudGetTeamColor)
