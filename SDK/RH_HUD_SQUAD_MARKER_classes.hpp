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

// DynamicClass HUD_SQUAD_MARKER.HUD_SQUAD_MARKER_C
// 0x0008 (0x0250 - 0x0248)
class UHUD_SQUAD_MARKER_C : public UShooterUserWidget
{
public:
	class UImage*                                      HUD_SQUAD_MARKER_ICON;                                    // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_SQUAD_MARKER.HUD_SQUAD_MARKER_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
