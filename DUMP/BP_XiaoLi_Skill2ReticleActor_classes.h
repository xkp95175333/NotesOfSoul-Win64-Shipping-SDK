// BlueprintGeneratedClass BP_XiaoLi_Skill2ReticleActor.BP_XiaoLi_Skill2ReticleActor_C
// Size: 0x450 (Inherited: 0x430)
struct ABP_XiaoLi_Skill2ReticleActor_C : ANOS_XiaoLi_Skill2ReticleActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)
	struct UDecalComponent* Decal_Vaild; // 0x438(0x08)
	struct UDecalComponent* Decal_Invaild; // 0x440(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x448(0x08)

	void Initialize(); // Function BP_XiaoLi_Skill2ReticleActor.BP_XiaoLi_Skill2ReticleActor_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchBloodyPool(float Switch); // Function BP_XiaoLi_Skill2ReticleActor.BP_XiaoLi_Skill2ReticleActor_C.SwitchBloodyPool // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void SetReticleValid(bool bIsValid); // Function BP_XiaoLi_Skill2ReticleActor.BP_XiaoLi_Skill2ReticleActor_C.SetReticleValid // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XiaoLi_Skill2ReticleActor(int32_t EntryPoint); // Function BP_XiaoLi_Skill2ReticleActor.BP_XiaoLi_Skill2ReticleActor_C.ExecuteUbergraph_BP_XiaoLi_Skill2ReticleActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

