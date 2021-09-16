// AnimBlueprintGeneratedClass ABP_SzCamera.ABP_SzCamera_C
// Size: 0x590 (Inherited: 0x2c0)
struct UABP_SzCamera_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x2c8(0x158)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve_2; // 0x420(0x58)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x478(0x30)
	struct FAnimNode_ModifyCurve AnimGraphNode_ModifyCurve; // 0x4a8(0x58)
	struct APawn* ControlPawn; // 0x500(0x08)
	enum class ALS_MovementState Movement State; // 0x508(0x01)
	enum class ALS_MovementAction Movement Action; // 0x509(0x01)
	enum class ALS_RotationMode Rotation mode; // 0x50a(0x01)
	enum class ALS_Gait Actual Gait; // 0x50b(0x01)
	enum class ALS_Stance Actual Stance; // 0x50c(0x01)
	enum class ALS_ViewMode View Mode; // 0x50d(0x01)
	enum class ALS_OverlayState Overlay State; // 0x50e(0x01)
	enum class ALS_State Injured; // 0x50f(0x01)
	enum class Als_AimState Aim State; // 0x510(0x01)
	bool Is Moving; // 0x511(0x01)
	enum class ECameraType Camerastate; // 0x512(0x01)
	enum class MovementDirection MoveDirection; // 0x513(0x01)
	float Offset; // 0x514(0x04)
	enum class ECameraOverlapType Camera Overlap Type; // 0x518(0x01)
	char pad_519[0x3]; // 0x519(0x03)
	int32_t Anim Int; // 0x51c(0x04)
	struct FCamraSetingData CameraData; // 0x520(0x60)
	struct TArray<float> Data; // 0x580(0x10)

	void AnimGraph(struct FPoseLink AnimGraph); // Function ABP_SzCamera.ABP_SzCamera_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCharacterInfo(); // Function ABP_SzCamera.ABP_SzCamera_C.GetCharacterInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function ABP_SzCamera.ABP_SzCamera_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void SettingCamera(float CameraS, struct FString Inter, int32_t Index); // Function ABP_SzCamera.ABP_SzCamera_C.SettingCamera // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BlueprintInitializeAnimation(); // Function ABP_SzCamera.ABP_SzCamera_C.BlueprintInitializeAnimation // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ModifyData(bool IsMan); // Function ABP_SzCamera.ABP_SzCamera_C.ModifyData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_ABP_SzCamera(int32_t EntryPoint); // Function ABP_SzCamera.ABP_SzCamera_C.ExecuteUbergraph_ABP_SzCamera // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

