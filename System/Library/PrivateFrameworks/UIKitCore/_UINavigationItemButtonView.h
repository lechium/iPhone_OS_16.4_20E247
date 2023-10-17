//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIColor, UIImageView, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UINavigationItemButtonView <UIGestureRecognizerDelegate>
{
    long long _style;	// 208 = 0xd0
    _Bool _pressed;	// 216 = 0xd8
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;	// 224 = 0xe0
    _Bool _customBackgroundImageChangedToOrFromNil;	// 232 = 0xe8
    UIImageView *_backgroundImageView;	// 240 = 0xf0
    UIImageView *_imageView;	// 248 = 0xf8
    _Bool _wantsBlendModeForAccessibilityBackgrounds;	// 256 = 0x100
    unsigned long long _abbreviatedTitleIndex;	// 264 = 0x108
    UIColor *_accessibilityBackgroundTintColor;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x0000000000197049
@property(retain, nonatomic, setter=_setAccessibilityBackgroundTintColor:) UIColor *_accessibilityBackgroundTintColor; // @synthesize _accessibilityBackgroundTintColor;
@property(nonatomic, setter=_setWantsBlendModeForAccessibilityBackgrounds:) _Bool _wantsBlendModeForAccessibilityBackgrounds; // @synthesize _wantsBlendModeForAccessibilityBackgrounds;
@property(nonatomic, setter=_setAbbreviatedTitleIndex:) unsigned long long _abbreviatedTitleIndex; // @synthesize _abbreviatedTitleIndex;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000196f31
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000196f29
- (void)_backSelectGestureChanged:(id)arg1;	// IMP=0x0000000000196e27
- (void)_uninstallBackSelectGestureRecognizer;	// IMP=0x0000000000196dcb
- (void)_installBackSelectGestureRecognizer;	// IMP=0x0000000000196d04
- (void)_updateBackSelectGestureRecognizer;	// IMP=0x0000000000196c28
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000196c16
- (void)didMoveToWindow;	// IMP=0x0000000000196bd5
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000196a7d
- (_Bool)canBecomeFocused;	// IMP=0x0000000000196a75
- (Class)_appearanceGuideClass;	// IMP=0x0000000000196a64
- (void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;	// IMP=0x000000000019653f
- (struct UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000196467
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000196455
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000196295
- (double)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000196278
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000196266
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000196174
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000019616e
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000196168
- (double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;	// IMP=0x0000000000196156
- (void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x0000000000196150
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;	// IMP=0x000000000019614a
- (id)_backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;	// IMP=0x00000000001960bc
- (void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x00000000001960aa
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000195dcd
- (_Bool)hasCustomBackgroundImage;	// IMP=0x0000000000195d8f
- (void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;	// IMP=0x0000000000195d7e
- (_Bool)customBackgroundImageChangedToOrFromNil;	// IMP=0x0000000000195d6e
- (id)_titleTextAttributesForState:(unsigned long long)arg1;	// IMP=0x0000000000195d51
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000195d3f
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000195c7f
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
- (void)_UIAppearance_setTintColor:(id)arg1;	// IMP=0x0000000000195bdc
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000195bd6
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000195bd0
- (void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x0000000000195bca
- (void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;	// IMP=0x0000000000195bc4
- (void)dealloc;	// IMP=0x0000000000195b42
- (id)_defaultFont;	// IMP=0x00000000001958d2
- (_Bool)pressed;	// IMP=0x00000000001958c2
- (void)setPressed:(_Bool)arg1 initialPress:(_Bool)arg2;	// IMP=0x0000000000195800
- (void)setPressed:(_Bool)arg1;	// IMP=0x00000000001957e9
- (void)setStyle:(long long)arg1;	// IMP=0x00000000001957d5
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001954ce
- (struct CGSize)imageSize;	// IMP=0x0000000000195393
- (id)image;	// IMP=0x000000000019531f
- (id)title;	// IMP=0x00000000001951dc
- (void)layoutSubviews;	// IMP=0x0000000000194821
- (id)backgroundImageView;	// IMP=0x000000000019480c
- (double)_titleYAdjustmentCustomization;	// IMP=0x0000000000194803
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000194427
- (struct UIEdgeInsets)alignmentRectInsets;	// IMP=0x00000000001943c7
- (id)_currentCustomBackgroundNeedsDarkening:(_Bool *)arg1;	// IMP=0x00000000001941ad
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1;	// IMP=0x0000000000194119
- (id)_currentTextShadowColorForBarStyle:(long long)arg1;	// IMP=0x0000000000194023
- (id)_currentTextColorForBarStyle:(long long)arg1;	// IMP=0x0000000000193e99
- (_Bool)_useSilverLookForBarStyle:(long long)arg1;	// IMP=0x0000000000193e91
- (id)_appearanceStorage;	// IMP=0x0000000000193e7c
- (void)tintColorDidChange;	// IMP=0x0000000000193e26
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x0000000000193d8d
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;	// IMP=0x0000000000193d7b
- (void)_accessibilityButtonShapesParametersDidChange;	// IMP=0x0000000000193d44
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000193c21
- (_Bool)_suppressesBackIndicatorView;	// IMP=0x0000000000193bbf
- (_Bool)_wantsAccessibilityButtonShapes;	// IMP=0x0000000000193b8e
- (_Bool)_showsAccessibilityBackgroundWhenEnabled;	// IMP=0x0000000000193adf
- (void)_resetRenderingModesForAccessibilityBackgrounds;	// IMP=0x0000000000193919
- (id)initWithNavigationItem:(id)arg1;	// IMP=0x00000000001938b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
