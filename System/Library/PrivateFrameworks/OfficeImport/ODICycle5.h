//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface ODICycle5
{
}

+ (_Bool)map2NodeWithState:(id)arg1;	// IMP=0x0080000000339fb0
+ (_Bool)map1NodeWithState:(id)arg1;	// IMP=0x0080000000339e29
+ (void)mapTransition:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;	// IMP=0x0080000000339ca9
+ (float)intersectionAngleNextToAngle:(float)arg1 isAfter:(_Bool)arg2 state:(id)arg3;	// IMP=0x00800000003399c9
+ (void)mapStyleForTransition:(id)arg1 shape:(id)arg2 state:(id)arg3;	// IMP=0x00800000003399af
+ (void)addShapeForTransition:(id)arg1 startAngle:(float)arg2 endAngle:(float)arg3 state:(id)arg4;	// IMP=0x0080000000339711
+ (float)normalizedAngle:(float)arg1;	// IMP=0x00800000003396dd
+ (void)mapNode:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;	// IMP=0x0080000000339620
+ (void)addShapeForNode:(id)arg1 relativeBounds:(struct CGRect)arg2 state:(id)arg3;	// IMP=0x008000000033950b
+ (struct CGRect)mapGSpaceWithState:(id)arg1;	// IMP=0x00800000003394e7
+ (struct CGSize)nodeSizeWithState:(id)arg1;	// IMP=0x0080000000339484

@end

