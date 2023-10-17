//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSet.h>

@interface NSSet (FCAdditions)
+ (id)fc_unionOfSetsInArray:(id)arg1;	// IMP=0x005000000027c43e
+ (id)fc_set:(CDUnknownBlockType)arg1;	// IMP=0x005000000027b0a7
- (id)fc_setByRemovingObject:(id)arg1;	// IMP=0x001000000027c3be
- (id)fc_setByUnioningSet:(id)arg1;	// IMP=0x001000000027c33e
- (id)fc_setByMinusingSet:(id)arg1;	// IMP=0x001000000027c2be
- (id)fc_setByIntersectingSet:(id)arg1;	// IMP=0x001000000027c258
- (id)fc_dictionaryOfSortedSetsWithKeyBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000027bf6e
- (_Bool)fc_containsAnyObjectInArray:(id)arg1;	// IMP=0x001000000027be69
- (id)fc_arrayByTransformingWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000027bde6
- (id)fc_mutableSetByTransformingWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000027bbe2
- (id)fc_setByTransformingWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000027baa8
- (unsigned long long)fc_countOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000027b961
- (id)fc_arrayOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000027b713
- (id)fc_setOfObjectsPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000027b664
- (_Bool)fc_containsObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000027b631
- (id)fc_onlyObject;	// IMP=0x001000000027b4c1
- (id)fc_firstObjectPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x001000000027b36b
- (id)fc_diffAgainstSet:(id)arg1;	// IMP=0x001000000027b144
@end
