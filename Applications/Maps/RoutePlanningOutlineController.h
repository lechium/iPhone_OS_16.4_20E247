//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSString, UICollectionView, UICollectionViewLayout, UIView;

@interface RoutePlanningOutlineController
{
    NSArray *_outlineSections;	// 8 = 0x8
    NSArray *_visibleOutlineSections;	// 16 = 0x10
    unsigned long long _batchUpdateCounter;	// 24 = 0x18
    NSMutableDictionary *_sectionsByIdentifier;	// 32 = 0x20
    long long _numberOfSections;	// 40 = 0x28
    NSMutableDictionary *_sectionCountByIdentifier;	// 48 = 0x30
    NSMutableDictionary *_sectionStartIndexByIdentifier;	// 56 = 0x38
    NSMutableDictionary *_sectionIdentifiersByStartIndex;	// 64 = 0x40
    _Bool _hideContent;	// 72 = 0x48
    UICollectionView *_collectionView;	// 80 = 0x50
    CDUnknownBlockType _postReloadHandler;	// 88 = 0x58
    UIView *_headerView;	// 96 = 0x60
}

+ (id)defaultCollectionViewLayout;	// IMP=0x0020000000797da0
- (void).cxx_destruct;	// IMP=0x0020000000799e8b
@property(nonatomic) _Bool hideContent; // @synthesize hideContent=_hideContent;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(copy, nonatomic) CDUnknownBlockType postReloadHandler; // @synthesize postReloadHandler=_postReloadHandler;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)outlineSectionRequiresReload:(id)arg1;	// IMP=0x0010000000799e18
- (long long)sectionIndexForOutlineSection:(id)arg1;	// IMP=0x0010000000799d85
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0010000000799c0e
- (_Bool)collectionView:(id)arg1 selectionFollowsFocusForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000799b90
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0010000000799af5
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000799a7c
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000007999fe
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;	// IMP=0x0010000000799985
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x001000000079990c
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x001000000079988e
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0010000000799823
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0010000000799812
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x001000000079965e
- (long long)_localSectionForGlobalSectionIndex:(long long)arg1 forSection:(id)arg2;	// IMP=0x00100000007995d0
- (long long)indexOfFirstPopulatedSection;	// IMP=0x001000000079952c
- (id)outlineSectionAtIndex:(long long)arg1;	// IMP=0x001000000079926f
- (void)performBatchSectionUpdates:(CDUnknownBlockType)arg1;	// IMP=0x0010000000799059
- (void)didUpdateVisibleOutlineSections;	// IMP=0x0010000000799053
- (void)_recalculateSectionCounts;	// IMP=0x0010000000798d23
- (void)_updateVisibleOutlineSections;	// IMP=0x0010000000798b70
- (void)prepareOutlineSections;	// IMP=0x00100000007989ff
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000007989b2
- (id)_findVisualEffectView;	// IMP=0x0010000000798919
- (id)_blurredBackgroundView;	// IMP=0x0010000000798891
- (_Bool)_shouldUseBlurredBackground;	// IMP=0x0010000000798874
- (void)_removeHeaderLayoutItem;	// IMP=0x00100000007986d8
- (void)_reloadHeaderLayoutItem;	// IMP=0x0010000000798394
@property(readonly, nonatomic) UICollectionViewLayout *collectionViewLayout;
- (void)dealloc;	// IMP=0x0010000000797d41
- (id)initWithCollectionView:(id)arg1;	// IMP=0x0010000000797c52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
