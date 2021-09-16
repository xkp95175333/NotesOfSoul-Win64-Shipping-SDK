// BlueprintGeneratedClass BP_TerritoryPhysicItemFloatArea.BP_TerritoryPhysicItemFloatArea_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_TerritoryPhysicItemFloatArea_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBoxComponent* Box; // 0x228(0x08)
	struct UStaticMeshComponent* MeshCom; // 0x230(0x08)
	float DefaultValue; // 0x238(0x04)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct ABP_PhysicItem_C* CurPhysicItem; // 0x240(0x08)

	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_TerritoryPhysicItemFloatArea.BP_TerritoryPhysicItemFloatArea_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_TerritoryPhysicItemFloatArea.BP_TerritoryPhysicItemFloatArea_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_TerritoryPhysicItemFloatArea(int32_t EntryPoint); // Function BP_TerritoryPhysicItemFloatArea.BP_TerritoryPhysicItemFloatArea_C.ExecuteUbergraph_BP_TerritoryPhysicItemFloatArea // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

