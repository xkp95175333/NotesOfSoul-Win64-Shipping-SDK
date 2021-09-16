// BlueprintGeneratedClass BP_LobbyCharacter.BP_LobbyCharacter_C
// Size: 0xfe8 (Inherited: 0xeb0)
struct ABP_LobbyCharacter_C : ANOS_LobbyCharacter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xeb0(0x08)
	struct UMediaSoundComponent* MediaSound; // 0xeb8(0x08)
	struct UCineCameraComponent* CineCamera; // 0xec0(0x08)
	struct UChildActorComponent* BP_DisplayLight; // 0xec8(0x08)
	struct UCameraComponent* FPSCamera; // 0xed0(0x08)
	struct USpringArmComponent* FPSArm; // 0xed8(0x08)
	struct UStaticMeshComponent* Luopan; // 0xee0(0x08)
	struct USkeletalMeshComponent* SK_xiaohong_hair; // 0xee8(0x08)
	struct USkeletalMeshComponent* SK_XiaoHong_Initial; // 0xef0(0x08)
	struct USpringArmComponent* SpringArm; // 0xef8(0x08)
	float Anim; // 0xf00(0x04)
	char pad_F04[0x4]; // 0xf04(0x04)
	struct UWBP_InteractDefault_C* InteractNotify; // 0xf08(0x08)
	struct AActor* CurInteractActor; // 0xf10(0x08)
	struct UWBP_SetPanel_C* SetPanel; // 0xf18(0x08)
	struct UWBP_FriendMain_C* WBP_FriendMain; // 0xf20(0x08)
	struct AActor* 3DUIPrefabTest; // 0xf28(0x08)
	bool bCanUseLuoPan; // 0xf30(0x01)
	bool bCanMining; // 0xf31(0x01)
	char pad_F32[0x2]; // 0xf32(0x02)
	int32_t PlantID; // 0xf34(0x04)
	enum class Enum_PlantMode CollectMode; // 0xf38(0x01)
	char pad_F39[0x3]; // 0xf39(0x03)
	float FocusTotalTime; // 0xf3c(0x04)
	struct UBP_Plant_C* BP_Plant; // 0xf40(0x08)
	bool IsController; // 0xf48(0x01)
	char pad_F49[0x7]; // 0xf49(0x07)
	struct UWBP_EditNickname_C* WBP_EditName; // 0xf50(0x08)
	struct UWBP_SettingMain_C* WBP_Setting; // 0xf58(0x08)
	bool IsOnStartMatchSelection; // 0xf60(0x01)
	char pad_F61[0x7]; // 0xf61(0x07)
	struct UAudioComponent* AudioCom; // 0xf68(0x08)
	struct UWBP_ChatFrame_C* WBP_ChatFrame; // 0xf70(0x08)
	struct TArray<struct FString> SensitiveWords; // 0xf78(0x10)
	struct TMap<int32_t, struct FArmTransformStruct> CharacterArmTransformMap; // 0xf88(0x50)
	struct UBP_FriendMain_C* BP_FriendMain; // 0xfd8(0x08)
	struct UBP_ChatMain_C* BP_ChatMain; // 0xfe0(0x08)

	void BPI_Get_CurrentStates(enum class EMovementMode PawnMovementMode, enum class ALS_MovementState MovementState, enum class ALS_MovementAction MovementAction, enum class ALS_RotationMode RotationMode, enum class ALS_Gait ActualGait, enum class ALS_Stance ActualStance, enum class ALS_ViewMode ViewMode, enum class ALS_OverlayState overlaystate, enum class ALS_State Injured, enum class Als_AimState Aimstate, bool IsMan, enum class ECameraType Camerastate, enum class ECameraOverlapType CameraOverLapType, bool NewCameraSetting); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.BPI_Get_CurrentStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_EssentialValues(struct FVector Velocity, struct FVector Acceleration, struct FVector MovementInput, bool IsMoving, bool HasMovementInput, float Speed, float MovementInputAmount, struct FRotator AimingRotation, float AimYawRate, bool rotateL, bool rotater, int32_t AnimInt, bool EnbaleMove); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.BPI_Get_EssentialValues // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetCharacterBianShen(); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.SetCharacterBianShen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResetArmTransfrom(); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.ResetArmTransfrom // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Mesh Hidden In Game(bool NewHidden, bool bPropagateToChildren); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.Set Mesh Hidden In Game // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayNewBGM(struct USoundBase* Sound); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.PlayNewBGM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateUI(); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.CreateUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowOrHideUI(struct UUserWidget* UI, bool UIModeOnly); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.ShowOrHideUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseLuoPan(bool bSwitchThirdViewAndLuoPan); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.CloseLuoPan // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UserConstructionScript(); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Escape_K2Node_InputKeyEvent_3(struct FKey Key); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.InpActEvt_Escape_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_R_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.InpActEvt_R_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementAction(enum class ALS_MovementAction NewMovementAction); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.BPI_Set_MovementAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_RotationMode(enum class ALS_RotationMode NewRotationMode); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.BPI_Set_RotationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementState(enum class ALS_MovementState NewMovementState); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.BPI_Set_MovementState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_Gait(enum class ALS_Gait NewGait); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.BPI_Set_Gait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_ViewMode(enum class ALS_ViewMode NewViewMode); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.BPI_Set_ViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_OverlayState(enum class ALS_OverlayState NewOverlayState); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.BPI_Set_OverlayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_3(float AxisValue); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_3 // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_4 // (BlueprintEvent) // @ game+0x1ec38f0
	void NoticeBPAsyncLoadBaseDressCompeleted(); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.NoticeBPAsyncLoadBaseDressCompeleted // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void EventChangeBaseDress(); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.EventChangeBaseDress // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitPlay(); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.InitPlay // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void CheckNickname(); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.CheckNickname // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_LobbyCharacter(int32_t EntryPoint); // Function BP_LobbyCharacter.BP_LobbyCharacter_C.ExecuteUbergraph_BP_LobbyCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

