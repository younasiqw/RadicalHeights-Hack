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

// Function Pistol_PPK_AnimBlueprint.Pistol_PPK_AnimBlueprint_C.ExecuteUbergraph_Pistol_PPK_AnimBlueprint
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UPistol_PPK_AnimBlueprint_C::ExecuteUbergraph_Pistol_PPK_AnimBlueprint(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function Pistol_PPK_AnimBlueprint.Pistol_PPK_AnimBlueprint_C.ExecuteUbergraph_Pistol_PPK_AnimBlueprint");

	UPistol_PPK_AnimBlueprint_C_ExecuteUbergraph_Pistol_PPK_AnimBlueprint_Params params;
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
