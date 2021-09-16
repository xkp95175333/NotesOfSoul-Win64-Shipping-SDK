// BlueprintGeneratedClass GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C
// Size: 0x4f0 (Inherited: 0x490)
struct UGA_XiaoLi_Skill2_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_XiaoLi_C* xiaoli; // 0x498(0x08)
	bool NearElementSlot; // 0x4a0(0x01)
	char pad_4A1[0x3]; // 0x4a1(0x03)
	struct FName UltimateMontageIndex; // 0x4a4(0x08)
	struct FActiveGameplayEffectHandle GEHandle_PlayAnim; // 0x4ac(0x08)
	int32_t AbilityLevel; // 0x4b4(0x04)
	float SoulCost; // 0x4b8(0x04)
	float CapsuleHeight; // 0x4bc(0x04)
	float CapsuleDiameter; // 0x4c0(0x04)
	float HumanSpeedScale; // 0x4c4(0x04)
	float AdditionalDamage; // 0x4c8(0x04)
	float DebuffRemainTime; // 0x4cc(0x04)
	int32_t MaxBloodyPoolNum; // 0x4d0(0x04)
	float CheckNearElement_HeightRange; // 0x4d4(0x04)
	float CheckNearElement_MinDistance; // 0x4d8(0x04)
	float TraceLength; // 0x4dc(0x04)
	float CheckCollisionHeight; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct UAbilityTask_WaitTargetData* Task_WaitTarget_Skill2ReticleActor; // 0x4e8(0x08)

	void SetSkillUIVFX(int32_t Index, bool IsShow); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.SetSkillUIVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FGameplayEffectSpecHandle GetGESpec(); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.GetGESpec // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	bool CheckCostForUI(struct FGameplayAbilitySpecHandle Handle, struct FGameplayAbilityActorInfo ActorInfo); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.CheckCostForUI // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
	void Execute Skill Cost(); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.Execute Skill Cost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Bloody Pool Transform(bool IsUltimate, struct FHitResult HitResult, struct FVector Spawn Location, struct FVector Impact Normal); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.Set Bloody Pool Transform // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Has Enough Skill Point(bool Can Spawn); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.Has Enough Skill Point // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Get Properties(struct TArray<float> Properties, struct TArray<float> Ultimate); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.Get Properties // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void InitAbility(bool bSuccess); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.InitAbility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_B667791440CF33A1AB7053AE0F201E53(); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.OnSync_B667791440CF33A1AB7053AE0F201E53 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_877D64BA41344F9859072F967C0770AD(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.EventReceived_877D64BA41344F9859072F967C0770AD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_877D64BA41344F9859072F967C0770AD(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.OnCancelled_877D64BA41344F9859072F967C0770AD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_877D64BA41344F9859072F967C0770AD(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.OnInterrupted_877D64BA41344F9859072F967C0770AD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_877D64BA41344F9859072F967C0770AD(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.OnBlendOut_877D64BA41344F9859072F967C0770AD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_877D64BA41344F9859072F967C0770AD(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.OnCompleted_877D64BA41344F9859072F967C0770AD // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_DCBC04134CF6A0A1D258E2B58C572A7D(); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.OnSync_DCBC04134CF6A0A1D258E2B58C572A7D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DidNotSpawn_370C15194269D3FFB2167093FE9F5C5E(struct AActor* SpawnedActor); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.DidNotSpawn_370C15194269D3FFB2167093FE9F5C5E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Success_370C15194269D3FFB2167093FE9F5C5E(struct AActor* SpawnedActor); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.Success_370C15194269D3FFB2167093FE9F5C5E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_B15511D2497371C1DCF667B20CA18822(float TimeWaited); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.OnPress_B15511D2497371C1DCF667B20CA18822 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_DD03845841E25722EE2BD0B48D28729F(); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.OnSync_DD03845841E25722EE2BD0B48D28729F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_17824FE04692BE5AFCDACDAF18690D6D(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.EventReceived_17824FE04692BE5AFCDACDAF18690D6D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_17824FE04692BE5AFCDACDAF18690D6D(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.OnCancelled_17824FE04692BE5AFCDACDAF18690D6D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_17824FE04692BE5AFCDACDAF18690D6D(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.OnInterrupted_17824FE04692BE5AFCDACDAF18690D6D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_17824FE04692BE5AFCDACDAF18690D6D(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.OnBlendOut_17824FE04692BE5AFCDACDAF18690D6D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_17824FE04692BE5AFCDACDAF18690D6D(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.OnCompleted_17824FE04692BE5AFCDACDAF18690D6D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_1BA8607B49084D4D427D94AF05593836(); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.Added_1BA8607B49084D4D427D94AF05593836 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_61CAAA70466AE10D96D0BA979EA2C352(); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.Added_61CAAA70466AE10D96D0BA979EA2C352 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_96C48F5344FDA5CCEBF1EDA31E67B020(); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.OnSync_96C48F5344FDA5CCEBF1EDA31E67B020 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DidNotSpawn_31B5A7DD4C58BF825910008B6520E933(struct AActor* SpawnedActor); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.DidNotSpawn_31B5A7DD4C58BF825910008B6520E933 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Success_31B5A7DD4C58BF825910008B6520E933(struct AActor* SpawnedActor); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.Success_31B5A7DD4C58BF825910008B6520E933 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_51A74CE849AC38F4F01CC4B272691F22(float TimeWaited); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.OnPress_51A74CE849AC38F4F01CC4B272691F22 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Cancelled_30CBF9F84044ACBE30AA6D96BED678F3(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.Cancelled_30CBF9F84044ACBE30AA6D96BED678F3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ValidData_30CBF9F84044ACBE30AA6D96BED678F3(struct FGameplayAbilityTargetDataHandle Data); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.ValidData_30CBF9F84044ACBE30AA6D96BED678F3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoLi_Skill2(int32_t EntryPoint); // Function GA_XiaoLi_Skill2.GA_XiaoLi_Skill2_C.ExecuteUbergraph_GA_XiaoLi_Skill2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

