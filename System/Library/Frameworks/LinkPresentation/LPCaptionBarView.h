//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPCaptionBarAccessoryView, LPCaptionBarButtonView, LPCaptionBarPresentationProperties, LPCaptionBarStyle, LPCollaborationFooterView, LPComponentView, LPInlineMediaPlaybackInformation, LPPlayButtonView, LPVerticalTextStackView, NSRegularExpression, NSString;
@protocol LPTextStyleable, LPTextStyleable><LPSubtitleButtonContainer;

__attribute__((visibility("hidden")))
@interface LPCaptionBarView
{
    LPCaptionBarStyle *_style;	// 8 = 0x8
    LPCaptionBarPresentationProperties *_presentationProperties;	// 16 = 0x10
    LPComponentView *_leftIconView;	// 24 = 0x18
    LPComponentView *_rightIconView;	// 32 = 0x20
    LPPlayButtonView *_playButton;	// 40 = 0x28
    LPCaptionBarAccessoryView *_leftAccessoryView;	// 48 = 0x30
    LPCaptionBarAccessoryView *_rightAccessoryView;	// 56 = 0x38
    LPCaptionBarButtonView *_buttonView;	// 64 = 0x40
    LPComponentView *_leftIconBadgeView;	// 72 = 0x48
    LPComponentView *_rightIconBadgeView;	// 80 = 0x50
    LPComponentView<LPTextStyleable> *_aboveTopCaptionView;	// 88 = 0x58
    LPComponentView<LPTextStyleable> *_topCaptionView;	// 96 = 0x60
    LPComponentView<LPTextStyleable><LPSubtitleButtonContainer> *_bottomCaptionView;	// 104 = 0x68
    LPComponentView<LPTextStyleable> *_belowBottomCaptionView;	// 112 = 0x70
    LPVerticalTextStackView *_textStackView;	// 120 = 0x78
    LPInlineMediaPlaybackInformation *_inlinePlaybackInformation;	// 128 = 0x80
    _Bool _hasEverBuilt;	// 136 = 0x88
    _Bool _useProgressSpinner;	// 137 = 0x89
    LPCollaborationFooterView *_collaborationFooterView;	// 144 = 0x90
    NSRegularExpression *_emphasizedTextExpression;	// 152 = 0x98
    struct UIEdgeInsets _textSafeAreaInset;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00000000000c7282
@property(copy, nonatomic) NSRegularExpression *emphasizedTextExpression; // @synthesize emphasizedTextExpression=_emphasizedTextExpression;
@property(retain, nonatomic) LPCollaborationFooterView *collaborationFooterView; // @synthesize collaborationFooterView=_collaborationFooterView;
@property(nonatomic) struct UIEdgeInsets textSafeAreaInset; // @synthesize textSafeAreaInset=_textSafeAreaInset;
@property(nonatomic) _Bool useProgressSpinner; // @synthesize useProgressSpinner=_useProgressSpinner;
- (id)primaryIconView;	// IMP=0x00000000000c71cb
- (id)playable;	// IMP=0x00000000000c71ae
- (id)subtitleButton;	// IMP=0x00000000000c70f3
- (id)button;	// IMP=0x00000000000c7087
- (void)updateTextStack;	// IMP=0x00000000000c6be2
- (void)_buildViewsForCaptionBarIfNeeded;	// IMP=0x00000000000c5663
- (void)setPresentationProperties:(id)arg1;	// IMP=0x00000000000c564f
- (struct CGSize)_layoutCaptionBarForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;	// IMP=0x00000000000c1b21
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000c1b0d
- (void)layoutComponentView;	// IMP=0x00000000000c1abf
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000000000c1a18
- (void)animateInWithBaseAnimation:(id)arg1 currentTime:(double)arg2;	// IMP=0x00000000000c16bc
- (void)animateOut;	// IMP=0x00000000000c140f
- (void)setPlaybackInformation:(id)arg1;	// IMP=0x00000000000c1399
- (id)initWithHost:(id)arg1 style:(id)arg2 presentationProperties:(id)arg3;	// IMP=0x00000000000c122a
- (id)initWithHost:(id)arg1;	// IMP=0x00000000000c121c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

