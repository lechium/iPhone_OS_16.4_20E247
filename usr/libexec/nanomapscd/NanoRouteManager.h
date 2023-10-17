//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOAutomobileOptions, GEOCyclingOptions, GEODirectionsRequestFeedback, GEODirectionsServiceRequest, GEOLocation, GEORouteAttributes, GEOTransitOptions, GEOWalkingOptions, NSArray, NSDate;

@interface NanoRouteManager : NSObject
{
    GEODirectionsServiceRequest *_pendingRequest;	// 8 = 0x8
    double _requestTimestamp;	// 16 = 0x10
    GEORouteAttributes *_routeAttributes;	// 24 = 0x18
    _Bool _fromCurrentLocation;	// 32 = 0x20
    int _desiredTransportType;	// 36 = 0x24
    unsigned int _routeState;	// 40 = 0x28
    NSArray *_waypoints;	// 48 = 0x30
    GEOLocation *_currentLocation;	// 56 = 0x38
    CDUnknownBlockType _completionHandler;	// 64 = 0x40
    NSDate *_departureDate;	// 72 = 0x48
    NSDate *_arrivalDate;	// 80 = 0x50
    GEOAutomobileOptions *_automobileOptions;	// 88 = 0x58
    GEOTransitOptions *_transitOptions;	// 96 = 0x60
    GEOWalkingOptions *_walkingOptions;	// 104 = 0x68
    GEOCyclingOptions *_cyclingOptions;	// 112 = 0x70
    GEODirectionsRequestFeedback *_feedback;	// 120 = 0x78
    unsigned long long _maximumNumberOfRoutes;	// 128 = 0x80
    GEOApplicationAuditToken *_auditToken;	// 136 = 0x88
}

+ (id)defaultRouteAttributesForNavigationOfType:(int)arg1;	// IMP=0x004000000001fa25
- (void).cxx_destruct;	// IMP=0x0020000000020eaa
@property(nonatomic) unsigned int routeState; // @synthesize routeState=_routeState;
@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) unsigned long long maximumNumberOfRoutes; // @synthesize maximumNumberOfRoutes=_maximumNumberOfRoutes;
@property(retain, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
@property(retain, nonatomic) GEOCyclingOptions *cyclingOptions; // @synthesize cyclingOptions=_cyclingOptions;
@property(retain, nonatomic) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;
@property(retain, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property(retain, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(retain, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(retain, nonatomic) NSDate *departureDate; // @synthesize departureDate=_departureDate;
@property(nonatomic) _Bool fromCurrentLocation; // @synthesize fromCurrentLocation=_fromCurrentLocation;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) GEOLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, nonatomic) NSArray *waypoints; // @synthesize waypoints=_waypoints;
@property(readonly, nonatomic) int desiredTransportType; // @synthesize desiredTransportType=_desiredTransportType;
- (void)_handleDirectionsResponse:(id)arg1 forRequest:(id)arg2 waypoints:(id)arg3 error:(id)arg4 directionsError:(id)arg5;	// IMP=0x00100000000207b1
- (void)cancel;	// IMP=0x0010000000020725
- (void)loadNewRouteSet;	// IMP=0x00100000000203e2
- (void)_addTimepointIfNeededToRouteAttributes:(id)arg1;	// IMP=0x001000000002027c
- (id)_directionsRequestParameters;	// IMP=0x001000000001fc12
- (void)_setupFeedbackIfNeeded;	// IMP=0x001000000001fb1a
- (id)initWithWaypoints:(id)arg1 type:(int)arg2 currentLocation:(id)arg3 fromCurrentLocation:(_Bool)arg4 withFeedback:(id)arg5;	// IMP=0x001000000001f95a
- (id)init;	// IMP=0x001000000001f91b
- (void)dealloc;	// IMP=0x001000000001f8c8

@end
