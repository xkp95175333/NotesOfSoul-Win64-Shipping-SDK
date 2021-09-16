// BlueprintGeneratedClass BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C
// Size: 0x2e0 (Inherited: 0x240)
struct ABP_XQ_GhsotLamp_C : ANOS_XQGhostLamp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x240(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x248(0x08)
	float Timeline_1_NewTrack_0_CD680C1D4714ACFED2C89BA4DEAA90C0; // 0x250(0x04)
	enum class ETimelineDirection Timeline_1__Direction_CD680C1D4714ACFED2C89BA4DEAA90C0; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct UTimelineComponent* Timeline_2; // 0x258(0x08)
	struct TArray<struct ANOS_PlayerHuman*> RangeCheckHumans; // 0x260(0x10)
	float CheckHalf Range; // 0x270(0x04)
	float CheckDuration Time; // 0x274(0x04)
	float Distance; // 0x278(0x04)
	float Degree Range; // 0x27c(0x04)
	struct FVector Forward Vector; // 0x280(0x0c)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct TArray<struct ANOS_PlayerHuman*> As NOS Player Human; // 0x290(0x10)
	float SettingRange; // 0x2a0(0x04)
	bool IsRightClicked; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct FVector DropBeginLocation; // 0x2a8(0x0c)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct TArray<struct ANOS_PlayerHuman*> Checked Pawn; // 0x2b8(0x10)
	struct TArray<struct ABP_XQ_SoulLink_C*> ClientLinkArray; // 0x2c8(0x10)
	struct FTimerHandle NewVar_1; // 0x2d8(0x08)

	void OpenRangeFreeze(float HalfRange, float DurationTime); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.OpenRangeFreeze // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckTarget(float Radius, int32_t Index); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.CheckTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_1__FinishedFunc(); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_1__UpdateFunc(); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ChangeLampState(bool bIsHold); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.ChangeLampState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LampMoveToTargetLocation(struct FVector TargetLocation); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.LampMoveToTargetLocation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BeginChekc(); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.BeginChekc // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetBackLocation(); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.SetBackLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DropOrTake(bool bIsHold); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.DropOrTake // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClientCreateLink(struct TArray<struct AActor*> targetActor); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.ClientCreateLink // (Net|NetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClientDestroy(); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.ClientDestroy // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MulticastSpawnEmmiter(struct FVector Location); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.MulticastSpawnEmmiter // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayMoveSOund(); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.PlayMoveSOund // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StopMoveSound(); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.StopMoveSound // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XQ_GhsotLamp(int32_t EntryPoint); // Function BP_XQ_GhsotLamp.BP_XQ_GhsotLamp_C.ExecuteUbergraph_BP_XQ_GhsotLamp // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

