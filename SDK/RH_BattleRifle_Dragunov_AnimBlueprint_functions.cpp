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

// Function BattleRifle_Dragunov_AnimBlueprint.BattleRifle_Dragunov_AnimBlueprint_C.ExecuteUbergraph_BattleRifle_Dragunov_AnimBlueprint
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void UBattleRifle_Dragunov_AnimBlueprint_C::ExecuteUbergraph_BattleRifle_Dragunov_AnimBlueprint(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleRifle_Dragunov_AnimBlueprint.BattleRifle_Dragunov_AnimBlueprint_C.ExecuteUbergraph_BattleRifle_Dragunov_AnimBlueprint");

	UBattleRifle_Dragunov_AnimBlueprint_C_ExecuteUbergraph_BattleRifle_Dragunov_AnimBlueprint_Params params;
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
