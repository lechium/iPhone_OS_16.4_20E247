//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKRecordZoneID, NSOperation, NSOperationQueue, NSString, PCSAccountsModel, PCSDelayedAction, PCSMobileBackup, PCSRegistryOperationPair, UserRegistryDB, UserRegistryStats;
@protocol OS_dispatch_queue, OS_os_log;

@interface PCSUserRegistry : NSObject
{
    _Bool _resubmitSyncing;	// 8 = 0x8
    _Bool _stats_dirty;	// 9 = 0x9
    UserRegistryStats *_stats;	// 16 = 0x10
    NSOperationQueue *_mainOperationQueue;	// 24 = 0x18
    PCSDelayedAction *_resyncRegistryAction;	// 32 = 0x20
    PCSDelayedAction *_subscribeAction;	// 40 = 0x28
    CKContainer *_container;	// 48 = 0x30
    PCSMobileBackup *_mobileBackup;	// 56 = 0x38
    CKRecordZoneID *_recordZoneID;	// 64 = 0x40
    CKRecordZoneID *_mobileBackupRecordZoneID;	// 72 = 0x48
    PCSAccountsModel *_accounts;	// 80 = 0x50
    NSObject<OS_os_log> *_oslog;	// 88 = 0x58
    UserRegistryDB *_userdb;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_queue;	// 104 = 0x68
    PCSRegistryOperationPair *_currentSyncOperations;	// 112 = 0x70
    PCSRegistryOperationPair *_pendingSyncOperations;	// 120 = 0x78
    NSOperation *_cloudKitRateLimitedOp;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x002000000000d863
@property(retain) NSOperation *cloudKitRateLimitedOp; // @synthesize cloudKitRateLimitedOp=_cloudKitRateLimitedOp;
@property(retain) PCSRegistryOperationPair *pendingSyncOperations; // @synthesize pendingSyncOperations=_pendingSyncOperations;
- (void)setCurrentSyncOperations:(id)arg1;	// IMP=0x001000000000d80e
- (id)currentSyncOperations;	// IMP=0x001000000000d7fa
@property _Bool stats_dirty; // @synthesize stats_dirty=_stats_dirty;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool resubmitSyncing; // @synthesize resubmitSyncing=_resubmitSyncing;
@property(retain) UserRegistryDB *userdb; // @synthesize userdb=_userdb;
@property(retain) NSObject<OS_os_log> *oslog; // @synthesize oslog=_oslog;
@property(retain) PCSAccountsModel *accounts; // @synthesize accounts=_accounts;
@property(retain) CKRecordZoneID *mobileBackupRecordZoneID; // @synthesize mobileBackupRecordZoneID=_mobileBackupRecordZoneID;
@property(retain) CKRecordZoneID *recordZoneID; // @synthesize recordZoneID=_recordZoneID;
@property(retain) PCSMobileBackup *mobileBackup; // @synthesize mobileBackup=_mobileBackup;
@property(retain) CKContainer *container; // @synthesize container=_container;
@property(retain) PCSDelayedAction *subscribeAction; // @synthesize subscribeAction=_subscribeAction;
@property(retain) PCSDelayedAction *resyncRegistryAction; // @synthesize resyncRegistryAction=_resyncRegistryAction;
@property(retain) NSOperationQueue *mainOperationQueue; // @synthesize mainOperationQueue=_mainOperationQueue;
@property(retain) UserRegistryStats *stats; // @synthesize stats=_stats;
- (id)userDBBackupRecordIDsWithError:(id *)arg1;	// IMP=0x001000000000d3f6
- (id)fetchMobileBackupRecordIDsWithError:(id *)arg1;	// IMP=0x001000000000d2e4
- (id)ckRecordListToRecordIDs:(id)arg1;	// IMP=0x001000000000d0cd
- (id)queryMobileBackupKeysFromCloudKit:(id *)arg1;	// IMP=0x001000000000cae1
- (id)allMobileBackupPublicKeys;	// IMP=0x001000000000c76a
- (id)allMobileBackupKeys;	// IMP=0x001000000000c650
- (id)loadMobileBackupKeysFromDB;	// IMP=0x001000000000c294
- (id)extractMobilebackupKeyEscrow:(id)arg1;	// IMP=0x001000000000beca
- (struct _PCSIdentitySetData *)identityCopySet;	// IMP=0x001000000000bcab
- (id)startBackupOfNewMobileBackupIdentities;	// IMP=0x001000000000bb03
- (id)scanPCSIdentitiesForNewMobileBackupRecords;	// IMP=0x001000000000b31f
- (_Bool)checkRegistry:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b09e
- (id)keyRecord:(struct _PCSIdentityData *)arg1 withName:(id)arg2 zone:(id)arg3;	// IMP=0x001000000000af54
- (id)mobileBackupKeyRecordIdentity:(struct _PCSIdentityData *)arg1 version:(id)arg2;	// IMP=0x001000000000af3d
- (id)keyRecordIdentity:(struct _PCSIdentityData *)arg1 device:(id)arg2 version:(id)arg3;	// IMP=0x001000000000ad77
- (_Bool)updateEscrowData:(id)arg1 escrowIdentity:(struct _PCSIdentityData *)arg2 identity:(struct _PCSIdentityData *)arg3;	// IMP=0x001000000000ac5d
- (id)pushMobileBackupRecordsToCloudKit:(id)arg1 removeObjects:(id)arg2;	// IMP=0x0010000000009f20
- (id)queryEscrowID:(id)arg1;	// IMP=0x0010000000009ebe
- (id)queryEscrowName:(id)arg1;	// IMP=0x0010000000009c63
- (void)deleteEscrowID:(id)arg1;	// IMP=0x0010000000009b3c
- (_Bool)saveEscrowChange:(id)arg1;	// IMP=0x001000000000983d
- (id)deleteMobileBackupZone;	// IMP=0x001000000000949e
- (id)createZone:(id)arg1 withName:(id)arg2;	// IMP=0x0010000000009025
- (void)checkErrorForRetryPause:(id)arg1;	// IMP=0x001000000000897e
- (_Bool)errorShouldCauseReset:(id)arg1;	// IMP=0x0010000000008335
- (void)addDatabaseOperation:(id)arg1;	// IMP=0x00100000000082c3
- (id)privateDatabase;	// IMP=0x0010000000008273
- (void)clearCloudKitCache;	// IMP=0x00100000000081c1
- (void)statModify;	// IMP=0x0010000000008158
- (void)statFetch;	// IMP=0x00100000000080ef
- (void)_onqueueSaveUserRegistryStats;	// IMP=0x0010000000007fee
- (void)cacheUserRegistryStats;	// IMP=0x0010000000007de7
- (id)getServerChangeToken:(id)arg1;	// IMP=0x0010000000007a8e
- (void)_onqueueDeleteServerChangeToken:(id)arg1;	// IMP=0x00100000000079f6
- (void)saveServerChangeToken:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000000774a
- (void)saveRecord:(id)arg1;	// IMP=0x00100000000073a4
- (id)createPendingSyncOperation:(id)arg1;	// IMP=0x0010000000005331
- (id)syncUserRegistry;	// IMP=0x0010000000004cc4
- (id)fetchAllChanges:(id)arg1;	// IMP=0x0010000000003ce2
- (void)resyncDatabase:(id)arg1;	// IMP=0x001000000000397a
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x001000000000385a
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000003854
- (void)setupSubscriptions;	// IMP=0x001000000000307e
- (void)registerCloudKitNotifications;	// IMP=0x0010000000002d18
- (_Bool)setupCloudKitSyncing;	// IMP=0x0010000000002be4
- (void)checkAccountStatus:(id)arg1;	// IMP=0x0010000000002945
- (id)defaultCKConfiguration;	// IMP=0x001000000000288e
- (void)flushStats;	// IMP=0x001000000000262f
- (void)setupStatCache;	// IMP=0x001000000000261d
- (_Bool)ensureUserRegistryDbLoaded:(id *)arg1;	// IMP=0x0010000000002419
- (id)initWithBackup:(id)arg1;	// IMP=0x0010000000001f68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

