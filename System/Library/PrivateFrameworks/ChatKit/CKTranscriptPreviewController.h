//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKViewController.h"

@class CKConversation, CKTranscriptCollectionView, NSString;

__attribute__((visibility("hidden")))
@interface CKTranscriptPreviewController : CKViewController
{
    _Bool _isInitialLayout;	// 8 = 0x8
    CKConversation *_conversation;	// 16 = 0x10
    CKTranscriptCollectionView *_collectionView;	// 24 = 0x18
    double _transcriptWidth;	// 32 = 0x20
    struct UIEdgeInsets _layoutMargins;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000a6e06
@property(nonatomic) _Bool isInitialLayout; // @synthesize isInitialLayout=_isInitialLayout;
@property(nonatomic) struct UIEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic) double transcriptWidth; // @synthesize transcriptWidth=_transcriptWidth;
@property(retain, nonatomic) CKTranscriptCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 showInlineReplyForItemWithIndexPath:(id)arg3;	// IMP=0x00000000000a6d34
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 selectedItemAtIndexPath:(id)arg3;	// IMP=0x00000000000a6d2e
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitSticker:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00000000000a6d26
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestStartEditingPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000a6d20
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 error:(id *)arg5;	// IMP=0x00000000000a6d18
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 didRequestPresentationStyle:(unsigned long long)arg3 forChatItem:(id)arg4 allowAllStyles:(_Bool)arg5;	// IMP=0x00000000000a6d12
- (void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2;	// IMP=0x00000000000a6d0c
- (void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;	// IMP=0x00000000000a6d06
- (id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg1;	// IMP=0x00000000000a6cfe
- (_Bool)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2;	// IMP=0x00000000000a6cf6
- (_Bool)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg1;	// IMP=0x00000000000a6cee
- (_Bool)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2;	// IMP=0x00000000000a6ce6
- (_Bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;	// IMP=0x00000000000a6cde
- (void)transcriptCollectionViewController:(id)arg1 requestRecoverJunkConversation:(id)arg2;	// IMP=0x00000000000a6cd8
- (void)transcriptCollectionViewController:(id)arg1 requestDeleteJunkConversation:(id)arg2;	// IMP=0x00000000000a6cd2
- (void)transcriptCollectionViewController:(id)arg1 willDeleteChatItems:(id)arg2;	// IMP=0x00000000000a6ccc
- (void)transcriptCollectionViewController:(id)arg1 viewedCommSafetyItemWithIndexPath:(id)arg2;	// IMP=0x00000000000a6cc6
- (void)transcriptCollectionViewController:(id)arg1 showMessageSomeoneForItemWithIndexPath:(id)arg2;	// IMP=0x00000000000a6cc0
- (double)transcriptCollectionViewController:(id)arg1 targetAlphaForChatItem:(id)arg2;	// IMP=0x00000000000a6c6a
- (id)traitCollectionForTranscriptCollectionViewController:(id)arg1;	// IMP=0x00000000000a6c58
- (void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg1;	// IMP=0x00000000000a6c52
- (void)transcriptCollectionViewControllerRestingStateDidChange:(id)arg1;	// IMP=0x00000000000a6c4c
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize)arg2;	// IMP=0x00000000000a6b46
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 shouldSelectChatItem:(id)arg3;	// IMP=0x00000000000a6b3e
- (_Bool)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;	// IMP=0x00000000000a6b36
- (void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1;	// IMP=0x00000000000a6b30
- (void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(id)arg1;	// IMP=0x00000000000a6b2a
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;	// IMP=0x00000000000a6b24
- (void)transcriptCollectionViewControllerBlockContactButtonTapped:(id)arg1;	// IMP=0x00000000000a6b1e
- (void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;	// IMP=0x00000000000a6b18
- (void)transcriptCollectionViewControllerPerformBatchUpdateCompleted:(id)arg1;	// IMP=0x00000000000a6b12
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;	// IMP=0x00000000000a6b0c
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;	// IMP=0x00000000000a6b06
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;	// IMP=0x00000000000a6b00
- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;	// IMP=0x00000000000a6afa
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;	// IMP=0x00000000000a6af4
- (void)transcriptCollectionViewController:(id)arg1 didTapPluginStatusButtonForChatItem:(id)arg2;	// IMP=0x00000000000a6aee
- (void)transcriptCollectionViewController:(id)arg1 didTapAttributionButtonForChatItem:(id)arg2;	// IMP=0x00000000000a6ae8
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3;	// IMP=0x00000000000a6ae2
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3;	// IMP=0x00000000000a6adc
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;	// IMP=0x00000000000a6ad6
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000a6ad0
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000a6aca
- (void)transcriptCollectionViewControllerNeedsChatItemLayoutInvalidation:(id)arg1;	// IMP=0x00000000000a6ac4
- (id)textInputContextIdentifier;	// IMP=0x00000000000a6a51
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000a66c2
- (void)loadView;	// IMP=0x00000000000a6580
- (id)initWithConversation:(id)arg1 transcriptWidth:(double)arg2 layoutMargins:(struct UIEdgeInsets)arg3;	// IMP=0x00000000000a64be

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
