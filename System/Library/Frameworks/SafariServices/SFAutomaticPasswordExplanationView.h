//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SafariServices/_UIScrollViewLayoutObserver-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, SFAutomaticPasswordScrollViewContentView, UIButton, UIImageView, UILabel, UILayoutGuide, UIScrollView;

__attribute__((visibility("hidden")))
@interface SFAutomaticPasswordExplanationView : UIView <_UIScrollViewLayoutObserver>
{
    _Bool _isPad;	// 8 = 0x8
    long long _keyboardType;	// 16 = 0x10
    UIScrollView *_scrollView;	// 24 = 0x18
    SFAutomaticPasswordScrollViewContentView *_scrollableContentView;	// 32 = 0x20
    UIImageView *_shadowImageView;	// 40 = 0x28
    NSLayoutConstraint *_strongPasswordButtonWidthConstraint;	// 48 = 0x30
    NSLayoutConstraint *_strongPasswordButtonHeightConstraint;	// 56 = 0x38
    NSLayoutConstraint *_useCustomPasswordButtonWidthConstraint;	// 64 = 0x40
    NSLayoutConstraint *_useCustomPasswordBaselineToBottomConstraint;	// 72 = 0x48
    NSArray *_wideShadowImageViewConstraints;	// 80 = 0x50
    NSArray *_narrowShadowImageViewConstraints;	// 88 = 0x58
    UILayoutGuide *_contentLayoutGuide;	// 96 = 0x60
    NSLayoutConstraint *_contentLayoutGuideBottomConstraint;	// 104 = 0x68
    UILayoutGuide *_scrollableContentCenterLayoutGuide;	// 112 = 0x70
    _Bool _requiresWideAppearance;	// 120 = 0x78
    double _wideContentMaximumPadding;	// 128 = 0x80
    NSLayoutConstraint *_wideContentLeadingConstraint;	// 136 = 0x88
    NSLayoutConstraint *_wideContentTrailingConstraint;	// 144 = 0x90
    NSLayoutConstraint *_narrowContentLeadingConstraint;	// 152 = 0x98
    NSLayoutConstraint *_narrowContentTrailingConstraint;	// 160 = 0xa0
    NSLayoutConstraint *_iPadWidthConstraint;	// 168 = 0xa8
    _Bool _scrollViewNeedsShadowCachedValue;	// 176 = 0xb0
    UILabel *_explanationLabel;	// 184 = 0xb8
    UILabel *_passwordRetrievalExpalantionLabel;	// 192 = 0xc0
    UIButton *_useStrongPasswordButton;	// 200 = 0xc8
    UIButton *_useOtherPasswordButton;	// 208 = 0xd0
    long long _keyboardAppearance;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000184cb5
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(readonly, nonatomic) UIButton *useOtherPasswordButton; // @synthesize useOtherPasswordButton=_useOtherPasswordButton;
@property(readonly, nonatomic) UIButton *useStrongPasswordButton; // @synthesize useStrongPasswordButton=_useStrongPasswordButton;
@property(readonly, nonatomic) UILabel *passwordRetrievalExpalantionLabel; // @synthesize passwordRetrievalExpalantionLabel=_passwordRetrievalExpalantionLabel;
@property(readonly, nonatomic) UILabel *explanationLabel; // @synthesize explanationLabel=_explanationLabel;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000184c3d
- (void)automaticPasswordScrollContentViewDidLayout:(id)arg1;	// IMP=0x0000000000184bf0
- (void)_scrollViewDidLayoutSubviews:(id)arg1;	// IMP=0x0000000000184ba3
- (void)_updateShadowViewAlpha;	// IMP=0x0000000000184aa0
- (_Bool)_scrollViewNeedsShadow:(_Bool)arg1;	// IMP=0x00000000001849d5
- (void)updateConstraints;	// IMP=0x000000000018457e
- (void)_updateContentLayoutGuideBottomConstraint;	// IMP=0x00000000001844a9
- (void)safeAreaInsetsDidChange;	// IMP=0x0000000000184446
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x0000000000184430
- (void)layoutSubviews;	// IMP=0x00000000001843da
- (void)_updateMaximumPadding;	// IMP=0x00000000001841de
- (void)_updateUseCustomPasswordBaselineToBottomConstraint;	// IMP=0x0000000000184123
- (void)_updateStrongPasswordHeightConstraint;	// IMP=0x00000000001840d8
- (void)_updateWideAppearanceRequirement;	// IMP=0x000000000018403f
- (void)_createLayoutConstraints;	// IMP=0x00000000001822a9
- (void)_createSubviews;	// IMP=0x0000000000181c0f
- (id)initWithKeyboardType:(long long)arg1;	// IMP=0x0000000000181b23

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

