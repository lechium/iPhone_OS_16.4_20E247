//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSConnectivityMonitor, IDSNRDeviceBridge, IDSNRDevicePreferencesHandler, IMTimer, NSDictionary, NSHashTable, NSMutableDictionary, NSSet, NSString;
@protocol IDSUTunDeliveryControllerDelegate, OS_dispatch_queue;

@interface IDSUTunDeliveryController : NSObject
{
    struct _opaque_pthread_mutex_t _deviceIDToPeerLock;	// 8 = 0x8
    NSMutableDictionary *_deviceIDToPeer;	// 72 = 0x48
    NSMutableDictionary *_btuuidToSessionID;	// 80 = 0x50
    struct _opaque_pthread_mutex_t _streamIDToTopicLock;	// 88 = 0x58
    NSMutableDictionary *_streamIDToTopic;	// 152 = 0x98
    unsigned int _messageID;	// 160 = 0xa0
    double _lastConnectedTime;	// 168 = 0xa8
    double _lastIsNearbyBecameTrue;	// 176 = 0xb0
    id <IDSUTunDeliveryControllerDelegate> _delegate;	// 184 = 0xb8
    _Bool _isLinkForDefaultPeerConnected;	// 192 = 0xc0
    NSHashTable *_connectivityDelegates;	// 200 = 0xc8
    struct _opaque_pthread_mutex_t _trafficClassLock;	// 208 = 0xd0
    NSSet *_allowedTrafficClasses;	// 272 = 0x110
    _Bool _enableOTR;	// 280 = 0x118
    IMTimer *_otrTimer;	// 288 = 0x120
    _Bool _otrInitialized;	// 296 = 0x128
    _Bool _localAccountSetupCompleted;	// 297 = 0x129
    _Bool _defaultPeerConnectedDeferred;	// 298 = 0x12a
    struct _opaque_pthread_mutex_t _continuityPeerLock;	// 304 = 0x130
    NSMutableDictionary *_lockedPeerMap;	// 368 = 0x170
    NSMutableDictionary *_peerListMap;	// 376 = 0x178
    NSMutableDictionary *_pendingPeerMap;	// 384 = 0x180
    NSMutableDictionary *_peerConnectBlocksMap;	// 392 = 0x188
    NSMutableDictionary *_peerFailureBlocksMap;	// 400 = 0x190
    double _lastCloudConnectedTime;	// 408 = 0x198
    NSObject<OS_dispatch_queue> *_broadcastQueue;	// 416 = 0x1a0
    _Bool _isConnected;	// 424 = 0x1a8
    _Bool _isCloudConnected;	// 425 = 0x1a9
    _Bool _isClassCConnected;	// 426 = 0x1aa
    _Bool _shouldUseIPsecLinkForDefaultPairedDevice;	// 427 = 0x1ab
    _Bool _isLocalSetUpInProgress;	// 428 = 0x1ac
    IDSNRDeviceBridge *_idsNRDeviceBridge;	// 432 = 0x1b0
    IDSNRDevicePreferencesHandler *_nrDevicePreferencesHandler;	// 440 = 0x1b8
    IDSConnectivityMonitor *_connectivityMonitor;	// 448 = 0x1c0
    double _notificationDelayInSeconds;	// 456 = 0x1c8
}

