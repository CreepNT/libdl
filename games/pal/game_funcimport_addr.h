//
// Game function offsets for Ratchet: Gladiator
//

//--------------------------------------------------------
//------------------------- MATH -------------------------
//--------------------------------------------------------
#define FastMod_inLobby_ADDROF    0x005BE2E0
#define FastMod_inGame_ADDROF     0x004D93B0

//--------------------------------------------------------
//------------------------ COLOR -------------------------
//--------------------------------------------------------
#define FastTweenColor_inLobby_ADDROF   0x005BE318
#define FastTweenColor_inGame_ADDROF    0x004D93E8

//--------------------------------------------------------
//------------------------ DIALOG ------------------------
//--------------------------------------------------------
#define Help_QueueMessageOnce_inLobby_ADDROF 0x005CAA98
#define Help_QueueMessageOnce_inGame_ADDROF  0x004E5708

//--------------------------------------------------------
//------------------------- GAME -------------------------
//--------------------------------------------------------
#define GB_GameControllerSessionMasterEndGame_ADDROF    0x006271A0
#define gameScoreboardSetTeamScore_ADDROF               0x005462F8 //GuiMain_SetMPTeamScore(int iTeam, int iScore)

//--------------------------------------------------------
//----------------------- GRAPHICS -----------------------
//--------------------------------------------------------
#define FontPrint_inLobby_ADDROF        0x005BF230  //void FontPrint (float x, float y, ulong rgba, uchar * s, int length, float scale_x, float scale_y, FontAlignment alignment, bool enable_drop_shadow, ulong drop_shadow_color, float drop_shadow_x_offset, float drop_shadow_y_offset)
#define FontPrint_inGame_ADDROF         0x004DA228
#define FontStringLength_inLobby_ADDROF 0x005BEE68  //int FontStringLength(uchar *s,int length,float scale)
#define FontStringLength_inGame_ADDROF  0x004D9F38
#define DrawQuad_inLobby_ADDROF         0x0069D3C0  //void IGE::DRIVER::PS2::DrawQuad(vec2* vPoints, DrawParams* pParams)
#define DrawQuad_inGame_ADDROF          0x005C28F0
#define DoGifPaging_inLobby_ADDROF      0x005B09E8  //void DoGifPaging(void)
#define DoGifPaging_inGame_ADDROF       0x004C5AC0
#define SetupGifPaging_inLobby_ADDROF   0x005B08B8  //void SetupGifPaging(int no_hud)
#define SetupGifPaging_inGame_ADDROF    0x004C5990
#define GetFrameTex_inLobby_ADDROF      0x005CBE00  //ulong GetFrameTex(int index)
#define GetFrameTex_inGame_ADDROF       0x004E6B78
#define GetEffectTex_inLobby_ADDROF     0x005B0BE8  //ulong GetEffectTex(int index, int bUseAlphaChannel)
#define GetEffectTex_inGame_ADDROF      0x004C5D80
#define DrawSprite_inLobby_ADDROF       0x005B2580  //void DrawSprite(float sc_x, float sc_y, float sc_w, float sc_h, int tx_u, int tx_v, int tx_w, int tx_h, ulong rgba, ulong tex0)
#define DrawSprite_inGame_ADDROF        0x004C7718

#define gfxDrawCubicLine_ADDROF         0x004D34D8
#define gfxRegisterDrawFunction_ADDROF  0x004C61D0  //void RegisterDrawFunction(void *& pVoirHeader, void (*drawFunc)(MobyInstance*), MobyInstance* pMoby)
#define gfxDrawQuad_ADDROF              0x004CBD70  //void FXRegistrySystemInterface::DrawQuad(FXRegistrySystemInterface *this, QuadDef &quad_t, mtx4 *pMat,int iSort)
#define gfxResetQuad_ADDROF             0x005BA658  //void QuadResetQuad(QuadDef* quad_t)
#define gfxSetBlendMode_ADDROF          0x004CB3C0  //void FXRegistrySystemInterface::SetBlendMode(FXRegistrySystemInterface *this, FX_BlendModes_e blendMode, FX_TexClamp_e clamp, FX_FogMode_e fogMode)
#define gfxSetTexture_ADDROF            0x004CB640  //void FXRegistrySystemInterface::SetTexture(FXRegistrySystemInterface *this, FX_TEXTURE_ENUM texture)

