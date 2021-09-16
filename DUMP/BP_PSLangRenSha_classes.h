// BlueprintGeneratedClass BP_PSLangRenSha.BP_PSLangRenSha_C
// Size: 0x5c9 (Inherited: 0x598)
struct ABP_PSLangRenSha_C : ANOS_PSLangRenSha {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x598(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x5a0(0x08)
	struct UMaterialInterface* NightSceneMaterial; // 0x5a8(0x08)
	struct UMaterialInterface* NightSkillMaterial; // 0x5b0(0x08)
	struct TArray<struct FWeightedBlendable> PostProcessArray; // 0x5b8(0x10)
	bool IsHidden; // 0x5c8(0x01)

	bool IsCorpseNearby(); // Function BP_PSLangRenSha.BP_PSLangRenSha_C.IsCorpseNearby // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1ec38f0
	void OnRep_bIsGhost(); // Function BP_PSLangRenSha.BP_PSLangRenSha_C.OnRep_bIsGhost // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_bIsNight(); // Function BP_PSLangRenSha.BP_PSLangRenSha_C.OnRep_bIsNight // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_bIsTransformInCd(); // Function BP_PSLangRenSha.BP_PSLangRenSha_C.OnRep_bIsTransformInCd // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnGameBegin(); // Function BP_PSLangRenSha.BP_PSLangRenSha_C.OnGameBegin // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ReviseNightEffectRadius(float Radius); // Function BP_PSLangRenSha.BP_PSLangRenSha_C.ReviseNightEffectRadius // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_Partner(); // Function BP_PSLangRenSha.BP_PSLangRenSha_C.OnRep_Partner // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void OnRep_Become25Ghost(); // Function BP_PSLangRenSha.BP_PSLangRenSha_C.OnRep_Become25Ghost // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PSLangRenSha(int32_t EntryPoint); // Function BP_PSLangRenSha.BP_PSLangRenSha_C.ExecuteUbergraph_BP_PSLangRenSha // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

