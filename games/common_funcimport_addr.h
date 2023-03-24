//
// Imported functions with identical offsets in all
// supported games go in this file to reduce duplication.
//

//--------------------------------------------------------
//------------------- STANDARD LIBRARY -------------------
//--------------------------------------------------------
#define printf_ADDROF       0x0011D5D8
#define sprintf_ADDROF      0x0011D920
#define snprintf_ADDROF     0x0011D878
#define sscanf_ADDROF       0x0011D9A8
#define memset_ADDROF       0x0011A518
#define memcpy_ADDROF       0x0011A370
#define memmove_ADDROF      0x0011A41C
#define strncpy_ADDROF      0x0011AFC8
#define strlen_ADDROF 		0x0011AB04
#define strcmp_ADDROF 		0x0011A8A0
#define strstr_ADDROF 		0x00122160
#define malloc_ADDROF 		0x0011EF60
#define free_ADDROF 		0x0011EFB0

//--------------------------------------------------------
//------------------------- MATH -------------------------
//--------------------------------------------------------
#define cosf_ADDROF         0x00135878
#define asinf_ADDROF        0x00136278
#define powf_ADDROF         0x00136788
#define fabsf_ADDROF        0x00135960
#define fptodp_ADDROF       0x00131918
#define floorf_ADDROF       0x001359A8
#define __divdi3_ADDROF     0x0012feb0
#define ceilf_ADDROF        0x00135770

//--------------------------------------------------------
//------------------------ MATH 3D -----------------------
//--------------------------------------------------------
#define matrix_unit_ADDROF      0x0013c478   //Real name is sceVu0UnitMatrix
#define matrix_rotate_x_ADDROF  0x0013c5c0   //Real name is sceVu0RotMatrixX
#define matrix_rotate_y_ADDROF  0x0013c668   //Real name is sceVu0RotMatrixY
#define matrix_rotate_z_ADDROF  0x0013c518   //Real name is sceVu0RotMatrixZ

//--------------------------------------------------------
//---------------------- MEMORY CARD ---------------------
//--------------------------------------------------------
#define McOpen_ADDROF    0x0013A160 //All these names lack "sce" prefix
#define McClose_ADDROF   0x0013A2C0
#define McSeek_ADDROF    0x0013A380
#define McRead_ADDROF    0x0013A510
#define McWrite_ADDROF   0x0013A628

//--------------------------------------------------------
//-------------------------- NET -------------------------
//--------------------------------------------------------
#define NetSendMessage_ADDROF       0x01E9E198
#define NetSendAppMessage_ADDROF    0x01E9E270
#define NetISetSendAggregationInterval_ADDROF 0x01EA0558

//--------------------------------------------------------
//------------------------- INET -------------------------
//--------------------------------------------------------
#define inetAbort_ADDROF            0x01e9bce8 //All these names lack "sce" prefix
#define inetClose_ADDROF            0x01e9bb28
#define inetControl_ADDROF          0x01e9bd30
#define inetCreate_ADDROF           0x01e9ba68
#define inetGetInterfaceList_ADDROF 0x01e9bde0
#define inetGetNameServers_ADDROF   0x01e9bf20
#define inetInterfaceControl_ADDROF 0x01e9be70
#define inetName2Address_ADDROF     0x01e9b978
#define inetOpen_ADDROF             0x01e9bae0
#define inetRecv_ADDROF             0x01e9bb70
#define inetSend_ADDROF             0x01e9bc38

//--------------------------------------------------------
//------------------------- TIME -------------------------
//--------------------------------------------------------
#define timerGetSystemTime_ADDROF 0x0012E370 //Real name is GetTimerSystemTime

//--------------------------------------------------------
//------------------------- SIF --------------------------
//--------------------------------------------------------
#define SifInitRpc_ADDROF           0x00129d90 //All these lack "sce" prefix
#define SifExitRpc_ADDROF           0x00129f30
#define SifRpcGetOtherData_ADDROF   0x0012a270
#define SifBindRpc_ADDROF           0x0012a538
#define SifCallRpc_ADDROF           0x0012a718

#define SifCheckStatRpc_ADDROF      0x0012a918
#define SifInitIopHeap_ADDROF       0x0012c1b8
#define SifAllocIopHeap_ADDROF      0x0012c240
#define SifFreeIopHeap_ADDROF       0x0012C3A8
#define SifIopReset_ADDROF          0x0012cc30
#define SifIopSync_ADDROF           0x0012cdb0
#define _SifLoadModuleBuffer_ADDROF 0x0012CBC0 //Real name is sceSifLoadModuleBuffer

#define SifWriteBackDCache_ADDROF   0x00129ce0
#define SifSetDma_ADDROF            0x00126f60
#define SifDmaStat_ADDROF           0x00126f40

//--------------------------------------------------------
//------------------------- GAME -------------------------
//--------------------------------------------------------
#define gameGetWorldId_ADDROF 0x01EA55E8 //NetGetMyWorldID