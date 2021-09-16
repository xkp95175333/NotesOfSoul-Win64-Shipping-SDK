// BlueprintGeneratedClass BP_DisplayLight.BP_DisplayLight_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_DisplayLight_C : AActor {
	struct USpotLightComponent* SpotLight1; // 0x220(0x08)
	struct USpotLightComponent* SpotLight; // 0x228(0x08)
	struct URectLightComponent* RectLight1; // 0x230(0x08)
	struct URectLightComponent* RectLight; // 0x238(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x240(0x08)

	void SetIntensity(float NewIntensity, float RectLight1, float SpotLight0, float SpotLight1); // Function BP_DisplayLight.BP_DisplayLight_C.SetIntensity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UserConstructionScript(); // Function BP_DisplayLight.BP_DisplayLight_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

