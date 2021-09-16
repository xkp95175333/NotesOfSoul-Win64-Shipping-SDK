// BlueprintGeneratedClass GA_BeElectricShock.GA_BeElectricShock_C
// Size: 0x4bc (Inherited: 0x490)
struct UGA_BeElectricShock_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UAbilityTask_WaitDelay* DelayTask; // 0x498(0x08)
	struct FActiveGameplayEffectHandle GEFreezeTag; // 0x4a0(0x08)
	int32_t TriggerCount; // 0x4a8(0x04)
	float DurationTime; // 0x4ac(0x04)
	float IntervalTime; // 0x4b0(0x04)
	struct FActiveGameplayEffectHandle InffectHanld; // 0x4b4(0x08)

	void OnFinish_7410AEFC4E2F2391FB5EDF96F5A24A27(); // Function GA_BeElectricShock.GA_BeElectricShock_C.OnFinish_7410AEFC4E2F2391FB5EDF96F5A24A27 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_66867E3B462D3E46DF588A8571E5AE1E(); // Function GA_BeElectricShock.GA_BeElectricShock_C.OnFinish_66867E3B462D3E46DF588A8571E5AE1E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_473754084B67D1ABD15C8CA5448B388C(struct FGameplayEventData Payload); // Function GA_BeElectricShock.GA_BeElectricShock_C.EventReceived_473754084B67D1ABD15C8CA5448B388C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_BeElectricShock.GA_BeElectricShock_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_BeElectricShock.GA_BeElectricShock_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_BeElectricShock(int32_t EntryPoint); // Function GA_BeElectricShock.GA_BeElectricShock_C.ExecuteUbergraph_GA_BeElectricShock // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

