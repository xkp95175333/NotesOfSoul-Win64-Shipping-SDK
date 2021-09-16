// BlueprintGeneratedClass BP_ShaoZiPaoWuXIan.BP_ShaoZiPaoWuXIan_C
// Size: 0x264 (Inherited: 0x220)
struct ABP_ShaoZiPaoWuXIan_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDecalComponent* Decal; // 0x228(0x08)
	struct USphereComponent* Sphere; // 0x230(0x08)
	struct USplineComponent* Spline; // 0x238(0x08)
	struct UBillboardComponent* Billboard; // 0x240(0x08)
	struct TArray<struct UParticleSystemComponent*> partciles; // 0x248(0x10)
	struct FVector Start Pos; // 0x258(0x0c)

	bool Preject Collsion(struct TArray<struct FVector> OutPathPositions, struct FVector OutLastTraceDestination, struct FHitResult OutHit); // Function BP_ShaoZiPaoWuXIan.BP_ShaoZiPaoWuXIan_C.Preject Collsion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UserConstructionScript(); // Function BP_ShaoZiPaoWuXIan.BP_ShaoZiPaoWuXIan_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_ShaoZiPaoWuXIan.BP_ShaoZiPaoWuXIan_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_ShaoZiPaoWuXIan.BP_ShaoZiPaoWuXIan_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ShaoZiPaoWuXIan(int32_t EntryPoint); // Function BP_ShaoZiPaoWuXIan.BP_ShaoZiPaoWuXIan_C.ExecuteUbergraph_BP_ShaoZiPaoWuXIan // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

