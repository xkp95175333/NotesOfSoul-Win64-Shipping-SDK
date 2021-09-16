// Class AppleARKitFaceSupport.AppleARKitFaceMeshComponent
// Size: 0x5a0 (Inherited: 0x4d0)
struct UAppleARKitFaceMeshComponent : UProceduralMeshComponent {
	bool bWantsMeshUpdates; // 0x4d0(0x01)
	bool bWantsCollision; // 0x4d1(0x01)
	bool bAutoBindToLocalFaceMesh; // 0x4d2(0x01)
	enum class EARFaceComponentTransformMixing TransformSetting; // 0x4d3(0x01)
	bool bFlipTrackedRotation; // 0x4d4(0x01)
	char pad_4D5[0x3]; // 0x4d5(0x03)
	struct UMaterialInterface* FaceMaterial; // 0x4d8(0x08)
	struct FName LiveLinkSubjectName; // 0x4e0(0x08)
	struct TArray<struct FNetQuantizeFaceCurve> RemoteCurves; // 0x4e8(0x10)
	char pad_4F8[0xa8]; // 0x4f8(0xa8)

	void UpdateMeshFromBlendShapes(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.UpdateMeshFromBlendShapes // (Final|Native|Public|BlueprintCallable) // @ game+0x10e82d0
	void UpdateMesh(struct TArray<struct FVector> Vertices); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.UpdateMesh // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10e8220
	void SetBlendShapes(struct TMap<enum class EARFaceBlendShape, float> InBlendShapes); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetBlendShapes // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10e8120
	void SetBlendShapeAmount(enum class EARFaceBlendShape BlendShape, float Amount); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetBlendShapeAmount // (Final|Native|Public|BlueprintCallable) // @ game+0x10e8050
	void SetAutoBind(bool bAutoBind); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetAutoBind // (Final|Native|Public|BlueprintCallable) // @ game+0x10e7fc0
	void ServerUpdateFaceCurves(struct TArray<struct FNetQuantizeFaceCurve> ClientCurves); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.ServerUpdateFaceCurves // (Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate) // @ game+0x10e7f00
	void PublishViaLiveLink(struct FName SubjectName); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.PublishViaLiveLink // (Final|Native|Public|BlueprintCallable) // @ game+0x10e7e70
	void OnRep_RemoteCurves(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.OnRep_RemoteCurves // (Final|Native|Private) // @ game+0x10e7e50
	struct FTransform GetTransform(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetTransform // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x10e7df0
	float GetLastUpdateTimestamp(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetLastUpdateTimestamp // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10e7dc0
	int32_t GetLastUpdateFrameNumber(); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetLastUpdateFrameNumber // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10e7d90
	float GetFaceBlendShapeAmount(enum class EARFaceBlendShape BlendShape); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetFaceBlendShapeAmount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10e7d00
	void CreateMesh(struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector2D> uv0); // Function AppleARKitFaceSupport.AppleARKitFaceMeshComponent.CreateMesh // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10e7b80
};

