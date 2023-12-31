//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ML3DatabaseImportManager, ML3MediaLibraryWriter, MLDCacheDeleteController, MLDDatabaseValidationController, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSTimer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MLDMediaLibraryService : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_spotlightIndexQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_writerBeginTransactionQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_writerUpdateQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 40 = 0x28
    struct os_unfair_lock_s _xpcLock;	// 48 = 0x30
    NSMutableDictionary *_xpcListeners;	// 56 = 0x38
    NSMutableDictionary *_xpcClients;	// 64 = 0x40
    ML3MediaLibraryWriter *_writer;	// 72 = 0x48
    ML3DatabaseImportManager *_importManager;	// 80 = 0x50
    MLDCacheDeleteController *_cacheDeleteController;	// 88 = 0x58
    MLDDatabaseValidationController *_validationController;	// 96 = 0x60
    NSOperationQueue *_maintenanceTasksOperationQueue;	// 104 = 0x68
    NSOperationQueue *_databaseRecoveryOperationQueue;	// 112 = 0x70
    NSMutableArray *_databaseRecoveryCompletionHandlers;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_signalDispatchSource;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_spotlightIndexCoalescingTimer;	// 136 = 0x88
    NSTimer *_idleTimer;	// 144 = 0x90
    NSMutableDictionary *_mediaLibraries;	// 152 = 0x98
    NSString *_deviceSharedLibraryPath;	// 160 = 0xa0
    NSMutableDictionary *_transactionInfoForID;	// 168 = 0xa8
    unsigned long long _stateHandle;	// 176 = 0xb0
    _Bool _databaseLocked;	// 184 = 0xb8
    long long _currentLockReason;	// 192 = 0xc0
}

