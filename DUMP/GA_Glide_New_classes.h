// BlueprintGeneratedClass GA_Glide_New.GA_Glide_New_C
// Size: 0x4e0 (Inherited: 0x490)
struct UGA_Glide_New_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* Human; // 0x498(0x08)
	float Glide_Speed; // 0x4a0(0x04)
	float Glide_Time; // 0x4a4(0x04)
	float Glide_PowerCost; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct UAnimMontage* Montage_Glide_Man; // 0x4b0(0x08)
	struct UAnimMontage* Montage_Glide_Woman; // 0x4b8(0x08)
	struct FActiveGameplayEffectHandle GEHandle_Glide; // 0x4c0(0x08)
	struct TArray<struct UAbilityTask*> AllTask_EndGlide; // 0x4c8(0x10)
	struct UAbilityTask_WaitDelay* Task_MaxDelay; // 0x4d8(0x08)

	void ClearTasks_EndGlide(); // Function GA_Glide_New.GA_Glide_New_C.ClearTasks_EndGlide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UINote(struct ABP_PlayerHumanBase_C* HumanBase, float TextID); // Function GA_Glide_New.GA_Glide_New_C.UINote // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_Glide_New.GA_Glide_New_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GA_Glide_New.GA_Glide_New_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
	void EventReceived_D014B8CC492517824D8A5580F5B47AFC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Glide_New.GA_Glide_New_C.EventReceived_D014B8CC492517824D8A5580F5B47AFC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_D014B8CC492517824D8A5580F5B47AFC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Glide_New.GA_Glide_New_C.OnCancelled_D014B8CC492517824D8A5580F5B47AFC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_D014B8CC492517824D8A5580F5B47AFC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Glide_New.GA_Glide_New_C.OnInterrupted_D014B8CC492517824D8A5580F5B47AFC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_D014B8CC492517824D8A5580F5B47AFC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Glide_New.GA_Glide_New_C.OnBlendOut_D014B8CC492517824D8A5580F5B47AFC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_D014B8CC492517824D8A5580F5B47AFC(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Glide_New.GA_Glide_New_C.OnCompleted_D014B8CC492517824D8A5580F5B47AFC // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnVelocityLess_AF218E4E4514561258A9FABCFB5CE331(); // Function GA_Glide_New.GA_Glide_New_C.OnVelocityLess_AF218E4E4514561258A9FABCFB5CE331 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_C2924F744DD5D6104849029AE6BE63AA(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Glide_New.GA_Glide_New_C.EventReceived_C2924F744DD5D6104849029AE6BE63AA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_C2924F744DD5D6104849029AE6BE63AA(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Glide_New.GA_Glide_New_C.OnCancelled_C2924F744DD5D6104849029AE6BE63AA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_C2924F744DD5D6104849029AE6BE63AA(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Glide_New.GA_Glide_New_C.OnInterrupted_C2924F744DD5D6104849029AE6BE63AA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_C2924F744DD5D6104849029AE6BE63AA(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Glide_New.GA_Glide_New_C.OnBlendOut_C2924F744DD5D6104849029AE6BE63AA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_C2924F744DD5D6104849029AE6BE63AA(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_Glide_New.GA_Glide_New_C.OnCompleted_C2924F744DD5D6104849029AE6BE63AA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_624FA4B54C9E1C0F8B1DF390D93017AA(struct FGameplayEventData Payload); // Function GA_Glide_New.GA_Glide_New_C.EventReceived_624FA4B54C9E1C0F8B1DF390D93017AA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_33BE5AC74F82D24007262BA10419A6E9(struct FGameplayEventData Payload); // Function GA_Glide_New.GA_Glide_New_C.EventReceived_33BE5AC74F82D24007262BA10419A6E9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Glide_End(); // Function GA_Glide_New.GA_Glide_New_C.Glide_End // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Glide_Begin(); // Function GA_Glide_New.GA_Glide_New_C.Glide_Begin // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckEndAbility(); // Function GA_Glide_New.GA_Glide_New_C.CheckEndAbility // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Glide_New.GA_Glide_New_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_Glide_New.GA_Glide_New_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Glide_New(int32_t EntryPoint); // Function GA_Glide_New.GA_Glide_New_C.ExecuteUbergraph_GA_Glide_New // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

