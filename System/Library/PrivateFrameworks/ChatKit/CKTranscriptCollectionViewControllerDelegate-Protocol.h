//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKAggregateAttachmentMessagePartChatItem, CKAttachmentMessagePartChatItem, CKBalloonView, CKBrowserItemPayload, CKChatItem, CKConversation, CKFullScreenEffect, CKMessageStatusChatItem, CKTranscriptStatusCell, CKViewController, IMSticker, NSArray, NSIndexPath, NSString, PXAssetReference, UIContextMenuConfiguration, UIContextMenuInteraction, UITargetedPreview, UITraitCollection, _UIContextMenuStyle;
@protocol CKCoreTranscriptControllerProtocol, CKSendAnimationContext, UIContextMenuInteractionAnimating, UIContextMenuInteractionCommitAnimating;

@protocol CKTranscriptCollectionViewControllerDelegate <NSObject>
- (_Bool)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonViewDidRequestCommitSticker:(IMSticker *)arg2 forPlugin:(NSString *)arg3 allowAllCommits:(_Bool)arg4 error:(id *)arg5;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonViewDidRequestStartEditingPayload:(CKBrowserItemPayload *)arg2 forPlugin:(NSString *)arg3 allowAllCommits:(_Bool)arg4 completionHandler:(void (^)(NSError *))arg5;
- (_Bool)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonViewDidRequestCommitPayload:(CKBrowserItemPayload *)arg2 forPlugin:(NSString *)arg3 allowAllCommits:(_Bool)arg4 error:(id *)arg5;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 didRequestPresentationStyle:(unsigned long long)arg3 forChatItem:(CKChatItem *)arg4 allowAllStyles:(_Bool)arg5;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id <CKSendAnimationContext>)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id <CKSendAnimationContext>)arg2;
- (NSArray *)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (_Bool)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 shouldCleanupFullscreenEffectUI:(CKFullScreenEffect *)arg2;
- (_Bool)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (_Bool)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 shouldSetupFullscreenEffectUI:(CKFullScreenEffect *)arg2;
- (_Bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 requestRecoverJunkConversation:(CKConversation *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 requestDeleteJunkConversation:(CKConversation *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willDeleteChatItems:(NSArray *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 viewedCommSafetyItemWithIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 showMessageSomeoneForItemWithIndexPath:(NSIndexPath *)arg2;
- (double)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 targetAlphaForChatItem:(CKChatItem *)arg2;
- (UITraitCollection *)traitCollectionForTranscriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerWillDisplayLastBalloon:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerBlockContactButtonTapped:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerRestingStateDidChange:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 collectionViewContentSizeDidChange:(struct CGSize)arg2;
- (void)transcriptCollectionViewControllerPerformBatchUpdateCompleted:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (_Bool)transcriptCollectionViewControllerShouldPlayAudio:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (_Bool)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 shouldSelectChatItem:(CKChatItem *)arg3;
- (void)transcriptCollectionViewControllerDidInset:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewControllerWillInset:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonViewTitleTappedForItemWithIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapPluginStatusButtonForChatItem:(CKMessageStatusChatItem *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapAttributionButtonForChatItem:(CKMessageStatusChatItem *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 showInlineReplyForItemWithIndexPath:(NSIndexPath *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 selectedItemAtIndexPath:(NSIndexPath *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 doubleTappedItemAtIndexPath:(NSIndexPath *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 longPressedForItemWithIndexPath:(NSIndexPath *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 balloonView:(CKBalloonView *)arg2 tappedForChatItem:(CKChatItem *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)transcriptCollectionViewControllerNeedsChatItemLayoutInvalidation:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;

@optional
- (_Bool)transcriptCollectionViewControllerIsPresentedInModalInlineReply:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (CKChatItem *)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 chatItemForContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willDisplayContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willPerformPreviewActionForMenuWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionCommitAnimating>)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willEndContextMenuInteractionWithConfiguration:(UIContextMenuConfiguration *)arg2 animator:(id <UIContextMenuInteractionAnimating>)arg3;
- (_UIContextMenuStyle *)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 styleForContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UITargetedPreview *)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 previewForDismissingContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UITargetedPreview *)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 previewForHighlightingContextMenuWithConfiguration:(UIContextMenuConfiguration *)arg2;
- (UIContextMenuConfiguration *)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 contextMenuConfigurationForItemAtIndexPath:(NSIndexPath *)arg2 point:(struct CGPoint)arg3 interaction:(UIContextMenuInteraction *)arg4;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapPendingMomentShareForChatItem:(CKAttachmentMessagePartChatItem *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapPhotoStackButtonForPendingMomentShareChatItem:(CKAttachmentMessagePartChatItem *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapPhotoStackForChatItem:(CKAggregateAttachmentMessagePartChatItem *)arg2 assetReference:(PXAssetReference *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapPhotoStackAdditionalItemsForChatItem:(CKAggregateAttachmentMessagePartChatItem *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didPinchPhotoStackForChatItem:(CKAggregateAttachmentMessagePartChatItem *)arg2 assetReference:(PXAssetReference *)arg3;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapPhotoStackButtonForChatItem:(CKAggregateAttachmentMessagePartChatItem *)arg2 assetReference:(PXAssetReference *)arg3;
- (void)transcriptCollectionViewControllerAudioControllerDidStop:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willEndDragging:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3 targetContentOffset:(inout struct CGPoint *)arg4;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willBeginDragging:(struct CGPoint)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didScroll:(struct CGPoint)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 didTapReplyCountStatusButtonForChatItem:(CKMessageStatusChatItem *)arg2;
- (_Bool)transcriptCollectionViewControllerShouldForceOpaqueMask:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willDisplayStatusCell:(CKTranscriptStatusCell *)arg2;
- (void)transcriptCollectionViewController:(CKViewController<CKCoreTranscriptControllerProtocol> *)arg1 willDisplayBalloonForGUID:(NSString *)arg2;
@end
