//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSMutableDictionary, NSString;

@interface CLDuetMonitor : CLIntersiloService
{
    NSMutableDictionary *_registeredEvents;	// 8 = 0x8
}

+ (_Bool)isSupported;	// IMP=0x00200000004d327f
+ (id)getSilo;	// IMP=0x00100000004d3223
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000004d320a
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000004d31ad
@property(retain, nonatomic) NSMutableDictionary *registeredEvents; // @synthesize registeredEvents=_registeredEvents;
- (void)notifyClient:(id)arg1 ofNowPlaying:(id)arg2;	// IMP=0x00100000004d588c
- (void)notifyClient:(id)arg1 ofHomeKitAppView:(id)arg2;	// IMP=0x00100000004d55a6
- (void)notifyClient:(id)arg1 ofHomeKitAccessory:(id)arg2;	// IMP=0x00100000004d51cf
- (void)notifyClient:(id)arg1 ofHomeKitScene:(id)arg2;	// IMP=0x00100000004d4e63
- (void)notifyClient:(id)arg1 ofForegroundAppWithValue:(id)arg2;	// IMP=0x00100000004d4c38
- (void)notifyClient:(id)arg1 ofEvent:(long long)arg2 withValue:(id)arg3;	// IMP=0x00100000004d4b84
- (long long)eventTypeFromNSNumber:(id)arg1;	// IMP=0x00100000004d4b4f
- (id)streamForEvent:(long long)arg1;	// IMP=0x00100000004d4b20
- (id)predicateForEvent:(long long)arg1 withKeyPath:(id)arg2;	// IMP=0x00100000004d4a74
- (id)keypathForEvent:(long long)arg1;	// IMP=0x00100000004d49cb
- (void)stopMonitoringForClient:(byref id)arg1;	// IMP=0x00100000004d477a
- (void)stopMonitoringEvent:(long long)arg1 withPredicate:(id)arg2 forClient:(byref id)arg3;	// IMP=0x00100000004d4567
- (void)stopMonitoringEvents:(id)arg1 forClient:(byref id)arg2;	// IMP=0x00100000004d43ac
- (void)registerWithDuetForEvent:(long long)arg1 andPredicate:(id)arg2;	// IMP=0x00100000004d3ec4
- (void)registerClient:(id)arg1 forEvent:(long long)arg2 withPredicate:(id)arg3;	// IMP=0x00100000004d3ca9
- (void)stopMonitoringNowPlayingForClient:(byref id)arg1;	// IMP=0x00100000004d3c30
- (void)startMonitoringNowPlayingForClient:(byref id)arg1;	// IMP=0x00100000004d3bb7
- (void)stopMonitoringHomeKitAppViewForClient:(byref id)arg1;	// IMP=0x00100000004d3b3e
- (void)startMonitoringHomeKitAppViewForClient:(byref id)arg1;	// IMP=0x00100000004d3ac5
- (void)stopMonitoringHomeKitAccessoryForClient:(byref id)arg1;	// IMP=0x00100000004d3a4c
- (void)startMonitoringHomeKitAccessoryForClient:(byref id)arg1;	// IMP=0x00100000004d39d3
- (void)stopMonitoringHomeKitSceneForClient:(byref id)arg1;	// IMP=0x00100000004d395a
- (void)startMonitoringHomeKitSceneForClient:(byref id)arg1;	// IMP=0x00100000004d38e1
- (void)stopMonitoringFirstWakeOfDayForClient:(byref id)arg1;	// IMP=0x00100000004d3868
- (void)startMonitoringFirstWakeOfDayForClient:(byref id)arg1;	// IMP=0x00100000004d37ef
- (void)stopMonitoringBluetoothConnectedForClient:(byref id)arg1;	// IMP=0x00100000004d3776
- (void)startMonitoringBluetoothConnectedForClient:(byref id)arg1;	// IMP=0x00100000004d36fd
- (void)stopMonitoringAudioOutputRouteConnectedForClient:(byref id)arg1;	// IMP=0x00100000004d3684
- (void)startMonitoringAudioOutputRouteConnectedForClient:(byref id)arg1;	// IMP=0x00100000004d360b
- (void)stopMonitoringForegroundAppLaunchWithPredicate:(id)arg1 forClient:(byref id)arg2;	// IMP=0x00100000004d35b7
- (void)startMonitoringForegroundAppLaunchWithPredicate:(id)arg1 forClient:(byref id)arg2;	// IMP=0x00100000004d3563
- (void)stopMonitoringForegroundAppLaunchForClient:(byref id)arg1;	// IMP=0x00100000004d34ea
- (void)startMonitoringForegroundAppLaunchForClient:(byref id)arg1;	// IMP=0x00100000004d3476
- (id)init;	// IMP=0x00100000004d3439
- (void)endService;	// IMP=0x00100000004d33fc
- (void)beginService;	// IMP=0x00100000004d33ad
- (void)dealloc;	// IMP=0x00100000004d336d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

