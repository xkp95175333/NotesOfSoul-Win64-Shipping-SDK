// AnimBlueprintGeneratedClass ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C
// Size: 0xaf8 (Inherited: 0x2c0)
struct UABP_NiexiaoqianCamera_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x2c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x2f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x318(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x340(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x368(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x390(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x3b8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3e0(0x28)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_5; // 0x408(0x58)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x460(0x30)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_4; // 0x490(0x58)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x4e8(0x30)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_3; // 0x518(0x58)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x570(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x5a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x5c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x5f0(0x28)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_2; // 0x618(0x58)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x670(0x30)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x6a0(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x6c8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x6f8(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7a8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x7d8(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x888(0x158)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0x9e0(0x58)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xa38(0x30)
	struct APawn* ControlPawn; // 0xa68(0x08)
	enum class ALS_MovementState Movement State; // 0xa70(0x01)
	enum class ALS_MovementAction Movement Action; // 0xa71(0x01)
	enum class ALS_RotationMode Rotation mode; // 0xa72(0x01)
	enum class ALS_Gait Actual Gait; // 0xa73(0x01)
	enum class ALS_Stance Actual Stance; // 0xa74(0x01)
	enum class ALS_ViewMode View Mode; // 0xa75(0x01)
	enum class ALS_OverlayState Overlay State; // 0xa76(0x01)
	enum class ALS_State Injured; // 0xa77(0x01)
	enum class Als_AimState Aim State; // 0xa78(0x01)
	bool Is Moving; // 0xa79(0x01)
	enum class ECameraType Camerastate; // 0xa7a(0x01)
	enum class MovementDirection MoveDirection; // 0xa7b(0x01)
	float Offset; // 0xa7c(0x04)
	enum class ECameraOverlapType Camera Overlap Type; // 0xa80(0x01)
	char pad_A81[0x3]; // 0xa81(0x03)
	int32_t Anim Int; // 0xa84(0x04)
	struct FCamraSetingData CameraData; // 0xa88(0x60)
	struct TArray<float> Data; // 0xae8(0x10)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCharacterInfo(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.GetCharacterInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_ModifyCurve_BDF6CC78426D0F02363D3483578679E7(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_ModifyCurve_BDF6CC78426D0F02363D3483578679E7 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_7CF67D624C5C8149B6A3E58D31DA7EC3(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_7CF67D624C5C8149B6A3E58D31DA7EC3 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_BA78E80E4D4D030699C4C4A2BF3D7DC8(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_BA78E80E4D4D030699C4C4A2BF3D7DC8 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_97DC275D498576A9776ADAB055D6329D(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_97DC275D498576A9776ADAB055D6329D // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_3510A04244E71E626A49E389E6B07DBA(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_3510A04244E71E626A49E389E6B07DBA // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_8A66FB9F420862169F06D4BC899B7E8A(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_8A66FB9F420862169F06D4BC899B7E8A // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_ModifyCurve_6AFA4EFF4663150D94842B92E981C4E0(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_ModifyCurve_6AFA4EFF4663150D94842B92E981C4E0 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_B4B7A4414BB3EA44161224B6D50EC258(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_B4B7A4414BB3EA44161224B6D50EC258 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_B03A5403423382DD60A0C399BACABBF2(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_B03A5403423382DD60A0C399BACABBF2 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_5C4B666741B38E11AD05DB8EB1124B4E(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_5C4B666741B38E11AD05DB8EB1124B4E // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_ModifyCurve_399C0CFF450867D558D7889CDBC02AE2(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_ModifyCurve_399C0CFF450867D558D7889CDBC02AE2 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_AC2A378B49C9BE971B61A79A84B63DA3(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_AC2A378B49C9BE971B61A79A84B63DA3 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_065DE44B43365F489F459AB249BE2EF1(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_TransitionResult_065DE44B43365F489F459AB249BE2EF1 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_ModifyCurve_B68DDEC848E98BB490B959A044B6831E(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NiexiaoqianCamera_AnimGraphNode_ModifyCurve_B68DDEC848E98BB490B959A044B6831E // (BlueprintEvent) // @ game+0x1ec38f0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SettingCamera(float CameraS, struct FString Inter, int32_t Index); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.SettingCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BlueprintInitializeAnimation(); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_NiexiaoqianCamera(int32_t EntryPoint); // Function ABP_NiexiaoqianCamera.ABP_NiexiaoqianCamera_C.ExecuteUbergraph_ABP_NiexiaoqianCamera // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

