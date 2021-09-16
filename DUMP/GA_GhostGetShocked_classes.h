// BlueprintGeneratedClass GA_GhostGetShocked.GA_GhostGetShocked_C
// Size: 0x4f0 (Inherited: 0x490)
struct UGA_GhostGetShocked_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FActiveGameplayEffectHandle GEHandle_DisableControl; // 0x498(0x08)
	struct AActor* Instigator; // 0x4a0(0x08)
	float delayTime; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct FGameplayTagContainer TargetTags; // 0x4b0(0x20)
	struct UAbilityTask_WaitDelay* Task_Duration; // 0x4d0(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitPurifyControl_Initiative; // 0x4d8(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitPurifyControl_Passive; // 0x4e0(0x08)
	struct ANOS_PlayerBase* OwnerPlayer; // 0x4e8(0x08)

	void OnFinish_FAC12B774BBB70476A1157983F480EA1(); // Function GA_GhostGetShocked.GA_GhostGetShocked_C.OnFinish_FAC12B774BBB70476A1157983F480EA1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_B5F33398458C8299C1C9F1AA6B55705E(); // Function GA_GhostGetShocked.GA_GhostGetShocked_C.OnCancelled_B5F33398458C8299C1C9F1AA6B55705E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_B5F33398458C8299C1C9F1AA6B55705E(); // Function GA_GhostGetShocked.GA_GhostGetShocked_C.OnInterrupted_B5F33398458C8299C1C9F1AA6B55705E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_B5F33398458C8299C1C9F1AA6B55705E(); // Function GA_GhostGetShocked.GA_GhostGetShocked_C.OnBlendOut_B5F33398458C8299C1C9F1AA6B55705E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_B5F33398458C8299C1C9F1AA6B55705E(); // Function GA_GhostGetShocked.GA_GhostGetShocked_C.OnCompleted_B5F33398458C8299C1C9F1AA6B55705E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_476C24284BCE72B8B470D28FEECC682C(struct FGameplayEventData Payload); // Function GA_GhostGetShocked.GA_GhostGetShocked_C.EventReceived_476C24284BCE72B8B470D28FEECC682C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_473754084B67D1ABD15C8CA5448B388C(struct FGameplayEventData Payload); // Function GA_GhostGetShocked.GA_GhostGetShocked_C.EventReceived_473754084B67D1ABD15C8CA5448B388C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_GhostGetShocked.GA_GhostGetShocked_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GhostGetShocked.GA_GhostGetShocked_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_GhostGetShocked(int32_t EntryPoint); // Function GA_GhostGetShocked.GA_GhostGetShocked_C.ExecuteUbergraph_GA_GhostGetShocked // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

