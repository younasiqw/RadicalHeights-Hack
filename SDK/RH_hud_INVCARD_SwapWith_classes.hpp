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

// DynamicClass hud_INVCARD_SwapWith.hud_INVCARD_SwapWith_C
// 0x0010 (0x0260 - 0x0250)
class Uhud_INVCARD_SwapWith_C : public UShooterInvCard
{
public:
	class UImage*                                      h_icon_InvCardSwapArrows;                                 // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UShooterCachedWidget*                        ShooterCachedWidget_1;                                    // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass hud_INVCARD_SwapWith.hud_INVCARD_SwapWith_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
