// BlueprintGeneratedClass GA_LRS_Revive.GA_LRS_Revive_C
// Size: 0x4a8 (Inherited: 0x490)
struct UGA_LRS_Revive_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ABP_PlayerHumanBase_C* Character; // 0x498(0x08)
	struct UObject* GhostMontage; // 0x4a0(0x08)

	void GetHumanShiHunMontage(struct UAnimMontage* HumanMontage); // Function GA_LRS_Revive.GA_LRS_Revive_C.GetHumanShiHunMontage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ReviveInternal(); // Function GA_LRS_Revive.GA_LRS_Revive_C.ReviveInternal // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_LRS_Revive.GA_LRS_Revive_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_LRS_Revive(int32_t EntryPoint); // Function GA_LRS_Revive.GA_LRS_Revive_C.ExecuteUbergraph_GA_LRS_Revive // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

