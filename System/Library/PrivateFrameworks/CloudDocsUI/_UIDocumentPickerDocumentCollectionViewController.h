//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewController.h>

@class NSArray, NSString, UIActivityIndicatorView, UIScrollView, UIView, _UIDocumentPickerContainerModel, _UIDocumentPickerFlowLayout, _UIDocumentPickerSortOrderView, _UIDocumentPickerTableLayout;
@protocol UIViewControllerPreviewing, _UIDocumentPickerServiceViewController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerDocumentCollectionViewController : UICollectionViewController
{
    _Bool _editing;	// 8 = 0x8
    id <UIViewControllerPreviewing> _viewControllerPreviewContext;	// 16 = 0x10
    _Bool _monitoring;	// 24 = 0x18
    _Bool _shouldHideSortBar;	// 25 = 0x19
    _Bool _updatesMayAnimate;	// 26 = 0x1a
    long long _displayMode;	// 32 = 0x20
    id <_UIDocumentPickerServiceViewController> _serviceViewController;	// 40 = 0x28
    _UIDocumentPickerContainerModel *_model;	// 48 = 0x30
    NSArray *_actions;	// 56 = 0x38
    _UIDocumentPickerFlowLayout *_gridLayout;	// 64 = 0x40
    _UIDocumentPickerTableLayout *_tableLayout;	// 72 = 0x48
    _UIDocumentPickerSortOrderView *_sortView;	// 80 = 0x50
    UIView *_pinnedHeaderView;	// 88 = 0x58
    NSArray *_modelObjects;	// 96 = 0x60
    UIActivityIndicatorView *_initialActivityView;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000030ded
@property(retain, nonatomic) UIActivityIndicatorView *initialActivityView; // @synthesize initialActivityView=_initialActivityView;
@property(nonatomic) _Bool updatesMayAnimate; // @synthesize updatesMayAnimate=_updatesMayAnimate;
@property(copy, nonatomic) NSArray *modelObjects; // @synthesize modelObjects=_modelObjects;
@property(retain, nonatomic) UIView *pinnedHeaderView; // @synthesize pinnedHeaderView=_pinnedHeaderView;
@property(retain, nonatomic) _UIDocumentPickerSortOrderView *sortView; // @synthesize sortView=_sortView;
@property(nonatomic) _Bool shouldHideSortBar; // @synthesize shouldHideSortBar=_shouldHideSortBar;
@property(nonatomic) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(retain, nonatomic) _UIDocumentPickerTableLayout *tableLayout; // @synthesize tableLayout=_tableLayout;
@property(retain, nonatomic) _UIDocumentPickerFlowLayout *gridLayout; // @synthesize gridLayout=_gridLayout;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) _UIDocumentPickerContainerModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <_UIDocumentPickerServiceViewController> serviceViewController; // @synthesize serviceViewController=_serviceViewController;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;	// IMP=0x0000000000030aeb
- (id)previewActionItemsForItem:(id)arg1;	// IMP=0x0000000000030670
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;	// IMP=0x0000000000030536
- (void)scrollSortViewToVisible;	// IMP=0x0000000000030476
- (void)ensureSortViewInvisible;	// IMP=0x0000000000030357
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000302eb
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000301d3
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000301a4
- (void)updatePinnedHeader;	// IMP=0x0000000000030105
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000002fd7b
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000002fd69
- (void)setPinnedHeaderView:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002fb5b
- (void)didDismissSearchController:(id)arg1;	// IMP=0x000000000002fb49
- (void)willDismissSearchController:(id)arg1;	// IMP=0x000000000002fb1b
- (void)willPresentSearchController:(id)arg1;	// IMP=0x000000000002faba
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002f9e1
- (void)updateContentInset;	// IMP=0x000000000002f85e
@property(retain, nonatomic) NSArray *indexPathsForSelectedItems;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000002f239
- (long long)collectionView:(id)arg1 tableLayout:(id)arg2 indentationLevelForRowAtIndexPath:(id)arg3;	// IMP=0x000000000002f155
- (id)collectionView:(id)arg1 tableLayout:(id)arg2 trailingSwipeActionsForRowAtIndexPath:(id)arg3;	// IMP=0x000000000002e9b0
- (void)_showMoreOptionsForRow:(id)arg1 view:(id)arg2;	// IMP=0x000000000002e21d
- (void)performAction:(long long)arg1 forRow:(id)arg2 view:(id)arg3;	// IMP=0x000000000002e092
- (void)collectionView:(id)arg1 tableLayout:(id)arg2 accessoryButtonTappedForRowWithIndexPath:(id)arg3;	// IMP=0x000000000002dff4
@property(readonly, nonatomic) _Bool supportsActions;
- (long long)collectionView:(id)arg1 tableLayout:(id)arg2 editingStyleForRowAtIndexPath:(id)arg3;	// IMP=0x000000000002df10
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000002defb
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x000000000002de44
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000002dc8d
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000002dadd
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000002d9bc
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000002d89b
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x000000000002d788
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000002d6b4
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000002d0c4
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000002d080
- (void)setContentSizeAdjustment:(double)arg1;	// IMP=0x000000000002cff0
@property(readonly, nonatomic) UIScrollView *scrollView;
- (void)viewWillLayoutSubviews;	// IMP=0x000000000002ce5b
- (void)modelChanged:(id)arg1;	// IMP=0x000000000002cc57
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x000000000002caad
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;	// IMP=0x000000000002c13e
- (void)dealloc;	// IMP=0x000000000002c0fe
- (void)_dynamicTypeSizeChanged:(id)arg1;	// IMP=0x000000000002c068
- (void)_updateRowHeight;	// IMP=0x000000000002bf6c
- (_Bool)_smallCells;	// IMP=0x000000000002bf52
- (void)_updateIconSpacing;	// IMP=0x000000000002bc05
- (void)_unlockAnimations;	// IMP=0x000000000002bbee
- (id)actionViewForLocation:(struct CGPoint)arg1;	// IMP=0x000000000002bb2d
- (id)itemForLocation:(struct CGPoint)arg1;	// IMP=0x000000000002ba4c
- (id)initWithModel:(id)arg1;	// IMP=0x000000000002b379

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

