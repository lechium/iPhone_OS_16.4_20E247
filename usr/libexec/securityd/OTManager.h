//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKKSAccountStateTracker, CKKSCloudKitClassDependencies, CKKSLockStateTracker, CKKSNearFutureScheduler, CKKSReachabilityTracker, CKKSViewManager, NSMutableDictionary, NSString, NSXPCListener, OTRamp;
@protocol NSXPCProxyCreating, OS_dispatch_queue, OTAccountsAdapter, OTAuthKitAdapter, OTDeviceInformationAdapter, OTPersonaAdapter, OTSOSAdapter, OTTooManyPeersAdapter, OctagonFollowUpControllerProtocol;

@interface OTManager : NSObject
{
    _Bool _sosEnabledForPlatform;	// 8 = 0x8
    id <NSXPCProxyCreating> _cuttlefishXPCConnection;	// 16 = 0x10
    id <OTSOSAdapter> _sosAdapter;	// 24 = 0x18
    id <OTAuthKitAdapter> _authKitAdapter;	// 32 = 0x20
    id <OTDeviceInformationAdapter> _deviceInformationAdapter;	// 40 = 0x28
    CKKSLockStateTracker *_lockStateTracker;	// 48 = 0x30
    CKKSAccountStateTracker *_accountStateTracker;	// 56 = 0x38
    CKKSReachabilityTracker *_reachabilityTracker;	// 64 = 0x40
    CKContainer *_cloudKitContainer;	// 72 = 0x48
    CKKSViewManager *_viewManager;	// 80 = 0x50
    NSXPCListener *_listener;	// 88 = 0x58
    OTRamp *_gbmidRamp;	// 96 = 0x60
    OTRamp *_gbserialRamp;	// 104 = 0x68
    OTRamp *_gbAgeRamp;	// 112 = 0x70
    id <OctagonFollowUpControllerProtocol> _cdpd;	// 120 = 0x78
    NSMutableDictionary *_contexts;	// 128 = 0x80
    NSMutableDictionary *_clients;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_queue;	// 144 = 0x90
    id <OTAccountsAdapter> _accountsAdapter;	// 152 = 0x98
    id <OTTooManyPeersAdapter> _tooManyPeersAdapter;	// 160 = 0xa0
    id <OTPersonaAdapter> _personaAdapter;	// 168 = 0xa8
    Class _apsConnectionClass;	// 176 = 0xb0
    Class _escrowRequestClass;	// 184 = 0xb8
    Class _notifierClass;	// 192 = 0xc0
    Class _loggerClass;	// 200 = 0xc8
    CKKSNearFutureScheduler *_savedTLKNotifier;	// 208 = 0xd0
    CKKSCloudKitClassDependencies *_cloudKitClassDependencies;	// 216 = 0xd8
}

