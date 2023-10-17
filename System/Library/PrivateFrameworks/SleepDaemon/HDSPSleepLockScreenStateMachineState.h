//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPPersistentStateMachineState.h>

@class HDSPSleepLockScreenStateMachine, NSString;

__attribute__((visibility("hidden")))
@interface HDSPSleepLockScreenStateMachineState : HKSPPersistentStateMachineState
{
}

- (_Bool)_isSleepLockScreenDisabled;	// IMP=0x00000000000180a9
@property(readonly, nonatomic) long long sleepLockScreenState;
- (void)sleepModeDidChange:(long long)arg1 reason:(unsigned long long)arg2;	// IMP=0x0000000000017fe8
- (void)environmentDidBecomeReady;	// IMP=0x0000000000017f43
- (id)_nextStateForSleepMode:(long long)arg1 reason:(unsigned long long)arg2 context:(id *)arg3;	// IMP=0x0000000000017cd3
- (id)nextStateWithContext:(id *)arg1;	// IMP=0x0000000000017c15
- (void)dismissAlertForGoodMorning;	// IMP=0x0000000000017c0f
- (void)presentAlertForGoodMorning;	// IMP=0x0000000000017a60
- (void)didEnterWithPreviousState:(id)arg1 context:(id)arg2;	// IMP=0x0000000000017983

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HDSPSleepLockScreenStateMachine *stateMachine; // @dynamic stateMachine;
@property(readonly) Class superclass;

@end
