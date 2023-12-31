//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequelitePendingRecordChecks
{
}

- (id)status;	// IMP=0x00200000000689aa
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x001000000006889f
- (_Bool)hasRecordsToCheckWithScopeIdentifier:(id)arg1;	// IMP=0x00100000000687c8
- (_Bool)dequeueCloudScopedIdentifiersToCheck:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000068411
- (id)nextBatchOfRecordsToCheckWithScopeIdentifier:(id)arg1;	// IMP=0x001000000006820c
- (_Bool)enqueueCloudScopedIdentifiersToCheck:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000067eaf
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x0010000000067e5d
- (_Bool)initializeStorage;	// IMP=0x0010000000067db7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

