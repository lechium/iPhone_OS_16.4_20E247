//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableSet.h"

__attribute__((visibility("hidden")))
@interface __NSSetM : NSMutableSet
{
    _Atomic struct __cow_state_t *cow;	// 8 = 0x8
    CDStruct_af6d7307 storage;	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000013c27a
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x006000000013b010
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013c6ab
- (id)mutableCopy;	// IMP=0x000000000013c5de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013c5a3
- (id)copy;	// IMP=0x000000000013c3fd
- (void)dealloc;	// IMP=0x000000000013c27f
- (void)removeObject:(id)arg1;	// IMP=0x000000000013bdfc
- (void)removeAllObjects;	// IMP=0x000000000013bc72
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000013bb94
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000013b9ee
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000013b8f9
- (double)clumpingInterestingThreshold;	// IMP=0x000000000013b8a1
- (double)clumpingFactor;	// IMP=0x000000000013b672
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x000000000013b535
- (_Bool)containsObject:(id)arg1;	// IMP=0x000000000013b3fb
- (void)addObject:(id)arg1;	// IMP=0x000000000013b013
- (void)_mutate;	// IMP=0x000000000013af82
- (id)objectEnumerator;	// IMP=0x000000000013af28
- (id)member:(id)arg1;	// IMP=0x000000000013adf3
- (unsigned long long)count;	// IMP=0x000000000013adaf

@end

