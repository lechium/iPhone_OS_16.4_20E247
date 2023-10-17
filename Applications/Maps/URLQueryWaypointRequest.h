//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ExternalURLQuery, MKMapItem, NSString;

@interface URLQueryWaypointRequest : NSObject
{
    ExternalURLQuery *_query;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000007c86bb
- (void)recordRAPInformation:(id)arg1;	// IMP=0x00100000007c86b5
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000007c8524
- (_Bool)isEquivalentToOtherRequest:(id)arg1;	// IMP=0x00100000007c84c9
@property(readonly, nonatomic) NSString *waypointName;
- (id)waypointIconWithScale:(double)arg1;	// IMP=0x00100000007c8478
@property(readonly, nonatomic) MKMapItem *mapItemForLocationComparison;
@property(readonly, nonatomic, getter=isCurrentLocation) _Bool currentLocation;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000007c83ed
- (id)initWithURLQuery:(id)arg1 title:(id)arg2;	// IMP=0x00100000007c82cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
