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

// Function GameMode_MenuLMS.GameMode_MenuLMS_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AGameMode_MenuLMS_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameMode_MenuLMS.GameMode_MenuLMS_C.UserConstructionScript");

	AGameMode_MenuLMS_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
