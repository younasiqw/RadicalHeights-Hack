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

// DynamicClass TASC_Enforcer.TASC_Enforcer_C
// 0x0070 (0x20B0 - 0x2040)
class ATASC_Enforcer_C : public APlayerPawn_C
{
public:
	class UAkComponent*                                Ak;                                                       // 0x2040(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              health_save;                                              // 0x2048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OldAlphaRight;                                            // 0x204C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OldAlphaLeft;                                             // 0x2050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NewVar_1;                                                 // 0x2054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EAimState>                             Temp_byte_Variable;                                       // 0x2055(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable;                                       // 0x2056(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable2;                                      // 0x2057(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Event_bThirdPerson;                                // 0x2058(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsUsingScope_ReturnValue;                        // 0x2059(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Variable3;                                      // 0x205A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x205B(0x0005) MISSED OFFSET
	class AShooterWeapon*                              CallFunc_GetWeapon_ReturnValue;                           // 0x2060(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x2068(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EAttachmentScope>                      CallFunc_GetScopeType_ReturnValue;                        // 0x2069(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x206A(0x0006) MISSED OFFSET
	struct FString                                     CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;       // 0x2070(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       CallFunc_Conv_StringToName_ReturnValue;                   // 0x2080(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_GetVectorParameterValue_ReturnValue;             // 0x2088(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x2098(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<EAimState>                             CallFunc_GetAimState_ReturnValue;                         // 0x2099(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x209A(0x0006) MISSED OFFSET
	struct FName                                       CallFunc_MakeLiteralName_ReturnValue;                     // 0x20A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_Default;                                    // 0x20A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x20A9(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaSeconds;                                // 0x20AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass TASC_Enforcer.TASC_Enforcer_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float bpp__DeltaSeconds__pf);
	void OnSwitchMeshPerspectives(bool bpp__bThirdPerson__pf);
	void IK_FootTrace(const struct FName& bpp__SocketName__pf, float bpp__TraceDistance__pf, bool* bpp__HitDetection__pf, float* bpp__HipOffset__pf, struct FVector* bpp__EffectorLocation__pf);
	void GroundNormalTrace(const struct FName& bpp__SocketName__pf, float bpp__TraceDistance__pf, bool* bpp__HitDetection__pf, struct FVector* bpp__EffectorRotation__pf);
	void GetUltimateCount();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
