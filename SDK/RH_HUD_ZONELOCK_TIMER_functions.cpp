// Radical Heights (1.0.0) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HUD_ZONELOCK_TIMER.HUD_ZONELOCK_TIMER_C.ZoneTimertoSeconds
// (Native, Public, BlueprintCallable)

void UHUD_ZONELOCK_TIMER_C::ZoneTimertoSeconds()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ZONELOCK_TIMER.HUD_ZONELOCK_TIMER_C.ZoneTimertoSeconds");

	UHUD_ZONELOCK_TIMER_C_ZoneTimertoSeconds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ZONELOCK_TIMER.HUD_ZONELOCK_TIMER_C.OnZoneTimerWarningStop
// (Final, Native, Event, Public)

void UHUD_ZONELOCK_TIMER_C::OnZoneTimerWarningStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ZONELOCK_TIMER.HUD_ZONELOCK_TIMER_C.OnZoneTimerWarningStop");

	UHUD_ZONELOCK_TIMER_C_OnZoneTimerWarningStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HUD_ZONELOCK_TIMER.HUD_ZONELOCK_TIMER_C.OnZoneTimerWarningStart
// (Final, Native, Event, Public)

void UHUD_ZONELOCK_TIMER_C::OnZoneTimerWarningStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function HUD_ZONELOCK_TIMER.HUD_ZONELOCK_TIMER_C.OnZoneTimerWarningStart");

	UHUD_ZONELOCK_TIMER_C_OnZoneTimerWarningStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
