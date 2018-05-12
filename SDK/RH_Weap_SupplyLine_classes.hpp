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

// DynamicClass Weap_SupplyLine.Weap_SupplyLine_C
// 0x0040 (0x1020 - 0x0FE0)
class AWeap_SupplyLine_C : public AShooterWeapon_SupplyLine
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0FE0(0x0018) MISSED OFFSET
	TArray<class USkeletalMeshComponent*>              CallFunc_GetComponentsByClass_ReturnValue;                // 0x0FF8(0x0010) (ExportObject, ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x1008(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x1009(0x0007) MISSED OFFSET
	TArray<int>                                        K2Node_MakeArray_Array;                                   // 0x1010(0x0010) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Weap_SupplyLine.Weap_SupplyLine_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnWeaponCustomizationCompleted();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
