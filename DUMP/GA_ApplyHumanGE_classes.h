// BlueprintGeneratedClass GA_ApplyHumanGE.GA_ApplyHumanGE_C
// Size: 0x4a8 (Inherited: 0x490)
struct UGA_ApplyHumanGE_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UGameplayEffect* ParentGEClass; // 0x498(0x08)
	float CheckInterval; // 0x4a0(0x04)
	float AbilityDuration; // 0x4a4(0x04)

	void CheckHumansGE(); // Function GA_ApplyHumanGE.GA_ApplyHumanGE_C.CheckHumansGE // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_ApplyHumanGE.GA_ApplyHumanGE_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ApplyHumanGE.GA_ApplyHumanGE_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_ApplyHumanGE(int32_t EntryPoint); // Function GA_ApplyHumanGE.GA_ApplyHumanGE_C.ExecuteUbergraph_GA_ApplyHumanGE // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

