// BlueprintGeneratedClass BP_ActiveType.BP_ActiveType_C
// Size: 0x1c8 (Inherited: 0x151)
struct UBP_ActiveType_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct AUISpriteActor* TypePiont; // 0x160(0x08)
	struct AUITextActor* TypeText; // 0x168(0x08)
	struct AUITextActor* TypeNameText; // 0x170(0x08)
	struct AUISpriteActor* TypeButton; // 0x178(0x08)
	struct AUISpriteActor* MoveSprite; // 0x180(0x08)
	struct FMulticastInlineDelegate OnButtonClick; // 0x188(0x10)
	int32_t Index; // 0x198(0x04)
	bool IsOnChoose; // 0x19c(0x01)
	char pad_19D[0x3]; // 0x19d(0x03)
	struct AUISpriteActor* RedPiont; // 0x1a0(0x08)
	struct TArray<struct ULTweener*> Array; // 0x1a8(0x10)
	struct AUISpriteActor* BaseResPiont; // 0x1b8(0x08)
	struct AUIContainerActor* RedpointBase; // 0x1c0(0x08)

	void InitInfo(int32_t Index, struct FText TypeText, struct FText TypeNameText); // Function BP_ActiveType.BP_ActiveType_C.InitInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateState(int32_t StateIndex); // Function BP_ActiveType.BP_ActiveType_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_ActiveType.BP_ActiveType_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void TryChoose(); // Function BP_ActiveType.BP_ActiveType_C.TryChoose // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnEnter(); // Function BP_ActiveType.BP_ActiveType_C.OnEnter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnExit(); // Function BP_ActiveType.BP_ActiveType_C.OnExit // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateRedPiont(bool bIsShow); // Function BP_ActiveType.BP_ActiveType_C.UpdateRedPiont // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_ActiveType(int32_t EntryPoint); // Function BP_ActiveType.BP_ActiveType_C.ExecuteUbergraph_BP_ActiveType // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
	void OnButtonClick__DelegateSignature(int32_t Index); // Function BP_ActiveType.BP_ActiveType_C.OnButtonClick__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

