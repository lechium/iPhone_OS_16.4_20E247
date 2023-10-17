//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSOrderedSet, NSSet, NSString, REMAccountTypeHost;

@interface REMCDAccount
{
    REMAccountTypeHost *_accountTypeHost;	// 32 = 0x20
}

+ (id)cdEntityName;	// IMP=0x002000000006813d
+ (id)predicateForCloudKitAccountsWithKeyPathPrefix:(id)arg1;	// IMP=0x0010000000067ef4
+ (_Bool)isAbstract;	// IMP=0x0010000000067eec
+ (id)keyPathsForValuesAffectingEffectiveMinimumSupportedVersion;	// IMP=0x0010000000068aca
+ (id)fetchRequest;	// IMP=0x0010000000082fd4
+ (id)accountByCKIdentifierFrom:(id)arg1;	// IMP=0x00100000000a2624
+ (id)accountsMatchingPredicate:(id)arg1 context:(id)arg2;	// IMP=0x00100000000a2612
+ (id)_unitTest_randomPersonIDSalt;	// IMP=0x00100000000a25f9
+ (_Bool)clearAppleCloudKitTable;	// IMP=0x00100000000a216a
+ (id)cloudKitAccountWithCKIdentifier:(id)arg1 context:(id)arg2;	// IMP=0x00100000000a1b2a
+ (id)accountWithCKIdentifier:(id)arg1 context:(id)arg2;	// IMP=0x00100000000a19c0
+ (id)unsafeUntilSystemReady_primaryCloudKitAccountInContext:(id)arg1 appleAccountUtilities:(id)arg2;	// IMP=0x00100000000a104d
+ (id)_groundTruth_primaryActiveCloudKitAccountInContext:(id)arg1;	// IMP=0x00100000000a0ceb
+ (unsigned long long)countCloudBasedAccountsInContext:(id)arg1;	// IMP=0x00100000000a0acf
+ (id)allCloudKitAccountsInContext:(id)arg1;	// IMP=0x00100000000a0645
+ (id)_fetchCloudKitAccountsInContext:(id)arg1;	// IMP=0x00100000000a0190
+ (void)initialize;	// IMP=0x00100000000a0139
+ (_Bool)shouldAttemptLocalObjectMerge;	// IMP=0x0010000000621080
+ (void)writeMigrationStateTo:(id)arg1 didChooseToMigrate:(_Bool)arg2 didFinishMigration:(_Bool)arg3;	// IMP=0x0010000000620fa0
+ (void)clearUserRecord:(id)arg1;	// IMP=0x0010000000620f70
+ (id)newCloudObjectForRecord:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x001000000061c9a0
+ (id)allCloudObjectIDsInContext:(id)arg1;	// IMP=0x001000000061c550
+ (id)allCloudObjectsInContext:(id)arg1;	// IMP=0x001000000061c440
+ (id)existingCloudObjectForRecordID:(id)arg1 accountID:(id)arg2 context:(id)arg3;	// IMP=0x001000000061c2b0
+ (id)recordTypes;	// IMP=0x001000000061bb70
- (void).cxx_destruct;	// IMP=0x0010000000068643
- (_Bool)postAccountPropertyChangeNotificationWithKey:(id)arg1 changedValue:(id)arg2;	// IMP=0x00100000000683b6
@property(retain, nonatomic) NSData *listIDsMergeableOrdering; // @dynamic listIDsMergeableOrdering;
@property(retain, nonatomic) NSData *personIDSalt;
- (long long)compare:(id)arg1;	// IMP=0x0010000000068048
- (id)accountTypeHost;	// IMP=0x0010000000067f9c
- (void)debug_lowLevelRemoveFromParent;	// IMP=0x0010000000068af3
- (long long)parentEffectiveMinimumSupportedVersion;	// IMP=0x0010000000068ae3
- (_Bool)shouldCascadeMarkAsDeleteInto:(id)arg1 forRelationship:(id)arg2;	// IMP=0x00100000000689b8
- (_Bool)isConnectedToAccountObject:(id)arg1;	// IMP=0x00100000000689b0
- (_Bool)generateAndSavePersonIDSaltIfNeededWithContext:(id)arg1;	// IMP=0x00100000000a21c7
- (_Bool)shouldUseResolutionTokenMapForMergingData;	// IMP=0x001000000061ba50
- (void)cleanUpAfterLocalObjectMerge;	// IMP=0x0010000000622d60
- (_Bool)mergeWithLocalObject:(id)arg1;	// IMP=0x00100000006210c0
- (id)existingLocalObjectToMergeWithPredicate:(id)arg1;	// IMP=0x00100000006210a0
- (_Bool)shouldBeDeletedFromLocalDatabaseUnlessByThisDevice:(_Bool)arg1;	// IMP=0x0010000000620f60
- (_Bool)needsToBePushedToCloud;	// IMP=0x0010000000620f10
- (_Bool)needsToBeDeletedFromCloud;	// IMP=0x0010000000620e20
- (id)newlyCreatedRecord;	// IMP=0x0010000000620dd0
- (void)mergeDataFromRecord:(id)arg1 accountID:(id)arg2;	// IMP=0x001000000061fc80
- (_Bool)mergeMigrationStateFromRecord:(id)arg1;	// IMP=0x001000000061eb20
- (void)sortChildrenObjects;	// IMP=0x001000000061d1a0
- (id)recordType;	// IMP=0x001000000061bfb0
- (id)recordZoneName;	// IMP=0x001000000061bf50
- (id)recordName;	// IMP=0x001000000061bed0

// Remaining properties
@property(retain, nonatomic) NSSet *ckServerChangeTokens; // @dynamic ckServerChangeTokens;
@property(retain, nonatomic) NSSet *ckSharedObjectOwnerNames; // @dynamic ckSharedObjectOwnerNames;
@property(copy, nonatomic) NSString *ckUserRecordName; // @dynamic ckUserRecordName;
@property(nonatomic) _Bool daAllowsCalendarAddDeleteModify; // @dynamic daAllowsCalendarAddDeleteModify;
@property(copy, nonatomic) NSString *daConstraintsDescriptionPath; // @dynamic daConstraintsDescriptionPath;
@property(nonatomic) _Bool daSupportsSharedCalendars; // @dynamic daSupportsSharedCalendars;
@property(nonatomic) _Bool daWasMigrated; // @dynamic daWasMigrated;
@property(nonatomic) _Bool debugSyncDisabled; // @dynamic debugSyncDisabled;
@property(nonatomic) _Bool didChooseToMigrate; // @dynamic didChooseToMigrate;
@property(nonatomic) _Bool didChooseToMigrateLocally; // @dynamic didChooseToMigrateLocally;
@property(nonatomic) _Bool didFinishMigration; // @dynamic didFinishMigration;
@property(nonatomic) _Bool inactive; // @dynamic inactive;
@property(retain, nonatomic) NSData *listIDsMergeableOrdering_v2; // @dynamic listIDsMergeableOrdering_v2;
@property(retain, nonatomic) NSOrderedSet *lists; // @dynamic lists;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long persistenceCloudSchemaVersion; // @dynamic persistenceCloudSchemaVersion;
@property(copy, nonatomic) NSString *personID; // @dynamic personID;
@property(retain, nonatomic) NSData *personIDSalt_v1; // @dynamic personIDSalt_v1;
@property(retain, nonatomic) NSSet *reminders; // @dynamic reminders;
@property(retain, nonatomic) NSOrderedSet *smartLists; // @dynamic smartLists;
@property(retain, nonatomic) NSSet *templates; // @dynamic templates;
@property(nonatomic) short type; // @dynamic type;

@end
