//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UISwitchVisualElement.h"

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIColor, UIImage, UIImageView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UISwitchMVEGestureTrackingSession, UITapGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface UISwitchModernVisualElement : UISwitchVisualElement <UIGestureRecognizerDelegate>
{
    UIView *_switchWellView;	// 144 = 0x90
    UIView *_leftSwitchWellView;	// 152 = 0x98
    UIView *_switchWellContainerView;	// 160 = 0xa0
    UIView *_leftSwitchWellContainerView;	// 168 = 0xa8
    UIImageView *_switchWellImageView;	// 176 = 0xb0
    UIView *_switchWellImageViewContainer;	// 184 = 0xb8
    UIImageView *_switchWellOffImageView;	// 192 = 0xc0
    UIImageView *_switchWellOnImageView;	// 200 = 0xc8
    UIImageView *_knobView;	// 208 = 0xd0
    UIColor *_onTintColor;	// 216 = 0xd8
    UIColor *_tintColor;	// 224 = 0xe0
    _Bool _on;	// 232 = 0xe8
    _Bool _pressed;	// 233 = 0xe9
    _Bool _isAlwaysAccessible;	// 234 = 0xea
    _Bool _showsOnOffLabel;	// 235 = 0xeb
    UIColor *_thumbTintColor;	// 240 = 0xf0
    UIImage *_onImage;	// 248 = 0xf8
    UIImage *_offImage;	// 256 = 0x100
    UISwitchMVEGestureTrackingSession *_gestureTrackingSession;	// 264 = 0x108
    UILongPressGestureRecognizer *_longPress;	// 272 = 0x110
    UIPanGestureRecognizer *_pan;	// 280 = 0x118
    UITapGestureRecognizer *_selectGestureRecognizer;	// 288 = 0x120
}

