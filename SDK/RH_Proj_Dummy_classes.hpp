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

// DynamicClass Proj_Dummy.Proj_Dummy_C
// 0x0008 (0x0648 - 0x0640)
class AProj_Dummy_C : public AShooterProjectile_GroundDetonate
{
public:
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0640(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Proj_Dummy.Proj_Dummy_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
