// WidgetBlueprintGeneratedClass WBP_OneFriendRelationshipGroup.WBP_OneFriendRelationshipGroup_C
// Size: 0x288 (Inherited: 0x260)
struct UWBP_OneFriendRelationshipGroup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* HorizontalBox_56; // 0x268(0x08)
	struct UImage* Image_136; // 0x270(0x08)
	struct TArray<struct FKxFriendData> FriendDataList; // 0x278(0x10)

	void UpdateGroup(); // Function WBP_OneFriendRelationshipGroup.WBP_OneFriendRelationshipGroup_C.UpdateGroup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void Construct(); // Function WBP_OneFriendRelationshipGroup.WBP_OneFriendRelationshipGroup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_WBP_OneFriendRelationshipGroup(int32_t EntryPoint); // Function WBP_OneFriendRelationshipGroup.WBP_OneFriendRelationshipGroup_C.ExecuteUbergraph_WBP_OneFriendRelationshipGroup // (Final|UbergraphFunction) // @ game+0x1ec38f0
};

