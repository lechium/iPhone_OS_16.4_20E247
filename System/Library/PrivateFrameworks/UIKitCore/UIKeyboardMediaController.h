//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView, UIViewController, _UIAsyncInvocation, _UITextDragCaretView;
@protocol UIKeyboardMediaControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardMediaController : NSObject
{
    UIViewController *_remoteCardViewController;	// 8 = 0x8
    _UIAsyncInvocation *_remoteCardViewControllerRequest;	// 16 = 0x10
    UIViewController *_recentlyUsedMediaViewController;	// 24 = 0x18
    _UIAsyncInvocation *_recentlyUsedMediaViewControllerRequest;	// 32 = 0x20
    UIView *_targetViewAwaitingRecents;	// 40 = 0x28
    _Bool _hasRequestedRecentlyUsedMediaViewController;	// 48 = 0x30
    unsigned long long _viewServiceTerminationCount;	// 56 = 0x38
    _UITextDragCaretView *_dropCaret;	// 64 = 0x40
    _Bool _shouldRetryFetchingRecents;	// 72 = 0x48
    id <UIKeyboardMediaControllerDelegate> _delegate;	// 80 = 0x50
}

+ (id)sharedKeyboardMediaController;	// IMP=0x00100000006b7836
- (void).cxx_destruct;	// IMP=0x00000000006b9e9d
@property(readonly, nonatomic) _Bool shouldRetryFetchingRecents; // @synthesize shouldRetryFetchingRecents=_shouldRetryFetchingRecents;
@property(nonatomic) __weak id <UIKeyboardMediaControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)draggedStickerToPoint:(struct CGPoint)arg1;	// IMP=0x00000000006b9b61
- (void)requestInsertionPointCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006b987b
- (void)_didInsertMedia;	// IMP=0x00000000006b97f7
- (void)stageStickerWithFileHandle:(id)arg1 url:(id)arg2 accessibilityLabel:(id)arg3;	// IMP=0x00000000006b9403
- (void)pasteImageAtFileHandle:(id)arg1;	// IMP=0x00000000006b8faf
- (void)dismissCard;	// IMP=0x00000000006b8f9d
- (void)_didPresentCard;	// IMP=0x00000000006b8f00
- (void)_instantiateCardFromViewService;	// IMP=0x00000000006b89e5
- (void)dismissCardAnimated;	// IMP=0x00000000006b8888
- (void)presentCard;	// IMP=0x00000000006b8720
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00000000006b870e
- (void)_tearDownRemoteViews;	// IMP=0x00000000006b85f0
- (void)_displayiMessageAppWithID:(id)arg1;	// IMP=0x00000000006b839c
- (void)_keyboardDidChangeFrame:(id)arg1;	// IMP=0x00000000006b82b1
- (void)dismissCardIfNeeded;	// IMP=0x00000000006b80f8
- (void)_instantiateViewServiceRecentlyUsedMediaWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006b7e44
- (void)prefetchRecentsViewControllerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000006b7cb6
- (void)releaseRecentlyUsedMediaViewIfNeeded;	// IMP=0x00000000006b7c25
- (void)showRecentlyUsedMediaInView:(id)arg1;	// IMP=0x00000000006b7bd9
- (void)_embedRecentlyUsedMediaViewInView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000006b79ab
- (_Bool)recentsViewWillBeVisible;	// IMP=0x00000000006b78de
- (_Bool)shouldPrefetchRemoteView;	// IMP=0x00000000006b78bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
