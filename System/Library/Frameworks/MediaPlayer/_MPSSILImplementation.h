//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSectionedIdentifierList.h"

@class MPRandomDistribution, NSMutableArray;
@protocol _MPSSILDelegate;

__attribute__((visibility("hidden")))
@interface _MPSSILImplementation : MPSectionedIdentifierList
{
    MPRandomDistribution *_randomDistribution;	// 16 = 0x10
    NSMutableArray *_candidateItems;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000005c5d8
- (void).cxx_destruct;	// IMP=0x000000000005af36
@property(retain, nonatomic) NSMutableArray *candidateItems; // @synthesize candidateItems=_candidateItems;
@property(readonly, nonatomic) MPRandomDistribution *randomDistribution; // @synthesize randomDistribution=_randomDistribution;
- (void)_dequeueCandidatesWithQuota:(long long)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x000000000005aa81
- (id)_createShuffleCloneForItem:(id)arg1 inSection:(id)arg2 withExclusiveAccessToken:(id)arg3;	// IMP=0x000000000005a93c
- (void)_appendShuffledItems:(id)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x000000000005a7f9
- (void)_addShuffleSection:(id)arg1 dataSource:(id)arg2 withExclusiveAccessToken:(id)arg3;	// IMP=0x000000000005a6f4
- (void)_reverseEnumeratorWillStartAtEnd:(id)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x000000000005a687
- (_Bool)_isSequentialSection:(id)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x000000000005a566
- (void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3;	// IMP=0x000000000005a49d
- (long long)itemCount;	// IMP=0x000000000005a3fa
- (void)dataSourceReloadItems:(id)arg1 inSection:(id)arg2;	// IMP=0x000000000005a33b
- (void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2;	// IMP=0x000000000005a25c
- (void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2;	// IMP=0x000000000005a0f8
- (void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;	// IMP=0x0000000000059f72
- (void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2;	// IMP=0x0000000000059e0e
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3;	// IMP=0x0000000000059d4b
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3 beforeTailOfSection:(id)arg4;	// IMP=0x0000000000059c58
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3 afterTailOfSection:(id)arg4;	// IMP=0x0000000000059b65
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3 afterItem:(id)arg4 inSection:(id)arg5;	// IMP=0x0000000000059a36
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2 sequentially:(_Bool)arg3;	// IMP=0x0000000000059973
- (void)safelyReshuffleAfterItem:(id)arg1 inSection:(id)arg2;	// IMP=0x00000000000598b4
- (void)dequeueCandidatesWithQuota:(long long)arg1;	// IMP=0x0000000000059861
- (void)encodeWithCoder:(id)arg1 withExclusiveAccessToken:(id)arg2;	// IMP=0x0000000000059684
- (void)_beforeInitWithCoder:(id)arg1;	// IMP=0x00000000000593e0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000059034
- (id)initWithSectionedIdentifierList:(id)arg1 randomSource:(id)arg2 startingItemEntry:(id)arg3 withExclusiveAccessToken:(id)arg4;	// IMP=0x00000000000589c5

// Remaining properties
@property(nonatomic) __weak id <_MPSSILDelegate> delegate; // @dynamic delegate;

@end
