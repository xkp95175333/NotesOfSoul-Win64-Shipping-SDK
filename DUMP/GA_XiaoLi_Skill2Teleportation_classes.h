// BlueprintGeneratedClass GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C
// Size: 0x4b0 (Inherited: 0x490)
struct UGA_XiaoLi_Skill2Teleportation_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_XiaoLi_C* xiaoli; // 0x498(0x08)
	struct FName TeleportEndIndex; // 0x4a0(0x08)
	struct FActiveGameplayEffectHandle GEHandle_DisableControl; // 0x4a8(0x08)

	void InitAbility(bool bSuccess); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.InitAbility // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetMontage(struct UAnimMontage* Montage); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.GetMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnFinish_CA8FA5FC41549CD59874D1A24C2DCFBE(); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.OnFinish_CA8FA5FC41549CD59874D1A24C2DCFBE // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EventReceived_5E077E344260EAB2F0FAACB7B73944D4(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.EventReceived_5E077E344260EAB2F0FAACB7B73944D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_5E077E344260EAB2F0FAACB7B73944D4(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.OnCancelled_5E077E344260EAB2F0FAACB7B73944D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_5E077E344260EAB2F0FAACB7B73944D4(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.OnInterrupted_5E077E344260EAB2F0FAACB7B73944D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_5E077E344260EAB2F0FAACB7B73944D4(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.OnBlendOut_5E077E344260EAB2F0FAACB7B73944D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_5E077E344260EAB2F0FAACB7B73944D4(struct FGameplayTag EventTag, struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.OnCompleted_5E077E344260EAB2F0FAACB7B73944D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnFinish_570A2D424C9D7EFE783BE6ACD8C8FF38(); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.OnFinish_570A2D424C9D7EFE783BE6ACD8C8FF38 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCancelled_F27FC6D34D9A09329D0F7E962201F65F(); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.OnCancelled_F27FC6D34D9A09329D0F7E962201F65F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_F27FC6D34D9A09329D0F7E962201F65F(); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.OnInterrupted_F27FC6D34D9A09329D0F7E962201F65F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_F27FC6D34D9A09329D0F7E962201F65F(); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.OnBlendOut_F27FC6D34D9A09329D0F7E962201F65F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_F27FC6D34D9A09329D0F7E962201F65F(); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.OnCompleted_F27FC6D34D9A09329D0F7E962201F65F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XiaoLi_Skill2Teleportation(int32_t EntryPoint); // Function GA_XiaoLi_Skill2Teleportation.GA_XiaoLi_Skill2Teleportation_C.ExecuteUbergraph_GA_XiaoLi_Skill2Teleportation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

