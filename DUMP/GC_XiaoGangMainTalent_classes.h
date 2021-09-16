// BlueprintGeneratedClass GC_XiaoGangMainTalent.GC_XiaoGangMainTalent_C
// Size: 0x2b8 (Inherited: 0x280)
struct AGC_XiaoGangMainTalent_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct UBP_UIControlComponent_C* Autonomous UIControlComp; // 0x290(0x08)
	int32_t Index; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UCameraComponent* Autonomous CameraComp; // 0x2a0(0x08)
	struct USkeletalMeshComponent* WatchComp; // 0x2a8(0x08)
	struct USkeletalMeshComponent* GunComp; // 0x2b0(0x08)

	void ReceiveBeginPlay(); // Function GC_XiaoGangMainTalent.GC_XiaoGangMainTalent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveActorBeginOverlap(struct AActor* OtherActor); // Function GC_XiaoGangMainTalent.GC_XiaoGangMainTalent_C.ReceiveActorBeginOverlap // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function GC_XiaoGangMainTalent.GC_XiaoGangMainTalent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_XiaoGangMainTalent.GC_XiaoGangMainTalent_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveDestroyed(); // Function GC_XiaoGangMainTalent.GC_XiaoGangMainTalent_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function GC_XiaoGangMainTalent.GC_XiaoGangMainTalent_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_XiaoGangMainTalent(int32_t EntryPoint); // Function GC_XiaoGangMainTalent.GC_XiaoGangMainTalent_C.ExecuteUbergraph_GC_XiaoGangMainTalent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

