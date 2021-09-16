// BlueprintGeneratedClass BP_StoryLine.BP_StoryLine_C
// Size: 0x17c (Inherited: 0x151)
struct UBP_StoryLine_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_Data_C* Data; // 0x160(0x08)
	struct TArray<struct UDataTable*> DataTable; // 0x168(0x10)
	int32_t Gared; // 0x178(0x04)

	void Load Prefab Info MediaTexture(int32_t A, struct FText SoundRowName, enum class E_StoryLineType SoundEType, int32_t Gared, struct UMediaTexture* MediaTexture); // Function BP_StoryLine.BP_StoryLine_C.Load Prefab Info MediaTexture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Load Prefab Info Sound(int32_t A, struct FText TextureRowName, enum class E_StoryLineType SoundEType1, int32_t Gared, struct USoundBase* Sound); // Function BP_StoryLine.BP_StoryLine_C.Load Prefab Info Sound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct ULGUIBasePanel* Set(struct FText newText, enum class E_StoryLineType Index); // Function BP_StoryLine.BP_StoryLine_C.Set // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Load Prefab Info Texture(int32_t A, enum class E_StoryLineType EType, struct FText RowName, int32_t Gared, struct TArray<struct TSoftObjectPtr<struct UTexture2D>> Texture2D); // Function BP_StoryLine.BP_StoryLine_C.Load Prefab Info Texture // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Load Prefab Info Text(int32_t ID, int32_t Gared, enum class E_StoryLineType Type, struct FText TextDes, struct FText Name); // Function BP_StoryLine.BP_StoryLine_C.Load Prefab Info Text // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	struct UTexture2D* SetTexture(enum class E_StoryLineType Index); // Function BP_StoryLine.BP_StoryLine_C.SetTexture // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_StoryLine.BP_StoryLine_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_StoryLine(int32_t EntryPoint); // Function BP_StoryLine.BP_StoryLine_C.ExecuteUbergraph_BP_StoryLine // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

