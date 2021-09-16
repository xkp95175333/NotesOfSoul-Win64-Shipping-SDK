// BlueprintGeneratedClass BP_Ghost_LiftTerritory.BP_Ghost_LiftTerritory_C
// Size: 0x2f0 (Inherited: 0x2c8)
struct ABP_Ghost_LiftTerritory_C : ANOS_Ghost_LiftTerritory {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UChildActorComponent* BP_TerritoryPhysicItemFloatArea; // 0x2d0(0x08)
	struct URectLightComponent* RectLight; // 0x2d8(0x08)
	struct UStaticMeshComponent* Cube; // 0x2e0(0x08)
	struct UAudioComponent* Audio; // 0x2e8(0x08)

	void GetEffect(struct TMap<struct FName, struct TSoftObjectPtr<struct UNiagaraSystem>> All Use NS, struct TMap<struct FName, struct TSoftObjectPtr<struct UMaterialInterface>> All Use Materials); // Function BP_Ghost_LiftTerritory.BP_Ghost_LiftTerritory_C.GetEffect // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_Ghost_LiftTerritory.BP_Ghost_LiftTerritory_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Ghost_LiftTerritory(int32_t EntryPoint); // Function BP_Ghost_LiftTerritory.BP_Ghost_LiftTerritory_C.ExecuteUbergraph_BP_Ghost_LiftTerritory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

