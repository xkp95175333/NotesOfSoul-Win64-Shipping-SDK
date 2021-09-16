// BlueprintGeneratedClass BP_XiaoLi_Skill3TargetActor.BP_XiaoLi_Skill3TargetActor_C
// Size: 0x4b0 (Inherited: 0x480)
struct ABP_XiaoLi_Skill3TargetActor_C : ANOS_XiaoLi_Skill3TargetActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x480(0x08)
	struct UNiagaraComponent* NIagara_CannotTrans; // 0x488(0x08)
	struct UNiagaraComponent* Niagara_NoCost; // 0x490(0x08)
	struct UNiagaraComponent* Niagara_Normal; // 0x498(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x4a0(0x08)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x4a8(0x08)

	void SetMaterialColor(int32_t MaterialColor); // Function BP_XiaoLi_Skill3TargetActor.BP_XiaoLi_Skill3TargetActor_C.SetMaterialColor // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void Initialize(); // Function BP_XiaoLi_Skill3TargetActor.BP_XiaoLi_Skill3TargetActor_C.Initialize // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XiaoLi_Skill3TargetActor(int32_t EntryPoint); // Function BP_XiaoLi_Skill3TargetActor.BP_XiaoLi_Skill3TargetActor_C.ExecuteUbergraph_BP_XiaoLi_Skill3TargetActor // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

