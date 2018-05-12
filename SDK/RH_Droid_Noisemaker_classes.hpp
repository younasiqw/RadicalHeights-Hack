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

// DynamicClass Droid_Noisemaker.Droid_Noisemaker_C
// 0x0008 (0x0570 - 0x0568)
class ADroid_Noisemaker_C : public AShooterDroid_Noisemaker
{
public:
	class UStaticMeshComponent*                        Cube;                                                     // 0x0568(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Droid_Noisemaker.Droid_Noisemaker_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
