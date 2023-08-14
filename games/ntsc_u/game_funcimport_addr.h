//
// Game function offsets for Ratchet: Deadlocked
//

//--------------------------------------------------------
//------------------------- MATH -------------------------
//--------------------------------------------------------
#define FastMod_inLobby_ADDROF 0x005bd108
#define FastMod_inGame_ADDROF 0x004d75a8

//--------------------------------------------------------
//------------------------ COLOR -------------------------
//--------------------------------------------------------
#define FastTweenColor_inGame_ADDROF 0x004d75e0
#define FastTweenColor_inLobby_ADDROF 0x005bd140

//--------------------------------------------------------
//------------------------ DIALOG ------------------------
//--------------------------------------------------------
#define Help_QueueMessage_inLobby_ADDROF 0x005C9638
#define Help_QueueMessage_inGame_ADDROF 0x004E3688
#define Help_QueueMessageOnce_inLobby_ADDROF 0x005C97D8
#define Help_QueueMessageOnce_inGame_ADDROF 0x004E3900

//--------------------------------------------------------
//------------------------- GAME -------------------------
//--------------------------------------------------------
#define GB_GameControllerSessionMasterEndGame_ADDROF 0x006228C8
#define gameScoreboardSetTeamScore_ADDROF 0x005425d0

//--------------------------------------------------------
//----------------------- GRAPHICS -----------------------
//--------------------------------------------------------
#define FontPrint_inGame_ADDROF 0x004D8420
#define FontPrint_inLobby_ADDROF 0x005BE058
#define FontStringLength_inGame_ADDROF 0x004D8130
#define FontStringLength_inLobby_ADDROF 0x005BDC90
#define DrawQuad_inGame_ADDROF 0x005BE610
#define DrawQuad_inLobby_ADDROF 0x00699C08
#define DoGifPaging_inGame_ADDROF 0x004c3f40
#define DoGifPaging_inLobby_ADDROF 0x005af9e8
#define SetupGifPaging_inGame_ADDROF 0x004c3e10
#define SetupGifPaging_inLobby_ADDROF 0x005af8b8
#define GetFrameTex_inGame_ADDROF 0x004e4d70
#define GetFrameTex_inLobby_ADDROF 0x005cab40
#define GetEffectTex_inGame_ADDROF 0x004c4200
#define GetEffectTex_inLobby_ADDROF 0x005afbe8
#define DrawSprite_inGame_ADDROF 0x004c5b30
#define DrawSprite_inLobby_ADDROF 0x005b1518
#define gfxDrawCubicLine_ADDROF 0x004d1780
#define gfxRegisterDrawFunction_ADDROF 0x004C4650
#define gfxDrawQuad_ADDROF 0x004CA188
#define gfxResetQuad_ADDROF 0x005b6378
#define gfxSetBlendMode_ADDROF 0x004c97d8
#define gfxSetTexture_ADDROF 0x004c9a58

//--------------------------------------------------------
//------------------------- MOBY -------------------------
//--------------------------------------------------------
#define mobySpawn_ADDROF 0x004F7200
#define mobyDestroy_ADDROF 0x004F76A0
#define mobyUpdateTransform_ADDROF 0x004FE720
#define mobyGetFunctions_ADDROF 0x0051F358
#define mobySetState_ADDROF 0x00502250
#define mobyGetDamage_ADDROF 0x00504248
#define mobyPlaySound_ADDROF 0x0058f6d0
#define mobyBlowCorn_ADDROF 0x0050e318
#define mobyAnimTransition_ADDROF 0x00502030
#define mobyCollDamageDirect_ADDROF 0x00503408
#define mobyIsHero_ADDROF 0x005cd578
#define mobyMoveSystemUpdate_ADDROF 0x0051d528
#define mobyMoveSystemInit_ADDROF 0x0051a758
#define mobySetMoveDistanceThresholds_ADDROF 0x0051ef30
#define mobySetMoveSpeedLimits_ADDROF 0x0051efa0
#define mobySetMoveAngularSpeeds_ADDROF 0x0051f040
#define mobySetAnimCache_ADDROF 0x0051aba0
#define mobyProcessDamage_ADDROF 0x005184d0
#define mobyMove_ADDROF 0x005169F8
#define mobyStand_ADDROF 0x00516a70
#define mobyStartFlash_ADDROF 0x00506960
#define mobyUpdateFlash_ADDROF 0x00506b88
#define mobyGetJointMatrix_ADDROF 0x004f8150
#define mobySpawnExplosion_ADDROF 0x003c3b38

//--------------------------------------------------------
//-------------------------- NET -------------------------
//--------------------------------------------------------
#define internal_netUpdatetNWGameSettings_ADDROF 0x007700A8

//--------------------------------------------------------
//------------------------ PLAYER ------------------------
//--------------------------------------------------------
#define playerGiveWeapon_ADDROF 0x00628018
#define playerEquipWeapon_ADDROF 0x005F0208
#define playerRespawn_ADDROF 0x005E2940
#define playerDropFlag_ADDROF 0x005F05E8
#define playerGetFromUID_ADDROF 0x005cd480
#define Hero_Warp_ADDROF 0x005EB448
#define playerIncHealth_ADDROF 0x005D1140
#define playerDecHealth_ADDROF 0x005D1038
#define playerGetFromSlot_ADDROF 0x005cd3d0
#define playerGetSpawnpoint_ADDROF 0x006242d0
#define playerGetJuggSafeTeam_ADDROF 0x005d0fd8

