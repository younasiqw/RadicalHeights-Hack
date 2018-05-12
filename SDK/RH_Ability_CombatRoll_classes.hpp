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

// DynamicClass Ability_CombatRoll.Ability_CombatRoll_C
// 0x0000 (0x0248 - 0x0248)
class UAbility_CombatRoll_C : public UShooterAbility_CombatRoll
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Ability_CombatRoll.Ability_CombatRoll_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
