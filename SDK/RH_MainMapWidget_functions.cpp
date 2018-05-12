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

// Function MainMapWidget.MainMapWidget_C.Construct
// (Final, BlueprintCosmetic, Native, Event, Public)

void UMainMapWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainMapWidget.MainMapWidget_C.Construct");

	UMainMapWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
