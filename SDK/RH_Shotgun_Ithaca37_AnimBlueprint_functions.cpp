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

// Function Shotgun_Ithaca37_AnimBlueprint.Shotgun_Ithaca37_AnimBlueprint_C.ExecuteUbergraph_Shotgun_Ithaca37_AnimBlueprint
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UShotgun_Ithaca37_AnimBlueprint_C::ExecuteUbergraph_Shotgun_Ithaca37_AnimBlueprint(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shotgun_Ithaca37_AnimBlueprint.Shotgun_Ithaca37_AnimBlueprint_C.ExecuteUbergraph_Shotgun_Ithaca37_AnimBlueprint");

	UShotgun_Ithaca37_AnimBlueprint_C_ExecuteUbergraph_Shotgun_Ithaca37_AnimBlueprint_Params params;
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
