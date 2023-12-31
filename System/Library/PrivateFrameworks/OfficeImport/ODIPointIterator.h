//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ODIPointIterator : NSObject
{
}

+ (id)pointsForSpecification:(id)arg1 startingPoint:(id)arg2 isLast:(_Bool)arg3;	// IMP=0x00800000003423a4
+ (void)processFollowingSiblingAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;	// IMP=0x0080000000342add
+ (void)processChildAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;	// IMP=0x008000000034298b
+ (void)processSelfAxisFromPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;	// IMP=0x0080000000342978
+ (_Bool)isDoneForState:(struct ODIPointIteratorState *)arg1;	// IMP=0x0080000000342944
+ (_Bool)isPoint:(id)arg1 ofType:(int)arg2;	// IMP=0x008000000034286b
+ (_Bool)addPoint:(id)arg1 state:(struct ODIPointIteratorState *)arg2;	// IMP=0x00800000003427a5
+ (id)processAttributes:(id)arg1 startingPoint:(id)arg2 isLast:(_Bool)arg3;	// IMP=0x0080000000342546

@end

