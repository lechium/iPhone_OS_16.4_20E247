//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, NSDate, NSString;
@protocol CPLCKRecordPropertyMapping, CPLCloudKitScopeProvider;

@interface CPLCloudKitMoveBackCopyHelper : NSObject
{
    Class _recordClass;	// 8 = 0x8
    id <CPLCKRecordPropertyMapping> _mapping;	// 16 = 0x10
    NSDate *_recordModificationDate;	// 24 = 0x18
    CKRecordID *_userRecordID;	// 32 = 0x20
    id <CPLCloudKitScopeProvider> _scopeProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000139348
@property(readonly, nonatomic) id <CPLCloudKitScopeProvider> scopeProvider; // @synthesize scopeProvider=_scopeProvider;
@property(readonly, nonatomic) CKRecordID *userRecordID; // @synthesize userRecordID=_userRecordID;
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x001000000013931e
- (id)scopedIdentifierForCKRecordID:(id)arg1;	// IMP=0x0010000000139308
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x00100000001392f2
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x00100000001392dc
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x00100000001392c6
- (id)finalizedDestinationCKRecordFromProposedCKRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000139243
- (id)recordNameInDestinationCKRecordFromRecordName:(id)arg1 error:(id *)arg2;	// IMP=0x001000000013922d
- (_Bool)shouldCopyCKRecordKeyToDestinationCKRecord:(id)arg1;	// IMP=0x0010000000139225
- (id)baseDestinationCKRecordForSourceCKRecord:(id)arg1 destinationCKRecordID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000139007
- (void)prepareCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x0010000000138fc9
- (_Bool)shouldCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x0010000000138e53
- (id)initWithUserRecordID:(id)arg1 scopeProvider:(id)arg2;	// IMP=0x0010000000138d5d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

