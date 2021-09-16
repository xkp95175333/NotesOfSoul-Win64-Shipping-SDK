// BlueprintGeneratedClass BP_Teleporter.BP_Teleporter_C
// Size: 0x285 (Inherited: 0x250)
struct ABP_Teleporter_C : ANOS_Teleporter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x250(0x08)
	struct UStaticMeshComponent* Sphere2; // 0x258(0x08)
	struct UStaticMeshComponent* Sphere1; // 0x260(0x08)
	struct FVector Portal1Location; // 0x268(0x0c)
	struct FVector Portal2Location; // 0x274(0x0c)
	float InteractTime; // 0x280(0x04)
	bool InteractPortal1; // 0x284(0x01)

	void ReceiveBeginPlay(); // Function BP_Teleporter.BP_Teleporter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnInteractSuc(struct ACharacter* Character, int32_t InteractIndex); // Function BP_Teleporter.BP_Teleporter_C.OnInteractSuc // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Teleporter(int32_t EntryPoint); // Function BP_Teleporter.BP_Teleporter_C.ExecuteUbergraph_BP_Teleporter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

