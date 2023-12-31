//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSString;

@interface CPLPrequeliteQuarantinedRecords
{
}

- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x0020000000078866
- (unsigned long long)countOfQuarantinedRecordsInScopeWithIdentifier:(id)arg1;	// IMP=0x001000000007878f
- (unsigned long long)countOfQuarantinedRecords;	// IMP=0x001000000007871b
- (Class)classForQuarantinedRecordWithScopedIdentifier:(id)arg1;	// IMP=0x00100000000785bd
- (_Bool)isRecordWithScopedIdentifierQuarantined:(id)arg1;	// IMP=0x0010000000078494
- (_Bool)removeQuarantinedRecordWithScopedIdentifier:(id)arg1 removed:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x00100000000782d6
- (_Bool)addQuarantinedRecordWithScopedIdentifier:(id)arg1 recordClass:(Class)arg2 reason:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000780bf
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x0010000000077b97
- (MISSING_TYPE *)initializeStorage;	// IMP=0x0010000000077b10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

