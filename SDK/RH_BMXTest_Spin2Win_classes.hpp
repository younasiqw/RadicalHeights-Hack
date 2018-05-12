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

// DynamicClass BMXTest_Spin2Win.BMXTest_Spin2Win_C
// 0x0000 (0x06A8 - 0x06A8)
class ABMXTest_Spin2Win_C : public ABMXTest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass BMXTest_Spin2Win.BMXTest_Spin2Win_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
