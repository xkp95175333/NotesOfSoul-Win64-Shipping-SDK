// BlueprintGeneratedClass BP_GhostTrails.BP_GhostTrails_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_GhostTrails_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPoseableMeshComponent* PoseableMesh; // 0x228(0x08)
	float Opacity_Opacity_5B007AC64B094BEF225A8B910B2C4BF7; // 0x230(0x04)
	enum class ETimelineDirection Opacity__Direction_5B007AC64B094BEF225A8B910B2C4BF7; // 0x234(0x01)
	char pad_235[0x3]; // 0x235(0x03)
	struct UTimelineComponent* Opacity; // 0x238(0x08)
	struct ABP_PlayerHumanBase_C* Player Human Base Ref; // 0x240(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DynamicMats; // 0x248(0x10)

	void Opacity__FinishedFunc(); // Function BP_GhostTrails.BP_GhostTrails_C.Opacity__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Opacity__UpdateFunc(); // Function BP_GhostTrails.BP_GhostTrails_C.Opacity__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_GhostTrails.BP_GhostTrails_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void GhostTrailEvent(); // Function BP_GhostTrails.BP_GhostTrails_C.GhostTrailEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GhostTrails(int32_t EntryPoint); // Function BP_GhostTrails.BP_GhostTrails_C.ExecuteUbergraph_BP_GhostTrails // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

