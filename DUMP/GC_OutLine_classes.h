// BlueprintGeneratedClass GC_OutLine.GC_OutLine_C
// Size: 0x48 (Inherited: 0x40)
struct UGC_OutLine_C : UGameplayCueNotify_Static {
	struct AActor* Effect Causer; // 0x40(0x08)

	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GC_OutLine.GC_OutLine_C.OnExecute // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1ec38f0
	bool OnRemove(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GC_OutLine.GC_OutLine_C.OnRemove // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1ec38f0
	bool OnActive(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GC_OutLine.GC_OutLine_C.OnActive // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_OutLine.GC_OutLine_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1ec38f0
};

