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

// DynamicClass EOM_REPORT_DIALOG.EOM_REPORT_DIALOG_C
// 0x0088 (0x02D0 - 0x0248)
class UEOM_REPORT_DIALOG_C : public UShooterReportPlayerWidget
{
public:
	class UButton*                                     BUTTON_SUBMIT;                                            // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UComboBoxString*                             REPORT_REASON;                                            // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UComboBoxString*                             REPORT_TARGET;                                            // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UTextBlock*                                  REPORTDESCRIPTOR;                                         // 0x0260(0x0008) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	struct FText                                       TEXT_REPORT_SPECTATED_PLAYER;                             // 0x0268(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       TEXT_REPORT_KILLER;                                       // 0x0280(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     String_ReportSpectated;                                   // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     CallFunc_GetSelectedOption_ReturnValue;                   // 0x02A8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FString                                     CallFunc_GetSelectedOption_ReturnValue2;                  // 0x02B8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_StrStr_ReturnValue;                   // 0x02C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass EOM_REPORT_DIALOG.EOM_REPORT_DIALOG_C");
		return ptr;
	}


	void Construct();
	void BndEvt__BUTTON_SUBMIT_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
