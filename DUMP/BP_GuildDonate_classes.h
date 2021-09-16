// BlueprintGeneratedClass BP_GuildDonate.BP_GuildDonate_C
// Size: 0x1b8 (Inherited: 0x17c)
struct UBP_GuildDonate_C : UBP_DonatePanelBase_C {
	char pad_17C[0x4]; // 0x17c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x180(0x08)
	float anchorOffsetX; // 0x188(0x04)
	float anchorOffsetY; // 0x18c(0x04)
	float PivotX; // 0x190(0x04)
	float PivotY; // 0x194(0x04)
	struct FMulticastInlineDelegate OnClickConfrim; // 0x198(0x10)
	struct FMulticastInlineDelegate Close; // 0x1a8(0x10)

	void ShowPanel(); // Function BP_GuildDonate.BP_GuildDonate_C.ShowPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void UpdatePosition(); // Function BP_GuildDonate.BP_GuildDonate_C.UpdatePosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClickConfrim(); // Function BP_GuildDonate.BP_GuildDonate_C.ClickConfrim // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ClosePanel(); // Function BP_GuildDonate.BP_GuildDonate_C.ClosePanel // (BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_GuildDonate(int32_t EntryPoint); // Function BP_GuildDonate.BP_GuildDonate_C.ExecuteUbergraph_BP_GuildDonate // (Final|UbergraphFunction) // @ game+0x1ec38f0
	void Close__DelegateSignature(); // Function BP_GuildDonate.BP_GuildDonate_C.Close__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void OnClickConfrim__DelegateSignature(int32_t Count, int32_t ID, struct FText Name); // Function BP_GuildDonate.BP_GuildDonate_C.OnClickConfrim__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
};

