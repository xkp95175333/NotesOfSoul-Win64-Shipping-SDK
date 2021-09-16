// BlueprintGeneratedClass BP_XiaoJiangRPartnerBig.BP_XiaoJiangRPartnerBig_C
// Size: 0x4f8 (Inherited: 0x4e0)
struct ABP_XiaoJiangRPartnerBig_C : ANOS_XiaoJiangRPartner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UStaticMeshComponent* SM_Failling; // 0x4e8(0x08)
	struct ABP_XiaoJiang_C* BP_XiaoJiang; // 0x4f0(0x08)

	void ReceiveBeginPlay(); // Function BP_XiaoJiangRPartnerBig.BP_XiaoJiangRPartnerBig_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_XiaoJiangRPartnerBig.BP_XiaoJiangRPartnerBig_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BPCreateLightColumn(); // Function BP_XiaoJiangRPartnerBig.BP_XiaoJiangRPartnerBig_C.BPCreateLightColumn // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XiaoJiangRPartnerBig(int32_t EntryPoint); // Function BP_XiaoJiangRPartnerBig.BP_XiaoJiangRPartnerBig_C.ExecuteUbergraph_BP_XiaoJiangRPartnerBig // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

