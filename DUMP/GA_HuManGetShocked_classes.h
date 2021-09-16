// BlueprintGeneratedClass GA_HuManGetShocked.GA_HuManGetShocked_C
// Size: 0x4f8 (Inherited: 0x490)
struct UGA_HuManGetShocked_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FActiveGameplayEffectHandle GEHandle_DisableControl; // 0x498(0x08)
	struct AActor* Instigator; // 0x4a0(0x08)
	float delayTime; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct FGameplayTagContainer TargetTags; // 0x4b0(0x20)
	struct UAbilityTask_WaitDelay* Task_Duration; // 0x4d0(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitPurifyControl_Initiative; // 0x4d8(0x08)
	struct UAbilityTask_WaitGameplayEvent* Task_WaitPurifyControl_Passive; // 0x4e0(0x08)
	struct UAnimMontage* Montage to Play; // 0x4e8(0x08)
	struct ANOS_PlayerBase* Player; // 0x4f0(0x08)

	void InitMontage(struct UObject* Object); // Function GA_HuManGetShocked.GA_HuManGetShocked_C.InitMontage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_5A8F36D546DFB479A98130B26946C6CB(); // Function GA_HuManGetShocked.GA_HuManGetShocked_C.OnCancelled_5A8F36D546DFB479A98130B26946C6CB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_5A8F36D546DFB479A98130B26946C6CB(); // Function GA_HuManGetShocked.GA_HuManGetShocked_C.OnInterrupted_5A8F36D546DFB479A98130B26946C6CB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_5A8F36D546DFB479A98130B26946C6CB(); // Function GA_HuManGetShocked.GA_HuManGetShocked_C.OnBlendOut_5A8F36D546DFB479A98130B26946C6CB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_5A8F36D546DFB479A98130B26946C6CB(); // Function GA_HuManGetShocked.GA_HuManGetShocked_C.OnCompleted_5A8F36D546DFB479A98130B26946C6CB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_C00657FD4BC0A918FEDA849B073F9721(struct FGameplayEventData Payload); // Function GA_HuManGetShocked.GA_HuManGetShocked_C.EventReceived_C00657FD4BC0A918FEDA849B073F9721 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_716F1BC84911A90FAE15F3B244B436B0(struct FGameplayEventData Payload); // Function GA_HuManGetShocked.GA_HuManGetShocked_C.EventReceived_716F1BC84911A90FAE15F3B244B436B0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_HuManGetShocked.GA_HuManGetShocked_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_HuManGetShocked.GA_HuManGetShocked_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_HuManGetShocked(int32_t EntryPoint); // Function GA_HuManGetShocked.GA_HuManGetShocked_C.ExecuteUbergraph_GA_HuManGetShocked // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

