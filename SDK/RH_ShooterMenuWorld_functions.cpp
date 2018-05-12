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

// Function ShooterMenuWorld.ShooterMenuWorld_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKEY                    KEY                            (Parm)

void AShooterMenuWorld_C::InpActEvt_SpaceBar_K2Node_InputKeyEvent_2(const struct FKEY& KEY)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterMenuWorld.ShooterMenuWorld_C.InpActEvt_SpaceBar_K2Node_InputKeyEvent_2");

	AShooterMenuWorld_C_InpActEvt_SpaceBar_K2Node_InputKeyEvent_2_Params params;
	params.KEY = KEY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterMenuWorld.ShooterMenuWorld_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void AShooterMenuWorld_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterMenuWorld.ShooterMenuWorld_C.ReceiveBeginPlay");

	AShooterMenuWorld_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ShooterMenuWorld.ShooterMenuWorld_C.ExecuteUbergraph_ShooterMenuWorld
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AShooterMenuWorld_C::ExecuteUbergraph_ShooterMenuWorld(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ShooterMenuWorld.ShooterMenuWorld_C.ExecuteUbergraph_ShooterMenuWorld");

	AShooterMenuWorld_C_ExecuteUbergraph_ShooterMenuWorld_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
