// BlueprintGeneratedClass BP_PhysicItem.BP_PhysicItem_C
// Size: 0x24c (Inherited: 0x220)
struct ABP_PhysicItem_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAudioComponent* Audio; // 0x228(0x08)
	struct UBoxComponent* Box; // 0x230(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x238(0x08)
	float MinGravity; // 0x240(0x04)
	float MaxGravity; // 0x244(0x04)
	float FinalGravity; // 0x248(0x04)

	void ReceiveBeginPlay(); // Function BP_PhysicItem.BP_PhysicItem_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void InitBox(); // Function BP_PhysicItem.BP_PhysicItem_C.InitBox // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitMesh(); // Function BP_PhysicItem.BP_PhysicItem_C.InitMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitData(); // Function BP_PhysicItem.BP_PhysicItem_C.InitData // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void HitSound(); // Function BP_PhysicItem.BP_PhysicItem_C.HitSound // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PhysicItem(int32_t EntryPoint); // Function BP_PhysicItem.BP_PhysicItem_C.ExecuteUbergraph_BP_PhysicItem // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

