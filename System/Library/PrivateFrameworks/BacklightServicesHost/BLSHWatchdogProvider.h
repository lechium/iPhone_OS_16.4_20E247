//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAbsoluteMachTimer;

__attribute__((visibility("hidden")))
@interface BLSHWatchdogProvider : NSObject
{
    BSAbsoluteMachTimer *_lock_fireRetryTimer;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    _Bool _watchdogEnabled;	// 20 = 0x14
}

+ (void)showWatchdogDidFireAlert:(id)arg1;	// IMP=0x0060000000040193
+ (void)resetWatchdogDidFire;	// IMP=0x0060000000040141
+ (_Bool)checkForWatchdogDidFire:(_Bool)arg1;	// IMP=0x006000000003feba
+ (void)markWatchdogDidFire:(id)arg1 abortReason:(id)arg2;	// IMP=0x006000000003fd01
- (void).cxx_destruct;	// IMP=0x00000000000406c7
@property(getter=isWatchdogEnabled) _Bool watchdogEnabled; // @synthesize watchdogEnabled=_watchdogEnabled;
- (void)didDetectSignificantUserInteraction;	// IMP=0x000000000003fc89
- (void)clearWatchdogWithExplanation:(id)arg1 timeout:(double)arg2 elapsedTime:(double)arg3;	// IMP=0x000000000003fb66
- (void)_fireWatchdogWithTimer:(id)arg1 delegate:(id)arg2 timeout:(double)arg3 elapsedTime:(double)arg4 abortContext:(id)arg5 explanation:(id)arg6 remainingRetries:(unsigned long long)arg7;	// IMP=0x000000000003f18d
- (void)fireWatchdogWithTimer:(id)arg1 delegate:(id)arg2 timeout:(double)arg3 elapsedTime:(double)arg4;	// IMP=0x000000000003ee9e
- (id)scheduleWatchdogWithDelegate:(id)arg1 explanation:(id)arg2 timeout:(double)arg3;	// IMP=0x000000000003edcc
- (void)registerHandlersForService:(id)arg1;	// IMP=0x000000000003eda7
- (void)dealloc;	// IMP=0x000000000003ed4d
- (id)init;	// IMP=0x000000000003ed0e

@end

