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

// DynamicClass ShooterAbility_JetGlider_Instance.ShooterAbility_JetGlider_Instance_C
// 0x0000 (0x0280 - 0x0280)
class UShooterAbility_JetGlider_Instance_C : public UShooterAbility_JetGlider
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass ShooterAbility_JetGlider_Instance.ShooterAbility_JetGlider_Instance_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
