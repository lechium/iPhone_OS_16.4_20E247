//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSSet.h"

__attribute__((visibility("hidden")))
@interface __NSSingleObjectSetI : NSSet
{
    id element;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00600000000356f9
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00600000000353cf
- (void)dealloc;	// IMP=0x0000000000035704
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000356fe
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000035660
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000354bc
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000035450
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x0000000000035410
- (_Bool)containsObject:(id)arg1;	// IMP=0x00000000000353d2
- (id)objectEnumerator;	// IMP=0x000000000003538e
- (id)member:(id)arg1;	// IMP=0x0000000000035355
- (unsigned long long)count;	// IMP=0x000000000003534f

@end

