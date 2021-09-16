// BlueprintGeneratedClass GA_HeartSound.GA_HeartSound_C
// Size: 0x4a0 (Inherited: 0x490)
struct UGA_HeartSound_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct ANOS_PlayerHuman* Human; // 0x498(0x08)

	void GetHeartSound(struct USoundBase* Cue); // Function GA_HeartSound.GA_HeartSound_C.GetHeartSound // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_HeartSound.GA_HeartSound_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_HeartSound.GA_HeartSound_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_HeartSound(int32_t EntryPoint); // Function GA_HeartSound.GA_HeartSound_C.ExecuteUbergraph_GA_HeartSound // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

