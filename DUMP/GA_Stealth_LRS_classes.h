// BlueprintGeneratedClass GA_Stealth_LRS.GA_Stealth_LRS_C
// Size: 0x4a8 (Inherited: 0x490)
struct UGA_Stealth_LRS_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FActiveGameplayEffectHandle Handle_Stealth; // 0x498(0x08)
	struct UWBP_InteractProgressUI_C* UI; // 0x4a0(0x08)

	void OnFinish_0394A7F4406328455B156F96CF99AB32(); // Function GA_Stealth_LRS.GA_Stealth_LRS_C.OnFinish_0394A7F4406328455B156F96CF99AB32 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_AB3E3B714F9F4AB1F6F3588A823DAD01(); // Function GA_Stealth_LRS.GA_Stealth_LRS_C.OnSync_AB3E3B714F9F4AB1F6F3588A823DAD01 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_C4B606F746BB4684562639A7576FB1E1(); // Function GA_Stealth_LRS.GA_Stealth_LRS_C.Added_C4B606F746BB4684562639A7576FB1E1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_A6DA30C148CF048F4EAD5C833C92F644(float TimeWaited); // Function GA_Stealth_LRS.GA_Stealth_LRS_C.OnPress_A6DA30C148CF048F4EAD5C833C92F644 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Stealth_LRS.GA_Stealth_LRS_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData eventData); // Function GA_Stealth_LRS.GA_Stealth_LRS_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Stealth_LRS(int32_t EntryPoint); // Function GA_Stealth_LRS.GA_Stealth_LRS_C.ExecuteUbergraph_GA_Stealth_LRS // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

