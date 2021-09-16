// BlueprintGeneratedClass BP_GSTrain.BP_GSTrain_C
// Size: 0x610 (Inherited: 0x600)
struct ABP_GSTrain_C : ANOS_GSTrainArena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x600(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x608(0x08)

	void ReceiveBeginPlay(); // Function BP_GSTrain.BP_GSTrain_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void KnockDown(struct FEventRelevantData NewParam); // Function BP_GSTrain.BP_GSTrain_C.KnockDown // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ItemGet(struct FEventRelevantData NewParam); // Function BP_GSTrain.BP_GSTrain_C.ItemGet // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GSTrain(int32_t EntryPoint); // Function BP_GSTrain.BP_GSTrain_C.ExecuteUbergraph_BP_GSTrain // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

