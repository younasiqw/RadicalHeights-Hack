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

// BlueprintGeneratedClass DmgType_TaserMachete_Melee.DmgType_TaserMachete_Melee_C
// 0x0000 (0x01E0 - 0x01E0)
class UDmgType_TaserMachete_Melee_C : public UShooterDamageType_Melee
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_TaserMachete_Melee.DmgType_TaserMachete_Melee_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
