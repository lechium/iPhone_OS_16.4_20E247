//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CMWorkout, CMWorkoutManager, CMWorkoutOverview;
@protocol CMWorkoutManagerDelegate, OS_dispatch_queue;

@interface CMWorkoutManagerInternal : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 16 = 0x10
    id <CMWorkoutManagerDelegate> fDelegate;	// 24 = 0x18
    CMWorkoutManager *fSender;	// 32 = 0x20
    CMWorkout *fLastNonTransitionWorkout;	// 40 = 0x28
    CMWorkout *fWorkout;	// 48 = 0x30
    CMWorkoutOverview *fWorkoutOverview;	// 56 = 0x38
    _Bool fEnableWorkoutChangeDetection;	// 64 = 0x40
    long long fSessionState;	// 72 = 0x48
}

- (void)_checkWorkout:(id)arg1;	// IMP=0x0000000000215011
- (void)_resumeWorkout:(id)arg1;	// IMP=0x0000000000214cf6
- (void)_pauseWorkout:(id)arg1;	// IMP=0x00000000002149db
- (void)_endWorkoutSession:(id)arg1;	// IMP=0x000000000021468d
- (void)_setWorkout:(id)arg1;	// IMP=0x0000000000214632
- (void)_setCurrentWorkoutType:(id)arg1 isManualTransition:(_Bool)arg2;	// IMP=0x0000000000214283
- (void)_beginWorkoutSession:(id)arg1 withWorkout:(id)arg2 enableWorkoutChangeDetection:(_Bool)arg3;	// IMP=0x0000000000213d41
- (void)_getPromptsNeededForWorkoutType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002138de
- (_Bool)_shouldAllowMotionCalibrationPromptsForWorkoutType:(long long)arg1;	// IMP=0x00000000002138c1
- (void)_unregisterForWorkoutEvents;	// IMP=0x000000000021362c
- (void)_registerForWorkoutEvents;	// IMP=0x0000000000213394
- (void)_handleDaemonEvent:(id)arg1;	// IMP=0x0000000000211aec
- (void)_handleDaemonResponse:(id)arg1;	// IMP=0x000000000021177f
- (void)_setMode:(unsigned long long)arg1 forWorkout:(id)arg2;	// IMP=0x00000000002111f4
- (void)_triggerWorkoutLocationUpdateForTesting:(long long)arg1;	// IMP=0x0000000000210e69
- (void)_userDismissedWorkoutAlert;	// IMP=0x0000000000210c66
- (void)_setSuggestedStopTimeout:(double)arg1;	// IMP=0x000000000021094a
- (void)_stopWorkout:(id)arg1;	// IMP=0x00000000002107e5
- (void)_startWorkout:(id)arg1;	// IMP=0x0000000000210613
- (void)_teardown;	// IMP=0x0000000000210552
- (void)dealloc;	// IMP=0x0000000000210518
- (id)init;	// IMP=0x0000000000210054

@end
