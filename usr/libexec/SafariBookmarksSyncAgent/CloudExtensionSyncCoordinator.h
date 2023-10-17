//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CKOperationGroup, CKRecord, CKServerChangeToken, CloudExtensionDevice, CloudExtensionSQLiteStore, CloudExtensionStore, NSArray, NSError, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CloudExtensionSyncCoordinator : NSObject
{
    CloudExtensionStore *_cloudExtensionStore;	// 8 = 0x8
    CloudExtensionSQLiteStore *_cloudExtensionLocalStore;	// 16 = 0x10
    unsigned long long _deletingDatabaseCount;	// 24 = 0x18
    _Bool _dataclassEnabled;	// 32 = 0x20
    _Bool _needsDataclassEnabledCheck;	// 33 = 0x21
    NSObject<OS_dispatch_queue> *_savingQueue;	// 40 = 0x28
    _Bool _savingQueueSuspended;	// 48 = 0x30
    CKOperationGroup *_saveExtensionStateOperationGroup;	// 56 = 0x38
    long long _saveState;	// 64 = 0x40
    CDUnknownBlockType _saveExtensionStatesCompletion;	// 72 = 0x48
    CloudExtensionDevice *_deviceToSave;	// 80 = 0x50
    _Bool _shouldUpdateExtensionStatesWhenSavingDevice;	// 88 = 0x58
    NSMutableArray *_recordsToSave;	// 96 = 0x60
    CKRecord *_unsavedRecordFromLastBatch;	// 104 = 0x68
    NSArray *_recordNamesOfStatesToDelete;	// 112 = 0x70
    NSError *_saveExtensionStatesError;	// 120 = 0x78
    CKOperationGroup *_deleteDevicesOperationGroup;	// 128 = 0x80
    long long _deleteState;	// 136 = 0x88
    CDUnknownBlockType _deleteCompletion;	// 144 = 0x90
    NSArray *_recordIDsToDelete;	// 152 = 0x98
    NSError *_deleteExtensionDevicesError;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_fetchingQueue;	// 168 = 0xa8
    _Bool _fetchingQueueSuspended;	// 176 = 0xb0
    CKOperationGroup *_fetchExtensionStatesOperationGroup;	// 184 = 0xb8
    CKOperationGroup *_currentFetchOperationGroup;	// 192 = 0xc0
    long long _fetchState;	// 200 = 0xc8
    NSError *_fetchError;	// 208 = 0xd0
    _Bool _isRefetchingAfterDeletingDatabase;	// 216 = 0xd8
    long long _fetchOperationType;	// 224 = 0xe0
    CDUnknownBlockType _fetchExtensionStatesCompletion;	// 232 = 0xe8
    CDUnknownBlockType _updateSQLiteStoreFromCloudKitCompletion;	// 240 = 0xf0
    CKServerChangeToken *_serverChangeToken;	// 248 = 0xf8
    NSMutableArray *_modifiedDevices;	// 256 = 0x100
    NSMutableArray *_modifiedStates;	// 264 = 0x108
    NSMutableArray *_namesOfDeletedRecords;	// 272 = 0x110
    NSArray *_fetchedDevices;	// 280 = 0x118
    ACAccountStore *_accountStore;	// 288 = 0x120
    NSError *__cloudExtensionStoreError;	// 296 = 0x128
}