+ (id)sharedInstance;	// IMP=0x00200000002f11f0
- (void).cxx_destruct;	// IMP=0x002000000030acb0
@property(nonatomic) _Bool isLocalSetUpInProgress; // @synthesize isLocalSetUpInProgress=_isLocalSetUpInProgress;
@property(nonatomic) double notificationDelayInSeconds; // @synthesize notificationDelayInSeconds=_notificationDelayInSeconds;
@property(retain, nonatomic) IDSConnectivityMonitor *connectivityMonitor; // @synthesize connectivityMonitor=_connectivityMonitor;
@property(retain, nonatomic) IDSNRDevicePreferencesHandler *nrDevicePreferencesHandler; // @synthesize nrDevicePreferencesHandler=_nrDevicePreferencesHandler;
@property(retain, nonatomic) IDSNRDeviceBridge *idsNRDeviceBridge; // @synthesize idsNRDeviceBridge=_idsNRDeviceBridge;
@property(nonatomic) _Bool shouldUseIPsecLinkForDefaultPairedDevice; // @synthesize shouldUseIPsecLinkForDefaultPairedDevice=_shouldUseIPsecLinkForDefaultPairedDevice;
@property(nonatomic) double lastCloudConnectedTime; // @synthesize lastCloudConnectedTime=_lastCloudConnectedTime;
@property(nonatomic) _Bool isClassCConnected; // @synthesize isClassCConnected=_isClassCConnected;
@property(nonatomic) _Bool isCloudConnected; // @synthesize isCloudConnected=_isCloudConnected;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, nonatomic) _Bool enableOTR; // @synthesize enableOTR=_enableOTR;
@property(nonatomic) __weak id <IDSUTunDeliveryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)rapportClient:(id)arg1 didLoseDevice:(id)arg2;	// IMP=0x001000000030a670
- (void)rapportClient:(id)arg1 didDiscoverDevice:(id)arg2;	// IMP=0x001000000030a330
- (void)enableOTRForDefaultPairedDevice;	// IMP=0x001000000030a050
- (id)_currentOTRTimer;	// IMP=0x001000000030a030
- (id)pairingManager;	// IMP=0x001000000030a000
- (id)sessionIDforPeer:(id)arg1;	// IMP=0x0010000000309f20
- (_Bool)isPeerForPhoneContinuityLocalMessage:(id)arg1;	// IMP=0x0010000000309900
- (void)tryNextContinuityPeer:(id)arg1;	// IMP=0x0010000000308550
- (void)addContinuityPeer:(id)arg1 btUUID:(id)arg2 connectBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000307570
- (id)pendingContinuityPeerID:(id)arg1;	// IMP=0x0010000000307490
- (id)lockedContinuityPeerID:(id)arg1;	// IMP=0x00100000003073b0
- (void)unlockAllContinuityPeers;	// IMP=0x00100000003071b0
- (void)unlockContinuityPeer:(id)arg1;	// IMP=0x0010000000306f20
- (void)lockContinuityPeer:(id)arg1 btUUID:(id)arg2;	// IMP=0x00100000003069d0
- (void)_cleanupContinuityPeerMaps:(id)arg1;	// IMP=0x0010000000306690
- (void)admissionPolicyChangedForTopic:(id)arg1 allowed:(_Bool)arg2;	// IMP=0x0010000000306530
- (void)findDefaultPeerToForceOTRNegotiation:(id)arg1 priority:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000306440
- (void)didUpdatePairedDevice:(id)arg1;	// IMP=0x00100000003060f0
- (void)didRemovePairedDevice:(id)arg1;	// IMP=0x0010000000305e20
- (void)didAddPairedDevice:(id)arg1;	// IMP=0x0010000000305ba0
- (void)_disableOTRForDefaultPairedPeer:(id)arg1;	// IMP=0x0010000000305990
- (void)_enableOTRForDefaultPairedDevice;	// IMP=0x0010000000305720
- (void)_OTREnableTimerFiredOnMain;	// IMP=0x0010000000305650
- (void)_setOTREnableTimer;	// IMP=0x0010000000305430
- (void)nrDeviceBridge:(id)arg1 defaultPeerClassCConnectivityDidChange:(_Bool)arg2;	// IMP=0x00100000003053c0
- (void)nrDeviceBridge:(id)arg1 linkType:(unsigned char)arg2;	// IMP=0x0010000000305360
- (void)nrDeviceBridge:(id)arg1 deviceMagnetIndicationOfAwakeStateDidChange:(_Bool)arg2;	// IMP=0x00100000003052f0
- (void)nrDeviceBridge:(id)arg1 defaultPeerCloudConnectivityDidChange:(_Bool)arg2;	// IMP=0x0010000000305280
- (void)nrDeviceBridge:(id)arg1 defaultPeerNearbyDidChange:(_Bool)arg2;	// IMP=0x0010000000304c20
- (void)nrDeviceBridge:(id)arg1 defaultPeerConnectivityDidChange:(_Bool)arg2;	// IMP=0x0010000000304bb0
@property(readonly, nonatomic) _Bool isTerminusConnectedOverBluetooth;
@property(readonly, nonatomic) _Bool isTerminusRegistered;
@property(readonly, nonatomic) _Bool isTerminusNearby;
@property(readonly, nonatomic) _Bool isTerminusConnected;
- (void)_setCloudConnectionConnected:(_Bool)arg1 forPeer:(id)arg2;	// IMP=0x00100000003044b0
- (void)peerCloudConnectivityChanged:(id)arg1 isCloudConnected:(_Bool)arg2;	// IMP=0x0010000000304070
- (void)defaultPeerDropDisallowedMessages;	// IMP=0x0010000000303e70
- (void)defaultPeerUnpairStart;	// IMP=0x0010000000303c60
- (void)defaultPeerSupportsDirectMessaging:(_Bool)arg1 isObliterating:(_Bool)arg2;	// IMP=0x0010000000303970
- (void)defaultPeerSetWantsQuickRelayRequest:(_Bool)arg1;	// IMP=0x00100000003035e0
- (void)defaultPeerSetLinkPreferences:(id)arg1;	// IMP=0x00100000003029d0
- (void)defaultPeerSetPreferInfraWiFi:(_Bool)arg1 services:(id)arg2;	// IMP=0x0010000000302480
- (void)defaultPeerClassCConnectivityDidChange:(_Bool)arg1;	// IMP=0x0010000000302220
- (void)defaultPeerMagnetIndicationOfAwakeStateChanged:(_Bool)arg1;	// IMP=0x0010000000301fe0
- (void)legacyUTunBTLinkManagerDefaultPeerCloudConnectivityChanged:(_Bool)arg1;	// IMP=0x0010000000301ea0
- (void)defaultPeerCloudConnectivityChanged:(_Bool)arg1;	// IMP=0x0010000000301c10
- (void)legacyUTunBTLinkManagerDefaultPeerNearbyChanged:(_Bool)arg1;	// IMP=0x0010000000301ad0
- (void)defaultPeerLinkTypeChanged:(unsigned char)arg1;	// IMP=0x0010000000301850
- (void)defaultPeerNearbyChanged:(_Bool)arg1;	// IMP=0x0010000000301520
- (void)legacyUTunBTLinkManagerDefaultPeerConnectivityChanged:(_Bool)arg1;	// IMP=0x00100000003013e0
- (void)defaultPeerConnectivityChanged:(_Bool)arg1;	// IMP=0x0010000000300cd0
- (void)peerHasSpaceForUrgentMessages:(id)arg1 dataProtectionClass:(unsigned int)arg2 withTypes:(id)arg3;	// IMP=0x0010000000300860
- (void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x0010000000300360
- (void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 withTypes:(id)arg4;	// IMP=0x00100000002ffe20
- (void)peerCloudConnectivityChanged:(id)arg1;	// IMP=0x00100000002ff700
- (void)peerConnectivityChanged:(id)arg1;	// IMP=0x00100000002fe790
- (void)peerNearbyStateChanged:(id)arg1 forceNotify:(_Bool)arg2;	// IMP=0x00100000002fdbf0
- (void)peer:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 fromID:(id)arg3 messageID:(id)arg4 peerResponseIdentifier:(id)arg5 priority:(long long)arg6 connectionType:(long long)arg7;	// IMP=0x00100000002fd9d0
- (void)peer:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13 didWakeHint:(_Bool)arg14;	// IMP=0x00100000002fd4e0
- (void)peer:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13 didWakeHint:(_Bool)arg14;	// IMP=0x00100000002fd0f0
- (void)peer:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13 didWakeHint:(_Bool)arg14;	// IMP=0x00100000002fcd00
- (id)_deviceIDForPeer:(id)arg1;	// IMP=0x00100000002fca10
- (void)removeConnectivityDelegate:(id)arg1;	// IMP=0x00100000002fc990
- (void)addConnectivityDelegate:(id)arg1;	// IMP=0x00100000002fc8c0
- (void)addUTunPeerWithDeviceUniqueID:(id)arg1 btuuid:(id)arg2;	// IMP=0x00100000002fc1b0
- (void)removeUTunPeerWithDeviceUniqueID:(id)arg1 btuuid:(id)arg2 reason:(long long)arg3 shouldWait:(_Bool)arg4;	// IMP=0x00100000002fc060
- (void)removeUTunPeerWithSessionID:(id)arg1 reason:(long long)arg2 shouldWait:(_Bool)arg3;	// IMP=0x00100000002fbca0
- (void)systemScreenDidPowerDown;	// IMP=0x00100000002fb9b0
@property(retain, nonatomic) NSSet *allowedTrafficClasses; // @synthesize allowedTrafficClasses=_allowedTrafficClasses;
@property(readonly) NSDictionary *queuedIncomingMessageDictionary;
@property(readonly) NSDictionary *sendingMessageStatistics;
@property(readonly) NSDictionary *urgentCloudPriorityMessageStatistics;
@property(readonly) NSDictionary *urgentPriorityMessageStatistics;
@property(readonly) NSDictionary *defaultPriorityMessageStatistics;
@property(readonly) NSDictionary *syncPriorityMessageStatistics;
- (void)setTopics:(id)arg1;	// IMP=0x00100000002fad00
- (_Bool)hasSpaceForCloudMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned int)arg2;	// IMP=0x00100000002fac40
- (_Bool)hasSpaceForMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned int)arg2;	// IMP=0x00100000002fab80
- (void)enableCloudConnectionForDefaultPairedDevice:(_Bool)arg1;	// IMP=0x00100000002fa760
- (void)enableConnectionForDefaultPairedDevice:(_Bool)arg1;	// IMP=0x00100000002fa340
- (void)localAccountSetupCompleted;	// IMP=0x00100000002f9f10
@property(readonly, nonatomic) _Bool defaultPeerIsCloudConnected;
@property(readonly, nonatomic) _Bool defaultPeerIsNearby;
@property(readonly, nonatomic) _Bool defaultPeerIsConnected;
// Error: Property attributes should begin with the type ('T') attribute, property name: isPresent
// Property attributes: (null)

