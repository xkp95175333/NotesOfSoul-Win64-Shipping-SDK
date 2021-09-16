// BlueprintGeneratedClass BP_Flashlight.BP_Flashlight_C
// Size: 0x370 (Inherited: 0x330)
struct ABP_Flashlight_C : ANOS_Flashlight {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct FRotator LightRelativeRotator; // 0x338(0x0c)
	char pad_344[0x4]; // 0x344(0x04)
	struct UStaticMeshComponent* JinPoLightMesh; // 0x348(0x08)
	struct FTimerHandle Exposure; // 0x350(0x08)
	float ExposureTime; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct UWBP_LightSkill1Hair_C* ProgressUI; // 0x360(0x08)
	struct AActor* Other Actor; // 0x368(0x08)

	void SetFlashLightRotation(struct FRotator NewRotation); // Function BP_Flashlight.BP_Flashlight_C.SetFlashLightRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetFlashLightCollisio(bool Index); // Function BP_Flashlight.BP_Flashlight_C.SetFlashLightCollisio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool HasLightBeamStopObject(struct AActor* Collision); // Function BP_Flashlight.BP_Flashlight_C.HasLightBeamStopObject // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TickSpotLight(); // Function BP_Flashlight.BP_Flashlight_C.TickSpotLight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnHealthState_Event_1(enum class EHealthState OnHealthState); // Function BP_Flashlight.BP_Flashlight_C.OnHealthState_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_Flashlight.BP_Flashlight_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BindLightToCamera(); // Function BP_Flashlight.BP_Flashlight_C.BindLightToCamera // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_Flashlight.BP_Flashlight_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ActivateFlashlight(); // Function BP_Flashlight.BP_Flashlight_C.ActivateFlashlight // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void DeactivateFlashlight(); // Function BP_Flashlight.BP_Flashlight_C.DeactivateFlashlight // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnComponentBeginOverlap_Event_1(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Flashlight.BP_Flashlight_C.OnComponentBeginOverlap_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnComponentEndOverlap_Event_1(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Flashlight.BP_Flashlight_C.OnComponentEndOverlap_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExposureTimeOver(); // Function BP_Flashlight.BP_Flashlight_C.ExposureTimeOver // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CreateJinPoTipUI(bool bIsCreate, float MaxLightTime); // Function BP_Flashlight.BP_Flashlight_C.CreateJinPoTipUI // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetFlashLightCollision_Server(bool bIsShow); // Function BP_Flashlight.BP_Flashlight_C.SetFlashLightCollision_Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetFlashLightRotation_Sever(struct FRotator NewParam); // Function BP_Flashlight.BP_Flashlight_C.SetFlashLightRotation_Sever // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Flashlight(int32_t EntryPoint); // Function BP_Flashlight.BP_Flashlight_C.ExecuteUbergraph_BP_Flashlight // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