+ (id)makeCKContainer:(id)arg1;	// IMP=0x002000000005bd86
+ (id)resetManager:(_Bool)arg1 to:(id)arg2;	// IMP=0x001000000005bc9f
+ (id)manager;	// IMP=0x001000000005bc01
- (void).cxx_destruct;	// IMP=0x00200000000561db
@property(readonly) CKKSCloudKitClassDependencies *cloudKitClassDependencies; // @synthesize cloudKitClassDependencies=_cloudKitClassDependencies;
@property(retain) CKKSNearFutureScheduler *savedTLKNotifier; // @synthesize savedTLKNotifier=_savedTLKNotifier;
@property(nonatomic) _Bool sosEnabledForPlatform; // @synthesize sosEnabledForPlatform=_sosEnabledForPlatform;
@property(readonly) Class loggerClass; // @synthesize loggerClass=_loggerClass;
@property(readonly) Class notifierClass; // @synthesize notifierClass=_notifierClass;
@property(readonly) Class escrowRequestClass; // @synthesize escrowRequestClass=_escrowRequestClass;
@property(readonly) Class apsConnectionClass; // @synthesize apsConnectionClass=_apsConnectionClass;
@property(readonly) id <OTPersonaAdapter> personaAdapter; // @synthesize personaAdapter=_personaAdapter;
@property(readonly) id <OTTooManyPeersAdapter> tooManyPeersAdapter; // @synthesize tooManyPeersAdapter=_tooManyPeersAdapter;
@property(readonly) id <OTAccountsAdapter> accountsAdapter; // @synthesize accountsAdapter=_accountsAdapter;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSMutableDictionary *clients; // @synthesize clients=_clients;
@property(retain) NSMutableDictionary *contexts; // @synthesize contexts=_contexts;
@property(retain, nonatomic) id <OctagonFollowUpControllerProtocol> cdpd; // @synthesize cdpd=_cdpd;
@property(retain, nonatomic) OTRamp *gbAgeRamp; // @synthesize gbAgeRamp=_gbAgeRamp;
@property(retain, nonatomic) OTRamp *gbserialRamp; // @synthesize gbserialRamp=_gbserialRamp;
@property(retain, nonatomic) OTRamp *gbmidRamp; // @synthesize gbmidRamp=_gbmidRamp;
@property(retain) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain) CKKSViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(readonly) CKContainer *cloudKitContainer; // @synthesize cloudKitContainer=_cloudKitContainer;
@property(retain) CKKSReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain) CKKSAccountStateTracker *accountStateTracker; // @synthesize accountStateTracker=_accountStateTracker;
@property(retain, nonatomic) CKKSLockStateTracker *lockStateTracker; // @synthesize lockStateTracker=_lockStateTracker;
@property(readonly) id <OTDeviceInformationAdapter> deviceInformationAdapter; // @synthesize deviceInformationAdapter=_deviceInformationAdapter;
@property(readonly) id <OTAuthKitAdapter> authKitAdapter; // @synthesize authKitAdapter=_authKitAdapter;
@property(readonly) id <OTSOSAdapter> sosAdapter; // @synthesize sosAdapter=_sosAdapter;
- (void)getAccountMetadata:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000055dee
- (void)preflightRecoverOctagonUsingRecoveryKey:(id)arg1 recoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000055c78
- (void)setMachineIDOverride:(id)arg1 machineID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000055b12
- (void)removeRecoveryKey:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000005598d
- (void)recoverWithRecoveryKey:(id)arg1 recoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000557d5
- (void)isRecoveryKeySet:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000055689
- (void)deliverAKDeviceListDelta:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000555fd
- (void)tlkRecoverabilityForEscrowRecordData:(id)arg1 recordData:(id)arg2 source:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005547f
- (void)fetchAccountWideSettingsWithForceFetch:(_Bool)arg1 arguments:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005532c
- (void)fetchAccountSettings:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000551e0
- (void)setAccountSetting:(id)arg1 setting:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005506c
- (void)fetchTrustedSecureElementIdentities:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054f20
- (void)removeLocalSecureElementIdentityPeerID:(id)arg1 secureElementIdentityPeerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000054dac
- (void)setLocalSecureElementIdentity:(id)arg1 secureElementIdentity:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000054c38
- (void)resetAccountCDPContents:(id)arg1 idmsTargetContext:(id)arg2 idmsCuttlefishPassword:(id)arg3 notifyIdMS:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000054a47
- (void)fetchUserControllableViewsSyncStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000548c0
- (void)setUserControllableViewsSyncStatus:(id)arg1 enabled:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005472f
- (void)invalidateEscrowCache:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054540
- (void)fetchEscrowRecords:(id)arg1 source:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000054347
- (void)setCDPEnabled:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000054161
- (void)getCDPStatus:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053f7a
- (void)refetchCKKSPolicy:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053d6e
- (void)tapToRadar:(id)arg1 description:(id)arg2 radar:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000053ca5
- (void)postCDPFollowupResult:(id)arg1 success:(_Bool)arg2 type:(id)arg3 error:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000053a8b
- (void)waitForPriorityViewKeychainDataRecovery:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000005387f
- (void)waitForOctagonUpgrade:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053673
- (_Bool)allContextsPause:(unsigned long long)arg1;	// IMP=0x001000000005339c
- (void)allContextsDisablePendingFlags;	// IMP=0x00100000000531fc
- (void)allContextsHalt;	// IMP=0x0010000000053007
- (void)setSOSEnabledForPlatformFlag:(_Bool)arg1;	// IMP=0x0010000000052ff5
- (void)healthCheck:(id)arg1 skipRateLimitingCheck:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052e04
- (void)xpc24HrNotification;	// IMP=0x0010000000052d61
- (void)removeInheritanceKey:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000528ec
- (void)preflightJoinWithInheritanceKey:(id)arg1 inheritanceKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052585
- (void)joinWithInheritanceKey:(id)arg1 inheritanceKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005221e
- (void)storeInheritanceKey:(id)arg1 ik:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051e2f
- (void)generateInheritanceKey:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051a3c
- (void)createInheritanceKey:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000051649
- (void)removeCustodianRecoveryKey:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000511d4
- (void)preflightJoinWithCustodianRecoveryKey:(id)arg1 custodianRecoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000050ea5
- (void)joinWithCustodianRecoveryKey:(id)arg1 custodianRecoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000050b76
- (void)createCustodianRecoveryKey:(id)arg1 uuid:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000050783
- (void)joinWithRecoveryKey:(id)arg1 recoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000050337
- (void)createRecoveryKey:(id)arg1 recoveryKey:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004fdf7
- (_Bool)isFullPeer;	// IMP=0x001000000004fc9a
- (id)cdpContextTypes;	// IMP=0x001000000004fc6a
- (void)setupAnalytics;	// IMP=0x001000000004faca
- (_Bool)ghostbustByAgeEnabled;	// IMP=0x001000000004fa74
- (_Bool)ghostbustBySerialEnabled;	// IMP=0x001000000004fa1e
- (_Bool)ghostbustByMidEnabled;	// IMP=0x001000000004f9c8
- (void)restoreFromBottle:(id)arg1 entropy:(id)arg2 bottleID:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004f6cb
- (void)rpcVoucherWithArguments:(id)arg1 configuration:(id)arg2 peerID:(id)arg3 permanentInfo:(id)arg4 permanentInfoSig:(id)arg5 stableInfo:(id)arg6 stableInfoSig:(id)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x001000000004f250
- (void)rpcEpochWithArguments:(id)arg1 configuration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004ee83
- (void)rpcJoinWithArguments:(id)arg1 configuration:(id)arg2 vouchData:(id)arg3 vouchSig:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000004eaea
- (void)rpcPrepareIdentityAsApplicantWithArguments:(id)arg1 configuration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004e780
- (void)fetchEscrowContents:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004e55c
- (void)fetchAllViableBottles:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004e338
- (void)peerDeviceNamesByPeerID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004e1ec
- (void)removeFriendsInClique:(id)arg1 peerIDs:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004df93
- (void)leaveClique:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004dd65
- (void)establish:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004db0f
- (void)resetAndEstablish:(id)arg1 resetReason:(long long)arg2 idmsTargetContext:(id)arg3 idmsCuttlefishPassword:(id)arg4 notifyIdMS:(_Bool)arg5 accountSettings:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x001000000004d86b
- (void)resetAndEstablish:(id)arg1 resetReason:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004d842
- (void)startOctagonStateMachine:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004d6be
- (void)status:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004d51f
- (void)fetchCliqueStatus:(id)arg1 configuration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004d332
- (void)fetchTrustStatus:(id)arg1 configuration:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004d126
- (void)fetchEgoPeerID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004cf51
- (void)clearAllContexts;	// IMP=0x001000000004ceb7
- (id)ckksForClientRPC:(id)arg1 createIfMissing:(_Bool)arg2 allowNonPrimaryAccounts:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000004cbd0
- (id)contextForClientRPC:(id)arg1 createIfMissing:(_Bool)arg2 allowNonPrimaryAccounts:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000004c6a3
- (id)contextForClientRPCWithActiveAccount:(id)arg1 createIfMissing:(_Bool)arg2 allowNonPrimaryAccounts:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000004c32d
- (id)contextForClientRPC:(id)arg1 createIfMissing:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000004c15a
- (id)contextForClientRPC:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004c140
- (id)contextForContainerName:(id)arg1 contextID:(id)arg2;	// IMP=0x001000000004c12b
- (id)contextForContainerName:(id)arg1 contextID:(id)arg2 possibleAccount:(id)arg3;	// IMP=0x001000000004bfbb
- (id)contextForContainerName:(id)arg1 contextID:(id)arg2 possibleAccount:(id)arg3 createIfMissing:(_Bool)arg4 sosAdapter:(id)arg5 accountsAdapter:(id)arg6 authKitAdapter:(id)arg7 tooManyPeersAdapter:(id)arg8 lockStateTracker:(id)arg9 deviceInformationAdapter:(id)arg10;	// IMP=0x001000000004bca3
- (id)contextForContainerName:(id)arg1 contextID:(id)arg2 sosAdapter:(id)arg3 accountsAdapter:(id)arg4 authKitAdapter:(id)arg5 tooManyPeersAdapter:(id)arg6 lockStateTracker:(id)arg7 deviceInformationAdapter:(id)arg8;	// IMP=0x001000000004bc64
- (void)cancelPendingOperations;	// IMP=0x001000000004bc27
- (void)dropAllActors;	// IMP=0x001000000004bc15
- (void)haltAll;	// IMP=0x001000000004bc03
- (id)restartCKKSAccountSyncWithoutSettingPolicy:(id)arg1;	// IMP=0x001000000004ba11
- (id)restartCKKSAccountSyncWithoutSettingPolicyForContext:(id)arg1;	// IMP=0x001000000004b7a9
- (id)ckksAccountSyncForContainer:(id)arg1 contextID:(id)arg2 possibleAccount:(id)arg3;	// IMP=0x001000000004b6f6
- (void)removeContextForContainerName:(id)arg1 contextID:(id)arg2;	// IMP=0x001000000004b619
- (void)removeClientContextForContainerName:(id)arg1 clientName:(id)arg2;	// IMP=0x001000000004b51b
- (id)clientStateMachineForContainerName:(id)arg1 contextID:(id)arg2 clientName:(id)arg3;	// IMP=0x001000000004b364
@property(retain) id <NSXPCProxyCreating> cuttlefishXPCConnection; // @synthesize cuttlefishXPCConnection=_cuttlefishXPCConnection;
- (void)notifyIDMSTrustLevelChangeForAltDSID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000004a02c
- (void)appleAccountSignedOut:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049d04
- (void)appleAccountSignedIn:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000049a34
- (void)ensureRampsInitialized;	// IMP=0x00100000000496df
- (void)registerForCircleChangedNotifications;	// IMP=0x00100000000495d7
- (void)moveToCheckTrustedStateForArguments:(id)arg1;	// IMP=0x00100000000494d4
- (_Bool)waitForReady:(id)arg1 wait:(long long)arg2;	// IMP=0x00100000000493d8
- (void)initializeOctagon;	// IMP=0x0010000000048fb2
- (id)initWithSOSAdapter:(id)arg1 lockStateTracker:(id)arg2 personaAdapter:(id)arg3 cloudKitClassDependencies:(id)arg4;	// IMP=0x0010000000048c2d
- (id)initWithSOSAdapter:(id)arg1 accountsAdapter:(id)arg2 authKitAdapter:(id)arg3 tooManyPeersAdapter:(id)arg4 deviceInformationAdapter:(id)arg5 personaAdapter:(id)arg6 apsConnectionClass:(Class)arg7 escrowRequestClass:(Class)arg8 notifierClass:(Class)arg9 loggerClass:(Class)arg10 lockStateTracker:(id)arg11 reachabilityTracker:(id)arg12 cloudKitClassDependencies:(id)arg13 cuttlefishXPCConnection:(id)arg14 cdpd:(id)arg15;	// IMP=0x0010000000048732
- (id)init;	// IMP=0x001000000004851b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

