//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

@class MISSING_TYPE, NSUndoManager;

@interface _TtC8Freeform30CRLiOSFolderGridViewController : UICollectionViewController
{
    MISSING_TYPE *folder;	// 1870095725 = 0x6f77656d
    MISSING_TYPE *delegate;	// 1449489007 = 0x5665726f
    MISSING_TYPE *thumbnailProvider;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_diffableDataSource;	// 0 = 0x0
    MISSING_TYPE *libraryProvider;	// 0 = 0x0
    MISSING_TYPE *pendingBoardIdentifiersToRefresh;	// 0 = 0x0
    MISSING_TYPE *boardPreviewImageCache;	// 12 = 0xc
    MISSING_TYPE *boardSearchHelper;	// 0 = 0x0
    MISSING_TYPE *imageCacheObserver;	// 0 = 0x0
    MISSING_TYPE *storeMetadataObserver;	// 0 = 0x0
    MISSING_TYPE *renameDeleteObserver;	// 0 = 0x0
    MISSING_TYPE *searchString;	// 24 = 0x18
    MISSING_TYPE *searchComplete;	// 65536 = 0x10000
    MISSING_TYPE *isCurrentlyInMultipleSelectionInteraction;	// 0 = 0x0
    MISSING_TYPE *isGridLayout;	// 1937330991 = 0x7379532f
    MISSING_TYPE *_persistedSortOptions;	// 0 = 0x0
    MISSING_TYPE *gridLayout;	// 0 = 0x0
    MISSING_TYPE *listLayout;	// 0 = 0x0
    MISSING_TYPE *iCloudStatusObserver;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_libraryProviderRefreshLimiter;	// 0 = 0x0
    MISSING_TYPE *isPresentingBoardNavigationController;	// 0 = 0x0
    MISSING_TYPE *_currentSnapshotWithExpandedSections;	// 0 = 0x0
    MISSING_TYPE *collapsedSections;	// 1919052108 = 0x7262694c
    MISSING_TYPE *shouldSaveViewState;	// 1835102790 = 0x6d617246
    MISSING_TYPE *$__lazy_storage_$_layoutBarButtonItem;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_toolbarItemToAddBoard;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_toolbarItemToSelectAllOrNone;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_editModeToolbarButtonToDuplicateSelectedItems;	// 0 = 0x0
    MISSING_TYPE *defaultTitleForToolbarItemToSelectAllOrNone;	// 0 = 0x0
    MISSING_TYPE *alternateTitleForToolbarItemToSelectAllOrNone;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_emptyFolderViewController;	// 0 = 0x0
    MISSING_TYPE *emptyFolderBottomConstraint;	// 0 = 0x0
    MISSING_TYPE *keyboardHeight;	// 0 = 0x0
    MISSING_TYPE *showsEmptyFolderView;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0020000000b71f90
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000b7fd20
- (void)collectionView:(id)arg1 willEndContextMenuInteractionWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0010000000b7f1c0
- (void)collectionView:(id)arg1 willDisplayContextMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0010000000b7f1a0
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0010000000b7f110
- (id)collectionView:(id)arg1 contextMenuConfigurationForSelectedItemsAt:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x0010000000b7e900
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemAtIndexPath:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x0010000000b7df10
- (void)collectionViewDidEndMultipleSelectionInteraction:(id)arg1;	// IMP=0x0010000000b7d5d0
- (void)collectionView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;	// IMP=0x0010000000b7d4e0
- (_Bool)collectionView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;	// IMP=0x0010000000b7d430
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000b7ccc0
- (void);	// IMP=0x0010000000b7c920
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000b7c140
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000b7be30
- (void)restoreUserActivityState:(id)arg1;	// IMP=0x0010000000b77200
- (void)redo:(id)arg1;	// IMP=0x0010000000b76740
- (void)undo:(id)arg1;	// IMP=0x0010000000b76720
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)validateCommand:(id)arg1;	// IMP=0x0010000000b764e0
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x0010000000b76450
- (void)handleBoardLibrarySnapshotUpdateWithNotification:(id)arg1;	// IMP=0x0010000000b74b00
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000b73ca0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000b739f0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000b73430
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000b733f0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000b73100
- (void)viewDidLoad;	// IMP=0x0010000000b72a40
- (void)dealloc;	// IMP=0x0010000000b71f70
- (id)initWithCollectionViewLayout:(id)arg1;	// IMP=0x0010000000b71d40
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000b718e0
@property(nonatomic, readonly) NSUndoManager *undoManager;
- (_Bool)accessibilityPerformEscape;	// IMP=0x0010000000d22370

@end

