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

// ScriptStruct OnlineSubsystemBKP.MMFailedCommandInfo
// 0x0020
struct FMMFailedCommandInfo
{
	struct FString                                     command_id;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     error_code;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystemBKP.MatchmakingEventAckCommands
// 0x0020
struct FMatchmakingEventAckCommands
{
	TArray<struct FString>                             command_ids;                                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FMMFailedCommandInfo>                failed_commands;                                          // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystemBKP.MatchmakingTeam
// 0x0020
struct FMatchmakingTeam
{
	struct FString                                     team_id;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             player_ids;                                               // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct OnlineSubsystemBKP.MatchmakingEventHeartbeat
// 0x0050
struct FMatchmakingEventHeartbeat
{
	struct FString                                     map_name;                                                 // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     game_mode;                                                // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     match_state;                                              // 0x0020(0x0010) (ZeroConstructor)
	TArray<struct FMatchmakingTeam>                    teams;                                                    // 0x0030(0x0010) (ZeroConstructor)
	int                                                player_count;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                is_custom_game;                                           // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                is_match_in_play;                                         // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct OnlineSubsystemBKP.MatchmakingEventAuthenticate
// 0x0070
struct FMatchmakingEventAuthenticate
{
	struct FString                                     server_key;                                               // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     region;                                                   // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     Version;                                                  // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     internal_ip;                                              // 0x0030(0x0010) (ZeroConstructor)
	struct FString                                     Port;                                                     // 0x0040(0x0010) (ZeroConstructor)
	struct FString                                     steam_id;                                                 // 0x0050(0x0010) (ZeroConstructor)
	struct FString                                     environment;                                              // 0x0060(0x0010) (ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
