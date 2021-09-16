// BlueprintGeneratedClass GA_BeenCure.GA_BeenCure_C
// Size: 0x4d0 (Inherited: 0x490)
struct UGA_BeenCure_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* ReleaseCureHuman; // 0x498(0x08)
	struct UAbilityTask_WaitGameplayEvent* InteractCancelTask; // 0x4a0(0x08)
	struct UAbilityTask_WaitGameplayEvent* BeAttackedTask; // 0x4a8(0x08)
	struct UAbilityTask_WaitInputRelease* InputReleaseTask; // 0x4b0(0x08)
	struct UAbilityTask_WaitGameplayEvent* CureCompleteTask; // 0x4b8(0x08)
	struct UAbilityTask_WaitGameplayTagAdded* WaitCollapseTask; // 0x4c0(0x08)
	struct UAbilityTask_WaitGameplayTagAdded* InterruptTask; // 0x4c8(0x08)

	void EndTasks(); // Function GA_BeenCure.GA_BeenCure_C.EndTasks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_39A119AA47A51C82E6AEE3B6528A2A66(float TimeHeld); // Function GA_BeenCure.GA_BeenCure_C.OnRelease_39A119AA47A51C82E6AEE3B6528A2A66 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_700609BD4B0562E040B3C986F6809A1B(struct FGameplayEventData Payload); // Function GA_BeenCure.GA_BeenCure_C.EventReceived_700609BD4B0562E040B3C986F6809A1B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_937EB47F4CEEEFEC35EE0EAC0382E281(); // Function GA_BeenCure.GA_BeenCure_C.OnFinish_937EB47F4CEEEFEC35EE0EAC0382E281 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_4E8FA5704378C6DE8693B1AE89EECC3E(); // Function GA_BeenCure.GA_BeenCure_C.Added_4E8FA5704378C6DE8693B1AE89EECC3E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_BeenCure.GA_BeenCure_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_BeenCure.GA_BeenCure_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_BeenCure(int32_t EntryPoint); // Function GA_BeenCure.GA_BeenCure_C.ExecuteUbergraph_GA_BeenCure // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

