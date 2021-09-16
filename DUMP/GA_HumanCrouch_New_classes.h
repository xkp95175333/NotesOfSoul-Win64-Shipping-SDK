// BlueprintGeneratedClass GA_HumanCrouch_New.GA_HumanCrouch_New_C
// Size: 0x4a8 (Inherited: 0x490)
struct UGA_HumanCrouch_New_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* Human; // 0x498(0x08)
	struct FActiveGameplayEffectHandle GEHandle_Crouch; // 0x4a0(0x08)

	void OnPress_FF1056684BC02F199543078D7E387D41(float TimeWaited); // Function GA_HumanCrouch_New.GA_HumanCrouch_New_C.OnPress_FF1056684BC02F199543078D7E387D41 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_91ACF9F24192A57F1B6A66A9F46780B3(float TimeHeld); // Function GA_HumanCrouch_New.GA_HumanCrouch_New_C.OnRelease_91ACF9F24192A57F1B6A66A9F46780B3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_111FDC6344271A54982478941A0F6817(float TimeWaited); // Function GA_HumanCrouch_New.GA_HumanCrouch_New_C.OnPress_111FDC6344271A54982478941A0F6817 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_HumanCrouch_New.GA_HumanCrouch_New_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_HumanCrouch_New.GA_HumanCrouch_New_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Crouch(); // Function GA_HumanCrouch_New.GA_HumanCrouch_New_C.Crouch // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void WaitCrouchEvent(); // Function GA_HumanCrouch_New.GA_HumanCrouch_New_C.WaitCrouchEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_HumanCrouch_New(int32_t EntryPoint); // Function GA_HumanCrouch_New.GA_HumanCrouch_New_C.ExecuteUbergraph_GA_HumanCrouch_New // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

