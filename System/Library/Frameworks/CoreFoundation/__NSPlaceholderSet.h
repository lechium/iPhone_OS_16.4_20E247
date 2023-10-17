//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableSet.h"

__attribute__((visibility("hidden")))
@interface __NSPlaceholderSet : NSMutableSet
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000003f1ee
+ (void)initialize;	// IMP=0x008000000003f1b8
- (void)dealloc;	// IMP=0x000000000003f43e
- (unsigned long long)retainCount;	// IMP=0x000000000003f436
- (oneway void)release;	// IMP=0x000000000003f435
- (id)retain;	// IMP=0x000000000003f431
- (id)init;	// IMP=0x000000000003f3e9
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x000000000003f3a1
- (id)initWithSet:(id)arg1 copyItems:(_Bool)arg2;	// IMP=0x000000000003f299
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000003f1f0
- (void)removeObject:(id)arg1;	// IMP=0x000000000003f0f9
- (void)addObject:(id)arg1;	// IMP=0x000000000003f03a
- (id)objectEnumerator;	// IMP=0x000000000003ef7b
- (id)member:(id)arg1;	// IMP=0x000000000003eebc
- (unsigned long long)count;	// IMP=0x000000000003edfd

@end
