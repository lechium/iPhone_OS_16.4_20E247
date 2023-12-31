//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSDate, NSString, REMCDSavedReminder;

@interface REMCDSavedAttachment
{
}

+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x00200000005e3080
+ (id)cdEntityName;	// IMP=0x00100000005e1ec0
+ (_Bool)isAbstract;	// IMP=0x00100000005e1ea0
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x0010000000586510
+ (id)newCloudObjectForRecord:(id)arg1 account:(id)arg2 context:(id)arg3;	// IMP=0x0010000000585200
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x00100000005842c0
+ (id)recordTypes;	// IMP=0x00100000005841b0
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;	// IMP=0x00400000005e33e0
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x00100000005e32c0
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x00100000005e2fd0
- (void)prepareForDeletion;	// IMP=0x00100000005e2f40
- (void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;	// IMP=0x00100000005870f0
- (void)fixBrokenReferences;	// IMP=0x0010000000586e80
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x00100000005867f0
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x00100000005865a0
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x0010000000586530
- (id)parentCloudObject;	// IMP=0x00100000005864c0
- (id)newlyCreatedRecord;	// IMP=0x0010000000586460
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;	// IMP=0x0010000000585380
- (_Bool)shouldMarkAsDeletedInsteadOfDeletingImmediately;	// IMP=0x0010000000585370
- (_Bool)supportsDeletionByTTL;	// IMP=0x0010000000585350
- (id)recordType;	// IMP=0x0010000000585310
- (id)recordZoneName;	// IMP=0x00100000005852b0

// Remaining properties
@property(nonatomic, copy) NSString *attachmentTypeRawValue; // @dynamic attachmentTypeRawValue;
@property(nonatomic, copy) NSString *fileName; // @dynamic fileName;
@property(nonatomic, copy) NSDate *lastModifiedDate; // @dynamic lastModifiedDate;
@property(nonatomic, copy) NSData *metadata; // @dynamic metadata;
@property(nonatomic, retain) REMCDSavedReminder *reminder; // @dynamic reminder;
@property(nonatomic, copy) NSString *uti; // @dynamic uti;

@end

