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

// DynamicClass HUD_InGameNotification_ScreenPositioned.HUD_InGameNotification_ScreenPositioned_C
// 0x0000 (0x0238 - 0x0238)
class UHUD_InGameNotification_ScreenPositioned_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_InGameNotification_ScreenPositioned.HUD_InGameNotification_ScreenPositioned_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
