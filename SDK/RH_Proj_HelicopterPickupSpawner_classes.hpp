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

// DynamicClass Proj_HelicopterPickupSpawner.Proj_HelicopterPickupSpawner_C
// 0x0010 (0x03E0 - 0x03D0)
class AProj_HelicopterPickupSpawner_C : public AShooterSupplyLinePackage
{
public:
	class UStaticMeshComponent*                        StaticMesh;                                               // 0x03D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Box;                                                      // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Proj_HelicopterPickupSpawner.Proj_HelicopterPickupSpawner_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
