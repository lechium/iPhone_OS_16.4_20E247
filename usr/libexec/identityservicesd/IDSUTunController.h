//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDeviceConnectionInfo, IDSLinkManager, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IDSUTunController : NSObject
{
    struct SimpleNSStringToObjectTable _deviceConnectionInfoTableByCbuuid;	// 8 = 0x8
    struct _opaque_pthread_mutex_t _deviceConnectionInfoTableByCbuuidLock;	// 32 = 0x20
    IDSLinkManager *_linkManager;	// 96 = 0x60
    _Bool _logPackets;	// 104 = 0x68
    _Bool _vifShouldReadMultiple;	// 105 = 0x69
    unsigned int _vifMaxPendingPackets;	// 108 = 0x6c
    _Bool _vifUseChannel;	// 112 = 0x70
    _Bool _hasFixedDestination;	// 113 = 0x71
    _Bool _encryptionEnabled;	// 114 = 0x72
    _Bool _controlChannelEncryptionDisabled;	// 115 = 0x73
    struct os_unfair_lock_s _controlChannelVersionCacheLock;	// 116 = 0x74
    NSMutableDictionary *_controlChannelVersionCache;	// 120 = 0x78
    _Bool _isSimulateResetLoopTest;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_ipsecQueue;	// 136 = 0x88
    _Bool _useBTDatagramPipe;	// 144 = 0x90
    _Bool _ignoreUTunChannelWriteSignal;	// 145 = 0x91
    IDSDeviceConnectionInfo *_testDeviceConnectionInfo;	// 152 = 0x98
}

