// BlueprintGeneratedClass GA_Glide.GA_Glide_C
// Size: 0x4e1 (Inherited: 0x490)
struct UGA_Glide_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* Human; // 0x498(0x08)
	struct TArray<struct UAbilityTask*> GlideTasks; // 0x4a0(0x10)
	struct FActiveGameplayEffectHandle GlideSpeedGE; // 0x4b0(0x08)
	struct FActiveGameplayEffectHandle CrouchFreezeHandle; // 0x4b8(0x08)
	struct FActiveGameplayEffectHandle GlideFreezeHandle; // 0x4c0(0x08)
	struct UAbilityTask_WaitDelay* WaitDelayTask; // 0x4c8(0x08)
	int32_t startTime; // 0x4d0(0x04)
	char pad_4D4[0x4]; // 0x4d4(0x04)
	struct AActor* GlideEffect; // 0x4d8(0x08)
	bool IsUpwardTraced; // 0x4e0(0x01)

	bool CheckCostForUI(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo ActorInfo); // Function GA_Glide.GA_Glide_C.CheckCostForUI // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
	void GetGlideProperties(float ActivableSpeed, float MinRemainTime, float MaxRemainTime, float PowerExpend, float Cooldown, float AttackForce); // Function GA_Glide.GA_Glide_C.GetGlideProperties // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetGlideSlopes(float CollisionAngle, float SlopeTolaranceMin, float SlopeTolaranceMax, float SlopeInertialSecond); // Function GA_Glide.GA_Glide_C.GetGlideSlopes // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetOwnerMovement(struct UNOS_MovementComponent* Movement); // Function GA_Glide.GA_Glide_C.GetOwnerMovement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetGlideSpeed(float NewSpeed); // Function GA_Glide.GA_Glide_C.GetGlideSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetNowSecond(float Second); // Function GA_Glide.GA_Glide_C.GetNowSecond // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnFinish_0597B8F14B783B5399324AA20C2CC974(); // Function GA_Glide.GA_Glide_C.OnFinish_0597B8F14B783B5399324AA20C2CC974 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_0597B8F14B783B5399324AA276869DF0(); // Function GA_Glide.GA_Glide_C.OnFinish_0597B8F14B783B5399324AA276869DF0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_E4A6AE9A44C9689D742535BC06B08D33(); // Function GA_Glide.GA_Glide_C.OnFinish_E4A6AE9A44C9689D742535BC06B08D33 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_50C11B7742FA1839ABCF9298BE9C4742(); // Function GA_Glide.GA_Glide_C.OnSync_50C11B7742FA1839ABCF9298BE9C4742 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceNoTarget_227874634DF88DD7210272943659D75B(struct FGameplayAbilityTargetDataHandle Data); // Function GA_Glide.GA_Glide_C.OnTraceNoTarget_227874634DF88DD7210272943659D75B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnTraceTarget_227874634DF88DD7210272943659D75B(struct FGameplayAbilityTargetDataHandle Data); // Function GA_Glide.GA_Glide_C.OnTraceTarget_227874634DF88DD7210272943659D75B // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_A8A0BA5F48BE6452FDBD8B803D25E724(); // Function GA_Glide.GA_Glide_C.OnSync_A8A0BA5F48BE6452FDBD8B803D25E724 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_DBDBA6284EC4E69ADC21C28AB07E924B(); // Function GA_Glide.GA_Glide_C.OnFinish_DBDBA6284EC4E69ADC21C28AB07E924B // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_8CCD784244CB3603F7315C95A850D70D(); // Function GA_Glide.GA_Glide_C.OnSync_8CCD784244CB3603F7315C95A850D70D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_E91352F3437D7188E81D3E9FD5AFCC50(); // Function GA_Glide.GA_Glide_C.OnCancelled_E91352F3437D7188E81D3E9FD5AFCC50 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_E91352F3437D7188E81D3E9FD5AFCC50(); // Function GA_Glide.GA_Glide_C.OnInterrupted_E91352F3437D7188E81D3E9FD5AFCC50 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_E91352F3437D7188E81D3E9FD5AFCC50(); // Function GA_Glide.GA_Glide_C.OnBlendOut_E91352F3437D7188E81D3E9FD5AFCC50 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_E91352F3437D7188E81D3E9FD5AFCC50(); // Function GA_Glide.GA_Glide_C.OnCompleted_E91352F3437D7188E81D3E9FD5AFCC50 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DidNotSpawn_C872B47743DAAAE99F90F381B133EE6A(struct AActor* SpawnedActor); // Function GA_Glide.GA_Glide_C.DidNotSpawn_C872B47743DAAAE99F90F381B133EE6A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Success_C872B47743DAAAE99F90F381B133EE6A(struct AActor* SpawnedActor); // Function GA_Glide.GA_Glide_C.Success_C872B47743DAAAE99F90F381B133EE6A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_68BC8F274646A9F41E1CF88CD3F3CEFE(); // Function GA_Glide.GA_Glide_C.OnCancelled_68BC8F274646A9F41E1CF88CD3F3CEFE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_68BC8F274646A9F41E1CF88CD3F3CEFE(); // Function GA_Glide.GA_Glide_C.OnInterrupted_68BC8F274646A9F41E1CF88CD3F3CEFE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_68BC8F274646A9F41E1CF88CD3F3CEFE(); // Function GA_Glide.GA_Glide_C.OnBlendOut_68BC8F274646A9F41E1CF88CD3F3CEFE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_68BC8F274646A9F41E1CF88CD3F3CEFE(); // Function GA_Glide.GA_Glide_C.OnCompleted_68BC8F274646A9F41E1CF88CD3F3CEFE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_D80D1A1748FAC5CA7705DA866AD9787F(); // Function GA_Glide.GA_Glide_C.OnFinish_D80D1A1748FAC5CA7705DA866AD9787F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_4851559642302CAEFE47D5B0BCEEC30A(float TimeHeld); // Function GA_Glide.GA_Glide_C.OnRelease_4851559642302CAEFE47D5B0BCEEC30A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnVelocityLess_8963289D4EB9D134D8CC82A411A48B38(); // Function GA_Glide.GA_Glide_C.OnVelocityLess_8963289D4EB9D134D8CC82A411A48B38 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_30C19B6F4EBF0DC7049E318ECAEDBE87(float TimeHeld); // Function GA_Glide.GA_Glide_C.OnRelease_30C19B6F4EBF0DC7049E318ECAEDBE87 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_Glide.GA_Glide_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Glide.GA_Glide_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Glide(int32_t EntryPoint); // Function GA_Glide.GA_Glide_C.ExecuteUbergraph_GA_Glide // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

