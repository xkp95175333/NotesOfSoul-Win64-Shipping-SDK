// BlueprintGeneratedClass BP_LGUIFile.BP_LGUIFile_C
// Size: 0x1b8 (Inherited: 0x151)
struct UBP_LGUIFile_C : UBP_BasePanel_C {
	char pad_151[0x7]; // 0x151(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x158(0x08)
	struct UBP_Data_C* Data; // 0x160(0x08)
	struct TArray<struct UUIText*> UIText; // 0x168(0x10)
	struct TArray<struct UUIText*> UITextXingQu; // 0x178(0x10)
	struct TArray<struct UUIText*> UITextRuoDian; // 0x188(0x10)
	struct UUIText* Character; // 0x198(0x08)
	struct TArray<int32_t> LevelPass; // 0x1a0(0x10)
	struct UUIText* KouTouCan; // 0x1b0(0x08)

	void FileInfo(int32_t ID, struct TArray<int32_t> Grade, struct TSoftObjectPtr<struct UTexture2D> Texture2D, struct TArray<struct FText> Info, struct FText Character, struct FText PetPhrase, struct TArray<struct FText> Interest, struct TArray<struct FText> Weakness, bool IsGhost); // Function BP_LGUIFile.BP_LGUIFile_C.FileInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1ec38f0
	void StartBP(); // Function BP_LGUIFile.BP_LGUIFile_C.StartBP // (Event|Protected|BlueprintEvent) // @ game+0x1ec38f0
	void ExecuteUbergraph_BP_LGUIFile(int32_t EntryPoint); // Function BP_LGUIFile.BP_LGUIFile_C.ExecuteUbergraph_BP_LGUIFile // (Final|UbergraphFunction|HasDefaults) // @ game+0x1ec38f0
};

