// BlueprintGeneratedClass BP_PropCom.BP_PropCom_C
// Size: 0x208 (Inherited: 0x1e0)
struct UBP_PropCom_C : UBP_BaseShopPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1e0(0x08)
	struct TArray<struct FNOS_Store> PropData; // 0x1e8(0x10)
	struct UObject* BP_ParentCom; // 0x1f8(0x08)
	struct UBP_IntegrationCom_C* IntegrationCom_1; // 0x200(0x08)

	void InitData(); // Function BP_PropCom.BP_PropCom_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitProp(); // Function BP_PropCom.BP_PropCom_C.InitProp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_PropCom.BP_PropCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_PropCom(int32_t EntryPoint); // Function BP_PropCom.BP_PropCom_C.ExecuteUbergraph_BP_PropCom // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

