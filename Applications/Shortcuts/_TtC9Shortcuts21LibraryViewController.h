//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSArray, UICollectionView;

@interface _TtC9Shortcuts21LibraryViewController : UIViewController
{
    MISSING_TYPE *database;	// 8 = 0x8
    MISSING_TYPE *delegate;	// 16 = 0x10
    MISSING_TYPE *groups;	// 32 = 0x20
    MISSING_TYPE *shortcutMoveService;	// 40 = 0x28
    MISSING_TYPE *configuration;	// 0 = 0x0
    MISSING_TYPE *hasLoadedInitialData;	// 675840 = 0xa5000
    MISSING_TYPE *$__lazy_storage_$_dataSource;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_layoutMetrics;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_editingItems;	// 0 = 0x0
    MISSING_TYPE *flowLayout;	// 5 = 0x5
    MISSING_TYPE *$__lazy_storage_$_collectionView;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_tableView;	// 0 = 0x0
    MISSING_TYPE *searchController;	// 22 = 0x16
    MISSING_TYPE *$__lazy_storage_$_toolbarViewController;	// 0 = 0x0
    MISSING_TYPE *customPlusButton;	// 1702125407 = 0x65745f5f
    MISSING_TYPE *$__lazy_storage_$_createButtonItem;	// 0 = 0x0
    MISSING_TYPE *customEditButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$__editButtonItem;	// 0 = 0x0
    MISSING_TYPE *customLayoutButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_layoutButtonItem;	// 0 = 0x0
    MISSING_TYPE *overflowMenuButtonExists;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_overflowMenuButtonItem;	// 0 = 0x0
    MISSING_TYPE *accessibilityIdentifier;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *cancellables;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000000506c0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000056700
- (void)axDuplicateWorkflowAction:(id)arg1;	// IMP=0x0010000000056630
- (void)axDeleteWorkflowAction:(id)arg1;	// IMP=0x00100000000565e0
- (id)axCreateButton;	// IMP=0x0010000000056220
- (void)collectionView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;	// IMP=0x0010000000055d20
- (_Bool)collectionView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;	// IMP=0x0010000000055c60
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000055c50
- (void)collectionView:(id)arg1 performPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000055ba0
- (_Bool)collectionView:(id)arg1 canPerformPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x00100000000554f0
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0010000000055440
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000055380
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000055360
- (void)runSelectedShortcutFromKeyboard;	// IMP=0x0010000000055330
- (void)handleEscapeKeyboardPress;	// IMP=0x00100000000550a0
- (void)openSelectedWorkflowFromKeyboard;	// IMP=0x0010000000055070
- (void)deleteSelectedWorkflowsFromKeyboard;	// IMP=0x0010000000054de0
- (void)duplicateSelectedWorkflowsFromKeyboard;	// IMP=0x0010000000054d60
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) NSArray *keyCommands;
- (void)presentAutoShortcutAppSettings;	// IMP=0x0010000000053cb0
- (void)createWorkflow:(id)arg1;	// IMP=0x0010000000053940
- (void)keyboardWillChange:(id)arg1;	// IMP=0x00100000000538f0
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000051ed0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000051c70
- (void)viewLayoutMarginsDidChange;	// IMP=0x0010000000051c40
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000051b20
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000051a80
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00100000000519e0
- (void)viewDidLoad;	// IMP=0x00100000000519b0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000050ab0
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000050a90
- (void)dealloc;	// IMP=0x0010000000050630
@property(nonatomic, retain) UICollectionView *collectionView;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0010000000005d00
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0010000000005c30
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;	// IMP=0x0010000000005b80
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0010000000005b60
- (void)deselectAllCells;	// IMP=0x001000000002a230
- (void)selectAllCells;	// IMP=0x0010000000029fd0
- (void)duplicateSelected;	// IMP=0x0010000000029bb0
- (void)deleteSelected:(id)arg1;	// IMP=0x0010000000029780
- (void)removeSelected:(id)arg1;	// IMP=0x0010000000028ef0
- (void)moveSelected;	// IMP=0x0010000000028c10
- (void)finishEditing;	// IMP=0x0010000000028360
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000028320
- (void)startEditing;	// IMP=0x0010000000027fc0
- (void)collectionView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0010000000040910
- (id)collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 dismissalPreviewForItemAtIndexPath:(id)arg3;	// IMP=0x0010000000040750
- (id)collectionView:(id)arg1 contextMenuConfiguration:(id)arg2 highlightPreviewForItemAtIndexPath:(id)arg3;	// IMP=0x0010000000040730
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x00100000000406b0
- (id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;	// IMP=0x001000000004b140
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;	// IMP=0x001000000004b130
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;	// IMP=0x001000000004b030
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x001000000004af40
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x001000000004d160
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x001000000004d0f0
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;	// IMP=0x001000000004bba0
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;	// IMP=0x001000000004b250
- (void)libraryCellDidRequestComposeUI:(id)arg1;	// IMP=0x0010000000076220
- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;	// IMP=0x001000000007b6d0

@end

