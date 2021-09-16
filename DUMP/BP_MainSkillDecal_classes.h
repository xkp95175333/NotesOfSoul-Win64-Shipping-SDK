// BlueprintGeneratedClass BP_MainSkillDecal.BP_MainSkillDecal_C
// Size: 0x254 (Inherited: 0x220)
struct ABP_MainSkillDecal_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDecalComponent* Decal; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct FVector Vector; // 0x238(0x0c)
	struct FVector StarLocation; // 0x244(0x0c)
	float Radiu; // 0x250(0x04)

	void ReceiveTick(float DeltaSeconds); // Function BP_MainSkillDecal.BP_MainSkillDecal_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateLocation(struct FVector StartPos, struct FVector LaunchVelocity); // Function BP_MainSkillDecal.BP_MainSkillDecal_C.UpdateLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_MainSkillDecal(int32_t EntryPoint); // Function BP_MainSkillDecal.BP_MainSkillDecal_C.ExecuteUbergraph_BP_MainSkillDecal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

