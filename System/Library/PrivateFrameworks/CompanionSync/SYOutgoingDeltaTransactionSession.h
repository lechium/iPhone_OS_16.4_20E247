//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SYSession.h"

@class NSObject, _SYCountedSemaphore, _SYMessageTimerTable;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

__attribute__((visibility("hidden")))
@interface SYOutgoingDeltaTransactionSession : SYSession
{
    NSObject<OS_dispatch_source> *_stateUpdateSource;	// 8 = 0x8
    NSObject<OS_os_activity> *_sessionActivity;	// 16 = 0x10
    unsigned int _state;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_changeFetcherQueue;	// 32 = 0x20
    _SYCountedSemaphore *_changeConcurrencySemaphore;	// 40 = 0x28
    NSObject<OS_os_activity> *_changeWaitActivity;	// 48 = 0x30
    _SYMessageTimerTable *_timers;	// 56 = 0x38
    _Bool _canRestart;	// 64 = 0x40
    _Bool _canRollback;	// 65 = 0x41
    _Bool _cancelled;	// 66 = 0x42
}

- (void).cxx_destruct;	// IMP=0x000000000001d429
- (_Bool)wasCancelled;	// IMP=0x000000000001d417
- (void)setCanRollback:(_Bool)arg1;	// IMP=0x000000000001d407
- (_Bool)canRollback;	// IMP=0x000000000001d3f5
- (void)setCanRestart:(_Bool)arg1;	// IMP=0x000000000001d3e5
- (_Bool)canRestart;	// IMP=0x000000000001d3d3
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000001d3b6
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000001d33b
- (void)cancelWithError:(id)arg1;	// IMP=0x000000000001d25d
- (void)start:(CDUnknownBlockType)arg1;	// IMP=0x000000000001cb76
- (void)_installStateListener;	// IMP=0x000000000001ca5e
- (void)_setMessageTimerForSeqno:(unsigned long long)arg1;	// IMP=0x000000000001c9b4
- (void)_processNextState;	// IMP=0x000000000001c77e
- (void)_messageExpiredWithSeqno:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x000000000001c699
- (void)_notifySessionComplete;	// IMP=0x000000000001c472
- (void)_sendSyncBatch:(id)arg1 nextState:(unsigned int)arg2;	// IMP=0x000000000001c0d5
- (void)_fetchNextBatch;	// IMP=0x000000000001baea
- (void)_waitForMessageWindow;	// IMP=0x000000000001b8d8
- (void)_setupChangeConcurrency;	// IMP=0x000000000001b808
- (unsigned long long)protocolVersion;	// IMP=0x000000000001b7fd
- (_Bool)isSending;	// IMP=0x000000000001b7f5
- (_Bool)isResetSync;	// IMP=0x000000000001b7ed
- (void)_setStateQuietly:(unsigned int)arg1;	// IMP=0x000000000001b6b4
- (void)setState:(unsigned int)arg1;	// IMP=0x000000000001b52b
- (unsigned int)state;	// IMP=0x000000000001b51b
- (id)initWithService:(id)arg1;	// IMP=0x000000000001b20c

@end

