//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSMapTable, NSString, UICollectionView, UICollectionViewDiffableDataSource, UIScrollView, UITapGestureRecognizer, UIView, UIVisualEffectView, WBSStartPageSection;
@protocol SFStartPageCollectionDataSource, SFStartPageCollectionDelegate><WBSStartPagePreviewProviding, SFStartPageVisualStyleProviding;

__attribute__((visibility("hidden")))
@interface SFStartPageCollectionViewController : UIViewController
{
    WBSStartPageSection *_cachedCustomizationSection;	// 8 = 0x8
    UICollectionViewDiffableDataSource *_collectionDataSource;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
    _Bool _hasActiveDrag;	// 32 = 0x20
    _Bool _hasAppliedInitialSnapshot;	// 33 = 0x21
    _Bool _hasDeferredUpdates;	// 34 = 0x22
    _Bool _hasMadeFirstCommit;	// 35 = 0x23
    double _keyboardBottomInset;	// 40 = 0x28
    long long _lastLayoutOrientation;	// 48 = 0x30
    double _lastLayoutWidth;	// 56 = 0x38
    UIVisualEffectView *_navigationBarBackdrop;	// 64 = 0x40
    UIView *_navigationBarSeparator;	// 72 = 0x48
    UIVisualEffectView *_statusBarBackdrop;	// 80 = 0x50
    UITapGestureRecognizer *_tapToDismissGestureRecognizer;	// 88 = 0x58
    id <SFStartPageVisualStyleProviding> _visualStyleProvider;	// 96 = 0x60
    NSMapTable *_contextMenuToItemIdentifierMap;	// 104 = 0x68
    _Bool _displaysSectionHeaders;	// 112 = 0x70
    _Bool _hidesEmptyNavigationBar;	// 113 = 0x71
    _Bool _wantsWallpaperHiddenForCurrentBackgroundStyle;	// 114 = 0x72
    id <SFStartPageCollectionDataSource> _dataSource;	// 120 = 0x78
    id <SFStartPageCollectionDataSource> _strongDataSource;	// 128 = 0x80
    id <SFStartPageCollectionDelegate><WBSStartPagePreviewProviding> _delegate;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000be13b
@property(readonly, nonatomic) _Bool wantsWallpaperHiddenForCurrentBackgroundStyle; // @synthesize wantsWallpaperHiddenForCurrentBackgroundStyle=_wantsWallpaperHiddenForCurrentBackgroundStyle;
@property(nonatomic) _Bool hidesEmptyNavigationBar; // @synthesize hidesEmptyNavigationBar=_hidesEmptyNavigationBar;
@property(nonatomic) _Bool displaysSectionHeaders; // @synthesize displaysSectionHeaders=_displaysSectionHeaders;
@property(nonatomic) __weak id <SFStartPageCollectionDelegate><WBSStartPagePreviewProviding> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <SFStartPageCollectionDataSource> strongDataSource; // @synthesize strongDataSource=_strongDataSource;
@property(nonatomic) __weak id <SFStartPageCollectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x00000000000bdfda
- (long long)_collectionView:(id)arg1 dataOwnerForDropSession:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000000bdfcf
- (void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;	// IMP=0x00000000000bdf5a
- (void)collectionView:(id)arg1 dropSessionDidExit:(id)arg2;	// IMP=0x00000000000bdee5
- (void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;	// IMP=0x00000000000bded3
- (id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000bdec1
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x00000000000bddb9
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x00000000000bda33
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x00000000000bda21
- (long long)_collectionView:(id)arg1 dataOwnerForDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000bda16
- (void)_updateInteractionEnabledForView:(id)arg1;	// IMP=0x00000000000bd968
- (void)_updateInteractionEnabled;	// IMP=0x00000000000bd6db
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x00000000000bd65b
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;	// IMP=0x00000000000bd5cb
- (_Bool)_canDrop;	// IMP=0x00000000000bd54a
- (_Bool)collectionView:(id)arg1 dragSessionAllowsMoveOperation:(id)arg2;	// IMP=0x00000000000bd538
- (id)_dragPreviewParametersForSourceView:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000bd381
- (id)_previewForCellAtIndexPath:(id)arg1;	// IMP=0x00000000000bd30a
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;	// IMP=0x00000000000bd284
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x00000000000bd272
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000bcf5c
- (id)_makeCollectionViewLayout;	// IMP=0x00000000000bcde8
- (id)_layoutForSectionAtIndex:(long long)arg1 inEnvironment:(id)arg2;	// IMP=0x00000000000bcc02
- (id)_siteRowSectionLayoutForEnvironment:(id)arg1;	// IMP=0x00000000000bc7d8
- (id)_richLinkSectionLayoutForEnvironment:(id)arg1;	// IMP=0x00000000000bc3ae
- (id)_siteCardSectionLayoutForEnvironment:(id)arg1;	// IMP=0x00000000000bbf84
- (id)_siteIconSectionLayoutForEnvironment:(id)arg1;	// IMP=0x00000000000bbc32
- (CDStruct_4eba780f)_siteIconLayoutForEnvironment:(id)arg1 sectionInsets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x00000000000bbab8
- (id)_bannerSectionLayoutForEnvironment:(id)arg1 includingHeader:(_Bool)arg2;	// IMP=0x00000000000bb60c
- (double)_effectiveLayoutWidth;	// IMP=0x00000000000bb58d
- (struct NSDirectionalEdgeInsets)_sectionContentInsets;	// IMP=0x00000000000bb440
- (id)_toggleExpandedActionForSectionIdentifier:(id)arg1;	// IMP=0x00000000000bb160
- (unsigned long long)_collapsedCapacityForSection:(id)arg1;	// IMP=0x00000000000bb027
- (unsigned long long)_itemLimitForSection:(id)arg1;	// IMP=0x00000000000baf86
- (id)_customizationSection;	// IMP=0x00000000000badd7
- (void)cancelGestures;	// IMP=0x00000000000badad
- (id)_currentSnapshot;	// IMP=0x00000000000baae9
- (void)_applyCurrentSnapshotAnimatingDifferences:(_Bool)arg1;	// IMP=0x00000000000ba3b7
- (void)_configureHeader:(id)arg1 forSection:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00000000000ba1ca
- (id)_collectionView:(id)arg1 supplementaryViewWithKind:(id)arg2 forIndexPath:(id)arg3;	// IMP=0x00000000000ba070
- (void)_configureCell:(id)arg1 forIdentifier:(id)arg2 indexPath:(id)arg3;	// IMP=0x00000000000b9ba8
- (id)_reuseIdentifierForCellWithIdentifier:(id)arg1 indexPath:(id)arg2;	// IMP=0x00000000000b9a20
- (void)_setUpDataSource:(id)arg1;	// IMP=0x00000000000b957f
- (id)_sectionForIdentifier:(id)arg1;	// IMP=0x00000000000b9458
- (id)sections;	// IMP=0x00000000000b93fd
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000b93a5
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x00000000000b9393
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x00000000000b91b2
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x00000000000b90ba
- (id)collectionView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000000b8f52
- (id)collectionView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;	// IMP=0x00000000000b8df0
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x00000000000b8b9f
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00000000000b89eb
- (_Bool)_shouldShowContextMenuForCellAtIndexPath:(id)arg1 fromPoint:(struct CGPoint)arg2;	// IMP=0x00000000000b894d
- (void)_updateCustomTopBackdrops;	// IMP=0x00000000000b8561
- (void)reloadNavigationItemAnimated:(_Bool)arg1;	// IMP=0x00000000000b8477
- (void)reloadSection:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000b7fb8
- (void)reloadDataAnimatingDifferences:(_Bool)arg1;	// IMP=0x00000000000b7f00
- (void)updateCollectionViewContentInset;	// IMP=0x00000000000b7cea
- (void)updateKeyboardBottomInsetFromKeyboardFrame:(struct CGRect)arg1;	// IMP=0x00000000000b7bb6
- (void)keyboardDidChangeFrame:(id)arg1;	// IMP=0x00000000000b7b0d
- (void)_receivedTapToDismissGesture;	// IMP=0x00000000000b7ad1
- (void)updateBackgroundStyle;	// IMP=0x00000000000b78c7
@property(readonly, nonatomic, getter=isTrackingDropSession) _Bool trackingDropSession;
- (void)_updateNavigationItemAnimated:(_Bool)arg1;	// IMP=0x00000000000b774e
- (void)navigationBarPositionDidChange;	// IMP=0x00000000000b773c
- (void)scrollToTop;	// IMP=0x00000000000b74b7
- (void)presentViewController:(id)arg1 fromItemWithIdentifier:(id)arg2;	// IMP=0x00000000000b71fd
- (void)configureModelWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b70d7
- (double)scrollDistance;	// IMP=0x00000000000b6fe1
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000b6d2b
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000b6cea
- (void)viewLayoutMarginsDidChange;	// IMP=0x00000000000b6c78
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000b6b30
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000000000b69a1
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000b6956
- (void)viewIsAppearing:(_Bool)arg1;	// IMP=0x00000000000b68d0
- (void)viewDidLoad;	// IMP=0x00000000000b5f37
- (id)initWithVisualStyleProvider:(id)arg1;	// IMP=0x00000000000b5e9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

