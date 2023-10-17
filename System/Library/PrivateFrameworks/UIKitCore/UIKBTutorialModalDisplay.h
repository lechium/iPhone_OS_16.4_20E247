//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIFont, UIKBTutorialModalDisplayStyling, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UIKBTutorialModalDisplay : UIView
{
    long long _appearance;	// 8 = 0x8
    UIView *_containerView;	// 16 = 0x10
    UIView *_mediaView;	// 24 = 0x18
    UIButton *_button;	// 32 = 0x20
    UIKBTutorialModalDisplayStyling *_styling;	// 40 = 0x28
    UIVisualEffectView *_backgroundBlurView;	// 48 = 0x30
    NSLayoutConstraint *_containerViewTopConstraits;	// 56 = 0x38
    NSArray *_adjustableConstraints;	// 64 = 0x40
    NSLayoutConstraint *_widthAdjustmentConstraint;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000081764c
@property(retain, nonatomic) NSLayoutConstraint *widthAdjustmentConstraint; // @synthesize widthAdjustmentConstraint=_widthAdjustmentConstraint;
@property(retain, nonatomic) NSArray *adjustableConstraints; // @synthesize adjustableConstraints=_adjustableConstraints;
@property(retain, nonatomic) NSLayoutConstraint *containerViewTopConstraits; // @synthesize containerViewTopConstraits=_containerViewTopConstraits;
@property(retain, nonatomic) UIVisualEffectView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) UIKBTutorialModalDisplayStyling *styling; // @synthesize styling=_styling;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long appearance; // @synthesize appearance=_appearance;
@property(readonly, nonatomic) long long textBodyMaxLines;
@property(readonly, nonatomic) double mediaLayoutWidthAdjustment;
@property(readonly, nonatomic) double pagingInterval;
@property(readonly, nonatomic) NSArray *mediaContents;
@property(readonly, nonatomic) _Bool presentsFullScreen;
@property(readonly, nonatomic) UIFont *largeTitleFont;
@property(readonly, nonatomic) NSString *largeTitle;
@property(readonly, nonatomic) UIFont *textBodyFont;
@property(readonly, nonatomic) NSArray *textBodyDescriptions;
@property(readonly, nonatomic) UIFont *textTitleFont;
@property(readonly, nonatomic) NSArray *textTitleDescriptions;
@property(readonly, nonatomic) NSString *buttonTitle;
- (void)extraButtonTapAction;	// IMP=0x00000000008172cf
- (void)restartPagingAnimation;	// IMP=0x0000000000817235
- (void)tapInsideButton:(id)arg1;	// IMP=0x00000000008171da
- (id)constructMediaView;	// IMP=0x0000000000816b57
- (void)updateMediaViewTextAndPlacement;	// IMP=0x0000000000816330
- (struct CGSize)sizeForTutorialPageView;	// IMP=0x00000000008162c1
- (void)containerForAlertPresentation;	// IMP=0x000000000081593e
- (void)containerForFullScreenView;	// IMP=0x000000000081475d
- (void)containerForKeyboardView;	// IMP=0x0000000000813a5b
- (struct UIEdgeInsets)safeAreaInsets;	// IMP=0x00000000008139d1
- (void)configContainerView;	// IMP=0x000000000081397d
- (void)configBackgroundBlur;	// IMP=0x000000000081312a
- (double)containerBottomPadding;	// IMP=0x00000000008130c5
- (double)containerTopPadding;	// IMP=0x0000000000812e52
- (_Bool)isPortrait;	// IMP=0x0000000000812dfe
- (void)layoutSubviews;	// IMP=0x0000000000812dd0
- (id)initWithKeyboardAppearance:(long long)arg1;	// IMP=0x0000000000812a79

@end
