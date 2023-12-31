//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNActiveRouteInfo, MNLocation, MNNavigationSessionState, NSArray, NSString, NSTimer;
@protocol MNTimeAndDistanceUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNTimeAndDistanceUpdater : NSObject
{
    id <MNTimeAndDistanceUpdaterDelegate> _delegate;	// 8 = 0x8
    MNLocation *_location;	// 16 = 0x10
    NSArray *_routes;	// 24 = 0x18
    NSTimer *_minuteTimer;	// 32 = 0x20
    MNActiveRouteInfo *_mainRoute;	// 40 = 0x28
    unsigned long long _currentLogType;	// 48 = 0x30
    MNNavigationSessionState *_navigationSessionState;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000af8f0
@property(copy, nonatomic) MNNavigationSessionState *navigationSessionState; // @synthesize navigationSessionState=_navigationSessionState;
@property(nonatomic) __weak id <MNTimeAndDistanceUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_logDisplayETAInfo:(id)arg1 logType:(unsigned long long)arg2;	// IMP=0x00000000000af702
- (void)_startTimerToNextMinute;	// IMP=0x00000000000af33d
- (id)_batteryChargeInfoForRoute:(id)arg1 routeCoordinate:(CDStruct_3f2a7a20)arg2;	// IMP=0x00000000000aefe8
- (id)_routeDistanceInfoForRoute:(id)arg1 routeCoordinate:(CDStruct_3f2a7a20)arg2;	// IMP=0x00000000000aee03
- (id)_displayETAInfoForRoute:(id)arg1 routeCoordinate:(CDStruct_3f2a7a20)arg2;	// IMP=0x00000000000ae166
- (void)updateDisplayETAForRoute:(id)arg1 notificationType:(unsigned long long)arg2;	// IMP=0x00000000000ad78a
- (void)setRoutes:(id)arg1 mainRoute:(id)arg2 location:(id)arg3 notificationType:(unsigned long long)arg4;	// IMP=0x00000000000ad4fe
- (void)setLocation:(id)arg1 notificationType:(unsigned long long)arg2;	// IMP=0x00000000000ad183
- (void)stopUpdating;	// IMP=0x00000000000ad16d
- (void)startUpdating;	// IMP=0x00000000000ad15b
- (void)dealloc;	// IMP=0x00000000000ad11d
- (id)initWithNavigationSessionState:(id)arg1;	// IMP=0x00000000000ad09f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

