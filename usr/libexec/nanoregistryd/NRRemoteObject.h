//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, MISSING_TYPE, NSMapTable, NSMutableDictionary, NSPointerArray, NSSet, NSString;
@protocol NRRemoteObjectDelegate, OS_dispatch_queue;

@interface NRRemoteObject : NSObject
{
    NSMutableDictionary *_idsSendIDToCompletionHandler;	// 8 = 0x8
    NSMutableDictionary *_idsSendIDToResponseHandler;	// 16 = 0x10
    NSMutableDictionary *_idsSendIDToTimer;	// 24 = 0x18
    NSString *_serviceName;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_idsQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 48 = 0x30
    NSMutableDictionary *_idsRequestMessageTypeToSelector;	// 56 = 0x38
    _Bool _isIDSConnected;	// 64 = 0x40
    _Bool _wasIDSConnected;	// 65 = 0x41
    _Bool _isIDSNearby;	// 66 = 0x42
    _Bool _wasIDSNearby;	// 67 = 0x43
    _Bool _hasAccounts;	// 68 = 0x44
    _Bool _paired;	// 69 = 0x45
    _Bool _alwaysConnected;	// 70 = 0x46
    _Bool _isIncomingMessageDeliveryQueueSuspended;	// 71 = 0x47
    id <NRRemoteObjectDelegate> _delegate;	// 72 = 0x48
    NSPointerArray *_connectivityObservers;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_clientQueue;	// 88 = 0x58
    IDSService *_service;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_incomingMessageDeliveryQueue;	// 104 = 0x68
    NSMapTable *_shortcutMessages;	// 112 = 0x70
}

