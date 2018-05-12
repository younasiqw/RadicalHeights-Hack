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

// DynamicClass Ability_ThrowGrenade.Ability_ThrowGrenade_C
// 0x0000 (0x0288 - 0x0288)
class UAbility_ThrowGrenade_C : public UShooterAbility_Throw
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Ability_ThrowGrenade.Ability_ThrowGrenade_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
