//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol BSInvalidatable, BatteryMonitorToken, OS_dispatch_queue;

@interface IdleTimerController : NSObject
{
    _Bool _isForeground;	// 8 = 0x8
    NSMutableDictionary *_states;	// 16 = 0x10
    NSMutableDictionary *_applicableStates;	// 24 = 0x18
    id <BatteryMonitorToken> _batteryToken;	// 32 = 0x20
    _Bool _monitoringBattery;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    id <BSInvalidatable> _idleTimerAssertion;	// 56 = 0x38
    id _foregroundingObserverToken;	// 64 = 0x40
    id _backgroundingObserverToken;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000040e127
- (void)batteryMonitorTokenWitnessedChangeInBatteryLevel:(id)arg1;	// IMP=0x001000000040e121
- (void)batteryMonitorTokenWitnessedChangeInBatteryState:(id)arg1;	// IMP=0x001000000040e0c0
- (id)_reasonString;	// IMP=0x001000000040dd9e
- (id)_assertionReasonString;	// IMP=0x001000000040dd23
- (void)_updateForApplicationState:(_Bool)arg1;	// IMP=0x001000000040dcd5
- (void)_asyncUpdateForApplicationState:(_Bool)arg1;	// IMP=0x001000000040dbc1
- (void)_syncUpdateForApplicationState:(_Bool)arg1;	// IMP=0x001000000040daad
- (_Bool)_shouldIgnoreScene:(id)arg1;	// IMP=0x001000000040d9ff
- (void)_startObservingApplicationState;	// IMP=0x001000000040d6bd
- (_Bool)_idleTimerReasonPermittedInBackground:(unsigned long long)arg1;	// IMP=0x001000000040d6b0
- (void)_releaseIdleTimerAssertion;	// IMP=0x001000000040d60f
- (void)_takeIdleTimerAssertion;	// IMP=0x001000000040d470
- (void)_setIdleTimerDisabled:(_Bool)arg1;	// IMP=0x001000000040d435
- (void)_updateIdleTimer;	// IMP=0x001000000040d2e1
- (void)_updateBatteryMonitoring;	// IMP=0x001000000040d1eb
- (void)_setMonitoringBattery:(_Bool)arg1;	// IMP=0x001000000040d07e
- (void)_updateApplicableStates;	// IMP=0x001000000040ce8f
- (id)_summaryString;	// IMP=0x001000000040cafe
@property(readonly, copy) NSString *description;
- (void)_setDesiredIdleTimerState:(unsigned long long)arg1 forReason:(unsigned long long)arg2;	// IMP=0x001000000040c7f7
- (void)setDesiredIdleTimerState:(unsigned long long)arg1 forReason:(unsigned long long)arg2;	// IMP=0x001000000040c71a
- (void)dealloc;	// IMP=0x001000000040c666
- (id)init;	// IMP=0x001000000040c494

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
