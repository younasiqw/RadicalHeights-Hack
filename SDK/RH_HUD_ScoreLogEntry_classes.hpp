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

// DynamicClass HUD_ScoreLogEntry.HUD_ScoreLogEntry_C
// 0x0000 (0x02D0 - 0x02D0)
class UHUD_ScoreLogEntry_C : public UShooterScoreMessage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_ScoreLogEntry.HUD_ScoreLogEntry_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
