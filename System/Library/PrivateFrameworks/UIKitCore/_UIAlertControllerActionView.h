//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIAlertAction, UIAlertController, UIAlertControllerVisualStyle, UIImageView, UILabel, _UIAlertControllerActionViewMetrics;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerActionView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _highlighted;	// 144 = 0x90
    UIView *_labelContainerView;	// 152 = 0x98
    UILabel *_label;	// 160 = 0xa0
    NSLayoutConstraint *_axLabelContainerWidthConstraint;	// 168 = 0xa8
    NSLayoutConstraint *_labelContainerLeadingConstraint;	// 176 = 0xb0
    NSLayoutConstraint *_labelContainerTrailingConstraint;	// 184 = 0xb8
    NSLayoutConstraint *_labelContainerCenterXConstraint;	// 192 = 0xc0
    NSLayoutConstraint *_labelContainerLeadingPinConstraint;	// 200 = 0xc8
    NSLayoutConstraint *_labelContainerTrailingPinConstraint;	// 208 = 0xd0
    NSLayoutConstraint *_labelWidthConstraint;	// 216 = 0xd8
    NSLayoutConstraint *_labelCenterLeadingConstraint;	// 224 = 0xe0
    UIView *_contentViewControllerContainerView;	// 232 = 0xe8
    NSArray *_contentViewControllerConstraints;	// 240 = 0xf0
    UILabel *_descriptiveLabel;	// 248 = 0xf8
    NSArray *_havingDescriptiveLabelConstraints;	// 256 = 0x100
    NSArray *_notHavingDescriptiveLabelConstraints;	// 264 = 0x108
    NSLayoutConstraint *_descriptiveLabelWidthConstraint;	// 272 = 0x110
    NSLayoutConstraint *_descriptiveLabelTrailingToLabelLeadingLabelConstraint;	// 280 = 0x118
    NSLayoutConstraint *_descriptiveLabelTrailingToContainerCenterConstraint;	// 288 = 0x120
    UIImageView *_checkView;	// 296 = 0x128
    NSLayoutConstraint *_checkToMarginConstraint;	// 304 = 0x130
    UIImageView *_imageView;	// 312 = 0x138
    NSLayoutConstraint *_marginToImageConstraint;	// 320 = 0x140
    NSLayoutConstraint *_imageViewBaselineOrCenterYConstraint;	// 328 = 0x148
    NSLayoutConstraint *_imageViewTopConstraint;	// 336 = 0x150
    NSLayoutConstraint *_imageViewBottomConstraint;	// 344 = 0x158
    NSLayoutConstraint *_minimumHeightConstraint;	// 352 = 0x160
    UIAlertAction *_action;	// 360 = 0x168
    UIAlertControllerVisualStyle *_visualStyle;	// 368 = 0x170
    _UIAlertControllerActionViewMetrics *_metrics;	// 376 = 0x178
    _Bool _hasDescriptiveText;	// 384 = 0x180
    double _axEnforcedWidth;	// 392 = 0x188
    UIAlertController *_alertController;	// 400 = 0x190
}

