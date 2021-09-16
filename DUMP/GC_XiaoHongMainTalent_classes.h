// BlueprintGeneratedClass GC_XiaoHongMainTalent.GC_XiaoHongMainTalent_C
// Size: 0x2c0 (Inherited: 0x280)
struct AGC_XiaoHongMainTalent_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x288(0x08)
	struct ABP_XiaoHong_C* Character; // 0x290(0x08)
	struct UNiagaraComponent* LingtiNiagara; // 0x298(0x08)
	struct TArray<struct USkeletalMeshComponent*> SkeletalMeshes; // 0x2a0(0x10)
	struct TArray<struct UMaterialInterface*> SkeletalMeshMaterials; // 0x2b0(0x10)

	void SkillPerform(bool Start); // Function GC_XiaoHongMainTalent.GC_XiaoHongMainTalent_C.SkillPerform // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void GetDefualtMaterials(); // Function GC_XiaoHongMainTalent.GC_XiaoHongMainTalent_C.GetDefualtMaterials // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_XiaoHongMainTalent.GC_XiaoHongMainTalent_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_XiaoHongMainTalent(int32_t EntryPoint); // Function GC_XiaoHongMainTalent.GC_XiaoHongMainTalent_C.ExecuteUbergraph_GC_XiaoHongMainTalent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

