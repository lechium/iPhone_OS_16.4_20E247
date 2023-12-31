//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSTokenState, NSData, NSSet, NSString;
@protocol APSConnectionServerDelegate><APSConnectionServerTokenDelegate, OS_dispatch_queue, OS_xpc_object;

@interface APSConnectionServer : NSObject
{
    id <APSConnectionServerDelegate><APSConnectionServerTokenDelegate> _delegate;	// 8 = 0x8
    NSString *_environmentName;	// 16 = 0x10
    NSData *_publicToken;	// 24 = 0x18
    unsigned long long _mode;	// 32 = 0x20
    unsigned int _connectionMachPort;	// 40 = 0x28
    NSString *_connectionPortName;	// 48 = 0x30
    int _clientPID;	// 56 = 0x38
    NSSet *_enabledTopics;	// 64 = 0x40
    NSSet *_ignoredTopics;	// 72 = 0x48
    NSSet *_opportunisticTopics;	// 80 = 0x50
    NSSet *_nonWakingTopics;	// 88 = 0x58
    long long _publicTokenDeliveryRetries;	// 96 = 0x60
    unsigned long long _messageSize;	// 104 = 0x68
    unsigned long long _largeMessageSize;	// 112 = 0x70
    NSObject<OS_xpc_object> *_connection;	// 120 = 0x78
    APSTokenState *_tokenState;	// 128 = 0x80
    NSString *_processName;	// 136 = 0x88
    NSObject<OS_dispatch_queue> *_queue;	// 144 = 0x90
    unsigned long long _enqueuedBlockCount;	// 152 = 0x98
    _Bool _isQueueSuspended;	// 160 = 0xa0
    _Bool _enableCriticalReliability;	// 161 = 0xa1
    _Bool _usesAppLaunchStats;	// 162 = 0xa2
    _Bool _enableStatusChangeNotifications;	// 163 = 0xa3
    _Bool _freshMachPort;	// 164 = 0xa4
    _Bool _isPublicTokenAcknowledged;	// 165 = 0xa5
    _Bool _isClosed;	// 166 = 0xa6
    _Bool _trackActivityPresence;	// 167 = 0xa7
}

