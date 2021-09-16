// AnimBlueprintGeneratedClass ABP_Xiaoli.ABP_Xiaoli_C
// Size: 0xc00 (Inherited: 0x2c0)
struct UABP_Xiaoli_C : UAnimInstance {
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

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_Xiaoli.ABP_Xiaoli_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCharacterInfo(); // Function ABP_Xiaoli.ABP_Xiaoli_C.GetCharacterInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_ModifyCurve_0AAA40B54457CA59859E449E5A181A03(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_ModifyCurve_0AAA40B54457CA59859E449E5A181A03 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_7D69C7E140B7936247634BA4253D3C6A(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_7D69C7E140B7936247634BA4253D3C6A // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_69FCF4FE4F1873D0B34C1AB07BB3FB25(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_69FCF4FE4F1873D0B34C1AB07BB3FB25 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_22D24FCD40DA94C51ED6D4BB03D72999(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_22D24FCD40DA94C51ED6D4BB03D72999 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_1DDA2E1C439B53229EC683A98D1F67BC(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_1DDA2E1C439B53229EC683A98D1F67BC // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_998701D54AD0A3D212BF45B169A0AF14(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_998701D54AD0A3D212BF45B169A0AF14 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_ModifyCurve_82538F5A4A8A40B05D6147B532E8377E(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_ModifyCurve_82538F5A4A8A40B05D6147B532E8377E // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_ModifyCurve_8B85B20E422AB77F9FFDD1A36688AC7B(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_ModifyCurve_8B85B20E422AB77F9FFDD1A36688AC7B // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_22FEF20E40DC7739A59206A471DF0401(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_22FEF20E40DC7739A59206A471DF0401 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_0E3CF5D444CA7DAA007733A013B981E8(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_0E3CF5D444CA7DAA007733A013B981E8 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_ModifyCurve_20117F204FABD3DD8E63CCB4A901A27B(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_ModifyCurve_20117F204FABD3DD8E63CCB4A901A27B // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_88E598B74F5B93F2D8AA188C276472C8(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_88E598B74F5B93F2D8AA188C276472C8 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_319808B64FCDC39CD72F24B53571BFB3(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_319808B64FCDC39CD72F24B53571BFB3 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_FDF6C69D4DDB66246EB951BE77F00EC9(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_TransitionResult_FDF6C69D4DDB66246EB951BE77F00EC9 // (BlueprintEvent) // @ game+0x1ec38f0
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_ModifyCurve_42830482478A79EB188A98BF1DCA33F8(); // Function ABP_Xiaoli.ABP_Xiaoli_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Xiaoli_AnimGraphNode_ModifyCurve_42830482478A79EB188A98BF1DCA33F8 // (BlueprintEvent) // @ game+0x1ec38f0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_Xiaoli.ABP_Xiaoli_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SettingCamera(float CameraS, struct FString Inter, int32_t Index); // Function ABP_Xiaoli.ABP_Xiaoli_C.SettingCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BlueprintInitializeAnimation(); // Function ABP_Xiaoli.ABP_Xiaoli_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ModifyData(bool IsMan); // Function ABP_Xiaoli.ABP_Xiaoli_C.ModifyData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_Xiaoli(int32_t EntryPoint); // Function ABP_Xiaoli.ABP_Xiaoli_C.ExecuteUbergraph_ABP_Xiaoli // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

