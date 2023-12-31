//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSString, UIImage;

@interface PlaceholderWaypointRequest : NSObject
{
    NSString *_name;	// 8 = 0x8
    MKMapItem *_mapItem;	// 16 = 0x10
    UIImage *_icon;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000019241d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000192412
- (void)recordRAPInformation:(id)arg1;	// IMP=0x001000000019240c
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000192404
- (_Bool)isEquivalentToOtherRequest:(id)arg1;	// IMP=0x0010000000192320
@property(readonly, nonatomic) MKMapItem *mapItemForLocationComparison;
@property(readonly, nonatomic, getter=isCurrentLocation) _Bool currentLocation;
@property(readonly, nonatomic) NSString *waypointName;
- (id)waypointIconWithScale:(double)arg1;	// IMP=0x001000000019225c
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)_maps_buildDescriptionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001921d1
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)initWithCLPlacemark:(id)arg1;	// IMP=0x0010000000191dc0
- (id)initWithName:(id)arg1 icon:(id)arg2;	// IMP=0x0010000000191d1c

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

