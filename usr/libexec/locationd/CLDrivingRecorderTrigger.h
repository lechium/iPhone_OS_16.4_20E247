//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLTimer;

@interface CLDrivingRecorderTrigger
{
    struct unique_ptr<CLMotionStateObserver_Type::Client, std::default_delete<CLMotionStateObserver_Type::Client>> _motionStateObserverClient;	// 8 = 0x8
    _Bool _enableVehicularNotifications;	// 16 = 0x10
    CLTimer *_deferredStartTimer;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0020000000cf2e42
- (void).cxx_destruct;	// IMP=0x0010000000cf2e1a
- (void)onDeferredStopTimerShouldPublish:(_Bool)arg1;	// IMP=0x0010000000cf2dc1
- (void)onDeferredStartTimerSpecifyTriggerDelay:(double)arg1;	// IMP=0x0010000000cf2c31
- (void)onMotionStateObserverNotification:(const int *)arg1 data:(const NotificationData_6024acef *)arg2;	// IMP=0x0010000000cf2a30
- (void)teardownListeners;	// IMP=0x0010000000cf2956
- (void)cancelDeferredStartTimer;	// IMP=0x0010000000cf291d
- (void)scheduleStart;	// IMP=0x0010000000cf25bb
- (void)setupListeners;	// IMP=0x0010000000cf2410
- (void)dealloc;	// IMP=0x0010000000cf23bd
- (id)initWithDelegate:(id)arg1 andUniverse:(id)arg2;	// IMP=0x0010000000cf21c2

@end
