// BlueprintGeneratedClass GA_HumanCrouch.GA_HumanCrouch_C
// Size: 0x4a0 (Inherited: 0x490)
struct UGA_HumanCrouch_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* Human; // 0x498(0x08)

	void Added_5A154CA645C0EE33D69888800A97E3B5(); // Function GA_HumanCrouch.GA_HumanCrouch_C.Added_5A154CA645C0EE33D69888800A97E3B5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPress_379FDD2743712F3331CA1C95F5B72648(float TimeWaited); // Function GA_HumanCrouch.GA_HumanCrouch_C.OnPress_379FDD2743712F3331CA1C95F5B72648 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnSync_DBB2886E421B419EA7CAD8ABF8E6AF32(); // Function GA_HumanCrouch.GA_HumanCrouch_C.OnSync_DBB2886E421B419EA7CAD8ABF8E6AF32 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnChange_737DEEBD43C8C02FF78AAA9FCDDC1397(); // Function GA_HumanCrouch.GA_HumanCrouch_C.OnChange_737DEEBD43C8C02FF78AAA9FCDDC1397 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_HumanCrouch.GA_HumanCrouch_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_HumanCrouch.GA_HumanCrouch_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_HumanCrouch(int32_t EntryPoint); // Function GA_HumanCrouch.GA_HumanCrouch_C.ExecuteUbergraph_GA_HumanCrouch // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

