// BlueprintGeneratedClass BP_Data.BP_Data_C
// Size: 0x1d0 (Inherited: 0x151)
struct UBP_Data_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	int32_t CharactID; // 0x160(0x04)
	char pad_164[0x4]; // 0x164(0x04)
	struct FString Ability; // 0x168(0x10)
	struct FString File; // 0x178(0x10)
	struct FString StoryLine; // 0x188(0x10)
	struct FString Gift; // 0x198(0x10)
	struct ABP_CharacterModel_C* Pawn; // 0x1a8(0x08)
	struct APawn* OriginalPawn; // 0x1b0(0x08)
	struct UBP_Skills_C* 111; // 0x1b8(0x08)
	struct UBP_Skills_C* NewVar_2; // 0x1c0(0x08)
	int32_t Level; // 0x1c8(0x04)
	int32_t intimacy; // 0x1cc(0x04)

	void SetFocus(bool IsFocus); // Function BP_Data.BP_Data_C.SetFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SetViewTarget(struct AUIBaseActor*   ); // Function BP_Data.BP_Data_C.SetViewTarget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Spwan Pawn Mesh(); // Function BP_Data.BP_Data_C.Spwan Pawn Mesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Init(); // Function BP_Data.BP_Data_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void AwakeBP(); // Function BP_Data.BP_Data_C.AwakeBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_Data.BP_Data_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void OnBattleEndEvent_Event_1(); // Function BP_Data.BP_Data_C.OnBattleEndEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_Data(int32_t EntryPoint); // Function BP_Data.BP_Data_C.ExecuteUbergraph_BP_Data // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

