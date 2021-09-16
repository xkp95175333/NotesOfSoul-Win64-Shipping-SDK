// BlueprintGeneratedClass GC_XiaoJiangSkill3.GC_XiaoJiangSkill3_C
// Size: 0x388 (Inherited: 0x280)
struct AGC_XiaoJiangSkill3_C : AGameplayCueNotify_Actor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UPostProcessComponent* PostProcess; // 0x288(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x290(0x08)
	float Tl_Fade_Fade_BFC3A1DA48D44E6556FE55ABAE459640; // 0x298(0x04)
	enum class ETimelineDirection Tl_Fade__Direction_BFC3A1DA48D44E6556FE55ABAE459640; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct UTimelineComponent* Tl_Fade; // 0x2a0(0x08)
	float Tl_GhostStart_Power_7EF17EDF4E1B798FD69B20AFF0CBDCB3; // 0x2a8(0x04)
	enum class ETimelineDirection Tl_GhostStart__Direction_7EF17EDF4E1B798FD69B20AFF0CBDCB3; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct UTimelineComponent* Tl_GhostStart; // 0x2b0(0x08)
	struct UMaterialInstanceDynamic* MI_HumanBeSuck; // 0x2b8(0x08)
	struct ANOS_PlayerBase* Player; // 0x2c0(0x08)
	struct FGameplayCueParameters GCData; // 0x2c8(0xb8)
	struct UMaterialInstanceDynamic* MI_GhostSuck; // 0x380(0x08)

	void Tl_GhostStart__FinishedFunc(); // Function GC_XiaoJiangSkill3.GC_XiaoJiangSkill3_C.Tl_GhostStart__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Tl_GhostStart__UpdateFunc(); // Function GC_XiaoJiangSkill3.GC_XiaoJiangSkill3_C.Tl_GhostStart__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Tl_Fade__FinishedFunc(); // Function GC_XiaoJiangSkill3.GC_XiaoJiangSkill3_C.Tl_Fade__FinishedFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void Tl_Fade__UpdateFunc(); // Function GC_XiaoJiangSkill3.GC_XiaoJiangSkill3_C.Tl_Fade__UpdateFunc // (BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function GC_XiaoJiangSkill3.GC_XiaoJiangSkill3_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void K2_HandleGameplayCue(struct AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function GC_XiaoJiangSkill3.GC_XiaoJiangSkill3_C.K2_HandleGameplayCue // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_GC_XiaoJiangSkill3(int32_t EntryPoint); // Function GC_XiaoJiangSkill3.GC_XiaoJiangSkill3_C.ExecuteUbergraph_GC_XiaoJiangSkill3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

