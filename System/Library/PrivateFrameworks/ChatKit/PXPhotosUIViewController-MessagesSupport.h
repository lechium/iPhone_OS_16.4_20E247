//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotosUIViewController.h>

@class CKChatController, NSString, UIView;

@interface PXPhotosUIViewController (MessagesSupport)
- (void)_handleBackButton;	// IMP=0x00200000004cc0e5
- (id)toolbarItemForIdentifier:(id)arg1;	// IMP=0x00200000004cc0dd
- (void)providerWillBeRemovedFromToolbarController:(id)arg1;	// IMP=0x00200000004cc0d7
- (void)configureWithToolbarController:(id)arg1;	// IMP=0x00200000004cc0d1
- (id)invisibleInkEffectControllerForPreviewController:(id)arg1;	// IMP=0x00200000004cc0c9
- (void)previewControllerDidCancelDismiss:(id)arg1;	// IMP=0x00200000004cc0c3
- (void)sendMessageAcknowledgment:(long long)arg1 chatItem:(id)arg2 previewController:(id)arg3;	// IMP=0x00200000004cbfb9
- (_Bool)previewControllerIsInGroupConversation:(id)arg1;	// IMP=0x00200000004cbee4
- (id)chatItemForMediaObject:(id)arg1 previewController:(id)arg2;	// IMP=0x00200000004cbe1e
- (void)replyButtonTappedForMediaObject:(id)arg1 previewController:(id)arg2;	// IMP=0x00200000004cbc23
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;	// IMP=0x00200000004cbc1b
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(struct CGRect *)arg3;	// IMP=0x00200000004cb964
- (void)previewControllerDidDismiss:(id)arg1;	// IMP=0x00200000004cb907
- (void)previewControllerWillDismiss:(id)arg1;	// IMP=0x00200000004cb788
- (id)_assetReferenceForPreviewItem:(id)arg1;	// IMP=0x00200000004cb655
- (_Bool)shouldHideInteractionOptions;	// IMP=0x00200000004cb611
- (id)additionalActivitiesTypesForPreviewController:(id)arg1;	// IMP=0x00200000004cb493
- (id)excludedActivityTypesForPreviewController:(id)arg1;	// IMP=0x00200000004cb39d
@property(nonatomic) __weak CKChatController *ck_chatController;
@property(retain, nonatomic) UIView *ck_transitionView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

