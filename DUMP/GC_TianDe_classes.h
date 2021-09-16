// BlueprintGeneratedClass GC_TianDe.GC_TianDe_C
// Size: 0x308 (Inherited: 0x280)
struct AGC_TianDe_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ANOS_PlayerHuman* TargetHuman; // 0x290(0x08)
	struct FSkeletalMeshMergeParams MeshMergeParams; // 0x298(0x40)
	struct USkeletalMesh* ComposeMesh; // 0x2d8(0x08)
	struct USkeletalMeshComponent* ComposeMeshComp; // 0x2e0(0x08)
	struct TArray<struct USkeletalMeshComponent*> AllSKMesh; // 0x2e8(0x10)
	struct USkeletalMeshComponent* NackedBodyMeshComp; // 0x2f8(0x08)
	struct UStaticMeshComponent* SM_Cilinder; // 0x300(0x08)

	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_TianDe.GC_TianDe_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_TianDe.GC_TianDe_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_TianDe(int32_t EntryPoint); // Function GC_TianDe.GC_TianDe_C.ExecuteUbergraph_GC_TianDe // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

