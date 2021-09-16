// BlueprintGeneratedClass GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C
// Size: 0x4c8 (Inherited: 0x490)
struct UGA_YujiSkill2_ElectricEffect_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	int32_t DmgTimes; // 0x498(0x04)
	int32_t MaxTimes; // 0x49c(0x04)
	float RateDuration; // 0x4a0(0x04)
	float EffectDuration; // 0x4a4(0x04)
	float MaxRurationTime; // 0x4a8(0x04)
	char pad_4AC[0x4]; // 0x4ac(0x04)
	struct UAnimMontage* Montage_HumanBeHit_Man; // 0x4b0(0x08)
	struct UAnimMontage* Montage_HumanBeHit_Woman; // 0x4b8(0x08)
	struct UNiagaraComponent* Tips; // 0x4c0(0x08)

	void Init Data(int32_t Level); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.Init Data // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetProperty(struct FString Name, int32_t Level, float OutValue); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.GetProperty // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_BA34BD3D467683E94892EEBA7D925AD2(); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.Added_BA34BD3D467683E94892EEBA7D925AD2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_C2CA1D2A4237DA1447187286F121068A(struct FName NotifyName); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.OnNotifyEnd_C2CA1D2A4237DA1447187286F121068A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_C2CA1D2A4237DA1447187286F121068A(struct FName NotifyName); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.OnNotifyBegin_C2CA1D2A4237DA1447187286F121068A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_C2CA1D2A4237DA1447187286F121068A(struct FName NotifyName); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.OnInterrupted_C2CA1D2A4237DA1447187286F121068A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_C2CA1D2A4237DA1447187286F121068A(struct FName NotifyName); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.OnBlendOut_C2CA1D2A4237DA1447187286F121068A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_C2CA1D2A4237DA1447187286F121068A(struct FName NotifyName); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.OnCompleted_C2CA1D2A4237DA1447187286F121068A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_72207A7244772DDDC737D5B9C589D705(struct FName NotifyName); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.OnNotifyEnd_72207A7244772DDDC737D5B9C589D705 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_72207A7244772DDDC737D5B9C589D705(struct FName NotifyName); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.OnNotifyBegin_72207A7244772DDDC737D5B9C589D705 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_72207A7244772DDDC737D5B9C589D705(struct FName NotifyName); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.OnInterrupted_72207A7244772DDDC737D5B9C589D705 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_72207A7244772DDDC737D5B9C589D705(struct FName NotifyName); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.OnBlendOut_72207A7244772DDDC737D5B9C589D705 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_72207A7244772DDDC737D5B9C589D705(struct FName NotifyName); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.OnCompleted_72207A7244772DDDC737D5B9C589D705 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void PlayAnim(); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.PlayAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayFx(struct AActor* Target); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.PlayFx // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DestoryFX(); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.DestoryFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_YujiSkill2_ElectricEffect(int32_t EntryPoint); // Function GA_YujiSkill2_ElectricEffect.GA_YujiSkill2_ElectricEffect_C.ExecuteUbergraph_GA_YujiSkill2_ElectricEffect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

