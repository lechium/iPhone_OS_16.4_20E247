//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SYSession.h"

@class NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_os_activity;

__attribute__((visibility("hidden")))
@interface SYOutgoingSyncAllObjectsSession : SYSession
{
    NSObject<OS_os_activity> *_sessionActivity;	// 8 = 0x8
    unsigned int _state;	// 16 = 0x10
    _Bool _errorIsLocal;	// 20 = 0x14
    NSObject<OS_dispatch_source> *_stateUpdateSource;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_sessionTimer;	// 32 = 0x20
    double _sessionStartTime;	// 40 = 0x28
    NSMutableArray *_changesToSend;	// 48 = 0x30
    _Bool _cancelled;	// 56 = 0x38
    _Bool canRestart;	// 57 = 0x39
    _Bool canRollback;	// 58 = 0x3a
}

- (void).cxx_destruct;	// IMP=0x00000000000334dc
- (void)setCanRollback:(_Bool)arg1;	// IMP=0x00000000000334cc
- (_Bool)canRollback;	// IMP=0x00000000000334ba
- (void)setCanRestart:(_Bool)arg1;	// IMP=0x00000000000334aa
- (_Bool)canRestart;	// IMP=0x0000000000033498
- (_Bool)wasCancelled;	// IMP=0x0000000000033486
- (_Bool)_handleBatchSyncEndResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000033211
- (void)cancelWithError:(id)arg1;	// IMP=0x0000000000033111
- (void)start:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032a18
- (void)_installStateListener;	// IMP=0x0000000000032900
- (void)_installTimers;	// IMP=0x00000000000325ec
- (void)_processNextState;	// IMP=0x00000000000323cd
- (void)_sessionCompleteWithError:(id)arg1;	// IMP=0x00000000000321b7
- (void)_sessionFailed;	// IMP=0x000000000003212a
- (void)_sendChanges;	// IMP=0x0000000000031e56
- (void)_fetchChanges;	// IMP=0x0000000000031787
- (double)remainingSessionTime;	// IMP=0x0000000000031716
- (unsigned long long)protocolVersion;	// IMP=0x000000000003170b
- (_Bool)isSending;	// IMP=0x0000000000031703
- (_Bool)isResetSync;	// IMP=0x00000000000316fb
- (void)_setStateQuietly:(unsigned int)arg1;	// IMP=0x00000000000315c6
- (void)setState:(unsigned int)arg1;	// IMP=0x000000000003147c
- (unsigned int)state;	// IMP=0x0000000000031440
- (id)initWithService:(id)arg1;	// IMP=0x00000000000312f0

@end
