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

// Function Special_DeployableCover.Special_DeployableCover_C.BlueprintUpdateAnimation
// (Final, Native, Event, Public)
// Parameters:
// float                          bpp__DeltaTimeX__pf            (Parm, ZeroConstructor, IsPlainOldData)

void USpecial_DeployableCover_C::BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Special_DeployableCover.Special_DeployableCover_C.BlueprintUpdateAnimation");

	USpecial_DeployableCover_C_BlueprintUpdateAnimation_Params params;
	params.bpp__DeltaTimeX__pf = bpp__DeltaTimeX__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
