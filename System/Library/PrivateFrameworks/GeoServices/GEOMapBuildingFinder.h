//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOMapRequest.h"

@class GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapBuildingFinder : GEOMapRequest
{
    GEOMapTileFinder *_tileFinder;	// 40 = 0x28
    CDStruct_2c43369c _centerCoordinate;	// 48 = 0x30
    double _radius;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000084b34e
- (void)findBuildingsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000084ae63
- (void)cancel;	// IMP=0x000000000084adfc
- (id)initWithMap:(id)arg1 centerCoordinate:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;	// IMP=0x000000000084ad0e

@end

