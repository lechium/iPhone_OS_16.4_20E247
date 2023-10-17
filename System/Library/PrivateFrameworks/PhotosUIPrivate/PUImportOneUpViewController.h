//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSIndexPath, NSMutableArray, NSMutableSet, NSString, PFCoalescer, PLDateRangeFormatter, PLRoundProgressView, PUImportActionCoordinator, PUImportChangeDetailsCollectionViewHelper, PUImportOneUpViewControllerSpecManager, PUReviewScrubber, PUSelectableAssetCollectionViewLayout, PXAssetReference, PXImportAssetsDataSource, PXImportAssetsDataSourceManager, PXImportController, PXMediaProvider, PXNavigationTitleView, UIBarButtonItem, UICollectionView, UICollectionViewLayout, UITapGestureRecognizer;

__attribute__((visibility("hidden")))
@interface PUImportOneUpViewController : UIViewController
{
    _Bool _isCommitingPreview;	// 8 = 0x8
    _Bool _performingDataSourceChange;	// 9 = 0x9
    _Bool _allowsSelection;	// 10 = 0xa
    _Bool _updatingContentOffsetFromScrubbing;	// 11 = 0xb
    _Bool _hasPerformedNavigationToStartingAsset;	// 12 = 0xc
    _Bool _loadLargeThumbnailsInCustomOrder;	// 13 = 0xd
    _Bool _animatingTransition;	// 14 = 0xe
    PUReviewScrubber *_reviewScrubber;	// 16 = 0x10
    PXAssetReference *_startingAssetReference;	// 24 = 0x18
    PUImportOneUpViewControllerSpecManager *_specManager;	// 32 = 0x20
    PXImportController *_importController;	// 40 = 0x28
    unsigned long long _presentationFilter;	// 48 = 0x30
    PXImportAssetsDataSourceManager *_importDataSourceManager;	// 56 = 0x38
    PXImportAssetsDataSource *_importDataSource;	// 64 = 0x40
    PXImportAssetsDataSource *_pendingDataSource;	// 72 = 0x48
    PUImportChangeDetailsCollectionViewHelper *_changeDetailsHelper;	// 80 = 0x50
    PXMediaProvider *_mediaProvider;	// 88 = 0x58
    UICollectionView *_collectionView;	// 96 = 0x60
    PUSelectableAssetCollectionViewLayout *_collectionViewLayout;	// 104 = 0x68
    UIBarButtonItem *_cancelBarButtonItem;	// 112 = 0x70
    UIBarButtonItem *_importBarButtonItem;	// 120 = 0x78
    UIBarButtonItem *_stopImportBarButtonItem;	// 128 = 0x80
    UIBarButtonItem *_deleteBarButtonItem;	// 136 = 0x88
    UIBarButtonItem *_progressButtonItem;	// 144 = 0x90
    PLRoundProgressView *_roundProgressView;	// 152 = 0x98
    UIBarButtonItem *_bottomSpacerBarButtonItem;	// 160 = 0xa0
    PUImportActionCoordinator *_actionCoordinator;	// 168 = 0xa8
    PXNavigationTitleView *_navigationTitleView;	// 176 = 0xb0
    PLDateRangeFormatter *_dayFormatter;	// 184 = 0xb8
    PLDateRangeFormatter *_timeFormatter;	// 192 = 0xc0
    UITapGestureRecognizer *_tapGestureRecognizer;	// 200 = 0xc8
    NSIndexPath *_inFlightReferenceIndexPath;	// 208 = 0xd0
    NSMutableSet *_thumbnailLoadableItemWhitelist;	// 216 = 0xd8
    NSMutableSet *_itemsWithInvalidImageSizes;	// 224 = 0xe0
    PFCoalescer *_relayoutCoalescer;	// 232 = 0xe8
    NSMutableArray *_itemsNeedingRelayout;	// 240 = 0xf0
    UICollectionViewLayout *_transitionLayout;	// 248 = 0xf8
}

