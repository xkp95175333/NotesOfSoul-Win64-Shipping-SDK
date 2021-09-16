// BlueprintGeneratedClass BP_PlantGrid.BP_PlantGrid_C
// Size: 0x2c0 (Inherited: 0x244)
struct ABP_PlantGrid_C : ABP_LobbyInteract_C {
	char pad_244[0x4]; // 0x244(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct USceneComponent* UIScene; // 0x250(0x08)
	struct UStaticMeshComponent* Plant; // 0x258(0x08)
	struct UStaticMeshComponent* Grid; // 0x260(0x08)
	struct FTimerHandle RipeTimer; // 0x268(0x08)
	bool PlantIsRipe; // 0x270(0x01)
	bool GridAlreadyHasPlant; // 0x271(0x01)
	char pad_272[0x6]; // 0x272(0x06)
	struct ABP_LobbyCharacter_C* Character; // 0x278(0x08)
	int64_t CurLevelTime; // 0x280(0x08)
	int64_t CurLevelRemainingTime; // 0x288(0x08)
	struct FTimerHandle DecreaseRemaningTimeTimer; // 0x290(0x08)
	int32_t gridId; // 0x298(0x04)
	int32_t CurLevel; // 0x29c(0x04)
	struct FKxGridInfo GridInfo; // 0x2a0(0x10)
	int64_t RipeRemainingTime; // 0x2b0(0x08)
	struct UBP_Plant_C* BP_Plant; // 0x2b8(0x08)

	void CalculateRipRemainingTime(struct FKxGridInfo GridInfo); // Function BP_PlantGrid.BP_PlantGrid_C.CalculateRipRemainingTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateGrid(struct FKxGridInfo GridInfo); // Function BP_PlantGrid.BP_PlantGrid_C.UpdateGrid // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GridInit(); // Function BP_PlantGrid.BP_PlantGrid_C.GridInit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HandleWatering(); // Function BP_PlantGrid.BP_PlantGrid_C.HandleWatering // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HandlePlant(); // Function BP_PlantGrid.BP_PlantGrid_C.HandlePlant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HandleDelete(); // Function BP_PlantGrid.BP_PlantGrid_C.HandleDelete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HandleCollect(); // Function BP_PlantGrid.BP_PlantGrid_C.HandleCollect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnLoaded_131B78E1480B1B4FBD8981831081626E(struct UObject* Loaded); // Function BP_PlantGrid.BP_PlantGrid_C.OnLoaded_131B78E1480B1B4FBD8981831081626E // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnInteractSuc(struct ACharacter* Character, int32_t InteractIndex); // Function BP_PlantGrid.BP_PlantGrid_C.OnInteractSuc // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CalculateRemainingTimeTimer_Trigger(); // Function BP_PlantGrid.BP_PlantGrid_C.CalculateRemainingTimeTimer_Trigger // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void DecreseRemainingTime(); // Function BP_PlantGrid.BP_PlantGrid_C.DecreseRemainingTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_PlantGrid.BP_PlantGrid_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_1(int32_t gridId, struct TArray<struct FKxPlantReward> Rewards); // Function BP_PlantGrid.BP_PlantGrid_C.CustomEvent_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnPlantEvent_Event_1(struct FKxGridInfo GridInfo); // Function BP_PlantGrid.BP_PlantGrid_C.OnPlantEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnWaterPlantEvent_Event_1(struct FKxGridInfo GridInfo); // Function BP_PlantGrid.BP_PlantGrid_C.OnWaterPlantEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnDeletePlantEvent_Event_1(struct FKxGridInfo GridInfo); // Function BP_PlantGrid.BP_PlantGrid_C.OnDeletePlantEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetPlantMesh(struct FString Path String); // Function BP_PlantGrid.BP_PlantGrid_C.SetPlantMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CustomEvent_3(struct TArray<struct FKxGridInfo> GridInfos); // Function BP_PlantGrid.BP_PlantGrid_C.CustomEvent_3 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PlantGrid(int32_t EntryPoint); // Function BP_PlantGrid.BP_PlantGrid_C.ExecuteUbergraph_BP_PlantGrid // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

