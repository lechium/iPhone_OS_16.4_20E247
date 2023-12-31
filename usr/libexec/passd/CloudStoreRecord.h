//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CloudStoreRecord
{
}

+ (id)_predicateForRecordType:(id)arg1;	// IMP=0x00400000002b07d6
+ (id)_predicateForCloudStoreZonePID:(id)arg1;	// IMP=0x00100000002b07b3
+ (id)_predicateForRecordName:(id)arg1;	// IMP=0x00100000002b0790
+ (id)_predicateForRecord:(id)arg1 cloudStoreZonePID:(id)arg2;	// IMP=0x00100000002b05eb
+ (void)removeCloudStoreRecordsWithName:(id)arg1 recordType:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002b0431
+ (void)removeCloudStoreRecordID:(id)arg1 recordType:(id)arg2 cloudStoreZone:(id)arg3 inDatabase:(id)arg4;	// IMP=0x00100000002b01f0
+ (void)deleteEntitiesForCloudStoreZonePID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002b012f
+ (id)anyInDatabase:(id)arg1 cloudStoreRecord:(id)arg2 cloudStoreZone:(id)arg3;	// IMP=0x00100000002b0014
+ (id)insertOrUpdateCloudStoreRecord:(id)arg1 forCloudStoreZone:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002afdd7
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000002afda8
+ (id)databaseTable;	// IMP=0x00100000002afd9b
- (id)_commonDictionaryForCloudStoreRecord:(id)arg1;	// IMP=0x00400000002b07f9
- (unsigned long long)hash;	// IMP=0x00100000002b05a0
- (void)updateWithCloudStoreRecord:(id)arg1;	// IMP=0x00100000002affc8
- (id)initWithCloudStoreRecord:(id)arg1 forCloudStoreZone:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002afea7

@end

