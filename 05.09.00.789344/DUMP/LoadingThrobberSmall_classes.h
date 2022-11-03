// WidgetBlueprintGeneratedClass LoadingThrobberSmall.LoadingThrobberSmall_C
// Size: 0x338 (Inherited: 0x2c8)
struct ULoadingThrobberSmall_C : UDesignableUserWidget {
	struct UWidgetAnimation* hover; // 0x2c8(0x08)
	struct UImage* Anchor; // 0x2d0(0x08)
	struct UImage* BackMagic; // 0x2d8(0x08)
	struct UImage* BluredDot; // 0x2e0(0x08)
	struct UImage* Border; // 0x2e8(0x08)
	struct UImage* FrontMagic; // 0x2f0(0x08)
	struct UImage* LeftLine; // 0x2f8(0x08)
	struct UImage* RightLine; // 0x300(0x08)
	struct FLinearColor HoverColor; // 0x308(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x318(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x328(0x10)

	void OnHovered__DelegateSignature(struct USharedButtonText1_C* TextButton); // Function LoadingThrobberSmall.LoadingThrobberSmall_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
	void OnClicked__DelegateSignature(struct USharedButtonText1_C* TextButton); // Function LoadingThrobberSmall.LoadingThrobberSmall_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x32f73d0
};

