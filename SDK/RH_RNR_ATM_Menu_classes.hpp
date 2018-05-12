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

// DynamicClass RNR_ATM_Menu.RNR_ATM_Menu_C
// 0x0020 (0x02B0 - 0x0290)
class URNR_ATM_Menu_C : public UShooterUserWidget_ATM
{
public:
	class UButton*                                     Deposit;                                                  // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UImage*                                      Image_1;                                                  // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UProgressBar*                                ProgressBar_1;                                            // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UButton*                                     Withdraw;                                                 // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass RNR_ATM_Menu.RNR_ATM_Menu_C");
		return ptr;
	}


	void BndEvt__Withdraw_K2Node_ComponentBoundEvent_156_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Deposit_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
