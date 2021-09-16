// BlueprintGeneratedClass GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C
// Size: 0x4e0 (Inherited: 0x490)
struct UGA_XiaoHongMainTalent_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float Time; // 0x498(0x04)
	float Value; // 0x49c(0x04)
	struct ABP_XiaoHong_C* Character; // 0x4a0(0x08)
	struct UNiagaraComponent* LingtiNiagara; // 0x4a8(0x08)
	struct UAudioComponent* Sound; // 0x4b0(0x08)
	struct FActiveGameplayEffectHandle Handle; // 0x4b8(0x08)
	struct UWBP_SkillDurationProaressUI_C* UI; // 0x4c0(0x08)
	struct UAbilityTask_WaitDelay* TraceCheckTask; // 0x4c8(0x08)
	struct UAbilityTask_WaitDelay* EndTask; // 0x4d0(0x08)
	struct UAbilityTask_WaitGameplayTagAdded* InterruptTask; // 0x4d8(0x08)

	void CalTraceParam(int32_t DirectionIndex, struct FVector TraceLocation, float CapsuleRadius, float CapsuleHalfHeight, struct FVector Direction); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.CalTraceParam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void SetActorOutline(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.SetActorOutline // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Trace Check(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.Trace Check // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_08E271644711613464E44282186C4993(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.OnFinish_08E271644711613464E44282186C4993 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_3322B23D4A33458C661AE8AACDA14188(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.OnFinish_3322B23D4A33458C661AE8AACDA14188 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_543F7AAC4A99C78BC61C2DAF08FD4B57(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.OnCancelled_543F7AAC4A99C78BC61C2DAF08FD4B57 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_543F7AAC4A99C78BC61C2DAF08FD4B57(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.OnInterrupted_543F7AAC4A99C78BC61C2DAF08FD4B57 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_543F7AAC4A99C78BC61C2DAF08FD4B57(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.OnBlendOut_543F7AAC4A99C78BC61C2DAF08FD4B57 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_543F7AAC4A99C78BC61C2DAF08FD4B57(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.OnCompleted_543F7AAC4A99C78BC61C2DAF08FD4B57 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_EECA124B443E5BE6EF91DD98942A8EBE(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.OnSync_EECA124B443E5BE6EF91DD98942A8EBE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_CBCB6EB446FFE8A9E2F633B0A66342CB(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.OnSync_CBCB6EB446FFE8A9E2F633B0A66342CB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_64D0078748AD4319BE40A8A7BD121E36(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.Added_64D0078748AD4319BE40A8A7BD121E36 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_BAC8C1AA4398FE15F114A29E7D3C83C2(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.OnSync_BAC8C1AA4398FE15F114A29E7D3C83C2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Removed_290ADE3D45A324ADD43415B787740CCF(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.Removed_290ADE3D45A324ADD43415B787740CCF // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_80D2778D4597EE6D9D6CD5AEBEC588B1(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.Added_80D2778D4597EE6D9D6CD5AEBEC588B1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_F93440174EB0F7D09A68F2AB6311C2EB(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.Added_F93440174EB0F7D09A68F2AB6311C2EB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoHongMainTalent(int32_t EntryPoint); // Function GA_XiaoHongMainTalent.GA_XiaoHongMainTalent_C.ExecuteUbergraph_GA_XiaoHongMainTalent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

