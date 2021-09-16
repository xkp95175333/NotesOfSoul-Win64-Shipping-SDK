// BlueprintGeneratedClass GC_XiaoZhuSkill3.GC_XiaoZhuSkill3_C
// Size: 0x2f0 (Inherited: 0x280)
struct AGC_XiaoZhuSkill3_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UNiagaraComponent* Niagara; // 0x288(0x08)
	float TimeLine_value_EECBC91942336BDF27B3A79E022F1935; // 0x290(0x04)
	enum class ETimelineDirection TimeLine__Direction_EECBC91942336BDF27B3A79E022F1935; // 0x294(0x01)
	char pad_295[0x3]; // 0x295(0x03)
	struct UTimelineComponent* Timeline; // 0x298(0x08)
	struct USkeletalMeshComponent* GhostMesh; // 0x2a0(0x08)
	struct AActor* HitActor; // 0x2a8(0x08)
	bool bIsLinkActor; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FVector HitPoint; // 0x2b4(0x0c)
	struct FVector CurMovePoint; // 0x2c0(0x0c)
	float Speed; // 0x2cc(0x04)
	float StartToEndLength; // 0x2d0(0x04)
	bool IsLaunch; // 0x2d4(0x01)
	char pad_2D5[0x3]; // 0x2d5(0x03)
	struct FVector LaunchDir; // 0x2d8(0x0c)
	struct FVector StartPoint; // 0x2e4(0x0c)

	void InitCable(struct FGameplayCueParameters Parameters, struct UObject* Ghost); // Function GC_XiaoZhuSkill3.GC_XiaoZhuSkill3_C.InitCable // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void TimeLine__FinishedFunc(); // Function GC_XiaoZhuSkill3.GC_XiaoZhuSkill3_C.TimeLine__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void TimeLine__UpdateFunc(); // Function GC_XiaoZhuSkill3.GC_XiaoZhuSkill3_C.TimeLine__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_XiaoZhuSkill3.GC_XiaoZhuSkill3_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function GC_XiaoZhuSkill3.GC_XiaoZhuSkill3_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_XiaoZhuSkill3.GC_XiaoZhuSkill3_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_XiaoZhuSkill3(int32_t EntryPoint); // Function GC_XiaoZhuSkill3.GC_XiaoZhuSkill3_C.ExecuteUbergraph_GC_XiaoZhuSkill3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

