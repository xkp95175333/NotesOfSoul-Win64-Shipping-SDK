// BlueprintGeneratedClass GA_ShaoziMainSkill.GA_ShaoziMainSkill_C
// Size: 0x4c0 (Inherited: 0x490)
struct UGA_ShaoziMainSkill_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FTimerHandle TimerHandl; // 0x498(0x08)
	struct TArray<struct ANOS_PlayerHuman*> targetActor; // 0x4a0(0x10)
	struct ABP_ShaoZiPaoWuXIan_C* PaoWuXIan; // 0x4b0(0x08)
	struct ABP_MainSkillDecal_C* DecalActor; // 0x4b8(0x08)

	void SpawnDecalACtor(); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.SpawnDecalACtor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FVector GetLaunchVector(); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.GetLaunchVector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	struct FVector GetFireStarLocation(); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.GetFireStarLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetSkillIsInUse(bool IsShow, int32_t Index); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.SetSkillIsInUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckTarget(); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.CheckTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_7135F4544DAAF2C450BDE6B78649401A(); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.OnFinish_7135F4544DAAF2C450BDE6B78649401A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_ABE91B7F46A83468366B0EA21F82DF55(); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.OnSync_ABE91B7F46A83468366B0EA21F82DF55 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_FD8AD5FC48B1EBB80CABB3B50961C715(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.EventReceived_FD8AD5FC48B1EBB80CABB3B50961C715 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_FD8AD5FC48B1EBB80CABB3B50961C715(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.OnCancelled_FD8AD5FC48B1EBB80CABB3B50961C715 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_FD8AD5FC48B1EBB80CABB3B50961C715(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.OnInterrupted_FD8AD5FC48B1EBB80CABB3B50961C715 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_FD8AD5FC48B1EBB80CABB3B50961C715(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.OnBlendOut_FD8AD5FC48B1EBB80CABB3B50961C715 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_FD8AD5FC48B1EBB80CABB3B50961C715(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.OnCompleted_FD8AD5FC48B1EBB80CABB3B50961C715 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_7A3067D2411CC4050A80F295BC427D8F(float TimeWaited); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.OnPress_7A3067D2411CC4050A80F295BC427D8F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnHit(struct ANOS_PlayerHuman* NewParam); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.OnHit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_ShaoziMainSkill(int32_t EntryPoint); // Function GA_ShaoziMainSkill.GA_ShaoziMainSkill_C.ExecuteUbergraph_GA_ShaoziMainSkill // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

