// BlueprintGeneratedClass BP_PracticeLevelBlock.BP_PracticeLevelBlock_C
// Size: 0x271 (Inherited: 0x220)
struct ABP_PracticeLevelBlock_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x228(0x08)
	struct UNiagaraComponent* Niagara; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float ReduceTimer_Value_099B8B034AAEC03501E7B29832B54546; // 0x240(0x04)
	enum class ETimelineDirection ReduceTimer__Direction_099B8B034AAEC03501E7B29832B54546; // 0x244(0x01)
	char pad_245[0x3]; // 0x245(0x03)
	struct UTimelineComponent* ReduceTimer; // 0x248(0x08)
	float AddTimer_Value_1877AF0D4AC49B11F66771B4B1DF211C; // 0x250(0x04)
	enum class ETimelineDirection AddTimer__Direction_1877AF0D4AC49B11F66771B4B1DF211C; // 0x254(0x01)
	char pad_255[0x3]; // 0x255(0x03)
	struct UTimelineComponent* AddTimer; // 0x258(0x08)
	struct UMaterialInstanceDynamic* DM1; // 0x260(0x08)
	struct UMaterialInstanceDynamic* DM2; // 0x268(0x08)
	bool bOpened; // 0x270(0x01)

	void UserConstructionScript(); // Function BP_PracticeLevelBlock.BP_PracticeLevelBlock_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AddTimer__FinishedFunc(); // Function BP_PracticeLevelBlock.BP_PracticeLevelBlock_C.AddTimer__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void AddTimer__UpdateFunc(); // Function BP_PracticeLevelBlock.BP_PracticeLevelBlock_C.AddTimer__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void ReduceTimer__FinishedFunc(); // Function BP_PracticeLevelBlock.BP_PracticeLevelBlock_C.ReduceTimer__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void ReduceTimer__UpdateFunc(); // Function BP_PracticeLevelBlock.BP_PracticeLevelBlock_C.ReduceTimer__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Open(); // Function BP_PracticeLevelBlock.BP_PracticeLevelBlock_C.Open // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void block(); // Function BP_PracticeLevelBlock.BP_PracticeLevelBlock_C.block // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PracticeLevelBlock(int32_t EntryPoint); // Function BP_PracticeLevelBlock.BP_PracticeLevelBlock_C.ExecuteUbergraph_BP_PracticeLevelBlock // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

