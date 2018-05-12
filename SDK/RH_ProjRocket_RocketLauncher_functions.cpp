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

// Function ProjRocket_RocketLauncher.ProjRocket_RocketLauncher_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void AProjRocket_RocketLauncher_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocket_RocketLauncher.ProjRocket_RocketLauncher_C.UserConstructionScript");

	AProjRocket_RocketLauncher_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRocket_RocketLauncher.ProjRocket_RocketLauncher_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void AProjRocket_RocketLauncher_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocket_RocketLauncher.ProjRocket_RocketLauncher_C.ReceiveBeginPlay");

	AProjRocket_RocketLauncher_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjRocket_RocketLauncher.ProjRocket_RocketLauncher_C.OnTakeAnyDamage_Event
// (Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  bpp__DamagedActor__pf          (Parm, ZeroConstructor, IsPlainOldData)
// float                          bpp__Damage__pf                (Parm, ZeroConstructor, IsPlainOldData)
// class UDamageType*             bpp__DamageType__pf__const     (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// class AController*             bpp__InstigatedBy__pf          (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  bpp__DamageCauser__pf          (Parm, ZeroConstructor, IsPlainOldData)

void AProjRocket_RocketLauncher_C::OnTakeAnyDamage_Event(class AActor* bpp__DamagedActor__pf, float bpp__Damage__pf, class UDamageType* bpp__DamageType__pf__const, class AController* bpp__InstigatedBy__pf, class AActor* bpp__DamageCauser__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjRocket_RocketLauncher.ProjRocket_RocketLauncher_C.OnTakeAnyDamage_Event");

	AProjRocket_RocketLauncher_C_OnTakeAnyDamage_Event_Params params;
	params.bpp__DamagedActor__pf = bpp__DamagedActor__pf;
	params.bpp__Damage__pf = bpp__Damage__pf;
	params.bpp__DamageType__pf__const = bpp__DamageType__pf__const;
	params.bpp__InstigatedBy__pf = bpp__InstigatedBy__pf;
	params.bpp__DamageCauser__pf = bpp__DamageCauser__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
