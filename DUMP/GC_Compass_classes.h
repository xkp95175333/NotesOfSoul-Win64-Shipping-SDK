// BlueprintGeneratedClass GC_Compass.GC_Compass_C
// Size: 0x2c8 (Inherited: 0x280)
struct AGC_Compass_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UNiagaraComponent* Niagara; // 0x288(0x08)
	struct UPostProcessComponent* PostProcess; // 0x290(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x298(0x08)
	float Control_PPI_LuoPan_Dissolve2_D6FF3DF8405F761DA6FC90A4A8C2BAA0; // 0x2a0(0x04)
	enum class ETimelineDirection Control_PPI_LuoPan__Direction_D6FF3DF8405F761DA6FC90A4A8C2BAA0; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	struct UTimelineComponent* Control PPI_LuoPan; // 0x2a8(0x08)
	struct UAudioComponent* Sound Comp_Compass Loop; // 0x2b0(0x08)
	struct UMaterialInstanceDynamic* PPI_LuoPan; // 0x2b8(0x08)
	struct APostProcessVolume* World Post Process; // 0x2c0(0x08)

	void Control PPI_LuoPan__FinishedFunc(); // Function GC_Compass.GC_Compass_C.Control PPI_LuoPan__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Control PPI_LuoPan__UpdateFunc(); // Function GC_Compass.GC_Compass_C.Control PPI_LuoPan__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyEnd_4DAE64E74BEBFFB7D4F836A16B6054F4(struct FName NotifyName); // Function GC_Compass.GC_Compass_C.OnNotifyEnd_4DAE64E74BEBFFB7D4F836A16B6054F4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnNotifyBegin_4DAE64E74BEBFFB7D4F836A16B6054F4(struct FName NotifyName); // Function GC_Compass.GC_Compass_C.OnNotifyBegin_4DAE64E74BEBFFB7D4F836A16B6054F4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInterrupted_4DAE64E74BEBFFB7D4F836A16B6054F4(struct FName NotifyName); // Function GC_Compass.GC_Compass_C.OnInterrupted_4DAE64E74BEBFFB7D4F836A16B6054F4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnBlendOut_4DAE64E74BEBFFB7D4F836A16B6054F4(struct FName NotifyName); // Function GC_Compass.GC_Compass_C.OnBlendOut_4DAE64E74BEBFFB7D4F836A16B6054F4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnCompleted_4DAE64E74BEBFFB7D4F836A16B6054F4(struct FName NotifyName); // Function GC_Compass.GC_Compass_C.OnCompleted_4DAE64E74BEBFFB7D4F836A16B6054F4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_Compass.GC_Compass_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_Compass.GC_Compass_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_Compass(int32_t EntryPoint); // Function GC_Compass.GC_Compass_C.ExecuteUbergraph_GC_Compass // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

