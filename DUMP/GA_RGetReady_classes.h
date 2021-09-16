// BlueprintGeneratedClass GA_RGetReady.GA_RGetReady_C
// Size: 0x4a0 (Inherited: 0x490)
struct UGA_RGetReady_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UImage* Image Ready; // 0x498(0x08)

	void K2_OnEndAbility(bool bWasCancelled); // Function GA_RGetReady.GA_RGetReady_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_RGetReady.GA_RGetReady_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_RGetReady(int32_t EntryPoint); // Function GA_RGetReady.GA_RGetReady_C.ExecuteUbergraph_GA_RGetReady // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

