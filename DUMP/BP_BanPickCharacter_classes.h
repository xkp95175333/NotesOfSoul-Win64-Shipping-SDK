// BlueprintGeneratedClass BP_BanPickCharacter.BP_BanPickCharacter_C
// Size: 0xf58 (Inherited: 0xeb0)
struct ABP_BanPickCharacter_C : ABP_CharacterModelBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xeb0(0x08)
	struct UWidgetComponent* Widget1; // 0xeb8(0x08)
	struct UWidgetComponent* HeadWidget; // 0xec0(0x08)
	float WheelSpeed; // 0xec8(0x04)
	float OffsetZSpeed; // 0xecc(0x04)
	float ArmMaxLength; // 0xed0(0x04)
	float ArmMinLength; // 0xed4(0x04)
	float ArmMaxOffsetZ; // 0xed8(0x04)
	float ArmMinOffsetZ; // 0xedc(0x04)
	float ArmLengthInterpTo; // 0xee0(0x04)
	float OffsetZInterpTo; // 0xee4(0x04)
	struct FString Name; // 0xee8(0x10)
	struct TMap<int32_t, struct FArmTransformStruct> CharacterArm; // 0xef8(0x50)
	struct TArray<int32_t> CurSkinArr; // 0xf48(0x10)

	void Set Cine Camera(float A); // Function BP_BanPickCharacter.BP_BanPickCharacter_C.Set Cine Camera // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetHeadWidgetLocation(struct FString NickName); // Function BP_BanPickCharacter.BP_BanPickCharacter_C.SetHeadWidgetLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateView(float Value); // Function BP_BanPickCharacter.BP_BanPickCharacter_C.UpdateView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateBianShenAnimInstance(); // Function BP_BanPickCharacter.BP_BanPickCharacter_C.UpdateBianShenAnimInstance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdateModel(struct FPlayerBPInfo PlayerInfo); // Function BP_BanPickCharacter.BP_BanPickCharacter_C.UpdateModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ReceiveBeginPlay(); // Function BP_BanPickCharacter.BP_BanPickCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue); // Function BP_BanPickCharacter.BP_BanPickCharacter_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1 // (BlueprintEvent) // @ game+0x1ec38f0
	void MaxView(); // Function BP_BanPickCharacter.BP_BanPickCharacter_C.MaxView // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void InitBanPickCharacter(); // Function BP_BanPickCharacter.BP_BanPickCharacter_C.InitBanPickCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_BanPickCharacter(int32_t EntryPoint); // Function BP_BanPickCharacter.BP_BanPickCharacter_C.ExecuteUbergraph_BP_BanPickCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

