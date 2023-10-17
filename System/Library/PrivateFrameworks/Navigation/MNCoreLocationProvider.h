//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocationManager, MNLocationProviderCLParameters, NSBundle, NSRunLoop, NSString;
@protocol MNLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface MNCoreLocationProvider : NSObject
{
    _Bool _hasQueriedAuthorization;	// 8 = 0x8
    CLLocationManager *_clLocationManager;	// 16 = 0x10
    MNLocationProviderCLParameters *_clParameters;	// 24 = 0x18
    id <MNLocationProviderDelegate> _delegate;	// 32 = 0x20
    int _authorizationStatus;	// 40 = 0x28
    _Bool _coarseModeEnabled;	// 44 = 0x2c
    NSBundle *_effectiveBundle;	// 48 = 0x30
    NSString *_effectiveBundleIdentifier;	// 56 = 0x38
    double _distanceFilter;	// 64 = 0x40
    double _desiredAccuracy;	// 72 = 0x48
    _Bool _matchInfoEnabled;	// 80 = 0x50
    NSRunLoop *_debug_initRunLoop;	// 88 = 0x58
    NSRunLoop *_debug_deinitRunLoop;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000053ff3
@property(readonly, nonatomic) _Bool coarseModeEnabled; // @synthesize coarseModeEnabled=_coarseModeEnabled;
@property(nonatomic) __weak id <MNLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;	// IMP=0x0000000000053f12
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;	// IMP=0x0000000000053e84
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;	// IMP=0x0000000000053df6
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2;	// IMP=0x0000000000053c67
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2;	// IMP=0x0000000000053ad8
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x0000000000053aa2
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x0000000000053a01
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x00000000000538c3
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000000537bc
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;	// IMP=0x0000000000053760
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000000053108
- (void)stopMonitoringForRegion:(id)arg1;	// IMP=0x00000000000530f2
- (void)startMonitoringForRegion:(id)arg1;	// IMP=0x00000000000530dc
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) unsigned long long traceVersion;
@property(readonly, nonatomic) _Bool isTracePlayer;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(nonatomic) int headingOrientation;
@property(readonly, nonatomic) _Bool isAuthorized;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)_resetForNewEffectiveBundle;	// IMP=0x0000000000052a8d
- (void)resetForActiveTileGroupChanged;	// IMP=0x00000000000529d2
- (void)stopUpdatingVehicleHeading;	// IMP=0x0000000000052951
- (void)startUpdatingVehicleHeading;	// IMP=0x00000000000528d0
- (void)stopUpdatingVehicleSpeed;	// IMP=0x000000000005284f
- (void)startUpdatingVehicleSpeed;	// IMP=0x00000000000527ce
- (void)stopUpdatingHeading;	// IMP=0x0000000000052721
- (void)startUpdatingHeading;	// IMP=0x0000000000052647
- (void)requestLocation;	// IMP=0x000000000005259a
- (void)stopUpdatingLocation;	// IMP=0x00000000000524ae
- (void)startUpdatingLocation;	// IMP=0x00000000000521b9
- (void)setMatchInfoEnabled:(_Bool)arg1;	// IMP=0x00000000000521a0
- (void)setDesiredAccuracy:(double)arg1;	// IMP=0x0000000000052185
- (void)setDistanceFilter:(double)arg1;	// IMP=0x000000000005216f
- (void)_updateCoarseModeEnabled;	// IMP=0x000000000005200a
- (void)_updateAuthorizationStatus;	// IMP=0x0000000000051d3d
- (void)_updateForCLParameters:(id)arg1;	// IMP=0x0000000000051be1
@property(readonly, nonatomic) CLLocationManager *_clLocationManager;
- (void)_createCLLocationManager;	// IMP=0x000000000005158c
- (void)setCLParameters:(id)arg1;	// IMP=0x0000000000051532
- (void)_sharedInit;	// IMP=0x00000000000514fd
- (void)dealloc;	// IMP=0x00000000000511e9
- (id)initWithEffectiveBundleIdentifier:(id)arg1;	// IMP=0x0000000000051161
- (id)initWithEffectiveBundle:(id)arg1;	// IMP=0x00000000000510e6
- (id)init;	// IMP=0x000000000005109a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
