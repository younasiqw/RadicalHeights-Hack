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

// DynamicClass HUD_ScoreLogPrimary.HUD_ScoreLogPrimary_C
// 0x0008 (0x0338 - 0x0330)
class UHUD_ScoreLogPrimary_C : public UShooterScoreLogWidget
{
public:
	class UVerticalBox*                                Primary;                                                  // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_ScoreLogPrimary.HUD_ScoreLogPrimary_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
