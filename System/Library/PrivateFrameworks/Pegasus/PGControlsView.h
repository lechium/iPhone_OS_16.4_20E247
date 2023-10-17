//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, PGButtonView, PGCABackdropLayerView, PGControlsViewModel, PGDisplayLink, PGLayoutContainerView, PGPrerollIndicatorView, PGProgressIndicator, UIActivityIndicatorView, UIView;

__attribute__((visibility("hidden")))
@interface PGControlsView
{
    PGControlsViewModel *_viewModel;	// 8 = 0x8
    PGButtonView *_restoreButton;	// 16 = 0x10
    PGButtonView *_cancelButton;	// 24 = 0x18
    PGButtonView *_skipBackButton;	// 32 = 0x20
    PGButtonView *_actionButton;	// 40 = 0x28
    PGButtonView *_skipForwardButton;	// 48 = 0x30
    PGButtonView *_liveIndicatorBadgeButton;	// 56 = 0x38
    UIActivityIndicatorView *_contentLoadingIndicator;	// 64 = 0x40
    UIView *_contentLoadingIndicatorContainerView;	// 72 = 0x48
    PGLayoutContainerView *_hidableItemsLayoutContainerView;	// 80 = 0x50
    PGCABackdropLayerView *_captureOnlyView;	// 88 = 0x58
    PGProgressIndicator *_progressIndicator;	// 96 = 0x60
    PGPrerollIndicatorView *_prerollIndicatorView;	// 104 = 0x68
    UIView *_dimmingView;	// 112 = 0x70
    NSArray *_allButtons;	// 120 = 0x78
    NSString *_groupNameBase;	// 128 = 0x80
    PGDisplayLink *_displayLinkForProgressUpdates;	// 136 = 0x88
    _Bool _prefersControlsHidden;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000017db7
@property(nonatomic) _Bool prefersControlsHidden; // @synthesize prefersControlsHidden=_prefersControlsHidden;
- (_Bool)_showsDimmingView;	// IMP=0x0000000000017cfb
- (struct CGRect)_progressIndicatorFrameWithScaling:(double)arg1;	// IMP=0x0000000000017b5e
- (struct CGRect)_prerollIndicatorFrameWithScaling:(double)arg1;	// IMP=0x0000000000017a02
- (struct UIEdgeInsets)buttonView:(id)arg1 contentEdgeInsetsForProposedInsets:(struct UIEdgeInsets)arg2;	// IMP=0x0000000000017976
- (struct CGRect)buttonView:(id)arg1 titleRectForContentRect:(struct CGRect)arg2 proposedRect:(struct CGRect)arg3;	// IMP=0x000000000001786c
- (struct CGRect)buttonView:(id)arg1 imageRectForContentRect:(struct CGRect)arg2 proposedRect:(struct CGRect)arg3;	// IMP=0x00000000000176ed
- (void)buttonViewDidReceiveTouchUpInside:(id)arg1;	// IMP=0x000000000001764a
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000175ed
- (void)didMoveToWindow;	// IMP=0x0000000000017565
- (void)layoutSubviews;	// IMP=0x0000000000015ed5
- (_Bool)PG_preferredVisibilityForView:(id)arg1;	// IMP=0x0000000000015d3e
- (id)PG_backdropGroupLeader;	// IMP=0x0000000000015d29
- (void)updateControlsHidden;	// IMP=0x0000000000015c0f
- (void)updateControlsAlpha;	// IMP=0x0000000000015acb
- (void)updateProgress;	// IMP=0x00000000000158f4
- (void)viewModelDidUpdateValuesFromOldValues:(id)arg1;	// IMP=0x0000000000014cb4
- (void)_setContinuousCornerRadius:(double)arg1;	// IMP=0x0000000000014c40
- (void)dealloc;	// IMP=0x0000000000014bd8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014b06
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;	// IMP=0x00000000000143c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
