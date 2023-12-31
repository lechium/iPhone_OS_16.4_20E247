//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEORouteMatcher.h"

__attribute__((visibility("hidden")))
@interface GEOWalkingRouteMatcher : GEORouteMatcher
{
    unsigned long long _newStepProgressions;	// 8 = 0x8
}

- (_Bool)_supportsSnapping;	// IMP=0x00000000006e50aa
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x00000000006e4dc0
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;	// IMP=0x00000000006e49f9
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeCoordinate:(struct PolylineCoordinate)arg2;	// IMP=0x00000000006e49c0
- (double)_maxMatchDistance:(double)arg1 routeCoordinate:(struct PolylineCoordinate)arg2 previousMatchGood:(_Bool)arg3;	// IMP=0x00000000006e4926
- (id)initWithRoute:(id)arg1;	// IMP=0x00000000006e487a

@end

