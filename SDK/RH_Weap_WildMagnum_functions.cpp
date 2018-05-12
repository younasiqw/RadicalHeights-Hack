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

// Function Weap_WildMagnum.Weap_WildMagnum_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AWeap_WildMagnum_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_WildMagnum.Weap_WildMagnum_C.UserConstructionScript");

	AWeap_WildMagnum_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Weap_WildMagnum.Weap_WildMagnum_C.OnWeaponCustomizationCompleted
// (Final, Native, Event, Public)

void AWeap_WildMagnum_C::OnWeaponCustomizationCompleted()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weap_WildMagnum.Weap_WildMagnum_C.OnWeaponCustomizationCompleted");

	AWeap_WildMagnum_C_OnWeaponCustomizationCompleted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
