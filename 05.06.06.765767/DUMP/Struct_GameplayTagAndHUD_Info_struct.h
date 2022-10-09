// UserDefinedStruct Struct_GameplayTagAndHUD_Info.Struct_GameplayTagAndHUD_Info
// Size: 0xa9 (Inherited: 0x00)
struct FStruct_GameplayTagAndHUD_Info {
	struct FGameplayTag GameplayTag_2_87AC10624171D97F778510800296D170; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FText DisplayText_11_8BD7DCE746C77B3015CCB08C4A39D52F; // 0x10(0x18)
	enum class Enum_BuffOrDebuffHUD_Setting BuffOrDebuff_5_7B19C44345B1100B8E99FBBE60D2C1ED; // 0x28(0x01)
	enum class Enum_BuffHUD_Orientation Orientation_8_B94B98CF406809C4E313899E276DD903; // 0x29(0x01)
	char pad_2A[0x6]; // 0x2a(0x06)
	struct TSoftClassPtr<UObject> WidgetClass_19_6146F127403E0D54E33218A13BD210BB; // 0x30(0x30)
	struct FGameplayTagQuery QueryInfo_14_398556974859412EC5DA739C103A9B1F; // 0x60(0x48)
	bool BuffItATail_21_AC62D6DA49F336E800901DA9A1692D0E; // 0xa8(0x01)
};

