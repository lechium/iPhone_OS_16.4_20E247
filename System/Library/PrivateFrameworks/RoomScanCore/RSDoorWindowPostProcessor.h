//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface RSDoorWindowPostProcessor : NSObject
{
}

- (void)merge_door_instances:(id)arg1 withWall:(id)arg2 mergedCloseDoors:(id)arg3 mergedOpenDoors:(id)arg4;	// IMP=0x00000000001a21b7
- (id)make_merged_instance:(id)arg1 withFirstPoint:(float)arg2 withLastPoint:withConfidence: /* Error: Ran out of types for this method. */;	// IMP=0x00000000001a20eb
- (void)make_corners_order_consistent_with_wall:(id)arg1 withWalls:(id)arg2;	// IMP=0x00000000001a1d2c
- (MISSING_TYPE *)getSurface_center:(id)arg1;	// IMP=0x00000000001a1aaf
- (float)getSurface_height:(id)arg1;	// IMP=0x00000000001a1a03
- (float)getSurface_width:(id)arg1;	// IMP=0x00000000001a1957
- (MISSING_TYPE *)getSurface_e_height:(id)arg1;	// IMP=0x00000000001a1866
- (MISSING_TYPE *)getSurface_e_width:(id)arg1;	// IMP=0x00000000001a1775
- (void)merge_doors_on_same_wall:(id)arg1;	// IMP=0x00000000001a0cae
- (id)mergeDoors:(id)arg1;	// IMP=0x00000000001a0c65

@end