- (void).cxx_destruct;	// IMP=0x000000000009ac33
@property(nonatomic) __weak UIAlertControllerVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
@property(nonatomic) __weak UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain) NSLayoutConstraint *labelContainerTrailingPinConstraint; // @synthesize labelContainerTrailingPinConstraint=_labelContainerTrailingPinConstraint;
@property(retain) NSLayoutConstraint *labelContainerLeadingPinConstraint; // @synthesize labelContainerLeadingPinConstraint=_labelContainerLeadingPinConstraint;
@property(retain) NSLayoutConstraint *labelContainerCenterXConstraint; // @synthesize labelContainerCenterXConstraint=_labelContainerCenterXConstraint;
- (void)_action:(id)arg1 updatedTitleTextColor:(id)arg2;	// IMP=0x000000000009ab66
- (void)_action:(id)arg1 updatedImageTintColor:(id)arg2;	// IMP=0x000000000009ab46
- (void)_action:(id)arg1 changedToBePreferred:(_Bool)arg2;	// IMP=0x000000000009ab34
- (void)_action:(id)arg1 changedToChecked:(_Bool)arg2;	// IMP=0x000000000009ab22
- (void)_action:(id)arg1 changedToEnabled:(_Bool)arg2;	// IMP=0x000000000009aac3
- (void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2;	// IMP=0x000000000009aa56
- (void)_action:(id)arg1 changedToTitle:(id)arg2;	// IMP=0x000000000009aa36
- (_Bool)hasActiveMinimumSizeConstraintsWithSize:(struct CGSize)arg1;	// IMP=0x000000000009a9c6
- (_Bool)hasLayoutHeightConstraintsIdenticalToInterfaceActionCustomView:(id)arg1;	// IMP=0x000000000009a8d5
- (id)_interfaceActionViewState;	// IMP=0x000000000009a8b9
- (void)_contentSizeChanged;	// IMP=0x000000000009a8a7
- (void)tintColorDidChange;	// IMP=0x000000000009a895
@property(copy, nonatomic) UIAlertAction *action;
- (void)_updateStyle;	// IMP=0x000000000009a7e9
- (void)underlyingInterfaceActionRepresentationDidChange;	// IMP=0x000000000009a7d7
- (void)_updateContentViewControllerContainerViewConstraints;	// IMP=0x000000000009a3e3
- (void)_updateHavingDescriptiveLabelConstraints;	// IMP=0x000000000009a30e
- (long long)_effectiveTitleTextAlignment;	// IMP=0x000000000009a2e6
- (void)_updateLabelContainerConstraints;	// IMP=0x0000000000099f51
- (void)_updateTextAlignmentForHavingDescriptiveText:(_Bool)arg1 titleTextAlignment:(long long)arg2;	// IMP=0x0000000000099e44
- (void)_updateImageMargins;	// IMP=0x0000000000099d68
- (void)_updateMinimumHeight;	// IMP=0x0000000000099af2
- (void)updateHeightUsingAXEnforcedWidth:(double)arg1;	// IMP=0x0000000000099ac5
- (void)_removeContentViewControllerContainerViewSubviews;	// IMP=0x0000000000099a57
- (void)_loadContentViewControllerContainerViewIfNecessary;	// IMP=0x00000000000998da
- (void)_loadContentViewControllerView;	// IMP=0x00000000000995cf
- (void)_buildContentViewControllerContainerConstraints;	// IMP=0x000000000009934c
- (void)_updateCheckImageView;	// IMP=0x00000000000992bc
- (void)_loadCheckView;	// IMP=0x00000000000991d2
- (void)_buildCheckViewConstraints;	// IMP=0x000000000009904d
- (void)_updateImageView;	// IMP=0x0000000000098fbf
- (void)_loadImageView;	// IMP=0x0000000000098f30
- (void)_prepareConstraintsForImage:(id)arg1;	// IMP=0x0000000000098d64
- (void)_buildImageViewConstraints;	// IMP=0x0000000000098a1f
- (void)_updateDescriptiveText;	// IMP=0x0000000000098955
- (void)_loadDescriptiveLabel;	// IMP=0x000000000009883c
- (void)_updateLabelAttributes;	// IMP=0x000000000009874c
- (void)_updateImageViewAttributes;	// IMP=0x0000000000098676
- (void)_recomputeColors;	// IMP=0x0000000000098594
@property(readonly) double currentLabelTextWidth;
@property(readonly) double currentDescriptiveLabelTextWidth;
- (void)applyMetrics:(id)arg1;	// IMP=0x00000000000984c1
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)_prepareConstraintsForHavingDescriptiveText:(_Bool)arg1;	// IMP=0x0000000000098370
- (void)_buildHavingDescriptiveLabelConstraints;	// IMP=0x0000000000097d92
- (void)_buildNotHavingDescriptiveLabelConstraints;	// IMP=0x0000000000097c9c
- (void)_buildConstraints;	// IMP=0x000000000009736c
- (void)dealloc;	// IMP=0x000000000009729f
- (long long)_focusItemDeferralMode;	// IMP=0x0000000000097257
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000096f70
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000096f45

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
