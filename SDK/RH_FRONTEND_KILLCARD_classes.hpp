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

// DynamicClass FRONTEND_KILLCARD.FRONTEND_KILLCARD_C
// 0x0028 (0x02B8 - 0x0290)
class UFRONTEND_KILLCARD_C : public UShooterEomKillCardWidget
{
public:
	class UImage*                                      KILLCARD_PLAYERBACKGROUND;                                // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      KILLCARD_PLAYERFRAME;                                     // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      KILLCARD_PLAYERICON;                                      // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      KILLCARD_QUOTE;                                           // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      KILLCARD_WEAPONICON;                                      // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass FRONTEND_KILLCARD.FRONTEND_KILLCARD_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
