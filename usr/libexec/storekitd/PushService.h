//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPushHandler, NSMapTable, NSMutableDictionary, NSString, PushConnection, PushDiagnostic;
@protocol OS_dispatch_queue;

@interface PushService : NSObject
{
    PushConnection *_connection;	// 8 = 0x8
    NSMapTable *_consumers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSString *_environment;	// 32 = 0x20
    NSMutableDictionary *_pendingMessages;	// 40 = 0x28
    AMSPushHandler *_pushHandler;	// 48 = 0x30
    PushDiagnostic *_pushDiagnostic;	// 56 = 0x38
    unsigned long long _stateHandle;	// 64 = 0x40
}

+ (id)_pushHandlerWithBagContract:(id)arg1;	// IMP=0x0020000000087fef
+ (id)sharedInstance;	// IMP=0x0010000000087998
- (void).cxx_destruct;	// IMP=0x0020000000088c8a
- (void)_unitTest_waitForSetup;	// IMP=0x0010000000088c6f
- (void)_queuePendingMessage:(id)arg1 withActionType:(id)arg2;	// IMP=0x0010000000088b8e
- (void)_processReceivedMessage:(id)arg1 withConnection:(id)arg2;	// IMP=0x001000000008877a
- (void)_initializeConnectionsAndSkipEnvironmentCheck:(_Bool)arg1;	// IMP=0x00100000000883fa
- (void)_handleBagChangedNotification:(id)arg1;	// IMP=0x0010000000088397
- (void)_flushPendingMessagesWithActionType:(id)arg1;	// IMP=0x00100000000880b2
- (void)pushConnection:(id)arg1 didRecieveMessage:(id)arg2;	// IMP=0x0010000000087f0f
- (void)unregisterConsumerForActionType:(unsigned long long)arg1;	// IMP=0x0010000000087e02
- (void)registerConsumer:(id)arg1 forActionType:(unsigned long long)arg2;	// IMP=0x0010000000087c89
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000087a01
- (id)init;	// IMP=0x00100000000879ed

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
