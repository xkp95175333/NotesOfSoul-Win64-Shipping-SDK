// BlueprintGeneratedClass TargetActor_TerritorySize.TargetActor_TerritorySize_C
// Size: 0x3a0 (Inherited: 0x340)
struct ATargetActor_TerritorySize_C : AGameplayAbilityTargetActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UStaticMeshComponent* Cube; // 0x348(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x350(0x08)
	struct FVector TerritorySize; // 0x358(0x0c)
	char pad_364[0xc]; // 0x364(0x0c)
	struct FTransform SpawnTransform; // 0x370(0x30)

	void ReceiveBeginPlay(); // Function TargetActor_TerritorySize.TargetActor_TerritorySize_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_TargetActor_TerritorySize(int32_t EntryPoint); // Function TargetActor_TerritorySize.TargetActor_TerritorySize_C.ExecuteUbergraph_TargetActor_TerritorySize // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

