// BlueprintGeneratedClass BP_XiaoJiangRPartner.BP_XiaoJiangRPartner_C
// Size: 0x524 (Inherited: 0x4e0)
struct ABP_XiaoJiangRPartner_C : ANOS_XiaoJiangRPartner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UStaticMeshComponent* SM_Hug; // 0x4e8(0x08)
	struct UStaticMeshComponent* SM_Failling; // 0x4f0(0x08)
	int32_t SpawnCount; // 0x4f8(0x04)
	struct FRandomStream Tmp_RandomStream; // 0x4fc(0x08)
	char pad_504[0x4]; // 0x504(0x04)
	struct ANOS_PlayerHuman* Tmp_AttachTarget; // 0x508(0x08)
	struct ABP_XiaoJiang_C* BP_XiaoJiang; // 0x510(0x08)
	float Config_HugDuration; // 0x518(0x04)
	float Config_HugSlowDownPercentage; // 0x51c(0x04)
	float Config_HugSlowDownDuration; // 0x520(0x04)

	void Multi_AttachToTargetAndAutoDetach(struct ANOS_PlayerHuman* Target, struct FName AttachSocketPoint); // Function BP_XiaoJiangRPartner.BP_XiaoJiangRPartner_C.Multi_AttachToTargetAndAutoDetach // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_XiaoJiangRPartner.BP_XiaoJiangRPartner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_XiaoJiangRPartner.BP_XiaoJiangRPartner_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_XiaoJiangRPartner.BP_XiaoJiangRPartner_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function BP_XiaoJiangRPartner.BP_XiaoJiangRPartner_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void BPCreateLightColumn(); // Function BP_XiaoJiangRPartner.BP_XiaoJiangRPartner_C.BPCreateLightColumn // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XiaoJiangRPartner(int32_t EntryPoint); // Function BP_XiaoJiangRPartner.BP_XiaoJiangRPartner_C.ExecuteUbergraph_BP_XiaoJiangRPartner // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

