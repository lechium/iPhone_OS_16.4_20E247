//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLEngineOutgoingResources, CPLPrequelitePushRepository, CPLPrequeliteTable, NSString;

@interface CPLPrequelitePushRepositoryBatchStorage : NSObject
{
    CPLEngineOutgoingResources *_outgoingResources;	// 8 = 0x8
    CPLPrequeliteTable *_enumerationTable;	// 16 = 0x10
    CPLPrequeliteTable *_pushRepositoryTable;	// 24 = 0x18
    unsigned long long _checkOutCount;	// 32 = 0x20
    _Bool _viewIsCreated;	// 40 = 0x28
    CPLPrequelitePushRepository *_pushRepository;	// 48 = 0x30
    unsigned long long _priority;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000074560
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) CPLPrequeliteTable *enumerationTable; // @synthesize enumerationTable=_enumerationTable;
@property(readonly, nonatomic) __weak CPLPrequelitePushRepository *pushRepository; // @synthesize pushRepository=_pushRepository;
- (void)cleanupAfterExtractingBatch;	// IMP=0x0010000000074530
- (void)beginExtractingBatch;	// IMP=0x001000000007452a
- (unsigned long long)effectiveResourceSizeToUploadForUploadIdentifier:(id)arg1;	// IMP=0x0010000000074514
- (_Bool)hasChangesInScopeWithIdentifier:(id)arg1;	// IMP=0x00100000000744b4
- (_Bool)removeChange:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000074423
- (id)allChangesWithScopeIdentifier:(id)arg1;	// IMP=0x00100000000743b5
- (id)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(id)arg2;	// IMP=0x0010000000074341
- (id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;	// IMP=0x00100000000742cd
- (id)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;	// IMP=0x0010000000074259
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 changeType:(unsigned long long)arg3;	// IMP=0x00100000000741d6
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 trashed:(_Bool)arg3;	// IMP=0x0010000000074153
- (id)changeWithScopedIdentifier:(id)arg1;	// IMP=0x00100000000740e9
- (_Bool)checkInWithError:(id *)arg1;	// IMP=0x00100000000740c8
- (_Bool)checkOutWithError:(id *)arg1;	// IMP=0x0010000000073de3
- (id)initWithPushRepository:(id)arg1 priority:(unsigned long long)arg2;	// IMP=0x0010000000073c27

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

