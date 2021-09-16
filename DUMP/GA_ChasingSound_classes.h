// BlueprintGeneratedClass GA_ChasingSound.GA_ChasingSound_C
// Size: 0x4a0 (Inherited: 0x490)
struct UGA_ChasingSound_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerBase* HumanOrGhost; // 0x498(0x08)

	void GetChasingSound(struct USoundBase* Cue); // Function GA_ChasingSound.GA_ChasingSound_C.GetChasingSound // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_ChasingSound.GA_ChasingSound_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ChasingSound.GA_ChasingSound_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_ChasingSound(int32_t EntryPoint); // Function GA_ChasingSound.GA_ChasingSound_C.ExecuteUbergraph_GA_ChasingSound // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

