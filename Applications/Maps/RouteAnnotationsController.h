//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, MKRouteContextBuilder, NSMutableDictionary, NSString, RouteAnnotationsConfiguration, RouteMarkerFormatterController, RouteTrafficFeatureCalculator, RouteTrafficFeaturesUpdater, VKPolylineGroupOverlay;
@protocol OS_dispatch_queue;

@interface RouteAnnotationsController : NSObject
{
    NSObject<OS_dispatch_queue> *_routeContextQueue;	// 8 = 0x8
    MKRouteContextBuilder *_routeContextBuilder;	// 16 = 0x10
    RouteAnnotationsConfiguration *_configuration;	// 24 = 0x18
    MKMapView *_mapView;	// 32 = 0x20
    RouteTrafficFeatureCalculator *_routeTrafficFeatureCalculator;	// 40 = 0x28
    RouteTrafficFeaturesUpdater *_trafficFeaturesUpdater;	// 48 = 0x30
    VKPolylineGroupOverlay *_routesGroupOverlay;	// 56 = 0x38
    RouteMarkerFormatterController *_routeMarkerFormatterController;	// 64 = 0x40
    NSMutableDictionary *_transitVehicleAnnotationsByTripID;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000072f221
@property(retain, nonatomic) NSMutableDictionary *transitVehicleAnnotationsByTripID; // @synthesize transitVehicleAnnotationsByTripID=_transitVehicleAnnotationsByTripID;
@property(retain, nonatomic) RouteMarkerFormatterController *routeMarkerFormatterController; // @synthesize routeMarkerFormatterController=_routeMarkerFormatterController;
@property(retain, nonatomic) VKPolylineGroupOverlay *routesGroupOverlay; // @synthesize routesGroupOverlay=_routesGroupOverlay;
@property(retain, nonatomic) RouteTrafficFeaturesUpdater *trafficFeaturesUpdater; // @synthesize trafficFeaturesUpdater=_trafficFeaturesUpdater;
@property(retain, nonatomic) RouteTrafficFeatureCalculator *routeTrafficFeatureCalculator; // @synthesize routeTrafficFeatureCalculator=_routeTrafficFeatureCalculator;
@property(retain, nonatomic) MKMapView *mapView; // @synthesize mapView=_mapView;
- (void)incidentsStorageManagerDidUpdateVendorIncidentFeatures;	// IMP=0x001000000072f192
- (void)incidentsSourceManagerDidUpdate;	// IMP=0x001000000072f180
- (void)didUpdateTrafficForRoute:(id)arg1;	// IMP=0x001000000072eb0d
- (void)routeMarkerFormatterController:(id)arg1 didUpdateMarkerInfoForRoutes:(id)arg2;	// IMP=0x001000000072e9e1
- (void)updateMatchedLocation:(id)arg1;	// IMP=0x001000000072e515
- (CDStruct_02837cd9)mapRectForRouteRemainingAtLocation:(id)arg1;	// IMP=0x001000000072e00f
- (void)_clearStaleVehiclePositionAnnotations;	// IMP=0x001000000072dc89
- (void)_updateAnnotationForVehiclePosition:(id)arg1;	// IMP=0x001000000072db07
- (void)updateRouteOverlayForRouteIndex:(unsigned long long)arg1;	// IMP=0x001000000072d4fb
- (void)_updateEVWaypointAnnotations;	// IMP=0x001000000072d417
- (void)_updateTransitVehiclePositionAnnotations;	// IMP=0x001000000072d191
- (void)_continueUpdateTrafficWithInitialTrafficFeatures:(id)arg1 sharedTrafficFeatures:(id)arg2 routes:(id)arg3 includeAlternateRoutes:(_Bool)arg4;	// IMP=0x001000000072c956
- (void)_updateTrafficWithInitialTrafficFeatures:(id)arg1;	// IMP=0x001000000072c5b3
- (void)_updateTrafficFeatures;	// IMP=0x001000000072bebb
- (void)_updateRouteMarkerForComposedRoute:(id)arg1 inContext:(id)arg2;	// IMP=0x001000000072b82d
- (void)_updateRouteMarkersInContext:(id)arg1;	// IMP=0x001000000072b655
- (void)_updateMapViewRouteContextForced:(_Bool)arg1 withFinishedHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000072a809
- (void)_updateFocusedOverlayInGroupOverlay;	// IMP=0x001000000072a43f
- (void)_updateSelectedOverlayInGroupOverlay;	// IMP=0x0010000000729f4f
- (void)_updateOverlaysInGroupOverlay;	// IMP=0x00100000007293a8
@property(copy, nonatomic) RouteAnnotationsConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)updateConfigurationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000072871b
- (void)_showRouteTrafficPreferenceChanged;	// IMP=0x0010000000728684
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000728580
- (id)_routeContextBuilder;	// IMP=0x0010000000728545
- (void)dealloc;	// IMP=0x0010000000727f95
- (id)init;	// IMP=0x0010000000727d6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