- (id)topicForStreamID:(unsigned short)arg1;	// IMP=0x00100000002f9ce0
- (void)kickProgressBlockForMessageID:(id)arg1;	// IMP=0x00100000002f9a80
- (void)cancelMessageID:(id)arg1;	// IMP=0x00100000002f95f0
- (void)sendData:(id)arg1 service:(id)arg2 protobuf:(id)arg3 resourcePath:(id)arg4 resourceMetadata:(id)arg5 priority:(long long)arg6 dataProtectionClass:(unsigned int)arg7 nonWaking:(_Bool)arg8 nonCloudWaking:(_Bool)arg9 requireBluetooth:(_Bool)arg10 requireLocalWiFi:(_Bool)arg11 queueOneIdentifier:(id)arg12 expirationDate:(id)arg13 enforceRemoteTimeouts:(_Bool)arg14 expectsPeerResponse:(_Bool)arg15 wantsAppAck:(_Bool)arg16 compressPayload:(_Bool)arg17 compressed:(_Bool)arg18 peerResponseIdentifier:(id)arg19 messageID:(id)arg20 topic:(id)arg21 awdTopic:(id)arg22 command:(id)arg23 fromID:(id)arg24 uriToDeviceID:(id)arg25 localDeviceDestinationDeviceUUID:(id)arg26 bypassDuet:(_Bool)arg27 duetIdentifiersOverride:(id)arg28 messageType:(long long)arg29 fallbackBlock:(CDUnknownBlockType)arg30 progressBlock:(CDUnknownBlockType)arg31 completionBlock:(CDUnknownBlockType)arg32;	// IMP=0x00100000002f53b0
- (id)_createPeerFromDeviceInfo:(id)arg1;	// IMP=0x00100000002f46b0
- (id)_createPeerFromDeviceID:(id)arg1;	// IMP=0x00100000002f45e0
- (void)_removePeerFromDeviceID:(id)arg1;	// IMP=0x00000000002f4560
- (void)setPendingCloudFlagOnDefaultPeer;	// IMP=0x00100000002f4500
- (void)ensureLocalSetupInProgressConsistencyAfterQWS;	// IMP=0x00100000002f4370
- (void)updatecloudDeliveryStateOnDefaultPeer;	// IMP=0x00100000002f4130
- (void)prepareForQuickSwitch;	// IMP=0x00100000002f3ef0
- (_Bool)localSetupInProgress;	// IMP=0x00100000002f3e80
- (void)localSetupCompleted;	// IMP=0x00100000002f3c70
- (void)localSetupStarted;	// IMP=0x00100000002f3a60
- (void)_updateLocalSetupInProgressState:(_Bool)arg1;	// IMP=0x00100000002f3930
- (void)deviceWithUniqueID:(id)arg1 updatedUUID:(id)arg2;	// IMP=0x00100000002f2fa0
- (void)setDeviceUniqueIDToCBUUID:(id)arg1;	// IMP=0x00100000002f2c90
- (id)hashForString:(id)arg1;	// IMP=0x00100000002f2b20
- (id)_copyPairedDevice;	// IMP=0x00100000002f2ae0
- (id)_copyPeerWithID:(id)arg1;	// IMP=0x00100000002f2a30
- (id)copyPeerWithID:(id)arg1;	// IMP=0x00100000002f29d0
- (unsigned int)_nextMessageID;	// IMP=0x00100000002f29b0
- (void)_refreshIPsecStatus;	// IMP=0x00100000002f28e0
- (void)_removeDevicePreferencesHandler;	// IMP=0x00100000002f2840
- (void)stopIdsNRDeviceBridgeAndPreferenceHandler;	// IMP=0x00100000002f2800
- (void)startIdsNRDeviceBridgeAndPreferenceHandlerWithIdentifier:(id)arg1;	// IMP=0x00100000002f23e0
- (id)_pairedDeviceUUID;	// IMP=0x00100000002f1ed0
- (void)dealloc;	// IMP=0x00100000002f1d60
- (id)init;	// IMP=0x00100000002f1ce0
- (id)initWithBroadcastQueue:(id)arg1;	// IMP=0x00100000002f12b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
