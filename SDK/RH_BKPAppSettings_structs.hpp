#pragma once

// Radical Heights (1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct BKPAppSettings.AppSettingsStruct
// 0x002C
struct FAppSettingsStruct
{
	uint32_t                                           LOBBY_MAX_BOTS;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ENABLE_MODULE_CHECK;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DEATH_TAX;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WINNER_CASH_MULTIPLIER;                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SPEEDHACK_SPEED_THRESHOLD;                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SPEEDHACK_TRIGGER_COUNT;                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SPEEDHACK_CHECK_INTERVAL;                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ENABLE_GAMEBLOCKS;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ENABLE_GAMEBLOCKS_PLAYERPOS;                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ENABLE_SCREENSHOT;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ENABLE_HID;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