//--------------------------------------------------------
//------------------------- MOBY -------------------------
//--------------------------------------------------------
#define mobySpawn_ADDROF                     0x004FA6C0  //CreateMoby
#define mobyDestroy_ADDROF                   0x004FAB80  //DeleteMoby
#define mobyUpdateTransform_ADDROF           0x00501C00  //PostUpdateMoby
#define mobyGetFunctions_ADDROF              0x00522A10  //GetMobyFunctions
#define mobySetState_ADDROF                  0x00505730  //MB_setState
#define mobyGetDamage_ADDROF                 0x00507720  //_MB_damage
#define mobyPlaySound_ADDROF                 0x00593800  //sound_MobyPlay
#define mobyBlowCorn_ADDROF                  0x00511850  //MB_BlowCorn
#define mobyAnimTransition_ADDROF            0x00505510  //MB_transAnim
#define mobyCollDamageDirect_ADDROF          0x005068E0  //CollDamageMobyDirect
#define mobyIsHero_ADDROF                    0x005D18C0  //GB_IsMobyAHero
#define mobyMoveSystemInit_ADDROF            0x0051DD20  //MB_MoveSystemInit
#define mobyMoveSystemUpdate_ADDROF          0x00520BE0  //MB_MoveSystemUpdate
#define mobySetAnimCache_ADDROF              0x0051E170  //MB_SetAnimCache
#define mobyProcessDamage_ADDROF             0x0051BA90  //MB_ProcessDamage_2(MobyInstance* pMoby, float& hpDamage, COLL_DAM_OUT* cdo)
#define mobyMove_ADDROF                      0x00519F40  //MB_Move_2(MobyInstance* pMoby, vec4 targetPos, float speed)
#define mobyStand_ADDROF                     0x00519FB8  //MB_Stand_2
#define mobyStartFlash_ADDROF                0x00509E80  //MB_StartColorFlash
#define mobyUpdateFlash_ADDROF               0x0050A0A8  //MB_UpdateColorFlash
#define mobyGetJointMatrix_ADDROF            0x004FB630  //GetMobyJointMatrix
#define mobySpawnExplosion_ADDROF            0x003C4268  //SpawnMoby_5025
#define mobySetMoveSpeedLimits_ADDROF        0x00522658  //MB_SetMoveSpeedLimits
#define mobySetMoveAngularSpeeds_ADDROF      0x005226F8  //MB_SetMoveAngularSpeeds
#define mobySetMoveDistanceThresholds_ADDROF 0x005225E8  //MB_SetMoveDistanceThresholds


//--------------------------------------------------------
//-------------------------- NET -------------------------
//--------------------------------------------------------
#define internal_netUpdatetNWGameSettings_ADDROF    0x007750B8

//--------------------------------------------------------
//------------------------ PLAYER ------------------------
//--------------------------------------------------------

#define playerGiveWeapon_ADDROF      0x0062C910//!! This may be completely wrong !!
#define playerEquipWeapon_ADDROF     0x005F4738  //Hero::RequestGadgetEquip(Hero* this, int rootID)
#define playerRespawn_ADDROF         0x005E6DD8  //Hero::Resurect(Hero* this)
#define playerDropFlag_ADDROF        0x005F4B18  //Hero::DropFlag(Hero* this, bool force)
#define playerGetFromUID_ADDROF      0x005D17C8  //GB_GetHeroFromUID
#define Hero_Warp_ADDROF             0x005EF940  //Hero::Warp(Hero* this, vec4& pos, vec4f& rot, int warpToState, int CameraCut, int resetPadRing, bool resurrecting, bool dropFlag)
#define playerIncHealth_ADDROF       0x005D5488  //Hero::IncHitPoints(Hero* this, float hpInc)
#define playerDecHealth_ADDROF       0x005D5380  //Hero::DecHitPoints(Hero* this, float hpDec)
#define playerGetFromSlot_ADDROF     0x005D1718  //GB_GetLocalHeroFromSlot(int slot)
#define playerGetSpawnpoint_ADDROF   0x00628BA8  //GB_GetResurrectionSpot(Hero* pHero, vec4& pos, vec4f& rot, bool firstRez)
#define playerGetJuggSafeTeam_ADDROF 0x005D5320  //Hero::GetJuggSafeTeam(Hero* this)