+ (id)_modernThumbImageWithColor:(id)arg1 mask:(unsigned long long)arg2 traitCollection:(id)arg3;	// IMP=0x00100000005ecfbd
+ (id)_modernGradientImageWithOnColor:(id)arg1 traitCollection:(id)arg2;	// IMP=0x00100000005ecac4
+ (struct UIEdgeInsets)preferredAlignmentRectInsets;	// IMP=0x00100000005e73ee
+ (struct CGSize)preferredContentSize;	// IMP=0x00100000005e73d8
- (void).cxx_destruct;	// IMP=0x00000000005ee2db
@property(retain, nonatomic) UITapGestureRecognizer *selectGestureRecognizer; // @synthesize selectGestureRecognizer=_selectGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *pan; // @synthesize pan=_pan;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPress; // @synthesize longPress=_longPress;
@property(retain, nonatomic) UISwitchMVEGestureTrackingSession *gestureTrackingSession; // @synthesize gestureTrackingSession=_gestureTrackingSession;
@property(nonatomic) _Bool showsOnOffLabel; // @synthesize showsOnOffLabel=_showsOnOffLabel;
@property(nonatomic) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) _Bool on; // @synthesize on=_on;
@property(retain, nonatomic) UIImage *offImage; // @synthesize offImage=_offImage;
@property(retain, nonatomic) UIImage *onImage; // @synthesize onImage=_onImage;
@property(retain, nonatomic) UIColor *thumbTintColor; // @synthesize thumbTintColor=_thumbTintColor;
- (void)_selectGestureChanged:(id)arg1;	// IMP=0x00000000005edf5c
- (void)_uninstallSelectGestureRecognizer;	// IMP=0x00000000005ede9e
- (void)_installSelectGestureRecognizer;	// IMP=0x00000000005edd3f
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000005edcf4
- (void)setSwitchControl:(id)arg1;	// IMP=0x00000000005edc51
- (_Bool)_feedbackEnabled;	// IMP=0x00000000005edc0d
- (id)_settings;	// IMP=0x00000000005edbf4
- (void)setSemanticContentAttribute:(long long)arg1;	// IMP=0x00000000005edb78
- (void)_setPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3 shouldAnimateLabels:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000005eda3f
- (void)_updateDisplayAnimated:(_Bool)arg1;	// IMP=0x00000000005ed83e
- (void)_updateDisplayWithAnimationIfNeeded;	// IMP=0x00000000005ed7fc
- (id)_effectiveOffImageTintColor;	// IMP=0x00000000005ed77d
- (id)_effectiveOnImageTintColor;	// IMP=0x00000000005ed70a
- (_Bool)_shouldUseLightTintOverColor:(id)arg1;	// IMP=0x00000000005ed67f
- (id)_accessibleOffImage;	// IMP=0x00000000005ed62c
- (id)_accessibleOnImage;	// IMP=0x00000000005ed5d9
- (id)_effectiveOffImage;	// IMP=0x00000000005ed595
- (id)_effectiveOnImage;	// IMP=0x00000000005ed551
- (id)_effectiveThumbImage;	// IMP=0x00000000005ed412
- (id)_effectiveGradientImage;	// IMP=0x00000000005eceeb
- (id)_effectiveOffTextColor;	// IMP=0x00000000005eca66
- (id)_effectiveTintColor;	// IMP=0x00000000005ec9da
- (id)_defaultOnTintColor;	// IMP=0x00000000005ec9c1
- (id)_effectiveOnTintColor;	// IMP=0x00000000005ec984
- (id)_labelOpacityAnimation;	// IMP=0x00000000005ec8e9
- (id)_switchTrackPositionSpringAnimationFromValue:(id)arg1 toValue:(id)arg2 on:(_Bool)arg3;	// IMP=0x00000000005ec702
- (id)_switchKnobWidthSpringAnimationFromValue:(id)arg1 toValue:(id)arg2 pressed:(_Bool)arg3;	// IMP=0x00000000005ec51b
- (id)_switchKnobPositionSpringAnimationFromValue:(id)arg1 toValue:(id)arg2;	// IMP=0x00000000005ec387
- (id)_switchSpringAnimationWithKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 pressed:(_Bool)arg4;	// IMP=0x00000000005ec1a4
- (id)_switchTrackColorAnimationWithFromValue:(id)arg1 toValue:(id)arg2;	// IMP=0x00000000005ec067
- (id)_switchTrackAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(_Bool)arg3;	// IMP=0x00000000005ebe91
- (id)_switchTrackPositionAnimationWithFromValue:(id)arg1 toValue:(id)arg2 on:(_Bool)arg3;	// IMP=0x00000000005ebcbb
- (struct CGPoint)_onImagePosition;	// IMP=0x00000000005ebbce
- (struct CGPoint)_offImagePosition;	// IMP=0x00000000005ebadf
- (struct CGColor *)_wellColorOn:(_Bool)arg1;	// IMP=0x00000000005eba83
- (double)_wellBorderWidthPressed:(_Bool)arg1 on:(_Bool)arg2;	// IMP=0x00000000005eba5f
- (struct CGPoint)_wellPositionOn:(_Bool)arg1 forBounds:(struct CGRect)arg2;	// IMP=0x00000000005eb919
- (struct CGPoint)_leftSwitchWellContainerPositionOn:(_Bool)arg1 pressed:(_Bool)arg2;	// IMP=0x00000000005eb83f
- (struct CGRect)_leftSwitchWellContainerBoundsOn:(_Bool)arg1 pressed:(_Bool)arg2;	// IMP=0x00000000005eb736
- (struct CGPoint)_switchWellPositionOn:(_Bool)arg1 pressed:(_Bool)arg2;	// IMP=0x00000000005eb60c
- (struct CGPoint)_switchWellContainerPositionOn:(_Bool)arg1 pressed:(_Bool)arg2;	// IMP=0x00000000005eb547
- (struct CGRect)_switchWellContainerBoundsOn:(_Bool)arg1 pressed:(_Bool)arg2;	// IMP=0x00000000005eb4a5
- (struct CGPoint)_knobPositionOn:(_Bool)arg1 pressed:(_Bool)arg2 forBounds:(struct CGRect)arg3;	// IMP=0x00000000005eb313
- (struct CGRect)_knobBoundsPressed:(_Bool)arg1;	// IMP=0x00000000005eb29b
- (void)_transitionImagesToPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00000000005eb132
- (void)_transitionWellViewToOn:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005eae9b
- (void)_transitionWellViewToPressed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005eabfa
- (void)_transitionWellViewToPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00000000005ea8fc
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000000005ea8df
- (void)_transitionKnobToOn:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005ea8bd
- (void)_transitionKnobToPressed:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005ea89d
- (void)_transitionKnobToPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00000000005e97a0
- (void)tintColorDidChange;	// IMP=0x00000000005e96c4
- (void)setTintColor:(id)arg1;	// IMP=0x00000000005e9563
- (void)setOnTintColor:(id)arg1;	// IMP=0x00000000005e9459
- (void)_orderSubviews;	// IMP=0x00000000005e9359
- (void)_invalidateOnOffImages;	// IMP=0x00000000005e90be
- (void)_invalidateKnob;	// IMP=0x00000000005e8fba
- (void)_invalidateWell;	// IMP=0x00000000005e886a
- (void)_switchToStaticMode:(_Bool)arg1;	// IMP=0x00000000005e875b
- (void)_invalidateControl;	// IMP=0x00000000005e85a0
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x00000000005e854c
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000005e842d
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000005e8417
- (void)_handlePanWithGestureLocationInBounds:(struct CGPoint)arg1 horizontalTranslation:(double)arg2 gestureState:(long long)arg3 resetPanTranslationBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000005e8337
- (void)_handlePan:(id)arg1;	// IMP=0x00000000005e8215
- (void)_handleLongPressWithGestureLocationInBounds:(struct CGPoint)arg1 gestureState:(long long)arg2;	// IMP=0x00000000005e7d3e
- (void)_handleLongPress:(id)arg1;	// IMP=0x00000000005e7cbb
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;	// IMP=0x00000000005e7bf6
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000005e7aed
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveEvent:(id)arg2;	// IMP=0x00000000005e793d
- (_Bool)displayedOn;	// IMP=0x00000000005e792b
- (void)interactiveChangeToDisplayedOn:(_Bool)arg1;	// IMP=0x00000000005e78b9
- (void)performStateChangeFeedback;	// IMP=0x00000000005e7767
- (void)sendStateChangeActions;	// IMP=0x00000000005e770b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000005e748a
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000005e7413

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

