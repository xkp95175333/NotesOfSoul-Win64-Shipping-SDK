// BlueprintGeneratedClass GA_ObservedCamera.GA_ObservedCamera_C
// Size: 0x4a0 (Inherited: 0x490)
struct UGA_ObservedCamera_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* OwnerHuman; // 0x498(0x08)

	void OnRelease_EF910AEA48F612407790FA97E66427C3(float TimeHeld); // Function GA_ObservedCamera.GA_ObservedCamera_C.OnRelease_EF910AEA48F612407790FA97E66427C3 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ObservedCamera.GA_ObservedCamera_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_ObservedCamera.GA_ObservedCamera_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_ObservedCamera(int32_t EntryPoint); // Function GA_ObservedCamera.GA_ObservedCamera_C.ExecuteUbergraph_GA_ObservedCamera // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

