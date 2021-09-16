// BlueprintGeneratedClass BP_PickUpBase.BP_PickUpBase_C
// Size: 0x2d0 (Inherited: 0x280)
struct ABP_PickUpBase_C : AKxPickupBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UNiagaraComponent* Niagara; // 0x288(0x08)
	struct UBillboardComponent* Billboard; // 0x290(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x298(0x08)
	SoftClassProperty InventoryClass; // 0x2a0(0x28)
	struct AActor* MarkedPoint; // 0x2c8(0x08)

	void OnRep_MarkedPoint(); // Function BP_PickUpBase.BP_PickUpBase_C.OnRep_MarkedPoint // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetIntercaInfo(); // Function BP_PickUpBase.BP_PickUpBase_C.SetIntercaInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool OnInteractTargetUpdate(bool IsFocus, struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_PickUpBase.BP_PickUpBase_C.OnInteractTargetUpdate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_28B518BF4BDFE565FAC7F8AF6961EBB4(struct UObject* Loaded); // Function BP_PickUpBase.BP_PickUpBase_C.OnLoaded_28B518BF4BDFE565FAC7F8AF6961EBB4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_57A8B8164BFAE382AEB96693EE672FC1(struct UObject* Loaded); // Function BP_PickUpBase.BP_PickUpBase_C.OnLoaded_57A8B8164BFAE382AEB96693EE672FC1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_69081AFA4C07B346F87AE7B5B5382122(struct UObject* Loaded); // Function BP_PickUpBase.BP_PickUpBase_C.OnLoaded_69081AFA4C07B346F87AE7B5B5382122 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_PickUpBase.BP_PickUpBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ClearMarkedBP_BC(); // Function BP_PickUpBase.BP_PickUpBase_C.ClearMarkedBP_BC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void BindEvent(); // Function BP_PickUpBase.BP_PickUpBase_C.BindEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OninteractSucEvent_Event_1(bool bOnSucessed); // Function BP_PickUpBase.BP_PickUpBase_C.OninteractSucEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_IsThrowItem(); // Function BP_PickUpBase.BP_PickUpBase_C.OnRep_IsThrowItem // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PickUpBase(int32_t EntryPoint); // Function BP_PickUpBase.BP_PickUpBase_C.ExecuteUbergraph_BP_PickUpBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

