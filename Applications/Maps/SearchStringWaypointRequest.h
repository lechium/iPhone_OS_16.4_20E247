//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSString;
@protocol GEOCompletionItem;

@interface SearchStringWaypointRequest : NSObject
{
    NSString *_searchString;	// 8 = 0x8
    id <GEOCompletionItem> _completionItem;	// 16 = 0x10
    MKMapItem *_mapItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000031deb1
- (void)recordRAPInformation:(id)arg1;	// IMP=0x001000000031de17
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000031dd3d
- (_Bool)isEquivalentToOtherRequest:(id)arg1;	// IMP=0x001000000031dbf3
@property(readonly, nonatomic) NSString *waypointName;
- (id)waypointIconWithScale:(double)arg1;	// IMP=0x001000000031db09
@property(readonly, nonatomic) MKMapItem *mapItemForLocationComparison;
@property(readonly, nonatomic, getter=isCurrentLocation) _Bool currentLocation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)_maps_buildDescriptionWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000031d9f8
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000031d691
- (id)init;	// IMP=0x001000000031d5f0
- (id)initWithSearchString:(id)arg1;	// IMP=0x001000000031d5dc
- (id)initWithSearchString:(id)arg1 completionItem:(id)arg2;	// IMP=0x001000000031d49d

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

