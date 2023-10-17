//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DirectionsWaypoint, GEOComposedRoute, GEOComposedRouteStep, GEOComposedRouteTraffic, GEODirectionsRequest, GEODirectionsResponse, GEOObserverHashTable, GEORouteAttributes, GuidanceETA, MNTraceRecordingData, NSArray, NSMutableArray, NSString, NSUUID, RouteSet, TransitDirectionsStepsListDataProvider;
@protocol GEOServerFormattedString, GEOTransitRoutingIncidentMessage;

@interface Route : NSObject
{
    CDStruct_02837cd9 _boundingMapRect;	// 8 = 0x8
    CDStruct_c3b9c2ee *_mapPoints;	// 40 = 0x28
    unsigned long long _mapPointsCount;	// 48 = 0x30
    NSMutableArray *_trafficIncidentsOnRoute;	// 56 = 0x38
    GEOObserverHashTable *_observers;	// 64 = 0x40
    DirectionsWaypoint *_origin;	// 72 = 0x48
    DirectionsWaypoint *_destination;	// 80 = 0x50
    NSArray *_waypoints;	// 88 = 0x58
    RouteSet *_routeSet;	// 96 = 0x60
    GEOComposedRoute *_composedRoute;	// 104 = 0x68
    unsigned long long _mode;	// 112 = 0x70
    GEODirectionsRequest *_directionsRequest;	// 120 = 0x78
    GEODirectionsResponse *_directionsResponse;	// 128 = 0x80
    MNTraceRecordingData *_traceRecordingData;	// 136 = 0x88
}

+ (void)initialize;	// IMP=0x00400000007e0528
- (void).cxx_destruct;	// IMP=0x00100000007e1fc8
@property(retain, nonatomic) MNTraceRecordingData *traceRecordingData; // @synthesize traceRecordingData=_traceRecordingData;
@property(readonly, nonatomic) GEODirectionsResponse *directionsResponse; // @synthesize directionsResponse=_directionsResponse;
@property(readonly, nonatomic) GEODirectionsRequest *directionsRequest; // @synthesize directionsRequest=_directionsRequest;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *mapPoints; // @synthesize mapPoints=_mapPoints;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) GEOComposedRoute *composedRoute; // @synthesize composedRoute=_composedRoute;
@property(readonly, nonatomic) __weak RouteSet *routeSet; // @synthesize routeSet=_routeSet;
@property(readonly, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
@property(readonly, nonatomic) DirectionsWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) DirectionsWaypoint *origin; // @synthesize origin=_origin;
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredSegment:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;	// IMP=0x00100000007e1f0f
- (void)composedRoute:(id)arg1 appliedTransitRouteUpdates:(id)arg2;	// IMP=0x00100000007e1f09
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;	// IMP=0x00100000007e1f03
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;	// IMP=0x00100000007e1efd
- (void)removeObserver:(id)arg1;	// IMP=0x00100000007e1ee7
- (void)addObserver:(id)arg1;	// IMP=0x00100000007e1ed1
@property(readonly, nonatomic, getter=isMultipointRoute) _Bool multipointRoute;
@property(readonly, nonatomic) NSArray *trafficIncidentsOnRoute;
@property(readonly, nonatomic) unsigned long long routeIndex;
- (CDStruct_c3b9c2ee)closestMapPointToMapPoint:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00100000007e1d1e
- (CDStruct_02837cd9)boundingRectForStep:(id)arg1;	// IMP=0x00100000007e1c70
- (CDStruct_02837cd9)boundingRectForStep:(id)arg1 fromPoint:(unsigned long long)arg2;	// IMP=0x00100000007e1b06
- (CDStruct_02837cd9)boundingRectForRoute;	// IMP=0x00100000007e1aee
- (CDStruct_c3b9c2ee)midPoint;	// IMP=0x00100000007e1a27
- (CDStruct_c3b9c2ee)endCoordinate;	// IMP=0x00100000007e1962
- (CDStruct_c3b9c2ee)startCoordinate;	// IMP=0x00100000007e18cf
- (id)travelTimeForInterval:(unsigned int)arg1;	// IMP=0x00100000007e18b9
- (id)abbreviatedTravelTimeForInterval:(unsigned int)arg1;	// IMP=0x00100000007e18a0
@property(readonly, nonatomic) NSString *expandedTravelTime;
@property(readonly, nonatomic) GEOComposedRouteTraffic *traffic;
- (id)_timeForSeconds:(unsigned long long)arg1 abbreviated:(_Bool)arg2;	// IMP=0x00100000007e1777
@property(readonly, nonatomic) NSString *expandedDistance;
@property(readonly, nonatomic) NSString *accessibilityExpandedDistance;
@property(readonly, nonatomic) GEOComposedRouteStep *lastStep;
@property(readonly, nonatomic) GEOComposedRouteStep *firstStep;
@property(readonly, nonatomic) id <GEOServerFormattedString> planningDescriptionFormatString;
@property(readonly, nonatomic) id <GEOServerFormattedString> pickingDurationFormatString;
@property(readonly, nonatomic) id <GEOServerFormattedString> previewDurationFormatString;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage;
@property(readonly) NSString *shortDescription;
@property(readonly, copy) NSString *description;
- (struct CLLocationCoordinate2D)_mkCoordAt:(unsigned int)arg1;	// IMP=0x00100000007e11db
- (void)dealloc;	// IMP=0x00100000007e1158
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000007e0f6e
- (void)updateTraffic;	// IMP=0x00100000007e0d1b
@property(readonly, nonatomic) GEORouteAttributes *routeAttributes;
@property(readonly, nonatomic) NSUUID *uniqueRouteID;
- (void)_createMapPoints;	// IMP=0x00100000007e0bb5
- (void)_routeSetOnly_setRouteSetWhenNil:(id)arg1;	// IMP=0x00100000007e0b51
- (void)_commonInit;	// IMP=0x00100000007e08dc
- (id)initWithComposedRoute:(id)arg1 inRouteSet:(id)arg2 generateNavTraceData:(_Bool)arg3;	// IMP=0x00100000007e05c2
- (id)initWithComposedRoute:(id)arg1 inRouteSet:(id)arg2;	// IMP=0x00100000007e05ad
- (id)initWithComposedRoute:(id)arg1;	// IMP=0x00100000007e0599
- (_Bool)_isStartWaypoint:(id)arg1;	// IMP=0x00100000001e399d
- (void)updateWaypointStyleAttributesWithItemSource:(id)arg1 personalizedItemManager:(id)arg2;	// IMP=0x001000000030c6a6
- (id)combinedDescriptionForFont:(id)arg1;	// IMP=0x001000000042e491
@property(readonly, nonatomic) _Bool avoidsTolls;
- (id)bookmarkRepresentation;	// IMP=0x0010000000890643
- (_Bool)shouldReturnToRoutePickerWhenEndingDirectionsAtStepIndex:(unsigned long long)arg1;	// IMP=0x0010000000a5e561
@property(readonly, nonatomic) GuidanceETA *guidanceETA;
@property(readonly, nonatomic) NSString *clientPickingDescription;
@property(readonly, nonatomic) NSString *clientPickingDuration;
@property(readonly, nonatomic) NSString *abbreviatedDistance;
@property(readonly, nonatomic) TransitDirectionsStepsListDataProvider *transitDirectionsStepsListDataProvider;
- (_Bool)carplayDestinationHandoffRequired;	// IMP=0x0010000000b5b954

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
