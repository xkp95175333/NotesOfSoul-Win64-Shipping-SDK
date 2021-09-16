// BlueprintGeneratedClass BP_ActiveCom.BP_ActiveCom_C
// Size: 0x230 (Inherited: 0x151)
struct UBP_ActiveCom_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct TArray<struct ULGUIPrefab*> PrefabArray; // 0x160(0x10)
	struct AUIContainerActor* ParentContainer; // 0x170(0x08)
	struct AUIContainerActor* TypeContanier; // 0x178(0x08)
	struct TArray<struct FS_ActiveUITypeData> AllPrefabData; // 0x180(0x10)
	struct TArray<struct UBP_ActiveType_C*> AllTypeButtonCom; // 0x190(0x10)
	int32_t DefaultShowIndex; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct TArray<struct FS_ActiveUITypeData> HuoDouPrefabData; // 0x1a8(0x10)
	struct TArray<struct FS_ActiveUITypeData> FuLiPrefaData; // 0x1b8(0x10)
	struct TArray<struct FS_ActiveUITypeData> GuangGaoPrefaData; // 0x1c8(0x10)
	struct TArray<struct FS_ActiveUITypeData> XingWenPrefaData; // 0x1d8(0x10)
	bool IsClick; // 0x1e8(0x01)
	char pad_1E9[0x7]; // 0x1e9(0x07)
	struct TArray<struct UBP_Advertising_C*> Advertising; // 0x1f0(0x10)
	struct ULGUI_SwitchActor_C* SwitchCom; // 0x200(0x08)
	struct TArray<struct ULGUIBasePanel*> BaseCom; // 0x208(0x10)
	bool IsCalled; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct FMulticastInlineDelegate CallCanGetSomething; // 0x220(0x10)

	void CheckCallBack(bool bIsCall); // Function BP_ActiveCom.BP_ActiveCom_C.CheckCallBack // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchLoad(enum class E_SwitchButtonType Type); // Function BP_ActiveCom.BP_ActiveCom_C.SwitchLoad // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Clear(); // Function BP_ActiveCom.BP_ActiveCom_C.Clear // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ActiveCom.BP_ActiveCom_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBP(float DeltaTime); // Function BP_ActiveCom.BP_ActiveCom_C.UpdateBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_ActiveCom.BP_ActiveCom_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnSwitchChoose(int32_t Index); // Function BP_ActiveCom.BP_ActiveCom_C.OnSwitchChoose // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void CloseUI(); // Function BP_ActiveCom.BP_ActiveCom_C.CloseUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Open(); // Function BP_ActiveCom.BP_ActiveCom_C.Open // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void LoadPrefabData(struct TArray<struct FS_ActiveUITypeData> ActivePrefab, enum class E_SwitchButtonType Switch); // Function BP_ActiveCom.BP_ActiveCom_C.LoadPrefabData // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ActiveCom(int32_t EntryPoint); // Function BP_ActiveCom.BP_ActiveCom_C.ExecuteUbergraph_BP_ActiveCom // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void CallCanGetSomething__DelegateSignature(bool bIsShowRedPoint); // Function BP_ActiveCom.BP_ActiveCom_C.CallCanGetSomething__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

