//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RSWallOpeningOnlineDetector : NSObject
{
    struct Lcnn_floorplan_detector _lcnnDetector;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000000ff0cb
- (void).cxx_destruct;	// IMP=0x00000000000ff0bd
- (const void *)lmap;	// IMP=0x00000000000ff0b0
- (const void *)lmapOfWall;	// IMP=0x00000000000ff0a3
- (id)runWithSemanticImage:(id)arg1 geometryMeta:(id)arg2;	// IMP=0x00000000000fed6c
- (id)convertLcnnResultTo3DSurface:(const void *)arg1 withSurfaceType:(unsigned char)arg2 scale:(float)arg3 shift: /* Error: Ran out of types for this method. */;	// IMP=0x00000000000feb8a
- (id)initWithAllocedInput:(struct __CVBuffer *)arg1;	// IMP=0x00000000000fc4e7

@end
