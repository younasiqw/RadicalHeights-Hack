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

// Function Rifle_AUG_AnimBlueprint.Rifle_AUG_AnimBlueprint_C.ExecuteUbergraph_Rifle_AUG_AnimBlueprint
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void URifle_AUG_AnimBlueprint_C::ExecuteUbergraph_Rifle_AUG_AnimBlueprint(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Rifle_AUG_AnimBlueprint.Rifle_AUG_AnimBlueprint_C.ExecuteUbergraph_Rifle_AUG_AnimBlueprint");

	URifle_AUG_AnimBlueprint_C_ExecuteUbergraph_Rifle_AUG_AnimBlueprint_Params params;
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
