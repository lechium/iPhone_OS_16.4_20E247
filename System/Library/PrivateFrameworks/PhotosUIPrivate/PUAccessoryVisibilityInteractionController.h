//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PUAssetViewModel, PUBrowsingSession, PUChangeDirectionValueFilter, PXNumberAnimator, PXVerticalSwipeGestureRecognizerHelper, UIPanGestureRecognizer;
@protocol PUAccessoryVisibilityInteractionControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUAccessoryVisibilityInteractionController : NSObject
{
    _Bool _isPerformingChanges;	// 8 = 0x8
    _Bool _isPerformingUpdates;	// 9 = 0x9
    _Bool _isUpdateScheduled;	// 10 = 0xa
    struct {
        _Bool contentOffset;
    } _needsUpdateFlags;	// 11 = 0xb
    struct {
        _Bool respondsToCanBeginAtLocationFromProvider;
        _Bool respondsToDidEnd;
        _Bool respondsToIsLocationFromProviderInAccessoryContent;
        _Bool respondsToSetAccessoryVisibleChangeReason;
    } _delegateFlags;	// 12 = 0xc
    id <PUAccessoryVisibilityInteractionControllerDelegate> _delegate;	// 16 = 0x10
    PUBrowsingSession *_browsingSession;	// 24 = 0x18
    UIPanGestureRecognizer *_panGestureRecognizer;	// 32 = 0x20
    PUAssetViewModel *__assetViewModel;	// 40 = 0x28
    PXNumberAnimator *__overridingContentOffsetY;	// 48 = 0x30
    PXNumberAnimator *__contentOffsetOverrideFactor;	// 56 = 0x38
    PUChangeDirectionValueFilter *__verticalDirectionValueFilter;	// 64 = 0x40
    PUChangeDirectionValueFilter *__swipeDirectionValueFilter;	// 72 = 0x48
    PXVerticalSwipeGestureRecognizerHelper *_verticalSwipeGestureRecognizerHelper;	// 80 = 0x50
    struct CGPoint __initialContentOffset;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000004cc0f
@property(readonly, nonatomic) PXVerticalSwipeGestureRecognizerHelper *verticalSwipeGestureRecognizerHelper; // @synthesize verticalSwipeGestureRecognizerHelper=_verticalSwipeGestureRecognizerHelper;
@property(retain, nonatomic, setter=_setSwipeDirectionValueFilter:) PUChangeDirectionValueFilter *_swipeDirectionValueFilter; // @synthesize _swipeDirectionValueFilter=__swipeDirectionValueFilter;
@property(retain, nonatomic, setter=_setVerticalDirectionValueFilter:) PUChangeDirectionValueFilter *_verticalDirectionValueFilter; // @synthesize _verticalDirectionValueFilter=__verticalDirectionValueFilter;
@property(retain, nonatomic, setter=_setContentOffsetOverrideFactor:) PXNumberAnimator *_contentOffsetOverrideFactor; // @synthesize _contentOffsetOverrideFactor=__contentOffsetOverrideFactor;
@property(retain, nonatomic, setter=_setOverridingContentOffsetY:) PXNumberAnimator *_overridingContentOffsetY; // @synthesize _overridingContentOffsetY=__overridingContentOffsetY;
@property(nonatomic, setter=_setInitialContentOffset:) struct CGPoint _initialContentOffset; // @synthesize _initialContentOffset=__initialContentOffset;
@property(retain, nonatomic, setter=_setAssetViewModel:) PUAssetViewModel *_assetViewModel; // @synthesize _assetViewModel=__assetViewModel;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
@property(nonatomic) __weak id <PUAccessoryVisibilityInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)viewModel:(id)arg1 didChange:(id)arg2;	// IMP=0x000000000004caff
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;	// IMP=0x000000000004ca45
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000004c8bb
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000004c7e9
- (void)_updateContentOffsetIfNeeded;	// IMP=0x000000000004c6c8
- (void)_invalidateContentOffset;	// IMP=0x000000000004c6b2
- (void)_handleScheduledUpdate;	// IMP=0x000000000004c69a
- (void)_setNeedsUpdate;	// IMP=0x000000000004c5f5
- (void)_updateIfNeeded;	// IMP=0x000000000004c531
- (_Bool)_needsUpdate;	// IMP=0x000000000004c528
- (void)_performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000004c4cf
- (id)_currentAssetViewModel;	// IMP=0x000000000004c2c5
- (void)_setAccessoryVisible:(_Bool)arg1;	// IMP=0x000000000004c1c5
- (void)_handlePanGestureRecognizer:(id)arg1;	// IMP=0x000000000004bd1f
- (void)_updateGestureRecognizers;	// IMP=0x000000000004bc2a
- (void)invalidateViewHostingGestureRecognizers;	// IMP=0x000000000004bc18
- (id)init;	// IMP=0x000000000004b9da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

