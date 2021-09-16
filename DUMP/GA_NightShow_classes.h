// BlueprintGeneratedClass GA_NightShow.GA_NightShow_C
// Size: 0x4f0 (Inherited: 0x490)
struct UGA_NightShow_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerBase* Human; // 0x498(0x08)
	int32_t Times; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FTimerHandle Timer; // 0x4a8(0x08)
	bool ToDark; // 0x4b0(0x01)
	char pad_4B1[0x3]; // 0x4b1(0x03)
	struct FVector NiagaraLocation; // 0x4b4(0x0c)
	struct FTimerHandle NiagaraTimer; // 0x4c0(0x08)
	struct TArray<struct UNiagaraComponent*> Niagaras; // 0x4c8(0x10)
	struct FTimerHandle RefreshNiagraTimer; // 0x4d8(0x08)
	struct UAudioComponent* Sound; // 0x4e0(0x08)
	struct UMaterialInstanceDynamic* DynamicPostMaterial; // 0x4e8(0x08)

	void SetNiagaraParam(); // Function GA_NightShow.GA_NightShow_C.SetNiagaraParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnNiagara(); // Function GA_NightShow.GA_NightShow_C.SpawnNiagara // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetDynamicParameterValue(float Character); // Function GA_NightShow.GA_NightShow_C.SetDynamicParameterValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetPostValue(float Weight); // Function GA_NightShow.GA_NightShow_C.SetPostValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_C2BED8B04B3B28A9F62556B7FED84FCE(struct FGameplayEventData Payload); // Function GA_NightShow.GA_NightShow_C.EventReceived_C2BED8B04B3B28A9F62556B7FED84FCE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DynamicValue(bool ToDark, bool EndAbility); // Function GA_NightShow.GA_NightShow_C.DynamicValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function GA_NightShow.GA_NightShow_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnSound(); // Function GA_NightShow.GA_NightShow_C.SpawnSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StopSound(); // Function GA_NightShow.GA_NightShow_C.StopSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_NightShow.GA_NightShow_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_NightShow.GA_NightShow_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Clear(); // Function GA_NightShow.GA_NightShow_C.Clear // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_NightShow(int32_t EntryPoint); // Function GA_NightShow.GA_NightShow_C.ExecuteUbergraph_GA_NightShow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