//--------------------------------------------------------
//------------------------ MASTER ------------------------
//--------------------------------------------------------
#define masterGet_ADDROF    0x005D3688  //Master::GetMaster(uint UID)
#define masterCreate_ADDROF 0x005D3740  //Master::CreateMaster(Guber* pObject, bool sendCreateMsg)
#define masterDelete_ADDROF 0x005D3810  //Master::DeleteMaster(Guber* pObject)


//--------------------------------------------------------
//------------------------ WEAPON ------------------------
//--------------------------------------------------------
#define weaponTurnOnHoloshields_ADDROF  0x005A7A98  //WPN_TurnOnHoloShields
#define weaponTurnOffHoloshields_ADDROF 0x005A7BE8  //WPN_TurnOffHoloShields

//--------------------------------------------------------
//-------------------------- UI --------------------------
//--------------------------------------------------------
#define internal_uiDialog_ADDROF        0x0071D890
#define internal_uiSelectDialog_ADDROF  0x0071DAD0
#define internal_uiInputDialog_ADDROF   0x0071D9E8
#define msg_string_inLobby_ADDROF       0x005CB210
#define msg_string_inGame_ADDROF        0x004E5F88
#define uiShowPopup_ADDROF              0x00543DD0  //GUI_PrintPrompt(int iPlayer, char* zMsg)
#define uiShowHelpPopup_ADDROF          0x00543DA0
#define uiShowTimer_ADDROF              0x00543E48  //GUI_PrintTimer
#define uiRunCallbacks_ADDROF           0x0015a080  //nwGuiRefreshCallback

//--------------------------------------------------------
//------------------------ VEHICLE -----------------------
//--------------------------------------------------------
#define vehicleAddPlayer_ADDROF     0x00619FD0
#define vehicleRemovePlayer_ADDROF  0x0061D888


//--------------------------------------------------------
//------------------------ GUBER -------------------------
//--------------------------------------------------------
#define guberGetUID_ADDROF               0x005D2FB0  //Guber::GetUID(MobyInstance* pMoby)
#define guberGetObjectByUID_ADDROF       0x005D2A28  //Guber::GetObject(uint UID)
#define guberGetObjectByMoby_ADDROF      0x005D2FE   //Guber::GetObject(MobyInstance* pMoby)
#define guberEventRead_ADDROF            0x00615F68  //GuberEvent::read(GuberEvent* this, char* buffer, uint size)
#define guberEventWrite_ADDROF           0x00615EF0  //GuberEvent::write(GuberEvent* this, char* buffer, uint size)
#define guberEventCreateEvent_ADDROF     0x00615A20  //GuberEvent::CreateEvent(Guber* pObj, int eventID, int sendDelay, int dispatchDelay)
#define guberMobyCreateSpawned_ADDROF    0x00620A28  //GuberMoby::CreateSpawned(short oClass, short pvarSize, GuberEvent** ppSpawnEvent, Guber* pParent)
#define guberMobyDestroy_ADDROF          0x00620BC8
#define guberMobyGetPlayerDamager_ADDROF 0x005D2910  //GB_GetHeroDamager(MobyInstance* pMoby)


//--------------------------------------------------------
//------------------------- FLAG -------------------------
//--------------------------------------------------------
#define flagIsReturning_ADDROF      0x00418370
#define flagIsBeingPickedUp_ADDROF  0x00418300
#define flagIsAtBase_ADDROF         0x00417FB8  
#define flagReturnToBase_ADDROF     0x00418398
#define flagIsOnSafeGround_ADDROF   0x004180D0
#define flagPickup_ADDROF           0x00418328

