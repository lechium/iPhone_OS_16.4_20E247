//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI21OverlayProtectionView
{
    MISSING_TYPE *legibilityGradientLayer;	// 8 = 0x8
    MISSING_TYPE *legibilityBlurView;	// 16 = 0x10
    MISSING_TYPE *legibilityBlurMaskLayer;	// 24 = 0x18
    MISSING_TYPE *cornerBlurView;	// 32 = 0x20
    MISSING_TYPE *cornerBlurMaskLayer;	// 40 = 0x28
    MISSING_TYPE *$__lazy_storage_$_legibilityGradientLayerDelegate;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_legibilityBlurMaskLayerDelegate;	// 56 = 0x38
    MISSING_TYPE *$__lazy_storage_$_cornerBlurMaskLayerDelegate;	// 64 = 0x40
    MISSING_TYPE *protectionHeight;	// 72 = 0x48
    MISSING_TYPE *cornerRadius;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000008b4d10
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000008b4cb0
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000008b4c30
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000008b46a0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008b4340
- (id)init;	// IMP=0x00000000008b4320

@end
