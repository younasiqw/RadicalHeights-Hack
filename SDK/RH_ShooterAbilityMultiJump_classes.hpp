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

// DynamicClass ShooterAbilityMultiJump.ShooterAbilityMultiJump_C
// 0x0000 (0x0200 - 0x0200)
class UShooterAbilityMultiJump_C : public UShooterAbility_MultiJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass ShooterAbilityMultiJump.ShooterAbilityMultiJump_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