//--------------------------------------------------------
//------------------------ RADAR -------------------------
//--------------------------------------------------------
#define radarGetBlipIndex_ADDROF    0x00557868

//--------------------------------------------------------
//------------------------ SOUND -------------------------
//--------------------------------------------------------
#define soundPlay_ADDROF            0x00593470  //sound_Play(SoundDef* sd, uint flags, MobyInstance* pMoby, vec4* pos, int vol_mod)
#define soundCreateHandle_ADDROF    0x00590DA8  //sound_CreateHandle(int channel)
#define soundKillByHandle_ADDROF    0x00593358  //sound_Kill(int handle)
#define soundKillById_ADDROF        0x00593248  //sound_KillById(int sound_id, MobyInstance* pMoby)
#define soundKillByMoby_ADDROF      0x005932C8  //sound_KillByMoby(MobyInstance* pMoby, int bLoopingSoundsOnly)

//--------------------------------------------------------
//------------------------- HELP -------------------------
//--------------------------------------------------------
#define GetMapName_ADDROF   0x0070B440

//--------------------------------------------------------
//------------------------- MUSIC ------------------------
//--------------------------------------------------------
#define music_StartTrack_inLobby_ADDROF 0x006019E8
#define music_StartTrack_inGame_ADDROF  0x005230A8
#define music_Stop_inLobby_ADDROF       0x00601D90
#define music_Stop_inGame_ADDROF        0x00523450
#define music_Pause_inLobby_ADDROF      0x00601E80
#define music_Pause_inGame_ADDROF       0x00523540
#define music_Unpause_inLobby_ADDROF    0x00601EA0
#define music_Unpause_inGame_ADDROF     0x00523560
#define music_Transition_inLobby_ADDROF 0x00601C30
#define music_Transition_inGame_ADDROF  0x005232F0

//--------------------------------------------------------
//------------------------- WAD --------------------------
//--------------------------------------------------------
#define wad_GetSectors_ADDROF 0x00159A30

//--------------------------------------------------------
//------------------------ VECTOR ------------------------
//--------------------------------------------------------
#define VecReflect3_ADDROF   0x005BDDC8

//--------------------------------------------------------
//----------------------- COLLISION ----------------------
//--------------------------------------------------------
#define CollMobysSphere_Fix_ADDROF  0x004BD288
#define CollLine_Fix_ADDROF         0x004B9950

//--------------------------------------------------------
//------------------------ RANDOM ------------------------
//--------------------------------------------------------
#define rand_ADDROF                 0x00503BB0  //MB_rand(int max)
#define randRange_ADDROF            0x00503C28  //MB_randRange(float min, float max)
#define randRadian_ADDROF           0x00503CE0  //MB_randRot()
#define randVector_ADDROF           0x0050B868  //MB_RandomizeVector(float range)
#define randRangeInt_ADDROF         0x00503BE0  //MB_randRangeInt(int min, int max)
#define randRangeNeg_ADDROF         0x00503C80  //MB_randRange2(float min, float max)
#define randVectorRange_ADDROF      0x0050B970  //MB_RandomizeVectorRange(float minRange, float maxRange)
#define randVectorRangeNeg_ADDROF   0x0050B8F0  //MB_RandomizeVector(float minRange, float maxRange)

//--------------------------------------------------------
//------------------------- HUD --------------------------
//--------------------------------------------------------
#define GetCanvas_ADDROF        0x005435E8 //Canvas* GetCanvas(uint whichCanvas)
#define GetCurrentCanvas_ADDROF 0x005C6590 //Canvas* GetCurrentCanvas()
#define Canvas_GetObject_ADDROF 0x005C0F70 //iObject* Canvas::GetObject(Canvas* this, uint handleId)
#define hudGetTeamColor_ADDROF  0x00545C20 //GuiMain_GetTeamColor(int iTeam, int iVariant)
