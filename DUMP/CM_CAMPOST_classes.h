// BlueprintGeneratedClass CM_CAMPOST.CM_CAMPOST_C
// Size: 0x5a4 (Inherited: 0x48)
struct UCM_CAMPOST_C : UCameraModifier {
	char pad_48[0x8]; // 0x48(0x08)
	struct FPostProcessSettings Post Process Settings; // 0x50(0x550)
	float Post Process Blend Weight; // 0x5a0(0x04)

	void BlueprintModifyPostProcess(float DeltaTime, float PostProcessBlendWeight, struct FPostProcessSettings PostProcessSettings); // Function CM_CAMPOST.CM_CAMPOST_C.BlueprintModifyPostProcess // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

