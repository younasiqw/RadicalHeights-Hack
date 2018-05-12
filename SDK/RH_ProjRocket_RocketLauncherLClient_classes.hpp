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

// DynamicClass ProjRocket_RocketLauncherLClient.ProjRocket_RocketLauncherLClient_C
// 0x0038 (0x0480 - 0x0448)
class AProjRocket_RocketLauncherLClient_C : public AShooterClientProjectile
{
public:
	class UStaticMeshComponent*                        Rocket;                                                   // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkComponent*                                Ak1;                                                      // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_DamagedActor;                          // 0x0458(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_Damage;                                // 0x0460(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0464(0x0004) MISSED OFFSET
	class UDamageType*                                 K2Node_CustomEvent_DamageType;                            // 0x0468(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 K2Node_CustomEvent_InstigatedBy;                          // 0x0470(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_DamageCauser;                          // 0x0478(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass ProjRocket_RocketLauncherLClient.ProjRocket_RocketLauncherLClient_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnTakeAnyDamage_Event(class AActor* bpp__DamagedActor__pf, float bpp__Damage__pf, class UDamageType* bpp__DamageType__pf__const, class AController* bpp__InstigatedBy__pf, class AActor* bpp__DamageCauser__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