+ (id)sharedInstance;	// IMP=0x00200000000101a4
- (void).cxx_destruct;	// IMP=0x002000000000c1dc
- (void)faultForQuery:(id)arg1 fromClientBundleID:(id)arg2 onTrustError:(id)arg3;	// IMP=0x001000000000be82
- (void)_updateSiriIndexMetadataForLibraryAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000bd4f
- (_Bool)_isMediaPath:(id)arg1 selector:(SEL)arg2 resolvedPath:(id *)arg3;	// IMP=0x001000000000b916
- (_Bool)_platformSupportsSpotlightIndexing;	// IMP=0x001000000000b90e
- (void)_unregisterServiceOriginatedTransactionWithConnection:(id)arg1;	// IMP=0x001000000000b868
- (void)_validateDatabaseAtPath:(id)arg1 forConnection:(id)arg2 byTruncatingFirst:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000b622
- (void)_validateDatabaseAtPath:(id)arg1 byTruncatingFirst:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b608
- (_Bool)_validateTransactionIdentifier:(id)arg1 forClient:(id)arg2;	// IMP=0x001000000000b454
- (void)_unregisterTransactionInfoForIdentifier:(id)arg1;	// IMP=0x001000000000b3c5
- (void)_registerTransactionInfo:(id)arg1 forIdentitifer:(id)arg2;	// IMP=0x001000000000b2fb
- (void)_performMaintenanceOnDatabaseAtPath:(id)arg1 withActivity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b137
- (void)_stopIdleTimer;	// IMP=0x001000000000b089
- (void)_resetIdleTimer;	// IMP=0x001000000000afb5
- (void)_idleTimerFired:(id)arg1;	// IMP=0x001000000000ae89
- (void)_startIdleTimer;	// IMP=0x001000000000ad31
- (void)_tearDownLibraryDidChangeNotifications;	// IMP=0x001000000000ac61
- (void)_updateSpotlightIndexForNotification:(id)arg1;	// IMP=0x001000000000abbc
- (void)_updateSiriIndexForNotification:(id)arg1;	// IMP=0x001000000000aae7
- (void)_handleLibraryDidChangeNotification:(id)arg1;	// IMP=0x001000000000aa92
- (void)_registerForLibraryDidChangeNotifications;	// IMP=0x001000000000a9b4
- (void)_writeDiagnosticToDisk:(id)arg1;	// IMP=0x001000000000a7d2
- (void)_performDiagnosticWithReason:(id)arg1;	// IMP=0x001000000000a65d
- (void)_handleDebugSignal;	// IMP=0x001000000000a5da
- (void)_tearDownSignalHandler;	// IMP=0x001000000000a5c9
- (void)_setupSignalHandler;	// IMP=0x001000000000a4bf
- (id)_clientForConnection:(id)arg1;	// IMP=0x001000000000a396
- (id)_currentXPCClient;	// IMP=0x001000000000a317
- (void)_handleXPCDisconnect:(id)arg1;	// IMP=0x001000000000a236
- (id)_deviceSharedLibraryPath;	// IMP=0x001000000000a1da
- (id)_allMediaLibraries;	// IMP=0x001000000000a121
- (id)_mediaLibraryForPath:(id)arg1;	// IMP=0x0010000000009f95
- (long long)_MLDSupportedServiceForXPCListener:(id)arg1;	// IMP=0x0010000000009f09
- (id)_XPCListenerForService:(long long)arg1;	// IMP=0x0010000000009e45
- (void)_setupCacheDeleteController;	// IMP=0x0010000000009dd0
- (void)_setupActivityHandlers;	// IMP=0x0010000000009cfc
- (void);	// IMP=0x0010000000009cf6
- (void)_logPrivacyAccessWithTransactionIdentifier:(id)arg1;	// IMP=0x0010000000009c6b
- (void)_reconnectLibraries:(id)arg1;	// IMP=0x00100000000099b2
- (void)_disconnectLibraries:(id)arg1;	// IMP=0x00100000000096d5
@property(nonatomic) long long currentLockReason; // @synthesize currentLockReason=_currentLockReason;
@property(nonatomic, getter=isDatabaseLocked) _Bool databaseLocked; // @synthesize databaseLocked=_databaseLocked;
- (void)start;	// IMP=0x0010000000009427
- (void)collectDiagnostic:(id)arg1;	// IMP=0x0010000000009345
- (void)mediaLibraryWriter:(id)arg1 terminatedTransaction:(id)arg2 withError:(id)arg3;	// IMP=0x0010000000009231
- (void)library:(id)arg1 didRollbackDatabaseTransactionWithConnection:(id)arg2;	// IMP=0x001000000000921c
- (void)library:(id)arg1 didCommitDatabaseTransactionWithConnection:(id)arg2;	// IMP=0x0010000000009207
- (void)library:(id)arg1 didBeginDatabaseTransactionWithConnection:(id)arg2;	// IMP=0x0010000000009123
- (_Bool)_shouldAcceptConnectionForMediaLibraryService:(id)arg1;	// IMP=0x0010000000008db1
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000008b82
- (void)getClientImportServiceListenerEndpointWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008a26
- (void)getMediaLibraryResourcesServiceListenerEndpointWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000088ca
- (void)performMaintenanceTasksForDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000087cc
- (void)updateSiriIndexMetadataForAllLibrariesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000833a
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007cc3
- (void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007ca9
- (void)getLanguageResourcesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007a33
- (void)unlockDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000079a8
- (void)lockDatabaseForReason:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000789d
- (void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007786
- (void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withUUID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000743d
- (void)setOptions:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000007301
- (void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006cf6
- (_Bool)endTransaction:(id)arg1 shouldCommit:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000006bbd
- (void)endTransaction:(id)arg1 shouldCommit:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006a53
- (void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000066ee
- (void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006433
- (id)beginTransactionForDatabaseWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000006281
- (void)beginTransactionForDatabaseWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005c3f
- (void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000059ff
- (void)performDiagnosticWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000005847
- (void)checkIntegrityOfDatabaseAtPath:(id)arg1 repairFaults:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000551b
- (void)attemptDatabaseFileRecoveryAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005261
- (void)validateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000050a0
- (void)dealloc;	// IMP=0x0010000000004ffa
- (id)_stateDump;	// IMP=0x0010000000004f80
- (id)_init;	// IMP=0x0010000000004ca9
- (id)init;	// IMP=0x0010000000004c67

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

