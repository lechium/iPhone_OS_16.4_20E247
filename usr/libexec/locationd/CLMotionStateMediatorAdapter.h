//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CLMotionStateMediatorAdapter
{
}

+ (id)getSilo;	// IMP=0x001000000025ae93
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x001000000025ae7a
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x001000000025ae1d
+ (_Bool)isSupported;	// IMP=0x001000000025ca13
- (void)resumeWorkout:(struct WorkoutSettings)arg1;	// IMP=0x002000000025c87e
- (void)pauseWorkout:(struct WorkoutSettings)arg1;	// IMP=0x001000000025c739
- (void)endWorkoutSession:(struct WorkoutSettings)arg1;	// IMP=0x001000000025c71a
- (void)setCurrentWorkoutType:(struct WorkoutSettings)arg1 isManualTransition:(_Bool)arg2;	// IMP=0x001000000025c569
- (void)beginWorkoutSession:(struct WorkoutSettings)arg1 withOverview:(CDUnknownBlockType)arg2 enableWorkoutChangeDetection:(_Bool)arg3;	// IMP=0x001000000025c01b
- (void)unregisterForWorkoutSessionUpdates:(byref id)arg1;	// IMP=0x001000000025bf23
- (void)registerForWorkoutSessionUpdates:(byref id)arg1;	// IMP=0x001000000025be2b
- (CDUnknownBlockType)syncgetActivityOverride;	// IMP=0x001000000025bc33
- (void)setWorkoutMode:(unsigned long long)arg1;	// IMP=0x001000000025bbd5
- (void)didTimeoutGeoFence;	// IMP=0x001000000025b9f7
- (void)didExitGeoFence;	// IMP=0x001000000025b7ec
- (void)lastKnownIndoorOutdoorStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000025b7af
- (void)triggerWorkoutLocationEventForTesting:(long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000025b76b
- (void)userDismissedWorkoutAlert;	// IMP=0x001000000025b676
- (void)setWorkoutSuggestedStopTimeout:(double)arg1;	// IMP=0x001000000025b537
- (void)removeClient:(byref id)arg1 prepareSessionEndForSessionType:(long long)arg2;	// IMP=0x001000000025b2d5
- (void)addClient:(byref id)arg1 prepareSessionEndForSessionType:(long long)arg2;	// IMP=0x001000000025b101
- (void)didUpdateWeather:(id)arg1;	// IMP=0x001000000025b0d5
- (void)onVisit:(id)arg1;	// IMP=0x001000000025b0a8
- (_Bool)syncgetDoSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000025b080
- (void)doAsync:(CDUnknownBlockType)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000025b053
- (void)doAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000025b02b
- (void *)adaptee;	// IMP=0x001000000025aff8
- (void)endService;	// IMP=0x001000000025afdd
- (void)beginService;	// IMP=0x001000000025af2c
- (id)init;	// IMP=0x001000000025aeef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
