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

// Function HUD_Reticle_BasicCircle.HUD_Reticle_BasicCircle_C.WeaponReloadStart
// (Final, Native, Event, Public)

void UHUD_Reticle_BasicCircle_C::WeaponReloadStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Reticle_BasicCircle.HUD_Reticle_BasicCircle_C.WeaponReloadStart");

	UHUD_Reticle_BasicCircle_C_WeaponReloadStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Reticle_BasicCircle.HUD_Reticle_BasicCircle_C.WeaponReloadFinished
// (Final, Native, Event, Public)

void UHUD_Reticle_BasicCircle_C::WeaponReloadFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Reticle_BasicCircle.HUD_Reticle_BasicCircle_C.WeaponReloadFinished");

	UHUD_Reticle_BasicCircle_C_WeaponReloadFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Reticle_BasicCircle.HUD_Reticle_BasicCircle_C.WeaponFired
// (Final, Native, Event, Public)

void UHUD_Reticle_BasicCircle_C::WeaponFired()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Reticle_BasicCircle.HUD_Reticle_BasicCircle_C.WeaponFired");

	UHUD_Reticle_BasicCircle_C_WeaponFired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Reticle_BasicCircle.HUD_Reticle_BasicCircle_C.WeaponEquipStarted
// (Final, Native, Event, Public)

void UHUD_Reticle_BasicCircle_C::WeaponEquipStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Reticle_BasicCircle.HUD_Reticle_BasicCircle_C.WeaponEquipStarted");

	UHUD_Reticle_BasicCircle_C_WeaponEquipStarted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Reticle_BasicCircle.HUD_Reticle_BasicCircle_C.WeaponEquipFinished
// (Final, Native, Event, Public)

void UHUD_Reticle_BasicCircle_C::WeaponEquipFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Reticle_BasicCircle.HUD_Reticle_BasicCircle_C.WeaponEquipFinished");

	UHUD_Reticle_BasicCircle_C_WeaponEquipFinished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Reticle_BasicCircle.HUD_Reticle_BasicCircle_C.CrosshairColorChanged
// (Final, Native, Event, Public, HasDefaults)
// Parameters:
// struct FLinearColor            bpp__NewColor__pf              (Parm, ZeroConstructor, IsPlainOldData)

void UHUD_Reticle_BasicCircle_C::CrosshairColorChanged(const struct FLinearColor& bpp__NewColor__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Reticle_BasicCircle.HUD_Reticle_BasicCircle_C.CrosshairColorChanged");

	UHUD_Reticle_BasicCircle_C_CrosshairColorChanged_Params params;
	params.bpp__NewColor__pf = bpp__NewColor__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_Reticle_BasicCircle.HUD_Reticle_BasicCircle_C.Construct
// (Final, BlueprintCosmetic, Native, Event, Public)

void UHUD_Reticle_BasicCircle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_Reticle_BasicCircle.HUD_Reticle_BasicCircle_C.Construct");

	UHUD_Reticle_BasicCircle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
