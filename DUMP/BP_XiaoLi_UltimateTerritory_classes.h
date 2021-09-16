// BlueprintGeneratedClass BP_XiaoLi_UltimateTerritory.BP_XiaoLi_UltimateTerritory_C
// Size: 0x378 (Inherited: 0x358)
struct ABP_XiaoLi_UltimateTerritory_C : ANOS_XiaoLi_UltimateTerritory {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UChildActorComponent* BP_TerritoryPhysicItemFloatArea; // 0x360(0x08)
	struct URectLightComponent* RectLight; // 0x368(0x08)
	struct UStaticMeshComponent* Cube; // 0x370(0x08)

	void GetEffect(struct TMap<struct FName, struct TSoftObjectPtr<struct UNiagaraSystem>> All Use NS, struct TMap<struct FName, struct TSoftObjectPtr<struct UMaterialInterface>> All Use Materials); // Function BP_XiaoLi_UltimateTerritory.BP_XiaoLi_UltimateTerritory_C.GetEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_XiaoLi_UltimateTerritory.BP_XiaoLi_UltimateTerritory_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_XiaoLi_UltimateTerritory.BP_XiaoLi_UltimateTerritory_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void InitTerritoryPhysicArea(); // Function BP_XiaoLi_UltimateTerritory.BP_XiaoLi_UltimateTerritory_C.InitTerritoryPhysicArea // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XiaoLi_UltimateTerritory(int32_t EntryPoint); // Function BP_XiaoLi_UltimateTerritory.BP_XiaoLi_UltimateTerritory_C.ExecuteUbergraph_BP_XiaoLi_UltimateTerritory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

