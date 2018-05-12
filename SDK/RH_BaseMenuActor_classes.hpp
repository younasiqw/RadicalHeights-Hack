#pragma once

// Radical Heights (1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// DynamicClass BaseMenuActor.BaseMenuActor_C
// 0x0120 (0x0690 - 0x0570)
class ABaseMenuActor_C : public AShooterMenuActor
{
public:
	class USkeletalMeshComponent*                      feet;                                                     // 0x0570(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      waist;                                                    // 0x0578(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      LowerBody;                                                // 0x0580(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      hands;                                                    // 0x0588(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      UpperBody;                                                // 0x0590(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      face;                                                     // 0x0598(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      FacialHair;                                               // 0x05A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      head;                                                     // 0x05A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Weapon;                                                   // 0x05B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      hair;                                                     // 0x05B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShooterCustomizationComponent*              ShooterCustomization;                                     // 0x05C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Body;                                                     // 0x05C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x05D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnCustomizationCompleted;                                 // 0x05D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable)
	struct FName                                       EmissiveOverrideGameCode;                                 // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       BarrelGlowIntensityOverride;                              // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EShooterClass>                         CharacterClass;                                           // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x05F9(0x0003) MISSED OFFSET
	struct FVector                                     CustomizationWeaponOffset;                                // 0x05FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShowingPrimaryWeapon;                                   // 0x0608(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShowingSecondaryWeapon;                                 // 0x0609(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x060A(0x0006) MISSED OFFSET
	struct FName                                       GameplayOpacityOverride;                                  // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               SocketListOne;                                            // 0x0618(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FName>                               SocketListTwo;                                            // 0x0628(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<EMenuWorldState>                       CachedScene;                                              // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDemoMode;                                               // 0x0639(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x063A(0x0006) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              CallFunc_GetComponentsByClass_ReturnValue;                // 0x0640(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0650(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x0654(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0658(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0659(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x065C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_Event_Slot;                                        // 0x0660(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0664(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0665(0x0003) MISSED OFFSET
	int                                                K2Node_Event_LobbySlot;                                   // 0x0668(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bLoadFinishedInEmoteTab;                     // 0x066C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_IntInt_ReturnValue;                     // 0x066D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x066E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x066F(0x0001) MISSED OFFSET
	int                                                Temp_int_Array_Index_Variable;                            // 0x0670(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x0674(0x0004) MISSED OFFSET
	class USkeletalMeshComponent*                      CallFunc_Array_Get_Item;                                  // 0x0678(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0680(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x0681(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x0682(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x0683(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0xC];                                       // 0x0684(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass BaseMenuActor.BaseMenuActor_C");
		return ptr;
	}


	void OnCustomizationCompleted__DelegateSignature(class ABaseMenuActor_C* bpp__MenuActor__pf);
	void UserConstructionScript();
	void UnhideDelayed();
	void ToggleVisibilityForKickDecal(bool bpp__bVisible__pf);
	void ShowMeshByTag(const struct FName& bpp__Tag__pf);
	void ShowHideCustomizationWeapon(bool bpp__ShouldUseOffset__pf, bool bpp__IsVisible__pf, const struct FVector& bpp__PositionalOffset__pf, class USkeletalMeshComponent* bpp__MeshToModify__pf);
	void SetupForLobby(int bpp__Slot__pf);
	void SetupForCharacterSelect();
	void ReceiveBeginPlay();
	void PlayLobbyAnimation(int bpp__Slot__pf);
	void OnEnableDemoMode();
	void HideMeshByTag(const struct FName& bpp__Tag__pf);
	void ExecuteUbergraph_BaseMenuActor_6(int bpp__EntryPoint__pf);
	void BPSetupForLobby(int bpp__Slot__pf);
	void BPSetupForCharacterSelect();
	void BPPerformEmote();
	void BPOnLoadoutApplied(int bpp__LobbySlot__pf, bool bpp__bLoadFinishedInEmoteTab__pf);
	void ApplyCustomizationFX();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
