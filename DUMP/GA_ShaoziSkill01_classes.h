// BlueprintGeneratedClass GA_ShaoziSkill01.GA_ShaoziSkill01_C
// Size: 0x4b9 (Inherited: 0x490)
struct UGA_ShaoziSkill01_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerGhost* Shao Zi Killer; // 0x498(0x08)
	struct FActiveGameplayEffectHandle SelfGEHandl; // 0x4a0(0x08)
	struct FActiveGameplayEffectHandle StealthGE; // 0x4a8(0x08)
	struct UNiagaraComponent* SmokeCom; // 0x4b0(0x08)
	bool End; // 0x4b8(0x01)

	void SetSkillIsInUse(bool IsShow, int32_t Index); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.SetSkillIsInUse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool K2_CanActivateAbility(struct FGameplayAbilityActorInfo ActorInfo, struct FGameplayTagContainer RelevantTags); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.K2_CanActivateAbility // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
	void OnPress_D5E8FBA74DB4594BE2FC8E97A00C60F0(float TimeWaited); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.OnPress_D5E8FBA74DB4594BE2FC8E97A00C60F0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_A34A38E147CEF9E5EA1335BE08DE1BAF(); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.OnSync_A34A38E147CEF9E5EA1335BE08DE1BAF // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_AE4968B74E229D53ABF98B95293D4966(float TimeWaited); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.OnPress_AE4968B74E229D53ABF98B95293D4966 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_4761B3FD419136507D17E6A07A38F8F8(); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.OnSync_4761B3FD419136507D17E6A07A38F8F8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_62E7C831453C702C23B3BD87E084A83E(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.EventReceived_62E7C831453C702C23B3BD87E084A83E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_62E7C831453C702C23B3BD87E084A83E(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.OnCancelled_62E7C831453C702C23B3BD87E084A83E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_62E7C831453C702C23B3BD87E084A83E(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.OnInterrupted_62E7C831453C702C23B3BD87E084A83E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_62E7C831453C702C23B3BD87E084A83E(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.OnBlendOut_62E7C831453C702C23B3BD87E084A83E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_62E7C831453C702C23B3BD87E084A83E(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.OnCompleted_62E7C831453C702C23B3BD87E084A83E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_FB1B0C0A4343F3A4EF0A1EB21A68A2FE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.EventReceived_FB1B0C0A4343F3A4EF0A1EB21A68A2FE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_FB1B0C0A4343F3A4EF0A1EB21A68A2FE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.OnCancelled_FB1B0C0A4343F3A4EF0A1EB21A68A2FE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_FB1B0C0A4343F3A4EF0A1EB21A68A2FE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.OnInterrupted_FB1B0C0A4343F3A4EF0A1EB21A68A2FE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_FB1B0C0A4343F3A4EF0A1EB21A68A2FE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.OnBlendOut_FB1B0C0A4343F3A4EF0A1EB21A68A2FE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_FB1B0C0A4343F3A4EF0A1EB21A68A2FE(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.OnCompleted_FB1B0C0A4343F3A4EF0A1EB21A68A2FE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_ShaoziSkill01(int32_t EntryPoint); // Function GA_ShaoziSkill01.GA_ShaoziSkill01_C.ExecuteUbergraph_GA_ShaoziSkill01 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

