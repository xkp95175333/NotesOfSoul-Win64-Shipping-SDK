// BlueprintGeneratedClass BP_SecondLevel.BP_SecondLevel_C
// Size: 0x1ec (Inherited: 0x151)
struct UBP_SecondLevel_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	enum class E_StoryLineType StoryLineType; // 0x160(0x01)
	char pad_161[0x7]; // 0x161(0x07)
	struct UBP_Data_C* Data; // 0x168(0x08)
	struct FText TextDes; // 0x170(0x18)
	struct USoundBase* Sound; // 0x188(0x08)
	struct UMediaTexture* MediaStory; // 0x190(0x08)
	struct TArray<struct TSoftObjectPtr<struct UTexture2D>> Texture2D; // 0x198(0x10)
	struct FText Title; // 0x1a8(0x18)
	struct FText Text; // 0x1c0(0x18)
	struct UMediaTexture* Media; // 0x1d8(0x08)
	struct UUISprite* Prefab; // 0x1e0(0x08)
	int32_t Change; // 0x1e8(0x04)

	void SkillsVideo(); // Function BP_SecondLevel.BP_SecondLevel_C.SkillsVideo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void SwitchCreate(); // Function BP_SecondLevel.BP_SecondLevel_C.SwitchCreate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_SecondLevel.BP_SecondLevel_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_SecondLevel(int32_t EntryPoint); // Function BP_SecondLevel.BP_SecondLevel_C.ExecuteUbergraph_BP_SecondLevel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

