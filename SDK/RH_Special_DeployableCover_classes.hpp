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

// DynamicClass Special_DeployableCover.Special_DeployableCover_C
// 0x0128 (0x05A0 - 0x0478)
class USpecial_DeployableCover_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_7F230E79443E40D7818310979C72B811;      // 0x0478(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_3B849F054806ADD30BE868B184BC51D2;      // 0x04C0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_31F5BF81407585E2AB505099EAF0D8D4;// 0x0520(0x0070)
	float                                              CallFunc_Montage_Play_ReturnValue;                        // 0x0590(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x0594(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0595(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x0598(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x059C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x059D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Special_DeployableCover.Special_DeployableCover_C");
		return ptr;
	}


	void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
