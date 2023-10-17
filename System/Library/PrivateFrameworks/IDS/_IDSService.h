//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUTDeferredTaskQueue, IDSAccount, IDSAccountController, IDSGroupContextController, IDSQuickSwitchAcknowledgementTracker, IDSServiceProperties, NSArray, NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface _IDSService : NSObject
{
    IDSAccountController *_accountController;	// 8 = 0x8
    NSMutableDictionary *_uniqueIDToConnection;	// 16 = 0x10
    NSSet *_commands;	// 24 = 0x18
    NSMapTable *_delegateToInfo;	// 32 = 0x20
    id _delegateContext;	// 40 = 0x28
    NSMutableDictionary *_protobufSelectors;	// 48 = 0x30
    NSMutableSet *_lastIsActiveSet;	// 56 = 0x38
    NSMutableArray *_linkedDevices;	// 64 = 0x40
    NSMutableDictionary *_subServices;	// 72 = 0x48
    _Bool _linkedDevicesLoaded;	// 80 = 0x50
    _Bool _pretendingToBeFull;	// 81 = 0x51
    _Bool _everHadDelegate;	// 82 = 0x52
    _Bool _manuallyAckMessages;	// 83 = 0x53
    _Bool _clientIsSandboxed;	// 84 = 0x54
    unsigned int _listenerCaps;	// 88 = 0x58
    IDSGroupContextController *_groupContextController;	// 96 = 0x60
    id _idsSimulatorSupportDataHandlerToken;	// 104 = 0x68
    NSMutableDictionary *_uniqueIDToProgress;	// 112 = 0x70
    IDSQuickSwitchAcknowledgementTracker *_acknowledgementTracker;	// 120 = 0x78
    IDSServiceProperties *_serviceProperties;	// 128 = 0x80
    CDUnknownBlockType _pendingRegisteredIdentitiesBlock;	// 136 = 0x88
    _Bool _wantsPseudonymUpdates;	// 144 = 0x90
    NSDictionary *_cachedPseudonymURIMap;	// 152 = 0x98
    CUTDeferredTaskQueue *_pseudonymUpdateTaskQueue;	// 160 = 0xa0
    NSMutableDictionary *_completionBlocksByRequestID;	// 168 = 0xa8
}

