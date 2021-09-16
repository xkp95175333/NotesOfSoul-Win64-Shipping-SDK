// BlueprintGeneratedClass GA_ResetPosition.GA_ResetPosition_C
// Size: 0x498 (Inherited: 0x490)
struct UGA_ResetPosition_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)

	void ResetPosition(struct AActor* Actor, struct FVector Location); // Function GA_ResetPosition.GA_ResetPosition_C.ResetPosition // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_1B17B1794DF6F0E19C5032885FD6DB42(float TimeHeld); // Function GA_ResetPosition.GA_ResetPosition_C.OnRelease_1B17B1794DF6F0E19C5032885FD6DB42 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RunServer(); // Function GA_ResetPosition.GA_ResetPosition_C.RunServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BC_Loc(struct AActor* Actor, struct FVector Loc); // Function GA_ResetPosition.GA_ResetPosition_C.BC_Loc // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_ResetPosition.GA_ResetPosition_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_ResetPosition.GA_ResetPosition_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BC_EndAbility(); // Function GA_ResetPosition.GA_ResetPosition_C.BC_EndAbility // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_ResetPosition(int32_t EntryPoint); // Function GA_ResetPosition.GA_ResetPosition_C.ExecuteUbergraph_GA_ResetPosition // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