+ (void)serversWithEnvironmentName:(id)arg1 delegate:(id)arg2 withMode:(unsigned long long)arg3 returnServers:(id)arg4;	// IMP=0x0020000000055d96
+ (id)serversWithEnvironmentName:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000055bff
+ (void)serverEnvironmentNames:(id)arg1 withMode:(unsigned long long)arg2;	// IMP=0x0010000000055975
+ (id)serverEnvironmentNames;	// IMP=0x00100000000558c8
- (void).cxx_destruct;	// IMP=0x002000000005b547
@property(readonly, nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) long long publicTokenDeliveryRetries; // @synthesize publicTokenDeliveryRetries=_publicTokenDeliveryRetries;
@property(nonatomic) _Bool trackActivityPresence; // @synthesize trackActivityPresence=_trackActivityPresence;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, retain, nonatomic) NSSet *nonWakingTopics; // @synthesize nonWakingTopics=_nonWakingTopics;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, retain, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool enableStatusChangeNotifications; // @synthesize enableStatusChangeNotifications=_enableStatusChangeNotifications;
@property(nonatomic) _Bool usesAppLaunchStats; // @synthesize usesAppLaunchStats=_usesAppLaunchStats;
@property(nonatomic) _Bool enableCriticalReliability; // @synthesize enableCriticalReliability=_enableCriticalReliability;
@property(nonatomic) unsigned long long largeMessageSize; // @synthesize largeMessageSize=_largeMessageSize;
@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(readonly, copy, nonatomic) NSData *publicToken; // @synthesize publicToken=_publicToken;
@property(readonly, retain, nonatomic) NSSet *opportunisticTopics; // @synthesize opportunisticTopics=_opportunisticTopics;
@property(readonly, retain, nonatomic) NSSet *ignoredTopics; // @synthesize ignoredTopics=_ignoredTopics;
@property(readonly, retain, nonatomic) NSSet *enabledTopics; // @synthesize enabledTopics=_enabledTopics;
@property(nonatomic) __weak id <APSConnectionServerDelegate><APSConnectionServerTokenDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, retain, nonatomic) NSString *tokenName;
- (void)_savePersistentConnectionWithMode:(unsigned long long)arg1;	// IMP=0x001000000005afaf
- (void)_savePersistentConnectionTopics;	// IMP=0x001000000005af7e
@property(readonly, nonatomic) _Bool isConnected; // @dynamic isConnected;
@property(readonly, nonatomic) _Bool hasIdentity; // @dynamic hasIdentity;
- (void)saveAndUpdateDelegate;	// IMP=0x001000000005ab62
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4;	// IMP=0x001000000005a6d6
- (void)handleChannelSubscriptionFailures:(id)arg1 forTopic:(id)arg2;	// IMP=0x001000000005a4ef
- (void)acknowledgeDidReceivePublicToken:(id)arg1;	// IMP=0x0010000000059f3e
@property(nonatomic) _Bool isPublicTokenAcknowledged;
- (void)_redeliverCurrentPublicToken;	// IMP=0x0010000000059da6
- (void)handlePublicTokenDeliveryReply:(id)arg1;	// IMP=0x0010000000059ac3
- (void)setPublicToken:(id)arg1 needsAck:(_Bool)arg2;	// IMP=0x001000000005983e
- (void)handleAckIncomingMessageWithGuid:(id)arg1 topic:(id)arg2 tracingUUID:(id)arg3;	// IMP=0x00100000000597a1
- (void)_handleInvalidateTokenForInfo:(id)arg1;	// IMP=0x0010000000059735
- (void)handleInvalidatePerAppTokenForInfo:(id)arg1;	// IMP=0x001000000005965c
- (void)handleInvalidateURLTokenForTopic:(id)arg1;	// IMP=0x0010000000059556
- (void)handleInvalidatePerAppTokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x00100000000594c4
- (void)handleInvalidateTokenForInfo:(id)arg1;	// IMP=0x00100000000594b2
- (void)_sendClientToken:(id)arg1 forInfo:(id)arg2;	// IMP=0x001000000005901e
- (void)handleCurrentURLTokenForInfo:(id)arg1;	// IMP=0x0010000000058fc2
- (void)handleCurrentTokenForInfo:(id)arg1;	// IMP=0x0010000000058f66
- (void)handleReceivedTokenError:(id)arg1 forInfo:(id)arg2;	// IMP=0x0010000000058d83
- (void)handleReceivedToken:(id)arg1 forInfo:(id)arg2;	// IMP=0x0010000000058c5e
- (void)_handleRequestTokenForInfo:(id)arg1;	// IMP=0x0010000000058bf2
- (void)handleRequestURLTokenForInfo:(id)arg1;	// IMP=0x0010000000058b19
- (void)handleRequestTokenForInfo:(id)arg1;	// IMP=0x0010000000058a40
- (void)handleRequestPerAppTokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x00100000000589ae
- (void)handleFakeMessage:(id)arg1;	// IMP=0x0010000000058952
- (void)handleCancelOutgoingMessageWithID:(unsigned long long)arg1;	// IMP=0x001000000005890d
- (void)handleSendOutgoingMessage:(id)arg1;	// IMP=0x0010000000058863
- (void)handleResult:(id)arg1 forSendingOutgoingMessageWithID:(unsigned long long)arg2 sendRTT:(unsigned long long)arg3 ackTimestamp:(unsigned long long)arg4;	// IMP=0x00100000000586b8
- (void)handleResult:(id)arg1 forSendingOutgoingMessageWithID:(unsigned long long)arg2;	// IMP=0x00100000000586a0
- (void)handleResult:(id)arg1 forSendingOutgoingMessage:(id)arg2;	// IMP=0x00100000000585f6
- (void)handleReceivedMessage:(id)arg1;	// IMP=0x001000000005838d
- (void)_initiateConnectionIfNecessary;	// IMP=0x0010000000057cb6
- (void)handleConnectionStatusChanged:(_Bool)arg1;	// IMP=0x0010000000057bef
- (id)connectionPortName;	// IMP=0x0010000000057be1
- (void)connectionInvalidated;	// IMP=0x0010000000057b92
- (void)_suspendQueue;	// IMP=0x0010000000057b61
- (void)_resumeQueue;	// IMP=0x0010000000057b30
- (void)connectionHandshakeDidComplete;	// IMP=0x0010000000057ac0
- (void)_migratePersistentTopicsFromOldMode:(unsigned long long)arg1;	// IMP=0x00100000000575d5
@property(readonly, copy) NSString *debugDescription;
- (id)processNameWithLabels:(_Bool)arg1;	// IMP=0x00100000000573d9
- (void)close;	// IMP=0x001000000005736e
- (void);	// IMP=0x0010000000057222
- (void)dealloc;	// IMP=0x00100000000571b3
- (id)initWithDelegate:(id)arg1 mode:(unsigned long long)arg2 environmentName:(id)arg3 connectionPortName:(id)arg4 processName:(id)arg5 connection:(id)arg6;	// IMP=0x0010000000056d54
- (void)_enqueueXPCMessage:(CDUnknownBlockType)arg1 wakingClient:(_Bool)arg2 highPriority:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000567af
- (void)_enqueueXPCMessage:(CDUnknownBlockType)arg1 wakingClient:(_Bool)arg2 highPriority:(_Bool)arg3;	// IMP=0x001000000005679a

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

