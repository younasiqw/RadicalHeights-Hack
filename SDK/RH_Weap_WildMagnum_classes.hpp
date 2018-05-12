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

// DynamicClass Weap_WildMagnum.Weap_WildMagnum_C
// 0x0050 (0x1010 - 0x0FC0)
class AWeap_WildMagnum_C : public AShooterWeapon
{
public:
	struct FStickerUVTransforms                        StickerUvTransformInformation;                            // 0x0FC0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class USkeletalMeshComponent*>              CallFunc_GetComponentsByClass_ReturnValue;                // 0x0FE0(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0FF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0FF1(0x0007) MISSED OFFSET
	TArray<int>                                        K2Node_MakeArray_Array;                                   // 0x0FF8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData01[0x8];                                       // 0x1008(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Weap_WildMagnum.Weap_WildMagnum_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnWeaponCustomizationCompleted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
