// Radical Heights (1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EOM_REPORT_DIALOG.EOM_REPORT_DIALOG_C.Construct
// (Final, BlueprintCosmetic, Native, Event, Public)

void UEOM_REPORT_DIALOG_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function EOM_REPORT_DIALOG.EOM_REPORT_DIALOG_C.Construct");

	UEOM_REPORT_DIALOG_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EOM_REPORT_DIALOG.EOM_REPORT_DIALOG_C.BndEvt__BUTTON_SUBMIT_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature
// (Native, Public)

void UEOM_REPORT_DIALOG_C::BndEvt__BUTTON_SUBMIT_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function EOM_REPORT_DIALOG.EOM_REPORT_DIALOG_C.BndEvt__BUTTON_SUBMIT_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature");

	UEOM_REPORT_DIALOG_C_BndEvt__BUTTON_SUBMIT_K2Node_ComponentBoundEvent_152_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
