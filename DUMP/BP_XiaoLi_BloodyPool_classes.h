// BlueprintGeneratedClass BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C
// Size: 0x370 (Inherited: 0x2d8)
struct ABP_XiaoLi_BloodyPool_C : ANOS_XiaoLi_BloodyPool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct UNiagaraComponent* Ripple; // 0x2e0(0x08)
	struct UDecalComponent* WallDecal; // 0x2e8(0x08)
	struct UDecalComponent* GroundDecal4; // 0x2f0(0x08)
	struct UDecalComponent* GroundDecal3; // 0x2f8(0x08)
	struct UDecalComponent* GroundDecal2; // 0x300(0x08)
	struct UDecalComponent* GroundDecal1; // 0x308(0x08)
	float WallDecalTimelineFinal_Value_6871AAFF42703DCBAF75D6BA64E34065; // 0x310(0x04)
	enum class ETimelineDirection WallDecalTimelineFinal__Direction_6871AAFF42703DCBAF75D6BA64E34065; // 0x314(0x01)
	char pad_315[0x3]; // 0x315(0x03)
	struct UTimelineComponent* WallDecalTimelineFinal; // 0x318(0x08)
	float Timeline_2_Value_47F555094BC83C5E80D2128EBD474F9F; // 0x320(0x04)
	enum class ETimelineDirection Timeline_2__Direction_47F555094BC83C5E80D2128EBD474F9F; // 0x324(0x01)
	char pad_325[0x3]; // 0x325(0x03)
	struct UTimelineComponent* Timeline_3; // 0x328(0x08)
	float Timeline_1_Value_FAD5C7C041B80A27405E6889AA21C4C2; // 0x330(0x04)
	enum class ETimelineDirection Timeline_1__Direction_FAD5C7C041B80A27405E6889AA21C4C2; // 0x334(0x01)
	char pad_335[0x3]; // 0x335(0x03)
	struct UTimelineComponent* Timeline_2; // 0x338(0x08)
	float Timeline_0_Value_9E0DC3EE4B989F08CEBC06BECAF86D18; // 0x340(0x04)
	enum class ETimelineDirection Timeline_0__Direction_9E0DC3EE4B989F08CEBC06BECAF86D18; // 0x344(0x01)
	char pad_345[0x3]; // 0x345(0x03)
	struct UTimelineComponent* Timeline_1; // 0x348(0x08)
	float SpawnTimeline_Value_4FD0C30E4C28A21398E41CB8C47F3EB2; // 0x350(0x04)
	enum class ETimelineDirection SpawnTimeline__Direction_4FD0C30E4C28A21398E41CB8C47F3EB2; // 0x354(0x01)
	char pad_355[0x3]; // 0x355(0x03)
	struct UTimelineComponent* SpawnTimeline; // 0x358(0x08)
	float WallDecalTimelineProcess_Value_D19F800040D50DC4C218A7B98D941B80; // 0x360(0x04)
	enum class ETimelineDirection WallDecalTimelineProcess__Direction_D19F800040D50DC4C218A7B98D941B80; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)
	struct UTimelineComponent* WallDecalTimelineProcess; // 0x368(0x08)

	void GetSkill2AbilityLevel(int32_t Level); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.GetSkill2AbilityLevel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void GetEffects(struct TMap<struct FName, struct TSoftObjectPtr<struct UNiagaraSystem>> NiagarasSystems, struct TMap<struct FName, struct TSoftObjectPtr<struct UMaterialInterface>> MaterialInterfaces); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.GetEffects // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void WallDecalTimelineFinal__FinishedFunc(); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.WallDecalTimelineFinal__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void WallDecalTimelineFinal__UpdateFunc(); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.WallDecalTimelineFinal__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void WallDecalTimelineProcess__FinishedFunc(); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.WallDecalTimelineProcess__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void WallDecalTimelineProcess__UpdateFunc(); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.WallDecalTimelineProcess__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void SpawnTimeline__FinishedFunc(); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.SpawnTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void SpawnTimeline__UpdateFunc(); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.SpawnTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__FinishedFunc(); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_0__UpdateFunc(); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_1__FinishedFunc(); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.Timeline_1__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_1__UpdateFunc(); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.Timeline_1__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_2__FinishedFunc(); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.Timeline_2__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Timeline_2__UpdateFunc(); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.Timeline_2__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__BoxCollisionCom_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.BndEvt__BoxCollisionCom_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__BoxCollisionCom_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.BndEvt__BoxCollisionCom_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XiaoLi_BloodyPool(int32_t EntryPoint); // Function BP_XiaoLi_BloodyPool.BP_XiaoLi_BloodyPool_C.ExecuteUbergraph_BP_XiaoLi_BloodyPool // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

