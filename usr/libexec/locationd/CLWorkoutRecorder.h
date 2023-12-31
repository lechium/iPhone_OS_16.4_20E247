//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLDispatchSilo, CLDrivingRecorderTrigger, CLServiceVendor, CLWeatherServiceData, CLWorkoutRecorderPublisher, CLWorkoutRecorderTrigger, NSString, NSURL;
@protocol CLWeatherServiceProtocol;

@interface CLWorkoutRecorder : CLIntersiloService
{
    NSURL *_workingDirectory;	// 8 = 0x8
    _Bool _deviceUnlocked;	// 16 = 0x10
    struct unique_ptr<CLDataProtectionManager_Type::Client, std::default_delete<CLDataProtectionManager_Type::Client>> _dataProtectionClient;	// 24 = 0x18
    CLWorkoutRecorderTrigger *_workoutRecorderTrigger;	// 32 = 0x20
    CLDrivingRecorderTrigger *_drivingRecorderTrigger;	// 40 = 0x28
    struct CLDaemonLocation _recentLocation;	// 48 = 0x30
    void *_serviceLocationProvider;	// 224 = 0xe0
    struct unique_ptr<CLServiceLocationProvider_Type::Client, std::default_delete<CLServiceLocationProvider_Type::Client>>;	// 232 = 0xe8
    id <CLWeatherServiceProtocol> _weatherServiceProxy;	// 240 = 0xf0
    CLWeatherServiceData *_recentWeatherData;	// 248 = 0xf8
    CLWorkoutRecorderPublisher *_publisher;	// 256 = 0x100
}

+ (_Bool)isSupported;	// IMP=0x0020000000ccebe8
+ (id)getSilo;	// IMP=0x0010000000ccea00
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000cce9e7
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000cce98a
- (id).cxx_construct;	// IMP=0x0020000000cd0909
- (void).cxx_destruct;	// IMP=0x0010000000cd08b7
@property(readonly, retain, nonatomic) CLWorkoutRecorderPublisher *publisher; // @synthesize publisher=_publisher;
- (void)didUpdateWeather:(id)arg1;	// IMP=0x0010000000cd0832
- (void)handleResponse:(id)arg1;	// IMP=0x0010000000cd0702
- (_Bool)workingDirectoryHasSufficientFreeSpace;	// IMP=0x0010000000cd0438
- (_Bool)createWorkingDirectory;	// IMP=0x0010000000ccfff2
- (_Bool)acquireTokenWithSettings:(void *)arg1 publisher:(id)arg2;	// IMP=0x0010000000ccfcc5
- (void)onLocationNotification:(const int *)arg1 data:(const void *)arg2;	// IMP=0x0010000000ccfca5
- (void)onDataProtectionNotification:(const int *)arg1 data:(const NotificationData_6933e140 *)arg2;	// IMP=0x0010000000ccfc23
- (id)getRecentWeatherData;	// IMP=0x0010000000ccfc12
- (struct CLDaemonLocation *)getRecentLocation;	// IMP=0x0010000000ccfc02
- (id)getWorkingDirectory;	// IMP=0x0010000000ccfbf1
- (_Bool)didPublishRecording:(id *)arg1 settings:(void *)arg2 publisher:(id)arg3;	// IMP=0x0010000000ccf83f
- (_Bool)canStartRecording:(id *)arg1 settings:(void *)arg2 publisher:(id)arg3;	// IMP=0x0010000000ccf25f
- (void)endService;	// IMP=0x0010000000ccf111
- (void)beginService;	// IMP=0x0010000000ccee05
- (void)dealloc;	// IMP=0x0010000000cceb4d
- (id)init;	// IMP=0x0010000000ccea5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) CLDispatchSilo *silo; // @dynamic silo;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;
@property(readonly, nonatomic) CLServiceVendor *vendor;

@end

