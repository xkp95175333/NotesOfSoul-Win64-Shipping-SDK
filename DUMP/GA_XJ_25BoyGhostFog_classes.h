// BlueprintGeneratedClass GA_XJ_25BoyGhostFog.GA_XJ_25BoyGhostFog_C
// Size: 0x4a9 (Inherited: 0x490)
struct UGA_XJ_25BoyGhostFog_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct TArray<struct AActor*> Actors to Ignore; // 0x498(0x10)
	bool Checked; // 0x4a8(0x01)

	void TraceCheck(bool Tracked); // Function GA_XJ_25BoyGhostFog.GA_XJ_25BoyGhostFog_C.TraceCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_FF7B848948B0AD22AE2655B6F4C62C10(float TimeHeld); // Function GA_XJ_25BoyGhostFog.GA_XJ_25BoyGhostFog_C.OnRelease_FF7B848948B0AD22AE2655B6F4C62C10 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_XJ_25BoyGhostFog.GA_XJ_25BoyGhostFog_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_XJ_25BoyGhostFog.GA_XJ_25BoyGhostFog_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void TryToHide(); // Function GA_XJ_25BoyGhostFog.GA_XJ_25BoyGhostFog_C.TryToHide // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TryToMoveOut(); // Function GA_XJ_25BoyGhostFog.GA_XJ_25BoyGhostFog_C.TryToMoveOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_XJ_25BoyGhostFog(int32_t EntryPoint); // Function GA_XJ_25BoyGhostFog.GA_XJ_25BoyGhostFog_C.ExecuteUbergraph_GA_XJ_25BoyGhostFog // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

