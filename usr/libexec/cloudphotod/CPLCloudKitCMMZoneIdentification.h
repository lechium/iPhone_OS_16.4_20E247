//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CPLCloudKitCMMZoneIdentification
{
}

+ (id)libraryInfoRecordName;	// IMP=0x004000000011789b
+ (id)shareType;	// IMP=0x001000000011788e
+ (id)shareRecordName;	// IMP=0x0010000000117881
+ (id)rootRecordName;	// IMP=0x0010000000117867
+ (_Bool)supportsCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x0010000000117846
+ (long long)scopeTypeForCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 fetchedRecords:(id)arg3 currentUserID:(id)arg4;	// IMP=0x0010000000117662
+ (id)prefixForNewScopes;	// IMP=0x0010000000117655
+ (_Bool)isZoneIDForCMMZone:(id)arg1;	// IMP=0x0010000000117607
- (_Bool)supportsDeletionOfRecordClass:(Class)arg1;	// IMP=0x0040000000117d42
- (_Bool)supportsDirectDeletionOfRecordClass:(Class)arg1;	// IMP=0x0010000000117cc7
- (_Bool)supportsDownloadOfRecordClass:(Class)arg1;	// IMP=0x0010000000117c4c
- (_Bool)supportsUploadOfRecordClass:(Class)arg1;	// IMP=0x0010000000117bd1
- (_Bool)supportsDeletionOfRecord:(id)arg1;	// IMP=0x0010000000117b33
- (_Bool)supportsDirectDeletionOfRecord:(id)arg1;	// IMP=0x0010000000117a95
- (_Bool)supportsDownloadOfChange:(id)arg1;	// IMP=0x00100000001179f7
- (_Bool)supportsUploadOfChange:(id)arg1;	// IMP=0x0010000000117929
- (id)shareRecordIDToDelete;	// IMP=0x00100000001178dc
- (_Bool)supportsZoneCreation;	// IMP=0x00100000001178c2
- (_Bool)supportsZoneDelete;	// IMP=0x00100000001178a8
- (id)rootRecordType;	// IMP=0x0010000000117874

@end
