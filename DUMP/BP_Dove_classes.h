// BlueprintGeneratedClass BP_Dove.BP_Dove_C
// Size: 0x338 (Inherited: 0x328)
struct ABP_Dove_C : ANOS_Dove {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328(0x08)
	struct UBillboardComponent* Billboard; // 0x330(0x08)

	bool CanInteract(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_Dove.BP_Dove_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	enum class EInteractType GetInteractType(struct ACharacter* InteractChar, int32_t CurInteractIndex); // Function BP_Dove.BP_Dove_C.GetInteractType // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	bool OnInteractTargetUpdate(bool IsFocus, struct ACharacter* InteractChar, int32_t InteractIndex); // Function BP_Dove.BP_Dove_C.OnInteractTargetUpdate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnGetDoveEvent_Event_1(struct ACharacter* Player); // Function BP_Dove.BP_Dove_C.OnGetDoveEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_Dove.BP_Dove_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function BP_Dove.BP_Dove_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Dove(int32_t EntryPoint); // Function BP_Dove.BP_Dove_C.ExecuteUbergraph_BP_Dove // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

