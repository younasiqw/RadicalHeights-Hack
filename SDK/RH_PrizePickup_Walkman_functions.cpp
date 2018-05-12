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

// Function PrizePickup_Walkman.PrizePickup_Walkman_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void APrizePickup_Walkman_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrizePickup_Walkman.PrizePickup_Walkman_C.UserConstructionScript");

	APrizePickup_Walkman_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PrizePickup_Walkman.PrizePickup_Walkman_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void APrizePickup_Walkman_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrizePickup_Walkman.PrizePickup_Walkman_C.ReceiveBeginPlay");

	APrizePickup_Walkman_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
