// BlueprintGeneratedClass GC_YiMeiDaoZhang_SwordStorage.GC_YiMeiDaoZhang_SwordStorage_C
// Size: 0x2a8 (Inherited: 0x280)
struct AGC_YiMeiDaoZhang_SwordStorage_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ANOS_PlayerBase* NOS_Player; // 0x290(0x08)
	struct FTimerHandle Timer_StorageSound; // 0x298(0x08)
	struct UNiagaraComponent* StorageNS; // 0x2a0(0x08)

	void ReceiveBeginPlay(); // Function GC_YiMeiDaoZhang_SwordStorage.GC_YiMeiDaoZhang_SwordStorage_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_YiMeiDaoZhang_SwordStorage.GC_YiMeiDaoZhang_SwordStorage_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_YiMeiDaoZhang_SwordStorage(int32_t EntryPoint); // Function GC_YiMeiDaoZhang_SwordStorage.GC_YiMeiDaoZhang_SwordStorage_C.ExecuteUbergraph_GC_YiMeiDaoZhang_SwordStorage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

