// BlueprintGeneratedClass GA_AutoRestore.GA_AutoRestore_C
// Size: 0x4a0 (Inherited: 0x490)
struct UGA_AutoRestore_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	float AutoHealth; // 0x498(0x04)
	float PowerRestore; // 0x49c(0x04)

	void GetRestoreCoefficient(float RestoreCoefficient); // Function GA_AutoRestore.GA_AutoRestore_C.GetRestoreCoefficient // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnChange_ADAA39354635B45D3C2F69BB7AEE7631(); // Function GA_AutoRestore.GA_AutoRestore_C.OnChange_ADAA39354635B45D3C2F69BB7AEE7631 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_AutoRestore.GA_AutoRestore_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void InitProperty(); // Function GA_AutoRestore.GA_AutoRestore_C.InitProperty // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_AutoRestore(int32_t EntryPoint); // Function GA_AutoRestore.GA_AutoRestore_C.ExecuteUbergraph_GA_AutoRestore // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