+ (id)sharedInstance;	// IMP=0x00200000005e5c90
- (void).cxx_destruct;	// IMP=0x00200000006225c0
@property(readonly, nonatomic) IDSLinkManager *linkManager; // @synthesize linkManager=_linkManager;
- (void)onTransportThread_StopBTDatagramLinkForDefaultPairedDevice;	// IMP=0x0010000000622560
- (unsigned long long)onTransportThread_SendWithConnectionContext:(id)arg1 packetBuffer:(CDStruct_dc2926a3 *)arg2;	// IMP=0x0010000000622360
- (void)clearStats;	// IMP=0x00100000006220d0
- (void)didUpdatePairedDevice:(id)arg1;	// IMP=0x00100000006219d0
- (void)didRemovePairedDevice:(id)arg1;	// IMP=0x0010000000621990
- (void)didAddPairedDevice:(id)arg1;	// IMP=0x0010000000621930
- (void)link:(id)arg1 hasSpaceAvailable:(_Bool)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x0010000000621890
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00100000006214d0
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x0010000000621440
- (_Bool)link:(id)arg1 didReceivePacket:(CDStruct_dc2926a3 *)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x0010000000620d10
- (void)sendSuspendOTRNegotiationMessage:(id)arg1;	// IMP=0x0010000000620ab0
- (void)sendOTRNegotiationMessage:(id)arg1 negotiationCount:(unsigned int)arg2 negotiationData:(id)arg3;	// IMP=0x0010000000620790
- (void)setLinkPreferences:(id)arg1;	// IMP=0x00100000006205c0
- (void)setPreferInfraWiFi:(_Bool)arg1;	// IMP=0x0010000000620340
- (unsigned long long)totalPacketsReceivedForDevice:(id)arg1 services:(id)arg2;	// IMP=0x001000000061fe30
- (unsigned long long)totalPacketsSentForDevice:(id)arg1 services:(id)arg2;	// IMP=0x001000000061f920
- (id)perServiceDataReceivedForDevice:(id)arg1 services:(id)arg2;	// IMP=0x001000000061f0a0
- (id)perServiceDataSentForDevice:(id)arg1 services:(id)arg2;	// IMP=0x001000000061e820
- (id)perServiceDataTransferredForDevice:(id)arg1 services:(id)arg2;	// IMP=0x001000000061e440
- (id)onTransportThread_PerServiceDataTransferredForDevice:(id)arg1 services:(id)arg2;	// IMP=0x000000000061d960
- (id)copyLinkStatsDict;	// IMP=0x001000000061d6f0
- (void)deletePairedDevice:(id)arg1;	// IMP=0x001000000061d440
- (void)connectPairedDevice:(id)arg1;	// IMP=0x001000000061d190
- (void)addPairedDevice:(id)arg1 shouldPairDirectlyOverIPsec:(_Bool)arg2;	// IMP=0x001000000061ceb0
- (void)addPairedDevice:(id)arg1;	// IMP=0x001000000061ce50
- (void)tearDownEncryptionForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x001000000061cb50
- (void)obliterateConnectionInfoForCBUUID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;	// IMP=0x001000000061c440
- (void)obliterateConnectionInfoWithCompletionBlock:(CDUnknownBlockType)arg1 completionQueue:(id)arg2;	// IMP=0x001000000061c3b0
- (void)obliterateConnectionInfoForCBUUID:(id)arg1;	// IMP=0x001000000061c230
- (void)startLocalSetup;	// IMP=0x001000000061c170
- (void)onTransportThread_requestChildConnectionIDForLinkID:(BOOL)arg1 sessionID:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4;	// IMP=0x001000000061c0b0
- (void)onTransportThread_setClientUniquePID:(unsigned long long)arg1 sessionID:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4;	// IMP=0x001000000061bff0
- (void)onTransportThread_sendConnectedLinkInfoToAVCForSessionID:(id)arg1;	// IMP=0x001000000061bf90
- (void)onTransportThread_updateParticipantType:(unsigned short)arg1 forSessionID:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 sessionStateCounter:(unsigned int)arg5;	// IMP=0x001000000061bec0
- (unsigned long long)onTransportThread_createAliasForParticipantID:(unsigned long long)arg1 salt:(id)arg2 sessionID:(id)arg3 relayGroupID:(id)arg4 relaySessionID:(id)arg5;	// IMP=0x001000000061bdd0
- (unsigned long long)onTransportThread_participantIDForAlias:(unsigned long long)arg1 salt:(id)arg2 sessionID:(id)arg3 relayGroupID:(id)arg4 relaySessionID:(id)arg5;	// IMP=0x001000000061bce0
- (void)onTransportThread_registerPluginForGroup:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 options:(id)arg4;	// IMP=0x001000000061bc00
- (void)onTransportThread_setUPlusOneModeForSessionID:(id)arg1 isUPlusOneEnabled:(_Bool)arg2;	// IMP=0x001000000061bb90
- (void)onTransportThread_updateSessionURIToParticipantIDs:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 sessionInfo:(id)arg4;	// IMP=0x001000000061bab0
- (void)onTransportThread_updateSessionParticipants:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 participants:(id)arg4;	// IMP=0x001000000061b9d0
- (void)onTransportThread_getSessionInfo:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 options:(id)arg4;	// IMP=0x001000000061b8f0
- (void)onTransportThread_setRemoteDeviceVersion:(id)arg1 version:(unsigned int)arg2;	// IMP=0x001000000061b880
- (void)onTransportThread_removeParticipantIDsWithSessionID:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 participantIDs:(id)arg4 sessionStateCounter:(unsigned int)arg5;	// IMP=0x001000000061b7a0
- (void)onTransportThread_manageDesignatedDestinationsWithSessionID:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 destinations:(id)arg4 withType:(unsigned short)arg5 sessionStateCounter:(unsigned int)arg6;	// IMP=0x001000000061b6a0
- (unsigned long long)onTransportThread_getLinkType:(id)arg1;	// IMP=0x001000000061b640
- (void)onTransportThread_sendStatsRequestWithOptions:(id)arg1 options:(id)arg2;	// IMP=0x001000000061b5b0
- (void)onTransportThread_flushLinkProbingStatus:(id)arg1 options:(id)arg2;	// IMP=0x001000000061b520
- (void)onTransportThread_queryLinkProbingStatus:(id)arg1 options:(id)arg2;	// IMP=0x001000000061b490
- (void)onTransportThread_stopLinkProbing:(id)arg1 options:(id)arg2;	// IMP=0x001000000061b400
- (void)onTransportThread_startLinkProbing:(id)arg1 options:(id)arg2;	// IMP=0x001000000061b370
- (void)onTransportThread_CurrentCellularSignalStrength:(id)arg1 signalRaw:(int *)arg2 signalStrength:(int *)arg3 signalGrade:(int *)arg4;	// IMP=0x001000000061b280
- (void)onTransportThread_receiveJoinNotificationFromAParticipant:(id)arg1;	// IMP=0x001000000061b220
- (void)onTransportThread_setWiFiAssistState:(id)arg1 isWiFiAssistEnabled:(_Bool)arg2;	// IMP=0x001000000061b1b0
- (void)onTransportThread_StopKeepAlive:(id)arg1 linkIDs:(id)arg2;	// IMP=0x001000000061b120
- (void)onTransportThread_UpdateProtocolQualityOfService:(id)arg1 linkID:(BOOL)arg2 isGood:(_Bool)arg3;	// IMP=0x001000000061b0a0
- (void)onTransportThread_DropIPPackets:(id)arg1 linkID:(BOOL)arg2 payloadArray:(id)arg3;	// IMP=0x001000000061b000
- (void)onTransportThread_SetPacketNotificationFilter:(id)arg1 linkID:(BOOL)arg2 uniqueTag:(unsigned int)arg3 isEnabled:(_Bool)arg4;	// IMP=0x001000000061af70
- (void)onTransportThread_SetDefaultUnderlyingLink:(id)arg1 linkID:(BOOL)arg2;	// IMP=0x001000000061af00
- (void)onTransportThread_requestMaterialsForSession:(id)arg1 participantIDs:(id)arg2 materialType:(int)arg3;	// IMP=0x001000000061ae60
- (void)onTransportThread_setServerDesiredMaterialsForSession:(id)arg1 materials:(id)arg2 signer:(CDUnknownBlockType)arg3;	// IMP=0x001000000061adb0
- (void)onTransportThread_SendKeyMaterialMessage:(id)arg1 relayGroupID:(id)arg2 keyMaterialMessageData:(id)arg3 destinationURIs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000061aca0
- (void)onTransportThread_SendSKEData:(id)arg1 skeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000061abf0
- (void)getLinkInformationForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000061a9b0
- (void)handleAllocateRequestFailureForDevice:(id)arg1 requestID:(id)arg2 errorCode:(int)arg3;	// IMP=0x001000000061a820
- (void)setTimeBase:(id)arg1 forIDSSession:(id)arg2;	// IMP=0x001000000061a6c0
- (void)setHasPendingAllocation:(_Bool)arg1 forIDSSession:(id)arg2;	// IMP=0x001000000061a590
- (void)setAcceptedRelaySession:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3;	// IMP=0x001000000061a3c0
- (void)disconnectGlobalLinkForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000061a150
- (void)connectGlobalLinkForDevice:(id)arg1 sessionInfo:(id)arg2 connectReadyHandler:(CDUnknownBlockType)arg3 withLocalInterfacePreference:(int)arg4;	// IMP=0x0010000000619e90
- (void)startGlobalLinkForDevice:(id)arg1;	// IMP=0x0010000000619d70
- (unsigned long long)onTransportThread_SendToGlobalLinkWithSessionID:(id)arg1 packetBufferArray:(struct **)arg2 arraySize:(int)arg3;	// IMP=0x0010000000619c70
- (unsigned long long)onTransportThread_SendToGlobalLinkWithSessionID:(id)arg1 packetBuffer:(CDStruct_dc2926a3 *)arg2;	// IMP=0x0010000000619bd0
- (void)stopGlobalLinkForDevice:(id)arg1;	// IMP=0x0010000000619830
- (void)startConnectionForDevice:(id)arg1 isInitiator:(_Bool)arg2 remotePartyID:(id)arg3 useStunMICheck:(_Bool)arg4;	// IMP=0x0010000000619660
- (void)processRemoteConnectionDataForDevice:(id)arg1 remoteConnectionData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000619480
- (void)createConnectionDataForDevice:(id)arg1 localPartyID:(id)arg2 dataReadyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000006192a0
- (void)stopUDPGlobalLinkForDevice:(id)arg1;	// IMP=0x0010000000618f00
- (void)startUDPGlobalLinkForDevice:(id)arg1;	// IMP=0x0010000000618de0
- (void)releasePortIfNecessary:(struct IDSPortMap *)arg1 port:(unsigned short)arg2;	// IMP=0x0010000000618cc0
- (void)resumeSocketWithOptions:(id)arg1 shouldLogCall:(_Bool)arg2;	// IMP=0x0010000000618410
- (void)suspendSocketWithOptions:(id)arg1;	// IMP=0x0010000000617e80
- (void)checkSuspendTrafficForDevice:(id)arg1 wait:(_Bool)arg2;	// IMP=0x0010000000617a70
- (void)doCheckSuspendTrafficForDevice:(id)arg1;	// IMP=0x0010000000617380
- (void)closeSocketWithOptions:(id)arg1;	// IMP=0x0010000000617320
- (void)closeSocketWithOptions:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000006165e0
- (void)cleanupSocketsForClient:(id)arg1;	// IMP=0x0010000000615440
- (void)openSocketWithOptions:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000006131e0
- (void)prepareDefaultPairedConnectionInfoWithDeviceUniqueID:(id)arg1 shouldUseIPsecLink:(_Bool)arg2;	// IMP=0x00100000006129e0
- (id)_prepareConnectionInfoWithCBUUID:(id)arg1 deviceUniqueID:(id)arg2 shouldUseIPsecLink:(_Bool)arg3 identityPair:(id)arg4 remoteDeviceEncryptionInfo:(id)arg5;	// IMP=0x0010000000612770
- (id)defaultPairedDeviceIdentityPair;	// IMP=0x0010000000612710
- (void)closeDataConnectionWithDeviceConnectionInfo:(id)arg1 options:(id)arg2;	// IMP=0x0010000000611f00
- (void)setupDataConnectionWithDeviceConnectionInfo:(id)arg1 options:(id)arg2;	// IMP=0x001000000060ebc0
- (id)controlChannelVersionForCbuuid:(id)arg1;	// IMP=0x001000000060eb00
- (void)receiveControlChannelMessage:(id)arg1 fromCbuuid:(id)arg2 deviceUniqueID:(id)arg3;	// IMP=0x0010000000603570
- (id)stringComponentsForServiceConnectorService:(id)arg1;	// IMP=0x00100000006034f0
- (void)startCompressionForConnection:(id)arg1 deviceConnectionInfo:(id)arg2;	// IMP=0x0010000000602410
- (int)processCompressionResponse:(id)arg1 fromDeviceConnectionInfo:(id)arg2;	// IMP=0x0010000000600940
- (int)processCompressionRequest:(id)arg1 fromDeviceConnectionInfo:(id)arg2;	// IMP=0x00100000005fe850
- (void)internalOpenSocketWithDestination:(id)arg1 localSA:(id)arg2 remoteSA:(id)arg3 protocol:(int)arg4 trafficClass:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000005fdb50
- (_Bool)handleIncomingPacket:(CDStruct_dc2926a3 *)arg1 fromDeviceToken:(id)arg2;	// IMP=0x00100000005f9e50
- (void)resetAllConnectionsForDevice:(id)arg1;	// IMP=0x00100000005f9aa0
- (void)removeConnection:(id)arg1 fromDeviceConnectionInfo:(id)arg2 removeCode:(long long)arg3 removeReason:(id)arg4;	// IMP=0x00100000005f9110
- (id)initWithName:(id)arg1 address:(id)arg2 andTestTransport:(id)arg3;	// IMP=0x00100000005f9070
- (void)resetUTunTCPConnection:(id)arg1 forDeviceConnectionInfo:(id)arg2;	// IMP=0x00100000005f8a60
- (void)resetIPsecTCPConnection:(id)arg1 forDeviceConnectionInfo:(id)arg2;	// IMP=0x00100000005f8870
- (void)resetTCPConnection:(id)arg1 forDeviceConnectionInfo:(id)arg2;	// IMP=0x00100000005f87b0
- (void)startControlChannelWithDevice:(id)arg1 endpoint:(id)arg2;	// IMP=0x00100000005f6ca0
- (void)didConnectControlChannelForDeviceConnectionInfo:(id)arg1 connection:(id)arg2 error:(id)arg3;	// IMP=0x00100000005f5450
- (void)prepareControlChannelForDeviceConnectionInfo:(id)arg1 genericConnection:(id)arg2;	// IMP=0x00100000005f52a0
- (void)internalStartConnectionWithEndpoint:(id)arg1 service:(const char *)arg2 parameters:(id)arg3 serviceConnector:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000005f48a0
- (id)init;	// IMP=0x00100000005f4270
- (id)setupNewDeviceConnectionInfoForCbuuid:(id)arg1 deviceUniqueID:(id)arg2 identityPair:(id)arg3 remoteDeviceEncryptionInfo:(id)arg4 shouldUseIPsecLink:(_Bool)arg5;	// IMP=0x00100000005f2710
- (_Bool)setupIPsecLinkForDeviceConnectionInfo:(id)arg1;	// IMP=0x00100000005f23f0
- (void)startDataChannelWithDevice:(id)arg1 genericConnection:(id)arg2 serviceConnectorService:(id)arg3 endpoint:(id)arg4;	// IMP=0x00100000005e9a60
- (_Bool)setupUTunForDeviceConnectionInfo:(id)arg1;	// IMP=0x00100000005e9190
- (unsigned char)handleUtunChannelWrite:(id)arg1 source:(struct sockaddr *)arg2 destination:(struct sockaddr *)arg3 upperProtocol:(unsigned char)arg4 bytes:(const void *)arg5 bytesLen:(unsigned long long)arg6;	// IMP=0x00100000005e9120
- (void)handleUtunChannelRead:(id)arg1 limit:(unsigned int)arg2;	// IMP=0x00100000005e90d0
- (void)handleIPPayload:(const void *)arg1 bytesLength:(unsigned long long)arg2 source:(struct sockaddr *)arg3 destination:(struct sockaddr *)arg4 upperProtocol:(unsigned char)arg5 forDeviceConnectionInfo:(id)arg6 flush:(_Bool)arg7 callerShouldStop:(_Bool *)arg8;	// IMP=0x00100000005e9060
- (void)_getStallDetectorForConnection:(id)arg1 deviceConnecionInfo:(id)arg2;	// IMP=0x00100000005e8930
- (void)_reloadSettings;	// IMP=0x00100000005e8920
- (void)reloadSettings;	// IMP=0x00100000005e6320

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

