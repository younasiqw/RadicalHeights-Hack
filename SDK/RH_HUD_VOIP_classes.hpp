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

// DynamicClass HUD_VOIP.HUD_VOIP_C
// 0x0008 (0x0300 - 0x02F8)
class UHUD_VOIP_C : public UShooterVoipWidget
{
public:
	class UVerticalBox*                                EntryContainer;                                           // 0x02F8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_VOIP.HUD_VOIP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
