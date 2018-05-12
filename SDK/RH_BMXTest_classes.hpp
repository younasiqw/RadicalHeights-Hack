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

// DynamicClass BMXTest.BMXTest_C
// 0x0030 (0x06A8 - 0x0678)
class ABMXTest_C : public AShooterBike
{
public:
	class USkeletalMeshComponent*                      BikeMesh;                                                 // 0x0678(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x0680(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UShooterInteractComponent*                   ShooterInteract;                                          // 0x0688(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<class UMaterialInstance*>                   BMX_Textures_List;                                        // 0x0690(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInstance*                           Bike_Texture;                                             // 0x06A0(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass BMXTest.BMXTest_C");
		return ptr;
	}


	void UserConstructionScript();
	void SelectBikeColor();
	void ReceiveBeginPlay();
	void OnRep_Bike_Texture();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
