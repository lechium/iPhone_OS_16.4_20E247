//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSOrderedSet.h"

__attribute__((visibility("hidden")))
@interface __NSFrozenOrderedSetM : NSOrderedSet
{
    _Atomic struct __cow_state_t *cow;	// 8 = 0x8
    CDStruct_2595eaee storage;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000000e2245
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00600000000e1f2c
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e23ba
- (id)mutableCopy;	// IMP=0x00000000000e2317
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e2312
- (id)copy;	// IMP=0x00000000000e230d
- (void)dealloc;	// IMP=0x00000000000e224a
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000000e2160
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e2136
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x00000000000e20cc
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000000e2064
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000e1fdb
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x00000000000e1f3f
- (unsigned long long)count;	// IMP=0x00000000000e1f2f

@end