+ (_Bool)messagesShouldHaveValidSender;	// IMP=0x002000000001d609
- (void).cxx_destruct;	// IMP=0x0020000000021b4f
@property(nonatomic) _Bool isIncomingMessageDeliveryQueueSuspended; // @synthesize isIncomingMessageDeliveryQueueSuspended=_isIncomingMessageDeliveryQueueSuspended;
@property(retain, nonatomic) NSMapTable *shortcutMessages; // @synthesize shortcutMessages=_shortcutMessages;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *incomingMessageDeliveryQueue; // @synthesize incomingMessageDeliveryQueue=_incomingMessageDeliveryQueue;
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
@property(nonatomic, getter=isAlwaysConnected) _Bool alwaysConnected; // @synthesize alwaysConnected=_alwaysConnected;
@property(readonly, nonatomic, getter=isPaired) _Bool paired; // @synthesize paired=_paired;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void)redeliverMessages;	// IMP=0x0010000000021aca
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000021626
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0010000000021205
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00100000000211ff
- (void)service:(id)arg1 linkedDevicesChanged:(id)arg2;	// IMP=0x00100000000211ed
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00100000000211e7
- (void)_fireIDSAvailableDelegateIfNeededWithIDSDevice:(_Bool)arg1;	// IMP=0x0010000000020cf6
- (void)updateTrafficClassesWithClasses:(id)arg1;	// IMP=0x0010000000020c4e
- (MISSING_TYPE *)_updateTrafficClassesWithClasses: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000020c48
- (id)_areAccountsAndDevicesPresent:(id)arg1 andDevices:(id)arg2;	// IMP=0x0010000000020652
- (id)idsDeviceIdentifierForBTUUID:(id)arg1;	// IMP=0x00100000000205c7
- (id)deprecatedIDSDeviceIdentifierForBTUUID:(id)arg1;	// IMP=0x001000000002054c
- (id)_lookupDestinations:(id)arg1;	// IMP=0x0010000000020178
- (void)_queueSendCloudMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withResponseTimeout:(id)arg5 withDescription:(id)arg6 onlyOneFor:(id)arg7 priority:(long long)arg8 toDestinations:(id)arg9 skipLookup:(_Bool)arg10 didSend:(CDUnknownBlockType)arg11 andResponse:(CDUnknownBlockType)arg12;	// IMP=0x001000000002010b
- (void)_queueSendMessage:(id)arg1 type:(unsigned short)arg2 requestUUID:(id)arg3 withTimeout:(id)arg4 withResponseTimeout:(id)arg5 withDescription:(id)arg6 onlyOneFor:(id)arg7 priority:(long long)arg8 toIDSBTUUID:(id)arg9 didSend:(CDUnknownBlockType)arg10 andResponse:(CDUnknownBlockType)arg11;	// IMP=0x001000000001f42d
- (void)_messageResponseTimeout:(id)arg1;	// IMP=0x001000000001f20e
- (void)_sendCloudMessage:(id)arg1 type:(unsigned short)arg2 responseToRequest:(id)arg3 withTimeout:(id)arg4 withResponseTimeout:(id)arg5 withDescription:(id)arg6 onlyOneFor:(id)arg7 priority:(long long)arg8 toDestinations:(id)arg9 skipLookup:(_Bool)arg10 didSend:(CDUnknownBlockType)arg11 andResponse:(CDUnknownBlockType)arg12;	// IMP=0x001000000001ef84
- (void)sendTinkerResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 didSend:(CDUnknownBlockType)arg8;	// IMP=0x001000000001ef36
- (void)sendTinkerRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withResponseTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 toDestinations:(id)arg8 didSend:(CDUnknownBlockType)arg9 andResponse:(CDUnknownBlockType)arg10;	// IMP=0x001000000001eeeb
- (void)sendCloudResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 didSend:(CDUnknownBlockType)arg8;	// IMP=0x001000000001ee9d
- (void)sendCloudRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withResponseTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 toDestinations:(id)arg8 didSend:(CDUnknownBlockType)arg9 andResponse:(CDUnknownBlockType)arg10;	// IMP=0x001000000001ee52
- (void)_sendMessage:(id)arg1 type:(unsigned short)arg2 requestUUID:(id)arg3 withTimeout:(id)arg4 withResponseTimeout:(id)arg5 withDescription:(id)arg6 onlyOneFor:(id)arg7 priority:(long long)arg8 toIDSBTUUID:(id)arg9 didSend:(CDUnknownBlockType)arg10 andResponse:(CDUnknownBlockType)arg11;	// IMP=0x001000000001eaf0
- (void)sendResponse:(id)arg1 type:(unsigned short)arg2 requestUUID:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 didSend:(CDUnknownBlockType)arg8;	// IMP=0x001000000001eaaa
- (void)sendCompanionCloudRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withResponseTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 didSend:(CDUnknownBlockType)arg8 andResponse:(CDUnknownBlockType)arg9;	// IMP=0x001000000001eaa4
- (void)sendResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 didSend:(CDUnknownBlockType)arg8;	// IMP=0x001000000001e8e3
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withResponseTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 priority:(long long)arg7 toIDSBTUUID:(id)arg8 didSend:(CDUnknownBlockType)arg9 andResponse:(CDUnknownBlockType)arg10;	// IMP=0x001000000001e8a0
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 toIDSBTUUID:(id)arg5 didSend:(CDUnknownBlockType)arg6;	// IMP=0x001000000001e860
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 toIDSBTUUID:(id)arg4 didSend:(CDUnknownBlockType)arg5;	// IMP=0x001000000001e83f
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 toIDSBTUUID:(id)arg3 didSend:(CDUnknownBlockType)arg4;	// IMP=0x001000000001e817
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 toIDSBTUUID:(id)arg3;	// IMP=0x001000000001e802
- (void)registerProtobufHandlers;	// IMP=0x001000000001e7fc
- (void)setAlwaysProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;	// IMP=0x001000000001e781
- (void)setAlwaysProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;	// IMP=0x001000000001e718
- (void)setConnectedProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;	// IMP=0x001000000001e69a
- (void)setConnectedProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;	// IMP=0x001000000001e62e
- (void)_storeProtobufAction:(SEL)arg1 messageType:(unsigned short)arg2 messageSendType:(long long)arg3 connectedOnly:(_Bool)arg4;	// IMP=0x001000000001e54c
- (void)handleIncomingMessage:(id)arg1;	// IMP=0x001000000001d611
- (void)invalidate;	// IMP=0x001000000001cbc0
- (void)dealloc;	// IMP=0x001000000001cb80
- (void)_resumeMessageDeliveryQueue;	// IMP=0x001000000001cb66
- (void)_suspendMessageDeliveryQueue;	// IMP=0x001000000001cb4c
- (id)initWithServiceName:(id)arg1 isAlwaysConnected:(_Bool)arg2 andClientQueue:(id)arg3 andDelegate:(id)arg4;	// IMP=0x001000000001c396
- (id)initWithServiceName:(id)arg1 andClientQueue:(id)arg2 andDelegate:(id)arg3;	// IMP=0x001000000001c37c
- (id)initWithServiceName:(id)arg1 andClientQueue:(id)arg2;	// IMP=0x001000000001c365
- (id)initWithServiceName:(id)arg1;	// IMP=0x001000000001c274
@property(retain, nonatomic) NSPointerArray *connectivityObservers; // @synthesize connectivityObservers=_connectivityObservers;
- (void)removeConnectivityObserver:(id)arg1;	// IMP=0x001000000001bfb6
- (void)addConnectivityObserver:(id)arg1;	// IMP=0x001000000001beec
@property(nonatomic) __weak id <NRRemoteObjectDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setDefaultPairedDevice:(id)arg1;	// IMP=0x001000000001bd32
- (id)_rawDefaultPairedDevice;	// IMP=0x001000000001bd2a
- (id)defaultPairedDevice;	// IMP=0x001000000001bd22
- (void)setIsAlwaysConnected:(_Bool)arg1;	// IMP=0x001000000001bd1c
@property(nonatomic, getter=isDisconnected) _Bool disconnected;
- (void)setHasAccounts:(_Bool)arg1;	// IMP=0x001000000001bd08
@property(readonly, nonatomic) _Bool hasAccounts; // @synthesize hasAccounts=_hasAccounts;
- (void)setDeviceUniqueIdentifiers:(id)arg1;	// IMP=0x001000000001bcfa
@property(readonly, nonatomic) NSSet *deviceUniqueIdentifiers;
- (void)_generateNearbyConnectedDelegateCalls;	// IMP=0x001000000001b7e4
- (void)_setIDSConnected:(_Bool)arg1;	// IMP=0x001000000001b7cf
- (void)_setIDSNearby:(_Bool)arg1;	// IMP=0x001000000001b7ba
- (void)setIDSConnected:(_Bool)arg1;	// IMP=0x001000000001b7b4
- (void)setIDSNearby:(_Bool)arg1;	// IMP=0x001000000001b7ae
- (_Bool)isIDSConnected;	// IMP=0x001000000001b7a6
- (_Bool)isIDSNearby;	// IMP=0x001000000001b79e
- (void)setIsIDSConnectedNotification:(_Bool)arg1;	// IMP=0x001000000001b798
- (_Bool)isIDSConnectedNotification;	// IMP=0x001000000001b790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

