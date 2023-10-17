//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedWaypoint, MKMapItem, NSString;

@interface GEOComposedWaypointRequest : NSObject
{
    GEOComposedWaypoint *_waypoint;	// 8 = 0x8
    MKMapItem *_mapItem;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000007e3a35
- (void)recordRAPInformation:(id)arg1;	// IMP=0x00100000007e394d
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000007e38d4
- (_Bool)isEquivalentToOtherRequest:(id)arg1;	// IMP=0x00100000007e37f1
@property(readonly, nonatomic) NSString *waypointName;
- (id)waypointIconWithScale:(double)arg1;	// IMP=0x00100000007e3740
@property(readonly, nonatomic) MKMapItem *mapItemForLocationComparison;
@property(readonly, nonatomic, getter=isCurrentLocation) _Bool currentLocation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)_maps_buildDescriptionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000007e3512
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000007e31af
- (id)init;	// IMP=0x00100000007e310e
- (id)initWithComposedWaypoint:(id)arg1;	// IMP=0x00100000007e309b

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
