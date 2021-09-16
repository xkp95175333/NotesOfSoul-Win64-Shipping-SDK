// BlueprintGeneratedClass BP_HelpTag.BP_HelpTag_C
// Size: 0x198 (Inherited: 0x151)
struct UBP_HelpTag_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct AUITextActor* TagName; // 0x160(0x08)
	struct FText File; // 0x168(0x18)
	struct UUIItem* TextVertical; // 0x180(0x08)
	bool bIsSetFile; // 0x188(0x01)
	char pad_189[0x7]; // 0x189(0x07)
	struct AUIBaseActor* TextSection; // 0x190(0x08)

	void SetInitInfo(struct FText Name, struct UUIItem* TextVertical); // Function BP_HelpTag.BP_HelpTag_C.SetInitInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnToggle(bool IsOn); // Function BP_HelpTag.BP_HelpTag_C.OnToggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_HelpTag(int32_t EntryPoint); // Function BP_HelpTag.BP_HelpTag_C.ExecuteUbergraph_BP_HelpTag // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

