//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSDRelayPairedDeviceMessenger
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableSet *_identifiersWaitingForAcknowledgement;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000b6123
@property(retain, nonatomic) NSMutableSet *identifiersWaitingForAcknowledgement; // @synthesize identifiersWaitingForAcknowledgement=_identifiersWaitingForAcknowledgement;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)sendMessage:(id)arg1 timeout:(double)arg2 wantsAcknowledgement:(_Bool)arg3 maximumRetryAttempts:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000b57cf
- (void)sendMessage:(id)arg1 wantsAcknowledgement:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b579b
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b5784
- (void)_retryReliableMessageWithIdentifierIfNecessary:(id)arg1 message:(id)arg2 timeout:(double)arg3 maximumRetryAttempts:(unsigned long long)arg4;	// IMP=0x00100000000b54c5
- (id)_sendMessageOptionsWithTimeout:(double)arg1 wantsAcknowledgement:(_Bool)arg2;	// IMP=0x00100000000b5320
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00100000000b4f01
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000000b4d31
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x00100000000b4b37
- (void)dealloc;	// IMP=0x00100000000b4ac2
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000000b49d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

