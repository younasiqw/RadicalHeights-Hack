#pragma once

// Radical Heights (1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemSteam.SteamNetConnection
// 0x0008 (0x33730 - 0x33728)
class USteamNetConnection : public UIpConnection
{
public:
	bool                                               bIsPassthrough;                                           // 0x33728(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x33729(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamNetConnection");
		return ptr;
	}

};


// Class OnlineSubsystemSteam.SteamNetDriver
// 0x0018 (0x03A8 - 0x0390)
class USteamNetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0390(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class OnlineSubsystemSteam.SteamNetDriver");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
