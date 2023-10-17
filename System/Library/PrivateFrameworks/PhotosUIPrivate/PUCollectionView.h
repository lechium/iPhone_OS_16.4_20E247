//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionView.h>

@class NSIndexPath, NSString, PXUIAutoScroller, UILongPressGestureRecognizer, UIView, _UIDragSnappingFeedbackGenerator;
@protocol PUCollectionViewReorderDelegate, PUCollectionViewSelectionDelegate;

__attribute__((visibility("hidden")))
@interface PUCollectionView : UICollectionView
{
    UILongPressGestureRecognizer *_dragGestureRecognizer;	// 8 = 0x8
    NSIndexPath *_dragSourceIndexPath;	// 16 = 0x10
    NSIndexPath *_dragTargetIndexPath;	// 24 = 0x18
    UIView *_draggedView;	// 32 = 0x20
    struct CGPoint _draggedViewCenterOffset;	// 40 = 0x28
    PXUIAutoScroller *_autoScroller;	// 56 = 0x38
    _Bool _shouldWorkaround34630932;	// 64 = 0x40
    id <PUCollectionViewReorderDelegate> _reorderDelegate;	// 72 = 0x48
    id <PUCollectionViewSelectionDelegate> _selectionDelegate;	// 80 = 0x50
    _UIDragSnappingFeedbackGenerator *__feedbackDragBehavior;	// 88 = 0x58
}

+ (id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2;	// IMP=0x001000000011b8fc
- (void).cxx_destruct;	// IMP=0x000000000011b42a
@property(readonly, nonatomic) _UIDragSnappingFeedbackGenerator *_feedbackDragBehavior; // @synthesize _feedbackDragBehavior=__feedbackDragBehavior;
@property(nonatomic) __weak id <PUCollectionViewSelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
@property(nonatomic) __weak id <PUCollectionViewReorderDelegate> reorderDelegate; // @synthesize reorderDelegate=_reorderDelegate;
- (void)visiblyInsertItemAtIndexPath:(id)arg1 modelUpdate:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000011b277
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x000000000011b0cd
- (void)_updateDragUsingIndexPathUpdateBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011ae46
- (id)_reorderableLayout;	// IMP=0x000000000011adf4
- (void)_handleDrag:(id)arg1;	// IMP=0x000000000011a65f
- (void)_applyAutomaticAdjustedContentOffset:(struct CGPoint)arg1;	// IMP=0x000000000011a623
- (void)didScrollToInitialPosition;	// IMP=0x000000000011a5b9
- (id)indexPathsForSelectedItems;	// IMP=0x000000000011a51e
- (void)reloadData;	// IMP=0x000000000011a4d5
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;	// IMP=0x000000000011a3f7
- (void)deleteItemsAtIndexPaths:(id)arg1;	// IMP=0x000000000011a341
- (void)insertItemsAtIndexPaths:(id)arg1;	// IMP=0x000000000011a28b
- (void)adjustedContentInsetDidChange;	// IMP=0x000000000011a210
- (void)dealloc;	// IMP=0x000000000011a1a8
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x0000000000119f42

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
