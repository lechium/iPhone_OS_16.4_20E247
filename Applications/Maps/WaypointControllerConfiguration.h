//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOMapServiceTraits, NSArray;
@protocol WaypointRequest;

@interface WaypointControllerConfiguration : NSObject
{
    GEOMapServiceTraits *_traits;	// 8 = 0x8
    NSArray *_requests;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000006f78b6
@property(readonly, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(readonly, nonatomic) GEOMapServiceTraits *traits; // @synthesize traits=_traits;
@property(readonly, nonatomic) id <WaypointRequest> destination;
@property(readonly, nonatomic) id <WaypointRequest> origin;
- (id)debugDescription;	// IMP=0x00100000006f7791
- (id)description;	// IMP=0x00100000006f76d8
- (id)initWithRequests:(id)arg1 traits:(id)arg2;	// IMP=0x00100000006f7574

@end
