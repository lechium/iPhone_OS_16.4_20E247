//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/HKSPPersistentStateMachineState.h>

@class HDSPChargingReminderStateMachine, NSString;

__attribute__((visibility("hidden")))
@interface HDSPChargingReminderStateMachineState : HKSPPersistentStateMachineState
{
}

- (void)batteryLevelChanged:(float)arg1;	// IMP=0x0000000000081a1f
- (_Bool)_inMonitoringWindow;	// IMP=0x0000000000081944
- (_Bool)isChargingReminderDisabled;	// IMP=0x0000000000081745
- (id)nextStateWithContext:(id *)arg1;	// IMP=0x0000000000081603

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak HDSPChargingReminderStateMachine *stateMachine; // @dynamic stateMachine;
@property(readonly) Class superclass;

@end