//--------------------------------------------------------
//------------------------ MASTER ------------------------
//--------------------------------------------------------
#define masterGet_ADDROF 0x005cf340
#define masterDelete_ADDROF 0x005cf4c8
#define masterCreate_ADDROF 0x005cf3f8

//--------------------------------------------------------
//------------------------ WEAPON ------------------------
//--------------------------------------------------------
#define weaponTurnOnHoloshields_ADDROF 0x005a37f0
#define weaponTurnOffHoloshields_ADDROF 0x005a3940

//--------------------------------------------------------
//------------------------- SHA1 -------------------------
//--------------------------------------------------------
#define sha1_ADDROF 0x01EB30C8 //Real name is KM_SHA1

//--------------------------------------------------------
//-------------------------- UI --------------------------
//--------------------------------------------------------
#define internal_uiDialog_ADDROF 0x00719A28
#define internal_uiSelectDialog_ADDROF 0x00719C68
#define internal_uiInputDialog_ADDROF 0x00719B80
#define uiShowPopup_ADDROF 0x00540170
#define uiShowHelpPopup_ADDROF 0x00540140
#define msg_string_inGame_ADDROF 0x004E4180
#define msg_string_inLobby_ADDROF 0x005c9f50
#define uiShowTimer_ADDROF 0x005401E8
#define uiRunCallbacks_ADDROF 0x0015a050

//--------------------------------------------------------
//------------------------ VEHICLE -----------------------
//--------------------------------------------------------
#define vehicleRemovePlayer_ADDROF 0x00619140
#define vehicleAddPlayer_ADDROF 0x006158E8

//--------------------------------------------------------
//------------------------ GUBER -------------------------
//--------------------------------------------------------
#define guberEventRead_ADDROF 0x00611880
#define guberEventWrite_ADDROF 0x00611808
#define guberEventCreateEvent_ADDROF 0x00611338
#define guberMobyCreateSpawned_ADDROF 0x0061C2B0
#define guberGetObjectByUID_ADDROF 0x005ce6e0
#define guberGetObjectByMoby_ADDROF 0x005cec98
#define guberGetUID_ADDROF 0x005cec68
#define guberMobyGetPlayerDamager_ADDROF 0x005ce5c8
#define guberMobyDestroy_ADDROF 0x0061c450

//--------------------------------------------------------
//------------------------- FLAG -------------------------
//--------------------------------------------------------
#define flagIsReturning_ADDROF 0x004177c8
#define flagIsBeingPickedUp_ADDROF 0x00417758
#define flagIsAtBase_ADDROF 0x00417410
#define flagReturnToBase_ADDROF 0x004177f0
#define flagIsOnSafeGround_ADDROF 0x00417528
#define flagPickup_ADDROF 0x00417780

//--------------------------------------------------------
//------------------------ RADAR -------------------------
//--------------------------------------------------------
#define radarGetBlipIndex_ADDROF 0x00553b00

//--------------------------------------------------------
//------------------------ SOUND -------------------------
//--------------------------------------------------------
#define soundPlay_ADDROF 0x0058f340
#define soundCreateHandle_ADDROF 0x0058ce58
#define soundKillByHandle_ADDROF 0x0058f228
#define soundKillById_ADDROF 0x0058f118
#define soundKillByMoby_ADDR 0x0058f198

//--------------------------------------------------------
//------------------------- HELP -------------------------
//--------------------------------------------------------
#define GetMapName_ADDROF 0x00707680 //Real name is GetMapName

//--------------------------------------------------------
//------------------------- MUSIC ------------------------
//--------------------------------------------------------
#define music_StartTrack_inGame_ADDROF 0x0051F980
#define music_StartTrack_inLobby_ADDROF 0x005FEDE8
#define music_Stop_inGame_ADDROF 0x0051FD28
#define music_Stop_inLobby_ADDROF 0x005FF190
#define music_Pause_inGame_ADDROF 0x0051FE18
#define music_Pause_inLobby_ADDROF 0x005FF280
#define music_Unpause_inGame_ADDROF 0x0051FE38
#define music_Unpause_inLobby_ADDROF 0x005FF2A0
#define music_Transition_inGame_ADDROF 0x0051FBC8
#define music_Transition_inLobby_ADDROF 0x005FF030

//--------------------------------------------------------
//------------------------- WAD --------------------------
//--------------------------------------------------------
#define wad_GetSectors_ADDROF 0x00159A00

//--------------------------------------------------------
//------------------------ VECTOR ------------------------
//--------------------------------------------------------
#define VecReflect3_ADDROF 0x005b9ae8

//--------------------------------------------------------
//----------------------- COLLISION ----------------------
//--------------------------------------------------------
#define CollMobysSphere_Fix_ADDROF 0x004bb788
#define CollLine_Fix_ADDROF 0x004b7e50

//--------------------------------------------------------
//------------------------ RANDOM ------------------------
//--------------------------------------------------------
#define rand_ADDROF 0x005006d0
#define randVector_ADDROF 0x00508340
#define randVectorRangeNeg_ADDROF 0x005083c8
#define randVectorRange_ADDROF 0x00508448
#define randRange_ADDROF 0x00500748
#define randRangeNeg_ADDROF 0x005007a0
#define randRangeInt_ADDROF 0x00500700
#define randRadian_ADDROF 0x00500800    

//--------------------------------------------------------
//------------------------- HUD --------------------------
//--------------------------------------------------------
#define GetCanvas_ADDROF 0x0053f988
#define GetCurrentCanvas_ADDROF 0x005c2288
#define Canvas_GetObject_ADDROF 0x005bcc90
#define hudGetTeamColor_ADDROF 0x00541ef8
