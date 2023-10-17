//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CKOperationGroup, CKRecord, CKServerChangeToken, CloudTabCloseRequest, CloudTabDevice, CloudTabRemoteStore, NSArray, NSError, NSMutableArray, NSString;
@protocol CloudTabLocalStore, OS_dispatch_queue;

@interface CloudTabSyncCoordinator : NSObject
{
    id <CloudTabLocalStore> _cloudTabStore;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
    unsigned long long _deletingDatabaseCount;	// 24 = 0x18
    _Bool _dataclassEnabled;	// 32 = 0x20
    _Bool _needsDataclassEnabledCheck;	// 33 = 0x21
    NSObject<OS_dispatch_queue> *_savingQueue;	// 40 = 0x28
    _Bool _savingQueueSuspended;	// 48 = 0x30
    CKOperationGroup *_saveTabsOperationGroup;	// 56 = 0x38
    long long _tabSaveState;	// 64 = 0x40
    CDUnknownBlockType _saveTabsCompletion;	// 72 = 0x48
    CloudTabDevice *_deviceToSave;	// 80 = 0x50
    NSMutableArray *_recordsToSave;	// 88 = 0x58
    CKRecord *_unsavedRecordFromLastBatch;	// 96 = 0x60
    NSArray *_uuidStringsOfTabsToDelete;	// 104 = 0x68
    NSError *_saveTabsError;	// 112 = 0x70
    CKOperationGroup *_saveCloseRequestsOperationGroup;	// 120 = 0x78
    long long _closeRequestSaveState;	// 128 = 0x80
    CDUnknownBlockType _saveCloseRequestCompletion;	// 136 = 0x88
    CloudTabCloseRequest *_closeRequestToSave;	// 144 = 0x90
    NSError *_saveCloseRequestError;	// 152 = 0x98
    CKOperationGroup *_deleteCloseRequestsOperationGroup;	// 160 = 0xa0
    CKOperationGroup *_deleteDevicesOperationGroup;	// 168 = 0xa8
    long long _deleteState;	// 176 = 0xb0
    CKOperationGroup *_currentDeleteOperationGroup;	// 184 = 0xb8
    CDUnknownBlockType _deleteCompletion;	// 192 = 0xc0
    NSArray *_recordIDsToDelete;	// 200 = 0xc8
    NSError *_deleteError;	// 208 = 0xd0
    NSObject<OS_dispatch_queue> *_fetchingQueue;	// 216 = 0xd8
    _Bool _fetchingQueueSuspended;	// 224 = 0xe0
    CKOperationGroup *_fetchTabsOperationGroup;	// 232 = 0xe8
    CKOperationGroup *_currentFetchOperationGroup;	// 240 = 0xf0
    long long _fetchState;	// 248 = 0xf8
    NSError *_fetchError;	// 256 = 0x100
    _Bool _isRefetchingAfterDeletingDatabase;	// 264 = 0x108
    long long _fetchOperationType;	// 272 = 0x110
    CDUnknownBlockType _fetchDevicesCompletion;	// 280 = 0x118
    CDUnknownBlockType _updateSQLiteStoreFromCloudKitCompletion;	// 288 = 0x120
    CKServerChangeToken *_serverChangeToken;	// 296 = 0x128
    NSMutableArray *_modifiedDevices;	// 304 = 0x130
    NSMutableArray *_modifiedTabs;	// 312 = 0x138
    NSMutableArray *_modifiedCloseRequests;	// 320 = 0x140
    NSMutableArray *_namesOfDeletedRecords;	// 328 = 0x148
    NSArray *_fetchedDevices;	// 336 = 0x150
    NSArray *_fetchedCloseRequests;	// 344 = 0x158
    _Bool __isBeingTornDown;	// 352 = 0x160
    CloudTabRemoteStore *_cloudRemoteStore;	// 360 = 0x168
    NSError *__cloudTabStoreError;	// 368 = 0x170
}

