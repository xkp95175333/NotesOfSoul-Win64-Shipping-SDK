// BlueprintGeneratedClass GA_Climb.GA_Climb_C
// Size: 0x4a0 (Inherited: 0x490)
struct UGA_Climb_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct FActiveGameplayEffectHandle climbGe; // 0x498(0x08)

	void Added_C51FD54341A058D88FA098AD987F2FBB(); // Function GA_Climb.GA_Climb_C.Added_C51FD54341A058D88FA098AD987F2FBB // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Added_A82CEB6E4CFD9549A86175984A3250AA(); // Function GA_Climb.GA_Climb_C.Added_A82CEB6E4CFD9549A86175984A3250AA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_Climb.GA_Climb_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_Climb.GA_Climb_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_Climb(int32_t EntryPoint); // Function GA_Climb.GA_Climb_C.ExecuteUbergraph_GA_Climb // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

