//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileViewController.h"

@class NSString, PUAssetReference, PUAssetViewModel, UIView, UIViewController;
@protocol PUAccessoryContentViewController, PUAccessoryTileViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUAccessoryTileViewController : PUTileViewController
{
    _Bool _isPerformingChanges;	// 8 = 0x8
    _Bool _isPerformingUpdates;	// 9 = 0x9
    _Bool _isUpdateScheduled;	// 10 = 0xa
    struct {
        _Bool respondsToViewHostingGestureRecognizers;
        _Bool respondsToWillHideToolbarWhenShowingAccessoryView;
        _Bool respondsToWillHideNavigationBarWhenShowingAccessoryView;
        _Bool respondsToShouldUseSquareImageWhenShowingAccessoryView;
    } _delegateFlags;	// 11 = 0xb
    CDStruct_516723a0 _needsUpdateFlags;	// 15 = 0xf
    _Bool __wasActiveOnLastMasterContentOffsetChange;	// 20 = 0x14
    id <PUAccessoryTileViewControllerDelegate> _delegate;	// 24 = 0x18
    PUAssetViewModel *_assetViewModel;	// 32 = 0x20
    PUAssetReference *_assetReference;	// 40 = 0x28
    UIViewController<PUAccessoryContentViewController> *__contentViewController;	// 48 = 0x30
    UIViewController<PUAccessoryContentViewController> *__loadedContentViewController;	// 56 = 0x38
    UIView *__contentView;	// 64 = 0x40
    long long __contentInsetsChangeReason;	// 72 = 0x48
    double __minimumVisibleHeight;	// 80 = 0x50
    double __editorHeightDelta;	// 88 = 0x58
    struct CGRect __contentBounds;	// 96 = 0x60
    struct CGRect __untransformedMasterContentFrame;	// 128 = 0x80
    struct UIEdgeInsets __contentInsets;	// 160 = 0xa0
    struct CGRect __keyboardFrame;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000000004b6a3
@property(nonatomic, setter=_setEditorHeightDelta:) double _editorHeightDelta; // @synthesize _editorHeightDelta=__editorHeightDelta;
@property(nonatomic, setter=_setWasActiveOnLastMasterContentOffsetChange:) _Bool _wasActiveOnLastMasterContentOffsetChange; // @synthesize _wasActiveOnLastMasterContentOffsetChange=__wasActiveOnLastMasterContentOffsetChange;
@property(nonatomic, setter=_setMinimumVisibleHeight:) double _minimumVisibleHeight; // @synthesize _minimumVisibleHeight=__minimumVisibleHeight;
@property(nonatomic, setter=_setContentInsetsChangeReason:) long long _contentInsetsChangeReason; // @synthesize _contentInsetsChangeReason=__contentInsetsChangeReason;
@property(nonatomic, setter=_setKeyboardFrame:) struct CGRect _keyboardFrame; // @synthesize _keyboardFrame=__keyboardFrame;
@property(nonatomic, setter=_setContentInsets:) struct UIEdgeInsets _contentInsets; // @synthesize _contentInsets=__contentInsets;
@property(nonatomic, setter=_setUntransformedMasterContentFrame:) struct CGRect _untransformedMasterContentFrame; // @synthesize _untransformedMasterContentFrame=__untransformedMasterContentFrame;
@property(nonatomic, setter=_setContentBounds:) struct CGRect _contentBounds; // @synthesize _contentBounds=__contentBounds;
@property(retain, nonatomic, setter=_setContentView:) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(retain, nonatomic, setter=_setLoadedContentViewController:) UIViewController<PUAccessoryContentViewController> *_loadedContentViewController; // @synthesize _loadedContentViewController=__loadedContentViewController;
@property(retain, nonatomic, setter=_setContentViewController:) UIViewController<PUAccessoryContentViewController> *_contentViewController; // @synthesize _contentViewController=__contentViewController;
@property(retain, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
@property(nonatomic) __weak id <PUAccessoryTileViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateAssetViewModelForAnimating;	// IMP=0x000000000004b401
- (void)didChangeAnimating;	// IMP=0x000000000004b3c0
- (void)didChangeVisibleRect;	// IMP=0x000000000004b37f
- (_Bool)wantsVisibleRectChanges;	// IMP=0x000000000004b377
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x000000000004b32b
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x000000000004b236
- (void)accessoryContentViewController:(id)arg1 editorHeightDidChange:(double)arg2;	// IMP=0x000000000004b1e5
- (void)accessoryContentViewControllerContentBoundsDidChange:(id)arg1;	// IMP=0x000000000004b199
- (id)accessoryContentViewControllerViewHostingGestureRecognizers:(id)arg1;	// IMP=0x000000000004b02a
- (_Bool)_isPhoneAndLandscape;	// IMP=0x000000000004af0a
- (void)_updateMasterContentOffsetIfNeeded;	// IMP=0x000000000004acda
- (void)_invalidateMasterContentOffset;	// IMP=0x000000000004acbc
- (void)_updateContentBoundsIfNeeded;	// IMP=0x000000000004ab37
- (void)_invalidateContentBounds;	// IMP=0x000000000004ab19
- (void)_updateContentViewMetricsIfNeeded;	// IMP=0x000000000004a224
- (void)_invalidateContentViewMetrics;	// IMP=0x000000000004a206
- (void)_updateLoadedContentViewControllerIfNeeded;	// IMP=0x000000000004a0bc
- (void)_invalidateLoadedContentViewController;	// IMP=0x000000000004a09e
- (void)_updateContentViewControllerIfNeeded;	// IMP=0x0000000000049fe1
- (void)_invalidateContentViewController;	// IMP=0x0000000000049fc4
- (void)_updateIfNeeded;	// IMP=0x0000000000049f31
- (void)_handleScheduledUpdate;	// IMP=0x0000000000049f12
- (void)_setNeedsUpdate;	// IMP=0x0000000000049e54
- (_Bool)_needsUpdate;	// IMP=0x0000000000049e22
- (void)_performChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049dc2
- (_Bool)isLocationFromProviderInContentArea:(id)arg1;	// IMP=0x0000000000049467
- (void)didChangeActive;	// IMP=0x0000000000049426
- (void)applyLayoutInfo:(id)arg1;	// IMP=0x0000000000049207
- (void)becomeReusable;	// IMP=0x0000000000049195
- (void)viewDidLoad;	// IMP=0x0000000000049154
- (void)dealloc;	// IMP=0x00000000000490df
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x000000000004908d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
