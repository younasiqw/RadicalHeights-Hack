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

// BlueprintGeneratedClass LootGroup_LootBoxSpawn.LootGroup_LootBoxSpawn_C
// 0x0008 (0x03F0 - 0x03E8)
class ALootGroup_LootBoxSpawn_C : public AShooterLootGroup
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LootGroup_LootBoxSpawn.LootGroup_LootBoxSpawn_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