+ (id)deviceForFromID:(id)arg1 fromDevices:(id)arg2;	// IMP=0x00100000000ce0a5
+ (void)serviceWithIdentifier:(id)arg1 commands:(id)arg2 manuallyAckMessages:(_Bool)arg3 delegateContext:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000a9b64
- (void).cxx_destruct;	// IMP=0x00000000000d31b4
@property(retain, nonatomic) NSMutableDictionary *completionBlocksByRequestID; // @synthesize completionBlocksByRequestID=_completionBlocksByRequestID;
@property(retain, nonatomic) CUTDeferredTaskQueue *pseudonymUpdateTaskQueue; // @synthesize pseudonymUpdateTaskQueue=_pseudonymUpdateTaskQueue;
@property(retain, nonatomic) NSDictionary *cachedPseudonymURIMap; // @synthesize cachedPseudonymURIMap=_cachedPseudonymURIMap;
@property(nonatomic) _Bool wantsPseudonymUpdates; // @synthesize wantsPseudonymUpdates=_wantsPseudonymUpdates;
@property(readonly, retain, nonatomic) IDSGroupContextController *groupContextController; // @synthesize groupContextController=_groupContextController;
@property(nonatomic) _Bool manuallyAckMessages; // @synthesize manuallyAckMessages=_manuallyAckMessages;
- (void)_enforceSandboxPolicy;	// IMP=0x00000000000d2e82
- (id)groupContextController:(id)arg1 accountsForAlises:(id)arg2;	// IMP=0x00000000000d2aa8
- (void)groupContextController:(id)arg1 didCreateGroup:(id)arg2;	// IMP=0x00000000000d284e
- (void)connection:(id)arg1 didHintCheckingTransportLogWithReason:(long long)arg2;	// IMP=0x00000000000d26de
- (void)connection:(id)arg1 didUpdateDeviceIdentity:(id)arg2 error:(id)arg3 context:(id)arg4;	// IMP=0x00000000000d269b
- (void)scheduleTransactionLogTask:(id)arg1;	// IMP=0x00000000000d2629
- (void)performGroupTask:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d255f
- (void)_disableAccount:(id)arg1;	// IMP=0x00000000000d2549
- (void)_enableAccount:(id)arg1;	// IMP=0x00000000000d2533
- (id)datagramChannelForSocketDescriptor:(int)arg1 error:(id *)arg2;	// IMP=0x00000000000d23c2
- (id)datagramChannelForSessionDestination:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000d2218
- (id)streamConnectionForSocketDescriptor:(int)arg1 error:(id *)arg2;	// IMP=0x00000000000d2210
- (id)streamConnectionForSessionDestination:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d2183
- (id)datagramConnectionForSocketDescriptor:(int)arg1 error:(id *)arg2;	// IMP=0x00000000000d217b
- (id)datagramConnectionForSessionDestination:(id)arg1 uid:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000000d2173
- (id)datagramConnectionForSessionDestination:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000d2114
- (void)_sendMissingMessageMetric:(id)arg1;	// IMP=0x00000000000d206c
- (_Bool)sendCertifiedDeliveryReceipt:(id)arg1;	// IMP=0x00000000000d1dd5
- (void)sendAckForMessageWithContext:(id)arg1;	// IMP=0x00000000000d1904
- (_Bool)reportSpamMessage:(id)arg1;	// IMP=0x00000000000d171c
- (_Bool)sendAheadGroup:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id *)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d0d15
- (_Bool)sendResourceAtURL:(id)arg1 metadata:(id)arg2 fromAccount:(id)arg3 toDestinations:(id)arg4 priority:(long long)arg5 options:(id)arg6 identifier:(id *)arg7 error:(id *)arg8;	// IMP=0x00000000000cfcd1
- (void)testCloudQRConnection;	// IMP=0x00000000000cfbbd
- (void)startOTRTest:(long long)arg1;	// IMP=0x00000000000cfa3a
- (void)setLinkPreferences:(id)arg1;	// IMP=0x00000000000cf6d8
- (void)setPreferInfraWiFi:(_Bool)arg1;	// IMP=0x00000000000cf512
- (id)deviceForUniqueID:(id)arg1;	// IMP=0x00000000000cf23b
- (id)devicesForBTUUID:(id)arg1;	// IMP=0x00000000000cef7a
- (id)firstRoutableInternetDestinationForSelf;	// IMP=0x00000000000ced31
- (id)linkedDeviceForFromID:(id)arg1 withRelationship:(long long)arg2;	// IMP=0x00000000000cec1c
- (id)deviceForFromID:(id)arg1;	// IMP=0x00000000000ce89d
- (id)uriForFromID:(id)arg1;	// IMP=0x00000000000cdfac
- (_Bool)getProgressUpdateForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000cdd7a
- (_Bool)cancelIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000cdc00
- (_Bool)sendServerMessage:(id)arg1 command:(id)arg2 fromAccount:(id)arg3;	// IMP=0x00000000000cd8bd
- (_Bool)sendData:(id)arg1 priority:(long long)arg2 options:(id)arg3 identifier:(id *)arg4 error:(id *)arg5;	// IMP=0x00000000000cd82b
- (_Bool)setWakingPushPriority:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000000cd686
- (_Bool)sendInvitationUpdate:(id)arg1 fromAccount:(id)arg2 toDestination:(id)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x00000000000cd182
- (_Bool)sendInvitation:(id)arg1 fromAccount:(id)arg2 toDestination:(id)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x00000000000ccc7e
- (_Bool)sendAccessoryData:(id)arg1 toAccessoryID:(id)arg2 accessToken:(id)arg3 options:(id)arg4 identifier:(id *)arg5 error:(id *)arg6;	// IMP=0x00000000000cc4dd
- (_Bool)_sendSimulatorData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x00000000000cbf50
- (_Bool)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x00000000000cbafe
- (void)_handlePretendingToBeFullWithIdentifier:(id *)arg1;	// IMP=0x00000000000cb874
- (_Bool)_sendSimulatorProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x00000000000cb144
- (_Bool)sendProtobuf:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x00000000000cad76
- (_Bool)_sendSimulatorMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x00000000000c9f5b
- (_Bool)sendMessage:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x00000000000c9f49
- (_Bool)cancelOpportunisticDataWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c9ddf
- (_Bool)sendOpportunisticData:(id)arg1 options:(id)arg2 identifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000c9afd
- (_Bool)_canAccount:(id)arg1 sendWithFromID:(id)arg2;	// IMP=0x00000000000c9751
- (id)_sendingAccountForAccount:(id)arg1 destination:(id)arg2 fromID:(id)arg3;	// IMP=0x00000000000c892e
- (id)_sendingAccountForAccount:(id)arg1;	// IMP=0x00000000000c8917
- (id)_preferredURIForAccount:(id)arg1;	// IMP=0x00000000000c8827
- (_Bool)canSendMessageWithAccount:(id)arg1 toDestination:(id)arg2;	// IMP=0x00000000000c8377
- (SEL)protobufActionForType:(unsigned short)arg1 isResponse:(_Bool)arg2;	// IMP=0x00000000000c817c
- (void)setProtobufAction:(SEL)arg1 forProtobufType:(unsigned short)arg2 isResponse:(_Bool)arg3;	// IMP=0x00000000000c7f46
- (void)resendSubServicesToDaemonForCurrentDevice;	// IMP=0x00000000000c7a86
- (_Bool)updateSubServices:(id)arg1 forDevice:(id)arg2;	// IMP=0x00000000000c7516
- (void)finishedReportingRequestUUID:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000c7327
- (void)reportAction:(long long)arg1 ofTempURI:(id)arg2 fromURI:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c6a9a
- (void)finishedVerifyingSignedDataForRequest:(id)arg1 success:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000000c67a2
- (void)finishedSigningForRequest:(id)arg1 signedData:(id)arg2 error:(id)arg3;	// IMP=0x00000000000c6488
- (void)verifySignedData:(id)arg1 matchesExpectedData:(id)arg2 withTokenURI:(id)arg3 forAlgorithm:(long long)arg4 options:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000c5df1
- (void)signData:(id)arg1 withAlgorithm:(long long)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c5112
- (void)finishedRevokingPseudonymWithSuccess:(_Bool)arg1 error:(id)arg2 requestUUID:(id)arg3;	// IMP=0x00000000000c4dfe
- (void)finishedRenewingPseudonym:(id)arg1 success:(_Bool)arg2 error:(id)arg3 requestUUID:(id)arg4;	// IMP=0x00000000000c4aa5
- (void)finishedProvisioningPseudonym:(id)arg1 success:(_Bool)arg2 error:(id)arg3 forRequestUUID:(id)arg4;	// IMP=0x00000000000c45e0
- (id)pseudonymPropertiesWithFeatureID:(id)arg1 scopeID:(id)arg2 expiryDurationInSeconds:(double)arg3;	// IMP=0x00000000000c4496
- (void)revokePseudonym:(id)arg1 requestProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c403d
- (void)renewPseudonym:(id)arg1 forUpdatedExpiryEpoch:(double)arg2 requestProperties:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c3bb6
- (void)provisionPseudonymForURI:(id)arg1 withProperties:(id)arg2 requestProperties:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c370d
- (void)provisionPseudonymWithProperties:(id)arg1 requestProperties:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c2faf
- (void)_calloutPseudonymsDidUpdate;	// IMP=0x00000000000c18a5
- (void)account:(id)arg1 pseudonymsChanged:(id)arg2;	// IMP=0x00000000000c1665
- (id)_accountWithURI:(id)arg1 orPseudonym:(id)arg2;	// IMP=0x00000000000c0fb5
- (id)pseudonymsForMaskedURI:(id)arg1 matchingProperties:(id)arg2;	// IMP=0x00000000000c0e6e
- (id)pseudonymsForMaskedURI:(id)arg1;	// IMP=0x00000000000c0ddb
- (id)pseudonymForPseudonymURI:(id)arg1;	// IMP=0x00000000000c0ab3
@property(readonly, nonatomic) NSDictionary *pseudonymURIMap;
@property(readonly, nonatomic) long long maxEffectivePayloadSize;
@property(readonly, nonatomic) NSArray *URIs;
- (id)linkedDevicesWithRelationship:(long long)arg1;	// IMP=0x00000000000c01d4
- (void)_updateLinkedDevicesWithDevicesInfo:(id)arg1;	// IMP=0x00000000000bfd84
- (void)_loadCachedLinkedDevices;	// IMP=0x00000000000bfbe6
- (void)_reloadCachedLinkedDevices;	// IMP=0x00000000000bfa48
@property(readonly, nonatomic) _Bool canSend;
@property(readonly, copy, nonatomic) IDSServiceProperties *serviceProperties;
@property(readonly, copy, nonatomic) NSArray *devices;
@property(readonly, copy, nonatomic) NSSet *internalAccounts;
@property(readonly, copy, nonatomic) NSSet *accounts;
- (id)_filteredAccountsFrom:(id)arg1;	// IMP=0x00000000000be921
@property(readonly, nonatomic) IDSAccount *iCloudAccount;
@property(readonly, copy, nonatomic) NSString *serviceDomain;
@property(nonatomic, getter=isPretendingToBeFull) _Bool pretendingToBeFull;
- (void)connection:(id)arg1 didSendOpportunisticDataWithIdentifier:(id)arg2 toIDs:(id)arg3;	// IMP=0x00000000000be193
- (void)connection:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantDataUpdate:(id)arg3;	// IMP=0x00000000000bdfba
- (void)connection:(id)arg1 account:(id)arg2 receivedGroupSessionParticipantUpdate:(id)arg3 context:(id)arg4;	// IMP=0x00000000000bdcbf
- (void)connection:(id)arg1 account:(id)arg2 sessionInviteReceived:(id)arg3 fromID:(id)arg4 transportType:(id)arg5 options:(id)arg6 context:(id)arg7 messageContext:(id)arg8;	// IMP=0x00000000000bd85e
- (void)connection:(id)arg1 didFlushCacheForRemoteURI:(id)arg2 fromURI:(id)arg3 guid:(id)arg4;	// IMP=0x00000000000bd59a
- (void)connection:(id)arg1 identifier:(id)arg2 fromID:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x00000000000bd1fa
- (void)connection:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(_Bool)arg3 error:(id)arg4 context:(id)arg5;	// IMP=0x00000000000bcdbc
- (void)connection:(id)arg1 identifier:(id)arg2 alternateCallbackID:(id)arg3 willSendToDestinations:(id)arg4 skippedDestinations:(id)arg5 registrationPropertyToDestinations:(id)arg6;	// IMP=0x00000000000bc982
- (void)connection:(id)arg1 messageIdentifier:(id)arg2 alternateCallbackID:(id)arg3 updatedWithResponseCode:(long long)arg4 error:(id)arg5 lastCall:(_Bool)arg6 messageContext:(id)arg7;	// IMP=0x00000000000bc143
- (void)connection:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x00000000000bbe6c
- (void)connection:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00000000000bbcca
- (void)_callDelegatesForDevicesChanged;	// IMP=0x00000000000bbb1a
- (void)connection:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00000000000bb6a6
- (void)connection:(id)arg1 isActiveChanged:(_Bool)arg2;	// IMP=0x00000000000bb4ff
- (void)connection:(id)arg1 incomingEngramMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4;	// IMP=0x00000000000b9fc4
- (id)_payloadFromDecryptedData:(id)arg1;	// IMP=0x00000000000b9edc
- (long long)_messageTypeForCommand:(id)arg1;	// IMP=0x00000000000b9de0
- (void)connection:(id)arg1 incomingPendingMessageFromID:(id)arg2 context:(id)arg3;	// IMP=0x00000000000b9a28
- (void)connection:(id)arg1 incomingTopLevelMessage:(id)arg2 fromID:(id)arg3 messageContext:(id)arg4;	// IMP=0x00000000000b90ec
- (void)connection:(id)arg1 incomingProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4;	// IMP=0x00000000000b7ba7
- (void)connection:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4;	// IMP=0x00000000000b601f
- (void)connection:(id)arg1 incomingInvitationUpdate:(id)arg2 fromID:(id)arg3 context:(id)arg4;	// IMP=0x00000000000b5852
- (void)connection:(id)arg1 incomingInvitation:(id)arg2 fromID:(id)arg3 context:(id)arg4;	// IMP=0x00000000000b4ff8
- (void)connection:(id)arg1 incomingAccessoryReportMessage:(id)arg2 accessoryID:(id)arg3 controllerID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000b458e
- (void)connection:(id)arg1 incomingAccessoryData:(id)arg2 fromID:(id)arg3 context:(id)arg4;	// IMP=0x00000000000b3b82
- (void)connection:(id)arg1 incomingGroupData:(id)arg2 fromID:(id)arg3 context:(id)arg4;	// IMP=0x00000000000b2ca5
- (void)connection:(id)arg1 incomingData:(id)arg2 fromID:(id)arg3 context:(id)arg4;	// IMP=0x00000000000b1ee1
- (void)connection:(id)arg1 incomingOpportunisticData:(id)arg2 withIdentifier:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000000000b159b
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;	// IMP=0x00000000000b1473
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;	// IMP=0x00000000000b1398
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;	// IMP=0x00000000000b1270
- (void)accountController:(id)arg1 accountAdded:(id)arg2;	// IMP=0x00000000000b1195
- (void)_callIsActiveChanged;	// IMP=0x00000000000b0800
- (void)_processAccountSet:(id)arg1;	// IMP=0x00000000000b07bc
- (void)_tearDownConnectionForUniqueID:(id)arg1;	// IMP=0x00000000000b05c8
- (void)_setupNewConnectionForAccount:(id)arg1;	// IMP=0x00000000000b0584
- (void)_logConnectionMap;	// IMP=0x00000000000b036d
- (void)service:(id)arg1 linkedDevicesUpdated:(id)arg2;	// IMP=0x00000000000b00c2
- (void)service:(id)arg1 tinkerDeviceUpdated:(id)arg2;	// IMP=0x00000000000afe17
- (void)service:(id)arg1 tinkerDeviceRemoved:(id)arg2;	// IMP=0x00000000000afb6c
- (void)service:(id)arg1 tinkerDeviceAdded:(id)arg2;	// IMP=0x00000000000af8c1
- (void)_callLinkedDevicesChanged;	// IMP=0x00000000000af718
- (_Bool)_isDroppingMessages;	// IMP=0x00000000000af702
- (void)_stopAwaitingQuickSwitchAcknowledgementFromDelegateWithIdentifier:(id)arg1;	// IMP=0x00000000000af6ec
- (CDUnknownBlockType)_acknowledgementBlockWithDelegateIdentifier:(id)arg1;	// IMP=0x00000000000af508
- (id)_activeDeviceForUniqueID:(id)arg1;	// IMP=0x00000000000af20f
- (void)didSwitchActivePairedDevice:(id)arg1 forService:(id)arg2 wasHandled:(_Bool *)arg3;	// IMP=0x00000000000ad8a9
- (void)OTRTestCallback:(id)arg1 time:(double)arg2 error:(id)arg3;	// IMP=0x00000000000ad5f4
- (void)daemonDisconnected;	// IMP=0x00000000000ad424
- (void)daemonConnected;	// IMP=0x00000000000ad1e7
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4 group:(id)arg5;	// IMP=0x00000000000ac9c4
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000ac9a1
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(id)arg2;	// IMP=0x00000000000ac978
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ac964
- (void)removeDelegate:(id)arg1;	// IMP=0x00000000000ac7e3
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000abc22
- (void)receivedIDSSimulatorSupportData:(id)arg1 serviceName:(id)arg2 messageIdentifier:(id)arg3;	// IMP=0x00000000000aa880
- (void)dealloc;	// IMP=0x00000000000aa64d
- (id)initWithService:(id)arg1 commands:(id)arg2 manuallyAckMessages:(_Bool)arg3 delegateContext:(id)arg4;	// IMP=0x00000000000a9dd3
- (id)_init;	// IMP=0x00000000000a9b35
- (id)_initWithDelegateContext:(id)arg1;	// IMP=0x00000000000a9ac9
- (id)daemonListener;	// IMP=0x00000000000a9a72
- (id)daemonController;	// IMP=0x00000000000a9a59

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
