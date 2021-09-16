// BlueprintGeneratedClass GA_NightUseStealth.GA_NightUseStealth_C
// Size: 0x4d0 (Inherited: 0x4bf)
struct UGA_NightUseStealth_C : UGA_25Boy_HumanBeAttacked_C {
	char pad_4BF[0x1]; // 0x4bf(0x01)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4c0(0x08)
	struct FActiveGameplayEffectHandle Handle_Stealth; // 0x4c8(0x08)

	void K2_ActivateAbility(); // Function GA_NightUseStealth.GA_NightUseStealth_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_NightUseStealth.GA_NightUseStealth_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_NightUseStealth(int32_t EntryPoint); // Function GA_NightUseStealth.GA_NightUseStealth_C.ExecuteUbergraph_GA_NightUseStealth // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

