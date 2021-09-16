// BlueprintGeneratedClass GC_XiaoJiang_Skill1.GC_XiaoJiang_Skill1_C
// Size: 0x2a0 (Inherited: 0x280)
struct AGC_XiaoJiang_Skill1_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ABP_XiaoJiang_C* BP_XiaoJiang; // 0x290(0x08)
	struct FTimerHandle HumanShadowLoopHandle; // 0x298(0x08)

	void ReceiveBeginPlay(); // Function GC_XiaoJiang_Skill1.GC_XiaoJiang_Skill1_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_XiaoJiang_Skill1.GC_XiaoJiang_Skill1_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void CE_ShowHumanShadow(); // Function GC_XiaoJiang_Skill1.GC_XiaoJiang_Skill1_C.CE_ShowHumanShadow // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_XiaoJiang_Skill1(int32_t EntryPoint); // Function GC_XiaoJiang_Skill1.GC_XiaoJiang_Skill1_C.ExecuteUbergraph_GC_XiaoJiang_Skill1 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

