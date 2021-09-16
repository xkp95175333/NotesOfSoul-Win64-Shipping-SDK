// BlueprintGeneratedClass BP_CharacterModel.BP_CharacterModel_C
// Size: 0xf11 (Inherited: 0xeb0)
struct ABP_CharacterModel_C : ABP_CharacterModelBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xeb0(0x08)
	struct UWidgetComponent* HeadWidget; // 0xeb8(0x08)
	int32_t ModelCharacterID; // 0xec0(0x04)
	float Arm Target Near Length; // 0xec4(0x04)
	float Arm Target Long Length; // 0xec8(0x04)
	struct FVector Arm Target Near Location; // 0xecc(0x0c)
	struct FVector Arm Target Long Location; // 0xed8(0x0c)
	float Axis Value; // 0xee4(0x04)
	float TargetArmCurLength; // 0xee8(0x04)
	struct FVector TargetCurOffSet; // 0xeec(0x0c)
	bool MouseWheelAxis; // 0xef8(0x01)
	bool InputAxisLookUP; // 0xef9(0x01)
	bool InputAxisTurn; // 0xefa(0x01)
	char pad_EFB[0x5]; // 0xefb(0x05)
	struct FString Name; // 0xf00(0x10)
	bool RightShoulder; // 0xf10(0x01)

	void BPI_Get_CameraParameters(float TP_FOV, float FP_FOV, bool RightShoulder); // Function BP_CharacterModel.BP_CharacterModel_C.BPI_Get_CameraParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FVector BPI_Get_FP_CameraTarget(); // Function BP_CharacterModel.BP_CharacterModel_C.BPI_Get_FP_CameraTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FTransform BPI_Get_3P_PivotTarget(); // Function BP_CharacterModel.BP_CharacterModel_C.BPI_Get_3P_PivotTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_3P_TraceParams(struct FVector TraceOrigin, float TraceRadius, enum class ETraceTypeQuery TraceChannel, bool isPi, bool isprint, bool isignore); // Function BP_CharacterModel.BP_CharacterModel_C.BPI_Get_3P_TraceParams // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOtherCamera(bool isother, struct FRotator Rotator); // Function BP_CharacterModel.BP_CharacterModel_C.SetOtherCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool CanInteract(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_CharacterModel.BP_CharacterModel_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	enum class EInteractType GetInteractType(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_CharacterModel.BP_CharacterModel_C.GetInteractType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool OnInteractTargetUpdate(bool IsFocus, struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_CharacterModel.BP_CharacterModel_C.OnInteractTargetUpdate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCineCamera(float Focus Settings Manual Focus Distance); // Function BP_CharacterModel.BP_CharacterModel_C.SetCineCamera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetAnimInstanceClass(); // Function BP_CharacterModel.BP_CharacterModel_C.SetAnimInstanceClass // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCharacterArm(); // Function BP_CharacterModel.BP_CharacterModel_C.SetCharacterArm // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHeadWidgetLocation(); // Function BP_CharacterModel.BP_CharacterModel_C.SetHeadWidgetLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren); // Function BP_CharacterModel.BP_CharacterModel_C.SetHiddenInGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOpenState(bool bEnabled); // Function BP_CharacterModel.BP_CharacterModel_C.SetOpenState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetSkin(int32_t ID); // Function BP_CharacterModel.BP_CharacterModel_C.SetSkin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UserConstructionScript(); // Function BP_CharacterModel.BP_CharacterModel_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInteractFailed(struct ACharacter* InteractChar); // Function BP_CharacterModel.BP_CharacterModel_C.OnInteractFailed // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInteractSuc(struct ACharacter* Character, int32_t InteractIndex); // Function BP_CharacterModel.BP_CharacterModel_C.OnInteractSuc // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnStartInteract(struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_CharacterModel.BP_CharacterModel_C.OnStartInteract // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_2(float AxisValue); // Function BP_CharacterModel.BP_CharacterModel_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue); // Function BP_CharacterModel.BP_CharacterModel_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1 // (BlueprintEvent) // @ game+0x1ec38f0
	void Initialize(int32_t CharacterID); // Function BP_CharacterModel.BP_CharacterModel_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsAlsCamera(bool isALSMode); // Function BP_CharacterModel.BP_CharacterModel_C.SetIsAlsCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_1(float AxisValue); // Function BP_CharacterModel.BP_CharacterModel_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_1 // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_CharacterModel.BP_CharacterModel_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_CharacterModel.BP_CharacterModel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_CharacterModel(int32_t EntryPoint); // Function BP_CharacterModel.BP_CharacterModel_C.ExecuteUbergraph_BP_CharacterModel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

