// BlueprintGeneratedClass GA_LoseFuShiSoul.GA_LoseFuShiSoul_C
// Size: 0x4f0 (Inherited: 0x490)
struct UGA_LoseFuShiSoul_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* Human; // 0x498(0x08)
	int32_t Times; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FTimerHandle Timer; // 0x4a8(0x08)
	bool ToDark; // 0x4b0(0x01)
	char pad_4B1[0x3]; // 0x4b1(0x03)
	struct FActiveGameplayEffectHandle BuffHandle; // 0x4b4(0x08)
	struct FVector NiagaraLocation; // 0x4bc(0x0c)
	struct FTimerHandle NiagaraTimer; // 0x4c8(0x08)
	struct TArray<struct UNiagaraComponent*> Niagaras; // 0x4d0(0x10)
	struct FTimerHandle RefreshNiagraTimer; // 0x4e0(0x08)
	struct UAudioComponent* SoundCom; // 0x4e8(0x08)

	void SetNiagaraParam(); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.SetNiagaraParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnNiagara(); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.SpawnNiagara // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetDynamicParameterValue(float Value); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.SetDynamicParameterValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetPostValue(float Weight); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.SetPostValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Removed_3C1ED8F045E513DC2FA0F7AC1C7BD425(); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.Removed_3C1ED8F045E513DC2FA0F7AC1C7BD425 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_2CCB4BA147B88AFAC0CBA988210B67C4(); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.OnFinish_2CCB4BA147B88AFAC0CBA988210B67C4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_672381D84D4C6916DBA24681D2AC0302(); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.OnFinish_672381D84D4C6916DBA24681D2AC0302 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_5A889D234E5AB06306CF5AB8E717CDAA(); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.OnFinish_5A889D234E5AB06306CF5AB8E717CDAA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_7AF1C51D4B593F070946CA8259A5B4B0(struct FGameplayEventData Payload); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.EventReceived_7AF1C51D4B593F070946CA8259A5B4B0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void DynamicValue(bool ToDark, bool EndAbility); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.DynamicValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_2(); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.CustomEvent_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnSound(); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.SpawnSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StopSound(); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.StopSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_LoseFuShiSoul(int32_t EntryPoint); // Function GA_LoseFuShiSoul.GA_LoseFuShiSoul_C.ExecuteUbergraph_GA_LoseFuShiSoul // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

