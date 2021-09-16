// BlueprintGeneratedClass BP_PlayerHumanBase.BP_PlayerHumanBase_C
// Size: 0x2f29 (Inherited: 0x1d60)
struct ABP_PlayerHumanBase_C : ANOS_PlayerHuman {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d60(0x08)
	struct UPostProcessComponent* PostProcessLRS; // 0x1d68(0x08)
	struct UCapsuleComponent* PhysicsCollision; // 0x1d70(0x08)
	struct UPostProcessComponent* PostProcess; // 0x1d78(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x1d80(0x08)
	struct UWidgetComponent* Widget; // 0x1d88(0x08)
	struct UArrowComponent* Arrow1; // 0x1d90(0x08)
	float Timeline_TerritoryDebuff_Value_84A9EB2E4CD67164BBAFA698EB379E9F; // 0x1d98(0x04)
	enum class ETimelineDirection Timeline_TerritoryDebuff__Direction_84A9EB2E4CD67164BBAFA698EB379E9F; // 0x1d9c(0x01)
	char pad_1D9D[0x3]; // 0x1d9d(0x03)
	struct UTimelineComponent* Timeline_TerritoryDebuff; // 0x1da0(0x08)
	float bian_NewTrack_0_32594BD04E027DA3C3EFA7B4ADC4E220; // 0x1da8(0x04)
	enum class ETimelineDirection bian__Direction_32594BD04E027DA3C3EFA7B4ADC4E220; // 0x1dac(0x01)
	char pad_1DAD[0x3]; // 0x1dad(0x03)
	struct UTimelineComponent* bian; // 0x1db0(0x08)
	float Timeline_DeactiveObservedCamera_Alpha_D50CA4094128584ADA1BAC8F95FE3E5C; // 0x1db8(0x04)
	enum class ETimelineDirection Timeline_DeactiveObservedCamera__Direction_D50CA4094128584ADA1BAC8F95FE3E5C; // 0x1dbc(0x01)
	char pad_1DBD[0x3]; // 0x1dbd(0x03)
	struct UTimelineComponent* Timeline_DeactiveObservedCamera; // 0x1dc0(0x08)
	float InteractTurnTimeLine_NewTrack_0_5B4588CE4F76C5BBDD7675B3CD47C4FC; // 0x1dc8(0x04)
	enum class ETimelineDirection InteractTurnTimeLine__Direction_5B4588CE4F76C5BBDD7675B3CD47C4FC; // 0x1dcc(0x01)
	char pad_1DCD[0x3]; // 0x1dcd(0x03)
	struct UTimelineComponent* InteractTurnTimeLine; // 0x1dd0(0x08)
	float SteathTimeline_stealthlerp_EA1260BC4D5E051EA2FAC192B832610D; // 0x1dd8(0x04)
	enum class ETimelineDirection SteathTimeline__Direction_EA1260BC4D5E051EA2FAC192B832610D; // 0x1ddc(0x01)
	char pad_1DDD[0x3]; // 0x1ddd(0x03)
	struct UTimelineComponent* SteathTimeline; // 0x1de0(0x08)
	float AimCameraMove_Alpha_571E2E7E42222008B2D585B728401826; // 0x1de8(0x04)
	enum class ETimelineDirection AimCameraMove__Direction_571E2E7E42222008B2D585B728401826; // 0x1dec(0x01)
	char pad_1DED[0x3]; // 0x1ded(0x03)
	struct UTimelineComponent* AimCameraMove; // 0x1df0(0x08)
	float Valuttimeline_BlendCamera_2D5EF34248B90300C8C217AFEB344E71; // 0x1df8(0x04)
	float Valuttimeline_twoblendin_2D5EF34248B90300C8C217AFEB344E71; // 0x1dfc(0x04)
	float Valuttimeline_oneBlendin_2D5EF34248B90300C8C217AFEB344E71; // 0x1e00(0x04)
	enum class ETimelineDirection Valuttimeline__Direction_2D5EF34248B90300C8C217AFEB344E71; // 0x1e04(0x01)
	char pad_1E05[0x3]; // 0x1e05(0x03)
	struct UTimelineComponent* Valuttimeline; // 0x1e08(0x08)
	float CametaSwitch_lerpfloat_B126D55F431494D9B4F6578C9FDE6F53; // 0x1e10(0x04)
	enum class ETimelineDirection CametaSwitch__Direction_B126D55F431494D9B4F6578C9FDE6F53; // 0x1e14(0x01)
	char pad_1E15[0x3]; // 0x1e15(0x03)
	struct UTimelineComponent* CametaSwitch; // 0x1e18(0x08)
	float Timeline_0_NewTrack_0_21E4909149CAE3E87F8E05B34A99F0AD; // 0x1e20(0x04)
	enum class ETimelineDirection Timeline_0__Direction_21E4909149CAE3E87F8E05B34A99F0AD; // 0x1e24(0x01)
	char pad_1E25[0x3]; // 0x1e25(0x03)
	struct UTimelineComponent* Timeline_1; // 0x1e28(0x08)
	float Mantletineline_blendthree_99739B5143F5F6B1E1F279820A0DB761; // 0x1e30(0x04)
	float Mantletineline_Blendin_99739B5143F5F6B1E1F279820A0DB761; // 0x1e34(0x04)
	enum class ETimelineDirection Mantletineline__Direction_99739B5143F5F6B1E1F279820A0DB761; // 0x1e38(0x01)
	char pad_1E39[0x7]; // 0x1e39(0x07)
	struct UTimelineComponent* Mantletineline; // 0x1e40(0x08)
	float FlashlightAimingTimeline_Value_07A7692E4D6761458B3504B3C96B5B88; // 0x1e48(0x04)
	enum class ETimelineDirection FlashlightAimingTimeline__Direction_07A7692E4D6761458B3504B3C96B5B88; // 0x1e4c(0x01)
	char pad_1E4D[0x3]; // 0x1e4d(0x03)
	struct UTimelineComponent* FlashlightAimingTimeline; // 0x1e50(0x08)
	struct FLinearColor ElementColor; // 0x1e58(0x10)
	enum class ALS_MovementState MovementState; // 0x1e68(0x01)
	enum class ALS_MovementState PreviousMovementState; // 0x1e69(0x01)
	char pad_1E6A[0x2]; // 0x1e6a(0x02)
	struct FVector PreviousVelocity; // 0x1e6c(0x0c)
	float PreviousAimYaw; // 0x1e78(0x04)
	enum class NOS_GlideState GlideState; // 0x1e7c(0x01)
	char pad_1E7D[0x3]; // 0x1e7d(0x03)
	struct UKxInteractBoxComponent* InteractTarget; // 0x1e80(0x08)
	float InitialFOV; // 0x1e88(0x04)
	float AimingFOV; // 0x1e8c(0x04)
	struct FAls_HumanOverlapState OverlapState; // 0x1e90(0x02)
	char pad_1E92[0x2]; // 0x1e92(0x02)
	struct FMantle_TraceSettings Ground Trace Setting; // 0x1e94(0x14)
	struct FMantle_Params Mantleparams; // 0x1ea8(0x28)
	struct FALS_ComponentAndTransform Mantle Ledge Ls; // 0x1ed0(0x40)
	struct FTransform Mantle Target; // 0x1f10(0x30)
	struct FTransform Mantle actual Start Offset; // 0x1f40(0x30)
	struct FTransform mantle animated start offset; // 0x1f70(0x30)
	struct FMantle_Asset Mantle 2m Default; // 0x1fa0(0x38)
	struct FMantle_Asset Mnatle 1mdefault; // 0x1fd8(0x38)
	struct FTransform LerpTransform; // 0x2010(0x30)
	struct FTransform LastLerpTransform; // 0x2040(0x30)
	struct FMantle_TraceSettings Fill trace seeting; // 0x2070(0x14)
	struct FVector Location; // 0x2084(0x0c)
	struct FRotator Rotation; // 0x2090(0x0c)
	bool Ragdoll onGround; // 0x209c(0x01)
	enum class ALS_OverlayState overlaystate; // 0x209d(0x01)
	char pad_209E[0x2]; // 0x209e(0x02)
	struct UAnimMontage* GetUp Front Default; // 0x20a0(0x08)
	struct UAnimMontage* Get up Back Default; // 0x20a8(0x08)
	bool RagdollFaceup; // 0x20b0(0x01)
	char pad_20B1[0x3]; // 0x20b1(0x03)
	struct FVector Last Ragdoll Velocity; // 0x20b4(0x0c)
	bool IsMan; // 0x20c0(0x01)
	enum class Als_AimState Aimstate; // 0x20c1(0x01)
	enum class ALS_RotationMode Rotation mode; // 0x20c2(0x01)
	char pad_20C3[0x1]; // 0x20c3(0x01)
	float Airlocation; // 0x20c4(0x04)
	struct TArray<int32_t> StelathArray; // 0x20c8(0x10)
	bool IsStealth; // 0x20d8(0x01)
	char pad_20D9[0x3]; // 0x20d9(0x03)
	int32_t HumanID; // 0x20dc(0x04)
	struct TArray<struct AActor*> OutLineGroundProp; // 0x20e0(0x10)
	struct UMaterialInstanceDynamic* DynamicPostMaterial; // 0x20f0(0x08)
	bool IsCompassTmpState; // 0x20f8(0x01)
	char pad_20F9[0x7]; // 0x20f9(0x07)
	struct TMap<int32_t, struct UMaterialInterface*> MehsMaterial; // 0x2100(0x50)
	struct TMap<int32_t, struct UMaterialInterface*> ClothMaterial; // 0x2150(0x50)
	struct TMap<int32_t, struct UMaterialInterface*> HairMaterial; // 0x21a0(0x50)
	struct FCameraSettings PrevtCameraSetting; // 0x21f0(0x50)
	struct FCameraSettings DefaultCameraSetting; // 0x2240(0x50)
	struct FMantle_TraceSettings ValutTraceSetting; // 0x2290(0x14)
	char pad_22A4[0xc]; // 0x22a4(0x0c)
	struct FTransform ValutTargetTransform; // 0x22b0(0x30)
	struct FValut_Asset ValutAsset; // 0x22e0(0x40)
	struct FTransform Valut Actual Start Tranform; // 0x2320(0x30)
	struct FTransform ValutAnimation; // 0x2350(0x30)
	struct FTransform ValutNextTarget; // 0x2380(0x30)
	enum class ALS_MovementAction MoveAction; // 0x23b0(0x01)
	enum class EHealthState TempHealthState; // 0x23b1(0x01)
	char pad_23B2[0x2]; // 0x23b2(0x02)
	int32_t SprintKeyPressTime; // 0x23b4(0x04)
	struct TMap<char, struct FCameraSettings> CameraSetting; // 0x23b8(0x50)
	struct ABP_PlayerHumanBase_C* CureHuman; // 0x2408(0x08)
	int32_t LoseShiGouRemainingTime; // 0x2410(0x04)
	char pad_2414[0x4]; // 0x2414(0x04)
	struct FTimerHandle DecreaseTimer; // 0x2418(0x08)
	struct FRotator OriginalRotation; // 0x2420(0x0c)
	struct FRotator TargetRotation; // 0x242c(0x0c)
	struct FRotator OriginalControlRotation; // 0x2438(0x0c)
	struct FVector TargetRagDollLocation; // 0x2444(0x0c)
	struct FMulticastInlineDelegate OnOutLine; // 0x2450(0x10)
	struct AActor* wallActor; // 0x2460(0x08)
	float OriginalCapsuleHalfHeight; // 0x2468(0x04)
	struct FVector MeshOriginalRelativeLocation; // 0x246c(0x0c)
	bool Rotate_L; // 0x2478(0x01)
	bool Rotate_R; // 0x2479(0x01)
	char pad_247A[0x2]; // 0x247a(0x02)
	float RotateMinThreshold; // 0x247c(0x04)
	float RotateMaxThreshold; // 0x2480(0x04)
	char pad_2484[0x4]; // 0x2484(0x04)
	struct UWBP_QuickToSpeak_C* QuickToSpeak; // 0x2488(0x08)
	struct FTimerHandle Timehandel; // 0x2490(0x08)
	struct FRotator FlashNormalRotator; // 0x2498(0x0c)
	struct FRotator FlashDamaged Rotator; // 0x24a4(0x0c)
	struct FALS_CameraSettingGroup cameragroup; // 0x24b0(0xf0)
	struct FVector OriginalLocation; // 0x25a0(0x0c)
	struct FVector OriginalInteractBoxExtent; // 0x25ac(0x0c)
	struct UWBP_SettingMain_C* SettingBoard; // 0x25b8(0x08)
	struct FRotator MeshOriginalRelativeRotation; // 0x25c0(0x0c)
	char pad_25CC[0x4]; // 0x25cc(0x04)
	struct TMap<int32_t, struct UMaterialInterface*> ConjoinedBodyCompMat; // 0x25d0(0x50)
	struct TMap<int32_t, struct UMaterialInterface*> LowerClothComMat; // 0x2620(0x50)
	struct TMap<int32_t, struct UMaterialInterface*> HeadComMat; // 0x2670(0x50)
	struct TMap<int32_t, struct UMaterialInterface*> FaceCommat; // 0x26c0(0x50)
	struct TMap<int32_t, struct UMaterialInterface*> BackComMat; // 0x2710(0x50)
	struct TMap<int32_t, struct UMaterialInterface*> ShoesComMat; // 0x2760(0x50)
	struct TArray<struct USkeletalMeshComponent*> DefalutsMeshes; // 0x27b0(0x10)
	struct TArray<struct FName> MeshMaterialNames; // 0x27c0(0x10)
	struct TArray<struct UMaterialInterface*> SkeletalMeshMaterials; // 0x27d0(0x10)
	struct FRotator gangrotaionoffset; // 0x27e0(0x0c)
	float ideatime; // 0x27ec(0x04)
	struct ABP_PlayerHumanBase_C* PullHuman; // 0x27f0(0x08)
	int32_t GetAutoNum; // 0x27f8(0x04)
	char pad_27FC[0x4]; // 0x27fc(0x04)
	struct UKxInventoryObject* CurHandItem; // 0x2800(0x08)
	struct TArray<enum class EObjectTypeQuery> TrackType; // 0x2808(0x10)
	bool RightShoulder; // 0x2818(0x01)
	char pad_2819[0x7]; // 0x2819(0x07)
	struct UUserWidget* Cameraui; // 0x2820(0x08)
	bool isPowerJump; // 0x2828(0x01)
	char pad_2829[0x3]; // 0x2829(0x03)
	struct FMantle_TraceSettings Fill Valut Trace Settings; // 0x282c(0x14)
	int32_t AniminstanceInt; // 0x2840(0x04)
	struct FVector StartPos; // 0x2844(0x0c)
	struct FCalibrationOffset biaoqing; // 0x2850(0xd8)
	struct TArray<struct UMaterialInstanceDynamic*> PiBianMatBlend; // 0x2928(0x10)
	struct USkeletalMesh* Pi; // 0x2938(0x08)
	struct USkeletalMesh* Default; // 0x2940(0x08)
	struct TArray<struct UMaterialInterface*> MeshMatrails; // 0x2948(0x10)
	bool bAutoMove; // 0x2958(0x01)
	char pad_2959[0x7]; // 0x2959(0x07)
	struct TArray<struct FName> PibianMname; // 0x2960(0x10)
	struct TMap<struct FName, struct UMaterialInstance*> Name; // 0x2970(0x50)
	struct FPostProcessSettings CameraPostseeting; // 0x29c0(0x550)
	int32_t GC_TerritoryDebuffCount; // 0x2f10(0x04)
	char pad_2F14[0x4]; // 0x2f14(0x04)
	struct UPostProcessComponent* PPC_TerritoryDebuff; // 0x2f18(0x08)
	struct UMaterialInstanceDynamic* DMI_TerritoryDebuff; // 0x2f20(0x08)
	bool DisableMove; // 0x2f28(0x01)

