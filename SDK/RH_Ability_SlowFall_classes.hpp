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

// DynamicClass Ability_SlowFall.Ability_SlowFall_C
// 0x0000 (0x01F8 - 0x01F8)
class UAbility_SlowFall_C : public UShooterAbility_SlowFall
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Ability_SlowFall.Ability_SlowFall_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
