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

// Function Special_Burger_AnimBlueprint.Special_Burger_AnimBlueprint_C.ExecuteUbergraph_Special_Burger_AnimBlueprint
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void USpecial_Burger_AnimBlueprint_C::ExecuteUbergraph_Special_Burger_AnimBlueprint(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Special_Burger_AnimBlueprint.Special_Burger_AnimBlueprint_C.ExecuteUbergraph_Special_Burger_AnimBlueprint");

	USpecial_Burger_AnimBlueprint_C_ExecuteUbergraph_Special_Burger_AnimBlueprint_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
