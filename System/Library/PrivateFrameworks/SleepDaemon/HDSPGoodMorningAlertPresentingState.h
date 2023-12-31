//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HDSPGoodMorningAlertStateMachineState.h"

__attribute__((visibility("hidden")))
@interface HDSPGoodMorningAlertPresentingState : HDSPGoodMorningAlertStateMachineState
{
}

- (void)sleepScheduleStateChangedToBedtime;	// IMP=0x0000000000045c59
- (id)stateName;	// IMP=0x0000000000045c4c
- (void)stateDidExpireWithContext:(id)arg1;	// IMP=0x0000000000045bdf
- (id)nextStateWithContext:(id *)arg1;	// IMP=0x00000000000458f6
- (void)didExitWithNextState:(id)arg1 context:(id)arg2;	// IMP=0x00000000000457f2
- (void)didEnterWithPreviousState:(id)arg1 context:(id)arg2;	// IMP=0x000000000004568f
- (_Bool)schedulesExpiration;	// IMP=0x0000000000045687
- (double)expirationDuration;	// IMP=0x0000000000045676

@end

