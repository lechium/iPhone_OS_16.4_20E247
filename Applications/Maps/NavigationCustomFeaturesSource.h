//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, NSString;
@protocol NavigationCustomFeaturesPointsFraming, OS_dispatch_queue;

@interface NavigationCustomFeaturesSource
{
    _Bool _shouldUseDebugAttributes;	// 8 = 0x8
    _Bool _updatingCoalesced;	// 9 = 0x9
    long long _framingMode;	// 16 = 0x10
    id <NavigationCustomFeaturesPointsFraming> _pointsFramer;	// 24 = 0x18
    NSArray *_items;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_lockQueue;	// 40 = 0x28
    double _lastUpdateTimestamp;	// 48 = 0x30
    struct CLLocationCoordinate2D _overriddenPointToFrame;	// 56 = 0x38
    struct CLLocationCoordinate2D _lastUpdateLocation;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000265563
@property(nonatomic, getter=isUpdatingCoalesced) _Bool updatingCoalesced; // @synthesize updatingCoalesced=_updatingCoalesced;
@property(nonatomic) double lastUpdateTimestamp; // @synthesize lastUpdateTimestamp=_lastUpdateTimestamp;
@property(nonatomic) struct CLLocationCoordinate2D lastUpdateLocation; // @synthesize lastUpdateLocation=_lastUpdateLocation;
@property(nonatomic) _Bool shouldUseDebugAttributes; // @synthesize shouldUseDebugAttributes=_shouldUseDebugAttributes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue; // @synthesize lockQueue=_lockQueue;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) id <NavigationCustomFeaturesPointsFraming> pointsFramer; // @synthesize pointsFramer=_pointsFramer;
@property(nonatomic) struct CLLocationCoordinate2D overriddenPointToFrame; // @synthesize overriddenPointToFrame=_overriddenPointToFrame;
@property(nonatomic) long long framingMode; // @synthesize framingMode=_framingMode;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x0010000000265459
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x0010000000265453
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x001000000026544d
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x0010000000265447
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;	// IMP=0x0010000000265441
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;	// IMP=0x0010000000265439
- (void)locationManagerDidReset:(id)arg1;	// IMP=0x0010000000265427
- (void)locationManagerUpdatedLocation:(id)arg1;	// IMP=0x0010000000265415
- (void)removeMapItems;	// IMP=0x0010000000265347
- (void)displayMapItems:(id)arg1;	// IMP=0x0010000000265110
- (id)allItems;	// IMP=0x0010000000264feb
- (void)_updateLocationManager;	// IMP=0x0010000000264e1e
- (void)_updateFramingWithNewLocationIfNeeded;	// IMP=0x0010000000264ce0
- (void)_updateFraming;	// IMP=0x001000000026442a
- (void)_updateCoalesced;	// IMP=0x0010000000264319
- (void)dealloc;	// IMP=0x0010000000263f81
- (id)initWithPointsFramer:(id)arg1;	// IMP=0x0010000000263ea6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

