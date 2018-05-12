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

// DynamicClass HUD_HOLD_INPUT.HUD_HOLD_INPUT_C
// 0x0018 (0x0278 - 0x0260)
class UHUD_HOLD_INPUT_C : public UShooterInputHoldWidget
{
public:
	class UWidgetAnimation*                            ANIM_ACTION_COMPLETE;                                     // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      COMPLETE_FX;                                              // 0x0268(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Hold_button;                                              // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_HOLD_INPUT.HUD_HOLD_INPUT_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
