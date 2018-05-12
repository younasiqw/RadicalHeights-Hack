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

// DynamicClass HUD_EQUIPSLOT_ENTRY_EMPTY.HUD_EQUIPSLOT_ENTRY_EMPTY_C
// 0x0000 (0x0290 - 0x0290)
class UHUD_EQUIPSLOT_ENTRY_EMPTY_C : public UShooterInventoryListEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass HUD_EQUIPSLOT_ENTRY_EMPTY.HUD_EQUIPSLOT_ENTRY_EMPTY_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
