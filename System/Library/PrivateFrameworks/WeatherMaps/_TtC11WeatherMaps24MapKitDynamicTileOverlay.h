//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/_MKDynamicTileOverlay.h>

@class MISSING_TYPE;

@interface _TtC11WeatherMaps24MapKitDynamicTileOverlay : _MKDynamicTileOverlay
{
    MISSING_TYPE *overlayDescriptor;	// 8 = 0x8
    MISSING_TYPE *tasks;	// 160 = 0xa0
    MISSING_TYPE *lock;	// 168 = 0xa8
    MISSING_TYPE *overlayRenderer;	// 176 = 0xb0
    MISSING_TYPE *timeConfiguration;	// 4624 = 0x1210
    MISSING_TYPE *blendMode;	// 1935904 = 0x1d8a20
    MISSING_TYPE *opacity;	// 0 = 0x0
    MISSING_TYPE *colorMap;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000178550
- (id)init;	// IMP=0x00000000001784f0
- (void)cancelLoadingTileAtPath:(CDStruct_68723fc0)arg1;	// IMP=0x0000000000178490
- (void)loadTileAtPath:(CDStruct_68723fc0)arg1 result:(CDUnknownBlockType)arg2;	// IMP=0x00000000001781f0

@end
