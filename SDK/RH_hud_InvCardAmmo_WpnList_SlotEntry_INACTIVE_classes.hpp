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

// DynamicClass hud_InvCardAmmo_WpnList_SlotEntry_INACTIVE.hud_InvCardAmmo_WpnList_SlotEntry_INACTIVE_C
// 0x0008 (0x0260 - 0x0258)
class Uhud_InvCardAmmo_WpnList_SlotEntry_INACTIVE_C : public UShooterInvCardAmmoGunListEntry
{
public:
	class UImage*                                      SlotEntry_Icon;                                           // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_InvCardAmmo_WpnList_SlotEntry_INACTIVE.hud_InvCardAmmo_WpnList_SlotEntry_INACTIVE_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
