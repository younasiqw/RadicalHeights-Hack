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

// DynamicClass Subtitles.Subtitles_C
// 0x0008 (0x0258 - 0x0250)
class USubtitles_C : public UShooterSubtitles
{
public:
	class UShooterCachedWidget*                        ShooterCachedWidget_1;                                    // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Subtitles.Subtitles_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
