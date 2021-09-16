// BlueprintGeneratedClass ALS_Camera_BPI.ALS_Camera_BPI_C
// Size: 0x28 (Inherited: 0x28)
struct UALS_Camera_BPI_C : UInterface {

	void SetOtherCamera(bool isother, struct FRotator Rotator); // Function ALS_Camera_BPI.ALS_Camera_BPI_C.SetOtherCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIsAlsCamera(bool isALSMode); // Function ALS_Camera_BPI.ALS_Camera_BPI_C.SetIsAlsCamera // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_3P_TraceParams(struct FVector TraceOrigin, float TraceRadius, enum class ETraceTypeQuery TraceChannel, bool isPi, bool isprint, bool isignore); // Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_TraceParams // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FTransform BPI_Get_3P_PivotTarget(); // Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_3P_PivotTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct FVector BPI_Get_FP_CameraTarget(); // Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_FP_CameraTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BPI_Get_CameraParameters(float TP_FOV, float FP_FOV, bool RightShoulder); // Function ALS_Camera_BPI.ALS_Camera_BPI_C.BPI_Get_CameraParameters // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