	void SetOtherCamera(bool isother, struct FRotator Rotator); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SetOtherCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_CameraParameters(float TP_FOV, float FP_FOV, bool RightShoulder); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.BPI_Get_CameraParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FVector BPI_Get_FP_CameraTarget(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.BPI_Get_FP_CameraTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FTransform BPI_Get_3P_PivotTarget(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.BPI_Get_3P_PivotTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_3P_TraceParams(struct FVector TraceOrigin, float TraceRadius, enum class ETraceTypeQuery TraceChannel, bool isPi, bool isprint, bool isignore); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.BPI_Get_3P_TraceParams // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_CurrentStates(enum class EMovementMode PawnMovementMode, enum class ALS_MovementState MovementState, enum class ALS_MovementAction MovementAction, enum class ALS_RotationMode RotationMode, enum class ALS_Gait ActualGait, enum class ALS_Stance ActualStance, enum class ALS_ViewMode ViewMode, enum class ALS_OverlayState overlaystate, enum class ALS_State Injured, enum class Als_AimState Aimstate, bool IsMan, enum class ECameraType Camerastate, enum class ECameraOverlapType CameraOverLapType, bool NewCameraSetting); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.BPI_Get_CurrentStates // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_EssentialValues(struct FVector Velocity, struct FVector Acceleration, struct FVector MovementInput, bool IsMoving, bool HasMovementInput, float Speed, float MovementInputAmount, struct FRotator AimingRotation, float AimYawRate, bool rotateL, bool rotater, int32_t AnimInt, bool EnbaleMove); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.BPI_Get_EssentialValues // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Add Marking Point Dir(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Add Marking Point Dir // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Get be Hit Montage(struct UAnimMontage* Montage); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Get be Hit Montage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ResisCharact(struct ANOS_PlayerBase* Player, float Len); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ResisCharact // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init Phy Sics Body(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Init Phy Sics Body // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SkipSeppch(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SkipSeppch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetAudioIconLight(bool IsLight); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SetAudioIconLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void JoinSpectator_LangRenSha(struct FEventRelevantData EventRelevantData); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.JoinSpectator_LangRenSha // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void JoinSpectator_Common(struct FEventRelevantData EventRelevantData); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.JoinSpectator_Common // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetAutoMoveEnable(bool bEnable); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SetAutoMoveEnable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TickAutoMove(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.TickAutoMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool OnInteractTargetUpdate(bool IsFocus, struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnInteractTargetUpdate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SaveMeshMat(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SaveMeshMat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetFangpiMat(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SetFangpiMat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateBianshenMa(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.CreateBianshenMa // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetGogen(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SetGogen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchLod(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SwitchLod // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchPI(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SwitchPI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BeginPlay_XiaoPiControl(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.BeginPlay_XiaoPiControl // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void stopidle(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.stopidle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void savebiaoqing(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.savebiaoqing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AimTurn(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.AimTurn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Checkfuqiang(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Checkfuqiang // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameOver(enum class EKxGameStateType GameType); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnGameOver // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetNextItem(struct UKxInventoryObject* NextItem); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.GetNextItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowUIVFX(struct UKxInventoryObject* Object, bool IsActive); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ShowUIVFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChangCameraType(char CameraType); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ChangCameraType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RemoveOutLineAndCameraOffset(enum class EHealthState HealthState); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.RemoveOutLineAndCameraOffset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ChildStealth(bool isvisable); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ChildStealth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Check Valut by Server(struct FVector Trace Norml, struct FVector Tracepoint, bool IsValut); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Check Valut by Server // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Update Valut(float blend in one, float blend in two, float blendthree); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Update Valut // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Valut Start(struct FTransform ValutTranform, float FloatZ); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Valut Start // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckValut(struct FMantle_TraceSettings ValutTraceSettings, bool IsValut); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.CheckValut // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CameraSwitch(bool IsHigh); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.CameraSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Set Default Material(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Set Default Material // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetStealthMaterial(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SetStealthMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SaveDefaultMaterial(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SaveDefaultMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DisplayHumanType(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.DisplayHumanType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetDynamicPostMaterial(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SetDynamicPostMaterial // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TraceGroundProp(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.TraceGroundProp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchOnSteData(int32_t ID, struct UDataTable* NewParam); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SwitchOnSteData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnRep_IsStealth(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnRep_IsStealth // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Stealth(float stealthvalue); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Stealth // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetActorLocationDuringRagdoll(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SetActorLocationDuringRagdoll // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateRagdoll(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.UpdateRagdoll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetUpAnimation(bool Rogdoll Faceuo, struct UAnimMontage* upmontage); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.GetUpAnimation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void RagdollEnd(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.RagdollEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Ragdoll Start(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Ragdoll Start // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MantleEnd(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.MantleEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_LerpTransform(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnRep_LerpTransform // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MantleUpdate(float BlendIn, float camerablend); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.MantleUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetMantleAsset(enum class MantleType MantleType, struct FMantle_Asset Value); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.GetMantleAsset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void MantleStart(float Mantle Height, struct FALS_ComponentAndTransform Mantle ledge Ws, enum class MantleType Mantle Type); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.MantleStart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HasroomCheck(struct FVector TargetLocation, bool has room); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.HasroomCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Get Capsule half hight(float zoffsrt, struct FVector BaseLocation, struct FVector Value); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Get Capsule half hight // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Get Movement Input(struct FVector MovementInput); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Get Movement Input // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Get Capsule Base Location(float ZOffset, struct FVector Value); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Get Capsule Base Location // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Check Mantle(struct FMantle_TraceSettings Trace Setting, bool Vault, bool isclimb); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Check Mantle // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LimitRotation(float MaxYaw, float MinYaw, float interspeed); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.LimitRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnMovementStateChanged(enum class ALS_MovementState NewMovementState); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnMovementStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCharacterMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnCharacterMovementModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__FinishedFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__UpdateFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void CametaSwitch__FinishedFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.CametaSwitch__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void CametaSwitch__UpdateFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.CametaSwitch__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Valuttimeline__FinishedFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Valuttimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Valuttimeline__UpdateFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Valuttimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void AimCameraMove__FinishedFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.AimCameraMove__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void AimCameraMove__UpdateFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.AimCameraMove__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void SteathTimeline__FinishedFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SteathTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void SteathTimeline__UpdateFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SteathTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void InteractTurnTimeLine__FinishedFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.InteractTurnTimeLine__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void InteractTurnTimeLine__UpdateFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.InteractTurnTimeLine__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Mantletineline__FinishedFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Mantletineline__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Mantletineline__UpdateFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Mantletineline__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_DeactiveObservedCamera__FinishedFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Timeline_DeactiveObservedCamera__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_DeactiveObservedCamera__UpdateFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Timeline_DeactiveObservedCamera__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void bian__FinishedFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.bian__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void bian__UpdateFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.bian__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_TerritoryDebuff__FinishedFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Timeline_TerritoryDebuff__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_TerritoryDebuff__UpdateFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Timeline_TerritoryDebuff__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void FlashlightAimingTimeline__FinishedFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.FlashlightAimingTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void FlashlightAimingTimeline__UpdateFunc(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.FlashlightAimingTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_A3ACBD8B41BCDEE517C68583A163C85C(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyEnd_A3ACBD8B41BCDEE517C68583A163C85C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_A3ACBD8B41BCDEE517C68583A163C85C(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyBegin_A3ACBD8B41BCDEE517C68583A163C85C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_A3ACBD8B41BCDEE517C68583A163C85C(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnInterrupted_A3ACBD8B41BCDEE517C68583A163C85C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_A3ACBD8B41BCDEE517C68583A163C85C(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnBlendOut_A3ACBD8B41BCDEE517C68583A163C85C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_A3ACBD8B41BCDEE517C68583A163C85C(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnCompleted_A3ACBD8B41BCDEE517C68583A163C85C // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_09CA4188483921387A7E1CA543D0B74D(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyEnd_09CA4188483921387A7E1CA543D0B74D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_09CA4188483921387A7E1CA543D0B74D(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyBegin_09CA4188483921387A7E1CA543D0B74D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_09CA4188483921387A7E1CA543D0B74D(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnInterrupted_09CA4188483921387A7E1CA543D0B74D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_09CA4188483921387A7E1CA543D0B74D(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnBlendOut_09CA4188483921387A7E1CA543D0B74D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_09CA4188483921387A7E1CA543D0B74D(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnCompleted_09CA4188483921387A7E1CA543D0B74D // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_E61B8BF04CF30670E924BEA14A901CE0(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyEnd_E61B8BF04CF30670E924BEA14A901CE0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_E61B8BF04CF30670E924BEA14A901CE0(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyBegin_E61B8BF04CF30670E924BEA14A901CE0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_E61B8BF04CF30670E924BEA14A901CE0(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnInterrupted_E61B8BF04CF30670E924BEA14A901CE0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_E61B8BF04CF30670E924BEA14A901CE0(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnBlendOut_E61B8BF04CF30670E924BEA14A901CE0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_E61B8BF04CF30670E924BEA14A901CE0(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnCompleted_E61B8BF04CF30670E924BEA14A901CE0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_4FC3854A4C35CA37F31C6BB4F310C723(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyEnd_4FC3854A4C35CA37F31C6BB4F310C723 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_4FC3854A4C35CA37F31C6BB4F310C723(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyBegin_4FC3854A4C35CA37F31C6BB4F310C723 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_4FC3854A4C35CA37F31C6BB4F310C723(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnInterrupted_4FC3854A4C35CA37F31C6BB4F310C723 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_4FC3854A4C35CA37F31C6BB4F310C723(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnBlendOut_4FC3854A4C35CA37F31C6BB4F310C723 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_4FC3854A4C35CA37F31C6BB4F310C723(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnCompleted_4FC3854A4C35CA37F31C6BB4F310C723 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_93CEB5DE42E2494A57E6A9AA2E4D0C38(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyEnd_93CEB5DE42E2494A57E6A9AA2E4D0C38 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_93CEB5DE42E2494A57E6A9AA2E4D0C38(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyBegin_93CEB5DE42E2494A57E6A9AA2E4D0C38 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_93CEB5DE42E2494A57E6A9AA2E4D0C38(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnInterrupted_93CEB5DE42E2494A57E6A9AA2E4D0C38 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_93CEB5DE42E2494A57E6A9AA2E4D0C38(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnBlendOut_93CEB5DE42E2494A57E6A9AA2E4D0C38 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_93CEB5DE42E2494A57E6A9AA2E4D0C38(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnCompleted_93CEB5DE42E2494A57E6A9AA2E4D0C38 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_E2B608ED43F47EA24FB838A4FB31713A(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyEnd_E2B608ED43F47EA24FB838A4FB31713A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_E2B608ED43F47EA24FB838A4FB31713A(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyBegin_E2B608ED43F47EA24FB838A4FB31713A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_E2B608ED43F47EA24FB838A4FB31713A(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnInterrupted_E2B608ED43F47EA24FB838A4FB31713A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_E2B608ED43F47EA24FB838A4FB31713A(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnBlendOut_E2B608ED43F47EA24FB838A4FB31713A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_E2B608ED43F47EA24FB838A4FB31713A(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnCompleted_E2B608ED43F47EA24FB838A4FB31713A // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_728DD666449F071BD28AB7A222FD329F(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyEnd_728DD666449F071BD28AB7A222FD329F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_728DD666449F071BD28AB7A222FD329F(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyBegin_728DD666449F071BD28AB7A222FD329F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_728DD666449F071BD28AB7A222FD329F(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnInterrupted_728DD666449F071BD28AB7A222FD329F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_728DD666449F071BD28AB7A222FD329F(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnBlendOut_728DD666449F071BD28AB7A222FD329F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_728DD666449F071BD28AB7A222FD329F(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnCompleted_728DD666449F071BD28AB7A222FD329F // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_BF1AF91146DA09D46C5E08899FFFD353(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyEnd_BF1AF91146DA09D46C5E08899FFFD353 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_BF1AF91146DA09D46C5E08899FFFD353(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNotifyBegin_BF1AF91146DA09D46C5E08899FFFD353 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_BF1AF91146DA09D46C5E08899FFFD353(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnInterrupted_BF1AF91146DA09D46C5E08899FFFD353 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_BF1AF91146DA09D46C5E08899FFFD353(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnBlendOut_BF1AF91146DA09D46C5E08899FFFD353 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_BF1AF91146DA09D46C5E08899FFFD353(struct FName NotifyName); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnCompleted_BF1AF91146DA09D46C5E08899FFFD353 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Human_KeyboardQ_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.InpActEvt_Human_KeyboardQ_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Y_K2Node_InputKeyEvent_7(struct FKey Key); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.InpActEvt_Y_K2Node_InputKeyEvent_7 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Enter_K2Node_InputKeyEvent_6(struct FKey Key); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.InpActEvt_Enter_K2Node_InputKeyEvent_6 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Subtract_K2Node_InputKeyEvent_5(struct FKey Key); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.InpActEvt_Subtract_K2Node_InputKeyEvent_5 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Alt+Shift_F9_K2Node_InputKeyEvent_4(struct FKey Key); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.InpActEvt_Alt+Shift_F9_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Alt+Shift_F7_K2Node_InputKeyEvent_3(struct FKey Key); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.InpActEvt_Alt+Shift_F7_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Alt+Shift_F8_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.InpActEvt_Alt+Shift_F8_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1ec38f0
	void InpActEvt_Alt+Shift_F10_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.InpActEvt_Alt+Shift_F10_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1ec38f0
	void Climb(float Mantle Height, struct FALS_ComponentAndTransform Mantle ledge Ws, enum class MantleType Mantle Type); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Climb // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementState(enum class ALS_MovementState NewMovementState); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.BPI_Set_MovementState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Climb montage(enum class MantleType MantleType, float Mantle); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Climb montage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteJumpAbility(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ExecuteJumpAbility // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void LerpLocation(struct FVector Location, struct FRotator NewRotation); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.LerpLocation // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void RogdollMul(bool issimulate, bool ismontage); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.RogdollMul // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RolldollS(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.RolldollS // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RolldollEnd(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.RolldollEnd // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnJumped(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnJumped // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_TmpStopCompass(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Multi_TmpStopCompass // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ValutMontage(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ValutMontage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Rpc_Valut(struct FTransform valut, float FloatZ); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Rpc_Valut // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Client_AimCameraMove(bool IsPlayForward); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Client_AimCameraMove // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameStateUpdated_Event_1(enum class EKxGameStateType CurType); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnGameStateUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MainTalentCDTipUI(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.MainTalentCDTipUI // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Pull_Multicast(bool Collapse); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Pull_Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MultiJump(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.MultiJump // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Target(struct UKxInventoryObject* Item, bool IsActive); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Target // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OncrawlWithLoseShiGou(int32_t LoseShiGouRemainingTime); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OncrawlWithLoseShiGou // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Time--(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Time-- // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MultiInteractTurn(struct AActor* Target); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.MultiInteractTurn // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ServerInteractTurn(struct AActor* Target); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ServerInteractTurn // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_8_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnThrowItem(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnThrowItem // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_OverlayState(enum class ALS_OverlayState NewOverlayState); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.BPI_Set_OverlayState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_ViewMode(enum class ALS_ViewMode NewViewMode); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.BPI_Set_ViewMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetOutline(bool bEnable); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SetOutline // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_Gait(enum class ALS_Gait NewGait); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.BPI_Set_Gait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_RotationMode(enum class ALS_RotationMode NewRotationMode); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.BPI_Set_RotationMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Set_MovementAction(enum class ALS_MovementAction NewMovementAction); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.BPI_Set_MovementAction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsAlsCamera(bool isALSMode); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SetIsAlsCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchFlashlightAiming(bool bSwitch); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SwitchFlashlightAiming // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClientInitGA(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnClientInitGA // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void Rpc_Biaoiqing(struct FCalibrationOffset trstbiaoqi); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Rpc_Biaoiqing // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TimeHan(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.TimeHan // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResetCamera(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ResetCamera // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_ZhengYan(float Rate); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Multi_ZhengYan // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Multi_StopZhengYan(float Rate); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Multi_StopZhengYan // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceivePossessed(struct AController* NewController); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnHealthState_Event_1(enum class EHealthState OnHealthState); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnHealthState_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void JumpCast(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.JumpCast // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ActorTakeDamage(struct AActor* Source, float DamageValue, enum class ENOS_DamageType DamageType, float Force); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ActorTakeDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateHuman(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.UpdateHuman // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClientActiveBeenPullGA(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ClientActiveBeenPullGA // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void PlayGhostGaoneng(struct UAnimMontage* DuopoMontage); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.PlayGhostGaoneng // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetSelfTypeFromServer(struct FEventRelevantData EventRelevantData); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SetSelfTypeFromServer // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResetRollEvent(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ResetRollEvent // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void MulteiJumped(struct FVector StartPos); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.MulteiJumped // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnSystemAtLocation_Multicast(struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, bool bLocalPlay); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SpawnSystemAtLocation_Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ActiveObservedCamera(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ActiveObservedCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DeactiveObservedCamera(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.DeactiveObservedCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnHumanSpeakUpdae(struct TArray<struct FString> IDList); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnHumanSpeakUpdae // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void JoinSpectator(enum class ESpectatorCamp SpectatorCamp); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.JoinSpectator // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Human_OnMouseLeftPress(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.Human_OnMouseLeftPress // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveAutonomousRole(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ReceiveAutonomousRole // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ShrinkCapsuleOnCollapse(bool Collapse); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ShrinkCapsuleOnCollapse // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void NoticeInitCharacterDressCompeleted(bool SecondCompleted); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.NoticeInitCharacterDressCompeleted // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void RestGhostPI(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.RestGhostPI // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RestHuman(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.RestHuman // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_HumanType(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnRep_HumanType // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetMeshVisibility(bool bVisible); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SetMeshVisibility // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnKeyBoardTPress(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnKeyBoardTPress // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnKeyBoardTRelease(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnKeyBoardTRelease // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnKeyBoardYPress(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnKeyBoardYPress // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void PlayGhostTrails(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.PlayGhostTrails // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CheckSprintGA(float delayTime); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.CheckSprintGA // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnHealthStateChange_Server(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnHealthStateChange_Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnHealthStateChange_Multicast(enum class EHealthState Selection); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnHealthStateChange_Multicast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_XiaoPiPS(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnRep_XiaoPiPS // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SetStealth(bool bEnable, bool TrueHide); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.SetStealth // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void JoinSpectatorer(enum class ESpectatorCamp SpectatorCamp); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.JoinSpectatorer // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void AddTerritoryDebuffPost(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.AddTerritoryDebuffPost // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RemoveTerritoryDebuffPost(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.RemoveTerritoryDebuffPost // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DIE(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.DIE // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClientCamera(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ClientCamera // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateResisActor(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.CreateResisActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNanGongSwordRide(struct ACharacter* NanGongPlayer); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnNanGongSwordRide // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CurrentLookObjectInInteractCollision(struct AActor* LookObject); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.CurrentLookObjectInInteractCollision // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ShowSwordRide(bool Index, bool bIsMe); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ShowSwordRide // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StopMontageClimb(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.StopMontageClimb // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ZhangStart(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ZhangStart // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ZhangEnd(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ZhangEnd // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void YoStart(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.YoStart // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void YoEnd(); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.YoEnd // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PlayerHumanBase(int32_t EntryPoint); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.ExecuteUbergraph_BP_PlayerHumanBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void OnOutLine__DelegateSignature(bool IsOutLine); // Function BP_PlayerHumanBase.BP_PlayerHumanBase_C.OnOutLine__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