- (void).cxx_destruct;	// IMP=0x00000000001fdf06
@property(nonatomic, getter=isAnimatingTransition) _Bool animatingTransition; // @synthesize animatingTransition=_animatingTransition;
@property(retain, nonatomic) UICollectionViewLayout *transitionLayout; // @synthesize transitionLayout=_transitionLayout;
@property(retain, nonatomic) NSMutableArray *itemsNeedingRelayout; // @synthesize itemsNeedingRelayout=_itemsNeedingRelayout;
@property(retain, nonatomic) PFCoalescer *relayoutCoalescer; // @synthesize relayoutCoalescer=_relayoutCoalescer;
@property(retain, nonatomic) NSMutableSet *itemsWithInvalidImageSizes; // @synthesize itemsWithInvalidImageSizes=_itemsWithInvalidImageSizes;
@property(retain, nonatomic) NSMutableSet *thumbnailLoadableItemWhitelist; // @synthesize thumbnailLoadableItemWhitelist=_thumbnailLoadableItemWhitelist;
@property(nonatomic) _Bool loadLargeThumbnailsInCustomOrder; // @synthesize loadLargeThumbnailsInCustomOrder=_loadLargeThumbnailsInCustomOrder;
@property(nonatomic) _Bool hasPerformedNavigationToStartingAsset; // @synthesize hasPerformedNavigationToStartingAsset=_hasPerformedNavigationToStartingAsset;
@property(readonly, nonatomic) _Bool updatingContentOffsetFromScrubbing; // @synthesize updatingContentOffsetFromScrubbing=_updatingContentOffsetFromScrubbing;
@property(readonly, nonatomic) NSIndexPath *inFlightReferenceIndexPath; // @synthesize inFlightReferenceIndexPath=_inFlightReferenceIndexPath;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) PLDateRangeFormatter *timeFormatter; // @synthesize timeFormatter=_timeFormatter;
@property(readonly, nonatomic) PLDateRangeFormatter *dayFormatter; // @synthesize dayFormatter=_dayFormatter;
@property(readonly, nonatomic) PXNavigationTitleView *navigationTitleView; // @synthesize navigationTitleView=_navigationTitleView;
@property(nonatomic) _Bool allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(retain, nonatomic) PUImportActionCoordinator *actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
@property(readonly, nonatomic) UIBarButtonItem *bottomSpacerBarButtonItem; // @synthesize bottomSpacerBarButtonItem=_bottomSpacerBarButtonItem;
@property(retain, nonatomic) PLRoundProgressView *roundProgressView; // @synthesize roundProgressView=_roundProgressView;
@property(readonly, nonatomic) UIBarButtonItem *progressButtonItem; // @synthesize progressButtonItem=_progressButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *deleteBarButtonItem; // @synthesize deleteBarButtonItem=_deleteBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *stopImportBarButtonItem; // @synthesize stopImportBarButtonItem=_stopImportBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *importBarButtonItem; // @synthesize importBarButtonItem=_importBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem; // @synthesize cancelBarButtonItem=_cancelBarButtonItem;
@property(readonly, nonatomic) PUSelectableAssetCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) PXMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property(retain, nonatomic) PUImportChangeDetailsCollectionViewHelper *changeDetailsHelper; // @synthesize changeDetailsHelper=_changeDetailsHelper;
@property(retain, nonatomic) PXImportAssetsDataSource *pendingDataSource; // @synthesize pendingDataSource=_pendingDataSource;
@property(nonatomic) _Bool performingDataSourceChange; // @synthesize performingDataSourceChange=_performingDataSourceChange;
@property(retain, nonatomic) PXImportAssetsDataSource *importDataSource; // @synthesize importDataSource=_importDataSource;
@property(retain, nonatomic) PXImportAssetsDataSourceManager *importDataSourceManager; // @synthesize importDataSourceManager=_importDataSourceManager;
@property(nonatomic) unsigned long long presentationFilter; // @synthesize presentationFilter=_presentationFilter;
@property(retain, nonatomic) PXImportController *importController; // @synthesize importController=_importController;
@property(retain, nonatomic) PUImportOneUpViewControllerSpecManager *specManager; // @synthesize specManager=_specManager;
@property(nonatomic) _Bool isCommitingPreview; // @synthesize isCommitingPreview=_isCommitingPreview;
@property(readonly, nonatomic) PXAssetReference *startingAssetReference; // @synthesize startingAssetReference=_startingAssetReference;
- (id)nextIndexPath:(id)arg1;	// IMP=0x00000000001fda1e
- (id)previousIndexPath:(id)arg1;	// IMP=0x00000000001fd8fd
- (long long)nextSectionWithItems:(long long)arg1;	// IMP=0x00000000001fd87c
- (long long)previousSectionWithItems:(long long)arg1;	// IMP=0x00000000001fd811
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000001fd72d
- (struct CGRect)imageRectFromPhotoView:(id)arg1;	// IMP=0x00000000001fd63a
- (void)didTransitionFromViewController:(id)arg1 toViewController:(id)arg2 withTransitionItems:(id)arg3;	// IMP=0x00000000001fd522
- (void)willTransitionFromViewController:(id)arg1 toViewController:(id)arg2 withTransitionItems:(id)arg3;	// IMP=0x00000000001fd1e2
- (void)prepareTransitionItemViewForDestination:(id)arg1;	// IMP=0x00000000001fcf47
- (struct CGRect)targetFrameForTransitionItem:(id)arg1;	// IMP=0x00000000001fcdea
- (id)transitionItemsForContext:(id)arg1;	// IMP=0x00000000001fcab4
- (_Bool)reviewScrubber:(id)arg1 shouldProvideFeedbackForCellAtIndexPath:(id)arg2;	// IMP=0x00000000001fcaac
- (unsigned long long)reviewScrubber:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;	// IMP=0x00000000001fca59
- (unsigned long long)numberOfSectionsInReviewScrubber:(id)arg1;	// IMP=0x00000000001fca15
- (void)reviewScrubberDidSelectItemAtIndexPath:(id)arg1;	// IMP=0x00000000001fc991
- (void)reviewScrubberDidScrub:(id)arg1;	// IMP=0x00000000001fc8da
- (void)reviewScrubber:(id)arg1 willDisplayCell:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000001fc835
- (void)importOneUpScrubberCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;	// IMP=0x00000000001fc7c6
- (long long)importOneUpScrubberCell:(id)arg1 requestedThumbnailForImportItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fc6c3
- (void)relayoutCollectionView;	// IMP=0x00000000001fc2fd
- (void)invalidateLayoutIfNeededForImportItem:(id)arg1;	// IMP=0x00000000001fc086
- (void)importOneUpCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;	// IMP=0x00000000001fc017
- (long long)importOneUpCell:(id)arg1 requestedThumbnailForImportItem:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fbe20
- (void)importOneUpCell:(id)arg1 requestedBadgeUpdateForImportItem:(id)arg2;	// IMP=0x00000000001fbc90
- (struct CGRect)layout:(id)arg1 collectionView:(id)arg2 selectionBadgeFrameForItemFrame:(struct CGRect)arg3 atIndexPath:(id)arg4;	// IMP=0x00000000001fbc50
- (struct CGSize)layout:(id)arg1 collectionView:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x00000000001fbc3b
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x00000000001fba32
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000001fb921
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x00000000001fb847
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x00000000001fb7f4
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x00000000001fb7b0
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000001fb798
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000001fb3aa
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x00000000001fb36d
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x00000000001fb327
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000001fb2e2
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000001fb2a5
- (void)_importControllerWillBeginAction;	// IMP=0x00000000001fb291
- (void)_importControllerDidEndAction;	// IMP=0x00000000001fb202
- (id)importDestinationForActionCoordinator:(id)arg1;	// IMP=0x00000000001fb1b2
- (void)actionCoordinatorDidEndDelete:(id)arg1;	// IMP=0x00000000001fb1a0
- (void)actionCoordinatorDidBeginDelete:(id)arg1;	// IMP=0x00000000001fb123
- (void)actionCoordinatorWillBeginDelete:(id)arg1;	// IMP=0x00000000001fb111
- (void)actionCoordinator:(id)arg1 didCompleteWithImportSession:(id)arg2 results:(id)arg3;	// IMP=0x00000000001fb0ff
- (void)actionCoordinatorDidCancelImport:(id)arg1;	// IMP=0x00000000001fb0ed
- (void)actionCoordinatorDidBeginImport:(id)arg1;	// IMP=0x00000000001fb070
- (void)actionCoordinatorWillBeginImport:(id)arg1;	// IMP=0x00000000001fb05e
- (void)deleteItems:(id)arg1;	// IMP=0x00000000001fafec
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;	// IMP=0x00000000001fafe4
- (void)importControllerProgressDidChange:(id)arg1;	// IMP=0x00000000001fab9f
- (void)_stopImportAction:(id)arg1;	// IMP=0x00000000001fab62
- (void)_deleteAction:(id)arg1;	// IMP=0x00000000001fa9b2
- (void)_cancelAction:(id)arg1;	// IMP=0x00000000001fa9a0
- (void)_cancelOneUpView;	// IMP=0x00000000001fa942
- (void)_dismissReviewControllerWithAsset:(id)arg1;	// IMP=0x00000000001fa929
- (void)_reallyToggleCurrentPickStatusAtIndexPath:(id)arg1;	// IMP=0x00000000001fa868
- (void)_toggleCurrentPickStatusAtIndexPath:(id)arg1;	// IMP=0x00000000001fa847
- (void)_updateReviewScrubberFromContentOffset;	// IMP=0x00000000001fa7b5
- (double)absoluteProgressFromCurrentContentOffset;	// IMP=0x00000000001fa3a7
- (unsigned short)reviewScrubberImageFormat;	// IMP=0x00000000001fa331
@property(readonly, nonatomic) PUReviewScrubber *reviewScrubber; // @synthesize reviewScrubber=_reviewScrubber;
- (void)updateCollectionViewLayoutInsets;	// IMP=0x00000000001fa179
- (id)badgeViewAtIndexPath:(id)arg1 forCollectionView:(id)arg2;	// IMP=0x00000000001fa010
- (id)_indexPathInCollectionView:(id)arg1 closestToPoint:(struct CGPoint)arg2 excludingIndexPath:(id)arg3;	// IMP=0x00000000001f9d3b
- (double)_horizontalOffsetInCollectionView:(id)arg1 forCenteringOnItemAtIndexPath:(id)arg2;	// IMP=0x00000000001f9c79
- (id)indexPathOfCenterVisibleItemInCollectionView:(id)arg1;	// IMP=0x00000000001f9bc6
- (void)pageToIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001f9b0d
- (void)pageToItemOrNearestIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000001f99a4
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;	// IMP=0x00000000001f954f
- (id)importAssetAtIndexPath:(id)arg1;	// IMP=0x00000000001f94ef
- (id)assetAtIndexPath:(id)arg1;	// IMP=0x00000000001f9405
- (id)_currentAsset;	// IMP=0x00000000001f9379
- (void)_handleTapInMainCollectionView:(id)arg1;	// IMP=0x00000000001f921b
- (void)_handleTapAtIndexPath:(id)arg1;	// IMP=0x00000000001f9131
- (void)loadCenterPrioritizedVisibleThumbnails;	// IMP=0x00000000001f8cf5
- (void)beginCenterPrioritizedThumbnailLoading;	// IMP=0x00000000001f8c86
- (struct CGRect)selectionBadgeFrameForItemFrame:(struct CGRect)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000001f8aa2
- (void)getFirstValidIndexPath:(id *)arg1 lastValidIndexPath:(id *)arg2;	// IMP=0x00000000001f8993
- (void)getMainCollectionViewFrame:(struct CGRect *)arg1 collectionViewLayoutInsets:(struct UIEdgeInsets *)arg2;	// IMP=0x00000000001f87bf
- (void)updateMainViewAnimated:(_Bool)arg1;	// IMP=0x00000000001f8346
- (void)_updateBarItemsAnimated:(_Bool)arg1;	// IMP=0x00000000001f7dad
- (long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg1;	// IMP=0x00000000001f7d56
- (void)updateNavigationItemTitle;	// IMP=0x00000000001f7941
- (void)updateToolbarItems;	// IMP=0x00000000001f721c
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x00000000001f7214
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x00000000001f7209
- (_Bool)shouldAutorotate;	// IMP=0x00000000001f7201
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000001f6f31
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000001f6ef0
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000001f6ec1
- (_Bool)pu_wantsNavigationBarVisible;	// IMP=0x00000000001f6eb9
- (_Bool)pu_wantsTabBarVisible;	// IMP=0x00000000001f6eb1
- (_Bool)pu_wantsToolbarVisible;	// IMP=0x00000000001f6e3f
- (void)viewWillLayoutSubviews;	// IMP=0x00000000001f6c7c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000001f6c3b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001f6c0c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001f6a41
- (void)viewDidLoad;	// IMP=0x00000000001f68ed
- (void)transitionFromDataSource:(id)arg1 toDataSource:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001f6583
- (void)handleNewDataSource:(id)arg1;	// IMP=0x00000000001f6378
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000001f61de
- (void)_cancelAlerts;	// IMP=0x00000000001f5d6d
- (void)dealloc;	// IMP=0x00000000001f5c2f
- (id)initWithImportController:(id)arg1 mediaProvider:(id)arg2 startingAssetReference:(id)arg3 presentationFilter:(unsigned long long)arg4;	// IMP=0x00000000001f58ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
