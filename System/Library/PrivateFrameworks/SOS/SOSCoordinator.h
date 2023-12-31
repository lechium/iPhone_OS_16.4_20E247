//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, SOSCoreAnalyticsReporting;

__attribute__((visibility("hidden")))
@interface SOSCoordinator : NSObject
{
    IDSService *_idsService;	// 8 = 0x8
    NSMutableArray *_processingEventUUIDs;	// 16 = 0x10
    NSObject<OS_dispatch_semaphore> *_eventProcessingSemaphore;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_eventUUIDArrayQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_pendingMessagesQueue;	// 40 = 0x28
    NSMutableDictionary *_pendingMessagesById;	// 48 = 0x30
    NSMutableDictionary *_pendingMessageRetriesById;	// 56 = 0x38
    _Bool _ackSuccess;	// 64 = 0x40
    NSHashTable *_observers;	// 72 = 0x48
    id <SOSCoreAnalyticsReporting> _coreAnalyticsReporter;	// 80 = 0x50
}

+ (id)sharedInstance;	// IMP=0x001000000001811c
- (void).cxx_destruct;	// IMP=0x000000000001a65f
@property(retain, nonatomic) id <SOSCoreAnalyticsReporting> coreAnalyticsReporter; // @synthesize coreAnalyticsReporter=_coreAnalyticsReporter;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void)reportHandoff:(long long)arg1 result:(long long)arg2;	// IMP=0x000000000001a5b6
- (long long)sourceDevice;	// IMP=0x000000000001a5ab
- (void)_updateStateForPairedDevice:(id)arg1;	// IMP=0x000000000001a380
- (void)_handleServiceUpdate:(id)arg1;	// IMP=0x000000000001a334
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x000000000001a29d
- (_Bool)isPairedDeviceNearby;	// IMP=0x000000000001a250
- (long long)SOSCoordinationMessageTypeForString:(id)arg1;	// IMP=0x000000000001a1af
- (id)effectivePairedDevice;	// IMP=0x000000000001a01a
- (void)sendAckToHandoffMessage:(id)arg1 success:(_Bool)arg2;	// IMP=0x0000000000019e6c
- (_Bool)shouldRetryMessage:(id)arg1;	// IMP=0x0000000000019e02
- (_Bool)_sendUrgentMessageToPairedDevice:(id)arg1 retries:(id)arg2;	// IMP=0x0000000000019a33
- (_Bool)sendUrgentMessageToPairedDevice:(id)arg1;	// IMP=0x0000000000019a1a
- (void)sendUpdateToObserversWithStatus:(id)arg1 progression:(long long)arg2 shouldHandleThirdParty:(_Bool)arg3;	// IMP=0x0000000000019882
- (void)handleSOSMessageTypeProgressionSync:(id)arg1;	// IMP=0x0000000000019660
- (void)handleSOSMessageTypeHandoffSOS:(id)arg1;	// IMP=0x0000000000019457
- (void)handleSOSMessageTypeHandoffSOSAck:(id)arg1;	// IMP=0x0000000000019374
- (_Bool)isIncomingMessageValidHandoffAck:(id)arg1;	// IMP=0x0000000000019157
- (_Bool)isIncomingMessageValidSOSHandoff:(id)arg1;	// IMP=0x0000000000019083
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x0000000000018d14
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;	// IMP=0x0000000000018bf7
- (void)syncProgressionWithPairedDevice:(long long)arg1 sosStatus:(id)arg2;	// IMP=0x0000000000018990
- (_Bool)processEventWithUUID:(id)arg1 triggerMechanism:(long long)arg2;	// IMP=0x0000000000018627
- (_Bool)tryPushToPairedDeviceWithUUID:(id)arg1 triggerMechanism:(long long)arg2;	// IMP=0x0000000000018536
- (_Bool)shouldHandoffToPairedDevice:(long long)arg1;	// IMP=0x0000000000018498
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000018426
- (void)addObserver:(id)arg1;	// IMP=0x00000000000183b4
- (void)dealloc;	// IMP=0x000000000001836f
- (id)init;	// IMP=0x00000000000181a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

