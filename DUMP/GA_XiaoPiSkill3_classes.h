// BlueprintGeneratedClass GA_XiaoPiSkill3.GA_XiaoPiSkill3_C
// Size: 0x5d8 (Inherited: 0x490)
struct UGA_XiaoPiSkill3_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UAnimMontage* Montage_Jump; // 0x498(0x08)
	struct ABP_XiaoPi_C* xiaopi; // 0x4a0(0x08)
	bool bHasAttackedHuman; // 0x4a8(0x01)
	char pad_4A9[0x7]; // 0x4a9(0x07)
	struct UAbilityTask_ApplyRootMotionJumpForce* JumpRootMotionTask; // 0x4b0(0x08)
	struct FName JumpSectionName; // 0x4b8(0x08)
	bool bHasSkill2; // 0x4c0(0x01)
	char pad_4C1[0x7]; // 0x4c1(0x07)
	struct UNOS_WaitBoxTarget* WaitBoxTask; // 0x4c8(0x08)
	struct UAnimMontage* Montage_End; // 0x4d0(0x08)
	bool bCanJumpAgain; // 0x4d8(0x01)
	bool bJumpAgain; // 0x4d9(0x01)
	char pad_4DA[0x6]; // 0x4da(0x06)
	struct UAnimMontage* Montage_HumanBeHit_Man; // 0x4e0(0x08)
	float CDTime; // 0x4e8(0x04)
	float SwoopSpeed; // 0x4ec(0x04)
	float SwoopDistance; // 0x4f0(0x04)
	float SwoopHeight; // 0x4f4(0x04)
	float HumanDamage; // 0x4f8(0x04)
	float SceneDamage; // 0x4fc(0x04)
	float SceneDamageInterval; // 0x500(0x04)
	struct FActiveGameplayEffectHandle GEHandle_DisableControl; // 0x504(0x08)
	float AttackTimerPeriod; // 0x50c(0x04)
	bool PauseCheckHuman; // 0x510(0x01)
	bool PauseCheckScene; // 0x511(0x01)
	char pad_512[0x6]; // 0x512(0x06)
	struct FGameplayTagContainer Tags_Begin; // 0x518(0x20)
	struct FGameplayTagContainer Tags_Fly; // 0x538(0x20)
	struct FGameplayTagContainer Tags_Land; // 0x558(0x20)
	struct FGameplayTagContainer Tags_Attack; // 0x578(0x20)
	struct UNOS_WaitBoxTarget_Channel* WaitBox_CheckAttack; // 0x598(0x08)
	bool bHasLanded; // 0x5a0(0x01)
	bool bHasJumped; // 0x5a1(0x01)
	char pad_5A2[0x6]; // 0x5a2(0x06)
	struct UAnimMontage* Montage_HumanBeHit_Woman; // 0x5a8(0x08)
	struct ABP_PlayerHumanBase_C* HumanHitted; // 0x5b0(0x08)
	struct UAbilityTask_WaitDelay* Task_MaxDelay; // 0x5b8(0x08)
	struct TArray<struct FActiveGameplayEffectHandle> AllGEHandles; // 0x5c0(0x10)
	struct UNOS_PlayMontageAndWaitForEvent* Task_PlayBeginAnim; // 0x5d0(0x08)

	void GetAttackRange(struct FVector Range); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.GetAttackRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CanAttackHuman(struct ABP_PlayerHumanBase_C* Human, bool bCanAttack); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.CanAttackHuman // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetJumpMontageSection(struct FName Section); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.GetJumpMontageSection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ApplyGE_DisableControl(struct FGameplayTagContainer GamplayTags); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.ApplyGE_DisableControl // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetAttackIgnoreActors(struct TArray<struct AActor*> Actors); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.GetAttackIgnoreActors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ClearState(); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.ClearState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_52FFE2E047E8738A79073098A0688379(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.EventReceived_52FFE2E047E8738A79073098A0688379 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_52FFE2E047E8738A79073098A0688379(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.OnCancelled_52FFE2E047E8738A79073098A0688379 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_52FFE2E047E8738A79073098A0688379(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.OnInterrupted_52FFE2E047E8738A79073098A0688379 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_52FFE2E047E8738A79073098A0688379(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.OnBlendOut_52FFE2E047E8738A79073098A0688379 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_52FFE2E047E8738A79073098A0688379(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.OnCompleted_52FFE2E047E8738A79073098A0688379 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_C402720F4351C6A3C41F149F87043B47(); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.OnSync_C402720F4351C6A3C41F149F87043B47 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLanded_C722036E44AA8A3F687D62B7C32AC951(); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.OnLanded_C722036E44AA8A3F687D62B7C32AC951 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_C722036E44AA8A3F687D62B7C32AC951(); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.OnFinish_C722036E44AA8A3F687D62B7C32AC951 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_A8A0A2D54CE614FF6DAA25965BA1A522(float TimeWaited); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.OnPress_A8A0A2D54CE614FF6DAA25965BA1A522 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxTraceNoTarget_7B5EDA5541C0C7289A7723AB63F5A357(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.BoxTraceNoTarget_7B5EDA5541C0C7289A7723AB63F5A357 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BoxTraceTarget_7B5EDA5541C0C7289A7723AB63F5A357(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.BoxTraceTarget_7B5EDA5541C0C7289A7723AB63F5A357 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_4EB3F5F14DD22E7E6DB6A19BE72BAECA(struct FGameplayEventData Payload); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.EventReceived_4EB3F5F14DD22E7E6DB6A19BE72BAECA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_CA5DD2AD4512DC1B433B91BEE44DFF79(); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.OnSync_CA5DD2AD4512DC1B433B91BEE44DFF79 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_6BDEA85146B13AE63850CB9BB92FDB69(struct FGameplayEventData Payload); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.EventReceived_6BDEA85146B13AE63850CB9BB92FDB69 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_23D86FAF4DA7C6C5370B90A30481681F(); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.OnSync_23D86FAF4DA7C6C5370B90A30481681F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_DCF5DCA9443290BC8887638E6AD80A55(); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.Added_DCF5DCA9443290BC8887638E6AD80A55 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void JumpAgain(); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.JumpAgain // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BeginJump(); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.BeginJump // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLanded(); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.OnLanded // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckAttack(); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.CheckAttack // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnHitHuman(); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.OnHitHuman // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoPiSkill3(int32_t EntryPoint); // Function GA_XiaoPiSkill3.GA_XiaoPiSkill3_C.ExecuteUbergraph_GA_XiaoPiSkill3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

