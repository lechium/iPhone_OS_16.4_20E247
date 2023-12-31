//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADOpportuneSpeakingModuleEdgeDetector, AFQueue, AFWatchdogTimer, NSString;
@protocol ADRequestDelayManagerDelegate, OS_dispatch_queue;

@interface ADRequestDelayManager : NSObject
{
    AFQueue *_delayedCommandHandlers;	// 8 = 0x8
    AFQueue *_delayedcontextCommandHandlers;	// 16 = 0x10
    long long _delayType;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    ADOpportuneSpeakingModuleEdgeDetector *_detector;	// 40 = 0x28
    CDUnknownBlockType _stopListeningCompletion;	// 48 = 0x30
    AFWatchdogTimer *_currentContextCommandsTimer;	// 56 = 0x38
    _Bool _isDelaying;	// 64 = 0x40
    id <ADRequestDelayManagerDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000f2a12
@property _Bool isDelaying; // @synthesize isDelaying=_isDelaying;
@property(nonatomic) __weak id <ADRequestDelayManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)interceptCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f2634
- (_Bool)isInterceptingCommands;	// IMP=0x00100000000f2622
- (void)_delayForADOSMEDWithDelayType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f2127
- (float)_bargeInTimeThresholdForDelayType:(long long)arg1;	// IMP=0x00100000000f20de
- (void)_beginTimerForContextCommands;	// IMP=0x00100000000f1e33
- (void)beginTimerForContextCommands;	// IMP=0x00100000000f1dd2
- (void)releaseStoredContextCommandsAndSendCommands:(_Bool)arg1;	// IMP=0x00100000000f1be5
- (void)dequeueDelayedCommandsAndSend:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f1abe
- (void)_resetDetector;	// IMP=0x00100000000f194f
- (void)stopDelayingAndSendCommands:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f1738
- (void)sendMockInterruptedWithTypeSignal;	// IMP=0x00100000000f16fe
- (void)startDelayingWithType:(long long)arg1 success:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f1430
- (id)_detector;	// IMP=0x00100000000f1386
- (id)_delayedcontextCommandHandlers;	// IMP=0x00100000000f134b
- (id)_delayedCommandHandlers;	// IMP=0x00100000000f1310
- (id)initWithQueue:(id)arg1;	// IMP=0x00100000000f12a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

