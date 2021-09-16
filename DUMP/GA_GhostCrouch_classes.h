// BlueprintGeneratedClass GA_GhostCrouch.GA_GhostCrouch_C
// Size: 0x4f9 (Inherited: 0x490)
struct UGA_GhostCrouch_C : UNOS_GameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	bool bCrouching; // 0x498(0x01)
	char pad_499[0x7]; // 0x499(0x07)
	struct FTimerHandle RecodHandle; // 0x4a0(0x08)
	struct UAudioComponent* StartSound; // 0x4a8(0x08)
	struct UAudioComponent* EndSound; // 0x4b0(0x08)
	struct UAudioComponent* MoveSound; // 0x4b8(0x08)
	struct ACharacter* Character; // 0x4c0(0x08)
	struct FTimerHandle CheckCollisionHandle; // 0x4c8(0x08)
	bool bPressShifteTwice; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
	struct UAudioComponent* LeftSoundCom; // 0x4d8(0x08)
	struct UAudioComponent* RightSoundCom; // 0x4e0(0x08)
	struct TArray<struct AActor*> Actors to Ignore; // 0x4e8(0x10)
	bool Checked; // 0x4f8(0x01)

	void SetGhostCameraState(bool bEnable); // Function GA_GhostCrouch.GA_GhostCrouch_C.SetGhostCameraState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Trace Check(bool bTracked); // Function GA_GhostCrouch.GA_GhostCrouch_C.Trace Check // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnSoundEnd(); // Function GA_GhostCrouch.GA_GhostCrouch_C.SpawnSoundEnd // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnSoundStart(); // Function GA_GhostCrouch.GA_GhostCrouch_C.SpawnSoundStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetProperty(int32_t Index, float Data); // Function GA_GhostCrouch.GA_GhostCrouch_C.GetProperty // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRelease_68A5CBAE4F86414277BE209C0B365C96(float TimeHeld); // Function GA_GhostCrouch.GA_GhostCrouch_C.OnRelease_68A5CBAE4F86414277BE209C0B365C96 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TurnIdleEvent_Event_1(); // Function GA_GhostCrouch.GA_GhostCrouch_C.TurnIdleEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TurnForwardEvent_Event_1(); // Function GA_GhostCrouch.GA_GhostCrouch_C.TurnForwardEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TryToMoveOut(); // Function GA_GhostCrouch.GA_GhostCrouch_C.TryToMoveOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TryToHide(); // Function GA_GhostCrouch.GA_GhostCrouch_C.TryToHide // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TurnRightEvent_Event_1(); // Function GA_GhostCrouch.GA_GhostCrouch_C.TurnRightEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGhostFogState(bool bActive); // Function GA_GhostCrouch.GA_GhostCrouch_C.SetGhostFogState // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TurnLeftEvent_Event_1(); // Function GA_GhostCrouch.GA_GhostCrouch_C.TurnLeftEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_ActivateAbility(); // Function GA_GhostCrouch.GA_GhostCrouch_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void TurnInit(); // Function GA_GhostCrouch.GA_GhostCrouch_C.TurnInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_GhostCrouch.GA_GhostCrouch_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CheckOnServer(); // Function GA_GhostCrouch.GA_GhostCrouch_C.CheckOnServer // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetAirMode(float Value); // Function GA_GhostCrouch.GA_GhostCrouch_C.SetAirMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GA_GhostCrouch(int32_t EntryPoint); // Function GA_GhostCrouch.GA_GhostCrouch_C.ExecuteUbergraph_GA_GhostCrouch // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

