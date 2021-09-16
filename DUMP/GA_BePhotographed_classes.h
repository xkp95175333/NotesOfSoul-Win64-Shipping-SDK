// BlueprintGeneratedClass GA_BePhotographed.GA_BePhotographed_C
// Size: 0x4a8 (Inherited: 0x490)
struct UGA_BePhotographed_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FActiveGameplayEffectHandle FreezeGE; // 0x498(0x08)
	struct UAbilityTask_WaitDelay* Task_DelayChangeSpeed; // 0x4a0(0x08)

	void OnFinish_918496AE44CE8A1AA24F32B97A1046BF(); // Function GA_BePhotographed.GA_BePhotographed_C.OnFinish_918496AE44CE8A1AA24F32B97A1046BF // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_473754084B67D1ABD15C8CA5448B388C(struct FGameplayEventData Payload); // Function GA_BePhotographed.GA_BePhotographed_C.EventReceived_473754084B67D1ABD15C8CA5448B388C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_BePhotographed.GA_BePhotographed_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_BePhotographed.GA_BePhotographed_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_BePhotographed(int32_t EntryPoint); // Function GA_BePhotographed.GA_BePhotographed_C.ExecuteUbergraph_GA_BePhotographed // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

