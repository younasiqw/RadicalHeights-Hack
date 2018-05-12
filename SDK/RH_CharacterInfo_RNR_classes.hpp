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

// DynamicClass CharacterInfo_RNR.CharacterInfo_RNR_C
// 0x0018 (0x0300 - 0x02E8)
class UCharacterInfo_RNR_C : public UShooterCharacterInfoWidget
{
public:
	class UWidgetAnimation*                            ProneBlocked;                                             // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UWidgetAnimation*                            BadReception;                                             // 0x02F0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               CachedOverchargeState;                                    // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x02F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue;                  // 0x02FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x02FB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAnimationPlaying_ReturnValue2;                 // 0x02FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass CharacterInfo_RNR.CharacterInfo_RNR_C");
		return ptr;
	}


	void ShowSupplyLineError();
	void ShowProneError();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
