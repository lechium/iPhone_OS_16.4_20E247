//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RSOnlineOfflineAssociation : NSObject
{
    struct RSOnlineOfflineAssociationCore _rsOnlineOfflineAssociationCore;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x00000000001c2c61
- (void).cxx_destruct;	// IMP=0x00000000001c2c5b
- (void)reset;	// IMP=0x00000000001c2c55
- (id)runWithOnlineFloorplan:(id)arg1 offlineFloorplan:(id)arg2 camDensity2D:(id)arg3 geoMetryMeta:(id)arg4;	// IMP=0x00000000001c196b
- (void)validateParentIdentifierOfWalls:(id)arg1;	// IMP=0x00000000001c1805
- (void)deduplicateSurfaceUUIDInFloorPlan:(id)arg1;	// IMP=0x00000000001c1624
- (void)deduplicateUUIDInSurfaces:(id)arg1 uuidSet:(id)arg2;	// IMP=0x00000000001c1371
- (id)init;	// IMP=0x00000000001c1342

@end
