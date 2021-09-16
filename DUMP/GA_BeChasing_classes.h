// BlueprintGeneratedClass GA_BeChasing.GA_BeChasing_C
// Size: 0x4a0 (Inherited: 0x490)
struct UGA_BeChasing_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FTimerHandle RunTimer; // 0x498(0x08)

	void K2_OnEndAbility(bool bWasCancelled); // Function GA_BeChasing.GA_BeChasing_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_BeChasing.GA_BeChasing_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CE_KeepRun(); // Function GA_BeChasing.GA_BeChasing_C.CE_KeepRun // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_BeChasing(int32_t EntryPoint); // Function GA_BeChasing.GA_BeChasing_C.ExecuteUbergraph_GA_BeChasing // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

