// BlueprintGeneratedClass BP_PickUpElement.BP_PickUpElement_C
// Size: 0x311 (Inherited: 0x2d0)
struct ABP_PickUpElement_C : ABP_PickUpBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UNiagaraComponent* Boom FX; // 0x2d8(0x08)
	struct FText RefreshMessage; // 0x2e0(0x18)
	struct UNOS_Element* Element; // 0x2f8(0x08)
	struct ABP_ElementSlot_C* ElementPoint; // 0x300(0x08)
	struct FName ElementID; // 0x308(0x08)
	enum class ENOSElementSlotType ElementType; // 0x310(0x01)

	void OnRep_ElementType(); // Function BP_PickUpElement.BP_PickUpElement_C.OnRep_ElementType // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetElementTypeByItemID(); // Function BP_PickUpElement.BP_PickUpElement_C.GetElementTypeByItemID // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SendRefreshMessage(); // Function BP_PickUpElement.BP_PickUpElement_C.SendRefreshMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void RefreshElement(); // Function BP_PickUpElement.BP_PickUpElement_C.RefreshElement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ResetTimer(); // Function BP_PickUpElement.BP_PickUpElement_C.ResetTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_PickUpElement.BP_PickUpElement_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SpawnNewNiagara(); // Function BP_PickUpElement.BP_PickUpElement_C.SpawnNewNiagara // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PickUpElement(int32_t EntryPoint); // Function BP_PickUpElement.BP_PickUpElement_C.ExecuteUbergraph_BP_PickUpElement // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

