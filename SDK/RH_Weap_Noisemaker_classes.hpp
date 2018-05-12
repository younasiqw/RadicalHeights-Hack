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

// DynamicClass Weap_Noisemaker.Weap_Noisemaker_C
// 0x0050 (0x1010 - 0x0FC0)
class AWeap_Noisemaker_C : public AShooterWeapon
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0FC0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FStickerUVTransforms                        StickerUvTransformInformation;                            // 0x0FC8(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              CallFunc_GetComponentsByClass_ReturnValue;                // 0x0FE8(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0FF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0FF9(0x0007) MISSED OFFSET
	TArray<int>                                        K2Node_MakeArray_Array;                                   // 0x1000(0x0010) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Weap_Noisemaker.Weap_Noisemaker_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnWeaponCustomizationCompleted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
