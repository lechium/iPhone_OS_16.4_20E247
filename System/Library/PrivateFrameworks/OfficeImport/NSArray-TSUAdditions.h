//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (TSUAdditions)
+ (id)tsu_arrayWithNonNilObject:(id)arg1;	// IMP=0x008000000027c826
+ (id)tsu_arrayWithUIntegers:(const unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x008000000027b17b
+ (id)tsu_arrayByUnioningArray:(id)arg1 withArray:(id)arg2;	// IMP=0x008000000027b076
+ (id)tsu_arrayWithInts:(const int *)arg1 count:(unsigned long long)arg2;	// IMP=0x008000000027b042
+ (id)tsu_arrayWithCGFloats:(const double *)arg1 count:(unsigned long long)arg2;	// IMP=0x008000000027af2b
- (id)tsu_localizedList;	// IMP=0x001000000027c6a8
- (id)tsu_anyObject;	// IMP=0x001000000027c696
- (id)tsu_onlyObject;	// IMP=0x001000000027c5da
- (id)tsu_uniqueObjects;	// IMP=0x001000000027c5be
- (id)tsu_arrayByFlattening;	// IMP=0x001000000027c360
- (id)tsu_arrayByMappingObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000027c113
- (id)tsu_arrayByTransformingWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000027c04b
- (id)tsu_arrayOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000027bf4b
- (_Bool)tsu_isHomogeneousForClass:(Class)arg1;	// IMP=0x001000000027be49
- (_Bool)tsu_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000027bd3e
- (id)tsu_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000027bc19
- (void)tsu_enumerateSnapshotObjectsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000027bbd5
- (id)tsu_arrayByRemovingFirstObject;	// IMP=0x001000000027bad1
- (id)tsu_arrayByReversingOrder;	// IMP=0x001000000027b982
- (id)tsu_arrayByAddingNonContainedObjectsFromArray:(id)arg1;	// IMP=0x001000000027b852
- (id)tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;	// IMP=0x001000000027b74b
- (id)tsu_intersectionWithArray:(id)arg1;	// IMP=0x001000000027b5c2
- (id)tsu_arrayWithObjectsInSet:(id)arg1;	// IMP=0x001000000027b444
- (id)tsu_indexesOfObjects:(id)arg1;	// IMP=0x001000000027b2d6
- (unsigned long long)tsu_indexOfSmallestObject;	// IMP=0x001000000027b23b
- (id)tsu_objectPriorToObject:(id)arg1;	// IMP=0x001000000027b1ec
- (id)tsu_rangeCheckedObjectAtIndex:(unsigned long long)arg1;	// IMP=0x001000000027b1af
- (id)tsu_initWithUIntegers:(const unsigned long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000027b098
- (id)tsu_initWithInts:(const int *)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000027af5f
- (id)tsu_initWithCGFloats:(const double *)arg1 count:(unsigned long long)arg2;	// IMP=0x001000000027ae46
- (void)sfu_appendJsonStringToString:(id)arg1;	// IMP=0x001000000029c1c6
@end

