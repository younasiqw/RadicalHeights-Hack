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

// DynamicClass HUD_INV_PRIZESLOTS_ENTRY.HUD_INV_PRIZESLOTS_ENTRY_C
// 0x0010 (0x02A0 - 0x0290)
class UHUD_INV_PRIZESLOTS_ENTRY_C : public UShooterInventoryListSwitcherEntry
{
public:
	class UShooterCachedWidget*                        ShooterCachedWidget_3;                                    // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             WidgetSwitcher_1;                                         // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_INV_PRIZESLOTS_ENTRY.HUD_INV_PRIZESLOTS_ENTRY_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
