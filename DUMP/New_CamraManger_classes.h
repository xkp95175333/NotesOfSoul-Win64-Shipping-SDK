// BlueprintGeneratedClass New_CamraManger.New_CamraManger_C
// Size: 0x2da8 (Inherited: 0x27c0)
struct ANew_CamraManger_C : ANosCameraManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x27c0(0x08)
	struct USkeletalMeshComponent* CameraBehavior; // 0x27c8(0x08)
	struct APawn* ControlPawn; // 0x27d0(0x08)
	char pad_27D8[0x8]; // 0x27d8(0x08)
	struct FTransform SmoothPivot; // 0x27e0(0x30)
	struct FVector Vector; // 0x2810(0x0c)
	struct FRotator TargetRotaton; // 0x281c(0x0c)
	struct FVector PivotLocation; // 0x2828(0x0c)
	struct FVector TargetPivot; // 0x2834(0x0c)
	bool isAlsCamera; // 0x2840(0x01)
	bool isother; // 0x2841(0x01)
	char pad_2842[0x2]; // 0x2842(0x02)
	struct FRotator Rotator; // 0x2844(0x0c)
	struct FPostProcessSettings post; // 0x2850(0x550)
	float Length; // 0x2da0(0x04)
	float FOV; // 0x2da4(0x04)

	void SetOtherCamera(bool isother, struct FRotator Rotator); // Function New_CamraManger.New_CamraManger_C.SetOtherCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_CameraParameters(float TP_FOV, float FP_FOV, bool RightShoulder); // Function New_CamraManger.New_CamraManger_C.BPI_Get_CameraParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FVector BPI_Get_FP_CameraTarget(); // Function New_CamraManger.New_CamraManger_C.BPI_Get_FP_CameraTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FTransform BPI_Get_3P_PivotTarget(); // Function New_CamraManger.New_CamraManger_C.BPI_Get_3P_PivotTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_3P_TraceParams(struct FVector TraceOrigin, float TraceRadius, enum class ETraceTypeQuery TraceChannel, bool isPi, bool isprint, bool isignore); // Function New_CamraManger.New_CamraManger_C.BPI_Get_3P_TraceParams // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetCameraValueByAnimInstance(struct FName CurveName, float CurveValue); // Function New_CamraManger.New_CamraManger_C.GetCameraValueByAnimInstance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void Caculate Axi Independent(struct FVector currentVector, struct FVector TargetLocation, struct FRotator CurrentTargetRotator, struct FVector Lag, struct FVector SmoothTransform); // Function New_CamraManger.New_CamraManger_C.Caculate Axi Independent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void CustomCamera(struct FVector Location, struct FRotator Rotation, float FOV); // Function New_CamraManger.New_CamraManger_C.CustomCamera // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool BlueprintUpdateCamera(struct AActor* CameraTarget, struct FVector NewCameraLocation, struct FRotator NewCameraRotation, float NewCameraFOV); // Function New_CamraManger.New_CamraManger_C.BlueprintUpdateCamera // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsAlsCamera(bool isALSMode); // Function New_CamraManger.New_CamraManger_C.SetIsAlsCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Postting(struct FPostProcessSettings postseeting, float BlendWeight); // Function New_CamraManger.New_CamraManger_C.Postting // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPossess(struct APawn* InPawn); // Function New_CamraManger.New_CamraManger_C.OnPossess // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_New_CamraManger(int32_t EntryPoint); // Function New_CamraManger.New_CamraManger_C.ExecuteUbergraph_New_CamraManger // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

