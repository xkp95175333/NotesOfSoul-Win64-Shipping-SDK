// BlueprintGeneratedClass BP_PlayerOperation.BP_PlayerOperation_C
// Size: 0x170 (Inherited: 0x151)
struct UBP_PlayerOperation_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct FVector2D CanvasSize; // 0x160(0x08)
	struct ULGUIPrefab* OperationButton; // 0x168(0x08)

	void Add Operation Button(struct FText OperationText, struct FDelegate ClickDelegate); // Function BP_PlayerOperation.BP_PlayerOperation_C.Add Operation Button // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitOperationPanelPos(); // Function BP_PlayerOperation.BP_PlayerOperation_C.InitOperationPanelPos // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_PlayerOperation.BP_PlayerOperation_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_PlayerOperation.BP_PlayerOperation_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PlayerOperation(int32_t EntryPoint); // Function BP_PlayerOperation.BP_PlayerOperation_C.ExecuteUbergraph_BP_PlayerOperation // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

