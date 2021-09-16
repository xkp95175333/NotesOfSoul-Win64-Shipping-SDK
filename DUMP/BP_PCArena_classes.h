// BlueprintGeneratedClass BP_PCArena.BP_PCArena_C
// Size: 0x60b (Inherited: 0x5f0)
struct ABP_PCArena_C : ANOS_PCArena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f0(0x08)
	struct UBP_UIControlComponent_C* BP_UIControlComponent; // 0x5f8(0x08)
	struct UWBP_Loading_C* Loading; // 0x600(0x08)
	bool ThisEndInfo; // 0x608(0x01)
	bool IsMapOpen; // 0x609(0x01)
	bool IsInfoOpen; // 0x60a(0x01)

	void Init Floot(); // Function BP_PCArena.BP_PCArena_C.Init Floot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetPossess(struct APawn* InPawn); // Function BP_PCArena.BP_PCArena_C.SetPossess // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_PCArena.BP_PCArena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SiwtchCamraManger(struct APawn* ControlPawn); // Function BP_PCArena.BP_PCArena_C.SiwtchCamraManger // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceivePossess(struct APawn* PossessedPawn); // Function BP_PCArena.BP_PCArena_C.ReceivePossess // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchCamera(struct APawn* ConrolPawn); // Function BP_PCArena.BP_PCArena_C.SwitchCamera // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PCArena(int32_t EntryPoint); // Function BP_PCArena.BP_PCArena_C.ExecuteUbergraph_BP_PCArena // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

