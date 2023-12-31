//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACXDeviceConnection, NSMutableDictionary, NSString, PSYSyncCoordinator;

@interface TCCDMainSyncController
{
    _Bool _waitingForACXResync;	// 8 = 0x8
    Class _psySyncCoordinatorClass;	// 16 = 0x10
    Class _acxDeviceConnectionClass;	// 24 = 0x18
    PSYSyncCoordinator *_syncCoordinator;	// 32 = 0x20
    ACXDeviceConnection *_acxDeviceConnection;	// 40 = 0x28
    NSMutableDictionary *_perDeviceReplicaIdentiferToWatchAppInfo;	// 48 = 0x30
    NSMutableDictionary *_perDeviceMainIdentiferToReplicaIdentifier;	// 56 = 0x38
    CDUnknownBlockType _pendingPostPairingContinuation;	// 64 = 0x40
}

+ (id)currentArchiveVersion;	// IMP=0x0020000000001cb6
+ (id)allowedClassesForWatchKitAppInfoUnarchiving;	// IMP=0x0010000000001bd5
+ (id)sharedSyncController;	// IMP=0x0010000000001b70
- (void).cxx_destruct;	// IMP=0x00200000000080d5
@property _Bool waitingForACXResync; // @synthesize waitingForACXResync=_waitingForACXResync;
@property(copy) CDUnknownBlockType pendingPostPairingContinuation; // @synthesize pendingPostPairingContinuation=_pendingPostPairingContinuation;
@property(retain) NSMutableDictionary *perDeviceMainIdentiferToReplicaIdentifier; // @synthesize perDeviceMainIdentiferToReplicaIdentifier=_perDeviceMainIdentiferToReplicaIdentifier;
@property(retain) NSMutableDictionary *perDeviceReplicaIdentiferToWatchAppInfo; // @synthesize perDeviceReplicaIdentiferToWatchAppInfo=_perDeviceReplicaIdentiferToWatchAppInfo;
@property(retain) ACXDeviceConnection *acxDeviceConnection; // @synthesize acxDeviceConnection=_acxDeviceConnection;
@property(retain) PSYSyncCoordinator *syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property(retain) Class acxDeviceConnectionClass; // @synthesize acxDeviceConnectionClass=_acxDeviceConnectionClass;
@property(retain) Class psySyncCoordinatorClass; // @synthesize psySyncCoordinatorClass=_psySyncCoordinatorClass;
- (void)testMainResetSync;	// IMP=0x0010000000007eab
- (id)_syncStatusDescriptionString;	// IMP=0x0010000000007b39
- (void)applicationDatabaseResyncedForDeviceWithPairingID:(id)arg1;	// IMP=0x00100000000077fb
- (void)applicationsUninstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;	// IMP=0x0010000000007141
- (void)applicationsInstalled:(id)arg1 onDeviceWithPairingID:(id)arg2;	// IMP=0x0010000000006d45
- (void)_updateInstalledWatchKitApps;	// IMP=0x0010000000006d31
- (void)_updateInstalledWatchKitAppsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006ae7
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;	// IMP=0x0010000000006aa1
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x0010000000006625
- (void)syncOverrideUpdateForServiceIdentifier:(id)arg1 updateType:(unsigned long long)arg2;	// IMP=0x001000000000656d
- (void)syncAccessUpdateForServiceIdentifier:(id)arg1 clientIdentifier:(id)arg2 clientType:(int)arg3 accessStatus:(unsigned long long)arg4 authorizationVersion:(unsigned long long)arg5 updateType:(unsigned long long)arg6;	// IMP=0x001000000000645f
- (void)registerMainClientIdentifier:(id)arg1 forReplicaClientIdentifier:(id)arg2;	// IMP=0x00100000000060ea
- (id)mainClientIdentifierForReplicaClientIdentifier:(id)arg1;	// IMP=0x0010000000005ea3
- (id)replicaClientIdentifierForMainClientIdentifier:(id)arg1;	// IMP=0x0010000000005be5
- (void)_handleAccessRequestMessageFromReplica:(id)arg1;	// IMP=0x0010000000005b34
- (void)_sendSyncSessionDidFinishWithResult:(unsigned int)arg1 error:(id)arg2;	// IMP=0x0010000000005864
- (void)_failCoordinatorSyncSession:(id)arg1 message:(id)arg2 code:(long long)arg3;	// IMP=0x0010000000005724
- (id)_beginResetSyncHook;	// IMP=0x0010000000005433
- (void)_didUnPairDeviceHook;	// IMP=0x0010000000005331
- (void)_didPairToNewDeviceHookWithContinuation:(CDUnknownBlockType)arg1;	// IMP=0x00100000000051d1
- (void)_handlePairingSession;	// IMP=0x0010000000004e51
- (void)_didReturnToPreviouslyPairedDeviceHookWithContinuation:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004d2c
- (CDUnknownBlockType)_makePendingPostPairingContinuation:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004b70
- (_Bool)_initializeSyncEngineAfterDeviceUnlockHook;	// IMP=0x001000000000492c
- (void)_getInstalledWatchKitAppsWithContinuation:(CDUnknownBlockType)arg1 pairingType:(unsigned int)arg2;	// IMP=0x0010000000003d12
- (void)_gotInstalledWatchKitApps:(id)arg1 continuation:(CDUnknownBlockType)arg2 pairingType:(unsigned int)arg3;	// IMP=0x0010000000003b38
- (id)_changesFromUpdatingPerDeviceInstalledWatchKitApps:(id)arg1 paringType:(unsigned int)arg2;	// IMP=0x0010000000002a6c
- (void)_writeSavedWatchKitAppInfo;	// IMP=0x0010000000002714
- (void)_loadSavedWatchKitAppInfo;	// IMP=0x001000000000223e
- (void)_computeMainIdentifiersFromWatchKitAppInfo;	// IMP=0x0010000000001fee
- (void)_removeWatchKitAppInfoFile;	// IMP=0x0010000000001efc
- (id)_savedWatchKitAppInfoFile;	// IMP=0x0010000000001e6f
- (_Bool)_initializeSyncEngineHook;	// IMP=0x0010000000001db2
- (id)initWithAsyncSyncEngineInitialization;	// IMP=0x0010000000001d68
- (id)init;	// IMP=0x0010000000001cc3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

