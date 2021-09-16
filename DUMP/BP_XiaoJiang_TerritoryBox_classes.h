// BlueprintGeneratedClass BP_XiaoJiang_TerritoryBox.BP_XiaoJiang_TerritoryBox_C
// Size: 0x270 (Inherited: 0x258)
struct ABP_XiaoJiang_TerritoryBox_C : ANOS_XiaoJiang_TerritoryBox {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x258(0x08)
	struct UChildActorComponent* BP_TerritoryPhysicItemFloatArea; // 0x260(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x268(0x08)

	void ReceiveBeginPlay(); // Function BP_XiaoJiang_TerritoryBox.BP_XiaoJiang_TerritoryBox_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveTick(float DeltaSeconds); // Function BP_XiaoJiang_TerritoryBox.BP_XiaoJiang_TerritoryBox_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void NoticeOneHumanInBox(struct ANOS_PlayerHuman* Human); // Function BP_XiaoJiang_TerritoryBox.BP_XiaoJiang_TerritoryBox_C.NoticeOneHumanInBox // (Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void InitTerritoryPhysicArea(); // Function BP_XiaoJiang_TerritoryBox.BP_XiaoJiang_TerritoryBox_C.InitTerritoryPhysicArea // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_XiaoJiang_TerritoryBox(int32_t EntryPoint); // Function BP_XiaoJiang_TerritoryBox.BP_XiaoJiang_TerritoryBox_C.ExecuteUbergraph_BP_XiaoJiang_TerritoryBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

