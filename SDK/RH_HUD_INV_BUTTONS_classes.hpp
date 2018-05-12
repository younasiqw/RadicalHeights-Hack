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

// DynamicClass HUD_INV_BUTTONS.HUD_INV_BUTTONS_C
// 0x0008 (0x0260 - 0x0258)
class UHUD_INV_BUTTONS_C : public UShooterInventoryButtons
{
public:
	class UShooterCachedWidget*                        ShooterCachedWidget_3;                                    // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_INV_BUTTONS.HUD_INV_BUTTONS_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
