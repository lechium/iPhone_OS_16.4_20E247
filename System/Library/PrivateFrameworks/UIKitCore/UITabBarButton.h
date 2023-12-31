//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIControl.h"

@class NSArray, NSMutableDictionary, NSString, UIColor, UIImage, UIImageView, UITabBar, UITabBarButtonLabel, UITabBarSwappableImageView, UIVibrancyEffect, UIView, UIVisualEffectView, _UIBadgeView, _UITabBarItemData;

__attribute__((visibility("hidden")))
@interface UITabBarButton : UIControl
{
    struct CGRect _hitRect;	// 144 = 0x90
    UITabBarSwappableImageView *_imageView;	// 176 = 0xb0
    UIVisualEffectView *_vibrancyEffectView;	// 184 = 0xb8
    UITabBarButtonLabel *_label;	// 192 = 0xc0
    _UIBadgeView *_badge;	// 200 = 0xc8
    UIImageView *_selectedIndicator;	// 208 = 0xd0
    struct UIEdgeInsets _imageInsets;	// 216 = 0xd8
    struct UIEdgeInsets _imageLandscapeInsets;	// 248 = 0xf8
    UIImage *_customSelectedIndicatorImage;	// 280 = 0x118
    struct UIOffset _labelOffset;	// 288 = 0x120
    NSMutableDictionary *_buttonTintColorsForState;	// 304 = 0x130
    NSMutableDictionary *_contentTintColorsForState;	// 312 = 0x138
    UIColor *_defaultUnselectedLabelTintColor;	// 320 = 0x140
    UIColor *_badgeColor;	// 328 = 0x148
    NSMutableDictionary *_badgeTextAttributesForState;	// 336 = 0x150
    struct UIOffset _badgeOffset;	// 344 = 0x158
    UIView *_highContrastFocusIndicator;	// 360 = 0x168
    _Bool _selected;	// 368 = 0x170
    _Bool _accessibilityButtonShapesEnabled;	// 369 = 0x171
    _Bool _accessibilityHighContractFocusIndicatorEnabled;	// 370 = 0x172
    _Bool _accessibilityGrayStatusEnabled;	// 371 = 0x173
    _Bool _showsHighlightedState;	// 372 = 0x174
    UIView *_focusView;	// 376 = 0x178
    Class _appearanceGuideClass;	// 384 = 0x180
    long long _layoutStyle;	// 392 = 0x188
    _UITabBarItemData *_itemAppearanceData;	// 400 = 0x190
    UIVibrancyEffect *_itemVibrantEffect;	// 408 = 0x198
    UITabBar *_tabBar;	// 416 = 0x1a0
    NSArray *_carplayConstraints;	// 424 = 0x1a8
}

