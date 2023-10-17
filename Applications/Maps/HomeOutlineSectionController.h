//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DragAndDropPreview, HomeOutlineSectionControllerConfiguration, IdentifierPath, MapsUIDiffableDataSourceIdentifierCache, MapsUIDiffableDataSourceOutlineNodeSnapshot, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, UIDragItem;
@protocol HomeOutlineSectionControllerDelegate, MapsUIDiffableDataSourceViewModel;

@interface HomeOutlineSectionController : NSObject
{
    MapsUIDiffableDataSourceOutlineNodeSnapshot *_sectionSnapshot;	// 8 = 0x8
    NSMutableDictionary *_deletions;	// 16 = 0x10
    MapsUIDiffableDataSourceIdentifierCache *_identifierCache;	// 24 = 0x18
    NSMutableSet *_expandedIdentifierPaths;	// 32 = 0x20
    UIDragItem *_dragItem;	// 40 = 0x28
    DragAndDropPreview *_dragAndDropPreview;	// 48 = 0x30
    _Bool _active;	// 56 = 0x38
    HomeOutlineSectionControllerConfiguration *_configuration;	// 64 = 0x40
    IdentifierPath *_sectionIdentifierPath;	// 72 = 0x48
    IdentifierPath *_focusedIdentifierPath;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000231c57
@property(readonly, nonatomic) IdentifierPath *focusedIdentifierPath; // @synthesize focusedIdentifierPath=_focusedIdentifierPath;
@property(readonly, nonatomic) IdentifierPath *sectionIdentifierPath; // @synthesize sectionIdentifierPath=_sectionIdentifierPath;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) HomeOutlineSectionControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) NSSet *expandedIdentifierPaths; // @synthesize expandedIdentifierPaths=_expandedIdentifierPaths;
@property(readonly, nonatomic) NSDictionary *deletions; // @synthesize deletions=_deletions;
@property(readonly, nonatomic) _Bool persistsExpansions;
- (id)contextMenuForSnapshot:(id)arg1;	// IMP=0x0010000000231c0c
@property(readonly, nonatomic) NSArray *itemSnapshots;
@property(readonly, nonatomic) id <MapsUIDiffableDataSourceViewModel> sectionHeaderViewModel;
@property(readonly, nonatomic) NSArray *dataProviders;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;	// IMP=0x0010000000231bbc
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;	// IMP=0x0010000000231b70
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0010000000231888
- (id)collectionView:(id)arg1 contextMenuConfigurationForItemsAtIndexPaths:(id)arg2 point:(struct CGPoint)arg3;	// IMP=0x001000000023165d
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x001000000023151e
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;	// IMP=0x001000000023150c
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000231506
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000231299
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000231189
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0010000000231177
- (void)dragAndDropPreviewDidUpdate:(id)arg1;	// IMP=0x0010000000231165
- (void)dragAndDropItem:(id)arg1 didResolveMapItem:(id)arg2;	// IMP=0x0010000000231153
- (id)mapItemForDropSession:(id)arg1;	// IMP=0x0010000000231029
- (_Bool)isDestinationOfDropCoordinator:(id)arg1;	// IMP=0x0010000000230f3b
- (_Bool)isSourceOfDropCoordinator:(id)arg1;	// IMP=0x0010000000230cae
- (void)_updateDragAndDropPreview;	// IMP=0x0010000000230bd7
- (_Bool)shouldClearSelectionWithReason:(id)arg1;	// IMP=0x0010000000230bba
- (void)clearSelectionWithReason:(id)arg1;	// IMP=0x0010000000230ab1
- (id)_snapshotByFilteringDeletionsFromSnapshot:(id)arg1;	// IMP=0x00100000002307f9
- (void)_scrubDeletionsWithSectionSnapshot:(id)arg1;	// IMP=0x0010000000230510
- (id)_sectionSnapshotByProcessingDeletionsInSectionSnapshot:(id)arg1;	// IMP=0x001000000023049c
- (id)deletionWithSnapshot:(id)arg1;	// IMP=0x001000000023039d
- (void)_removeDeletions:(id)arg1 applySnapshot:(_Bool)arg2;	// IMP=0x001000000023004a
- (void)endFailedDeletions:(id)arg1 error:(id)arg2;	// IMP=0x001000000022fede
- (void)beginDeletions:(id)arg1;	// IMP=0x001000000022fbde
- (void)homeDataProvidingObjectDidUpdate:(id)arg1;	// IMP=0x001000000022fb44
- (id)shareItemSourceForSnapshot:(id)arg1;	// IMP=0x001000000022fb3c
- (id)contentInjectorForSnapshot:(id)arg1;	// IMP=0x001000000022fb34
@property(readonly, nonatomic) MapsUIDiffableDataSourceIdentifierCache *identifierCache;
@property(readonly, nonatomic) NSSet *selectedIdentifierPaths;
- (_Bool)shouldPersistExpandedIdentifierPath:(id)arg1;	// IMP=0x001000000022f8dd
- (void)toggleElementAtIdentifierPath:(id)arg1;	// IMP=0x001000000022f86b
- (void)collapseElementAtIdentifierPath:(id)arg1;	// IMP=0x001000000022f78b
- (void)expandElementAtIdentifierPath:(id)arg1;	// IMP=0x001000000022f6ab
@property(readonly, nonatomic) _Bool expanded;
- (void)_storeExpandedIdentifierPaths;	// IMP=0x001000000022f51c
- (void)_loadExpandedIdentifierPaths;	// IMP=0x001000000022f3cb
- (void)didApplyInitialSectionSnapshot;	// IMP=0x001000000022efe8
- (void)invalidateSectionSnapshot;	// IMP=0x001000000022efce
@property(readonly, nonatomic) MapsUIDiffableDataSourceOutlineNodeSnapshot *sectionSnapshot;
@property(readonly, nonatomic) __weak id <HomeOutlineSectionControllerDelegate> delegate;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x001000000022ed35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
