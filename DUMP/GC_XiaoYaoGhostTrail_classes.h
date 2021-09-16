// BlueprintGeneratedClass GC_XiaoYaoGhostTrail.GC_XiaoYaoGhostTrail_C
// Size: 0x2b0 (Inherited: 0x280)
struct AGC_XiaoYaoGhostTrail_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	struct TArray<struct USkeletalMeshComponent*> AllSKMesh; // 0x298(0x10)
	struct ANOS_PlayerHuman* TargetHuman; // 0x2a8(0x08)

	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function GC_XiaoYaoGhostTrail.GC_XiaoYaoGhostTrail_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_XiaoYaoGhostTrail.GC_XiaoYaoGhostTrail_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_XiaoYaoGhostTrail.GC_XiaoYaoGhostTrail_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_XiaoYaoGhostTrail(int32_t EntryPoint); // Function GC_XiaoYaoGhostTrail.GC_XiaoYaoGhostTrail_C.ExecuteUbergraph_GC_XiaoYaoGhostTrail // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

