// BlueprintGeneratedClass GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C
// Size: 0x4f0 (Inherited: 0x490)
struct UGA_XiaoPiSkill1Human_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* OwnerHuman; // 0x498(0x08)
	struct ABP_XiaoPi_C* xiaopi; // 0x4a0(0x08)
	struct FActiveGameplayEffectHandle GEHandle_XiaoPiTrans; // 0x4a8(0x08)
	struct UAnimMontage* Montage_PiToMan; // 0x4b0(0x08)
	struct UAnimMontage* Montage_ManToPi; // 0x4b8(0x08)
	struct UAbilityTask_WaitDelay* WaitTask_ProgressUI; // 0x4c0(0x08)
	struct UAbilityTask_WaitDelay* WaitTask_TransToHuman; // 0x4c8(0x08)
	bool bSelectHumanSuccess; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct ABP_PlayerHumanBase_C* TransferHuman; // 0x4d8(0x08)
	struct TArray<struct FGameplayTag> Tags_NotTransform; // 0x4e0(0x10)

	void CanTransform(bool bCanTrans); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.CanTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.InitAbility // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_F8E5971341AC667003E598A6F9694FDA(); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.OnFinish_F8E5971341AC667003E598A6F9694FDA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_75350E3944A4D59847BEE5B58D0136BE(); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.OnFinish_75350E3944A4D59847BEE5B58D0136BE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_58AD507947EE4B1404059B96F4553BCE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.EventReceived_58AD507947EE4B1404059B96F4553BCE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_58AD507947EE4B1404059B96F4553BCE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.OnCancelled_58AD507947EE4B1404059B96F4553BCE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_58AD507947EE4B1404059B96F4553BCE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.OnInterrupted_58AD507947EE4B1404059B96F4553BCE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_58AD507947EE4B1404059B96F4553BCE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.OnBlendOut_58AD507947EE4B1404059B96F4553BCE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_58AD507947EE4B1404059B96F4553BCE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.OnCompleted_58AD507947EE4B1404059B96F4553BCE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_5B1D2B954D20D5DE3D1094A19AD91524(); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.OnSync_5B1D2B954D20D5DE3D1094A19AD91524 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_6F7045974888B5B76F31DB9AD9173F58(float TimeWaited); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.OnPress_6F7045974888B5B76F31DB9AD9173F58 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_4050E5C64776456ADA098AABF9D81BA8(float TimeHeld); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.OnRelease_4050E5C64776456ADA098AABF9D81BA8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_EAE86D354CB998F12ADC8D86EA249178(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.EventReceived_EAE86D354CB998F12ADC8D86EA249178 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_EAE86D354CB998F12ADC8D86EA249178(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.OnCancelled_EAE86D354CB998F12ADC8D86EA249178 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_EAE86D354CB998F12ADC8D86EA249178(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.OnInterrupted_EAE86D354CB998F12ADC8D86EA249178 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_EAE86D354CB998F12ADC8D86EA249178(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.OnBlendOut_EAE86D354CB998F12ADC8D86EA249178 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_EAE86D354CB998F12ADC8D86EA249178(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.OnCompleted_EAE86D354CB998F12ADC8D86EA249178 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void TransToHuman_End(); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.TransToHuman_End // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TransToGhost(); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.TransToGhost // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoPiSkill1Human(int32_t EntryPoint); // Function GA_XiaoPiSkill1Human.GA_XiaoPiSkill1Human_C.ExecuteUbergraph_GA_XiaoPiSkill1Human // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

