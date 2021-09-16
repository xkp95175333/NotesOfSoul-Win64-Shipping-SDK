// AnimBlueprintGeneratedClass ABP_JiangCamera.ABP_JiangCamera_C
// Size: 0xc00 (Inherited: 0x2c0)
struct UABP_JiangCamera_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_6; // 0x2f8(0x58)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x350(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x378(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x3a0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x3c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x3f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x418(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x440(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x468(0x28)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_5; // 0x490(0x58)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x4e8(0x30)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_4; // 0x518(0x58)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x570(0x30)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_3; // 0x5a0(0x58)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x5f8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x628(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x650(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x678(0x28)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_2; // 0x6a0(0x58)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x6f8(0x30)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x728(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x750(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x780(0xb0)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x830(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x860(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x910(0x158)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0xa68(0xb0)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0xb18(0x58)
	struct APawn* ControlPawn; // 0xb70(0x08)
	enum class ALS_MovementState Movement State; // 0xb78(0x01)
	enum class ALS_MovementAction Movement Action; // 0xb79(0x01)
	enum class ALS_RotationMode Rotation mode; // 0xb7a(0x01)
	enum class ALS_Gait Actual Gait; // 0xb7b(0x01)
	enum class ALS_Stance Actual Stance; // 0xb7c(0x01)
	enum class ALS_ViewMode View Mode; // 0xb7d(0x01)
	enum class ALS_OverlayState Overlay State; // 0xb7e(0x01)
	enum class ALS_State Injured; // 0xb7f(0x01)
	enum class Als_AimState Aim State; // 0xb80(0x01)
	bool Is Moving; // 0xb81(0x01)
	enum class ECameraType Camerastate; // 0xb82(0x01)
	enum class MovementDirection MoveDirection; // 0xb83(0x01)
	float Offset; // 0xb84(0x04)
	enum class ECameraOverlapType Camera Overlap Type; // 0xb88(0x01)
	char pad_B89[0x3]; // 0xb89(0x03)
	int32_t Anim Int; // 0xb8c(0x04)
	struct FCamraSetingData CameraData; // 0xb90(0x60)
	struct TArray<float> Data; // 0xbf0(0x10)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_JiangCamera.ABP_JiangCamera_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCharacterInfo(); // Function ABP_JiangCamera.ABP_JiangCamera_C.GetCharacterInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_ModifyCurve_897C20FF43E9F44C89F206A252ACC1A2(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_ModifyCurve_897C20FF43E9F44C89F206A252ACC1A2 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_333AE5B441CB26FFF70607A839071D92(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_333AE5B441CB26FFF70607A839071D92 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_FCCCCE4E4C0B3EE7CEA3EB9C343456BA(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_FCCCCE4E4C0B3EE7CEA3EB9C343456BA // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_D2625583426C541C1E521281B47FE886(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_D2625583426C541C1E521281B47FE886 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_4286AFE64714F58E9A47E69CB0F833FC(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_4286AFE64714F58E9A47E69CB0F833FC // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_9A8164894FB35FBE89B72AB0978B853B(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_9A8164894FB35FBE89B72AB0978B853B // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_ModifyCurve_6D4FCEBA4438237F28ECB494813934A3(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_ModifyCurve_6D4FCEBA4438237F28ECB494813934A3 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_ModifyCurve_23B21A874F648716EC8EB6A59F829570(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_ModifyCurve_23B21A874F648716EC8EB6A59F829570 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_ED5DADF4436DC7E932DB6DBA232FECE2(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_ED5DADF4436DC7E932DB6DBA232FECE2 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_6FDA4A2846B376963460B0B250C0B56B(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_6FDA4A2846B376963460B0B250C0B56B // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_ModifyCurve_EB94434E49F0A933EB1DFF9572AA4BD7(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_ModifyCurve_EB94434E49F0A933EB1DFF9572AA4BD7 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_435C1E2344C1BC4CD8F0F3AE407C42C9(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_435C1E2344C1BC4CD8F0F3AE407C42C9 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_4C1C2E0C4F49529CDF4C28A7926125C7(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_4C1C2E0C4F49529CDF4C28A7926125C7 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_1F14AFF1472F57A446DEA483600BB494(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_TransitionResult_1F14AFF1472F57A446DEA483600BB494 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_ModifyCurve_D7F02F21418FEDF811E6C485CB89C463(); // Function ABP_JiangCamera.ABP_JiangCamera_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_JiangCamera_AnimGraphNode_ModifyCurve_D7F02F21418FEDF811E6C485CB89C463 // (BlueprintEvent) // @ game+0x1ec38f0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_JiangCamera.ABP_JiangCamera_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SettingCamera(float CameraS, struct FString Inter, int32_t Index); // Function ABP_JiangCamera.ABP_JiangCamera_C.SettingCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BlueprintInitializeAnimation(); // Function ABP_JiangCamera.ABP_JiangCamera_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ModifyData(bool IsMan); // Function ABP_JiangCamera.ABP_JiangCamera_C.ModifyData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_JiangCamera(int32_t EntryPoint); // Function ABP_JiangCamera.ABP_JiangCamera_C.ExecuteUbergraph_ABP_JiangCamera // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

