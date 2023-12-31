//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, UIKBGradient, UIKBRenderGeometry, UIKBTextStyle;

__attribute__((visibility("hidden")))
@interface UIKBRenderTraits : NSObject
{
    NSMutableArray *_renderEffects;	// 8 = 0x8
    NSMutableArray *_foregroundRenderEffects;	// 16 = 0x10
    _Bool _honorControlOpacity;	// 24 = 0x18
    _Bool _controlOpacities;	// 25 = 0x19
    _Bool _blurBlending;	// 26 = 0x1a
    _Bool _renderSecondarySymbolsSeparately;	// 27 = 0x1b
    _Bool _usesDarkAppearance;	// 28 = 0x1c
    UIKBRenderGeometry *_geometry;	// 32 = 0x20
    UIKBGradient *_backgroundGradient;	// 40 = 0x28
    UIKBGradient *_layeredBackgroundGradient;	// 48 = 0x30
    UIKBGradient *_layeredForegroundGradient;	// 56 = 0x38
    UIKBTextStyle *_symbolStyle;	// 64 = 0x40
    UIKBTextStyle *_fallbackSymbolStyle;	// 72 = 0x48
    NSArray *_secondarySymbolStyles;	// 80 = 0x50
    NSArray *_variantGeometries;	// 88 = 0x58
    UIKBRenderTraits *_variantTraits;	// 96 = 0x60
    UIKBRenderTraits *_highlightedVariantTraits;	// 104 = 0x68
    long long _blendForm;	// 112 = 0x70
    NSArray *_renderFlags;	// 120 = 0x78
    long long _renderFlagsForAboveEffects;	// 128 = 0x80
    NSString *_hashString;	// 136 = 0x88
    double _floatingContentViewCornerRadius;	// 144 = 0x90
    double _floatingContentViewShadowVerticalOffset;	// 152 = 0x98
    double _floatingContentViewShadowRadius;	// 160 = 0xa0
    double _floatingContentViewShadowOpacity;	// 168 = 0xa8
    struct CGSize _floatingContentViewFocusedIncreaseSize;	// 176 = 0xb0
}

+ (id)traitsWithSymbolStyle:(id)arg1;	// IMP=0x0010000000a88b69
+ (id)traitsWithGeometry:(id)arg1;	// IMP=0x0010000000a88afe
+ (id)emptyTraits;	// IMP=0x0010000000a88ae5
- (void).cxx_destruct;	// IMP=0x0000000000a8a3aa
@property(nonatomic) double floatingContentViewShadowOpacity; // @synthesize floatingContentViewShadowOpacity=_floatingContentViewShadowOpacity;
@property(nonatomic) double floatingContentViewShadowRadius; // @synthesize floatingContentViewShadowRadius=_floatingContentViewShadowRadius;
@property(nonatomic) double floatingContentViewShadowVerticalOffset; // @synthesize floatingContentViewShadowVerticalOffset=_floatingContentViewShadowVerticalOffset;
@property(nonatomic) struct CGSize floatingContentViewFocusedIncreaseSize; // @synthesize floatingContentViewFocusedIncreaseSize=_floatingContentViewFocusedIncreaseSize;
@property(nonatomic) double floatingContentViewCornerRadius; // @synthesize floatingContentViewCornerRadius=_floatingContentViewCornerRadius;
@property(nonatomic) _Bool usesDarkAppearance; // @synthesize usesDarkAppearance=_usesDarkAppearance;
@property(retain, nonatomic) NSString *hashString; // @synthesize hashString=_hashString;
@property(nonatomic) long long renderFlagsForAboveEffects; // @synthesize renderFlagsForAboveEffects=_renderFlagsForAboveEffects;
@property(nonatomic) _Bool renderSecondarySymbolsSeparately; // @synthesize renderSecondarySymbolsSeparately=_renderSecondarySymbolsSeparately;
@property(retain, nonatomic) NSArray *renderFlags; // @synthesize renderFlags=_renderFlags;
@property(nonatomic) long long blendForm; // @synthesize blendForm=_blendForm;
@property(nonatomic) _Bool blurBlending; // @synthesize blurBlending=_blurBlending;
@property(nonatomic) _Bool controlOpacities; // @synthesize controlOpacities=_controlOpacities;
@property(retain, nonatomic) UIKBRenderTraits *highlightedVariantTraits; // @synthesize highlightedVariantTraits=_highlightedVariantTraits;
@property(retain, nonatomic) UIKBRenderTraits *variantTraits; // @synthesize variantTraits=_variantTraits;
@property(retain, nonatomic) NSArray *variantGeometries; // @synthesize variantGeometries=_variantGeometries;
@property(readonly, nonatomic) NSArray *foregroundRenderEffects; // @synthesize foregroundRenderEffects=_foregroundRenderEffects;
@property(readonly, nonatomic) NSArray *renderEffects; // @synthesize renderEffects=_renderEffects;
@property(retain, nonatomic) NSArray *secondarySymbolStyles; // @synthesize secondarySymbolStyles=_secondarySymbolStyles;
@property(retain, nonatomic) UIKBTextStyle *fallbackSymbolStyle; // @synthesize fallbackSymbolStyle=_fallbackSymbolStyle;
@property(retain, nonatomic) UIKBTextStyle *symbolStyle; // @synthesize symbolStyle=_symbolStyle;
@property(retain, nonatomic) UIKBGradient *layeredForegroundGradient; // @synthesize layeredForegroundGradient=_layeredForegroundGradient;
@property(retain, nonatomic) UIKBGradient *layeredBackgroundGradient; // @synthesize layeredBackgroundGradient=_layeredBackgroundGradient;
@property(retain, nonatomic) UIKBGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property(retain, nonatomic) UIKBRenderGeometry *geometry; // @synthesize geometry=_geometry;
- (void)modifyForMasking;	// IMP=0x0000000000a8a015
- (void)overlayWithTraits:(id)arg1;	// IMP=0x0000000000a8985a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a8956d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a89247
- (id)description;	// IMP=0x0000000000a88ced
- (void)removeAllRenderEffects;	// IMP=0x0000000000a88cb2
- (void)addForegroundRenderEffect:(id)arg1;	// IMP=0x0000000000a88c43
- (void)addRenderEffect:(id)arg1;	// IMP=0x0000000000a88bd4

@end