+ (id)_defaultLabelColor;	// IMP=0x001000000023e447
- (void).cxx_destruct;	// IMP=0x0000000000244c6a
@property(retain, nonatomic) NSArray *carplayConstraints; // @synthesize carplayConstraints=_carplayConstraints;
@property(readonly, nonatomic) __weak UITabBar *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) UIVibrancyEffect *itemVibrantEffect; // @synthesize itemVibrantEffect=_itemVibrantEffect;
@property(retain, nonatomic) _UITabBarItemData *itemAppearanceData; // @synthesize itemAppearanceData=_itemAppearanceData;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(retain, nonatomic, setter=_setAppearanceGuideClass:) Class _appearanceGuideClass; // @synthesize _appearanceGuideClass;
@property(nonatomic, setter=_setShowsHighlightedState:) _Bool _showsHighlightedState; // @synthesize _showsHighlightedState;
- (void)set_info:(id)arg1;	// IMP=0x0000000000244bbb
- (id)_info;	// IMP=0x0000000000244b9b
@property(readonly, nonatomic) UIColor *_defaultUnselectedLabelTintColor;
- (id)_contentTintColorForState:(unsigned long long)arg1;	// IMP=0x0000000000244af5
- (void)_setContentTintColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000244960
- (id)_buttonTintColorForState:(unsigned long long)arg1;	// IMP=0x00000000002448f2
- (void)_setButtonTintColor:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x0000000000244782
- (void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2;	// IMP=0x0000000000244647
- (struct UIOffset)_titlePositionAdjustment;	// IMP=0x000000000024462f
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg1;	// IMP=0x000000000024461d
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg1;	// IMP=0x00000000002445dc
- (void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000002445d6
- (void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000002445d0
- (void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x00000000002445be
- (void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;	// IMP=0x000000000024445b
- (void)_setBadgeColor:(id)arg1;	// IMP=0x0000000000244449
- (void)_UIAppearance_setBadgeColor:(id)arg1;	// IMP=0x00000000002443f0
- (_Bool)labelShouldUseVibrancyForState:(long long)arg1;	// IMP=0x00000000002442ec
- (_Bool)iconShouldUseVibrancyForState:(long long)arg1;	// IMP=0x00000000002441af
- (struct UIOffset)badgeTitlePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000000244184
- (id)badgeTextAttributesForState:(long long)arg1;	// IMP=0x0000000000243ff7
- (id)badgeBackgroundColorForState:(long long)arg1;	// IMP=0x0000000000243faf
- (struct UIOffset)badgePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000000243ecd
- (_Bool)isDefaultColor:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000000243e24
- (id)iconColorForState:(long long)arg1;	// IMP=0x0000000000243d53
- (long long)defaultCompositingModeForState:(long long)arg1;	// IMP=0x0000000000243d4b
- (double)defaultAlphaForState:(long long)arg1;	// IMP=0x0000000000243d3d
- (id)defaultColorForState:(long long)arg1;	// IMP=0x0000000000243cad
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000000243c73
- (id)titleTextAttributesForState:(long long)arg1;	// IMP=0x0000000000243b8b
- (long long)_currentItemState;	// IMP=0x0000000000243b14
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000243a24
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000243934
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000243844
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000243713
- (long long)_focusTouchSensitivityStyle;	// IMP=0x0000000000243708
- (struct CGRect)_responderSelectionRect;	// IMP=0x0000000000243650
- (struct CGRect)_responderSelectionRectForWindow:(id)arg1;	// IMP=0x00000000002435be
- (id)_tabBar;	// IMP=0x000000000024352b
- (struct CGRect)_defaultFocusRegionFrame;	// IMP=0x000000000024350c
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x0000000000243452
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000243330
- (void)_sendFocusAction:(id)arg1;	// IMP=0x0000000000243294
- (_Bool)_isEligibleForFocusInteraction;	// IMP=0x000000000024328c
- (_Bool)canBecomeFocused;	// IMP=0x000000000024322d
- (id)_systemDefaultFocusGroupIdentifier;	// IMP=0x00000000002431a6
- (void)_setCustomSelectedIndicatorImage:(id)arg1;	// IMP=0x0000000000243101
- (void)layoutSubviews;	// IMP=0x0000000000242dd6
- (void)_ios_layoutSubviews;	// IMP=0x00000000002424bf
- (void)_showBoundsViewAt:(struct CGRect)arg1 alignmentViewAt:(double)arg2 forSymbolImage:(_Bool)arg3;	// IMP=0x000000000024204a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000241ffb
- (struct CGSize)_horizontalLayout_sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000241f5b
- (void)_appleTV_layoutSubviews;	// IMP=0x0000000000241ba3
@property(readonly, nonatomic) UIView *focusView; // @synthesize focusView=_focusView;
- (void)_removeCarplayConstraints;	// IMP=0x00000000002419a9
- (void)_setupCarplayConstraints;	// IMP=0x0000000000240fab
- (struct CGSize)_appleTV_sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000240e41
- (void)_setupSymbolConfigurationsForIdiom:(long long)arg1;	// IMP=0x0000000000240d15
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;	// IMP=0x0000000000240c81
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000240c55
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x0000000000240c29
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000240b9e
- (void)_updateBadgeAppearanceAndLayoutNow:(_Bool)arg1;	// IMP=0x0000000000240a38
- (void)_setBadgeValue:(id)arg1;	// IMP=0x00000000002408fd
- (void)_setBadgeOffset:(struct UIOffset)arg1;	// IMP=0x00000000002408d9
- (void)_positionBadgeAfterChangesIfNecessary:(CDUnknownBlockType)arg1;	// IMP=0x000000000024080f
- (void)_positionBadge;	// IMP=0x000000000024036e
@property(nonatomic, getter=_isSelected, setter=_setSelected:) _Bool _selected;
@property(retain, nonatomic, getter=_unselectedTintColor, setter=_setUnselectedTintColor:) UIColor *unselectedTintColor;
- (void)_updateToMatchCurrentState;	// IMP=0x000000000023ff18
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000023fed7
- (void)_showSelectedIndicator:(_Bool)arg1 changeSelection:(_Bool)arg2;	// IMP=0x000000000023fd21
- (void)_updateSelectedIndicatorFrame;	// IMP=0x000000000023f792
- (void)_updateSelectedIndicatorView;	// IMP=0x000000000023f4da
- (id)_selectedIndicatorImage;	// IMP=0x000000000023f32a
- (_Bool)_areTabBarButtonAccessibilityButtonShapesEnabled;	// IMP=0x000000000023f2cf
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;	// IMP=0x000000000023f287
- (void)_accessibilityHighContractFocusIndicatorDidChangeNotification:(id)arg1;	// IMP=0x000000000023f23f
- (void)_accessibilityGrayStatusDidChangeNotification:(id)arg1;	// IMP=0x000000000023f1f7
- (struct CGRect)_tabBarHitRect;	// IMP=0x000000000023f1d7
- (void)_setTabBarHitRect:(struct CGRect)arg1;	// IMP=0x000000000023f1b9
- (void)setImage:(id)arg1;	// IMP=0x000000000023f1a4
- (void)_reducedTransparencyDidChange:(id)arg1;	// IMP=0x000000000023f19e
- (void)_updateVibrancyEffectView;	// IMP=0x000000000023f05b
- (void)_updateAfterTraitCollectionOrAccessibilityDidChangeTV;	// IMP=0x000000000023eeab
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000023ed6e
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x000000000023ecfc
- (id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(struct UIEdgeInsets)arg4 tabBar:(id)arg5;	// IMP=0x000000000023eca3
- (void)dealloc;	// IMP=0x000000000023eb9c
- (id)initWithImage:(id)arg1 landscapeImage:(id)arg2 selectedImage:(id)arg3 landscapeSelectedImage:(id)arg4 label:(id)arg5 withInsets:(struct UIEdgeInsets)arg6 landscapeInsets:(struct UIEdgeInsets)arg7 tabBar:(id)arg8;	// IMP=0x000000000023e4a4
- (id)_selectedIndicatorView;	// IMP=0x000000000023e432
@property(readonly, nonatomic, getter=isDefaultTVLayout) _Bool _defaultTVLayout;
@property(readonly, nonatomic) struct CGRect _contentRect;
@property(nonatomic, getter=isSpringLoaded) _Bool springLoaded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

