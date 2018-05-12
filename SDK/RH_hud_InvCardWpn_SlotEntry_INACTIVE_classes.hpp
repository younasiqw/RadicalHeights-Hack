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

// DynamicClass hud_InvCardWpn_SlotEntry_INACTIVE.hud_InvCardWpn_SlotEntry_INACTIVE_C
// 0x0010 (0x0270 - 0x0260)
class Uhud_InvCardWpn_SlotEntry_INACTIVE_C : public UShooterInvCardWeapAttachListEntry
{
public:
	class UImage*                                      SlotEntry_BG;                                             // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      SlotEntry_Icon;                                           // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_InvCardWpn_SlotEntry_INACTIVE.hud_InvCardWpn_SlotEntry_INACTIVE_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