+ (id)_createOperationGroupWithName:(id)arg1;	// IMP=0x002000000002a8a7
- (void).cxx_destruct;	// IMP=0x002000000002b058
@property(retain) NSError *_cloudExtensionStoreError; // @synthesize _cloudExtensionStoreError=__cloudExtensionStoreError;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (id)_cloudExtensionDevicesDictionaryFromCloudExtensionDevices:(id)arg1;	// IMP=0x001000000002afd8
- (id)_cloudExtensionStatesDictionaryFromCloudExtensionDevices:(id)arg1;	// IMP=0x001000000002ab8a
- (_Bool)_shouldDeleteDatabaseForError:(id)arg1;	// IMP=0x001000000002aaf0
- (_Bool)_canCloseCloudExtensionStoreDatabase;	// IMP=0x001000000002aac6
- (_Bool)_shouldContinueSyncOperation;	// IMP=0x001000000002aa8d
- (_Bool)_isDeletingDatabase;	// IMP=0x001000000002aa7f
- (_Bool)_isDataclassEnabled;	// IMP=0x001000000002a97d
- (void)cloudExtensionSQLiteStoreStore:(id)arg1 hadSevereError:(id)arg2;	// IMP=0x001000000002a83e
- (void)_finishedDeletingRecords;	// IMP=0x001000000002a5e0
- (void)_updateSQLiteStoreFromCloudKitAfterDeletingRecords;	// IMP=0x001000000002a37b
- (void)_deleteRecordsFromCloudKit;	// IMP=0x001000000002a0e6
- (void)_continueDeleting;	// IMP=0x0010000000029ff4
- (void)deleteCloudExtensionDevicesWithUUIDStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000029d34
- (void)_handleSevereSQLiteErrorWhileFetching:(id)arg1;	// IMP=0x0010000000029cd1
- (void)_didFetchModifiedRecord:(id)arg1;	// IMP=0x0010000000029b90
- (void)_finishedFetching;	// IMP=0x00100000000297b4
- (void)_loadDevicesAndStatesFromSQLiteStore;	// IMP=0x00100000000294a2
- (void)_setServerChangeTokenInSQLiteStore;	// IMP=0x001000000002914a
- (void)_saveModifiedRecordsToSQLiteStore;	// IMP=0x0010000000028d4d
- (void)_removeDeletedRecordsFromSQLiteStore;	// IMP=0x0010000000028a0b
- (void)_retryFetchChangesFromCloudKitIfPossibleAfterCreatingCloudExtensionsZoneCompletedWithError:(id)arg1;	// IMP=0x0010000000028875
- (void)_fetchChangesFromCloudKitCreatingCloudExtensionsZoneIfMissing:(_Bool)arg1;	// IMP=0x001000000002815d
- (void)_getServerChangeTokenFromSQLiteStore;	// IMP=0x0010000000027b13
- (void)_deleteDatabaseAndRestartFetch;	// IMP=0x0010000000027974
- (void)_continueFetchingExtensionStates;	// IMP=0x0010000000027841
- (void)_beginFetchingExtensionStates;	// IMP=0x001000000002780f
- (void)_updateSQLiteStoreFromCloudKitInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000027642
- (void)_resumeFetchingQueue;	// IMP=0x00100000000275ef
- (void)_suspendFetchingQueue;	// IMP=0x001000000002759c
- (void)getCloudExtensionStatesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000273d6
- (void)_handleSevereSQLiteErrorWhileMergingExistingDevice:(id)arg1;	// IMP=0x0010000000027368
- (id)_nextRecordBatchToSave;	// IMP=0x001000000002721a
- (id)_recordIDsFromRecordNames:(id)arg1;	// IMP=0x001000000002701d
- (id)_changedRecordsForCloudExtensionDevice:(id)arg1;	// IMP=0x0010000000026d89
- (void)_finishedSavingExtensionStates;	// IMP=0x0010000000026b1d
- (void)_updateSQLiteStoreFromCloudKitAfterSavingExtensionState;	// IMP=0x00100000000268bb
- (void)_deleteObsoleteExtensionStateRecordsFromCloudKit;	// IMP=0x00100000000265b7
- (void)_saveNextRecordBatchCreatingCloudExtensionsZoneIfMissing:(_Bool)arg1;	// IMP=0x0010000000026260
- (void)_saveDeviceToCloudKit;	// IMP=0x001000000002615d
- (void)_mergeDeviceIntoDeviceFromSQLiteStoreIfNecessary;	// IMP=0x0010000000025c77
- (void)_continueSavingExtensionStates;	// IMP=0x0010000000025bd7
- (void)_resumeSavingQueue;	// IMP=0x0010000000025b90
- (void)_suspendSavingQueue;	// IMP=0x0010000000025b49
- (void)_saveCloudExtensionDevice:(id)arg1 shouldUpdateExtensionStatesWhenSavingDevice:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000259e3
- (void)saveExtensionDeviceWithDictionaryRepresentation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000025826
- (void)saveExtensionStatesWithDictionaryRepresentation:(id)arg1 forDevice:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002556d
- (void)deleteDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000253a8
- (void)userAccountChanged;	// IMP=0x001000000002534e
- (id)initWithAccountStore:(id)arg1 cloudExtensionStore:(id)arg2 cloudExtensionSQLiteStore:(id)arg3;	// IMP=0x0010000000025080

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
