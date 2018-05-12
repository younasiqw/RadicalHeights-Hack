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

// Function END_OF_MATCH_WIDGET_RNR.END_OF_MATCH_WIDGET_RNR_C.Tick
// (Final, BlueprintCosmetic, Native, Event, Public)
// Parameters:
// struct FGeometry               bpp__MyGeometry__pf            (Parm, IsPlainOldData)
// float                          bpp__InDeltaTime__pf           (Parm, ZeroConstructor, IsPlainOldData)

void UEND_OF_MATCH_WIDGET_RNR_C::Tick(const struct FGeometry& bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function END_OF_MATCH_WIDGET_RNR.END_OF_MATCH_WIDGET_RNR_C.Tick");

	UEND_OF_MATCH_WIDGET_RNR_C_Tick_Params params;
	params.bpp__MyGeometry__pf = bpp__MyGeometry__pf;
	params.bpp__InDeltaTime__pf = bpp__InDeltaTime__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function END_OF_MATCH_WIDGET_RNR.END_OF_MATCH_WIDGET_RNR_C.Construct
// (Final, BlueprintCosmetic, Native, Event, Public)

void UEND_OF_MATCH_WIDGET_RNR_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function END_OF_MATCH_WIDGET_RNR.END_OF_MATCH_WIDGET_RNR_C.Construct");

	UEND_OF_MATCH_WIDGET_RNR_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function END_OF_MATCH_WIDGET_RNR.END_OF_MATCH_WIDGET_RNR_C.BndEvt__EOM_BUTTON_REPORT_K2Node_ComponentBoundEvent_106_OnButtonPressedEvent__DelegateSignature
// (Native, Public)

void UEND_OF_MATCH_WIDGET_RNR_C::BndEvt__EOM_BUTTON_REPORT_K2Node_ComponentBoundEvent_106_OnButtonPressedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function END_OF_MATCH_WIDGET_RNR.END_OF_MATCH_WIDGET_RNR_C.BndEvt__EOM_BUTTON_REPORT_K2Node_ComponentBoundEvent_106_OnButtonPressedEvent__DelegateSignature");

	UEND_OF_MATCH_WIDGET_RNR_C_BndEvt__EOM_BUTTON_REPORT_K2Node_ComponentBoundEvent_106_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
