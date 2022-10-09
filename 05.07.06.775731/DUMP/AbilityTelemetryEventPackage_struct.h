// UserDefinedStruct AbilityTelemetryEventPackage.AbilityTelemetryEventPackage
// Size: 0x310 (Inherited: 0x00)
struct FAbilityTelemetryEventPackage {
	struct FAbilityUsageEvent UsageEvent_3_E2D00DA349973777911548B86A1BD9DB; // 0x00(0x2e8)
	struct FVector EventLocation_26_18D1DE084B814A17932A309FEABBF3E2; // 0x2e8(0x0c)
	char pad_2F4[0x4]; // 0x2f4(0x04)
	struct TArray<struct FCharacterAbilityEffectInfo> AbilityEffects_22_C5BA047348147D231E01FEBC7A508C49; // 0x2f8(0x10)
	int32_t AssociatedCastID_29_C6D2B9B74B65739DE54753AFD12ADC2B; // 0x308(0x04)
	int32_t DestroyedCount_32_91E01F30459754366E6F24A3ABD82F1A; // 0x30c(0x04)
};

