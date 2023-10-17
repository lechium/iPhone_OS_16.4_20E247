//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLLocation, GCDTimer, GEOAlmanac, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MapsAstronomicalConditionMonitor
{
    GEOAlmanac *_daylightAlmanac;	// 8 = 0x8
    GEOAlmanac *_twilightAlmanac;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_computeQueue;	// 24 = 0x18
    _Bool _isBeforeSolarTransit;	// 32 = 0x20
    long long _astronomicalCondition;	// 40 = 0x28
    CLLocation *;	// 48 = 0x30
    GCDTimer *_timeCheckTimer;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000008419cf
@property(retain, nonatomic) GCDTimer *timeCheckTimer; // @synthesize timeCheckTimer=_timeCheckTimer;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, nonatomic) _Bool isBeforeSolarTransit; // @synthesize isBeforeSolarTransit=_isBeforeSolarTransit;
- (long long)_computeOnQueueAstronomicalConditionForTime:(double)arg1 currentLocation:(id)arg2 isBeforeSolarTransit:(_Bool *)arg3;	// IMP=0x0010000000841300
- (void)computeAstronomicalConditionForTime:(double)arg1 currentLocation:(id)arg2;	// IMP=0x001000000084110e
- (void)timeDidChangeSignificantly;	// IMP=0x0010000000841061
- (void)scheduleTimeCheck;	// IMP=0x0010000000840f10
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;	// IMP=0x0010000000840f08
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;	// IMP=0x0010000000840f02
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x0010000000840efc
- (void)locationManagerDidReset:(id)arg1;	// IMP=0x0010000000840ef6
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x0010000000840ef0
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x0010000000840eea
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x0010000000840ee4
- (void)locationManagerUpdatedLocation:(id)arg1;	// IMP=0x0010000000840e95
@property(nonatomic) long long astronomicalCondition; // @synthesize astronomicalCondition=_astronomicalCondition;
- (void)_setMonitoring:(_Bool)arg1;	// IMP=0x00100000008409c8
- (id)init;	// IMP=0x001000000084075c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
