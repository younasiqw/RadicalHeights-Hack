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

// DelegateFunction BaseMenuActor.BaseMenuActor_C.OnCustomizationCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class ABaseMenuActor_C*        bpp__MenuActor__pf             (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::OnCustomizationCompleted__DelegateSignature(class ABaseMenuActor_C* bpp__MenuActor__pf)
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction BaseMenuActor.BaseMenuActor_C.OnCustomizationCompleted__DelegateSignature");

	ABaseMenuActor_C_OnCustomizationCompleted__DelegateSignature_Params params;
	params.bpp__MenuActor__pf = bpp__MenuActor__pf;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.UserConstructionScript
// (Final, Native, Event, Public, BlueprintCallable)

void ABaseMenuActor_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.UserConstructionScript");

	ABaseMenuActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.UnhideDelayed
// (Native, Public, BlueprintCallable)

void ABaseMenuActor_C::UnhideDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.UnhideDelayed");

	ABaseMenuActor_C_UnhideDelayed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.ToggleVisibilityForKickDecal
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bpp__bVisible__pf              (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::ToggleVisibilityForKickDecal(bool bpp__bVisible__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.ToggleVisibilityForKickDecal");

	ABaseMenuActor_C_ToggleVisibilityForKickDecal_Params params;
	params.bpp__bVisible__pf = bpp__bVisible__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.ShowMeshByTag
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   bpp__Tag__pf                   (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::ShowMeshByTag(const struct FName& bpp__Tag__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.ShowMeshByTag");

	ABaseMenuActor_C_ShowMeshByTag_Params params;
	params.bpp__Tag__pf = bpp__Tag__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.ShowHideCustomizationWeapon
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// bool                           bpp__ShouldUseOffset__pf       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__IsVisible__pf             (Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 bpp__PositionalOffset__pf      (Parm, ZeroConstructor, IsPlainOldData)
// class USkeletalMeshComponent*  bpp__MeshToModify__pf          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ABaseMenuActor_C::ShowHideCustomizationWeapon(bool bpp__ShouldUseOffset__pf, bool bpp__IsVisible__pf, const struct FVector& bpp__PositionalOffset__pf, class USkeletalMeshComponent* bpp__MeshToModify__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.ShowHideCustomizationWeapon");

	ABaseMenuActor_C_ShowHideCustomizationWeapon_Params params;
	params.bpp__ShouldUseOffset__pf = bpp__ShouldUseOffset__pf;
	params.bpp__IsVisible__pf = bpp__IsVisible__pf;
	params.bpp__PositionalOffset__pf = bpp__PositionalOffset__pf;
	params.bpp__MeshToModify__pf = bpp__MeshToModify__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.SetupForLobby
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            bpp__Slot__pf                  (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::SetupForLobby(int bpp__Slot__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.SetupForLobby");

	ABaseMenuActor_C_SetupForLobby_Params params;
	params.bpp__Slot__pf = bpp__Slot__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.SetupForCharacterSelect
// (Native, Public, BlueprintCallable)

void ABaseMenuActor_C::SetupForCharacterSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.SetupForCharacterSelect");

	ABaseMenuActor_C_SetupForCharacterSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.ReceiveBeginPlay
// (Final, Native, Event, Public)

void ABaseMenuActor_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.ReceiveBeginPlay");

	ABaseMenuActor_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.PlayLobbyAnimation
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            bpp__Slot__pf                  (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::PlayLobbyAnimation(int bpp__Slot__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.PlayLobbyAnimation");

	ABaseMenuActor_C_PlayLobbyAnimation_Params params;
	params.bpp__Slot__pf = bpp__Slot__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.OnEnableDemoMode
// (Native, Public, BlueprintCallable)

void ABaseMenuActor_C::OnEnableDemoMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.OnEnableDemoMode");

	ABaseMenuActor_C_OnEnableDemoMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.HideMeshByTag
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   bpp__Tag__pf                   (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::HideMeshByTag(const struct FName& bpp__Tag__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.HideMeshByTag");

	ABaseMenuActor_C_HideMeshByTag_Params params;
	params.bpp__Tag__pf = bpp__Tag__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.ExecuteUbergraph_BaseMenuActor_6
// (Final, Native, Public)
// Parameters:
// int                            bpp__EntryPoint__pf            (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::ExecuteUbergraph_BaseMenuActor_6(int bpp__EntryPoint__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.ExecuteUbergraph_BaseMenuActor_6");

	ABaseMenuActor_C_ExecuteUbergraph_BaseMenuActor_6_Params params;
	params.bpp__EntryPoint__pf = bpp__EntryPoint__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.BPSetupForLobby
// (Final, Native, Event, Public)
// Parameters:
// int                            bpp__Slot__pf                  (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::BPSetupForLobby(int bpp__Slot__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.BPSetupForLobby");

	ABaseMenuActor_C_BPSetupForLobby_Params params;
	params.bpp__Slot__pf = bpp__Slot__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.BPSetupForCharacterSelect
// (Final, Native, Event, Public)

void ABaseMenuActor_C::BPSetupForCharacterSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.BPSetupForCharacterSelect");

	ABaseMenuActor_C_BPSetupForCharacterSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.BPPerformEmote
// (Final, Native, Event, Public)

void ABaseMenuActor_C::BPPerformEmote()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.BPPerformEmote");

	ABaseMenuActor_C_BPPerformEmote_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.BPOnLoadoutApplied
// (Final, Native, Event, Public)
// Parameters:
// int                            bpp__LobbySlot__pf             (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bpp__bLoadFinishedInEmoteTab__pf (Parm, ZeroConstructor, IsPlainOldData)

void ABaseMenuActor_C::BPOnLoadoutApplied(int bpp__LobbySlot__pf, bool bpp__bLoadFinishedInEmoteTab__pf)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.BPOnLoadoutApplied");

	ABaseMenuActor_C_BPOnLoadoutApplied_Params params;
	params.bpp__LobbySlot__pf = bpp__LobbySlot__pf;
	params.bpp__bLoadFinishedInEmoteTab__pf = bpp__bLoadFinishedInEmoteTab__pf;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BaseMenuActor.BaseMenuActor_C.ApplyCustomizationFX
// (Native, Public, BlueprintCallable)

void ABaseMenuActor_C::ApplyCustomizationFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseMenuActor.BaseMenuActor_C.ApplyCustomizationFX");

	ABaseMenuActor_C_ApplyCustomizationFX_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