- (void).cxx_destruct;	// IMP=0x002000000009f1a8
@property _Bool _isBeingTornDown; // @synthesize _isBeingTornDown=__isBeingTornDown;
@property(retain) NSError *_cloudTabStoreError; // @synthesize _cloudTabStoreError=__cloudTabStoreError;
@property(readonly, nonatomic) CloudTabRemoteStore *cloudRemoteStore; // @synthesize cloudRemoteStore=_cloudRemoteStore;
- (void)cloudTabLocalStoreDidOpen:(id)arg1;	// IMP=0x001000000009f118
- (void)cloudTabLocalStore:(id)arg1 hadSevereError:(id)arg2;	// IMP=0x001000000009f0af
- (void)deleteCloudTabsZoneWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009ec8e
- (void)_finishedDeletingRecords;	// IMP=0x001000000009ea1d
- (void)_updateSQLiteStoreFromCloudKitAfterDeletingRecords;	// IMP=0x001000000009e7b8
- (void)_deleteRecordsFromCloudKit;	// IMP=0x001000000009e520
- (void)_continueDeleting;	// IMP=0x001000000009e42e
- (void)_deleteRecordsWithNames:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009e19a
- (void)deleteCloudTabCloseRequestsWithUUIDStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009e08f
- (void)deleteDevicesWithUUIDStrings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009df84
- (void)_handleSevereSQLiteErrorWhileFetching:(id)arg1;	// IMP=0x001000000009df21
- (void)_didFetchModifiedRecord:(id)arg1;	// IMP=0x001000000009dd6b
- (void)_finishedFetching;	// IMP=0x001000000009d99d
- (void)_loadDevicesAndTabsFromSQLiteStore;	// IMP=0x001000000009d64f
- (void)_setServerChangeTokenInSQLiteStore;	// IMP=0x001000000009d2f7
- (void)_saveModifiedRecordsToSQLiteStore;	// IMP=0x001000000009cea6
- (void)_removeDeletedRecordsFromSQLiteStore;	// IMP=0x001000000009cb64
- (void)_retryFetchChangesFromCloudKitIfPossibleAfterCreatingCloudTabsZoneCompletedWithError:(id)arg1;	// IMP=0x001000000009c9ce
- (void)_fetchChangesFromCloudKitCreatingCloudTabsZoneIfMissing:(_Bool)arg1;	// IMP=0x001000000009c28a
- (void)_getServerChangeTokenFromSQLiteStore;	// IMP=0x001000000009bc40
- (void)_deleteDatabaseAndRestartFetch;	// IMP=0x001000000009ba90
- (void)_continueFetchingTabs;	// IMP=0x001000000009b946
- (void)_beginFetchingTabs;	// IMP=0x001000000009b914
- (void)_updateSQLiteStoreFromCloudKitInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000009b714
- (void)_resumeFetchingQueue;	// IMP=0x001000000009b6c1
- (void)_suspendFetchingQueue;	// IMP=0x001000000009b66e
- (void)fetchDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000009b479
- (void)_finishedSavingCloseRequest;	// IMP=0x001000000009b21b
- (void)_updateSQLiteStoreFromCloudKitAfterSavingCloseRequest;	// IMP=0x001000000009afb9
- (void)_saveCloseRequestToCloudKit;	// IMP=0x001000000009aca9
- (void)_continueSavingCloseRequest;	// IMP=0x001000000009abb7
- (void)saveCloudTabCloseRequestWithDictionaryRepresentation:(id)arg1 closeRequestUUIDString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009a831
- (void)_handleSevereSQLiteErrorWhileMergingExistingDevice:(id)arg1;	// IMP=0x001000000009a7c3
- (id)_nextRecordBatchToSave;	// IMP=0x001000000009a675
- (id)_recordIDsFromDeviceOrTabUUIDStrings:(id)arg1;	// IMP=0x001000000009a478
- (id)_changedRecordsForCloudTabDevice:(id)arg1;	// IMP=0x001000000009a1d3
- (void)_finishedSavingDevice;	// IMP=0x0010000000099f67
- (void)_updateSQLiteStoreFromCloudKitAfterSavingTabs;	// IMP=0x0010000000099d05
- (void)_deleteObsoleteTabRecordsFromCloudKit;	// IMP=0x00100000000999fe
- (void)_saveNextRecordBatchCreatingCloudTabsZoneIfMissing:(_Bool)arg1;	// IMP=0x001000000009962b
- (void)_saveDeviceToCloudKit;	// IMP=0x0010000000099528
- (void)_mergeDeviceIntoDeviceFromSQLiteStoreIfNecessary;	// IMP=0x0010000000099019
- (void)_continueSavingTabsForCurrentDevice;	// IMP=0x0010000000098f79
- (void)_resumeSavingQueue;	// IMP=0x0010000000098f32
- (void)_suspendSavingQueue;	// IMP=0x0010000000098eeb
- (void)saveTabsForCurrentDeviceWithDictionaryRepresentation:(id)arg1 deviceUUIDString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000098bac
- (_Bool)_shouldDeleteDatabaseForError:(id)arg1;	// IMP=0x0000000000098b12
- (_Bool)_canCloseCloudTabStoreDatabase;	// IMP=0x0010000000098ad4
- (_Bool)_shouldContinueSyncOperation;	// IMP=0x0010000000098a89
- (_Bool)_isDataclassEnabled;	// IMP=0x001000000009898a
- (void)userAccountChanged;	// IMP=0x0010000000098930
- (_Bool)_isDeletingDatabase;	// IMP=0x0010000000098922
- (void)deleteDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000987b1
- (void)tearDown;	// IMP=0x0010000000098771
- (id)initWithCloudRemoteStore:(id)arg1 localStore:(id)arg2 accountStore:(id)arg3;	// IMP=0x0010000000098516
- (id)init;	// IMP=0x0010000000098508

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
