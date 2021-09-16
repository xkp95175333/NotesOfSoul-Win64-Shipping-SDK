// AnimBlueprintGeneratedClass ABP_PiCamera.ABP_PiCamera_C
// Size: 0xb28 (Inherited: 0x2c0)
struct UABP_PiCamera_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_5; // 0x2f8(0x58)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x350(0xb0)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_4; // 0x400(0x58)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x458(0x158)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x5b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x5d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x600(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x628(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x650(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x678(0x28)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_3; // 0x6a0(0x58)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x6f8(0x30)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_2; // 0x728(0x58)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x780(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x7b0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x7d8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x800(0x28)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0x828(0x58)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x880(0x30)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x8b0(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x8d8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x908(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x9b8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x9e8(0xb0)
	struct TArray<struct Fals_Camera> CameraS; // 0xa98(0x10)
	struct APawn* ControlPawn; // 0xaa8(0x08)
	enum class ALS_MovementState Movement State; // 0xab0(0x01)
	enum class ALS_MovementAction Movement Action; // 0xab1(0x01)
	enum class ALS_RotationMode Rotation mode; // 0xab2(0x01)
	enum class ALS_Gait Actual Gait; // 0xab3(0x01)
	enum class ALS_Stance Actual Stance; // 0xab4(0x01)
	enum class ALS_ViewMode View Mode; // 0xab5(0x01)
	enum class ALS_OverlayState Overlay State; // 0xab6(0x01)
	enum class ALS_State Injured; // 0xab7(0x01)
	enum class Als_AimState Aim State; // 0xab8(0x01)
	bool Is Moving; // 0xab9(0x01)
	enum class ECameraType Camerastate; // 0xaba(0x01)
	enum class MovementDirection MoveDirection; // 0xabb(0x01)
	float Offset; // 0xabc(0x04)
	enum class ECameraOverlapType Camera Overlap Type; // 0xac0(0x01)
	char pad_AC1[0x7]; // 0xac1(0x07)
	struct FCamraSetingData CameraData; // 0xac8(0x60)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_PiCamera.ABP_PiCamera_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCharacterInfo(); // Function ABP_PiCamera.ABP_PiCamera_C.GetCharacterInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_5E0FBCD042A405916701388028C32108(); // Function ABP_PiCamera.ABP_PiCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_5E0FBCD042A405916701388028C32108 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_B0C1C8EA408687DA89A19898FF8182F2(); // Function ABP_PiCamera.ABP_PiCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_B0C1C8EA408687DA89A19898FF8182F2 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_ModifyCurve_2D5AB91542E5BFCBCB7A97A5556F9DF9(); // Function ABP_PiCamera.ABP_PiCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_ModifyCurve_2D5AB91542E5BFCBCB7A97A5556F9DF9 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_CB788B944C844B177ADECF883B161904(); // Function ABP_PiCamera.ABP_PiCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_CB788B944C844B177ADECF883B161904 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_7A34D90545D19F77178970BC3A610279(); // Function ABP_PiCamera.ABP_PiCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_7A34D90545D19F77178970BC3A610279 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_592E80244B8288D01044C5A73E44838C(); // Function ABP_PiCamera.ABP_PiCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_592E80244B8288D01044C5A73E44838C // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_9DF90EDF4A748D229853B5A4739F60BF(); // Function ABP_PiCamera.ABP_PiCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_9DF90EDF4A748D229853B5A4739F60BF // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_97E6124746D56F792917AAA4F62BD0E7(); // Function ABP_PiCamera.ABP_PiCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_97E6124746D56F792917AAA4F62BD0E7 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_ModifyCurve_DE6FC59147F685DCD7A27BAC70B59961(); // Function ABP_PiCamera.ABP_PiCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_ModifyCurve_DE6FC59147F685DCD7A27BAC70B59961 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_C5E600EE4F907C4E2ECAAD98D98403C1(); // Function ABP_PiCamera.ABP_PiCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_TransitionResult_C5E600EE4F907C4E2ECAAD98D98403C1 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_ModifyCurve_97EC529547EBEC92C0C5568CD9DB284B(); // Function ABP_PiCamera.ABP_PiCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_PiCamera_AnimGraphNode_ModifyCurve_97EC529547EBEC92C0C5568CD9DB284B // (BlueprintEvent) // @ game+0x1ec38f0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_PiCamera.ABP_PiCamera_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SettingCamera(float CameraS, int32_t Inter, int32_t Index); // Function ABP_PiCamera.ABP_PiCamera_C.SettingCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BlueprintInitializeAnimation(); // Function ABP_PiCamera.ABP_PiCamera_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_PiCamera(int32_t EntryPoint); // Function ABP_PiCamera.ABP_PiCamera_C.ExecuteUbergraph_ABP_PiCamera // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

