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

// DynamicClass WASD_Widget.WASD_Widget_C
// 0x0010 (0x0280 - 0x0270)
class UWASD_Widget_C : public UShooterMovementKeyBindingWidget
{
public:
	class UImage*                                      AnalogStick;                                              // 0x0270(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetSwitcher*                             Switcher;                                                 // 0x0278(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass WASD_Widget.WASD_Widget_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
