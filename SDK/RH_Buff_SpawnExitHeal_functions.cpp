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

// Function Buff_SpawnExitHeal.Buff_SpawnExitHeal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABuff_SpawnExitHeal_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_SpawnExitHeal.Buff_SpawnExitHeal_C.UserConstructionScript");

	ABuff_SpawnExitHeal_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
