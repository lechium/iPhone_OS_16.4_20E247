//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLDirectLibraryManager, CPLEngineWrapper, CPLLibraryManager, NSMutableDictionary, NSString, NSXPCConnection, Protocol;
@protocol CPLDaemonLibraryManagerDelegate, OS_dispatch_queue;

@interface CPLDaemonLibraryManager : NSObject
{
    CPLLibraryManager *_manager;	// 8 = 0x8
    CPLDirectLibraryManager *_platformManager;	// 16 = 0x10
    NSMutableDictionary *_downloadTasksPerIdentifier;	// 24 = 0x18
    NSMutableDictionary *_uploadTasksPerIdentifier;	// 32 = 0x20
    NSMutableDictionary *_forceSyncTasksPerIdentifier;	// 40 = 0x28
    NSMutableDictionary *_vouchersPerTaskIdentifier;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    Protocol *_allowedProtocol;	// 64 = 0x40
    NSString *_protocolDescription;	// 72 = 0x48
    int _processIdentifier;	// 80 = 0x50
    _Bool _killed;	// 84 = 0x54
    _Bool _isLibraryManager;	// 85 = 0x55
    _Bool _isManagement;	// 86 = 0x56
    NSXPCConnection *_connection;	// 88 = 0x58
    NSString *_name;	// 96 = 0x60
    CPLEngineWrapper *_engineWrapper;	// 104 = 0x68
    id <CPLDaemonLibraryManagerDelegate> _delegate;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000001a9c8
@property(nonatomic) __weak id <CPLDaemonLibraryManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CPLEngineWrapper *engineWrapper; // @synthesize engineWrapper=_engineWrapper;
@property(readonly, nonatomic) _Bool isManagement; // @synthesize isManagement=_isManagement;
@property(readonly, nonatomic) _Bool isLibraryManager; // @synthesize isLibraryManager=_isLibraryManager;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (id)displayableNameForLibraryManager:(id)arg1;	// IMP=0x001000000001a963
- (void)_dropVoucherForTaskWithIdentifier:(id)arg1;	// IMP=0x001000000001a94d
- (void)_storeVoucher:(id)arg1 forTaskWithIdentifier:(id)arg2;	// IMP=0x001000000001a930
- (void)_withVoucherForTaskWithIdentifier:(id)arg1 do:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a89c
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x001000000001a592
- (void)libraryManager:(id)arg1 didFinishForceSyncTask:(id)arg2 withErrors:(id)arg3;	// IMP=0x001000000001a0c3
- (_Bool)isManagementLibraryManager:(id)arg1;	// IMP=0x001000000001a0ba
- (_Bool)isLibraryManager:(id)arg1;	// IMP=0x001000000001a0b1
- (void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1;	// IMP=0x0010000000019edb
- (void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;	// IMP=0x0010000000019c50
- (void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3;	// IMP=0x001000000001995f
- (void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2;	// IMP=0x0010000000019700
- (void)_storeUploadTransferTask:(id)arg1;	// IMP=0x001000000001966c
- (void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2;	// IMP=0x001000000001947d
- (void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2;	// IMP=0x001000000001928e
- (void)libraryManager:(id)arg1 inMemoryDownloadDidFinishForResourceTransferTask:(id)arg2 data:(id)arg3 withError:(id)arg4;	// IMP=0x0010000000018ec3
- (void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 finalResource:(id)arg3 withError:(id)arg4;	// IMP=0x0010000000018ae1
- (void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3;	// IMP=0x00100000000187d6
- (void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2;	// IMP=0x00100000000184fa
- (void)libraryManager:(id)arg1 pushAllChangesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000182e3
- (void)libraryManager:(id)arg1 provideLocalResource:(id)arg2 recordClass:(Class)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000018057
- (void)libraryManagerHasStatusChanges:(id)arg1;	// IMP=0x0010000000017eb6
- (void)libraryManagerHasChangesToPull:(id)arg1;	// IMP=0x0010000000017d15
- (void)libraryManagerDidStartSynchronization:(id)arg1;	// IMP=0x0010000000017c59
- (void)libraryManagerStatusDidChange:(id)arg1;	// IMP=0x0010000000017946
- (void)cancelSyncTaskWithIdentifier:(id)arg1;	// IMP=0x00100000000177e9
- (void)forceSyncForScopeIdentifiers:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000017380
- (void)queryUserDetailsForShareParticipants:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001716d
- (void)getStatusForPendingRecordsSharedToScopeWithIdentifier:(id)arg1 maximumCount:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000017005
- (void)sharedLibraryRampCheckWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000016e36
- (void)removeParticipants:(id)arg1 fromSharedScopeWithIdentifier:(id)arg2 retentionPolicy:(long long)arg3 exitSource:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000016bf4
- (void)startExitFromSharedScopeWithIdentifier:(id)arg1 retentionPolicy:(long long)arg2 exitSource:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000169d2
- (void)fetchExistingSharedLibraryScopeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000167df
- (void)acceptSharedScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000165fb
- (void)fetchSharedScopeFromShareURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000163e8
- (void)deleteScopeWithIdentifier:(id)arg1 forced:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000161f8
- (void)updateShareForScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015fe5
- (void)createScope:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015dd2
- (void)getMappedScopedIdentifiersForScopedIdentifiers:(id)arg1 inAreLocalIdentifiers:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015c5b
- (void)resolveLocalScopedIdentifiersForCloudScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015afb
- (void)beginInMemoryDownloadOfResource:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000015725
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001553d
- (void)getStreamingURLForResource:(id)arg1 intent:(unsigned long long)arg2 hints:(id)arg3 timeRange:(CDStruct_e83c9415)arg4 clientBundleID:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000001524b
- (void)addDropDerivativesRecipe:(id)arg1 writeToUserDefaults:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001510d
- (void)provideCloudResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014fcd
- (void)provideRecordWithCloudScopeIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014e8d
- (void)provideScopeChangeForScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014d4d
- (void)unblockEngineElementOnce:(id)arg1;	// IMP=0x0010000000014d37
- (void)unblockEngineElement:(id)arg1;	// IMP=0x0010000000014d21
- (void)blockEngineElement:(id)arg1;	// IMP=0x0010000000014d0b
- (void)reportMiscInformation:(id)arg1;	// IMP=0x0010000000014c2c
- (void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2;	// IMP=0x0010000000014b1f
- (void)requestClientToPushAllChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001498f
- (void)forceBackupWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000147ff
- (void)addInfoToLog:(id)arg1;	// IMP=0x0010000000014720
- (void)cloudCacheGetDescriptionForRecordWithScopedIdentifier:(id)arg1 related:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000145b5
- (void)getCloudCacheForRecordWithScopedIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014455
- (void)getStatusesForScopesWithIdentifiers:(id)arg1 includeStorages:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000142ec
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001418c
- (void)getStatusForComponents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001402c
- (void)getListOfComponentsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013eef
- (void)resetCacheWithOption:(unsigned long long)arg1 reason:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013d89
- (void)getTargetsForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013c29
- (void)testKey:(id)arg1 value:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000013ab0
- (void)noteClientIsEndingSignificantWork;	// IMP=0x0010000000013a9a
- (void)noteClientIsBeginningSignificantWork;	// IMP=0x0010000000013a84
- (void)enableMingling;	// IMP=0x0010000000013a6e
- (void)disableMingling;	// IMP=0x0010000000013a58
- (void)setShouldOverride:(_Bool)arg1 forSystemBudgets:(unsigned long long)arg2;	// IMP=0x0010000000013a42
- (void)getSystemBudgetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013a2c
- (void)enableSynchronizationWithReason:(id)arg1;	// IMP=0x0010000000013a16
- (void)disableSynchronizationWithReason:(id)arg1;	// IMP=0x0010000000013a00
- (void)getScopeStatusCountsForScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000138a0
- (void)addStatusChangesForRecordsWithScopedIdentifiers:(id)arg1 persist:(_Bool)arg2;	// IMP=0x001000000001378e
- (void)acknowledgeChangedStatuses:(id)arg1;	// IMP=0x0010000000013685
- (void)getChangedStatusesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013548
- (void)getStatusForRecordsWithScopedIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000133e8
- (void)checkHasBackgroundDownloadOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000013256
- (void)noteClientIsInBackground;	// IMP=0x0010000000013240
- (void)noteClientIsInForegroundQuietly:(_Bool)arg1;	// IMP=0x001000000001322a
- (void)resetStatus;	// IMP=0x0010000000013214
- (void)startSyncSession;	// IMP=0x00100000000131fe
- (void)compactFileCacheWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000130f5
- (void)getResourcesForItemWithScopedIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012fc7
- (void)checkResourcesAreSafeToPrune:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012d3c
- (void)deleteResources:(id)arg1 checkServerIfNecessary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000012ab1
- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001264b
- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000012224
- (void)getChangeBatchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011cc6
- (void)finalizeSessionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011926
- (void)beginPullSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000114c4
- (void)beginPushSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001103f
- (void)processSessionContext:(id)arg1;	// IMP=0x0010000000010fb9
- (void)cancelTaskWithIdentifier:(id)arg1;	// IMP=0x0010000000010e35
- (void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 options:(id)arg3 proposedTaskIdentifier:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000001099f
- (void)boostPriorityForScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010868
- (void)deactivateScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010706
- (void)activateScopeWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000105a4
- (void)deactivateLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010286
- (void)closeLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000100cf
- (void)openLibraryWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 options:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000000f3c1
- (void)_whenThereIsNoOtherLibraryManagersOpenedWithLibraryIdentifier:(id)arg1 callBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f0e9
- (void)_killWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ed04
- (void)_dropManagerWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e858
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e84d
- (id)_clientWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e837
- (id)redactedDescription;	// IMP=0x001000000000e825
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x001000000000e69f
- (id)initWithConnection:(id)arg1 name:(id)arg2 allowedProcol:(id)arg3 isManagement:(_Bool)arg4;	// IMP=0x001000000000e09e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
