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

// DynamicClass MarkedForDeathIcon.MarkedForDeathIcon_C
// 0x0008 (0x0240 - 0x0238)
class UMarkedForDeathIcon_C : public UUserWidget
{
public:
	class UImage*                                      Image_1;                                                  // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass MarkedForDeathIcon.MarkedForDeathIcon_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
