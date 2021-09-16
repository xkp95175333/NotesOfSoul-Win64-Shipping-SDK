// BlueprintGeneratedClass BP_SM_PostProcess.BP_SM_PostProcess_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_SM_PostProcess_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UPostProcessComponent* PostProcess; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct UMaterialInterface* NightSceneMaterial; // 0x238(0x08)

	void EnableNight(bool IsEnable, struct UMaterialInterface* MaterialInterface); // Function BP_SM_PostProcess.BP_SM_PostProcess_C.EnableNight // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReviseNightEffectRadius(float Value); // Function BP_SM_PostProcess.BP_SM_PostProcess_C.ReviseNightEffectRadius // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReviseSceneNight(bool IsEnable); // Function BP_SM_PostProcess.BP_SM_PostProcess_C.ReviseSceneNight // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SM_PostProcess(int32_t EntryPoint); // Function BP_SM_PostProcess.BP_SM_PostProcess_C.ExecuteUbergraph_BP_SM_PostProcess // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

